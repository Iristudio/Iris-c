#include<iostream>
using namespace std;
/*Ĭ������� c++���ٸ�һ���������������
* 1.Ĭ�Ϲ��캯�� (�޲� ������Ϊ��)
* 2.Ĭ����������(�޲� ������Ϊ��)
* 3.Ĭ�ϰ±����캯�� �����Խ���ֵ����
* 
* ����û������вκ��� c++�������ṩ�޲ι��� ���ǻ��ṩĬ�Ͽ�������
* ����û����忽�����캯�� c++�������ṩ�������캯��
* 
*/

class person {
public:
	person() {
		cout << "personĬ�Ϲ��캯������" << endl;
	}

	person(int age) {
		page = age;
		cout << "" << endl;
	}

	//person(const person& p) {
	//	cout << "person������������" << endl;
	//	page = p2.page;
	//}

	~person() {
		cout << "person����������������" << endl;
	}

	int page;
};

void test1() {
	person p1;
	p1.page = 10;
	person p2(p1);

	cout << "�������������age" << p2.page << endl;
}

int main() {
	test1();


	system("pause");
	return 0;
}
