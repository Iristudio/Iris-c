#include<iostream>
using namespace std;
#include<string>

//�Զ�����������  һЩ���ͼ��ϳ�һ������ 
//�﷨ struct ��������{  ��Ա�б�  }
struct student {  //������һ���������� student����
	//�������student�ĳ�Ա�б�
	string name;//����
	int age;//����
	int score;//����
}s3;//������ڶ���ṹ�崴������

int main() {
	//struct ����student���͵ı��������ַ���
	//1. struct �������� ������;
	struct student s1;
	//��s1�����Ը�ֵ ͨ�����ʽṹ������е�����
	s1.name = "���ư���";
	s1.age = 18;
	s1.score = 99;

	cout << "����:" << s1.name << "  ����:" << s1.age << "  �ɼ�:" << s1.score << endl;

	//2.struct �������� ������ = { ... };
	struct student s2 = {"menghao",20,100};
	cout << "����:" << s2.name << "  ����:" << s2.age << "  �ɼ�:" << s2.score << endl;

	//3 �ڶ���ṹ��ʱ˳�㴴���ṹ����� ��12��
	s3.name = "�G��";
	s3.age = 18;
	s3.score = 99;
	cout << "����:" << s3.name << "  ����:" << s3.age << "  �ɼ�:" << s3.score << endl;

	//�ڴ����ṹ�������ʱ�� struct�ؼ��ֿ���ʡ��
	student s4;
	//���� ����ṹ��ʱ struct��������
	//�ṹ������ò����� . �����ʳ�Ա ���� s1.name

	system("pause");
	return 0;
}
