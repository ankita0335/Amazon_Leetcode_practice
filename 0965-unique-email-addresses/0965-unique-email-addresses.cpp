class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
       //int n = emails.size();
        for(auto email : emails)
        {
            string local, domain;
            int i=0;
            while(i<email.size() && email[i]!= '@')
            {
                if(email[i]=='+')
                {
                    while(i<email.size() && email[i]!='@')
                        i++;
                    break;
                }
                else if(email[i]=='.')
                {
                    i++;
                    continue;
                }
                local += email[i];
                i++;
            }
            domain = email.substr(i);
            string total = local+domain;
            st.insert(total);
        }
        return st.size();
    }
};