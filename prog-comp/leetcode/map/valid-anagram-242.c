// https://leetcode.com/problems/valid-anagram/

bool isAnagram(char* s, char* t) {
    int ascii[128] = {0};
    int n = strlen(s);

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        ++ascii[s[i]];
        --ascii[t[i]];
    }

    for (char i = 'a'; i <= 'z'; ++i) {
        if (ascii[i] != 0) {
            return false;
        }
    }

    return true;
}
