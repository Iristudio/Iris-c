#include<iostream>
using namespace std;

//thisָ��
//c++ͨ���ṩ����Ķ���ָ�� ,thisָ�� �����������.thisָ��ָ�򱸵��õĳ�Ա���������Ķ���

//thisָ��������ÿһ���Ǿ�̬�����ڵ�һ��ָ��
//thisָ�벻��Ҫ���� ֱ��ʹ�ü���

//thisָ�������
//���β����Ա����ͬ��ʱ ������thisָ��������
//����ķǾ�̬��Ա�����з��ض������� ��ʹ��return *this


class person {
public:
	person(int age) {
		this->age = age;
		//�������д�� age = age;�������������ǰһ��age���Ϊ��Ա�����������Ϊ�β�
		//������ʹ��thisָ�� ��������֪�����age�ǵ�ǰ�����ĳ�Ա����age
	}

	person& personaddage(person p) {//�������������һ��Ҫ���� ��Ȼһ��ִ��֮��ᴴ��һ���µĶ��� ������һֱ��һ��
		this->age += p.age;//�����this�����湹�캯��ͬ��
		return *this;
		//����42�е����ε��� ������õ�һ�εĵ���֮���ܼ������� ���Ǿ�Ҫ�������ȥȷ��ÿһ�ζ��Ƕ����ĵ���
	}

	int age;
};

void test1() {
	person p1(18);
	cout << "p1��������" << p1.age << endl;
}

void test2() {
	person p2(10);
	person p3(10);

	p3.personaddage(p2).personaddage(p2).personaddage(p2);//Ϊ���������ĺ������óɹ����� ����Ҫ�ú������ص��ǵ�ǰ���� ֻ�Ƕ����еĳ�Ա�ı���

	cout << "p3��age��" << p3.age << endl;
}

int main() {
	test1();
	test2();


	system("pause");
	return 0;
}
