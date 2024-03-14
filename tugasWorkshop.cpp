#include<iostream>

using namespace std;



// [-7, -5, -4, 3, 6, 8, 9]  // Expected [ -49, -25, -16, -9, -36, -64, -81 ] (Dilakukan hanya 1 kali perulangan)

// Sorting [ -49, -25, -16, -9, -36, -64, -81 ]


int main(){

    int number[] = {-7, -5, -4, 3, 6, 8, 9};
    int n = sizeof(number) / sizeof(number[0]);

    for (int i = 0; i < n; i++){
        if(number[i] < 0){
            number[i] = number[i] * (number[i] * -1);
        }else {
            number[i] = number[i] * (number[i] * -1);
        }
    }


    for (int i = 0; i < n - 1; i++){
        for (int k = i + 1; k < n - 1; k++){
            if(number[i] < number[k]){
                int temp = number[i];
                number[i] = number[k];
                number[k] = temp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << number[i] << " ";
    }
}