#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    s += 'c';

    for(int i = 1; i < s.size() / 2; i++) {
        if(s[i] != s[s.size() - 1 - i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}