class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        unordered_map<string, int> mp;

        stringstream ss(sentence1), s2(sentence2);

        vector<string> word1, word2;
        string word;
        while (ss >> word) {
            word1.push_back(word);
        }

        while (s2 >> word) {
            word2.push_back(word);
        }
    

    int s=0, e1=word1.size()-1, e2=word2.size()-1;

    if(word1.size() > word2.size())
       return areSentencesSimilar(sentence2,sentence1);

    while (s<word1.size() && word1[s]==word2[s]) {

            
       
                 s++;
    }
    while(e1>=0 && word1[e1]==word2[e2]){
        e1--;
        e2--;
    }
    return e1<s;   //start
}
}
;