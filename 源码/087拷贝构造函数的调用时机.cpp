#include<iostream>
using namespace std;

//�������캯���ĵ���ʱ��
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
//2.ֵ���ݵķ�ʽ �������Ĳ�����ֵ
//3.ֵ��ʽ���ؾֲ�����

class person {
public:
	person() {
		cout << "personĬ�Ϲ��캯��" << endl;
	}
	person(int mage) {
		age = mage;
		cout << "person�вι��캯��" << endl;
	}
	person(const person &p){
		age = p.age;
		cout << "person�������캯��" << endl;
	}

	~person() {

	}
	
	int age;
};

//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ������
void test1() {
	person p1(20);
	person p2(p1);
	cout << "p2��age��" << p2.age << endl;
}
//2.ֵ���ݵķ�ʽ �������Ĳ�����ֵ
void dowork(person p) {
	
}

void test2() {
	person p;//Ĭ�Ϲ��캯��
	dowork(p);//�������캯��
}

//3.ֵ��ʽ���ؾֲ�����
person dowork2() {
	person p;
	return p;
}
void test3() {
	person p = dowork2();

}


int main() {
	test1();


	system("pause");
	return 0;
}
