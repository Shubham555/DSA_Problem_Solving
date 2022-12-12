class Solution {
public:
    bool squareIsWhite(string c) {    // We have Converted String name "coordinates" to "c";
            return (c[0] + c[1]) % 2; 
    }
};

//  OR return (c[0] - 'a' + c[1] - '1') % 2;
