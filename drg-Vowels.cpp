// drg-Vowels.cpp : This file contains the 'main' function. Program execution begins and ends there.
//By: David Garza
//Date: 20200421
//Description: Enter a string to see how many vowels there are.

#include <string>
#include <iostream>
using namespace std;

   bool isVowel(char ch)
   {
      switch (ch)
      {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
      case 'Y':
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'y':
         return true;
         break;
      default:
         return false;
      }
   }


int main()
{
   string strSequence;
   int intVowelCounter = 0;
   std::cout << "\nPlease enter a sequence of characters to see how many vowels there are: ";
   std::cin >> strSequence;
   
  
   for (int i = 0; i < strSequence.size(); i++) {       
       if (isVowel(strSequence[i]) == true)
           intVowelCounter = intVowelCounter++;             
   }
   std::cout << "\nThe number of vowels you have is: " << intVowelCounter << endl;
   return 0;
}


