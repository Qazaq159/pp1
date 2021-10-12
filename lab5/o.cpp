#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    for(int i = 123; i >= 97; i--){
        for(int j = 0; j < s.size(); j++)
            if(s[j] == char(i)){
                cout << char(i);
                return 0;
            }
    }
}