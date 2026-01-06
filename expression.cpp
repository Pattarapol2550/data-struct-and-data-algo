#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
double x;
cin >>x;
long double p1 =sqrt(x*x+pow(cos(x*M_PI/180),2))/(sin(x*M_PI/180)+(pow(cos(x*M_PI/180),3))/(x*x+1));
cout << fixed << setprecision(1)<<p1;
    return 0;
}