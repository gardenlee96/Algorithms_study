#include <iostream>
#include <vector>
using namespace std;

const int MAX = 100001;

vector<int>v[MAX];
int parent[MAX];
bool flag[MAX];

void DSP(int x){
    int next;

    flag[x] = true;
    for (int i = 0; i < v[x].size(); ++i) {
        next=v[x][i];
        if(flag[next] == false){
            parent[next]=x;
            DSP(next);
        }
    }
}


int main(){
    int n;
    int x,y;

    ios_base::sync_with_stdio(0);
    cin.tie(0);

        cin >> n;
            for (int i = 1; i < n; ++i) {
               cin >> x >> y;
               v[x].push_back(y);
               v[y].push_back(x);
            }

            DSP(1);

    for (int j = 2; j <= n; ++j)
       cout << parent[j] << '\n';


    return 0;
}
