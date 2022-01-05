// https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
// https://leetcode.com/problems/ugly-number-ii/
// https://leetcode.com/problems/ugly-number/
// https://www.youtube.com/watch?v=Lj68VJ1wu84

class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    ull dp[n+1];
	    int ptr1=1, ptr2=1, ptr3=1;
	    ull val1, val2, val3;
	    dp[1]=1;
	    
	    for(int i=2; i<n+1; i++)
	    {
	        val1=dp[ptr1]*2;
	        val2=dp[ptr2]*3;
	        val3=dp[ptr3]*5;
	        dp[i]=min(min(val1, val2), val3);
	        if(dp[i]==val1) ptr1++;
	        if(dp[i]==val2) ptr2++;
	        if(dp[i]==val3) ptr3++;
	    }
	    return dp[n];
	}
};

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(N)
