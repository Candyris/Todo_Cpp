#include "Todo.h"
#include <iostream>

void Todo::Run()
{
	// Start by display the options to select from.
	DisplayMenu();
}

void Todo::DisplayMenu() const
{
	std::cout << "Todo List Manger: \n" 
			   "1. Add New tasks \n" // (description, due date, prioty).
			   "2. View all tasks \n" // it will include all the current pending tasks left. 
			   "3, Mark task as complete \n" // here will report porgression, completion of the task
			   "4. Delete task \n" // we delete the current incomplete task from here
			   "5. Search / filter task \n" // we sort tasks by priority or due data / character/ progression 
			   "6. Save / Load \n" // we here save the task in the CSV file or database in sqlite(may be)
}
