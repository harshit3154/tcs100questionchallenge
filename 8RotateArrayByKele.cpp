#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int>&,string);
int main(){
    vector<int> arr;
    int ele;
    int k;
    cin>>k;
    while(cin>>ele){
        arr.push_back(ele);
    }
    display(arr,"\n\tThe element of the original array are : ");
    k=k%arr.size();
    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    display(arr,"\n\n\t\tThe element of the rotated array are : ");
    return 0;
}

void display(vector<int> &arr,string str){
    cout<<str;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}

