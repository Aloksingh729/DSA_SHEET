Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Code:
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
    
          while (i <n && j < m) {
      
    //if current element in i is smaller
    if (nums1[i] < nums2[j]) { 
      i++;
    } else if (nums2[j] < nums1[i]) {
      j++;
    } else  {
                if (ans.empty() || nums1[i] != ans.back()) {
                    ans.push_back(nums1[i]);
                }
      i++;
      j++;
    }
  }
  
  return ans;
    }
};
