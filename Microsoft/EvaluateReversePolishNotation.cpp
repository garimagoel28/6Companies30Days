class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        long long int a,b,c;
        for(auto s:tokens)
        {
            if(s.size()==1 && !isdigit(s[0]))
            {
                b = stoll(st.top());
                st.pop();
                a = stoll(st.top());
                st.pop();
                switch(s[0])
                {
                    case '+':
                        c = a + b;
                        break;
                    case '-':
                        c = a - b;
                        break;
                    case '*':
                        c = a * b;
                        break;
                    case '/':
                        c = a / b;
                        break;
                }
                st.push(to_string(c));
            }
            else
                st.push(s);
        }
        return stoll(st.top());
    }
};
