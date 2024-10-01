// SelectionAndRepetition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    using std::string;
    using std::endl;

    std::ifstream file1;
    file1.open("file1.txt");
    string line1;

    std::ifstream file2;
    file2.open("file2.txt");
    string line2;

    std::ofstream outputFile;
    outputFile.open("sorted.txt");

    std::getline(file1, line1);
    std::getline(file2, line2);

    while (!file1.eof() && !file2.eof()) {
        if (line1 < line2){
            outputFile << line1 << endl;
            std::getline(file1, line1);
        }
        else {
            outputFile << line2 << endl;
            std::getline(file2, line2);
        }

    }

    while (!file1.eof()) {
        outputFile << line1 << endl;
        std::getline(file1, line1);
    }

    while (!file2.eof()) {
        outputFile << line2 << endl;
        std::getline(file2, line2);
    }

    file1.close();
    file2.close();
    outputFile.close();
}