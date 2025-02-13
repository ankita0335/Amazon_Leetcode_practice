class Solution {
    #define ll 
public:
    int minOperations(vector<int>& nums, int k) {
        int opr = 0;
        priority_queue<long long ,vector<long long > , greater<ll>> pq;
        for(auto i:nums)
        {
            pq.push(i);
        }
        while(pq.size()>=2 && pq.top()<k )
        {
            long long  t= pq.top();
            pq.pop();
            if(pq.empty()){
                break;
            }
            long long  t1 = pq.top();
            pq.pop();

            pq.push(min(t,t1) * 2 + max(t,t1));
            opr++;
        }
        return opr;
    }
};