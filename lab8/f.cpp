#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int k, aa;

    cin >> k >> aa;
    
    a.insert(a.begin() + k, aa);

    for(int i = 0; i < n + 1; i++)
        cout << a[i] << " ";
    
}