template<typename T>
T max(T n1, T n2, T n3) {
  T mx{n1};
  if (n2 > mx) {
    mx = n2;
  }
  if (n3 > mx) {
    mx = n3;
  }
  return mx;
}
