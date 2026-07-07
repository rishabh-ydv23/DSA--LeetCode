class Solution {
public:
    long long sumAndMultiply(int n) {
        string num=to_string(n);
        string str="";
        for(char ch:num){
            if(ch!='0'){
                str+=ch;
            }
        }

        if(str==""){
            return 0;
        }

        long long sum=0;
        for(char ch:str){
            ch=ch-'0';
            sum+=ch;
        }

        long long numi=stoll(str);
        long long ans=numi*sum;
        return ans;
    }
};