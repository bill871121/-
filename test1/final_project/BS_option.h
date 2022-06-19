#include <iostream>
#include <random>
#include <cmath>
using namespace std;

class BS_Option{
    public:
        double S0;
        double r;
        double q;
        double K;
        double T;
        double Sigma;

        BS_Option(){
            S0 = 0;
            r = 0;
            q = 0;
            K = 0;
            T = 0;
            Sigma = 0;
            cout<<"insufficient input!"<<endl;
        }
        BS_Option(double s0, double ar, double aq, double k, double t, double sigma){
            S0 = s0;
            r = ar;
            q = aq;
            K = k;
            T = t;
            Sigma = sigma;
        }

        // getter
        double get_S() const {return S0; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_K() const {return K; };
        double get_T() const {return T; };
        double get_sigma() const {return Sigma; };

        // setter
        void set_S(double as) {S0 = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_K(double ak) {K = ak;};
        void set_T(double at) {T = at;};
        void set_sigma(double asigma) {Sigma = asigma;};

        // standard normal cdf
        double stdNormalCdf(double x){
            return erfc(-x/sqrt(2))/2; // error function
        }

        // BS european call
        double call_price(){
            double d1 = (log(S0 * exp(-q*T)) - log(K * exp(-r*T)))/(Sigma*sqrt(T)) + 0.5*Sigma*sqrt(T);
            double d2 = d1 - Sigma*sqrt(T);
            double call = S0 * exp(-q*T) * stdNormalCdf(d1) - K * exp(-r*T) * stdNormalCdf(d2);
            return call;
        }
        // BS european put 
        double put_price(){
            double d1 = (log(S0 * exp(-q*T)) - log(K * exp(-r*T)))/(Sigma*sqrt(T)) + 0.5*Sigma*sqrt(T);
            double d2 = d1 - Sigma*sqrt(T);
            double put = K * exp(-r*T) * stdNormalCdf(-d2) - S0 * exp(-q*T) * stdNormalCdf(-d1);
            return put;
        }
};
