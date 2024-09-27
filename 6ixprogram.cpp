#include <iostream>
#include <ctype.h>
using namespace std;
int main()
{
    int i = 0;
    char ch[50];
    cout<<"Enter a sentence:";
    (ch);
    cout<<"The sentence in lowercase is; ";
    while(ch[i]!='\0')
    {
        ch[i] = toupper(ch[i]);
        i++;

    }
    puts(ch);
    return 0;
}