#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        // Find the maximum number of candies any kid has
        int maxi = 0;
        for (auto candie : candies)
            maxi = max(maxi, candie);

        vector<bool> ans;

        // Check if each kid can have the most candies after getting extraCandies
        for (auto candie : candies)
        {
            if (candie + extraCandies >= maxi)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }

        return ans;
    }
};

int main()
{
    // Test case
    Solution solution;
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;

    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);

    // Output the results
    cout << "Result: ";
    for (bool hasMaxCandies : result)
    {
        cout << (hasMaxCandies ? "true " : "false ");
    }
    cout << endl;

    return 0;
}
