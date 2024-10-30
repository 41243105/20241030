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
    //�ƻs�쥻�ª��Ȩ�s������
    for (int j = size; j <new_size; j++) {
        new_arr[j] = 0;//�s�W�᪺�Ŧ�]0
    }
    delete[] arr;//�����ª��}�C
    arr = new_arr;//�}�C�]���s���}�C
}
int main() {
    int size ;
    cout << "��J�j�p:";
    cin >> size;

    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }
    print_arr(arr, size);

    int new_size =size* 2;//�s���}�C�j�p�]���쥻size��2��
    change_size(arr, size, new_size);

    print_arr(arr, new_size);
    return 0;
}