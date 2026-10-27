#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> prices = {3, 10, 1, 2};
    int size = prices.size();

    int MaxProfit = 0;
    int Buy = 0;

    for(int i = 0; i<size; i++){
        if(prices[i]<prices[Buy]){
            Buy = i;
        }
        if(prices[i]-prices[Buy]>MaxProfit){
            MaxProfit = prices[i]-prices[Buy];
        }
    }
    
    cout<<"The MaxProfit will be = "<<MaxProfit<<endl;


    

    return 0;
}