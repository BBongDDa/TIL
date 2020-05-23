#include <stdio.h>
#include <string.h>

/*
백준 이것저것
*/

void num11720() {
	int number, i, result = 0;
	char number2[100];
	scanf("%d", &number);
	scanf("%s", number2);

	for (i = 0; i < number; i++)
		result += (number2[i] - '0');

	printf("%d\n", result);

	return 0;
 }

void num2444() {
	/*
	#include <iostream>
using namespace std; 
 
int main(int argc, char *argv[]) 
{ 
   int x; 
   cin >> x; 
 
   for (int i = 0; i < x; ++i) { 
      for (int k = x - i - 1; k > 0; --k) { 
         cout << " "; 
      } 
      for (int j = x+i*2; j >= x; --j) { 
         cout << "*"; 
      } 
      cout << endl; 
   } 
   for (int i = 1; i < x; ++i) { 
      for (int k = x - i ; k < x; ++k) { 
         cout << " "; 
      } 
      for (int j = -x + i*2 +1; j < x; ++j) { 
         cout << "*"; 
      } 
      cout << endl; 
   } 
 
   return 0; 
}*/
}

