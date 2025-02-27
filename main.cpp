#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
  std::ifstream inFile;
  inFile.open("data.csv");

  if (inFile.is_open()) {
    std::string line;

    while (std::getline(inFile, line)) {
      std::stringstream ss(line);  
      int n, j;
      std::string word;

      // i figured out that the file stores the "ints" as strings so i had to convert the first part and the second part (parts divded between commas ) to ints
      std::getline(ss, word, ',');  
      n = std::stoi(word); 

      std::getline(ss, word, ',');  
      j = std::stoi(word);  

      std::getline(ss, word, ',');  


      int iterations = n + j;

      for (int i = 0; i < iterations; i++) {
        std::cout << word << " ";
      }
      std::cout << std::endl; 
    }  
    inFile.close();  
  } else {
    std::cout << "Unable to open file for reading!" << std::endl;
  }

  std::cout << std::endl;



  return 0;
}  // end main
