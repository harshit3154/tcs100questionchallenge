#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> arr;
    int ele;
    while(cin>>ele){
        arr.push_back(ele);
    }
    int smallest = arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }
    return 0;
}