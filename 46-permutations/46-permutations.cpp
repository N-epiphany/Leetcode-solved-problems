class Solution {
public:
    
private:
	void per(vector<int> &ds, vector<vector<int>> &ans, vector<int> &nums, int chlist[])
	{
		//base case
		if (ds.size() == nums.size())
		{
			ans.push_back(ds);
			return;
		}
		for (int i = 0; i < nums.size(); i++)
		{
			if (!chlist[i])
			{
				ds.push_back(nums[i]);
				chlist[i] = 1;
				per(ds, ans, nums, chlist);
				chlist[i] = 0;
				ds.pop_back();
			}
		}
	}
public:

	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> ans;
		vector<int> ds;
		int n = nums.size();
		int chlist[n] ;
		for (int i = 0; i < nums.size(); i++) chlist[i] = 0;
		per(ds, ans, nums, chlist);
		return ans;
	}
};