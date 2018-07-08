#include <iostream>
#include <fstream>
#include "CDAccount.h"
using namespace std;

int main()
{
	CDAccount My_account(100, 10, 6);
	My_account.output(cout);
	cout<<"Please enter your new initial balance, bank rate and the terms in term of months"<<endl;
	My_account.input(cin);
	
	ofstream file_out;
	file_out.open("Account_info.text");
	 if (file_out.fail())
	 {
		 cout<< "Oops! This file cannot be opened "<<endl;
		 exit(1);
	}
	My_account.output(file_out);
	file_out.close();
	return 0;
}
