// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <climits>

using namespace std;
void freqEleArray(vector<int>&,unordered_map<int,int>&);
void freqEleArray(vector<int>&,map<int,int>&);
void display(vector<int>& arr,string);
int main() {
    
    vector<int> arr;
    unordered_map<int,int> mp;
    map<int,int> om;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    display(arr,"\n\n\t\tThe original array is : \t");
    freqEleArray(arr,mp);
    for(auto it:mp){
        cout<<"\n\n\t\tThe frequency of ele "<<it.first<<" is : "<<mp[it.first];
    }
    freqEleArray(arr,om);
    for(auto it:om){
        cout<<"\n\n\t\tThe frequency of ele "<<it.first<<" is : "<<om[it.first];
    }
    
    return 0;
}

void freqEleArray(vector<int>& ele,unordered_map<int,int> &mp){
    for(auto it:ele){
        mp[it]++;
    }
}

void freqEleArray(vector<int>& ele,map<int,int> &mp){
    for(auto it:ele){
        mp[it]++;
    }
}

void display(vector<int>& arr, string str){
    cout<<str;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}

