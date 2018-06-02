#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() 
{
	int n1 , n2 , m ;
	cout << "Enter n " << endl ;
	cin >> n1 >> n2 ;
	cout << "Enter m " << endl ;
	cin >> m ;
		int sum;
		sum = n1 + n2 ;
			 if(sum > m)
				 {
				 	cout << "Sum of digits n is greater than m";
				 }
			 else 
				 {
				 	cout << "Sum of digits n is less than m";
				 }
		 
	
	return 0;
	
}
