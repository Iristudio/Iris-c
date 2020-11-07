#include<iostream>
using namespace std;

int* func() {
	//在堆区创建整型数据 
	//new出来的数据是一个指针 该数据类型的指针
	int* p = new int(10);
	return p;
}


//在堆区利用new开辟数组
void test() {
	int* arr = new int[10];//这里的10是代表数组里有10个元素
	for (int i = 0;i < 10;i++){
		arr[i] = i + 100;
	}
	for (int i = 0;i < 10;i++) {
		cout << arr[i] << endl;
	}
	delete[] arr;//释放一个数组需要在delete后加一个[] 表示你要删一串数据
}


int main() {
	int* p = func();
	cout << *p << endl;
	//堆区的数据 由程序员管理开辟 程序员管理释放 
	//如果释放堆区的数据 利用关键字 delete

	delete p;
	 cout << *p << endl;

	//cout << p << endl; 这一句其实是非法操作 但vs2019可以输出 
	 cout << "---------------------------------------------------------------------" << endl;
	 test();

	system("pause");
	return 0;
}
