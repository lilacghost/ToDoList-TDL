/*
* List.h
*
Version information
* Author: Shannon Murray
* Date: 22/02/2018
* Copyright notice
*/

#pragma once
#include <iostream>
#include <string>
#include<vector>

#include "Task.h"

class List {
private:
	std::vector<Task> taskList_;

public:

	void AddTask(std::string taskDescription, std::string dueDate);

	std::vector<Task> ListAllTasks();

	void RemoveTask(std::string taskDescription);
};