class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {
        int n = pizzas.size();
        int days = pizzas.size()/4;
        sort(pizzas.begin(),pizzas.end());
        if(days == 1){
            return (long long)pizzas[n-1];
        }
        long long ans = 0;
        int i=n-1;
        int d = ceil(days/2.0);
        cout<<d<<endl;
        int count =0;
        while(count < d){
            ans += pizzas[i];
            i--;
            count++;
        }
        count =0;
        int remain = days - d;
        cout<<remain<<endl;
        for(auto i: pizzas){
            cout<<i<<" ";
        }

        cout<<endl<<i;
        while(count<remain){
            i--;
            ans += pizzas[i];
            i--;
            count++;
        }
        return ans;
    }
};