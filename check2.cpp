#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void countCommentLines(const string &filePath) {
    ifstream file(filePath);

    if (!file.is_open()) {
        cout << "File not found. Please check the file path." << endl;
        return;
    }

    int commentCount = 0;
    bool inMultilineComment = false;
    string line;

    while (getline(file, line)) {
        string trimmedLine = line;
        trimmedLine.erase(0, trimmedLine.find_first_not_of(" \t")); // Remove leading spaces/tabs

        // Single-line comments
        if (trimmedLine.rfind("//", 0) == 0) {
            commentCount++;
        }

        // Multiline comments
        if (trimmedLine.find("/*") != string::npos) {
            inMultilineComment = true;
            commentCount++;
        }

        if (inMultilineComment && trimmedLine.find("*/") != string::npos) {
            inMultilineComment = false;
        } else if (inMultilineComment) {
            commentCount++;
        }
    }

    cout << "Number of comment lines: " << commentCount << endl;
}

int main() {
    string filePath;
    cout << "Enter the path to the C program file: ";
    cin >> filePath;

    countCommentLines(filePath);

    return 0;
}
