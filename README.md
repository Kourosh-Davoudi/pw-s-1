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

bool isPalindrome(int x)
{
	char a[10];
	int i;
	for (i = 0;  x > 0; ++i, x=x/10)
	{
		a[i] = x % 10 + '0';
	}
	a[i] = '\0';

	for (int i = 0,j = strlen(a)-1; i < j; ++i,--j)
	{
		if(a[i] != a[j])
			return false;
	}
	return true;
}
```
