class Solution {
public:
    int pivotInteger(int n) {
        int i=1;
        int j=n;
        int sumLeft=0;
        int sumRight=0;
        while(i<j){
            if(sumLeft==sumRight){
                sumLeft+=i;
                sumRight+=j;
                i++;
                j--;
            }else if(sumLeft>sumRight){
                sumRight+=j;
                j--;
            }else{
                sumLeft+=i;
                i++;
            }
        }
        if(sumLeft==sumRight){
            return i;
        }else{
            return -1;
        }
    }
};