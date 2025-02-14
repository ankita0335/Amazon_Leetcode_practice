
class Solution {
public:
    struct TrieNode{
        bool isEndOfWord;
        TrieNode* child[26];
        string word ;
        TrieNode(){   //constructor ok
            isEndOfWord= false;
            for(int i=0;i<26;i++)
            {
                child[i]=NULL;
            }
            word = "";
        }
    };

    void insert(TrieNode* root, string word)
    {
        TrieNode* crawler = root;
        for(int i=0;i<word.size();i++)
        {
            char ch = word[i];
            int idx = ch - 'a';
            if(crawler->child[idx]==nullptr)
            {
                crawler->child[idx] = new TrieNode();
            }
            crawler= crawler->child[idx];
        }
        crawler->isEndOfWord =true;
        crawler->word = word;
    }
    vector<string> ans;
    vector<vector<int>>dir{{-1,0}, {1,0},{0,-1},{0,1}};
    void search(TrieNode* root, vector<vector<char>>& board, int r, int c)
    {
        int n= board.size();
        int m = board[0].size();
        if(r<0 || c<0 || r>=n || c>=m)
            return ;
        if(board[r][c]== '$' || root->child[board[r][c]-'a'] == NULL) return ;
        root = root->child[board[r][c]-'a'];

        if(root->isEndOfWord){
            ans.push_back(root->word);
            root->isEndOfWord = false;
            root->word= "";
        }   

        char tmp = board[r][c];
        board[r][c]='$';

        for(int i=0;i<4;i++)
        {
            int nr = r+ dir[i][0];
            int nc= c+dir[i][1];
            search(root, board, nr, nc);
            
        }
        board[r][c]= tmp;
    }
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root= new TrieNode();
        int n= board.size();
        int m = board[0].size();
        for(int i=0;i<words.size();i++)
        {
            insert(root,words[i]);
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m ; j++)
            {
                if(root->child[board[i][j]-'a']!= NULL)
                {
                    search(root, board, i, j);
                }
            }
        }
        return ans;
    }
};