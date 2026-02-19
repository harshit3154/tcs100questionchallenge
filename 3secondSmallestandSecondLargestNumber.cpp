// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int secondLargestEle(vector<int>&);
int secondSmallestEle(vector<int>&);
int main() {
    
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    cout<<"\n\n\t\tThe second largest element of the array is : "<<secondLargestEle(arr);
    cout<<"\n\n\t\tThe second smallest element of the array is : "<<secondSmallestEle(arr);
    return 0;
}

int secondLargestEle(vector<int>& arr){
    int ele=INT_MIN;
    int ans=0;
    for(auto &it:arr){
        if(it>ele){
            ans=ele;
            ele=it;
        }
    }
    return ans;
}

int secondSmallestEle(vector<int>& arr){
    int ele=INT_MAX;
    int ans=0;
    for(auto &it:arr){
        if(it<ele){
            ans=ele;
            ele=it;
        }
    }
    return ans;
}