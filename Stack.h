class Stack {
public: 
	enum { MAX_STACK = 5 };
	
	Stack() { init(); } 
	void init() { top = -1; }
	void push( int n );
	int pop();
	bool isEmpty() { return top < 0; }
	bool isFull() { return top >= MAX_STACK-1; }
	void dump();
private:
	int top;
	int arr[ MAX_STACK ];
	int dummyVal;
	void errMsg( const char* msg ) const; 
}; 
