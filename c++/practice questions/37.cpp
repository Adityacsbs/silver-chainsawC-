#include<iostream>
using namespace std;

int* even(int limit){
    int* even_numbers = new int[limit/2];
 
  for (int i = 2, j = 0; i <= limit; i += 2, j++){
    even_numbers[j]=i;
 }
  return even_numbers;
}

int main (){
    int*result = even(10);
 
 for (int i = 0; i < 10 / 2; i++) {
        cout << result[i] << " ";
    }

    delete[] result; 




    return 0;
}