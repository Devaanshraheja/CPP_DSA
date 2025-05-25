#include<iostream>
using namespace std;
int dectobin(int DecNum){
    int ans=0;
    int pow=1;
    while(DecNum>0){
        int rem=DecNum%2;
        DecNum=DecNum/2;
        ans=ans+(rem*pow);
        pow*=10;
        
    }
    
   
    return ans;
}
    

int bintodec(int bin_num){
    int ans=0;
    int pow=1;// 2^0=1
    while(bin_num>0){
        int rem=bin_num%10;
        bin_num/=10;
        ans+=(rem*pow);
        pow=pow*2;
    }
    return ans;
}


int main(){

   for (int i = 0; i < 10; i++)
   {
    /* code */
    cout<<dectobin(i)<<endl;;
   }
   cout<<bintodec(101)<<endl;
   
}