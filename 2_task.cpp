#include <iostream>
#include <string>
//#include <map>

bool isSame(std::string word1,std::string word2)
{
    if(word1.length()!=word2.length())
    return false;
     int tmp[256]={0};
     
      for(int i = 0 ; i <word1.length() ; ++i)
      {
        --tmp[word1[i]];
        ++tmp[word2[i]];
      }
      for(int i = 0; i < 256; ++i)
      {
          if(tmp[i])
          {
              return false;
          }
      }
    return true;
}


int main()
{
    std::string word1="";
    std::string word2="";
    std::cout<<"Please enter 1st word"<<std::endl;
    std::cout<<std::endl;
    std::cin>>word1;

     std::cout<<"Please enter 2nd word"<<std::endl;
     std::cout<<std::endl;
     std::cin>>word2;
     std::cout<<isSame(word1,word2)<<std::endl;
}