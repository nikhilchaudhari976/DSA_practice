#include <iostream>
#include<vector>
using namespace std;

int main()
{
    class solution{
        public: vector<int> shuffle(vector<int>&nums,int n){
            vector<int>ans;
            for(int i=0;i<n;i++){
                ans.push_back(nums[i]);//stores the i in ans
                ans.push_back(nums[i+n]);// stores the i+n in ans 
            }
             return ans;
        }
       
    };
}
