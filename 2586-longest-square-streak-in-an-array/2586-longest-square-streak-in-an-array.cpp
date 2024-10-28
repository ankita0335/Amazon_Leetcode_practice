class Solution {
public:
    int longestSquareStreak(vector<int>& nums) 
    {
        unordered_set<long long> numSet(nums.begin(), nums.end());
        int maxStreak = -1;
        for (long long num : nums) 
        {
            int currentStreak = 0;
            long long current = num;
            while (numSet.count(current)) 
            {
                currentStreak++;
                if (current > LLONG_MAX) break;         
                current = current * current;
            }
            maxStreak = max(maxStreak, currentStreak);
        }
        return maxStreak > 1 ? maxStreak : -1;
    }
};