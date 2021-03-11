#include <iostream>
#include "math.hpp"
#include "bananas.hpp"

class myClass{
  public:
    void whoAmI(){
        std::cout<<"I am a class method.\n";
    }
    int returnMyNum(){
      return (*this).secretNum;
    };
  private:
    int secretNum{5};
};
 
int main()
{
    myClass myObj;
    myObj.whoAmI();
    std::cout << myObj.returnMyNum()<<std::endl;

    std::cout << math::math( 1,  2,  3,  4) <<"...\n";
    std::cout << bananas::returnBananas();
    return 0;
}
 
