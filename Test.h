#ifndef TEST_H
#define TEST_H

#include "Queue.h"
#include <stdexcept>
#include <iostream>
using namespace std;

class Test
{

public:


	Test();

	~Test();

	void run();

  void testRun();

	void testisEmpty();

	void testisEmpty2();

	void Testenqueue();

	void TestenqueueTwo();

  void TestenqueueOrder();

	void TestdequeueEmpty();

	void enqueueNdequeue();

	void enqueueNdequeueTwo();

	void peakEmpty();


};

#endif
