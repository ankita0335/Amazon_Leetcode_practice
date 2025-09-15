class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>st;
        for(auto i : brokenLetters){
            st.insert(i);
        }
        int c= 0;
        int cntwrd = 1;
        for(auto i: text){
            if(i==' ')  cntwrd++;
        }
        for(int i= 0; i< text.size();i++){
            if(st.find(text[i]) != st.end()){
                c++;
                while(text[i]!= ' ' && i<text.size())
                    i++;
            }
        }
        return cntwrd - c;
    }
};