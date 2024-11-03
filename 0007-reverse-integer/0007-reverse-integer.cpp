class Solution {
public:
    int reverse(int x) {
        int z=x;
         int ans=0;
        while(z!=0)
        {
           int temp = z%10;
           if((ans > INT_MAX/10) or (ans < INT_MIN/10))
           
           {
            return 0 ;
           }
           ans = ans *10+temp;
           //}
            z=z/10;
        }
        return ans;
    }
};