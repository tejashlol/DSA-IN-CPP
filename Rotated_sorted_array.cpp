#include<iostream>
#include<vector>


using namespace std;

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 8, 16, 19};
    int size = arr.size();
    int K = 5;

    int index = 0;
    int change = size-K;

    for(int i = size-K; i<size; i++){
        change = i;
        for(int j = i-1; j>=index;j-- ){
            swap(arr[change], arr[j]);
            change--;
        }
        index++;
       
        
    }
    
    for(int i = 0;i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}