#include <iostream>
using namespace std;
#include "Stack.h"
void Stack::push( int n ) {
	if( isFull() ) {
		errMsg( "Full stack. Can't push" );
		return;
	}
	arr[ ++top ] = n;
}
int Stack::pop() {
	if( isEmpty() ) {
		errMsg( "Empty stack. Popping dummy value." );
		return dummyVal;
	}
	return arr[ top-- ];
}
void Stack::dump() {
	cout <<"Stack contents, top to bottom:"<< endl;
	for( int i=top; i>=0; i-- )
		cout <<'\t'<< arr[i] << endl;
}
void Stack::errMsg( const char* msg ) const {
	cerr <<"\n*** Stack operation failures: "<< endl
		 << msg << endl;
}
