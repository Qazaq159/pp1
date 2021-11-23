#include<bits/stdc++.h>

using namespace std;

void far(int* a, int* b, int n) {
    int c[n]; 
    for(int i = 0; i < n; i++) {
        c[i] = abs(a[i] - b[i]);
        cout << c[i] << " "; 
    }
    
}

int main() {
    int n;
    cin >> n;
    int a[n], b[n];

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
        cin >> b[i];
        
    far(a, b, n);
}