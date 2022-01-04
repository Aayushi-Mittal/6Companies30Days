// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
// https://leetcode.com/problems/subarray-product-less-than-k/discuss/108861/JavaC%2B%2B-Clean-Code-with-Explanation

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if (k == 0) return 0;
        int j=0;
        long long ans=0, product=1;
        for(int i=0; i<n; i++)
        {
            product*=a[i];
            while(product>=k && j<=i)
            {
                product/=a[j];
                j++;
            }
            ans+=(i-j+1);
        }
        return (int)ans;
    }
};

// Expected Time Complexity: O(n)
// Expected Auxiliary Space: O(1)
