#include<bits/stdc++.h>
using namespace std;

int main() {
    int countTab = 0;
    int countspace=0;
    int vowelCount = 0;
    string input;
    string finalInput = ""; 
    int enterCount = 0;
    set<char> vowels;
    set<char> specailCUsed;
    int specialC=0;
    int newspacecount=0;
    cout << "Enter a input :" << endl;
    
    while (true) {
        getline(cin, input);

        if (input.empty()) {
            enterCount++;
            if (enterCount == 2) { 
                break;
            }
        } else {
            enterCount = 1; 
            finalInput += input + '\n'; 
        }
    }
    
    for (char c : finalInput) {
        
        if(c == '\t'){
            countTab++;
        }
        else if (c == ' ') {
            countspace++;
        }
        else if (isalnum(c)) { 
            char alphab = toupper(c); 
            if (alphab == 'A' || alphab == 'E' || alphab == 'I' || alphab == 'O' || alphab == 'U') {
                vowelCount++;
                vowels.insert(alphab);
            }
        }
        else if (!isalnum(c)&& c!='\n') {
            specailCUsed.insert(c);
            specialC++;
        }
        else if(c=='\n'){
            newspacecount++;
        }
    
    }
    //hello
    /*hello*/

    cout << "Number of spaces in the string: " << countspace << endl;
    cout << "Number of tab in the string: " << countTab << endl;
    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Number of SpecialC: " << specialC << endl;
    for (char v : vowels) {
        cout << v << " "; 
    }
    cout<<endl;
    for (char v : specailCUsed) {
        cout << v << " "; 
    }
    cout<<endl;
    cout<<"Number of new line: "<<newspacecount<<endl;
    return 0;
}