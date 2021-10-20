#include <iostream>
#include <string>
bool foo(std::string tmp,std::string tmp2)
{
    int count=0;
    if(tmp.length() == tmp2.length())
    {
        for(int i = 0; i < tmp.length() ; ++i)
        {   
            if(tmp[i]!=tmp2[i])
            {
                ++count;
                if(count==2)
                return false;
            }
            
        }
    }
    else if(tmp.length()-1 == tmp2.length())
    {
        for(int i =0, j=0;  i<tmp.length();++i)
        {
            if(tmp[i]==tmp2[j])
             ++j;
            else 
                {
                 ++count;
                }
            if(count==2)
            return false;
        }
    }
    if(count==1)
    return true;
    return false;
}

int main()
{
    std::string word="";
    std::string word2="";
    std::cout<<"Please Enter 1st word "<<std::endl;
    std::cout<<std::endl;
    std::cin>>word;
    std::cout<<"Please Enter 1st word "<<std::endl;
    std::cout<<std::endl;
    std::cin>>word2;
    std::cout<<foo(word,word2)<<std::endl;
    return 0;
}