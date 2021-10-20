#include <iostream>
#include <string>
#include <bitset>

bool foo(std::string tmp)
{
     std::bitset<256> bit(0);
     
    std::string tmp2="";
   
    for(int i = 0 ; i<tmp.length() ; ++i)
    {
        if(tmp[i]!=' ')
        {
            tmp2+=tmp[i];
        }
    }
    tmp=tmp2;
    for(int i = 0 ; i < tmp.length() ; ++i)
    {
        if(bit[tmp[i]]==0)
        {
            bit.set(tmp[i]);
           
        }
        else
        {   
            bit.reset(tmp[i]);
        }
    }
   
    if(tmp.length()%2==0 && bit==0)
    return true;
    int size=0;
     for(int i = 0 ; i < 256 ; ++i)
     {
         if(bit[i])
         {
             ++size;
         }
     }

    if(tmp.length()%2==1 && size==1)
    {
            return true;
    }
     
     //std::cout<<bit<<std::endl;
        return false;
}


int main()
{
    std::string sentense="";
    std::cout<<"Please  enter word or word"<<std::endl;
    std::cout<<std::endl;
    getline(std::cin,sentense);
    std::cout<<foo(sentense)<<std::endl;
}