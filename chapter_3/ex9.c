#include <stdio.h>

int main(void) {

    int group,english,id_publisher,code_publisher,check;
    scanf("%d-%d-%d-%d-%d",&group,&english,&id_publisher,&code_publisher,&check);
    printf("GS1 prefix: %d\n", group);
    printf("Group identifier: %d\n", english);
    printf("Publisher code: %d\n", id_publisher);
    printf("Item number: %d\n", code_publisher);
    printf("Check digit: %d", check);
    
    
    return 0;
}
