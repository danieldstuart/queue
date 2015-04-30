#include <stdio.h>
#include <assert.h>

#include <queue.h>
#include <test_queue.h>

int main(void) {
  
  test_Dequeue();
  
  test_Queue();
  
  test_front();
  
  puts("testing complete");
  return 0;
}
