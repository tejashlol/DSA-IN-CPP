#include<iostream>
#include<vector>


using namespace std;

int main(){

    vector<int> arr={-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = arr.size();


   
   int Maxsum = arr[0];
   
   for(int i =0; i<size; i++){
    int CurrentSum=0;
    
    for(int j = i; j<size; j++){
        CurrentSum+=arr[j];
        if(CurrentSum>Maxsum){
        Maxsum=CurrentSum;
        }
    }

   }
   
   cout<<"The Maximum Subarray sum will be = "<<Maxsum<<endl;
     
    return 0;
}

