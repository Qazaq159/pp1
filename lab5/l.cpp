#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    if(s.size() == 1) {
        cout << "YES";
        return 0;
    }

    s[0] = tolower(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
       if(s[i] != char((int)s[i - 1] + 1)) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}