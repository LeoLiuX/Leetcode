/**
/*
/* Reverse Words in a String III
/* Created by XLiu - 2018/8/29
/*
**/

#include "CommonHeaders.h"

class Solution {
public:
	string reverseWords(string s) {
		int tail = 0;
		int nextMarker = 0;
		int strLen = s.length();
		for (int i = 0; i < strLen; ++i) {
			tail = i + 1;
			while (tail < strLen && !isspace(s[tail])) tail++;
			nextMarker = tail;
			while (i < tail) swap(s[i++], s[--tail]);
			i = nextMarker;
		}
		return s;
	}
};

#ifdef Q557
int main() {
	string input("Let's take LeetCode contest");
	Solution s;
	string result = s.reverseWords(input);
	CSharedHelper::PrintResult(result);
	getchar();
}
#endif