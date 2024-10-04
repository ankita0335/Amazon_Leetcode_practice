class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        vector<int>arr1(skill);
        sort(arr1.begin(), arr1.end());
        vector<int>arr2(skill);
        sort(arr2.begin(), arr2.end(), greater<int>());
        int sum=arr1[0]+arr2[0];
        long long ans = arr1[0]*arr2[0];
        int curr=0;
        if(skill.size()==2)
            return ans;
        for(int i=1;i<skill.size()/2;i++)
        {
            curr = arr1[i]+arr2[i];
            if( curr == sum)
            {
                ans += (arr1[i]*arr2[i]);
            }
            else
                return -1;
        }
        return ans;
    }
};