#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int height = 5;
    for (i = 0; i < height; i++)
    {
       cout<<"*";
        for (j = 0; j < height; j++)
        {
            if ((j == height - 1) || (i == height / 2))
                cout<<"*";
            else
                cout<<" ";
        }
       cout<<endl;
    }
    return 0;
}