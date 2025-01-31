#include <iostream>
#include <fstream>
#include <string>
#include <regex>

using namespace std;

void processFile(const string &inputFilePath, const string &outputFilePath) {
    ifstream inputFile(inputFilePath);
    ofstream outputFile(outputFilePath);

    if (!inputFile.is_open()) {
        cout << "Error: Could not open input file." << endl;
        return;
    }

    if (!outputFile.is_open()) {
        cout << "Error: Could not open/create output file." << endl;
        return;
    }

    string line;
    int scanfCount = 0, printfCount = 0;

    // Regex patterns for scanf and printf
    regex scanfPattern(R"(\bscanf\b)");
    regex printfPattern(R"(\bprintf\b)");

    while (getline(inputFile, line)) {
        // Count occurrences of scanf and printf
        scanfCount += distance(sregex_iterator(line.begin(), line.end(), scanfPattern), sregex_iterator());
        printfCount += distance(sregex_iterator(line.begin(), line.end(), printfPattern), sregex_iterator());

        // Replace scanf with read
        line = regex_replace(line, scanfPattern, "read");

        // Replace printf with write
        line = regex_replace(line, printfPattern, "write");

        // Write the modified line to the output file
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    // Print counts
    cout << "Number of 'scanf' statements: " << scanfCount << endl;
    cout << "Number of 'printf' statements: " << printfCount << endl;
    cout << "Modified file written to: " << outputFilePath << endl;
}

int main() {
    string inputFilePath, outputFilePath;

    cout << "Enter the path to the input C/C++ program file: ";
    cin >> inputFilePath;

    cout << "Enter the path for the output file: ";
    cin >> outputFilePath;

    processFile(inputFilePath, outputFilePath);

    return 0;
}
