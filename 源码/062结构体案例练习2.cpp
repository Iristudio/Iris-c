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
		cout<<"Ó¢ÐÛÃû×Ö:" << arr[i].name << endl;
		cout << "Ó¢ÐÛÄêÁä:" << arr[i].age << endl;
		cout << "Ó¢ÐÛÐÔ±ð:" << arr[i].sex << endl;
		cout << endl;
	}
}


int main() {

	hero arr[5] = {
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"}
	};
	
	int len = sizeof(arr) / sizeof(arr[0]);
	
	ageorder(arr,len);

	print(arr,len);


	system("pause");
	return 0;
}