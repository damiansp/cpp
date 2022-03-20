[[nodiscard]]
int cube(int x) {
  return x * x * x;
}


int main() {
  cube(3); // compiler warning b/c return val not used
}
