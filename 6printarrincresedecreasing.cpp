#include <iostream>
#include <vector>

using namespace std;
void bubbleSortI(vector<int>&);
void bubbleSortD(vector<int>&);

int main(){
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    bubbleSortD(arr);
    bubbleSortI(arr);
    return 0;
}

void bubbleSortI(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr.size()-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"\n\n\tThe element of the array in increasing order are : ";
    for(auto it:arr){
        cout<<it<<"\t";
    }
}

void bubbleSortD(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr.size()-i-1;j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"\n\n\tThe element of the array in decreasing order are : ";
    for(auto it:arr){
        cout<<it<<"\t";
    }
}




