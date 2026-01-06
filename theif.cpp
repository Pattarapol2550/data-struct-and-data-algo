#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n;

int w;
cin >> n >>w;
int arr[n];
int sum=0;
for(int i=0;i<n;i++){
    cin >> arr[i];
    
}
for(int i=0;i<n;i++){
    sum += arr[i];
}
//cout << sum;
int diff = sum-w;
int p1=0 ,p2=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[i]+arr[j]==diff){
            p1 = i;
            p2 = j;
        }
    }
}
//cout << p1 <<p2;
cout << p1<<" "<<arr[p1]<<endl;
cout <<p2 <<" "<<arr[p2]<<endl;
    return 0;

}