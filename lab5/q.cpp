#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, t;
    cin >> t >> s;
    
    if(s.size() < t.size()){
        cout << "NO";
        return 0;
    }
    int j = 0;
    while(j != s.size() - t.size()) {
        string h = "";
        for(int i = j; i < t.size() + j; i++){
            h += s[i];
        }
        if(h != t){
            cout << "NO";
            return 0;
        }
        if(j + t.size() < s.size()){
            j += t.size();
        }
    
    }

    cout << "YES";
    return 0;
}