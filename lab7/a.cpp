#include<iostream>

using namespace std;

int pow(int n){
    if(n == 0)
        return 1;
    if(n == 1)
        return 2;
    return 2 * pow(n - 1);
}

int main(){
    int n;
    cin >> n;
    cout << pow(n);
}