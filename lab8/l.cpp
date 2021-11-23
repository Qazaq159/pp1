#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    set<int> k;

    for(int i = 0; i < n; i++)
    {    
        cin >> a;
        k.insert(a);
    }
    cout << k.size()
}