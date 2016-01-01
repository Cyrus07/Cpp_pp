// stack.h -- class definition for the stack ADT
#ifndef STATCK_H_
#define STATCK_H_

#include "ass5_customer.h"
typedef customer Item;

class Stack
{
	private:
		enum {MAX = 10};
		Item items[MAX];
		int top;
	public:
		Stack();
		bool isempty() const;
		bool isfull() const;
		// push() returns false if statck already is full, true otherwise
		bool push(const Item & item);
		// pop() returns false if stack already is empty, true otherwise
		bool pop(Item & item);
};

#endif
