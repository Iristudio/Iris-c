#include<iostream>
using namespace std;

int* func() {
	//�ڶ��������������� 
	//new������������һ��ָ�� ���������͵�ָ��
	int* p = new int(10);
	return p;
}


//�ڶ�������new��������
void test() {
	int* arr = new int[10];//�����10�Ǵ�����������10��Ԫ��
	for (int i = 0;i < 10;i++){
		arr[i] = i + 100;
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;//�ͷ�һ��������Ҫ��delete���һ��[] ��ʾ��Ҫɾһ������
}


int main() {
	int* p = func();
	cout << *p << endl;
	//���������� �ɳ���Ա������ ����Ա�����ͷ� 
	//����ͷŶ��������� ���ùؼ��� delete

	delete p;
	 cout << *p << endl;

	//cout << p << endl; ��һ����ʵ�ǷǷ����� ��vs2019������� 
	 cout << "---------------------------------------------------------------------" << endl;
	 test();

	system("pause");
	return 0;
}
