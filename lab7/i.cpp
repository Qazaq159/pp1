#include<iostream>

using namespace std;

int n;

int inp(int s){
    cin >> n;
    if(n == 0)
        return s;
    s += n;

    return inp(s);

}

int main(){
    cout << inp(0);
}