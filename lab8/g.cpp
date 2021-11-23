#include<bits/stdc++.h>

using namespace std;

bool IsPrime(long long x){
	if(x%2==0)  
        return false;
	
    for(int i=3;i*i<=x;i+=2)
		if(x%i==0)
            return false;
	
    return true;
}


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int k;
    cin >> k;

    int count = 0;
    for(int i = 0; i < n; ++i)
        if(IsPrime(a[i]))
            if(a[i] >= k)
                count++;

    cout << count;

}