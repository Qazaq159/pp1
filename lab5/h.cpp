#include<bits/stdc++.h>

using namespace std;

int a[10];

int main() {
    string s;
    cin >> s;
    set<int> b;

    for(int i = 0; i < s.size(); i++) {
        a[s[i] - '0']++;
    }
    for(int i = 0; i < 10; i++)
        b.insert(a[i]);
    
    if(b.size() == 2)
        cout << "YES";
    else    
        cout << "NO";

    return 0;
}