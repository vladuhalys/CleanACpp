#ifndef h_dev_main
#define h_dev_main

#include "screens.h"

void dev_main()
{
	cout << "Dev main is running!" << endl;
	AppScreens::Home("Admin");
}

#endif