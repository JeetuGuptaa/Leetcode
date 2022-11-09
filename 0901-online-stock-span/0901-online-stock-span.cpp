class StockSpanner {
public:
    vector<pair<int, int>> v;
    StockSpanner() {

    }
    
    int next(int price) {
        v.push_back({price, 1});
        int count = 0;
        int i = v.size()-1;
        
        while(i>=0){
            if(v[i].first<=v[v.size()-1].first){
                count+=v[i].second;
                i = i-v[i].second;
               
                continue;
            }
            else{
                break;
            }
            i--;
        }
        v[v.size()-1].second = count;
        return v[v.size()-1].second;
        
    }
   
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */