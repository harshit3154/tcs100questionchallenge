#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void display(vector<int>&,string);
int main(){
    double median=0.0d;
    vector<int> arr;
    int ele;
    int sum=0;
    while(cin>>ele){
        arr.push_back(ele);
    }
    display(arr,"\n\n\tThe element of the array are : ");
    int n=arr.size();
    if(n%2==0){
        median=(arr[n/2]+arr[n/2+1])/2.0;
    }else{
        median=arr[(n+1)/2];
    }
    
    cout<<"\n\n\t\tTHE MEDIAN OF THE ARRAY IS : "<<median;
    return 0;
}

void display(vector<int> &arr,string str){
    cout<<str;
    for(auto &it:arr){
        cout<<it<<"\t";
    }
}

