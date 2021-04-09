#include <stdio.h>

int main(void) {

    int one,two,three,four,five,six,seven,eight,nine,ten,eleven,twelve,thirteen,fourteen,fifthteen,sixteen;
    printf("Enter the numbers from 1 to 16 in any order, separated by a space :");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&one,&two,&three,&four,&five,&six,&seven,&eight,&nine,&ten,&eleven,&twelve,&thirteen,&fourteen,&fifthteen,&sixteen);
    
    printf("%2d %2d %2d %2d\n",one,two,three,four);
    printf("%2d %2d %2d %2d\n",five,six,seven,eight);
    printf("%2d %2d %2d %2d\n",nine,ten,eleven,twelve);
    printf("%2d %2d %2d %2d\n",thirteen,fourteen,fifthteen,sixteen);
    
    printf("Row sums: %d %d %d %d\n", one+two+three+four, five+six+seven+eight, nine+ten+eleven+twelve, thirteen+fourteen+fifthteen+sixteen);
    printf("Column sums: %d %d %d %d\n", one+five+nine+thirteen, two+six+ten+fourteen, three+seven+eleven+fifthteen, four+eight+twelve+sixteen);
    printf("Diagonal sums: %d %d\n", one+six+eleven+sixteen, four+seven+ten+thirteen);
    
    return 0;
}
