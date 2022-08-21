#include <stdio.h>
#include <threads.h>


int do_work(void *arg) {
  thrd_t thr1 = thrd_current();
  for (int = i; i < 5; ++i) {
    printf("Thread id: %lu, counter: %d, code: %s\n", thr1, i, (char *)arg);
  }
  return 0;
}


int main(void) {
  thrd_t thr;
  if (thrd_success != thrd_create(&thr, do_work, "Hello from a thread!")) {
    printf("Could not create thread.\n");
    return 1;
  }
  thrd_join(thr, NULL);
}
