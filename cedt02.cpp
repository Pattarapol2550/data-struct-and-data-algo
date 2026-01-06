#include <bits/stdc++.h>

using namespace std; 
void scale(int a,int k){
    
} 
int main(){
    int m ; 
    int n ; 
    cin >> m >> n ;
    vector<vector<int>> matrix(m, vector<int>(n));
    
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin >> matrix[i][j];
        }
    }
    int command;
   
    while(command != -1){

        cin >> command;
    if(command == 1){
        int a,k;
        cin >> a >> k;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i==a-1){
                    matrix[i][j] *= k;
                }
            }
        }
        
    }
if(command == 2){
        int a,b,k;
        cin >> a >> b >> k;
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
               if(i==a-1){
                matrix[i][j] += (k*matrix[b-1][j]);
               }
        }
    }
}
if(command==3){
    int a,b;
    cin >> a >> b;
    for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
           if(i==a-1){
            swap(matrix[a-1][j],matrix[b-1][j]);
           }
          
    }
    }

    }
/*for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/
}
for(int i = 0 ; i < m ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}