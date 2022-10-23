#include<iostream>
#include<string>
using namespace std;

/*
	段式回文问题描述:
		volvo 将它分成五段，v,o,l,v,o显然不是一个回文数
		但是将它分成三段，vo,l,vo就是一个段式回文
		分成一段，也是一个段式回文
		并且返回值是--》最多的段数
	解决方法:
		1.非哈希思想的实现
		2.利用哈希思想来实现
		ps:两者的区别就在比较上面，2将1的字符串比较，转化成了整型的比较
*/
class Solution {
public:
	//采用非哈希思想的方法
	int is_dshw(const string& s) {
		return is_dshw(s, 0, s.length() - 1);
	}
private:
	//在[left,right]中进行分段
	int is_dshw(const string& s, int left, int right) {
		if (left > right)return 0;
		int i = left;
		int j = right;
		for (i,j; i < j; ++i, --j) {
			if (is_equals(s, left, i, j, right))
				return 2 + is_dshw(s, i + 1, j - 1);
		}
		return 1;
	}
	//判断s[left,i]和s[j,right]是否相等
	//由于前面的限制，两个的区间长度一定是一样的
	bool is_equals(const string& s, int left, int i, int j, int right) {
		int a = left;
		int b = j;
		for (a,b; a <= i && b <= right; a++, b++) {
			if (s.at(a) != s.at(b))return false;
		}
		return true;
	}
};

int main() {
	Solution s;
	string t("volvo");
	cout << s.is_dshw(t);
	return 0;
}