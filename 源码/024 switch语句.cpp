#include<iostream>
using namespace std;

int main() {
	cout << "����ⲿ��Ӱ��� 1-10��" <<endl;
	int a = 0;
	cin >> a;
	switch (a) 
	{
		case 10:
			cout << "����Ϊ�ⲿ��Ӱ�ܾ���" << endl;
			break;//�˳���ǰ��֧
		case  9:
			cout << "����Ϊ�ⲿ��Ӱ�ܾ���" << endl;
			break;
		case  8:
			cout << "����Ϊ�ⲿ��Ӱ�ȽϺ�" << endl;
			break;
		case  7:
			cout << "����Ϊ�ⲿ��Ӱ�ȽϺ�" << endl;
			break;
		case  6:
			cout << "����Ϊ�ⲿ��Ӱ��һ��" << endl;
			break;
		case  5:
			cout << "����Ϊ�ⲿ��Ӱ��һ��" << endl;
			break;
		default://���������֮��
			cout << "����Ϊ����һ����Ƭ" << endl;
	}
	//if��switch����
	//switchȱ��:�жϵ�ʱ��ֻ�������ͻ��ַ��� ��������һ������
	//switch�ŵ�:�ṹ����,ִ��Ч�ʸ�


	system("pause");
	return 0;
}