//Is Subsequence
#include<iostream>
using namespace std;
class Solution
{
   public:
    bool isSubsequence(string s, string t)
   {
      string a="";int b=0;
      for(int i=0;i<s.length();i++)
      {
         for(int j=b;j<t.length();j++)
         {
            if(s[i]==t[j])
            {
               a+=t[j];
               b=j+1;
               break;
            }
            
         }

      }
      if(a==s)return true;
      else return false;
   }

};
int main()
{

}