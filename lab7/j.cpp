#include<iostream>
#include<string>

using namespace std;

int s = 0;

int pit(int n) {
    if(n == 0)
        return s;
    s += (n % 10) / 2;
    return pit(n / 10)
}

int main(){
    int n;
    cin >> n;
    cout << pit(n);
}