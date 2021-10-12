#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    char a;
    int n;
    cin >> s >> a >> n;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == a)
            n--;
    }

    if(n == 0)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";

    return 0;
}