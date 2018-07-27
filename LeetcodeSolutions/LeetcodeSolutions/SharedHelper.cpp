#include "CommonHeaders.h"

#include <sstream>

using namespace std;
//static
void
CSharedHelper::PrintResult(vector<int> v) {
	stringstream ss;
	ss << "[";
	for (int i = 0; i < v.size(); ++i) {
		const char* ext = i == v.size() - 1 ? "]\n" : ", ";
		ss << v[i] << ext;
	}
	cout << ss.str();
}

//static
void
CSharedHelper::PrintResult(int v) {
	cout << v << endl;
}
