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
    
    int val;

    cin >> val;

    a.erase(a.begin() + val);
    
    for(int i = 0; i < n - 1; i++)
        cout << a[i] << " ";
    
}