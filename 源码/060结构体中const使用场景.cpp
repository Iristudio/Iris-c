#include<iostream>
using namespace std;

struct student {
	string name;
	int age;
	int score;
};
//��ַ���ݵĺô� ֻ��Ҫ���ĸ��ֽڴ�С��ָ����� ���ð����е����Զ�����һ�� 
//�������е��βθĳ�ָ�� ���Լ����ڴ�ռ� ���ḳֵ�µĸ���
void printstudent(const student * p) {
	// ���ǵ�ַ��������ı��βεĻ� ʵ��Ҳ����Ÿı� �������ǿ�����ָ��ǰ ��һ��const
	//p->age = 150; �����ͻ�ֱ�ӱ��� ����const�� һ�����޸ĵĲ����Ϳ��Ա��� ���Է�ֹ���ǵ������

	cout << "ѧ��������" << p->name
		<< "ѧ��������" << p->age
		<< "ѧ���ķ���" << p->score << endl;



}

int main() {
	student s1 = { "Զ����",19,99 };

	printstudent(&s1);

	system("pause");
	return 0;
}
