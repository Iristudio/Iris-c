#include <iostream>
using namespace std;
#include <string>

int main() {
	//�ַ������� ���ڱ�ʾһ���ַ�
	/*�����ֱ�﷽ʽ
	* c���Է��
	  char ������[] = "�ַ���ֵ";
	  c++���Է��
	  string ������ = "�ַ���ֵ";
	*/
	char str1[] = "hello world";//ע��Ҫ�ڱ��������[] ��Ȼ�����ַ��ͱ����� ע��2 Ҫʹ��˫���Ű����ַ�������ֵ
	cout << str1 << endl;

	string str2 = "hello world";
	cout << str2 << endl;//ע�������ʹ��string��������Ҫ�ڿ�ʼ��ͷ�ļ�#include<string>

	system("pause");
	return 0;
}