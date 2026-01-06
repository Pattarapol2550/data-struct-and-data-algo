#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    long double z;
    cin >> z;
    long double arr[3000005];
    long double count = 0;
    while(true){
        int x;
        cin >> x;
        if(x==-1){
            break;

        }
        arr[(int)count] = x;
        count++;
    }
    long double sum = 0;
    long double sum2=0;
    
    long double n = count;
   // cout << count;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        sum2 += (arr[i]*arr[i])/(long double)n;
    }
    long double x_bar = sum/n;
    long double sd = sqrtl((sum2) - (x_bar*x_bar));
    long double result = (z*sd)+x_bar;
    cout << fixed << setprecision(5) << result << endl;
    return 0;
}