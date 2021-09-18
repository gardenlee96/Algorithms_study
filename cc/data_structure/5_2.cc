#include <iostream>

int gcd(int x,int y){
    if(x > y){
          return gcd(x%y,y); 
    }
    else if(x < y){
            return gcd(x,y%x);
    }
    else
       return x; 

}

int main(){
    int x,y;
        
        std::cin >> x;
        std::cin >> y;
      std::cout << gcd(x,y) << std::endl;

        return 0; 
}