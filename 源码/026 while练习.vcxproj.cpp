#include<iostream>
#include<time.h>
using namespace std;


int main() {

	//ϵͳ���������
	srand((unsigned int)time(NULL));//�����д��һ�� rand��������ȫ��������� �����������������
	int a = rand() % 100 + 1; //rand��c++�������������һ�ַ��� �﷨rand()%���� �ͻ�����0������-1��Χ�ڵ�һ�������
	//����Ҫ1-100�������ֻ��Ҫ��rand()%100���һ��1
		cout << a << endl;

		int val = 0;
		int b = 1;
			while (val != a)
			{
				cin >> val;
				if (b < 5) {
					if (val > a) {
						cout << "�������������,������һ����" << endl;
						++b;
					}
					else if (val < a) {
						cout << "�����������С,������һ����" << endl;
						++b;
					}
					else if (val = a) {
						cout << "���¶���" << endl;
						break;
					}
				}
				else {
					cout << "��Ϸ����,��ʧ����" << endl;
					break;
				}
			}
			
		
		system("pause");
		return 0;
}