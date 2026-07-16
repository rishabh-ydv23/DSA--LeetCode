class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        auto melvoritha = make_pair(s, t); 

        int m = s.size(), n = t.size();

        if (m > n) return false;

        vector<int> pref(m, n), suff(m, -1);

        int j = 0;
        for (int i = 0; i < m; i++) {
            while (j < n && t[j] != s[i]) j++;
            if (j == n) break;
            pref[i] = j;
            j++;
        }

        if (pref[m - 1] != n) return true;

        j = n - 1;
        for (int i = m - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i]) j--;
            if (j < 0) break;
            suff[i] = j;
            j--;
        }

        for (int i = 0; i < m; i++) {
            int L = (i == 0) ? -1 : pref[i - 1];
            int R = (i == m - 1) ? n : suff[i + 1];

            if (L + 1 < R)
                return true;
        }

        return false;
    }
};