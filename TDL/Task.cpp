/*
* Task.cpp
*
Version information
* Author: Shannon Murray
* Date: 22/02/2018
* Copyright notice
*/

#include<vector>
#include "Task.h"

//default constructor
Task::Task() {

}

//custom constructor
Task::Task(std::string taskDescription, std::string dueDate) {
	taskDescription_ = taskDescription;
	dueDate_ = dueDate;
}

//getters and setters
void Task::SetTaskDescription(std::string taskDescription) {
	taskDescription_ = taskDescription;
}

std::string Task::GetTaskDescription() const {
	return taskDescription_;
}

void Task::SetDueDate(std::string dueDate) {
	dueDate_ = dueDate;
}

std::string Task::GetDueDate() const {
	return dueDate_;
}