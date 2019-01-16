int comp(char b,char a)
{
    if(a=='{' && b=='}' || a=='[' && b==']' || a=='(' && b==')')
        return 1;
    
    else
        return 0;
        
}
string isBalanced(string s) {
 stack<char> st;
    //int f=0;
    for(int i;i<s.length();i++)
    {
        if(s[i]=='{'||s[i]=='('||s[i]=='[')
        {
            st.push(s[i]);
        }
        else if(st.empty()==true)
        {
            st.push(s[i]);
        }
        else  {
            char c = st.top();
            st.pop();
        if(comp(s[i],c)==0)
            {
             return "NO";
            }
        }
    }
    if(st.empty()==true)
      return "YES";
    else    return "NO"; 
}
