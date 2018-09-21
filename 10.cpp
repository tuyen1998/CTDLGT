#include<iostream>
using namespace std;

void Nhiphan(int x){
	int b = x;
	
	if(x){
		Nhiphan(x / 2);
		cout << x%2;
	}
}
int main(){
	int x;
	cin >> x;
	Nhiphan(x);
	return 0;
}
