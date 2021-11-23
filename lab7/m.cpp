#include<iostream>

using namespace std;

int to(int n, int s){
    if(n == s)
        return n;

    cout << s << " ";

    return to(n, s + 1);

}

int main(){
    int n;
    cin >> n;
    cout << to(n, 1);
}