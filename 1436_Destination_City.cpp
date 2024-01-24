class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string, int>mp;

        // Iterate array to count outgoing edges for a vertice
        for(auto it:paths){
            mp[it[0]]++;
        }

        // checking an vertice for no outgoing edge
        for(auto it:paths){
            if(mp.find(it[0]) == mp.end()){
                return it[0];
            }
            else if(mp.find(it[1]) == mp.end()){
                return it[1];
            }
        }
        return "-1";
    }
};
