class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        deque<int> m;
        
        for(int i=0;i<k;i++){
            if(m.size()==0){
                m.push_back(a[i]);
            }
            else{
                while( m.size()>0 && m.back()<a[i] ){
                    m.pop_back();
                }
                m.push_back(a[i]);
            }
        }
        
        vector<int> ans;
        ans.push_back(m.front());
        int j = 0;
        
        for(int i=k;i<n;i++){
            if(m.front()==a[j]){
                m.pop_front();
            }
            if(m.size()==k){
                m.pop_front();
            }
            while( m.size()>0 && m.back()<a[i] ){
                    m.pop_back();
                }
            m.push_back(a[i]);
            ans.push_back(m.front());
            j++;
        }
        
        return ans;
    }
};