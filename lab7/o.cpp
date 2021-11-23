#include<bits/stdc++.h>

using namespace std;

string st(int n, int k, string s) {
    if (n == 0) 
        return s;
    
    if (n % k >= 10) 
        s = char((n%k)+55) + s;
    else 
        s = char((n%k)+48) + s;
    
    return st(n/k, k, s);
}

int main() {
    int n, k; 
    cin >> n >> k;
    cout << st(n, k, "");    
}