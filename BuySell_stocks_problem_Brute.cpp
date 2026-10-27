#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> prices = {5};
    int size = prices.size();

    int Profit = 0;
    
    for(int i = 0; i<size; i++){
        for(int j = i; j<size; j++){
            if(prices[j]-prices[i]>Profit){
                Profit = prices[j]-prices[i];
            }
        }
    }

    cout<<"Max Of Profit will be = "<<Profit<<endl;

    return 0;
}





























// for(int i = 0; i<size; i++){
    //     if(prices[i]<prices[Buy]){
    //         Buy = i;
    //     }
    // }

    // int Sell = Buy;

    // for(int i = Buy; i<size; i++){
    //     if(prices[i]>prices[Sell]){
    //         Sell = i;
    //     }
    // }
    

    // cout<<"Buy at = "<<prices[Buy]<<endl;
    // cout<<"Sell at = "<<prices[Sell]<<endl;

    // cout<<"Max Profit will be = "<<prices[Sell]-prices[Buy]<<endl;