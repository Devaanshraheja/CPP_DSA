#include <iostream>
using namespace std;

// int main(){
//     #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("output.txt", "w", stdout);
//     #endif
//     int n, m;
//     cin >> n >> m;
//     int a[n][m];
//     int n0 = 1;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             a[i][j] = n0++;
//             cout << a[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int j = 0; j < m; j++){
//         if (j%2 == 0){
//             for (int i = 0; i < n; i++){
//                cout << a[i][j] << " ";
//             }
//         }else{
//             for (int i = n -1; i >= 0; i--){
//                 cout << a[i][j] << " ";
//             }
//         }
//     }
// }
int main(){
    int a[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
   
    for(int col =0;col<4;col++){
        if(col%2==0){
            for(int row=0;row<3;row++){
                cout<<a[row][col]<<" ";
            }
        }
        else{
            for(int row=2;row>=0;row--){
                cout<<a[row][col]<<" ";
            }
        }
    }

}