#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account
{
public:
	//Constructor
	Account() : initialInvestmentAmount(0.0), monthlyDeposit(0.0), annualInterest(0), numOfYears(0) {}


	//Getters and Setters
	void SetInitialInvestmentAmount(double initialInvestmentAmount);
	double GetInitialInvestmentAmount();

	void SetMonthlyDeposit(double monthlyDeposit);
	double GetMonthlyDeposit();

	void SetAnnualInterest(double annualInterest);
	double GetAnnualInterest();

	void SetNumOfYears(int numOfYears);
	int GetNumOfYears();


private:
	//necessary variables
	double initialInvestmentAmount;
	double monthlyDeposit;
	double annualInterest;
	int numOfYears;
};


#endif

