class Solution {

public:
bool isValid(string s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c); // push opening brackets
        } else {
            if (st.empty()) return false; // no matching opening bracket

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop(); // matching pair, remove from stack
            } else {
                return false; // wrong order or mismatched bracket
            }
        }
    }

    return st.empty(); // all brackets matched properly
}
};