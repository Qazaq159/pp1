#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a.begin(), a.end());
    int s = 0;
    int k;
    cin >> k;
    for(int i = n - 1; i >= n - k; i--)
        s += a[i];
    
    cout << s;
}