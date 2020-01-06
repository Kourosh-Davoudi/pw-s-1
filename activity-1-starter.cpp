#include <iostream>
#include <cstring>

using namespace std;

bool isPalindrome(int);

int main()
{
  int x;
  cout << "Enter a positive number:";
  cin >> x;
  
  if(isPalindrome(x))
    cout << "The number is palindrome" << endl;
  else
    cout << "The number is NOT palindrome" << endl;
    
  return 0;
}

bool isPalindrome(int x)
{
	char a[10];
	int i;
	
	// put the number digit charachters of x in array a (in reverse order is fine)
	
	// your code is here

	a[i] = '\0';

	// check if the palindrome number condition is violated (return false) 
	
	// your code is here
	
	return true;
}