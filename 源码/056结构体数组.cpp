#include<iostream>
using namespace std;
#include<string>

//�����ṹ�� 
struct student {
	string name;
	int age;
	int score;
};

int main() {
	//�����ṹ������
	struct student stuArray[3] = {
		{"ѩ֮��ѩ��",17,99},
		{"�ɱȱ�����",17,91},
		{"һɫ������",16,93}
	};
	//���ṹ���е�Ԫ�ظ�ֵ
	stuArray[2].name = "ƽڣ��";
	stuArray[2].age = 27;
	stuArray[2].score = 88;

	//�����ṹ������
	for (int i = 0; i < 3;i++) {
		cout << "����:" << stuArray[i].name << "  ����:" << stuArray[i].age << "  �ɼ�:" << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}
