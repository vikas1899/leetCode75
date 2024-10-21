#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string gcdOfStrings(string str1, string str2)
    {
        if (str1 + str2 != str2 + str1)
        {
            return "";
        }
        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }

private:
    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main()
{
    Solution solution;
    string str1 = "ABCABC", str2 = "ABC";
    cout << solution.gcdOfStrings(str1, str2) << endl;
    return 0;
}
