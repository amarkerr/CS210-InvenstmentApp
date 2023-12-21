#include "Account.h"

void Account::SetInitialInvestmentAmount(double initialInvestmentAmount) {
	this->initialInvestmentAmount = initialInvestmentAmount;
}

double Account::GetInitialInvestmentAmount() {
	return initialInvestmentAmount;
}

void Account::SetMonthlyDeposit(double monthlyDeposit) {
	this->monthlyDeposit = monthlyDeposit;
}

double Account::GetMonthlyDeposit() {
	return monthlyDeposit;
}

void Account::SetAnnualInterest(double annualInterest) {
	this->annualInterest = annualInterest;
}

double Account::GetAnnualInterest() {
	return annualInterest;
}

void Account::SetNumOfYears(int numOfYears) {
	this->numOfYears = numOfYears;
}

int Account::GetNumOfYears() {
	return numOfYears;
}


