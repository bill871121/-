#ifndef _american_H
#define _american_H
#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
#include <time.h>
#include <algorithm> // defines the max() operator
#include <vector> // STL vector templates
using namespace std;

class American_option{
    public:
        double S;
        double r;
        double q;
        double K;
        double T;
        double sigma;
        int step;

        American_option(){
            S = 0;
            r = 0;
            q = 0;
            K = 0;
            T = 0;
            sigma = 0;
            step = 100;
            cout<<"insufficient input!"<<endl;
        }
        American_option(double s0, double ar, double aq, double k, double t, double asigma, int n){
            S = s0;
            r = ar;
            q = aq;
            K = k;
            T = t;
            sigma = asigma;
            step = n;
        } 

        // getter
        double get_S() const {return S; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_K() const {return K; };
        double get_T() const {return T; };
        double get_sigma() const {return sigma; };
        double get_step() const {return step; };

        // setter
        void set_S(double as) {S = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_K(double ak) {K = ak;};
        void set_T(double at) {T = at;};
        void set_sigma(double asigma) {sigma = asigma;};
        void set_step(int n) {step = n;};

        double call_price() {
            double dt = T / step;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double p_up = (exp((r-q)*dt) - d) / (u - d);

            vector<double> prices(step + 1);
            prices[0] = S * pow(d, step);
            double uu = u * u;

            // fill all the conditions
            for (int i = 1; i <= step; ++i){
                prices[i] = uu * prices[i-1];
            }

            vector<double> call_price(step + 1);
            // payoff at maturity
            for (int i = 1; i <= step; ++i){
                call_price[i] = max<double>(0, prices[i] - K);
            }

            // backward induction
            for (int j = step - 1; j >= 0; --j){
                for (int i = 0; i<= step; ++i){
                    double value_if_HTM = (p_up * call_price[i+1] + (1-p_up) * call_price[i]) * exp(-r*dt);
                    prices[i] = d * prices[i + 1];
                    double value_if_early_exercise = prices[i] - K;
                    call_price[i] = max<double>(value_if_early_exercise, value_if_HTM);
                }
            }
            return call_price[0];
        };

        double put_price(){
            double dt = T / step;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double p_up = (exp((r-q)*dt) - d) / (u - d);

            vector<double> prices(step + 1);
            prices[0] = S * pow(d, step);
            double uu = u * u;

            // fill all the conditions
            for (int i = 1; i <= step; ++i){
                prices[i] = uu * prices[i-1];
            }

            vector<double> put_price(step + 1);
            // payoff at maturity
            for (int i = 1; i <= step; ++i){
                put_price[i] = max<double>(0, K - prices[i]);
            }

            // backward induction
            for (int j = step - 1; j >= 0; --j){
                for (int i = 0; i<= step; ++i){
                    double value_if_HTM = (p_up * put_price[i+1] + (1-p_up) * put_price[i]) * exp(-r*dt);
                    prices[i] = d * prices[i + 1];
                    double value_if_early_exercise = K - prices[i];
                    put_price[i] = max<double>(value_if_early_exercise, value_if_HTM);
                }
            }
            return put_price[0];
        }
};
//標頭檔案內容
#endif