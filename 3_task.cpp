#include  <iostream>
#include  <string>

std::string foo(std::string tmp)
{
   std::string t="";
  for(int i = 0 ; i<tmp.length() ; ++i)
  {   
      if(tmp[i]==' ')
      {
          t+="M%20";
      }
      else
      {
         t+=tmp[i];
      }
  }
  return t;
}





int main()
{
    std::string sen="";
    std::cout<<"Please Enter you sentence" <<std::endl;
    getline(std::cin,sen);
     std::string now=foo(sen);
     std::cout<<now.length()<<std::endl;
     std::cout<<now<<std::endl;
}