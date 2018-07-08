#include <iostream>
using namespace std;

class CDAccount{
	
	public:
	
	CDAccount();
	CDAccount(double new_balance, double new_interest_rate, double new_term);
	double get_initial_balance();
	double get_balance_at_maturity();
	double get_interest_rate();
	int get_term();
	void input(istream &istr);
	void output(ostream &ostr);
	
	private:
	double balance;
	double interest_rate;
	int term;
};
