class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>A;// create map
        for(auto p:s)// count no. of time charachter occur in s
        {
            A[p]++;
        }
        for(auto p:t)//count no. of time charachter occur in t
        {
            A[p]++;
        }
        for(auto m:A)// scan map 
        {// if any element occur odd time means that element creating difference
            if(m.second%2==1)
            {
                return m.first;
            }
        }
        char a;
        return a;
    }
};
