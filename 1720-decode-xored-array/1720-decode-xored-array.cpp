class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;  
        arr.push_back(first);
        
        for(int i=0;i<encoded.size();i++){
            arr.push_back(encoded[i]^arr[i]);
        }
        return arr;
    }
};

// java solution

/* public int[] decode(int[] A, int first) {
        int n = A.length, res[] = new int[n + 1];
        res[0] = first;
        for (int i = 0; i < n; ++i)
            res[i + 1] = res[i] ^ A[i];
        return res;
    }*/