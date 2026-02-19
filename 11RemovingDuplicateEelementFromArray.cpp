#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
void display(vector<int>&,string);
int main(){
    vector<int> arr;
    unordered_set<int> us;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    
    display(arr,"\n\n\tThe element of the array are : ");
    
    vector<int>::iterator it;
    for(it=arr.begin();it!=arr.end();){
        if(us.find(*it)==us.end()){
            us.insert(*it);
            it++;
        }
        else
            arr.erase(it);
    }
    
    display(arr,"\n\n\tThe element of the vector after filtering are : ");
    
    return 0;
}

void display(vector<int> &arr,string str){
    cout<<str;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}

