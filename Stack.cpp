#include <iostream>
using namespace std;
#include "Stack.h"
void Stack::push(int n){
	if(isFull()){//with (),dont forget
		cout<<"Stack is full"<<endl;
		return;
	}
	arr[++top] = n;
}
int Stack::pop(){
	if(isEmpty()){
		cout<<"Stack is empty"<<endl;
	}
	return arr[top--];//it is important detail 
}
void  Stack::print(){
	for(int i=top;i>=0;i--)//here int i
		cout<<arr[i]<<endl;
}
