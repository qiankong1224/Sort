#include <iostream>
#define DATA_TYPE int

void swap(DATA_TYPE *s,DATA_TYPE *r)
{
    DATA_TYPE temp = *s;
    *s = *r;
    *r = temp;
}


DATA_TYPE *bubble_sort(DATA_TYPE *arr,size_t len)
{
    for (size_t i = len-1 ; i > 0; i--)
    {
        for (size_t j = 0; j < i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr+j,arr+j+1);
            }

        }
    }
    return arr;
}

void print_arr(DATA_TYPE *arr,size_t len)
{
    std::cout<<"[";
    for(size_t i = 0;i < len; i++)
    {

        if(i == len - 1)
        {
            std::cout<< arr[i] <<"]\n";
            break;
        }
        std::cout<< arr[i]<< ", ";
    }
}




int main()
{
    int arr[10] = { 9,3,2,4,6,8,0,7,1,5};
    print_arr(bubble_sort(arr,10), 10);
    return 0;
}


