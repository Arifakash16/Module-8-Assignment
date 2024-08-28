class Solution {
public:
    bool isValid(string s) {
        stack<char>st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') // if the element is opening braces then I put it into the stack 
                st.push(s[i]);
            else{
                if(!st.empty()&&((st.top()=='(' && s[i]==')')||(st.top()=='{' && s[i]=='}')||(st.top()=='[' && s[i]==']')))
                    st.pop();  // if I found current element is closing braces then check the top element of stack is opening 
                else            // braces, if opening braces then pop it otherwise insert it
                    st.push(s[i]);
            }
        }
        if(st.empty()) if stack is empty then I understand it correct sequence otherwise not
            return true;
        else
            return false;
    }
};

// Time complexity: O(n)
// Space complexity: O(n)