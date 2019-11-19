/**
*	@file main.cpp
*	@author John Gibbons
*	@date 2014.04.02
*/

#include <iostream>
#include <stdexcept>
#include "Queue.h"
#include "Test.h"
using namespace std;
int main()
{
	Queue queue;
	Test test;
	cout<<endl;
	cout<<"Is the Queue Empty??"<<endl;
	test.testisEmpty();
	cout<<endl;
	cout<<"Is the Queue Empty even after enqueuing??"<<endl;
	test.testisEmpty2();
	cout<<endl;
	cout<<"Is it enqueuing??"<<endl;
	test.Testenqueue();
	cout<<endl;
	cout<<"Enqueued 3 and 4 (in that order) then peek"<<endl;
	test.TestenqueueTwo();
	cout<<endl;
	cout<<"So is it enqueuing correctly (from above)??"<<endl;
	test.TestenqueueOrder();
	cout<<endl;
	cout<<"Can you Dequeue an empty queue??"<<endl;
	test.TestdequeueEmpty();
	cout<<endl;
	cout<<"Can you enqueue and Dequeue in the correct order??"<<endl;
	test.enqueueNdequeue();
	cout<<endl;
	cout<<"Enqueued and Dequeued twice, is it empty?"<<endl;
	test.enqueueNdequeueTwo();
	cout<<endl;
	cout<<"Can you peek an empty queue??"<<endl;
	test.peakEmpty();
	cout<<endl;
	return(0);
}
