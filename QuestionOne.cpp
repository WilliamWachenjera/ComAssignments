#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

	// Getting a random number
	int daysUntilExpirationDay = rand() % 12;

	//subscription expired
	if(daysUntilExpirationDay == 0){
		cout << "Your subscription has expired" << endl;
	}
	//subscription expires within a day
	else if(daysUntilExpirationDay == 1){
	    cout << "Your subscription expires within a day!" << endl;
		cout << "Renew now and save 20% ! " << endl;
	}
	//when subscription expires in 5 days or less
	else if(daysUntilExpirationDay <= 5){
		cout << "Your subscription expires in " <<daysUntilExpirationDay<< " days!" << endl;
		cout << "Renew now and save 10% !" << endl;
	
	}
	//subscription expires in 10 days
	else if(daysUntilExpirationDay == 10){
	    cout << "You have an active subscription" << endl;
	}
	else
	//when subscription expires in 10 days or less than that
	cout << "Your subscription expires soon. Renew now!" << endl;

	return 0;
}