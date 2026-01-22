class Solution {
public:
    bool search(vector<int> &cand, int r, int tgt) {
        int l = 0;

        while (l <= r) {
            size_t m = (l + r) / 2;

            if (cand[m] == tgt) {
                return true;
            } else if (cand[m] > tgt) {
                r = m - 1;
            } else if (cand[m] < tgt) {
                l = m + 1;
            }
        }
    
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> cand = matrix[0];
        size_t wid = cand.size() - 1;

        for (vector<int> &v : matrix) {
            if (v[wid] == target) {
                return true;
            } else if (v[wid] > target) {
                cand = v;
                break;
            }
        }

        return search(cand, wid, target);
    }
};
