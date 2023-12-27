#include <bits\stdc++.h>
using namespace std;

class Solution
{
public:
    int findMidSum(int nums1[], int nums2[], int n)
    {
        int i = 0, j = 0;
        int k = 0;
        vector<int> nums;

        while (i < n && j < n)
        {
            if (nums1[i] <= nums2[j])
            {
                nums.push_back(nums1[i]);
                i++;
            }
            else
            {
                nums.push_back(nums2[j]);
                j++;
            }
            k++;
        }

        while (j < n)
        {
            nums.push_back(nums2[j++]);
            k++;
        }

        while (i < n)
        {
            nums.push_back(nums1[i++]);
            k++;
        }

        return (nums[n] + nums[n - 1]);
    }
};
