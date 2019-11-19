#include "Test.h"

Test::Test()
{

}

Test::~Test()
{

}

void Test::run()
{

}

void Test::testisEmpty()
{
  Queue queue;
  if(queue.isEmpty())
  {
    cout << "Yes, queue is empty" <<endl;
  }
  else
  {
    cout << "No, queue is not empty" <<endl;
  }
}

void Test::testisEmpty2()
{
  Queue queue;
  queue.enqueue(3);
  if(queue.isEmpty())
  {
    cout << "Yes, queue is empty" <<endl;
  }
  else
  {
    cout << "No, queue is not empty" <<endl;
  }
}
void Test::Testenqueue()
{
  Queue queue;
  queue.enqueue(3);
  for(int i = 0 ; i < 10; i++)
  {
    queue.enqueue(i);
    if(queue.isEmpty())
    {
      cout << "No, queue is empty and did not enqueue" <<endl;
    }
  }
cout << "Yes, queue is not empty and did enqueue" <<endl;
}

void Test::TestenqueueTwo()
{
  Queue queue;
  queue.enqueue(3);
	queue.enqueue(4);
  cout<<queue.peekFront()<<endl;
}

void Test::TestenqueueOrder()
{
  Queue queue;
  queue.enqueue(3);
	queue.enqueue(4);
  if(queue.peekFront()==3)
  {
    cout<<"enqueuing correctly"<<endl;
  }
  else
  {
    cout<<"enqueuing incorrectly"<<endl;
  }
}

void Test::TestdequeueEmpty()
{
  Queue queue;
  try
  {
		queue.dequeue();
		cout << "Can dequeue an empty queue" << endl;
	}catch(...)
  {
		cout << "Cannot dequeue an empty queue" << endl;
	}
}

void Test::enqueueNdequeue()
{
  Queue queue;
  queue.enqueue(3);
  queue.enqueue(4);
  queue.dequeue();
  if(queue.peekFront()==4)
  {
    cout<<queue.peekFront()<< " enqueuing and dequeuing correctly"<<endl;
  }
  else
  {
    cout<<queue.peekFront()<< " enqueuing and dequeuing incorrectly"<<endl;
  }
}

void Test::enqueueNdequeueTwo()
{
  Queue queue;
  queue.enqueue(3);
  queue.enqueue(4);
  queue.dequeue();
  queue.dequeue();
  if(queue.isEmpty())
  {
    cout << "Queue is empty" <<endl;
  }
  else
  {
    cout<<"Queue is not empty"<<endl;
  }
}


void Test::peakEmpty()
{
  Queue queue;
  try
  {
		queue.peekFront();
		cout << "Can peak an empty queue" << endl;
	}catch(...)
  {
		cout << "Cannot peak an empty queue" << endl;
	}
}
