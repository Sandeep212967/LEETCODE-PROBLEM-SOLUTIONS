class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        int a , b ;
        stack<int> st;
     for(int i=0;i<n;i++){
        string op=tokens[i];
        if(op=="+"||op=="-"|| op=="*"|| op=="/"){
            b=st.top();
            st.pop();
            a=st.top();
            st.pop();
         if(op=="+"){
         st.push(a+b);
         }
         else if(op=="-"){
         st.push(a-b);
         }
         else if(op=="*"){
         st.push(a*b);
         }
         else{
         st.push(a/b);
         }
        }
        else {
            st.push(stoi(op));
        }
    }
    return st.top();
    }
};