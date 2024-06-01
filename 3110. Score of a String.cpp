class Solution {
public:
    int scoreOfString(string s) {
        int i=0,n=s.length()-1;
        int sum = 0;
        while(i<n)
        {
            int a = abs(s[i+1] - s[i]);
                sum += a;

        i++;
        }
        
        return sum;
    }
};