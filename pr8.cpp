#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string text = "Template.";

    cout << "Enter the search pattern: ";
    string pattern;
    cin >> pattern;

    transform(text.begin(), text.end(), text.begin(), ::tolower);
    transform(pattern.begin(), pattern.end(), pattern.begin(), ::tolower);

    size_t pos = text.find(pattern);
    int count = 0;

    while (pos != string::npos) {
        cout << "Found at position: " << pos << endl;
        ++count;
        pos = text.find(pattern, pos + 1);
    }

    if (count == 0) {
        cout << "Pattern not found." << std::endl;
        return 0;
    }

    cout << "Found " << count << " matches. Replace with another variant? (y/n): ";
    char choice;
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        cout << "Enter the new variant for replacement: ";
        string replacement;
        cin >> replacement;

        size_t start_pos = 0;
        while ((start_pos = text.find(pattern, start_pos)) != string::npos) {
            text.replace(start_pos, pattern.length(), replacement);
            start_pos += replacement.length();
        }

        cout << "Text after replacement: " << text << endl;
    }

    return 0;
}
