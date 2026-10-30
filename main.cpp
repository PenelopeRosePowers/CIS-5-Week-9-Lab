#include <iostream>

// Lab 9 — Your Name
// CIS 5 Week 09 · Call and return
// Homework continues this program. Do not start a second file.

// TODO: double average(const int a[], int n);
// TODO: void printSummary(double avg);
double average(const int a[], int n);
void printSummary(double avg);

int main() {
  const int N = 4;
  int scores[N] = {80, 90, 70, 100};
  // TODO: double avg = average(scores, N);
  double avg = average(scores, N);

  // TODO: printSummary(avg);
  printSummary(avg);
  average(scores, N);
  
  return 0;
}
  double average(const int a[], int n) {
    if (n == 0){
      return 0.0;
    }
  
    double sum = 0.0;
    for (int i = 0; i < n; i++){
      sum += a[i];
    }
    
  
  return sum /n;
  
  }
  void printSummary(double avg){
    std::cout << avg << std::endl; 

}
