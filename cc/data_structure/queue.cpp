#include <iostream>

using namespace std;

struct queue_data{
    int data;
    queue_data* link;
};

class queue{
    private:
        queue_data* front;
        queue_data* rare;
        queue_data* rare_before;
    public:
        queue();
        void push(int data);
        void pop();
        bool is_empty();
};

queue::queue(){
    front = NULL;
    rare = NULL;
    rare_before =NULL;
}

bool queue::is_empty(){
    if((front == NULL) && (rare == NULL)) return 1;
    else return 0;
}

void queue::push(int data){
    queue_data* temp;
        if(rare == NULL){
            rare = new queue_data;
            front = rare;
        }
            else{
                temp = new queue_data;
                if(front == rare)
                    rare_before = temp;
                temp->link  = front;
                front = temp;
            }
            front->data = data;
}

void queue::pop(){
    queue_data* temp;

    if(is_empty())
        cout <<  "empty queue" << endl;
        
    else{
        cout << "pop data" <<endl;
        cout << rare->data << endl;
        rare = rare_before;
        temp =front;
            while(1){
                if(temp->link == rare){
                    temp = rare_before;
                    break;
                }
                else
                    temp = temp ->link;
            }    

        }
 }


int main(){
    queue q;
    int choice;
    int data;



    while(choice != 3){
    cout << "1,push" << endl << "2,pop" << endl <<"3,exit"<<endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "push data"<<endl;
        cin  >> data;
        q.push(data);
        break;
    case 2:
        q.pop();
        break;
    }
    }

    return 0;
}