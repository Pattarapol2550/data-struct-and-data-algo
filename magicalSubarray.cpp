#include <iostream>

#include<vector>
using namespace std;
int main(){
int n;
cin >> n;
vector<int> a(n);
for(int i=0;i<n;i++){
    cin >> a[i];
}
int ans = 0;
for(int l=0;l<n;l++){
    bool seen[101] = {false};
    int maxv=0;
    bool has1 = false;
    for(int r=l;r<n&&r<l+100;r++){
        int x = a[r];
        if(x<1 || x>100){
            break;
        }
        if(seen[x]){
            break;
            
        } seen[x]=true;

        if(x==1) has1 = true;
        if(x>maxv) maxv = x;
        int len = r-l+1;

        if(has1 && maxv==len){
            ++ans;
        }
        
    }
}
cout << ans;
    return 0;
}