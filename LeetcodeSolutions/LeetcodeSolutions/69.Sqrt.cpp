/**
/*
/* Sqrt
/* Created by XLiu - 2018/7/20
/*
**/

#include "CommonHeaders.h"

class Solution {
public:
	int mySqrt(int x) {
		if (x <= 1) return x;
		int left = 0, right = x;
		while (left < right) {
			int mid = left + (right - left) / 2;
			if (x / mid >= mid) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		return right - 1;
	}
};

#ifdef Q69
int main() {
	int testCase = 0;
	cout << "Please provide test case(-1 to quit): ";
	while (testCase >= 0) {
		cin >> testCase;
		Solution s;
		int result = s.mySqrt(testCase);
		CSharedHelper::PrintResult(result);
	}
}
#endif