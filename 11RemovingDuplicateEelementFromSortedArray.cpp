#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
void display(vector<int>&,string);
void removeDuplicateEle1(vector<int>);
int removeDuplicateEle2(vector<int>&);
int main(){
    vector<int> arr;
    unordered_set<int> us;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    
    display(arr,"\n\n\tThe element of the array are : ");
    removeDuplicateEle1(arr);
    int s=removeDuplicateEle2(arr);
    cout<<"\n\n\t\tThe element of the array are : ";
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}

void removeDuplicateEle1(vector<int> arr){
    /*
    unordered_set<int> us;
    for(auto &it:arr){
        us.insert(it);
    }
    arr.clear();
    for(auto &it:us){
        arr.push_back(it);
    }*/

    vector<int>::iterator it;
    for(it=arr.begin();it!=arr.end();it++){
        if(find(arr.begin(),it,*it)!=it){
            arr.erase(it);
            it--;
        }
    }   
    display(arr,"\n\n\tThe element of the array after removing the duplicate element are : ");
}      

// optimized solution for sorted array

int removeDuplicateEle2(vector<int>& arr){
    if(arr.empty()) return 0;
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
void display(vector<int> &arr,string str){
    cout<<str;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}

