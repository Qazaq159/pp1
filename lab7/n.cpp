#include<iostream>

using namespace std;

string isc(int t[], int n, int k, int i, int j){
    if(i >= n)
        return "no";
    
    if(j >= n)
        return isc(t, n, k, i + 1, i + 2);

    if(abs(t[i] - t[j]) <= k)
        return "cheater";
    else {    
        j++;
        return isc(t, n, k, i, j);
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    int t[n];
    for(int i = 0; i < n; i++)
        cin >> t[i];
    
    cout << isc(t, n, k, 0, 1);
}