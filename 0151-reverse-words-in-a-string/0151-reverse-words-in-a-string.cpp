class Solution {
public:
    
    void reverse(string &s, int end){
        int start =0;
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    
     void reverse(string &s,int start, int end){
        
        while(start<end){
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    
    string reverseWords(string s) {
        if(s.size()==1) return s;
        int nextIndex = 0;
        int startIndex = 0;
        bool endSpace = true;
        
        while(startIndex<s.size()){
            if(s[startIndex]!=' '){
                s[nextIndex] = s[startIndex];
                nextIndex++;
                endSpace = false;
            }
            else if(endSpace == false){
                s[nextIndex] = ' ';
                nextIndex++;
                endSpace = true;
            }
            startIndex++;
        }
        
        if(s[nextIndex-1]==' '){
            nextIndex--;
        }
        
        reverse(s, nextIndex-1);
       // return s.substr(0, nextIndex);
        
        startIndex = 0;
        //endWord = 0;
        for(int endWord=0;endWord<nextIndex;endWord++){
            if(s[endWord]==' '){
                reverse(s, startIndex, endWord-1);
                startIndex = endWord+1;
            }
        }
        
        reverse(s, startIndex, nextIndex-1);
        return s.substr(0, nextIndex);
        

    }
};