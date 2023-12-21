/***********************************************************************************
**                                                                                **
** Student Name: Amanda Kerr                                                      **
** Project Name: Project2                                                         **
** Course: CS210                                                                  **
** Date: 30 July 2023                                                             **
** Description: Simple investment app                                             **
**                                                                                **
***********************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <stdlib.h>


using namespace std;

void CalculateWithAdditionalDeposit(double initialInvestment, double monthlyDeposit, double annualInterest, int numOfYears) {
	double currBalance = initialInvestment;
	double yearEndBalance = 0.0;
	double yearEndInterest;
	cout << fixed << setprecision(2);


	for (int i = 0; i < 64; ++i) {
		cout << "=";
	}
	cout << endl;
	cout << "     Balance and Interest With Additional Monthly Deposits     " << endl;
	for (int i = 0; i < 64; ++i) {
		cout << "=";
	}
	cout << endl;
	cout << "    Year        Year End Balance      Year End Earned Interest" << endl;
	for (int i = 0; i < 64; ++i) {
		cout << "-";
	}
	cout << endl;

	yearEndInterest = (initialInvestment + (monthlyDeposit)) * ((annualInterest / 100.0));
	yearEndBalance = yearEndInterest + currBalance + (monthlyDeposit *12);

	for (int i = 1; i <= numOfYears; ++i) {

		cout << "     " << i << "                   " << yearEndBalance << "                         " << yearEndInterest << endl;

		currBalance = yearEndBalance;
		yearEndInterest = currBalance + (monthlyDeposit) * ((annualInterest / 100.0) / 12);
		yearEndBalance = currBalance + yearEndInterest + (monthlyDeposit * 12);
	}



	cout << endl;
}

void CalculateWithoutAdditionalDeposit(double initialInvestment, double annualInterest, int numOfYears) {
	double currBalance = initialInvestment;
	double yearEndBalance = 0.0;
	double yearEndInterest= 0.0;

	cout << fixed << setprecision(2);

	for (int i = 0; i < 64; ++i) {
		cout << "=";
	}
	cout << endl;
	cout << "   Balance and Interest Without Additional Monthly Deposits    " << endl;
	for (int i = 0; i < 64; ++i) {
		cout << "=";
	}
	cout << endl;
	cout << "    Year        Year End Balance      Year End Earned Interest" << endl;
	for (int i = 0; i < 64; ++i) {
		cout << "-";
	}
	cout << endl;

	yearEndInterest = (initialInvestment) * ((annualInterest / 100.0) / 12);
	yearEndBalance = yearEndInterest + currBalance;

	for (int i = 1; i <= numOfYears; ++i) {

		cout << "     " << i << "                   " << yearEndBalance << "                         " << yearEndInterest << endl;

		currBalance = yearEndBalance;
		yearEndInterest = (currBalance) * ((annualInterest / 100.0));
		yearEndBalance = currBalance + yearEndInterest;
	}

	cout << endl;
	
}

void Start() {
	for (int i = 0; i < 26; ++i) {
		cout << "*";
	}
	cout << endl;
	cout << "******* Data Input *******" << endl;
	cout << "Initial Investment Amount: \nMonthly Deposit: \nAnnual Interest: \nNumber of years: " << endl;
	system("pause");
	system("CLS");
}

void EndCheck() {
	char userInput = ' ';

	system("CLS");

	for (int i = 0; i < 26; ++i) {
		cout << "*";
	}

	cout << endl;
	cout << "   Change amounts?" <<" Y/N   ";
	cout << endl;
	for (int i = 0; i < 26; ++i) {
		cout << "*";
	}

	cout << endl;
	cin >> userInput;
	userInput = toupper(userInput);

	if (userInput == 'Y') {
		system("CLS");
		return;
		
	}

	else if (userInput == 'N') {

		cout << "Thank you for using our services!" << endl;
		exit(0);

	}

	while (userInput != 'Y' && userInput != 'N') {
		cout << "Invalid entry, please use Y or N.";
		cin >> userInput;
		userInput = toupper(userInput);
		system("CLS");

		if (userInput == 'N') {
			cout << "Thank you for using our services!" << endl;
			exit(0);
		}

	}
}

int main()
{
	double initialInvestmentAmount;
	double monthlyDeposit;
	double annualInterest;
	int numOfYears;
	bool run = true;

	Start();

	while (run) {

		for (int i = 0; i < 26; ++i) {
			cout << "*";
		}
		cout << endl;
		cout << "******* Data Input *******" << endl;
		cout << "Initial Investment Amount:  $";
		cin >> initialInvestmentAmount;
		cout << "Monthly Deposit:  $";
		cin >> monthlyDeposit;
		cout << "Annual Interest:  %";
		cin >> annualInterest;
		cout << "Number of years:  ";
		cin >> numOfYears;

		system("CLS");


		CalculateWithAdditionalDeposit(initialInvestmentAmount, monthlyDeposit, annualInterest, numOfYears);

		CalculateWithoutAdditionalDeposit(initialInvestmentAmount, annualInterest, numOfYears);

		system("pause");

		EndCheck();
	}
	return 0;
}