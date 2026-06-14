#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<double> prices = {100, 110, 120, 130, 140};
    for(int i = 1; i < prices.size() - 1;i++){
        int p = (prices[i-1] + prices[i] + prices[i+1])/3;
        cout << p << endl;
    }
}
