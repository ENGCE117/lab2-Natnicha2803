#include <stdio.h>
#include <string.h>

char* reverse( char str1[]) ;

int main() {
    char text[ 50 ] ;
    char *output ;
    printf( "Enter str1 : " );
    fgets( text, sizeof(text), stdin ) ; //รับค่า

    output = reverse( text ) ;
    printf( "MAIN : %s\n", output ) ;
}//end function

char str2[ 50 ] ;
char* reverse( char str1[]) {
    int length ;
    length = strlen( str1 ) ;

    for ( int i = 0 ; i < length ; i++ ) {
        str2[i] = str1[ length - 1 - i ] ;
    }//end for
    str2[ length ] = '\0' ;
    printf( "FUNC : %s\n",str2) ;
    return str2 ;
}
