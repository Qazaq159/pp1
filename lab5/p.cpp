#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != 'z')
            s[i] = char((int)s[i] + 1);
        else
            s[i] = 'a';
    }
    cout << s; 
}