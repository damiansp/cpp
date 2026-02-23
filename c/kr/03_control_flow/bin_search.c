/* find x in sorted v, where n is len(v) */
int bin_search(int x, int v[], int n) {
  int low, mid, high;

  low = 0;
  high = n - 1;
  while (low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) { high = mid - 1; }
    else if (x > v[mid]) { low = mid + 1; }
    else return mid;  // match
  }
  return -1;  // no match
}
