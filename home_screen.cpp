#include "screens.h"

void AppScreens::Home(string name) 
{
	if (name == "Admin")
	{
		cout << "Welcome to admin credentials, " << name << "!" << endl;
	}
	else 
	{
		cout << "Welcome to application, " << name << "!" << endl;
	}

}