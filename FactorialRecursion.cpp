#include<iostream>
using namespace std;
int Fib(int givenNumber);
int main (){
	int givenNumber;
	cin >> givenNumber;
	cout << Fib(givenNumber);
	
	return 0;
}

int Fib(int givenNumber){
	if(givenNumber >= 3){ return Fib(givenNumber-1) + Fib(givenNumber -2);}
	else {return 1;}
}
