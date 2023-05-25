/*
	GameUIcpp
	Description: This will be the View portion in the MVC patter I plan to follow for this project.

*/
#include "GameUI.h"

GameUI::GameUI() {
#ifdef _WIN32
    // set console size
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    SMALL_RECT windowSize = { 0, 0, DEFAULT_WIDTH-1, DEFAULT_HEIGHT-1 }; // 80x25
    SetConsoleWindowInfo(console, TRUE, &windowSize);
    
#else
    struct winsize size;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &size);
    size.ws_col = 80;
    size.ws_row = 25;
    ioctl(STDOUT_FILENO, TIOCSWINSZ, &size);
#endif
}

GameUI::~GameUI() {

}

void GameUI::display(const std::string& message) const {
	std::cout << message;
}

void GameUI::displayLine(const std::string& message) const {
    std::cout << message << std::endl;
}

std::string GameUI::getInput() {
	std::string inputString;
	std::getline(std::cin, inputString);
	return inputString;
}