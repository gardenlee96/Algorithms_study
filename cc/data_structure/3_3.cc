#include <iostream>
#include <stdio.h>

using namespace std;

class search_index{
    int* a;
    int n;
    int key;

    public:
      search_index(int* a,int n,int key) : a(a),n(n),key(key){}

    
        void index_fucntion(){
         int i=0;

            while(1){
                if(a[i] == key){
                    cout << a[i] <<endl;
                    break;
                  }
                                i++;
            } 
             n==i ? cout << "not found" : cout << i;
        }

};

        int main(){
            int n,key;
            int* a;
            
                cout << "input : total data count" <<endl; 
                cin >> n;
                    a = new  int[n+1];
                        for (int i = 0; i < n; i++)
                        {
                            cout << "input: data a[" << i << "]" << endl;
                            cin >> a[i];
                        }
                                cout << "input index key : " << endl;
                                cin >> key;
                a[n] = key; 
                search_index data(a,n,key);
                data.index_fucntion();

                delete[] a;


            return 0;                
        }
