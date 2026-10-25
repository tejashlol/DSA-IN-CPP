#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> arr ={1,3,2,2};
    int size = arr.size();
    
    sort(arr.begin(),arr.end());
    
    
   for(int i = 0; i<size-1; i++){
    if(arr[i]==arr[i+1]){
        cout<<"true";
        return 0;
    }
    }

    cout<<"false";
    return 0;
}