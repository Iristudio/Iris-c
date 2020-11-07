#include<iostream>
#include<iomanip>
using namespace std;

struct stu {
	string name;
	int score;
};

struct tea {
	string name;
	stu s[5];
};

void bishe(tea t2[], int len){
	string str[3] = {"平冢静","橘阳菜","桐须真冬"}; 
	string str2[3][5] = {
		{"樱满集","桐老爷","诚哥","咲太师傅","当妈"},
		{"楪祈","亚丝娜","世界","樱岛麻衣","炮姐"},
		{"爱花","加藤惠","霞之丘诗羽","食蜂","千鹤"}
	};
	for (int i = 0;i < len;i++) {
		t2[i].name = str[i];;
		cout << "老师姓名: " << t2[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			t2[i].s[j].name = str2[i][j];
			cout <<"              学生姓名:"<< t2[i].s[j].name << "成绩是: ";

			int random = rand() % 60 + 40;
			t2[i].s[j].score = random;
			cout << t2[i].s[j].score << endl;
		}
	}



}

int main() {

	tea t1[3];
	int len = sizeof(t1) / sizeof(t1[0]);

	bishe(t1, len);

	system("pause");
	return 0;
}
