#include <iostream>
using namespace std;

int main (){
	
	int fish = 5;
	cout << &fish << endl; 		//address of a fish
	
	int *fishPointer;
	fishPointer = &fish;
	
	cout << fishPointer << endl; 
}
