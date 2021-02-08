#include <libintl.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int count = 1;
    setlocale( LC_ALL, "" );
    bindtextdomain( "AISS", "/usr/share/locale" );
    textdomain( "AISS" );
    printf( gettext( "I love you\n" ) );
    