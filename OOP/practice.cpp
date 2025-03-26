#include <iostream>

using namespace std;

class Language {
public:
  static string defaultLanguage;

  Language(string language) {
    if (defaultLanguage.empty()) {
      defaultLanguage = language;
    }
  }

  static string getTotalBalance() {
    return defaultLanguage;
  }

};

string Language::defaultLanguage;

int main() {
  Language language1("English");

  cout << "\nDefault language: " << Language::defaultLanguage;
  
}