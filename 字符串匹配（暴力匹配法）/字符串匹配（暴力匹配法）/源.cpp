#include<iostream>
#include<string>
using namespace std;

//����ƥ�䷨
//��������--����s�����Ƿ����t,�����Ļ����ص�һ���±꣬�������Ļ�����-1
int string_match(string s, string t) {
	//���Ŀ���ַ����ĳ��ȴ���Դ�ַ����ĳ��ȵĻ���ֱ���˳�
	if (s.length() < t.length())return -1;
	//ʱ�临�Ӷ�Ϊ|s|*|t|
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