#include<iostream>
using namespace std;
void readline(char a[],  char delimiter){
    int ch=cin.get();
    int i=0;
    while(ch!='\n'){
        a[i]=ch;
        i++;
        ch=cin.get();
    }
    a[i]='\0'; // last mein null dalna padta to end the string
}
int main(){
    char a[100];
    // cin ignores whitespaces 
    // cin>>a
    readline(a,'\n');
    cin.getline(100)
    cout<<a<<endl;
}