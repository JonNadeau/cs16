// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// For example, if you need an isPrime function, you can put the function
// definition in this file.  Similarly, isOdd or isEven might be useful.

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

bool isOdd(int x) { 
  return (x%2);  // REPLACE THIS STUB WITH REAL CODE
}
bool isEven(int x) { 
  return !isOdd(x);  // REPLACE THIS STUB WITH REAL CODE
}
bool isPrime(int x) {
  if(x<2)
	  return false;
  int c=0;
  for(int i = 2; i < x; i++){
  	if(x%i==0)
		c++;
  }
  return !c;// REPLACE THIS STUB WITH REAL CODE
}
