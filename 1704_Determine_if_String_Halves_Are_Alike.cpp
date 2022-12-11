class Solution {
public:
    int vowelsCount(string S){
        
        int count =0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='a'|| S[i]=='e' || S[i]=='i'|| S[i]=='o'|| S[i]=='u'|| S[i]=='A'|| S[i]=='E'|| S[i]=='I'|| S[i]=='O'|| S[i]=='U' ){
                count++;
            }
        }
        return count;
    }
    bool halvesAreAlike(string s) {
        // string a = s.substr(0,(s.size()/2)-1);
        // string b = s.substr(s.size()/2,s.size()-1);
        string a = s.substr(0,(s.size()/2));
        string b = s.substr(s.size()/2,s.size()-1);
        cout<<a.size() << b.size()<<endl;
     
        if(vowelsCount(a)==vowelsCount(b)){
            return true;
        }
        return false;
    }
};
