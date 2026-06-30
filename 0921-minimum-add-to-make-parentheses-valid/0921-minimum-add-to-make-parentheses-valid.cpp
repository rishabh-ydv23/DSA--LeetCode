class Solution {
public:
    int minAddToMakeValid(string s) {
        int balance=0;
        int ans=0;

        for(char ch:s){
            if(ch=='('){
                balance++;
            }else{
                if(balance>0){
                    balance--;
                }else{
                    ans++;
                }
            }
        }
        return ans+balance;
    }
};

// balance = kitne '(' abhi tak close nahi hue.
// ans = kitne brackets hume add karne pad rahe hain.

// '(' → balance++
// ')':
// agar balance > 0 → balance--
// warna ans++
// Final answer = ans + balance