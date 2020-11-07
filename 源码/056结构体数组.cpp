#include<iostream>
using namespace std;
#include<string>

//创建结构体 
struct student {
	string name;
	int age;
	int score;
};

int main() {
	//创建结构体数组
	struct student stuArray[3] = {
		{"雪之下雪乃",17,99},
		{"由比滨结衣",17,91},
		{"一色伊吕波",16,93}
	};
	//给结构体中的元素赋值
	stuArray[2].name = "平冢静";
	stuArray[2].age = 27;
	stuArray[2].score = 88;

	//遍历结构体数组
	for (int i = 0; i < 3;i++) {
		cout << "姓名:" << stuArray[i].name << "  年龄:" << stuArray[i].age << "  成绩:" << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}
