#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Lookback_Option{
    public:
        double S;
        double r;
        double q;
        double T;
        double sigma;
        int n;

        // non-parameters
        Lookback_Option(){
            S = 0;
            r = 0;
            q = 0;
            T = 0;
            sigma = 0;
            n = 0;
            cout<<"insufficient input!"<<endl;
        }
        // with parameters
        Lookback_Option(double s0, double ar, double aq, double t, double asigma, double an){
            S = s0;
            r = ar;
            q = aq;
            T = t;
            sigma = asigma;
            n = an;
        } 
        
        // getter
        double get_S() const {return S; };
        double get_r() const {return r; };
        double get_q() const {return q; };
        double get_T() const {return T; };
        double get_sigma() const {return sigma; };

        // setter
        void set_S(double as) {S = as;};
        void set_r(double ar) {r = ar;};
        void set_q(double aq) {q = aq;};
        void set_T(double at) {T = at;};
        void set_sigma(double asigma) {sigma = asigma;};

        // Pricing function
        double eur_put_price() {
            double dt = T/n;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double mu = exp((r-q)*dt);
            // prob_of_up_ adjusted prob measure
            double p_up = (mu * u - 1) / (mu * (u-d));

            // find V(k,tj): consider Stock price, not money, as the numeraire
            double V[101][101];

            // terminal node for V
            for (int row=0; row<= n; row++){
                int k = n - row;  // row由上而下為0,1,2,...,n； k則由上而下為n,n-1,....,0
                V[row][n] = max<double>(pow(u, k) - 1, 0); //上三角的部分，row由上而下代表 up越多
            }

            // backward induction
            for (int col = n-1; col >= 0; col--){
                for (int row = 0 ; row <= n; row++){
                    if (row < col){
                        // 處理V(k,tj) for k >= 1
                        V[row][col] = (p_up * V[row+2][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                    }
                    else if (row == col){
                        // 處理V(0,tj)
                        V[row][col] = (p_up * V[row+1][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                    }
                }
            }

            double lookback_EURput = S * V[0][0];
            return lookback_EURput;
        }

        double eur_call_price() {
            double dt = T/n;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double mu = exp((r-q)*dt);
            // prob_of_up_ adjusted prob measure
            double p_up = (mu * u - 1) / (mu * (u-d));

            // find V(k,tj): consider Stock price, not money, as the numeraire
            double V[101][101];

            // terminal node for V
            for (int row=0; row<= n; row++){
                int k = n - row;  // row由上而下為0,1,2,...,n； k則由上而下為n,n-1,....,0
                V[row][n] = max<double>(1 - pow(u, -k), 0); // call
            }

            // backward induction
            for (int col = n-1; col >= 0; col--){
                for (int row = 0 ; row <= n; row++){
                    if (row < col){
                        // 處理V(k,tj) for k >= 1
                        V[row][col] = (p_up * V[row+2][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                    }
                    else if (row == col){
                        // 處理V(0,tj)
                        V[row][col] = (p_up * V[row+1][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                    }
                }
            }

            double lookback_EURcall = S * V[0][0];
            return lookback_EURcall;
        }
        
        double am_put_price() {
            double dt = T/n;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double mu = exp((r-q)*dt);
            // prob_of_up_ adjusted prob measure
            double p_up = (mu * u - 1) / (mu * (u-d));

            // find V(k,tj)
            double V[101][101];

            // terminal node for V
            for (int row=0; row<= n; row++){
                int k = n - row; // row由上而下為0,1,2,...,n； k則由上而下為n,n-1,....,0
                V[row][n] = max<double>(pow(u, k) - 1, 0);
            }

            // backward induction: decide whether early exercise is better?
            for (int col = n-1; col >= 0; col--){
                for (int row = 0 ; row <= n; row++){
                    if (row < col){
                        int k = col - row; //為early exercise對應到的u的次方數
                        double V_if_HTM = (p_up * V[row+2][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt)); //處理V(k,tj) for k >= 1
                        double V_if_early_exercise = pow(u, k) - 1;
                        V[row][col] = max<double>(V_if_HTM, V_if_early_exercise);
                    }
                    else if (row == col){
                        int k = 0;
                        double V_if_HTM = (p_up * V[row+1][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt)); //處理V(0,tj)
                        double V_if_early_exercise = pow(u, k) - 1;
                        V[row][col] = max<double>(V_if_HTM, V_if_early_exercise);
                    }
                }
            }

            double lookback_AMput = S * V[0][0];
            return lookback_AMput;
        }
        
        double am_call_price() {
            double dt = T/n;
            double u = exp(sigma * sqrt(dt));
            double d = 1/u;
            double mu = exp((r-q)*dt);
            // prob_of_up_ adjusted prob measure
            double p_up = (mu * u - 1) / (mu * (u-d));

            // find V(k,tj)
            double V[101][101];

            // terminal node for V
            for (int row=0; row<= n; row++){
                int k = n - row; // row由上而下為0,1,2,...,n； k則由上而下為n,n-1,....,0
                V[row][n] = max<double>(1 - pow(u, -k), 0); // call
            }

            // backward induction: decide whether early exercise is better?
            for (int col = n-1; col >= 0; col--){
                for (int row = 0 ; row <= n; row++){
                    if (row < col){
                        int k = col - row; //為early exercise對應到的u的次方數
                        //處理V(k,tj) for k >= 1
                        double V_if_HTM = (p_up * V[row+2][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                        double V_if_early_exercise = pow(u, k) - 1;
                        V[row][col] = max<double>(V_if_HTM, V_if_early_exercise);
                    }
                    else if (row == col){
                        int k = 0;
                        //處理V(0,tj)
                        double V_if_HTM = (p_up * V[row+1][col+1] + (1-p_up) * V[row][col+1]) * mu / (exp(r*dt));
                        double V_if_early_exercise = pow(u, k) - 1;
                        V[row][col] = max<double>(V_if_HTM, V_if_early_exercise);
                    }
                }
            }
            double lookback_AMcall = S * V[0][0];
            return lookback_AMcall;
        }
};
