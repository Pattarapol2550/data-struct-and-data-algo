/*#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
int price;
cin >> price;
string s;
cin.ignore();
while(getline(cin,s)){
    if(s.empty()){
break;
    }
}


    return 0;
}*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
int n;
cin >> n;

cin.ignore();
string s;

long long sum=0;


while(getline(cin,s)){
    if(s.empty()) break;
    istringstream ss(s);
    string x;
    while(ss>>x){
        long long val=0;
    bool hasdigit = false;
for(auto e:x){
    if(isdigit(e)){
        val = val*10 +(e-'0');
        hasdigit=true;
    }
}
if(hasdigit){
    sum+=val;
}
}
}
cout << sum*n;
    return 0;
}