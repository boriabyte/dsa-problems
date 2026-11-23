class Solution {
   public:
    bool isValid(string s) {
        stack<char> pars;
        unordered_map<char, char> parsPairs = {{')', '('}, {']', '['}, {'}', '{'}};

        for (char par : s) {
            /* if u come across a closing bracket,
            then you either check whether there are
            opening ones in the stack; if not,
            the string sequence is invalid
            */
            if (parsPairs.count(par)) { 
                if (!pars.empty() && pars.top() == parsPairs[par]) {
                    pars.pop();
                } else {
                    return false;
                }
            } else {
                // otherwise, push the opening one to the stack
                pars.push(par);
            }
        }

        return pars.empty();
    }
};
