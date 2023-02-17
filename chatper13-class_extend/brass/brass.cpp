#include "brass.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;

format setFotmat();
void restore(format f,precis p);

Brass::Brass(const std::string &s,long an,double bal)
{
    fullName = s;
    an = an;
    balance = bal;
}

void Brass::Deposit(double amt)
{
    if(amt < 0)
        cout << "Negative deposit not allowed;"<< "deposit is cancelled.\n";
    else 
        balance += amt;
}

void Brass::Withdraw(double amt)
{
    format initialState = setFotmat();
    precis prec = cout.precision(2);

    if (amt < 0)
        cout << "Withdrawal amount must be positive;" << "withdrawal cancaled" ;
    else if(amt <= balance)
        balance -= amt;
    else 
        cout << "Withdrawal amount of $" << amt << " exceeds your balance.\n"
        << "Withdrawal cnaceled.\n";
    restore(initialState,prec);   
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ViewAcct() const
{
    format initialState = setFotmat();
    precis prec = cout.precision(2);
    cout << "Client " << fullName << endl;
    cout << "Balance: $" << balance << endl;
    restore(initialState,prec);
}

BrassPlus::BrassPlus(const Brass & b,double ml,double r): Brass(b)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}


BrassPlus::BrassPlus(const string & s,long an, double bal,double ml,double r): Brass(s,an,bal)
{
    maxLoan = ml;
    owesBank = 0.0;
    rate = r;
}

void BrassPlus::ViewAcct() const
{
    format initialState = setFotmat();
    precis prec = cout.precision(2);

    Brass:ViewAcct();
    cout << "Maximum load: $" << maxLoan << endl;
    cout << "Owed to bank $" << owesBank << endl;
    cout .precision(3);
    cout << "Loan Rate:" << 100 * rate << "%.\n";
    restore(initialState,prec);
}

void BrassPlus::Withdraw(double amt) 
{
    format initialState = setFotmat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if (amt <= bal)
    {
        Brass::Withdraw(amt);
    }
    else if(amt <= bal + maxLoan - owesBank)
    {
        double advance = amt - bal;
        owesBank += advance * (1.0 * rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * rate << endl;
        Deposit(advance);
        Brass::Withdraw(amt);
    }
    else
    {
        cout << "Credit limit exceeded. Transaction cancelled.\n" ;
    }
    restore(initialState,prec);
}


format setFotmat()
{
    return cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void restore(format f,precis prec)
{
    cout.setf(f,std::ios_base::floatfield);
    cout.precision(prec);
}