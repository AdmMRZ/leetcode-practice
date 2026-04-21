class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> stringVec;
        int len = nums.size();
        if (len == 0) return stringVec; 
        

        long long int r1 = nums[0], r2 = r1, range = 1, id = 0;
        
        if (len == 1) stringVec.push_back(to_string(r1));
        
        for (int i = 1; i < len; i++) {
            if (nums[i] - r1 == range) {
                range++;
                r2 = nums[i];
                if (i == len - 1) {
                    stringVec.push_back(to_string(r1) + "->" + to_string(r2));
                }
            }
            else if (r1 == r2) {
                stringVec.push_back(to_string(r1));
                r1 = nums[i];
                r2 = r1;
                if (i == len - 1) {
                    stringVec.push_back(to_string(r1));
                }
            } 
            else {
                stringVec.push_back(to_string(r1) + "->" + to_string(r2));
                r1 = nums[i]; r2 = r1;
                range = 1;
                if (i == len - 1 && range == 1) stringVec.push_back(to_string(r1));
            }
        }
        
        return stringVec;
    }
};
