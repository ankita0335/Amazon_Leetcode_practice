class Solution {
public:
    struct trieNode{
        trieNode* left;
        trieNode* right;
    };
    void insertithbit(trieNode* root, int num)
    {
        trieNode* crowler = root;

        for(int i = 31 ; i >= 0 ; i--)
        {
            int ithbit = (num >> i) & 1;
            if(ithbit == 0)
            {
                if(!crowler->left )
                {
                    crowler->left = new trieNode();
                }
                crowler = crowler->left;
            }
            else
            {
                if(!crowler->right)
                {
                    crowler->right = new trieNode();
                }
                crowler = crowler->right;
            } 
        }
    }

    int findxormax(trieNode* head, int num)
    {
        trieNode* crwlr = head;
        int maxi =0;

        for(int i = 31; i>= 0 ; i--)
        {
            int ithbt = (num >> i)& 1;
            if(ithbt == 1) 
            {
                if(crwlr->left) 
                {
                    maxi += pow(2, i); 
                    crwlr = crwlr->left;
                } 
                else 
                {
                    crwlr =  crwlr->right;
                }
            } 
            else 
            {
                if(crwlr->right) 
                {
                    maxi += pow(2, i);
                    crwlr= crwlr->right;
                } 
                else 
                {
                    crwlr=  crwlr->left;
                }
            }
        }
        return maxi;
    }
    int findMaximumXOR(vector<int>& nums) 
    {
        trieNode* root = new trieNode();

        for(auto &i : nums)
        {
            insertithbit(root, i);    
        }

        int maxi =0;
        int n = nums.size();
        for(int i=0; i<n ; i++)
        {
            maxi = max(maxi , findxormax(root, nums[i]));
        }    

        return maxi ;

    }
};