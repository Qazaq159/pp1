#include<bits/stdc++.h>

using namespace std;

int main() {
    string s, t, xx = "";
    cin >> t >> s;
 
        int x = s.find(t);
        if(x == string::npos && s.size()){
            
        }
        xx = "";
        for(int i = x + t.size(); i < s.size(); i++) {
            xx += s[i];
        }


    return 0;
}