
#include <iostream>
#include <string>
#include <queue>
#include <fstream>
#include <Windows.h>
#include "colors/colors.hpp"
using namespace std;


void printout(queue <string> x) {
    while (!x.empty()) {
        Sleep(100);
        cout << colors::blink<< colors::bright_blue<< x.front()<<" ";
        x.pop();

    }
}

void readfile() {
    ifstream file;
    file.open("Text.txt");
    if (!file.is_open()) {
        return;
    }

    queue<string> paragraph{};

    string word{};
    while (file >> word) {
        
        paragraph.push(word);
    }

    printout(paragraph);
}

void readgetline() {
    ifstream file;
    file.open("Text.txt");

    queue<string> paragraph{};

    if (!file.is_open()) {
        return;
    }
    string word{};
    while (getline(file, word, ' ')) {
       
        paragraph.push(word);
    }
    printout(paragraph);
}


int main()
{
    readgetline();
}


