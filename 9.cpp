#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int nn;
	cin >> nn;
	
  	if (nn%2==0)
   {for (int i=2;i<=(int)sqrt(nn);i++)
	 if (nn%i==0)
	if (i*i!=nn) cout << i-1 <<" " << nn/i << " ";
    else cout << i<< " ";}
  if (nn%2!=0){
  
      for (int i=3;i<=(int)sqrt(nn);i=i+2)
        if (nn%i==0)
          if (i*i!=nn) cout << i <<" "<< nn/i << " ";
              else cout << i << " ";}
	cout << nn ;
	
	
	return 0;
}
