#include<iostream>
#include<string>

using namespace std;

int summ(string n, int k){
    if(k == 0)
        return n[k] - '0';

    return ((n[k] - '0') + summ(n, k - 1));

}

int main(){
    string n; 
    cin >> n;
    int k = n.size() - 1;
    cout << summ(n, k);
}