#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string k = s;
    reverse(k.begin(), k.end());

    if(s == k)
        cout << "YES";
    else    
        cout << "NO";

    return 0;
}