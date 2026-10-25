#include<iostream>
using namespace std;

int main(){

    int arr[]={1,2,3,5};
    int size = 4;
    bool DuplicateExists = false;

    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            if(arr[i]==arr[j]){
                DuplicateExists = true;
                cout<<boolalpha<<DuplicateExists<<endl;
                return 0;
            }
        }
    }
    cout<<boolalpha<<DuplicateExists<<endl;
    return 0;
}