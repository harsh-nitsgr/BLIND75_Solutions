class Solution {
public:
    bool isValid(string s) {
            stack <char>S;
    for(int i=0;i<s.length();i++){

        if(s[i]=='[' || s[i]=='(' || s[i]=='{'){
            S.push(s[i]);
        }

        if(s[i]==']'){
            if( S.empty()==false && S.top()=='['){
                S.pop();
            }
            else return 0;
        }

        if(s[i]=='}'){
            if( S.empty()==false && S.top()=='{'){
                S.pop();
            }
            else return 0;
        }

        if(s[i]==')'){
            if( S.empty()==false && S.top()=='('){
                S.pop();
            }
            else return 0;
        }
    }
    if(S.empty()) return 1;
    return 0;
    }
};