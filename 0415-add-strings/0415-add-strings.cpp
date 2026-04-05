class Solution {
public:
    string addStrings(string num1, string num2) {
        int i=num1.size()-1;
        int j=num2.size()-1;

        int carry=0;
        string res="";

        while(i>=0 || j>=0 ||carry){
            int sum=carry;
            if(i>=0){
                sum+=num1[i]-'0';
                i--;
            }

            if(j>=0){
                sum+=num2[j]-'0';
                j--;
            }
            res+=(sum%10)+'0';
            carry=sum/10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};

//This problem is solved by simulating the manual addition of two numbers. We start from the last digits of both strings using two pointers and maintain a carry variable. In each step, we add the digits of both strings along with the carry, where characters are converted to integers using 'digit - '0'. The result digit (sum % 10) is converted back to a character and appended to the result string, and the carry is updated as sum / 10. This process continues until all digits are processed and no carry remains. Since the result is built in reverse order, we finally reverse the string to get the correct answer. This approach works efficiently for very large numbers without converting them into integers.