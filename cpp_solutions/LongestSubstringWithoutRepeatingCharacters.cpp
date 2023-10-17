class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mpp(256,-1);
        int n =s.size();
        int len=0;
        int right=0;
        int left=0;
        while(right<n){
            if(mpp[s[right]] != -1){ // if dublicate element is there, then we update left
            left= max(left, mpp[s[right]]+1);

            }
            mpp[s[right]]=right; //updation of right
            len= max(len, right-left+1);
            right++;


        }
        return len;
    }
};