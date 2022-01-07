// 42. Trapping Rain Water
#include <bits/stdc++.h>
int trap(vector<int> &height)
{
    if (height.empty())
    {
        return 0;
    }
    int ans = 0;
    int n = height.size();

    vector<int> left(n);
    vector<int> right(n);
    left[0] = height[0];
    for (int i = 1; i < n; i++)
    {

        left[i] = max(left[i - 1], height[i]);
    }
    right[n - 1] = height[n - 1];
    for (int j = n - 2; j >= 0; j--)
    {

        right[j] = max(right[j + 1], height[j]);
    }

    for (int k = 1; k < n - 1; k++)
    {
        ans += min(right[k], left[k]) - height[k];
    }

    return ans;
}
int main()
{
    vector<int> v;
    for (&auto : i)
    {

        cin >> v[i];
    }
    cout << trap(*v);
}