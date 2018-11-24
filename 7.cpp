class Solution {
public:
    int reverse(int x) {
        if(x>=2147483648)return 0;
        if(x<-2147483648)return 0;
        long long g=0;
        while(x)
        {
            g=(g*10)+(x%10);
            x/=10;
        }
        if(g>=2147483648)return 0;
        if(g<-2147483648)return 0;
        return g;
    }
};
