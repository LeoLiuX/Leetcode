/**
/*
/* Jewels and Stones
/* Created by XLiu - 2018/8/19
/*
**/

#include "CommonHeaders.h"

class Solution
{
public:
	int numJewelsInStones(string J, string S) {
		static int charMap[255];
		int rst = 0;
		for (char c : J) {
			charMap[c] = 1;
		}
		for (char c : S) {
			if (charMap[c]) {
				rst++;
			}
		}
		return rst;
	}
};
#ifdef Q771
int main() {
	string J = "b";
	string S = "aAAbbbb";
	Solution s;
	int result = s.numJewelsInStones(J, S);
	CSharedHelper::PrintResult(result);
	getchar();
}
#endif