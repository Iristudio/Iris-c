#include<iostream>
using namespace std;
//����Ȩ��
//����
//����Ȩ�� public		��Ա ���ڵĿ��Է��� ������Է���
//����Ȩ�� protected	��Ա ���ڵĿ��Է��� ���ⲻ���Է���
//˽��Ȩ�� private		��Ա ���ڵĿ��Է��� ���ⲻ���Է���
//������˽��Ȩ�޵�����
//���Ժ�ѧ���ļ̳��� ���õ� 
//����Ȩ�� ������Է��ʸ����еı�������
//˽��Ȩ�� ���಻���Է��ʸ����е�˽������

class person {
public:		//����Ȩ��
	string name;

protected:	//����Ȩ�� 
	string sex;

private:	//˽��Ȩ��
	int password;

public:
	void func() {
		name = "���";
		sex = "��";
		password = 123456;
	}

};




int main() {

	//ʵ����һ������
	person p1;
	p1.name = "�G��"; //�������� ������Ҳ���Է��ʵ�
	//p1.sex = "Ů" ����Ȩ�޵����� ��������ʲ���
	//p1.password = 654321; ˽��Ȩ�޵����� ��������ʲ���


	p1.func(); 

	system("pause");
	return 0;
}
