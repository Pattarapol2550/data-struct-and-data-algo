#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int two=0,three=0,five=0,seven=0;
int n,m;
cin >>n>>m;
int i;
if(n>m){
    swap(n,m);
    i=n;
}else i=n;
//cout <<i;

while(i<=m){
    if(i%2==0) two++;
    if(i%3==0) three++;
    if(i%5==0) five++;
    if(i%7==0) seven++;
    i++;


}
//else{
    int sum;
    float avr;
 sum=two+three+five+seven;
 avr = (sum/m)-n;
 float tmp,a=0,b=0,c=0,d=0;
 tmp = two+three;


 if(tmp/2<two){
     a=(sum/2)+avr;
    b+=(a/3)*7;
    c+=(a/5)*2;
    d+=(a/7)*3;
    tmp *= (tmp*3)/2;
 while(tmp/2 <two){
    a=(sum/2)+avr;
    b+=(a/3)*7;
    c+=(a/5)*2;
    d+=(a/7)*3;
    tmp *= (tmp*3)/2;
 }
if(tmp/2>=two){
    while(d<b+c){
        d*=(a*10)-(b+c);
    }
    if(d>b+c){
        cout <<fixed<<setprecision(3);
        std::cout <<"Divisible by 2 : "<<two <<std::endl;
        std::cout <<"Divisible by 3 : "<<three <<std::endl;
        std::cout <<"Divisible by 5 : "<<five <<std::endl;
        std::cout <<"Divisible by 7 : "<<seven <<std::endl;
        std::cout <<"sum : "<<sum <<std::endl;
        std::cout <<"a : "<<a <<std::endl;
         std::cout <<"b : "<<b <<std::endl;
          std::cout <<"c : "<<c <<std::endl;
           std::cout <<"d : "<<d <<std::endl;
           return 0;
           
    }
}

}
if(tmp/2 >= two){
a=((sum/2)%3 )+avr;
b+=(a/3);
    c+=(a/5);
    d+=(a/7);

while(a*b>=c*d){
tmp-=(a-b-c)/2;
a=((sum/2)%3 )+avr;
b+=(a/3);
    c+=(a/5);
    d+=(a/7);
}
if(a*b<c*d){
     while(d<b+c){
        d*=(a*10)-(b+c);
    }
    if(d>b+c){
        cout<<fixed<<setprecision(3);
        std::cout <<"Divisible by 2 : "<<two <<std::endl;
        std::cout <<"Divisible by 3 : "<<three <<std::endl;
        std::cout <<"Divisible by 5 : "<<five <<std::endl;
        std::cout <<"Divisible by 7 : "<<seven <<std::endl;
        std::cout <<"sum : "<<sum <<std::endl;
        std::cout <<"a : "<<a <<std::endl;
         std::cout <<"b : "<<b <<std::endl;
          std::cout <<"c : "<<c <<std::endl;
           std::cout <<"d : "<<d <<std::endl;
           return 0;
    }
}

}

//}
    return 0;
}