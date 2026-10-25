#include<iostream>
using namespace std;

int main(){

    int arr[]={2,7,11,15};
    int target = 9;
    int size = 4;

    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                cout<<i<<" , "<<j<<endl;
                return 0;
            }
           
        }
    }


    return -1;
}
