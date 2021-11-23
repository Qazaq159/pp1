#include<bits/stdc++.h>

using namespace std;

int pt(string n, int k, int c)
{
    if(k == -1){
        return c;
    }
    c += (n[k] - '0' + 1) % 2;
    
    return pt(n, k - 1, c);
}
int main(){
    string n;
    cin >> n;
    
    int k = n.size() - 1;

    cout << pt(n, k, 0);
}