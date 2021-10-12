#include<iostream>

using namespace std;

int a[123], b[123];

int main() {
    string s, t;
    cin >> s >> t;
    
    if(s.size() != t.size()) {
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < s.size(); i++)
        a[s[i]] += 1, b[t[i]] += 1;

    for(int i = 0; i < 123; i++)
        if(a[i] != b[i])
        {
            cout << "NO";
            return 0;
            
        }
    
    cout << "YES";

    return 0;
}