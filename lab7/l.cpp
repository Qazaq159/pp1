#include<bits/stdc++.h>
 
using namespace std;

string isp(string s, int n, int e){
    if(n == e)
        return "Yes";
    
    if(s[n] != s[e])
        return "No";
    
    return isp(s, n + 1, e - 1);
}

int main(){
    string s;
    cin >> s;
    cout << isp(s, 0, s.size() - 1);
}