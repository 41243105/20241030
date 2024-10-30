#include <iostream>
#include<algorithm>
using namespace std;

void print_arr(int* arr, int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << '\n';
}

void change_size(int*& arr, int size, int new_size) {
    int* new_arr = new int[new_size];
    copy(arr, arr + size, new_arr);
    //複製原本舊的值到新的那邊
    for (int j = size; j <new_size; j++) {
        new_arr[j] = 0;//新增後的空位設0
    }
    delete[] arr;//釋放舊的陣列
    arr = new_arr;//陣列設為新的陣列
}
int main() {
    int size ;
    cout << "輸入大小:";
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    print_arr(arr, size);

    int new_size =size* 2;//新的陣列大小設為原本size的2倍
    change_size(arr, size, new_size);

    print_arr(arr, new_size);
    return 0;
}