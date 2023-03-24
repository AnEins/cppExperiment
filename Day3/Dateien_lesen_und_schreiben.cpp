#include <iostream>
#include <fstream>
using namespace std;
void write_file(string filename) {
  fstream file;
  file.open(filename, ios::out | ios::app);
  string line;
  if (!file.is_open()) {
    std::cout << "Cannot open " << filename << "\n";
  } else {
    while (getline(cin, line)) {
      if (line == "exit") {
        break;
      }
      file << line << endl;
    }
  }
  file.close();
}
void read_file(string filename) {
  fstream file;
  file.open(filename);
  string line;
  if (!file.is_open()) {
    std::cout << "Cannot open " << filename << "\n";
  } else {
    while (getline(file, line)) {
      cout << line << endl;
    }
  }
  file.close();
}
int main() {
  string filename;
  cout << "Bitte geben Sie Dateinamen ein" << endl;
//  cin >> filename;
  filename = R"(../Day3/123.txt)";
  read_file(filename);
  cout << "Bitte Fügen Sie neuen Text zur Datei  hinzu:" << endl;
  write_file(filename);
  cout << "Inhalt der aktualisierten Datei:" << endl;
  read_file(filename);
  return 0;
}
