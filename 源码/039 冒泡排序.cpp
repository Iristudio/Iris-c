#include<iostream>
using namespace std;

int main() {
	int arr[9] = { 4, 2, 8, 0, 5, 7, 1, 3, 9 };

	//��ʼð������
	//�����������Ϊ Ԫ�ظ��� - 1;
	//ÿ�ζԱȵĴ��� = Ԫ���ܸ��� - ��ǰ��������� - 1;

	for (int i = 0;i < 9 - 1;i++) {//������������ѭ��

		for (int j = 0;j < 9 - i -1;j++) {//���ǶԱȴ�����ѭ�� 
			if (arr[j] > arr[j + 1]) {//��������һ�����ֱȵڶ������ִ� ��ô�ͽ������������λ��
				int temp = arr[j];		//int temp ����ʱ���ٵ�һ���ڴ�ռ� ���ڴ��潻��λ��ʱ ������λ�õı���
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	cout << "�����" << endl;
	for (int i = 0;i < 9;i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}