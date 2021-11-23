#include<bits/stdc++.h>

using namespace std;

string kk(int n){
    if(n == 1)
        return "Yes";

    if(n % 2 == 1)
        return "No";
    else
        return kk(n / 2);
}

int main(){
    long double n;
    cin >> n;
    cout << kk(n);
}
