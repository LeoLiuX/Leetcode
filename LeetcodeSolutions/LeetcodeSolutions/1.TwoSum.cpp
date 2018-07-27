/**
/*
/* Two Sum
/* Created by XLiu - 2018/7/20
/*
**/

#include "CommonHeaders.h"

#include <vector>
#include <unordered_map>

using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int, int> targetIdMap;
		for (int i = 0; i < nums.size(); ++i) {
			if (targetIdMap[nums[i]] == 0) {
				targetIdMap[target - nums[i]] = i + 1;
			}
			else {
				return { targetIdMap[nums[i]] - 1, i };
			}
		}
	}
};

#ifdef Q1
int main() {
	vector<int> nums = { 2, 7, 11, 15 };
	int target = 9;
	Solution s;
	vector<int> result = s.twoSum(nums, target);
	CSharedHelper::PrintResult(result);
	getchar();
}
#endif