// https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> ans; 
        int n=string_list.size();
        for(int i=0; i<n; i++)
        {
            string s=string_list[i];
            sort(s.begin(), s.end());
            anagrams[s].push_back(string_list[i]);
        }
        for(auto itr:anagrams)
            ans.push_back(itr.second);
        return ans;
    }
};

// Expected Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
// Expected Auxiliary Space: O(N*|S|), where |S| is the length of the strings.
