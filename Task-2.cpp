class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> stk;
        int n = str.length();
        for (int i = 0; i < n; i++) {
            if (stk.empty()) {  // if stack is empty so i put the element in the stack
                stk.push(str[i]);
            } else {
                if (stk.top() != str[i]) // if current element is equal to the top element 
                    stk.push(str[i]);    // of stack, then i remove it otherwise push it in stack.
                else
                    stk.pop();
            }
        }

        if (stk.empty()) // if stack is empty there is no element so return null
            return "";

        string result;
        while (!stk.empty()) { // if stack is not empty build a string and return it
            result= stk.top() + result;
            stk.pop();
        }

        return result;
    }
};

// Time complexity: O(n)
// Space complexity:O(n)