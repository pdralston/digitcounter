/** This project coded as an instructional tool
    for the 2018 Spring Semester CS11 Supplemental
    instruction sessions, Cabrillo College, Watsonville.
    @author Perry D Ralston Jr.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

bool validInput(std:: string);

int main(){
  std::string input;
  int digits[10] = {0};
  const int NUMSYMBOLS = 10;
  std::cout << "Please enter a number: ";
  std::cin >> input;
  while(!validInput(input)){
    std::cout << "Invalid input. Please enter a number: ";
    std::cin >> input;
  }
  int size = input.size();
  std::cout << std::setw(10) << std::left << "DIGIT" << std::setw(10) << std::left << "OCCURENCES\n"; 
  for(int i = 0; i < NUMSYMBOLS; i++){
    for(int j = 0; j < size; j++){
      if(i == input[j] - '0'){
	digits[i]++;
      }
    }
    std::cout << std::setw(10) << std::left << i << std::setw(10) << std::left << digits[i] << std::endl; 
  }
  return 0;
}
/** bool validInput(string)
	returns true if the input is either an int or double, positive or negative.
	@arg input string to verify
*/
bool validInput(std::string input) {
  bool valid = false;
  int size = input.size();
  if(size > 0) {
    valid = true;
    for(int i = 0; i < size; i++) {
      char currChar = input[i]
      if(!isdigit(currChar) && currChar != '.' && currChar != '-') {
	valid = false;
      }
    }
  }
  return valid;
}
