#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> arr;
    int ele;
    int sum=0;
    while(cin>>ele){
        arr.push_back(ele);
        sum+=ele;
    }
    cout<<"\n\n\t\tThe sum of the elemeent is : "<<sum;
    return 0;
}

