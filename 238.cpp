//Product of Array Except Self
#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product1=accumulate(nums.begin(),nums.end(),1,multiplies<int>());
        int product2=1;
        int count=0;
        vector<int>result;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)count++;
            if(count==2)break;
        }
        if(count==2)
        {
            for(int i=0;i<nums.size();i++)result.push_back(0);
        }
        if(count==1)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==0)product2*=1;
                else product2*=nums[i];
            }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]!=0)result.push_back(0);
                else result.push_back(product2);

            }
        }
        if(count==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                int a=nums[i];
                a=product1/a;
                result.push_back(a);
            }
        }
        return result;
    }
};
int main()
{

}