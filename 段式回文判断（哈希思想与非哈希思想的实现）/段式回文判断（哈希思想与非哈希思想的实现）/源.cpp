#include<iostream>
#include<string>
using namespace std;

/*
	��ʽ������������:
		volvo �����ֳ���Σ�v,o,l,v,o��Ȼ����һ��������
		���ǽ����ֳ����Σ�vo,l,vo����һ����ʽ����
		�ֳ�һ�Σ�Ҳ��һ����ʽ����
		���ҷ���ֵ��--�����Ķ���
	�������:
		1.�ǹ�ϣ˼���ʵ��
		2.���ù�ϣ˼����ʵ��
		ps:���ߵ�������ڱȽ����棬2��1���ַ����Ƚϣ�ת���������͵ıȽ�
*/
class Solution {
public:
	//���÷ǹ�ϣ˼��ķ���
	int is_dshw(const string& s) {
		return is_dshw(s, 0, s.length() - 1);
	}
private:
	//��[left,right]�н��зֶ�
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
	//�ж�s[left,i]��s[j,right]�Ƿ����
	//����ǰ������ƣ����������䳤��һ����һ����
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