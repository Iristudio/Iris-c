#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};

int main() {
	//�����ṹ�����
	student s = { "saber",20,100 };

	//ͨ��ָ��ָ��ṹ�����
	student* p = &s;//��Ϊ��Ҫ���������Զ�������� ����ָ�������ҲӦ�������Զ��������

	//ͨ��ָ����ʽṹ����������� ��Ҫ�� ->
	cout << "����:" << p->name << "  ����:" << p->age << "  ����:" << p->score << endl;




	system("pause");
	return 0;
}
