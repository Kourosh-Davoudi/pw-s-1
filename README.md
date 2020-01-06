## The activity for week 1

Leaning outcomes:
- Basic control flow in C++
- Functional programming in C++
- C-style strings

**Problem:** Write a function to determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward (e.g., 356653, 49894). Call this function in a program which reads an integer and outputs an appropriate message.  


```C++
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

```
