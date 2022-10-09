class Solution {
public:
    int maxsub(vector<int>& nums){
    int max=INT_MIN, maxend=0;
         for(int i=0;i<nums.size();i++)
         {
             maxend=maxend+nums[i];
             if(max<maxend)
                 max=maxend;
             if(maxend<0)
                 maxend=0;
         }
        return max;
        /*int sum=0;
        int max=nums[0];
          for(int i=0;i<nums.size();i++)
          {
              sum=0;
                for(int j=i;j<nums.size();j++)
                {
                    sum=sum+nums[j];
                    if(max<sum)
                    {
                        max=sum;
                    }
                    
                }
              
          }
        return max;*/
    }
    
    int maxSubArray(vector<int>& nums) {
       return maxsub(nums);
    }
};