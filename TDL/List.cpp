/*
* List.cpp
*
Version information
* Author: Shannon Murray
* Date: 22/02/2018
* Copyright notice
*/

#include<vector>
#include<string>
#include<iostream>

#include "List.h"

//method to add task
void List::AddTask(std::string taskDescription, std::string dueDate) {
	Task newTask = Task(taskDescription, dueDate);
	newTask.SetDueDate(dueDate);
	newTask.SetTaskDescription(taskDescription);

	taskList_.push_back(newTask);
}

//method to view all
std::vector<Task> List::ListAllTasks() {
	return taskList_;
}

//method to remove task
void List::RemoveTask(std::string taskDescription) {
	for (size_t i = 0; i < taskList_.size(); i++)
	{
		if (taskList_.at(i).GetTaskDescription() == taskDescription)
		{
			taskList_.erase(taskList_.begin() + i);
		}

	}
}