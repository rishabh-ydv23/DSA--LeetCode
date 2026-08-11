class Solution {
public:
    int sumSquare(int n){
        int sum=0;

        while(n>0){
            int num=n%10;
            sum+=num*num;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        set<int>st;
        
        while(n!=1){
            if(st.count(n)){
                return false;
            }

            st.insert(n);
            n=sumSquare(n);
        }
        return true;
    }
};