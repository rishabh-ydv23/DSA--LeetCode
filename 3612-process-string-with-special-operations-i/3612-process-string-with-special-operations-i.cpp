class Solution {
public:
    string processStr(string s) {
        string res="";
        for(char ch:s){
            if(islower(ch)) res+=ch;
            else if(ch=='*'){
                if(!res.empty())  res.pop_back();
            }else if(ch=='#') res+=res;
            else if(ch=='%') reverse(res.begin(),res.end());
        }
        return res;
    }
};


// class Solution {
// public:
//     string processStr(string s) {
//         string res="";
//         for(int i=0;i<s.length();i++){
//             if(islower(s[i])){
//                 res+=s[i];
//             }else if(s[i]=='*'){
//                 if(res.length()>0){
//                     res.pop_back();
//                 }
//             }else if(s[i]=='#'){
//                 res+=res;
//             }else if(s[i]=='%'){
//                 reverse(res.begin(),res.end());
//             }
//         }
//         return res;
//     }
// };