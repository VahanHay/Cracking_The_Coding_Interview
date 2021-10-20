#include <iostream>



int main()
{
    const int size = 3 ;
    int arr[size][size];
    for(int i=0; i<size ; ++i)
    {
        for(int j = 0 ; j<size; ++j)
        {
            std::cin>>arr[i][j];
        }
    }
    
    for(int i=0; i<size/2; ++i)
    {
        for(int j=i; j < size-i-1;++j)
        {
            int tmp=arr[i][j];
            arr[i][j]=arr[size-1-j][i];
            arr[size-1-j][i]=arr[size-1-j][size-1-i];
            arr[size-1-j][size-1-i]=arr[j][size-1-i];
            arr[j][size-1-i]=tmp;
        }
    }
    for(int i=0; i<size ; ++i)
    {
        for(int j = 0 ; j<size; ++j)
        {
            std::cout<<arr[i][j];
        }
         std::cout<<std::endl;
    }



}
