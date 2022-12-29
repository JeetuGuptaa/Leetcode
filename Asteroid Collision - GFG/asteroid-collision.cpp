//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        stack<int> state;
        
        int i=0;
        while(i<N){
            if(state.empty()){
                state.push(asteroids[i]);
                i++;
            }
            else if((state.top()>0 && asteroids[i]>0) || (state.top()<0 && asteroids[i]<0) || (state.top()<0 && asteroids[i]>0)){
                state.push(asteroids[i]);
                i++;
            }
            else{
                if(abs(state.top())==abs(asteroids[i])){
                    state.pop();
                    i++;
                }
                else if(abs(state.top()<abs(asteroids[i]))){
                    state.pop();
                }
                else i++;
            }
        }
        
        vector<int> ans(state.size());
        
        for(int i=state.size()-1;i>=0;i--){
            ans[i] = state.top();
            state.pop();
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends