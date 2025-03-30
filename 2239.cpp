//Find Closest Number to Zero
#include<iostream>
using namespace std;
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {

      vector<int> array2;
      for(int i=0;i<nums.size();i++)
      {
         int a=nums[i];
         if(a<0)a*=(-1);
         array2.push_back(a);
      }
      auto a=min_element(array2.begin(),array2.end());
      vector<int>final;
      for(int i=0;i<array2.size();i++)
      {
         if(array2[i]==*a)
         {
            final.push_back(nums[i]);
         }
      }
      auto b=max_element(final.begin(),final.end());
      return *b;
    }
};

int main()
{

}
