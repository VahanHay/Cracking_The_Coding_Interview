#include <iostream>
#include <string>

std::string foo(std::string tmp)
{
    std::string tmp2="";
    tmp2+=tmp[0];
    int count =1;
    char ch=tmp[0];
    
    for(int i = 1; i<tmp.length() ; ++i)
    {
        
        if(ch==tmp[i])
        {
            ++count;
        }
        else if(ch!=tmp[i])
        {
          ch=tmp[i];
          tmp2+=count +48;
          count=1;
          tmp2+=ch;
        }
    }
        tmp2+=count+48;
    
    
    return tmp2;
}



int main()
{
    std::cout<<"Please enter word"<<std::endl;
    std::cout<<std::endl;
    std::string tmp;
    std::cin>>tmp;
    std::cout<<foo(tmp)<<std::endl;
}