class Solution {
public:
    bool isValid(string s) {
    stack<char> bracket;
    int i=0,n=s.length();
    while(i<n)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') bracket.push(s[i]);
        else if(!bracket.empty() && abs(s[i]-bracket.top())<=2) bracket.pop();
        else return false;
        i++;
    }
    if(bracket.empty()) return true;
    return false;
    }
};