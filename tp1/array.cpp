#include<iostream>

using namespace std;

#define SIZE 3


void print_array(int (&arr)[SIZE],int length){
    for(int i=0;i<length;i++){
        cout<<"print_array "<<arr[i]<<endl;
    }
}

int main(void)
{
    int arr[SIZE];

    int *ptr = &arr[0];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    int *start_ptr = &arr[0];
    // ptr++;
    // ptr = ptr+1;
    

    cout<<arr[0]<<endl;
    cout<<ptr[1]<<endl;
    cout<<*(ptr+1)<<endl;

    print_array(arr,3);
    // print_array(arr,3);

    return 0;
}
