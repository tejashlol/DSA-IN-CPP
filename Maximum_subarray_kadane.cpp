#include<iostream>
#include<vector>

using namespace std;
 
int main(){

    vector<int> arr = {1};////There is some bugs needs to be resolved

    int size = arr.size();

    int FinalSum = arr[0];
    int Currentsum = arr[0];
   

    for(int i = 1; i<size; i++){

        if(arr[i]>Currentsum+arr[i]){
        Currentsum=arr[i];
        }
        else
        {
            Currentsum+=arr[i];
        }
       
    

      
       
       if(Currentsum>FinalSum){
        FinalSum = Currentsum;
       }
        
    }

    cout<<FinalSum;


    return 0;
}