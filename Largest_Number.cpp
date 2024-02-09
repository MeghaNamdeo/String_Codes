class Solution {
public:
    static bool mycomp(string a, string b)
    {
        string t1 = a + b;
        string t2 = b + a;
        return t1 > t2;

    }
    string largestNumber(vector<int>& nums) {
        //step 1 :convert array into string
        vector<string>snums;
        for(auto n : nums)
        {
            snums.push_back(to_string(n));
        }
        //step 2 :sort in descending order 
        sort(snums.begin() , snums.end(), mycomp);
        //handle "00..." case 
        if(snums[0]=="0")
        return "0";
        string ans ="";
        for(auto str: snums)
        {
            ans+=str;
        }
        return ans;

    }
};
