#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr = {0, 0, 1};
    int size = arr.size();

    int Position = 0;
    int CountofZeros = 0;

    for(int i = 0 ; i<size; i++){
        
        if(arr[i]!=0){
          arr[Position]=arr[i];
          Position++;
        }
        if(arr[i]==0){
            CountofZeros++;
        }

    }
    for(int i=size-1; i>size-1-CountofZeros; i--){
        arr[i]=0;
    }
    

    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
