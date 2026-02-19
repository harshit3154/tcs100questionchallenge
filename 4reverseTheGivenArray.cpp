
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
void reverseGivenArray(vector<int>&);
void display(vector<int>&,string);
int main() {
    
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    display(arr,"\n\n\t\tThe original array is : \t");
    reverseGivenArray(arr);
    display(arr,"\n\n\t\tThe array after revesing it is : ");
    return 0;
}

void reverseGivenArray(vector<int>& arr){
   int s=0,e=arr.size()-1;
   while(s<e){
       swap(arr[s],arr[e]);
       s++;
       e--;
   }
}

void display(vector<int> &arr,string s){
    cout<<s;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}
