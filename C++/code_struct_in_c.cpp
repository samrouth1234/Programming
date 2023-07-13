#include <stdio.h>
#include <stdlib.h>
struct Cars{
    int code;
    char name[20];
    int gear;
    char country[20];
    float price;
};
struct Cars Input(){
    struct Cars obj;
    printf("Input Code: ");
    scanf("%d",&obj.code);
    printf("Input Name: ");
    fflush(stdin);
    scanf("%s",&obj.name);
    printf("Input Gear: ");
    scanf("%d",&obj.gear);
    printf("Input Country: ");
    scanf("%s",&obj.country);
    printf("Input Price: ");
    scanf("%f",&obj.price);
    return obj;
};
void Output(struct Cars obj){
    printf("Code: %d\t Name: %s\t Gear: %d\t Country: %s\t Price: %f$",obj.code,obj.name,obj.gear,obj.country,obj.price);
}
int main(){
    struct Cars *obj;
    int size;
    printf("----- Input -----\n");
    printf("Input Number of Cars: ");
    scanf("%d",&size);
    obj = calloc(size,sizeof(struct Cars*));
    for(int i=0;i<size;i++){
        obj[i]=Input();
    }
    printf("----- Output -----\n");
    for(int i=0;i<size;i++){
        Output(obj[i]);
    }
    printf("----- Search -----\n");
    int Search_Code;
    int check=0;
    printf("Code of to Search: ");
    scanf("%d",&Search_Code);
    for(int i=0;i<size;i++){
        if(Search_Code==obj[i].code){
            printf("Search Successfully!\n");
            Output(obj[i]);
            check=1;
        }

    }
    if(check==0){
        printf("Not found!\n");
    }
}
