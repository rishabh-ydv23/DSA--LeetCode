class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
        }
        // if all digits were 9
        digits.insert(digits.begin(),1);
        return digits;
    }
};

//Hum array ko peeche se (right to left) traverse karte hain. Agar kisi position par digit 9 se chhota hota hai, to hum usme +1 add karke turant return kar dete hain, kyunki carry wahi solve ho jata hai. Lekin agar digit 9 hota hai, to usko 0 bana dete hain, jo indicate karta hai ki carry next digit tak forward ho gaya. Phir loop agle (left side) digit par continue karta hai. Agar kisi point par digit 9 nahi milta, to usme +1 karke process wahi ruk jata hai. Aur agar saare digits 9 hote hain, to loop sabko 0 bana deta hai, aur end me hum array ke beginning me 1 insert kar dete hain, jisse final result milta hai (jaise 999 → 1000).