#include<iostream>
using namespace std;

//���ַ��෽ʽ
	//���������� ��Ϊ �вι��� �� �޲ι���(Ĭ�Ϲ���)
	//�����ͷ��� ��Ϊ ��ͨ���� �� ��������
class person {
public:
	//��ͨ���캯��
	person() {
		cout << "person���޲ι��캯������" << endl;
	}

	person(int a) {
		age = a;
		cout << "person���вι��캯������" << endl;
	}
	
	//�������캯��
	person(const person &p) {//������������ϵ��������� ������������
		age = p.age;
		cout << "person�Ŀ������캯������" << endl;
		}

	//����
	~person(){
		cout << "person��������������" << endl;
	}

	int age;
};

void test1() {
	person p1;//,Ĭ�Ϲ��캯������
	//���ֵ��÷���
	//1.���ŷ�
	person p2(10);//��Ϊ����ȥ�����Ͳ��� ���л�����вι��캯��
	person p3(p2);//��Ϊ����ȥ��person���� ���Ի���ÿ������캯��

	cout << "p2��age:" << p2.age << endl;
	cout << "p3��age(��p2���ƹ�����):" << p3.age << endl;
	//����Ĭ�Ϲ��캯��ʱ ��Ҫ��()
	//person p(); ���д������ ����������Ϊ����һ������������ ������Ϊ�ڴ�������

	//2.��ʾ��
	person p5 = person(10);
	person p6 = person(p5);


	cout << "p5��age:" << p5.age << endl;
	cout << "p6��age(��p5���ƹ�����):" << p6.age << endl;

	person(10);//���Ǹ��������� �ص� ��ǰ��ִ�н����� ϵͳ�������ͷŵ���������
	cout << "aaaaa" << endl;//���л�ûִ�� ��һ�е��õ����������Ѿ�ִ����
	
	//ע������2 ��Ҫ���ÿ������캯�� ��ʼ��һ����������
	//person (p3);
	//�������� ���������Զ����Ե�() Ҳ���������¶�����һ��p3
							
	//3.��ʽת����
	person p7 = 10;//�൱�� д�� person p7 = person(10);
	person p8 = p7;//��������


}

int main() {
	test1();


	system("pause");
	return 0;
}
