#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    int so = 0, se = 0;

    for(int i = 0; i < s.size(); i++)
        if(i % 2 == 0)
            so += s[i] - '0';
        else
            se += s[i] - '0';    

    if(so == se)
        cout << "YES";
    else    
        cout << "NO";


    return 0;
}