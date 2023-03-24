#include <iostream>
#include <array>
#include <fstream>
using namespace std;
class nofileException : public exception {
 public:
  virtual const char *what() const throw() {
    return "Die Datei existiert nicht";
  }
};

void read_file(string filename) {
  fstream file;
  string line;
  file.open(filename);
  //if (!file.is_open()) {
  if (file.fail()) {
    throw nofileException();
  }

  while (getline(file, line)) {
    cout << line << endl;
  }
  file.close();
}

int main() {
  string filename = R"(Day3/123.txt)";
  try {
    read_file(filename);
  }
  catch (const std::exception &error) {
    //catch (const nofileException &error)
    std::cout << error.what() << "\n";
  }

  return 0;
}