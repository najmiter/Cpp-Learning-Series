#include <array>
#include <iostream>

void Initialize(int array[], int size);    // Prototype
void Initialize(int array[][4], int size); // Prototype

int main() {
  // int array[10];
  // size_t size = std::size(array);

  // Initialize(array, size);

  // for (int i = 0; i < size; i++)
  // {
  //     std::cout<< array[i] << ' ';
  // }
  // std::cout << "\n";

  int t_array[10][4];
  size_t size = std::size(t_array);

  Initialize(t_array, size);

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++)
      std::cout << t_array[i][j] << ' ';
    std::cout << "\n";
  }
}
void Initialize(int array[], int size) {
  for (int i = 0; i < size; i++) {
    array[i] = i * i + 2;
  }
  return;
}
void Initialize(int array[][4], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < 4; j++)
      array[i][j] = i * j;
  }
  return;
}
