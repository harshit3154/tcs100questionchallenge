// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void calculateSieve(vector<bool> &isPrime,int n){
    isPrime[0]=isPrime[1]=false;
    
    for( int i=2; i*i<=n; i++){
        
        if(isPrime[i]){
            for(int j=i*i; j<=n; j+=i){
                isPrime[j]=false;
            }
        }
    }
    int a=0;
    cout<<"\n\n\t\tThe prime number are :\n\n\t\t";
    for(int i=2; i<n; i++){
        if(isPrime[i]){
            cout<<i<<"\t";
        }
    if(i/10!=a) {
        cout<<"\n\n\t\t";
        a=i/10;
    }
    }
}
int main() {
    // Write C++ code here
    std::cout << "Try programiz.pro"<<endl;
    
    int n=1e4;
    cout<<n;
    
    vector<bool> isPrime(n+1,true);
    calculateSieve(isPrime,n);
    return 0;
}