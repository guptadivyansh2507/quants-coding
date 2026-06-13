#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<double> prices = {
        100.5 , 101.2, 99.8, 105.1, 107.4
    };
    double TP = 0;
    for(int i = 0; i < prices.size(); i++){
        TP = TP + prices[i];
    }
    double AP = TP/prices.size();
    cout << "average price of the stock is: " << AP << endl;
    double HP = prices[0];
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] > HP){
            HP = prices[i];
        }
    }
    cout << HP << endl;
    double LP = prices[0];
    for(int i = 0; i < prices.size(); i++){
        if(prices[i] < LP){
            LP = prices[i];
        }
    }
    cout << LP << endl;
}
