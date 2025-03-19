class Solution {
public:
    int minOperations(vector<int>& nums) {
        int  n = nums.size() ;
        vector<int>check(n + 5 ,  0) ;
        int c = 0 ;
        int cnt =0 ;
        for(int i =0 ; i <  nums.size() ;  i++){
            c +=  check[i] ;
            int d =  c%2 ;
            
            if( d == 1 ){
                nums[i] = ! nums[i] ;
            }

            // cout<<c<<" "<<nums[i]<<endl;

            if(nums[i] == 0 ){
                c++; 
                cnt++;
                if(i + 2 <  n ){
                    check[i+3] -= 1 ;
                }
                else{
                    // cout<<i<<endl;
                    return  -1 ;
                }
            }

        }
        return  cnt ;

    }
};