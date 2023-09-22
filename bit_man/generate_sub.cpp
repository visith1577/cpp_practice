#include <iostream>
#include <cstring>

using namespace std;

void overlay_number(char arr[], int number)
{
    int j = 0;

    while(number > 0)
    {
        int last_bit = number & 1;
        if(last_bit)
        {
            cout<<arr[j];
        }
        j++;
        number = number>>1;
    }
    cout<<endl;
}

void generate_all_subsequences(char arr[])
{
    for(int i = 0; i< (1<<strlen(arr)); i++)
    {
        overlay_number(arr, i);
    }
}


int main()
{
    char arr[100000];
    cin>>arr;

    generate_all_subsequences(arr);
}
