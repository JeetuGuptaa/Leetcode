class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int commonx1=0, commonx2=0, commony1=0, commony2=0, area;
        area = abs((ax2-ax1)*(ay2-ay1)) + abs((bx2-bx1)*(by2-by1));
        
        
        if(bx1<=ax2 && bx1>=ax1){
            commonx1 = bx1;
        }
        else if(ax1>=bx1 && bx2>=ax1){
            commonx1 = ax1;
        }
        
        
        if(bx2<=ax2 && bx2>=ax1){
            commonx2 = bx2;
        }
        else if(ax2<=bx2 && ax2>=bx1){
            commonx2 = ax2;
        }
        
        
        if(by1<=ay2 && by1>=ay1){
            commony1 = by1;
        }
        else if(ay1>=by1 && ay1<=by2){
            commony1 = ay1;
        }
        
        
        if(by2<=ay2 && by2>=ay1){
            commony2 = by2;
        }
        else if(ay2>=by1 && ay2<=by2){
            commony2 = ay2;
        }

        
        area = area - abs((commonx1-commonx2)*(commony1-commony2));
        return area;
        
    }
};