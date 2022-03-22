#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

void Remove_first_char( char st[10000] )
{
    char *changer = st+1; // removes first character in changer

    for (int i =0; i < strlen(changer); i++)

        st[i] = changer[i];

    st[strlen(st)-1] = '\0';

}

int main()
{

    char st[10000] ;
    scanf("%[^\n]",st);

    Remove_first_char(st); // call the function

     printf("%s",st);

    return 0;
}
