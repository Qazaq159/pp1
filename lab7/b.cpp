#include<iostream>
#include<string>

using namespace std;

string s = "";

string bin(int n){
    if(n == 0)
        return s;
    s = char(n % 2 + 48) + s;
    return bin(n/2);
}

int main(){
    int n;
    cin >> n;
    cout << bin(n);
}