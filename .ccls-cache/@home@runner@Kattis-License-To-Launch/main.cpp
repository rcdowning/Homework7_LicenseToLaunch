#include <iostream>

using namespace std;

int main() {
// declaring variables and arrays
  int n; 

  cin >> n; // number of days license valid

  int daysValid[n];

  // loop for input of space junk on each n day
    for (int i = 0; i < n; i++){
      cin >> daysValid[i];
    }

  // determine which day (index) has least junk (lowest value)

  
  // output day in index 0
  cout << daysValid[0];
  
}