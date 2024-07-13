#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  cout << " **********GUESSING THE NUMBER**********\n";

  int tries = 0;
  int actualTry;

  srand(time(0));
  int randomNum = (rand() % 100) + 1;

  do
  {
    cout << " Type a number between 1-100 to guess the number: ";
    cin >> actualTry;
    tries++;

    if (actualTry > randomNum)
    {
      cout << " TOO HIGH!\n";
    }
    else if (actualTry < randomNum)
    {
      cout << " TOO LOW!\n";
    }
    else {
      cout << " CORRECT!!!\n";
      cout << " Tries: " << tries;
    }
      

  } while (actualTry != randomNum);

  return 0;
}