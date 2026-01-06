#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
int n;
cin >> n;
string s;
cin.ignore();
getline(cin,s);
istringstream ss(s);
string x;
while(ss>>x){

}
string c;
int count=0;
int start=1;
int sum=0;
for(int i=0;i<s.length();i++){
if(s[i]==' '){
    count=i;
c=s.substr(start,count-start);
sum+=stoi(c);
start=i+2;
}

}
//cout << sum;
string k=s.substr(s.size()-2,2);
int h=stoi(k);
sum+=h;
cout <<sum*n;
    return 0;
}