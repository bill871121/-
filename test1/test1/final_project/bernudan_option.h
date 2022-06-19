#include <iostream>
#include <random>
#include <cmath>
#include <ctime>
#include <time.h>
#include <algorithm> // defines the max() operator
#include <vector> // STL vector templates
using namespace std;

class Bernudan_Call{
    public:
        double S;
        double r;
        double q;
        double K;
        double time;
        double sigma;

        Bernudan_Call(){
            S = 0;
            r = 0;
            q = 0;
            K = 0;
            time = 0;
            sigma = 0;
            cout<<"insufficient input!"<<endl;
        }
        Bernudan_Call(double s0, double ar, double aq, double k, double t, double asigma){
            S = s0;
            r = ar;
            q = aq;
            K = k;
            time = t;
            sigma = asigma;
        } 

        // getter
        double get_S() const {return S; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_K() const {return K; };
        double get_T() const {return time; };
        double get_sigma() const {return sigma; };

        // setter
        void set_S(double as) {S = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_K(double ak) {K = ak;};
        void set_T(double at) {time = at;};
        void set_sigma(double asigma) {sigma = asigma;};

        double price(const vector<double>& potential_exercise_times) {
            int steps = 1000;
            double delta_t= time / steps;
            double R = exp(r*delta_t);
            double Rinv = 1.0/R;  // discount factor
            double u = exp(sigma*sqrt(delta_t));
            double uu = u*u;
            double d = 1.0/u;
            double p_up = (exp((r - q) * delta_t) -d) / (u-d);
            double p_down = 1.0 - p_up;
            // build tree
            vector<double> prices(steps + 1);
            vector<double> call_values(steps + 1);

            vector<int> potential_exercise_steps;
            for (int i=0;i<potential_exercise_times.size();++i){
                double t = potential_exercise_times[i];
                if ( (t>0.0)&&(t<time) ) {
                potential_exercise_steps.push_back(int(t/delta_t));
                };
            };

            prices[0] = S*pow(d, steps); // fill in the endnodes.
            for (int i=1; i<=steps; ++i){prices[i] = uu*prices[i - 1];};
            for (int i=0; i<=steps; ++i){call_values[i] = max<double>(0.0, (prices[i] - K));};
            
            // backward induction
            for (int step=steps - 1; step >= 0; --step){
                bool check_exercise_this_step = false;
                for (int j = 0; j < potential_exercise_steps.size(); ++j){
                    if (step == potential_exercise_steps[j]){check_exercise_this_step = true;};
                
                };
                for (int i = 0; i <= step; ++i){
                    call_values[i] = (p_up * call_values[i+1] + p_down * call_values[i])*Rinv;
                    prices[i] = d* prices[i+1];
                    if(check_exercise_this_step) call_values[i] = max<double>(call_values[i],prices[i] - K);
                };
            };
            return call_values[0];
        };
};

class Bernudan_Put{
    public:
        double S;
        double r;
        double q;
        double K;
        double time;
        double sigma;

        Bernudan_Put(){
            S = 0;
            r = 0;
            q = 0;
            K = 0;
            time = 0;
            sigma = 0;
            cout<<"insufficient input!"<<endl;
        }
        Bernudan_Put(double s0, double ar, double aq, double k, double t, double asigma){
            S = s0;
            r = ar;
            q = aq;
            K = k;
            time = t;
            sigma = asigma;
        } 

        // getter
        double get_S() const {return S; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_K() const {return K; };
        double get_T() const {return time; };
        double get_sigma() const {return sigma; };

        // setter
        void set_S(double as) {S = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_K(double ak) {K = ak;};
        void set_T(double at) {time = at;};
        void set_sigma(double asigma) {sigma = asigma;};

        double price(const vector<double>& potential_exercise_times) {
            int steps = 1000;
            double delta_t= time / steps;
            double R = exp(r*delta_t);
            double Rinv = 1.0/R;  // discount factor
            double u = exp(sigma*sqrt(delta_t));
            double uu = u*u;
            double d = 1.0/u;
            double p_up = (exp((r - q) * delta_t) -d) / (u-d);
            double p_down = 1.0 - p_up;
            vector<double> prices(steps + 1);
            vector<double> put_values(steps + 1);

            vector<int> potential_exercise_steps;
            for (int i=0;i<potential_exercise_times.size();++i){
                double t = potential_exercise_times[i];
                if ( (t>0.0)&&(t<time) ) {
                potential_exercise_steps.push_back(int(t/delta_t));
                };
            };

            prices[0] = S*pow(d, steps); // fill in the endnodes.
            for (int i=1; i<=steps; ++i) prices[i] = uu*prices[i - 1];
            for (int i=0; i<=steps; ++i) put_values[i] = max<double>(0.0, (K - prices[i]));
            for (int step=steps - 1; step >= 0; --step){
                bool check_exercise_this_step = false;
                for (int j = 0; j < potential_exercise_steps.size(); ++j){
                    if (step == potential_exercise_steps[j]){check_exercise_this_step = true;};
                
                };
                for (int i = 0; i <= step; ++i){
                    put_values[i] = (p_up * put_values[i+1] + p_down * put_values[i])*Rinv;
                    prices[i] = d* prices[i+1];
                    if(check_exercise_this_step) put_values[i] = max<double>(put_values[i],K-prices[i]);
                };
            };
            return put_values[0];
        };
};