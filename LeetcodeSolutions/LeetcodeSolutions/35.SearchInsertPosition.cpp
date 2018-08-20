/**
/*
/* Search Insert Position
/* Created by XLiu - 2018/8/19
/*
**/

#include "CommonHeaders.h"

#include <vector>

class Solution
{
public:
	int searchInsert(vector<int>& nums, int target) {
		int head = 0;
		int tail = nums.size();
		int mid = (head + tail) / 2;

		while (true) {
			if (nums[mid] == target || head >= tail) {
				return mid;
			}
			if (nums[mid] < target) {
				if (head == mid) {
					return mid + 1;
				}
				head = mid;
				mid = (head + tail) / 2;
			}
			else {
				tail = mid;
				mid = (head + tail) / 2;
			}
		}

		// O(n) deprecated answer.
		/*for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] == target || nums[i] > target){
				return i;
			}
		}
		return (int)nums.size();*/
	}
};

#ifdef Q35
int main() {
	Solution s;
	vector<int> nums = { 1,3,5,6 };
	int result = s.searchInsert(nums, 10);
	CSharedHelper::PrintResult(result);
	getchar();
}
#endif