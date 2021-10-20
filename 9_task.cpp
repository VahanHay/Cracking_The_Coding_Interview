#include <iostream>
#include <string>

bool retote(std::string word1 ,std::string word2)
{
    if(word1.length()!=word2.length())
    {
        return false;
    }
    for(int i = 0 ; i < word2.length() ; ++i)
    {
        if(word2==word1)
        {
            return true;
        }
        char ch=word1[0];
        word1.erase(0,1);
        word1+=ch;                         
    }
    return false ;
}




int main()
{
    std::string first="";
    std::string secend="";

    std::cout<<"Please enter first word"<<std::endl;
    std::cin>>first;
    std::cout<<"Please enter secend word"<<std::endl;
    std::cin>>secend;
    std::cout<<retote(first,secend)<<std::endl;
}