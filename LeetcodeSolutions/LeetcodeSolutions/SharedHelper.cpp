#include "CommonHeaders.h"

#include <sstream>

using namespace std;
//static
void
CSharedHelper::PrintResult(vector<int> in) {
	stringstream ss;
	ss << "[";
	for (int i = 0; i < in.size(); ++i) {
		const char* ext = i == in.size() - 1 ? "]\n" : ", ";
		ss << in[i] << ext;
	}
	cout << ss.str();
}

//static
void
CSharedHelper::PrintResult(int in) {
	cout << in << endl;
}

//static
void
CSharedHelper::PrintResult(string in) {
	cout << in << endl;
}
