#include<iostream>
using namespace std;
#define max 1000

struct message {
	string name;
	int age;
	string sex;
	long long tel;
	string address;
};

struct index {

	message m1[max];

	int size;
};
void menu() {//���˵�
	cout << "��ӭ����ͨѶ¼����ϵͳ" << endl;
	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ������ϵ��" << endl;
	cout << "3.ɾ����ϵ����Ϣ" << endl;
	cout << "4.������ϵ����Ϣ" << endl;
	cout << "5.�޸���ϵ����Ϣ" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
}

void add(index* i1) {//�����ϵ��

	if (i1->size == max) {
		cout << "�洢�����Ѿ���" << endl;
		return ;
	}
	else {
		string name1;
		cout << "����������:" << endl;
		cin >> name1;
		i1->m1[i1->size].name = name1;

		int age1;
		cout << "������" << name1 << "������:" << endl;
		cin >> age1;
		i1->m1[i1->size].age = age1;

		string sex1;
		cout << "������" << name1 << "���Ա�" << endl;
		cin >> sex1;
		i1->m1[i1->size].sex = sex1;

		int tel1;
		cout << "������" << name1 << "�ĵ绰����" << endl;
		cin >> tel1;
		i1->m1[i1->size].tel = tel1;

		string address1;
		cout << "������" << name1 << "�ļ�ͥסַ" << endl;
		cin >> address1;
		i1->m1[i1->size].address = address1;
		cout << "������" << endl;

		system("pause");
		system("cls");
	}
		i1->size++;
}

void check(index * i1){//��ʾ������ϵ��
	if (i1->size == 0) {
		cout << "��" << endl;
	}
	else
	{
		for (int i = 0;i < i1->size;i++) {
			cout << i+1
				<< ".����:" << i1->m1[i].name
				<< " ����:" << i1->m1[i].age
				<< " �Ա�:" << i1->m1[i].sex
				<< " �绰:" << i1->m1[i].tel
				<< " סַ:" << i1->m1[i].address << endl;
		}
	}
}

int del(index*  i2,string name3){
	for (int i = 0;i < max;i++) {
		if (i2->m1->name == name3) {
			return i;
		}
	}
	return -1;
}

void del2() {



}

int main() {
	index i1;
	i1.size = 0;
	
	int key = 0;
	while (true) {
		menu();
		cin >> key;
		switch (key) {
		case 1:
			add(&i1);
			break;
		case 2:
			check(&i1);
			break;
		case 3:
		 {
			string name2;
			cin >> name2;
			if (del(&i1, name2) == -1) {
				cout << "���޴���" << endl;
			}
			else {
				cout << "�ҵ����� �����Ϊ" <<del(&i1,name2) + 1<< endl;
			}
		 }	
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 0:
				cout << "��ӭ�´�ʹ��" << endl;
				system("pause");
				return 0;
				break;
			default:
				cout << "�޴˹���" << endl;
			}
	}

	system("pause");
	return 0;
}
 