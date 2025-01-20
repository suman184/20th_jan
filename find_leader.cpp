// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {4,100,1,23,4,1};
    int max = arr[arr.size()-1];
    vector <int> res = {};
    res.push_back(max);
    for(int i=arr.size()-1;i>0;i--){
        if(max<arr[i]){
            max = arr[i];
            res.push_back(max);
        }
    }
    reverse(res.begin(),res.end());
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";   
    }
    
    return 0;
}