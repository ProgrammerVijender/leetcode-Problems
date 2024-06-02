class Solution {
public:
    void reverseString(vector<char>& s) {

        int end = s.size()-1;
        int start = 0;
        int mid = (start+end) / 2 ;
        // char temp;

        for(int i=0; i<=mid; i++)
        {
            char temp=s[i];
            s[i]=s[end-i];
            s[end-i] = temp;
        }
    }
};

