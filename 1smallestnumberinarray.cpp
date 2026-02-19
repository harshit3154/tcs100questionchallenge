// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int smallestEle(vector<int>&);
int main() {
    
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    cout<<"\n\n\t\tThe smallest element of the array is : "<<smallestEle(arr);
    return 0;
}

int smallestEle(vector<int>& arr){
    int ele=INT_MAX;
    for(auto &it:arr){
        ele=min(ele,it);
    }
    return ele;
}