#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int s = 0, k = 0;

int pit(string n) {
    if(k == n.size())
        return s;

    s = max(s, (n[k] - '0') % 10);
    k++;
    return pit(n);

}

int main(){
    string n;
    cin >> n;
    cout << pit(n);
}