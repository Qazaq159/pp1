#include<bits/stdc++.h>

using  namespace std;

int eq(int* a, int* b, int n) {
    sort(a, a + n);
    sort(b, b + n);
    int k = 0;
    
    for(int i  = 0; i < n; i++) {
        if(a[i] == b[i])
            k++;
    }

    return k;
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        cin >> b[i];

    cout << eq(a, b, n);
}