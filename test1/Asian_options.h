#ifndef _asian_H
#define _asian_H


#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
#include <time.h>
#include <math.h>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;

class Asian_option{
    public:
        double S; // 標的價格
        double r; // 利率
        double q; // 股利率
        double K; // 執行價格
        double T; // 到期日
        double v; // volatility

        Asian_option(){
            S = 0;
            r = 0;
            q = 0;
            K = 0;
            T = 0;
            v = 0;
            cout<<"insufficient input!"<<endl;
        }
        Asian_option(double s0, double ar, double aq, double ak, double at, double asigma){
            S = s0;
            r = ar;
            q = aq;
            K = ak;
            T = at;
            v = asigma;
        }

        // getter
        double get_S() const {return S; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_K() const {return K; };
        double get_T() const {return T; };
        double get_sigma() const {return v; };

        // setter
        void set_S(double as) {S = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_K(double ak) {K = ak;};
        void set_T(double at) {T = at;};
        void set_sigma(double asigma) {v = asigma;};

        //計算整個price process的平均(期望值) 
        double VecMean (vector <double>x){
            int n = x.size ();
            double sum = 0.0;
            for (int i = 0; i <= n - 1; i++)
                sum += x[i];
            double xbar = sum / n;
            return xbar;
        }

        //normal distribution cdf
        double N(double x){
            return erfc(-x/sqrt(2))/2;
        }

        // Black Scholes model
        double BS (double S, double K, double v, double T, double r, double q, char PutCall){
        double d1 = (log (S / K) + (r - q + 0.5 * v * v) * T) / v / sqrt (T);
        double d2 = d1 - v * sqrt (T);
        double Call = S * exp (-q * T) * N (d1) - K * exp (-r * T) * N (d2);
        if (PutCall == 'C')
            return Call;
        else
            return Call - S * exp (-q * T) + K * exp (-r * T);
        }

        double call_price(){
            int Nsims = 1e7;  // 模擬次數
            double Z;   // error term N(0,1)
            vector < double >ST (Nsims, 0.0); // 給定存放價格S(T)的vector
            vector < double >ST_K (Nsims, 0.0); // 給定存放call payoff的vector
            double u1, u2; //用來進行轉換的uniform(0,1)變數
            double pi = 3.141592653589793;
            for (int i = 0; i <= Nsims - 1; i++) //創造出整段price process
                {
            // 創造出兩個獨立且介於[0,1)間的數
                u1 = ((double) rand () / ((double) (RAND_MAX) + (double) (1)));
                u2 = ((double) rand () / ((double) (RAND_MAX) + (double) (1)));
            // 避免後續轉換log function 發生錯誤 
                u1 = max (u1, 1.0e-10);
            // Z ~ N(0,1) by Box-Muller transformation
                Z = sqrt (-2.0 * log (u1)) * sin (2 * pi * u2);
                ST[i] = S * exp ((r - q - 0.5 * v * v) * T + v * sqrt (T) * Z); // Simulated price S(T)
                ST_K[i] = max (ST[i] - K, 0.0); // Call payoff
                }

            // Simulated prices as discounted average of terminal prices(蒙地卡羅)
            double BSCallSim = exp (-r * T) * VecMean (ST_K);
            return (BSCallSim);
        }
        
        double put_price(){
            int Nsims = 1e7;  // 模擬次數
            double Z;   // error term N(0,1)
            vector < double >ST (Nsims, 0.0); // 給定存放價格S(T)的vector
            vector < double >K_ST (Nsims, 0.0); // 給定存放put payoff的vector
            double u1, u2; //用來進行轉換的uniform(0,1)變數
            double pi = 3.141592653589793;
            for (int i = 0; i <= Nsims - 1; i++) //創造出整段price process
                {
            // 創造出兩個獨立且介於[0,1)間的數
                u1 = ((double) rand () / ((double) (RAND_MAX) + (double) (1)));
                u2 = ((double) rand () / ((double) (RAND_MAX) + (double) (1)));
            // 避免後續轉換log function 發生錯誤 
                u1 = max (u1, 1.0e-10);
            // Z ~ N(0,1) by Box-Muller transformation
                Z = sqrt (-2.0 * log (u1)) * sin (2 * pi * u2);
                ST[i] = S * exp ((r - q - 0.5 * v * v) * T + v * sqrt (T) * Z); // Simulated price S(T)
                K_ST[i] = max (K - ST[i], 0.0); // Put payoff
                }

            // Simulated prices as discounted average of terminal prices(蒙地卡羅)
            double BSPutSim = exp (-r * T) * VecMean (K_ST);
            return (BSPutSim);
        }
};
//標頭檔案內容
#endif