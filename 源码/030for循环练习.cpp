#include<iostream>
using namespace std;

int main() {
	for (int i = 1;i < 101;i++) {
		int a = i % 10;
		int b = i / 10;
		if (a == 7 || b==7 || i%7 == 0) {
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}

	/*for{
		if(i%7==0 || i/10==7 || i%10==7){
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}
	}
		
		
		
	*/
	}

}