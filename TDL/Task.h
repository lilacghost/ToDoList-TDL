/*
* Task.h
*
Version information
* Author: Shannon Murray
* Date: 22/02/2018
* Copyright notice
*/

#pragma once
#include<iostream>
#include<string>

class Task {
private:
	std::string taskDescription_;
	std::string dueDate_;

public:
	//default constructor
	Task();

	//custom constructor
	Task(std::string taskDescription, std::string dueDate);

	void SetTaskDescription(std::string taskDescription);
	std::string GetTaskDescription() const;

	void SetDueDate(std::string dueDate);
	std::string GetDueDate() const;
};