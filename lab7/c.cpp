#include<iostream>

using namespace std;

string find(int a[], int t, int n){
    if(a[n] == t)
        return "Yes";
    else if(n != 0)
        return find(a, t, n - 1);
    return "No";
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int t;
    cin >> t;

    cout << find(a, t, n - 1);
}