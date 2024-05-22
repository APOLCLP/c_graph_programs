#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int prod,max=0;
        if(n%k) prod=((n/k)+1)*k;
        else prod = n;
        
        
            max+=(prod/n);
            prod%=n;
            if(prod)max++;
            
        cout<<max<<endl;
    }
}