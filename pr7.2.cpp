#include <iostream>
#include <string>

using namespace std;

void searchPattern(const string& text, const string& pattern) {
    size_t pos = text.find(pattern);
    int count = 0;

    cout << "Found matches at positions: ";
    while (pos != string::npos) {
        cout << pos << " ";
        ++count;
        pos = text.find(pattern, pos + 1);
    }
    cout << endl;

    cout << "Found " << count << " matches." << endl;
}

int main() {
    string text;
    string pattern;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1) Enter text" << endl;
        cout << "2) Enter pattern" << endl;
        cout << "3) Search pattern" << endl;
        cout << "4) Exit" << endl;
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter the text: ";
                cin.ignore();
                string newText;
                getline(cin, newText);
                text += newText;
                break;
            }
            case 2: {
                cout << "Enter the pattern: ";
                cin >> pattern;
                break;
            }
            case 3: {
                if (text.empty()) {
                    cout << "Text not entered. Please enter text." << endl;
                    break;
                }
                if (pattern.empty()) {
                    cout << "Pattern not entered. Please enter a pattern." << endl;
                    break;
                }
                searchPattern(text, pattern);
                break;
            }
            case 4: {
                cout << "Thank you for using the program. paka!";
                return 0;
            }
            default:
                cout << "Invalid choice. poprobui snova." << endl;
                break;
        }
    }

    return 0;
}
