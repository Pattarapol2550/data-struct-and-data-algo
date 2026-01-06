#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int ans=0;
    for(int l=0;l<n;l++){
        bool seen[200]={false};
        bool has1 = false;
        
        int mx=0;
        for(int r=l;r<n&&r<l+200;r++){
            int x = a[r];
            if(x<1||x>100) break;
            if(seen[x]){
                break;
            }
            seen[x]=true;

            if(x==1) has1 = true;
            if(x > mx) mx=x;
            int len = r-l+1;
            if(has1 && mx==len){
                //cout << len;
                ++ans;
            }
        }
    }
    cout << ans;
    return 0;
}