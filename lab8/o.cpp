#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    
    transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return tolower(c); });


    sort(s.begin(), s.end());
    
    set<char> al;
    for(int i = 0; i < s.size(); i++)
        al.insert(s[i]);
    
    
    cout << al.size() << endl;
    for(auto it = al.begin(); it != al.end(); ++it)
        cout << *it << " ";
}