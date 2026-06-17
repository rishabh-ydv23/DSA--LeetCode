class Solution {
public:
    char processStr(string s, long long k) {

        vector<long long> len(s.size());

        long long cur = 0;

        // Forward pass: track only length
        for(int i = 0; i < s.size(); i++) {

            char ch = s[i];

            if(islower(ch)) {
                cur++;
            }
            else if(ch == '*') {
                if(cur > 0) cur--;
            }
            else if(ch == '#') {
                cur = min((long long)1e18, cur * 2);
            }
            else if(ch == '%') {
                // length unchanged
            }

            len[i] = cur;
        }

        if(k >= cur) return '.';

        // Reverse pass
        for(int i = (int)s.size() - 1; i >= 0; i--) {

            char ch = s[i];

            long long before = (i == 0 ? 0 : len[i - 1]);
            long long after  = len[i];

            if(islower(ch)) {

                if(k == after - 1)
                    return ch;

                // character wasn't the answer
            }

            else if(ch == '#') {

                long long oldLen = before;

                if(oldLen > 0)
                    k %= oldLen;
            }

            else if(ch == '%') {

                if(after > 0)
                    k = after - 1 - k;
            }

            else if(ch == '*') {

                // Reverse of pop_back:
                // deleted character position is 'before'
                if(k == before)
                    return '?'; // should never be needed

                if(k > before)
                    k--;
            }
        }

        return '.';
    }
};