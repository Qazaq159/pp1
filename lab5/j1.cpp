#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    
    cin >> s;
    
    string k = "", z = "";
    
    for(int i = 0; i < s.size(); i++){
        if(i < s.size() / 2)
            k += s[i];
        else    
            z += s[i];
    }

    if(s.size() % 2 == 1)
        k += z[0];
    
    //reverse(k.begin(), k.end());

    for(char i = 'a'; i <= 'z'; i++) {
        
    }

    cout << k << " " << z;
 
}
