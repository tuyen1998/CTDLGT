#include<iostream>
using namespace std;

int UCLN(int a, int b){
	if(a == b)return a;
	else
	if(a > b){
		UCLN(b, a-b);
	}else UCLN(a, b-a);
	}
	



int main(){
	
	int a, b;
	cin >> a;
	cin >> b;
	cout << UCLN(a, b);
	return 0;
	
}
