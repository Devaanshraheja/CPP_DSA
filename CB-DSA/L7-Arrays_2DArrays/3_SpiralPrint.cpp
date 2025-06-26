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

//     int top = 0;
//     int left = 0;
//     int bottom = n - 1;
//     int right = m - 1;
//     while (left <= right && top <= bottom){
//         for (int i = left; i <= right; i++){
//             cout << a[top][i] << " ";
//         }
//         top++;

//         for (int i = top; i <= bottom; i++){
//             cout << a[i][right] << " ";
//         }
//         right--;

//         if (top <= bottom){
//             for (int i = right; i >= left; i--){
//                 cout << a[bottom][i] << " ";
//             }
//             bottom--;
//         }

//         if (left <= right){
//             for (int i = bottom; i >= top; i--){
//                 cout << a[i][left] << " ";
//             }
//             left++;
//         }
//     }
// }
void spiralprint(int a[][100], int n , int m){
    // intitialize all the parameters
    int sr=0, sc=0, er=n-1,ec=m-1;
    // 1.1 print sr [sc to ec]
    // 1.1sr++
    while(sr<=er and sc<=ec){
    for(int col=0; col<m; col++){
        cout<<a[sr][col]<<" ";
        
    }
    sr++;
    // 2.1print ec[sr to er]
    // 2.2 ec--
    for(int row=sr; row<=er;row++){
        cout<<a[row][ec]<<" ";
       
    }
    ec--;
    // 3.1print er (ec to sc)
    // 3.2 er--
    for (int col=ec ;col>=sc;col--){
        cout<<a[er][col]<<" ";
       
    }
    er--;
    // 4.1print sc(er to sr)
    // 4.2 sc++
    for(int row=er;row>=sr;row--){
        cout<<a[row][sc]<<" ";
        
    }
    sc++;
}
    cout<<endl;

}
    
    int main(){
        int a[100][100];
        int r=4,c=4;
        int val=1;
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                a[i][j]=val;
                val++; 
            }
        }
        for(int i=0; i<r;i++){
            for(int j=0;j<c;j++){
                cout<<a[i][j]<<" ";
                
            }
            cout<<endl;
        }
        spiralprint(a, r,c);
    }
