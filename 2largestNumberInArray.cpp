// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int largestEle(vector<int>&);
int main() {
    
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    cout<<"\n\n\t\tThe largest element of the array is : "<<largestEle(arr);
    return 0;
}

int largestEle(vector<int>& arr){
    int ele=INT_MIN;
    for(auto &it:arr){
        ele=max(ele,it);
    }
    return ele;
}