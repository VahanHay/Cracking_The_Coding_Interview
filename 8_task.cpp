#include <iostream>
#include <vector>

std::vector<int> r;
std::vector<int> c;

template <size_t N>
void foo(int  (&matrix)[N][N])
{
    int count= N;
    
    for(int i = 0 ; i < count ; ++i)
    {
        for(int j = 0 ; j < count ; ++j)
        {
            std::cin>>matrix[i][j];
        }
    }
    
}

template <size_t N>
 void boo(int(&matrix)[N][N])
 {
     int count= N;
     for(int  i = 0 ; i < count ; ++i)
     {
         for(int  j = 0 ; j < count ; ++j)
         {
             if(matrix[i][j] == 0)
             {
                r.push_back(i);
                c.push_back(j);
             }
         }
     }
     
 

     for(int i = 0 ; i < N ; ++i)
     {
        
         for(int size = 0 ; size < r.size() ; ++size)
         {
              matrix[r[size]][i]=0;
              matrix[i][c[size]]=0;
         }
     }   

      
 }


int main()
{
    const int size = 3 ;
    int martix[size][size];
    foo(martix);
    boo(martix);
   for(int i = 0 ; i < size ; ++i)
    {
        for(int j = 0 ; j < size ; ++j)
        {
            
            
            std::cout<<martix[i][j];
        }
        std::cout << std::endl;
    }
}