#include <iostream>
#include <string>

bool foo(std::string word)
{
    int j=1;
    for(int i = 0 ; i < word.length() ; ++i)
    {
        char ch=word[i];
        for( int k = j; k<word.length() ; ++k)
        {
            if(ch==word[j])
            {
               return true;
            }
        }
        ++j;
    }
    return false;
}

int main()
{
 std::cout<<"Write yor word " <<std::endl;
  std::cout<<std::endl;
 std::cout<<"This program will say is there same character"<<std::endl;
 std::cout<<std::endl;
 std::string word="";
 std::cin>>word;
 
  if(foo(word))
  {
      std::cout<<"Yes there are" <<std::endl;
  }
  else
  {
      std::cout<<"No it is not" <<std::endl;
  }
 return 0;
}