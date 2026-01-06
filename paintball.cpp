#include <bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin >> n >> m;
char arr[n][m];
for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        arr[i][j] = '-';

    }
}
int k;
cin >> k;
int x,y,r;
char color;
char arr_color[k];
int arr_r[k];
int arr_x[k];
int arr_y[k];
for(int i = 0 ; i < k ; i++){

cin >> color>> r >> x >> y;
//arr[x][y] = color;
arr_color[i]=color;
arr_r[i]=r;
arr_x[i]=x;
arr_y[i]=y;

}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        //arr[arr_x[i]][arr_y[i]]=arr_color[i];
        for(int p=0;p<k;p++){
            if(abs(arr_x[p]-i)+abs(arr_y[p]-j) <= arr_r[p]){
                arr[i][j]=arr_color[p];
            }
        }
    }

}
for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m ; j++){
        cout << arr[i][j]<<" ";
    }cout << endl;
}
    return 0;
}