#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string ans = "";
        int l1 = word1.size();
        int l2 = word2.size();
        int siz = max(l1, l2);
        for (int i = 0; i < siz; i++)
        {
            if (i < word1.size())
                ans += word1[i];
            if (i < word2.size())
                ans += word2[i];
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    string word1 = "abc";
    string word2 = "pqr";
    cout << sol.mergeAlternately(word1, word2) << endl;
    return 0;
}
