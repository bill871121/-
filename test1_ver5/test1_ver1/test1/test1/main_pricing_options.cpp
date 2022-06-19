#include <iostream>
#include <vector>
#include <cmath> // standard C mathematical library
#include <algorithm> // defines the max() operator
using namespace std;

#include "Asian_options.h"
#include "bernudan_option.h"
#include "BS_option.h"
#include "lookback_option.h"

int main(int argc, char const *argv[])
{
    // input
    double cost = 0;  // compute cost
    int demand = 0;   // choose type 

    // bermudan option can be exercised quarterly (3 months = 0.25 years)
    cout<<"Following are the types of option that you can choose:"<<endl;
    cout<<"1. vanilla call  2. vanilla put  3. asian call  4. asian put  5. european lookback call  6. european lookback put \n";
    cout<<"7. american lookback call  8. american lookback put  9. bermudan call  10. bermudan put \n";
    cout<<"enter what kind of option you want to buy or sell (at the end, please enter 0): ";
    cin>>demand;

    // 宣告變數
    int same_input = 0;
    double S0, K, r, q, sigma, T; 
    int n ;

    while(demand != 0){
        if (same_input == 0){
            cout<<"Please enter following parameters that you want: \n";
            cout<<"enter Stock price at t = 0: ";
            cin>>S0;
            cout<<"enter strike price: ";
            cin>>K;
            cout<<"enter r (riskfree rate): ";
            cin>>r;
            cout<<"enter q (dividend rate): ";
            cin>>q;
            cout<<"enter sigma (volatility): ";
            cin>>sigma;
            cout<<"enter T (maturity): ";
            cin>>T;
            cout<<"enter time steps (at most 100): "; // n at most 100 steps
            cin>>n;
        }    
        int num;
        cout<<"enter how many you want to buy (enter positive number) or sell (enter negative number): ";
        cin>>num;

        if (demand == 1){
            BS_Option bs(S0, r, q, K, T, sigma);
            cost = cost + num * bs.call_price();
        }
        else if (demand == 2){
            BS_Option bs(S0, r, q, K, T, sigma);
            cost = cost + num * bs.put_price();
        }
        else if (demand == 3){
            Asian_option asian(S0, r, q, K, T, sigma);
            cost = cost + num * asian.call_price();
        }
        else if (demand == 4){
            Asian_option asian(S0, r, q, K, T, sigma);
            cost = cost + num * asian.put_price();
        }
        else if (demand == 5){
            Lookback_Option lookback(S0, r, q, T, sigma, n);
            cost = cost + num * lookback.eur_call_price();
        }
        else if (demand == 6){
            Lookback_Option lookback(S0, r, q, T, sigma, n);
            cost = cost + num * lookback.eur_put_price();
        }
        else if (demand == 7){
            Lookback_Option lookback(S0, r, q, T, sigma, n);
            cost = cost + num * lookback.am_call_price();
        }
        else if (demand == 8){
            Lookback_Option lookback(S0, r, q, T, sigma, n);
            cost = cost + num * lookback.am_put_price();
        }
        else if (demand == 9){
            Bernudan_Call bcall(S0, r, q, K, T, sigma);
            vector<double> potential_exercise_times;
            double exercise_time = 0.25;
            while (exercise_time < T){
                potential_exercise_times.push_back(exercise_time);
                exercise_time += 0.25;
            }
            cost = cost + num * bcall.price(potential_exercise_times);
        }
        else if (demand == 10){
            Bernudan_Put bput(S0, r, q, K, T, sigma);
            vector<double> potential_exercise_times;
            double exercise_time = 0.25;
            while (exercise_time < T){
                potential_exercise_times.push_back(exercise_time);
                exercise_time += 0.25;
            }
            cost = cost + num * bput.price(potential_exercise_times);
        }
        else{
            cout<<"something trouble, please enter again!";
            continue;
        }

        cout<<"enter what kind of option you want to buy or sell (at the end, please enter 0): ";
        cin>>demand;
        if (demand != 0){
            cout<<"Same input as before (enter 1 (true) or  0 (false)): ";
            cin>>same_input;
        }
    }

    cout<<"......................."<<endl;
    cout<<"At all, the total cost of this deal is = "<<cost<<endl;  
    return 0;
}