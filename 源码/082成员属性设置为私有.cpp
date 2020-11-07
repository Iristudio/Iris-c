#include<iostream>
using namespace std;

//将成员属性设置为私有

//优点1 将所有成员属性设置为私有 可以自己控制读写权限
//优点2 对于写权限 我们可以检测数据的有效性

class person {
	
public:
	void setname(string name1) {
		name = name1;
	}

	string getname() {
		return name;
	}

	void setage(int age1) {
		if(age1 > 150 || age1 <0){
			cout << "你个不是人的玩意" << endl;
			age = 0;
			return;
		}
			age = age1;
	}

	int getage() {
		return age;
	}

	void setlover(string lover1) {
		lover = lover1;
	}
private:
	//姓名 可读可写
	string name;
	//年龄 可读可写
	int age;
	//情人 只可写
	string lover;
};

int main() {

	person p1;
	p1.setname("孟昊");


	cout << "姓名是:" << p1.getname() << endl;
	int b = 0;
	cout << "请输入年龄" << endl;
	cin >> b;
	p1.setage(b);

	cout << "年龄是:" << p1.getage() << endl;

	string a = "无";
	cout << "请输入您的情人" << endl;
	cin >> a;
	p1.setlover(a);

	system("pause");
	return 0;
}
