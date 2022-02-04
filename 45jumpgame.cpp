class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();
        int currentreach = 0;
        int curmax = 0;
        int jump = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i + nums[i] > curmax)
            {
                curmax = i + nums[i];
            }
            if (i == currentreach)
            {
                jump++;
                currentreach = curmax;
            }
        }

        return jump;
    }
};