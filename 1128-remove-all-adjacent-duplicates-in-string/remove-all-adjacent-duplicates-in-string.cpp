class Solution {
public:
    string removeDuplicates(string s) {
       stack<char>st;
       for(int i=0;i<s.size();i++){
        if(!st.empty() && s[i]==st.top()){
            st.pop();
        }
        else{
            st.push(s[i]);
        }
       }
       string result="";
       while(!st.empty()){
        result=st.top()+result;
        st.pop();
       }
       return result;
    }
};