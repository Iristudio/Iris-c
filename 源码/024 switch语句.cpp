#include<iostream>
using namespace std;

int main() {
	cout << "请对这部电影打分 1-10分" <<endl;
	int a = 0;
	cin >> a;
	switch (a) 
	{
		case 10:
			cout << "您认为这部电影很经典" << endl;
			break;//退出当前分支
		case  9:
			cout << "您认为这部电影很经典" << endl;
			break;
		case  8:
			cout << "您认为这部电影比较好" << endl;
			break;
		case  7:
			cout << "您认为这部电影比较好" << endl;
			break;
		case  6:
			cout << "您认为这部电影很一般" << endl;
			break;
		case  5:
			cout << "您认为这部电影很一般" << endl;
			break;
		default://除以上情况之外
			cout << "你认为这是一部烂片" << endl;
	}
	//if与switch区别
	//switch缺点:判断的时候只能是整型或字符型 不可以是一个区间
	//switch优点:结构清晰,执行效率高


	system("pause");
	return 0;
}