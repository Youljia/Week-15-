#include<iostream>
#include<string>
using namespace std;

//暴力匹配法
//函数意义--》在s中找是否包含t,包含的话返回第一个下标，不包含的话返回-1
int string_match(string s, string t) {
	//如果目标字符串的长度大于源字符串的长度的话就直接退出
	if (s.length() < t.length())return -1;
	//时间复杂度为|s|*|t|
	for (int i = 0; i + t.length() - 1 < s.length(); ++i) {
		int j = 0;
		for ( j ; j < t.length(); ++j) {
			if (s.at(i + j) != t.at(j))break;
		}
		if (j == t.length()) return i;
	}
	return -1;
}
int main() {
	string s("nihaoa");
	string t("ha");
	cout << string_match(s, t) << endl;
	string t1("nihaoaa");
	cout << string_match(s, t1) << endl;
	string t2("nie");
	cout << string_match(s, t2) << endl;
}