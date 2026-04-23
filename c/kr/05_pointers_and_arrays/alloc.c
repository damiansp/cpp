#define ALLOCSIZE 10000  // size of avail space


static char allocbuf[ALLOCSIZE];  // storage for alloc
static char* allocp = allocbuf;   // next free position


// return pointer to n chars
char* alloc(int n) {
  if (allocbuf + ALLOCSIZE - allocp >= n) {  // it fits
    allocp += n;
    return allocp - n;  // old p
  } else {
    return 0;
  }
}


void afree(char* p) {  // free storage pointed to by p
  if (p >= allocbuf && p < allocbuf + ALLOCSIZE) {
    allocp = p;
  }
}


int main() {;}
