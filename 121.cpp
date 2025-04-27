//Best Time to Buy and Sell Stock
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
          int min_price=prices[0];
          int max_profit=0;
          for(int i=0;i<prices.size();i++)
          {
             min_price=min(min_price,prices[i]);
             int b=prices[i]-min_price;
             max_profit=max(max_profit, b);
          }
          return max_profit;
        }
    };
int main()
{

}