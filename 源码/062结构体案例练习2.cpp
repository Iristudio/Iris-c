#include<iostream>
using namespace std;
#include<string>

struct hero {
	string name;
	int age;
	string sex;
};

void ageorder(hero arr[],int len) {
	for (int i = 0;i < len - 1; i++) {
		for (int j = 0;j < len - 1 - i;j++) {
			if (arr[j].age > arr[j+1].age) {
				hero h1 = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = h1;
			}
		}
	}
}

void print(hero arr[], int len) {
	for (int i = 0;i < len;i++) {
		cout<<"Ӣ������:" << arr[i].name << endl;
		cout << "Ӣ������:" << arr[i].age << endl;
		cout << "Ӣ���Ա�:" << arr[i].sex << endl;
		cout << endl;
	}
}


int main() {

	hero arr[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	
	ageorder(arr,len);

	print(arr,len);


	system("pause");
	return 0;
}