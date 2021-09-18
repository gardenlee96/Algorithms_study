#include <iostream>

class Stack{
    private:
        int *data;
        int top;
        int max_size;

    public:
        Stack(int size);
        bool is_full(),is_empty();
        void pop();
        void push(int n);
};

Stack::Stack(int size){
    top = -1;
    max_size = size;
    data = new int[size];
}

bool Stack::is_full(){
    if(top == (max_size -1)) return 1;
    else  return 0;
}

bool Stack::is_empty(){
    if(top == (-1)) return 1;
    else  return 0;
}

void Stack::push(int n){
    if(is_full() == 1){
        std::cout << "already full" <<std::endl;
    }
    else{
    top ++;
    data[top] = n;
    }
}

void Stack::pop(){
    if(is_empty()==1)
        std::cout << "stack empty" <<std::endl;
    
    else{
    std::cout << "data " << top <<":"<<data[top] <<std::endl;
    top --;
        }
}

int main(){
    int data;
    int max_size;

    std::cin >> max_size;
    Stack s(max_size);

    for (int i = 0; i < max_size; i++)
    {
        std::cout << "push data"<< std::endl;
        std::cin >> data;
        s.push(data);
    }

   

    for (int i = 0; i < max_size; i++)
    {
        std::cout << "pop data"<<std::endl;
       s.pop();
    }
    return 0;    
}