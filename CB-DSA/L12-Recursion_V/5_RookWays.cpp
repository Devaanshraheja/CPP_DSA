#include<iostream>
using namespace std;

int Rookways(int i, int j){
    if (i == 0 && j == 0){
        return 1;
    }

    if (i < 0 || j < 0){
        return 0;
    }
    
    // int right = 0;
    // for (int a = 0; a < j ; a++){
    //     right += Rookways(i, a);
    // }

    // int down = 0;
    // for (int b = 0; b < i; b++){
    //     down += Rookways(b, j);
    // }

    int right = 0;
    if (j >= 0){
        right += Rookways(i, j-1);
    }
    int down = 0;
    if (i >= 0){
        down += Rookways(i-1, j);
    }

    return right + down;
}

int main(){
    cout << Rookways(3,3) << endl;
}