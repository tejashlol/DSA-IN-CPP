#include<iostream>
#include<vector>

using namespace std;

int main(){
   
vector<int> arr = {1,1,2,2,3,3,3,3,5,5,5,6,12,12};
int size = arr.size();
int check = 0;

for(int scanner = 1; scanner < size; scanner++){
    if(arr[scanner]!=arr[check]){
        check++;
        arr[check]= arr[scanner];
    }
}

for(int i = 0; i < check + 1; i++){
    cout << arr[i] << " ";
}


    return 0;
}
