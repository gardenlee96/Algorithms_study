#include <iostream>

class binary_searching{
    int n,key;
    int* data;
    int pr,pl,pc;

    public:
        binary_searching(int n,int* data,int key) : n(n),data(data),key(key) {}

        int searching(){
           pr = n - 1;
           pl = 0;
           do{
               pc = (pr + pl) /2;
               if(data[pc] == key){
                   std::cout << pc << std::endl;
                   return 1;
               }

                    else if(data[pc] < key)
                    pl = pc +1;
                        
                        else 
                            pr = pc - 1;
           }while(pl <= pr);

           return -1;
        }
};


int main(){
    int n = 5;
    int key;
    int a[5] = {13,14,15,19,29};
    int none;

    std:: cin >> key;
    binary_searching indexing(n,a,key);
    none = indexing.searching();

        if(none == -1)
            std::cout << "don't find"<<std::endl;


        return 0; 
}
