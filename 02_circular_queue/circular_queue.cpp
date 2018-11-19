#include <iostream>
#include <vector>

using namespace std;


class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
      maxsize = k;
    }    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
      if (isFull())
      {
          reurn false;
      }
      else
      {
        if (isEmpty())
        {
          queue[0] = value;
          head = 0;
          tail = 0;
        }
        else
        {
          if(tail == max_size)
          {
            tail == 0;
          }
          else
          {
            tail++;
          }

          queue[tail] = value;
          if (head == tail )
            full = true;
        }

        
        
        return true;
      }    
          
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
      if (isEmpty())
        return false;


      

      
    }
    
    /** Get the front item from the queue. */
    int Front() {
       
    }
    
    /** Get the last item from the queue. */
    int Rear() {
       
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
       
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
      return full;
    }
    
private:
    int head = -1;
    int tail = -1;
    int maxsize = 0;
    vector<int> &queue;
    bool full = false;
};

int main()
{


    return 0;
}
