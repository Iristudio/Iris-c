#include<iostream>
using namespace std;

//����Ա��������Ϊ˽��

//�ŵ�1 �����г�Ա��������Ϊ˽�� �����Լ����ƶ�дȨ��
//�ŵ�2 ����дȨ�� ���ǿ��Լ�����ݵ���Ч��

class person {
	
public:
	void setname(string name1) {
		name = name1;
	}

	string getname() {
		return name;
	}

	void setage(int age1) {
		if(age1 > 150 || age1 <0){
			cout << "��������˵�����" << endl;
			age = 0;
			return;
		}
			age = age1;
	}

	int getage() {
		return age;
	}

	void setlover(string lover1) {
		lover = lover1;
	}
private:
	//���� �ɶ���д
	string name;
	//���� �ɶ���д
	int age;
	//���� ֻ��д
	string lover;
};

int main() {

	person p1;
	p1.setname("���");


	cout << "������:" << p1.getname() << endl;
	int b = 0;
	cout << "����������" << endl;
	cin >> b;
	p1.setage(b);

	cout << "������:" << p1.getage() << endl;

	string a = "��";
	cout << "��������������" << endl;
	cin >> a;
	p1.setlover(a);

	system("pause");
	return 0;
}
