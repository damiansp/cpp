/* sort v[left] ... v[right] in increasing order */
void qsort(int v[], int left, int right) {
  int i, last;
  void swap(int v[], int i, int j);

  if (left >= right) { return; }      // do nothing if len(array) < 2
  swap(v, left, (left + right) / 2);  // move partition element...
  last = left;                        // ...to v[0]
  for (i = left + 1; i <= right; i++) {  // partition
    if (v[i] < v[left]) { swap(v, ++last, i); }
  }
  swap(v, left, last);                // restore partition element
  qsort(v, left, last - 1);
  qsort(v, last + 1, right);
}
