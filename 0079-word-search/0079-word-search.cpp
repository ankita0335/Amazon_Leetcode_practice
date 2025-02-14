class Solution {
public:
    struct TrieNode{
        bool isEndOfWord;
        TrieNode* child[58];
        
        TrieNode(){   //constructor ok
            isEndOfWord= false;
            for(int i=0;i<58;i++)
            {
                child[i]=NULL;
            }
        }
    };

    void insert(TrieNode* root, string word)
    {
        TrieNode* crawler = root;
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            int idx = ch - 'A';
            if(crawler->child[idx]==nullptr)
            {
                crawler->child[idx] = new TrieNode();
            }
            crawler= crawler->child[idx];
        }
        crawler->isEndOfWord =true;
    }
    vector<vector<int>>dir{{-1,0}, {1,0},{0,-1},{0,1}};
    bool search(TrieNode* root, vector<vector<char>>& board, int r, int c)
    {
        int n= board.size();
        int m = board[0].size();
        if(r<0 || c<0 || r>=n || c>=m)
            return false;
        if(root->child[board[r][c]-'A']== NULL) return false;
        root = root->child[board[r][c]-'A'];
        if(root->isEndOfWord)   return true;
        char tmp=board[r][c];
        board[r][c]='$';
        for(int i=0;i<4;i++)
        {
            int nr = r+ dir[i][0];
            int nc= c+dir[i][1];
            if(search(root, board, nr, nc))
            {
                return true;
            }
        }
        board[r][c]= tmp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        TrieNode* root= new TrieNode();
        int n= board.size();
        int m = board[0].size();
        insert(root,word);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m ; j++)
            {
                if(root->child[board[i][j]-'A']!= NULL)
                {
                    if(search(root, board, i, j))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};