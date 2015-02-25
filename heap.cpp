#include <iostream>
using namespace std;

//Understanding pointers and dynamic memory
//and the difference between stack and heap
int main()
{
	int a; // goes on the stack
	int *p;
	p = new int; //if we want to store an integer on the heap. To reserve or get some space allocated on the heap
				 //we use the new function in c++ or the malloc function in c
				 //The malloc or free function asks us how much memory to allocate on the heap in bytes
	*p = 10;	// we are then dereferencing using the pointer p and then we put in some value
	delete p;	// We have to delete the block that we are done using in the heap. This is the responsibility of the programmer
	p = new int[20]; //Creates a large contiguous block of memory for 20 integers which will be allocated in the heap
	delete[] p; //We then delete the large block of memory when we are done using it;

	return 0;

}