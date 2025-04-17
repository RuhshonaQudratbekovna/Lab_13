#include <iostream>
using namespace std;

//Problem 1
//int main() {
//    int arr[5] = {10, 20, 30, 40, 50};
//    int* p = arr;
//    for (int i = 0; i < 5; i++) {
//        cout << *(p + i) << " ";
//    }
//    return 0;
//}
 //problem2

// int main() {
//     int arr[6] = {2, 4, 6, 8, 10, 12};
//     int* p = arr;
//     for (int i = 0; i < 6; i++) {
//         *(p + i) *= 3;
//     }
//     for (int i = 0; i < 6; i++) {
//         cout << *(p + i) << " ";
//     }
//     return 0;
// }

//problem 3


// int main() {
//  int arr[4] = {5, 10, 15, 20};
//  int* p = arr;
//  cout << p[2] << endl;
//  cout << *(p + 2) << endl;
//  return 0;
// }

//problem 4
// int main() {
//  int arr[5] = {1, 2, 3, 4, 5};
//  int* p = arr + 4;
//  for (int i = 0; i < 5; i++) {
//   cout << *(p - i) << " ";
//  }
//  return 0;
// }

//problem5
// int main() {
//  int arr[3] = {1, 2, 3};
//  int* ptr = arr;
//  ptr = ptr + 1;
//  cout << *ptr;
//  return 0;
// }

//problem6
// int main() {
//  int arr[4] = {10, 20, 30, 40};
//  int* p = arr;
//  for (int i = 0; i < 4; i++) {
//   cout << "Value: " << *(p + i) << " Address: " << (p + i) << endl;
//  }
//  return 0;
// }

//problem7
// int main() {
//  int arr[7] = {11, 4, 7, 18, 5, 2, 9};
//  int* p = arr;
//  for (int i = 0; i < 7; i++) {
//   if (*(p + i) % 2 == 0) {
//    cout << *(p + i) << " ";
//   }
//  }
//  return 0;
//}

//problem8
// int main() {
//  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
//  int* p = &arr[0][0];
//  for (int i = 0; i < 6; i++) {
//   cout << *(p + i) << " ";
//  }
//  return 0;
// }

//problem9
// int main() {
//  int a = 7, b = 14, c = 21;
//  int* ptrs[3] = {&a, &b, &c};
//  for (int i = 0; i < 3; i++) {
//   cout << *ptrs[i] << " ";
//  }
//  return 0;
// }

//problem 10
// int main() {
//  int arr[5] = {9, 3, 7, 1, 6};
//  int* p = arr;
//  for (int i = 0; i < 5 - 1; i++) {
//   for (int j = i + 1; j < 5; j++) {
//    if (*(p + i) > *(p + j)) {
//     int temp = *(p + i);
//     *(p + i) = *(p + j);
//     *(p + j) = temp;
//    }
//   }
//  }
//  for (int i = 0; i < 5; i++) {
//   cout << *(p + i) << " ";
//  }
//  return 0;
// }
//problem 11
// int main() {
//  const char* suit[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//  for (int i = 0; i < 4; i++) {
//   cout << suit[i] << " ";
//  }
//  return 0;
// }

//problem 12
// int main() {
//  const char* days[3] = {"Mon", "Tue", "Wed"};
//  for (int i = 0; i < 3; i++) {
//   cout << *(*(days + i) + 1) << " ";
//  }
//  return 0;
// }

//problem 13
// int main() {
//  const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//  const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//  int deck[4][13] = {};
//  deck[0][0] = 1;
//  deck[3][1] = 1;
//  if (deck[0][0]) cout << faces[0] << " of " << suits[0] << endl;
//  if (deck[3][1]) cout << faces[1] << " of " << suits[3] << endl;
//  return 0;
// }

// //problem 14
// #include <ctime>
// int main() {
//  const char* suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
//  const char* faces[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
//  int deck[4][13] = {};
//  srand(time(0));
//  for (int i = 1; i <= 52; ) {
//   int r = rand() % 4;
//   int c = rand() % 13;
//   if (deck[r][c] == 0) {
//    deck[r][c] = i++;
//   }
//  }
//  for (int i = 1; i <= 5; i++) {
//   for (int r = 0; r < 4; r++) {
//    for (int c = 0; c < 13; c++) {
//     if (deck[r][c] == i) {
//      cout << faces[c] << " of " << suits[r] << endl;
//     }
//    }
//   }
//  }
//  return 0;
// }

// //problem 15
// void greet() {
//  cout << "Hello from greet()" << endl;
// }
//
// void bye() {
//  cout << "Goodbye from bye()" << endl;
// }
//
// int main() {
//  void (*fptr)();
//  fptr = greet;
//  fptr();
//  fptr = bye;
//  fptr();
//  return 0;
// }

//problem 16
// int add(int a, int b) {
//  return a + b;
// }
//
// int multiply(int a, int b) {
//  return a * b;
// }
//
// int main() {
//  int (*fptr)(int, int);
//  fptr = add;
//  cout << "Add: " << fptr(3, 5) << endl;
//  fptr = multiply;
//  cout << "Multiply: " << fptr(3, 5) << endl;
//  return 0;
// }

//problem 17
// int add(int a, int b) {
//  return a + b;
// }
//
// int multiply(int a, int b) {
//  return a * b;
// }
//
// void calculate(int (*op)(int, int), int x, int y) {
//  cout << "Result: " << op(x, y) << endl;
// }
//
// int main() {
//  calculate(add, 10, 10);
//  calculate(multiply, 4, 5);
//  return 0;
// }

//problem 18
 int add(int a, int b) {
  return a + b;
 }

 int multiply(int a, int b) {
  return a * b;
 }

 int main() {
  int (*ops[])(int, int) = {add, multiply};
  int choice = 1;
  cout << "User selects " << choice + 1 << endl;
  cout << "Output: " << ops[choice](3, 5) << endl;
  return 0;
 }

//The end, URRRRREEEEEEEE!)))