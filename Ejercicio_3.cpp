#include <iostream>
using namespace std;


	
	int suma(int num1,int num2){
	int resultado=0;
	resultado = num1 + num2;
	cout<<resultado<<endl;
	
	}
		void suma(int &num1,int &num2,int num3){
	int resultado=0;
	num1+=1;
	num2+=1;
	resultado = num1 + num2 + num3;
	cout<<resultado<<endl;
	}
	
main(){	
	int a=20, b= 30,c=5;
	suma(a,b,c);
	cout<<a<<endl;
	cout<<b<<endl;
	
	
	system("pause");
}
