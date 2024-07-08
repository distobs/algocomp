class Solution {
public:
    string getEncryptedString(string s, int k) {
        size_t slen = s.length();
        string lixo;

        for (size_t i = 0; i < slen; ++i) {
            lixo.push_back(s[(i + k) % (slen)]);
        }

        return lixo;
    }
};
