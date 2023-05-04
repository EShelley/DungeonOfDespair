#pragma once
/*
	GameUI.h
	Description: This will be the View portion in the MVC patter I plan to follow for this project.

*/

//Include specific headers depended on the target environment(Windows/Linux/IOS)
#ifdef _WIN32
#include <Windows.h>
#else
#include <sys/ioctl.h>
#include <unistd.h>
#endif

#include<iostream>
#include<string>


// Default size for the console
const int DEFAULT_WIDTH = 128;
const int DEFAULT_HEIGHT = 25;

class GameUI
{
public:
	GameUI();
	~GameUI();

	// Prints a message to the console from the GameController
	void display(const std::string& message) const;
	
	// Prints a message to the console from the GameController including an std::endl
	void displayLine(const std::string& message) const;

	// Gets user input from the console and return it to the GameController
	std::string getInput();

};

