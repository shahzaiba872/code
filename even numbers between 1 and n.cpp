#include <iostream>
using namespace std ;
int  main() {
	int n ;	
	cout<<"Enter a positive integer :";
	cin>>n;
	cout<<"Multiplication table from 1 to "  << n << "are : " ;
	for(int i=1 ; i<=n;i++){
	for(int j=1 ; j<=n ; j++)
	{
			
	
	cout<< i <<" x"<<j<<" = "<< i*j << "\t";
}
    cout << endl; 
}
	return 0 ;
}

