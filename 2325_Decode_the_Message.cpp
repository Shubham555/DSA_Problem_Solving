class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;
        int temp = 'a';
        for (auto it : key) {
            if (it != ' ' && mp.find(it) == mp.end()) {
                mp[it] = temp++;
                // cout<<it<<"->"<<mp[it]<<endl;
            }
        }

        string decodedMessage = "";
        for (auto it : message) {
            if (it != ' ') {
                decodedMessage += mp[it];
            } else {
                decodedMessage += ' ';
            }
        }
        return decodedMessage;
    }
};

// h-'a'
// a-'b'
// p-'c'
// y-'d'
// b-'e'
// o-'f'
//

// mp['h']='a'
