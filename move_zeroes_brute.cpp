#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {0, 0, 1};
    int size = arr.size();

    for(int i = 0; i<size; i++){
        for(int j=0; j<size-1; j++){
            if(arr[j]==0){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}

