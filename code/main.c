#include "list.h"

int main(){

    List l;

    List_Create(&l);

    List_InsertInHead(&l,1);
    List_InsertInHead(&l,2);
    List_InsertInHead(&l,3);
    
    List_PrintListV1(&l);

    return 0;
}