#include <iostream>
#include "../../headers/vector/vector.h"
using namespace std;

// void maximumSubarray(vector<int> &vec, int size)
// {
//     int res = vec[0];
//     for (int i = 0; i < size; i++)
//     {
//         int currentSum = 0;
//         for (int j = i; j < size; j++)
//         {
//             currentSum += vec[j];
//             cout << currentSum << " ";
//             res = max(currentSum, res);
//         }
//         cout << endl;
//     }

//     cout << res;
// }

class Solution {
    public:
        int maxSubArray(vector<int>& nums) {
            int res = nums[0];
        for (int i = 0; i < nums.size(); i++)
        {
            int currentSum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                currentSum += nums[j];
                res = max(currentSum, res);
            }
        }
        return res;
    }

};

