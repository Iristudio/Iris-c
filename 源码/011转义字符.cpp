#include<iostream>
using namespace std;

int main() {
	//ת���ַ� ���� ���ڱ�ʾ������ʾ������ASCII�ַ�
	//�ֽ׶����ǳ��õ�ת���ַ��� \n \\ \t
	//���з� \n
	cout << "hello\nworld"<<endl;

	//����б�� ����������һ��\ �϶��ᱨ����Ϊ��ת���ַ� ������дһ��\����Ҫд\\��
	cout << "\\" << endl;

	//ˮƽ�Ʊ�� \t �൱��tab
	cout << "aaa\thelloworld" << endl;
	cout << "a\thelloworld" << endl;
	cout << "aaaaa\thelloworld" << endl;
	//���ֻ�ÿո�ﲻ��ˮƽЧ��
	cout << "aaa helloworld" << endl;
	cout << "a helloworld" << endl;
	cout << "aaaaa helloworld" << endl;


	system("pause");
	return 0;

}