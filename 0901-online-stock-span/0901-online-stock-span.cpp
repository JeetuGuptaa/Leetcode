class StockSpanner {
public:
    int *a;
    int index;
    StockSpanner() {
        index = -1;
        a = new int[100001];
    }
    
    int next(int price) {
        int count = 1;
        index++;
        a[index] = price;
        for(int i=index-1;i>=0;i--){
            if(a[i]<=a[index]){
                count++;
            }
            else{
                break;
            }
        }
        
        return count;
    }
    ~StockSpanner(){
        delete []a;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */