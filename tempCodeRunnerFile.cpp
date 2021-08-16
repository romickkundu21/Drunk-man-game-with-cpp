#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(){
    srand(time(0));
    const int size=60;
    char x;
    cout<<"Enter any letter to start: ";
    cin >> x;
    int position=size/2;
    while (true)
    {
        cout<<"[Start]";
        for (int i = 0; i < size; i++)
        {
            if (i==position)
            {
                cout<<x;
            }
            
            cout<<" ";
        }
        cout<<"[Finish]"<<endl;
        int move=rand()%3-1;
        position=position+move;
        if (position<1)
        {
            cout<<"You couldn't finish the race."<<endl;
            break;
        }
        if (position>size-1)
        {
           cout<<"YAY! You have finish the race perfectly."<<endl;
           break;
        }
        for(int sleep=0;sleep<100000;++sleep);
    }
    return 0;
}