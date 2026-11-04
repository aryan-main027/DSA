// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         unordered_map<char, int> charIndexS;
//         unordered_map<char, int> charIndexT;

//         for (int i = 0; i < s.length(); i++) {
//             if (charIndexS.find(s[i]) == charIndexS.end()) {
//                 charIndexS[s[i]] = i;
//             }

//             if (charIndexT.find(t[i]) == charIndexT.end()) {
//                 charIndexT[t[i]] = i;
//             }

//             if (charIndexS[s[i]] != charIndexT[t[i]]) {
//                 return false;
//             }
//         }

//         return true;   
//     }
// };
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int> smap(256, -1);
        vector<int> tmap(256, -1);

        for(int i = 0; i < s.size(); i++) {

            int a = (unsigned char)s[i];
            int b = (unsigned char)t[i];

            if(smap[a] != -1 && smap[a] != b)
                return false;

            if(tmap[b] != -1 && tmap[b] != a)
                return false;

            smap[a] = b;
            tmap[b] = a;
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna