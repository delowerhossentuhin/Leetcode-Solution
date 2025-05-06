//Summary Ranges
#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        vector<string> summaryRanges(vector<int>& nums) {
           int start,end;
           vector<string>word;
           for(int i=0;i<nums.size();i++)
           {
            start=nums[i];
            end=start;
            while(i+1<nums.size() && nums[i]+1==nums[i+1])
            {
                end=nums[i+1];i++;
            }
            string s;
            if(start==end)s=to_string(end);
            else s=to_string(start)+"->"+to_string(end);
            word.push_back(s);
           }
           return word;
           
        }
};
int main()
{

}