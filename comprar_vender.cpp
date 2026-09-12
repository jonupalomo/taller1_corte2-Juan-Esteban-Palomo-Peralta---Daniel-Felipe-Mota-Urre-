#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++){
            if (prices[i] < min_price){
                min_price = prices[i];
            }
            if (prices[i] - min_price > maxProfit){
                maxProfit = prices[i] - min_price;
            }
        }
        return maxProfit; 
    }
};