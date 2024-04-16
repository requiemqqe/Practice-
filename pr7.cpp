#include <iostream>
#include <string>

using namespace std;

char toLower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool compareIgnoreCase(char a, char b) {
    return toLower(a) == toLower(b);
}

int main() {
    string text = "This is a text to find a pattern in a C++ program.";

    cout << "Enter search pattern: ";
    string pattern;
    cin >> pattern;

    string lowercaseText = text;
    for (char& c : lowercaseText) {
        c = toLower(c);
    }
    string lowercasePattern = pattern;
    for (char& c : lowercasePattern) {
        c = toLower(c);
    }

    size_t pos = lowercaseText.find(lowercasePattern);
    int count = 0;

    cout << "Matches found: ";
    while (pos != string::npos) {
        cout << pos << " ";
        ++count;
        pos = lowercaseText.find(lowercasePattern, pos + 1);
    }
    cout << endl;

    cout << "Found " << count << " coincidences." << endl;

    int wordCount = 0;
    int sentenceCount = 0;
    int charCount = 0;

    for (char c : text) {
        if (isspace(c)) {
            if (c == ' ') {
                ++wordCount;
            } else if (c == '.' || c == '?' || c == '!') {
                ++sentenceCount;
            }
        }
        ++charCount;
    }

    if (!text.empty()) {
        ++wordCount;
    }

    cout << "Number of words: " << wordCount << endl;
    cout << "Number of sentences: " << sentenceCount << endl;
    cout << "Number of characters: " << charCount << endl;

    return 0;
}
