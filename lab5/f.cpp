#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a, b;
    cin >> s >> a >> b;

    cout << s.substr(a, b - a + 1);

    return 0;
}