#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> arr;
    int ele;
    int sum=0;
    while(cin>>ele){
        arr.push_back(ele);
        sum+=ele;
    }
    cout<<"\n\n\tTHE AVERAGE OF THE GIVEN ARRAY IS : "<<(double)sum/arr.size();
    return 0;
}

