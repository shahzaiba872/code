# include <iostream>
using namespace std ;
int main (){
	int num, reversednum = 0 ;
	cout<< "Enter an integer :";
	cin>> num ;
	int isnegative= num < 0 ? -1 : 1 ;
	num *= isnegative ;
	for(; num > 0 ; num /= 10){
		int digit = num % 10 ;
		reversednum =reversednum * 10 + digit ;
		cout <<" reversednumber :" << reversednum << endl ;
	}
	return 0;
}
