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
void menu() {//主菜单
	cout << "欢迎来到通讯录管理系统" << endl;
	cout << "1.添加联系人" << endl;
	cout << "2.显示所有联系人" << endl;
	cout << "3.删除联系人信息" << endl;
	cout << "4.查找联系人信息" << endl;
	cout << "5.修改联系人信息" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}

void add(index* i1) {//添加联系人

	if (i1->size == max) {
		cout << "存储数量已经满" << endl;
		return ;
	}
	else {
		string name1;
		cout << "请输入姓名:" << endl;
		cin >> name1;
		i1->m1[i1->size].name = name1;

		int age1;
		cout << "请输入" << name1 << "的年龄:" << endl;
		cin >> age1;
		i1->m1[i1->size].age = age1;

		string sex1;
		cout << "请输入" << name1 << "的性别" << endl;
		cin >> sex1;
		i1->m1[i1->size].sex = sex1;

		int tel1;
		cout << "请输入" << name1 << "的电话号码" << endl;
		cin >> tel1;
		i1->m1[i1->size].tel = tel1;

		string address1;
		cout << "请输入" << name1 << "的家庭住址" << endl;
		cin >> address1;
		i1->m1[i1->size].address = address1;
		cout << "添加完成" << endl;

		system("pause");
		system("cls");
	}
		i1->size++;
}

void check(index * i1){//显示所有联系人
	if (i1->size == 0) {
		cout << "空" << endl;
	}
	else
	{
		for (int i = 0;i < i1->size;i++) {
			cout << i+1
				<< ".姓名:" << i1->m1[i].name
				<< " 年龄:" << i1->m1[i].age
				<< " 性别:" << i1->m1[i].sex
				<< " 电话:" << i1->m1[i].tel
				<< " 住址:" << i1->m1[i].address << endl;
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
				cout << "查无此人" << endl;
			}
			else {
				cout << "找到此人 其序号为" <<del(&i1,name2) + 1<< endl;
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
				cout << "欢迎下次使用" << endl;
				system("pause");
				return 0;
				break;
			default:
				cout << "无此功能" << endl;
			}
	}

	system("pause");
	return 0;
}
 