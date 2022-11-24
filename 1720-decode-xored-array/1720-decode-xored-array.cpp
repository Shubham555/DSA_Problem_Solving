class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr;  
        arr.push_back(first); // Means Element is pushed at 0th position of arr i.e. arr[0];
        
        for(int i=0;i<encoded.size();i++){
         arr.push_back(encoded[i]^arr[i]); //In 1st iteration it takes arr[i] = arr[0],Bcoz i is 0 in 1st itr
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