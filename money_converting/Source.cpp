#include <iostream>
#include <format>
using namespace std;

int main() {
	double dollar{};
	const int quarters{ 25u };
	const int dimes{ 10u };
	const int nickels{ 5u };
	const int pennies{ 1u };

	cout << "This program will convert dollars to quarters, dimes, nickels and pennies.";
	cout << "Please, enter your ammount of money between 0 and 10 dollars.";
	cin >> dollar;

	if (dollar > 10 || dollar < 0) {
		cout << "You entered a wrong amount of money. Try again";
		return 1;
	}

	int in_cents = dollar * 100;
	int quarters_amount = in_cents / quarters;
	in_cents %= quarters;

	int dimes_amount = in_cents / dimes;
	in_cents %= dimes;

	int nickles_amount = in_cents / nickels;
	in_cents %= nickels;

	int pennies_amount = in_cents / pennies;
	in_cents %= pennies;

	cout << format("You need {} {}, {} {}, {} {} and {} {}",
		quarters_amount, quarters_amount == 1 ? "quarter" : "quarters",
		dimes_amount, dimes_amount == 1 ? "dime" : "dimes",
		nickles_amount, nickles_amount == 1 ? "nickel":"nickels",
		pennies_amount, pennies_amount==1?"penny":"pennies");


	return 0;
}