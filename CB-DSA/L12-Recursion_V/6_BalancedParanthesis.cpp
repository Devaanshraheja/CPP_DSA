#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > answer;
void Paranthesis(string ans, string right, string left, int i = 0, int j = 0){
    if (i == right.size() && j == left.size()){
        answer.push_back(ans);
    }

    

}

int main(){
    int n;
    cin >> n;

    string right;
    for (int i = 0; i < n; i++){
        right += '(';
    }

    string left;
    for (int i = 0; i < n; i++){
        left += ')';
    }
    vector<int> ans;
    Paranthesis(ans, right, left);
}