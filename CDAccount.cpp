#include <iostream>
#include "CDAccount.h"

CDAccount::CDAccount()
{
	balance = 0;
	interest_rate = 0;
	term = 0;
}
	CDAccount::CDAccount(double new_balance, double new_interest_rate, double new_term)
	{
	balance = new_balance;
	interest_rate = new_interest_rate;
	term = new_term;
	}
	double CDAccount::get_initial_balance()
	{
		return balance;

	}
	double CDAccount::get_interest_rate()
	{
		return interest_rate;
	
	}
	int CDAccount::get_term()
	{
		return term;
	}
	double CDAccount::get_balance_at_maturity()
	{
		double interest = balance * (interest_rate/100)*(term/12.0);
		return balance + interest;
	}
	
	void CDAccount::input(istream &istr)
	{
	istr >>balance;
	istr >>interest_rate;
	istr >> term;
		
	}
	void CDAccount::output(ostream &ostr)
	{
		ostr.setf(ios::fixed);
		ostr.setf(ios ::showpoint);
		ostr.precision(2);
		
		ostr <<"CD Account initial balance is " <<get_initial_balance() << endl;
		ostr <<"CD Account interest rates is " << get_interest_rate() << endl;
		ostr <<"When your CD matures in "<<get_term() <<" months" <<endl;
		ostr <<"It will have "<<get_balance_at_maturity() <<" dollars"<<endl;
		
		
		
	}
