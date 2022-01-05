// https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
// https://leetcode.com/problems/string-compression/

string encode(string src)
{     
  //Your code here 
    string ans="";
    int count=1, i=1;
    for(i=1; i<src.size(); i++)
    {
        if(src[i]==src[i-1])
            count++;
        else{
            ans = ans + src[i-1] + to_string(count);
            count=1;
        }
    }
    ans+=src[i-1]+to_string(count);
    return ans;
}   

// Expected Time Complexity: O(N), N = length of given string.
// Expected Auxiliary Space: O(1)
