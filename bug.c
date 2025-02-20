int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  printf("%d", x); 
  int y = 20; 
  ptr = &y; 
  *ptr = 30; 
  printf("%d", x); 
  return 0; 
}