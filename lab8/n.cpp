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
        if(a % 2 == 1)
            k.insert(a);
    }
    
    for(auto it = k.begin(); it != k.end(); ++it)
        cout << *it << " ";
    
}