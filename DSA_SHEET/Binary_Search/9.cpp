#include<bits\stdc++.h>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0, j = 0;
        int k = 0;
       vector<int> nums;  

        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                nums.push_back(nums1[i]);
                i++;
            } else {
                nums.push_back(nums2[j]);
                j++;
            }
            k++;
        }

        while (j < n) {
            nums.push_back(nums2[j++]);
            k++;
        }

        while (i < m) {
            nums.push_back(nums1[i++]);
            k++;
        }

        for (int i = 0; i < m + n; i++) {
            nums1[i] = nums[i];
        }
    }
    



