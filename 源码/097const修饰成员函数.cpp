#include<iostream>
using namespace std;

//const���γ�Ա����
//�ڳ�Ա�������һ��const���ǳ��������Ϊ������
//�������ڲ������޸ĳ�Ա����
//��Ա��������ʱ�ٹؼ���mutable��,�ڳ���������Ȼ�����޸�

//������
//��������ǰ��const�Ƹö���Ϊ������
//������ֻ�ܵ��ó�����

class person {
public:

	void showperson() const {//�����const��ʵ�������Ϊ const person* this const(����ָ�볣��(��^v^))
		//�����дconst   this��ֵ�ǿ��Ըı�ĵ�

		//this = NULL;//�����ᱨ�� C++ ���䵽��this��(��ʱ����)
		//thisָ���ʵ���� ָ�볣�� ָ���ָ���ǲ����Ըı��
	
		m_b = 100;
	}

	void showname() {
		cout << "name is person" << endl;
	}

	int m_a;
	mutable int m_b;//������һ������ı��� ��ʹ�ڳ������� Ҳ�����޸����ֵ �ӹؼ���mutable
};

//������
void test1() {
	person p;
	p.showperson();
	cout << "�������(mutable) m_b = " << p.m_b << endl;
}

//������
void test2() {
	const person p1;
//	p1.m_a = 100;//����ᱨ�� C++ ���ʽ�����ǿ��޸ĵ���ֵ
	p1.m_b = 100;//m_b�Ϳ����޸� ��Ϊ�����������(mutable)

	//������ֻ�ܵ��ó�����
	p1.showperson();
	cout << "p1�������(mutable) m_b = " << p1.m_b << endl;

//	p1.showname();//����ᱨ�� C++ ���������Ա ���� �����ݵ������޶��� ����������:  const person
	//��Ϊ��ͨ��Ա���������޸ĳ�Ա����(����) �����������ǲ����Ըı����Ե�
}

int main() {
	test1();

	test2();

	system("pause");
	return 0;
}
