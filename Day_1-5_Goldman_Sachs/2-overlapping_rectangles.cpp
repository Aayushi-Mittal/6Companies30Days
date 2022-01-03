// https://practice.geeksforgeeks.org/problems/overlapping-rectangles1924/1/

class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // code here
        if(r1[0] < l2[0] || l1[1] < r2[1] || r2[0] < l1[0] || r1[1] > l2[1])
            return 0;
        return 1;
    }
};

// Expected Time Complexity:O(1)
// Expected Auxillary Space:O(1)
// Constraints: -109<=x-coordinate,y-coordinate<=109
