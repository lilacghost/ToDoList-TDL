/*
* Main.cpp
*
Version information
* Author: Shannon Murray
* Date: 22/02/2018
* Main for ToDoList
* Copyright notice
*/

#include <iostream>
#include <string>

#include "List.h"
#include "Task.h"

using namespace std;

int main()
{

	List L1;
	L1.AddTask("Buy milk", "tomorrow");


	int ans = 0;
	while (ans != 6)
	{
		cout << "Please enter the correct number for the corresponding action: " << endl;
		cout << "1. Add a task " << endl;
		cout << "2. Remove a task " << endl;
		cout << "3. List all tasks " << endl;
		cout << "4. Save List " << endl;
		cout << "5. Load List " << endl;
		cout << "6. Close the program " << endl;
		cin >> ans;
		cin.ignore();
		system("cls");

		if (ans == 1) {
			string taskDescription;
			cout << "Please enter a task: " << endl;
			getline(cin, taskDescription);

			string dueDate;
			cout << "Please enter a due date: " << endl;
			getline(cin, dueDate);

			L1.AddTask(taskDescription, dueDate);
			system("Pause");
			system("cls");
		}

		if (ans == 2) {
			string taskDescription;
			cout << "Please enter an existing task to remove: " << endl;
			cin >> taskDescription;
			L1.RemoveTask(taskDescription);
			system("Pause");
			system("cls");
		}

		if (ans == 3) {
			//passing a vector from FlightSytem.cpp to a temp local vector
			vector<Task> AllTasks = L1.ListAllTasks();
			for (size_t i = 0; i < AllTasks.size(); i++)
			{
				cout << "Task: " << AllTasks[i].GetTaskDescription() << endl;
				cout << "Due: " << AllTasks[i].GetDueDate() << endl << endl;
			}
			system("Pause");
			system("cls");

			if (ans == 4) {
				//save the list
			}

			if (ans == 5) {
				//load the list
			}
		}
	}

}


