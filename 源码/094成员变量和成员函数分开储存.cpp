#include<iostream>
using namespace std;

class person1 {
	//�յ���
};

class person2 {
	int m_a;//��һ���Ǿ�̬��Ա����
};


class person3 {
	int m_a;//��һ���Ǿ�̬��Ա����

	static int m_b;//��һ����̬��Ա����
};

class person4 {
	int m_a;//��һ���Ǿ�̬��Ա����

	void func() {//һ���Ǿ�̬��Ա����

	}
};

class person5 {
	int m_a;//��һ���Ǿ�̬��Ա����

	static void func() {//һ����̬��Ա����

	}
};

int main() {
	person1 p1;
	cout << "person1�Ķ����ڴ��С��" << sizeof(p1) << endl;//���Ϊ 1 
	//��Ȼ��һ���յ��� ������ռ��һ���ֽ� ��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶��ĵ�ַ

	person2 p2;
	cout << "person2�Ķ����ڴ��С��" << sizeof(p2) << endl;//���Ϊ 4
	//���������һ���������ڶ����Ϸ����ڴ�ĳ�Ա ����Ĵ�С�������ڶ����Ϸ����ڴ�ĳ�Առ�õ��ڴ�

	person3 p3;
	cout << "person3�Ķ����ڴ��С��" << sizeof(p3) << endl;//���Ϊ 4
	//˵����̬��Ա��������������Ķ�����

	person4 p4;
	cout << "person4�Ķ����ڴ��С��" << sizeof(p4) << endl;//���Ϊ 4
	//˵���Ǿ�̬��Ա��������������Ķ�����

	person4 p5;
	cout << "person5�Ķ����ڴ��С��" << sizeof(p5) << endl;//���Ϊ 4
	//˵����̬��Ա��������������Ķ�����

	system("pause");
	return 0;
}
