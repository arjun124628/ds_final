#include<stdio.h>
int menu();
void insert();
void delete();
void update();

int main()
{
    while(menu()!=5);



    return 0;
}

int menu()
{
    int op;
    printf("Select Linked List Operation :\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Update\n");
    printf("4. Search\n");
    printf("5. Close\n");
    printf("Input Operation : ");

    scanf("%d",&op);
    printf("%d",op);
    if(op==1){
        insert();
    }
    else if(op==2){
        delete();
    }
    else if(op==3){
        update();
    }
    else if(op==4){
        search();
    }
    else if(op==5){
        printf("===Close Operation===");
        return op;
    }
    else{
        printf("Invalid Operation try again\n");
    }




}


void insert()
{
    int op;
    printf("Select insert Operation :\n");
    printf("1. push front\n");
    printf("2. push back\n");
    printf("3. push after\n");
    printf("4. push before\n");
    printf("5. push at\n");
    printf("6. close\n");

    printf("Input Operation : ");

    scanf("%d",&op);
    printf("%d",op);
    if(op==1){
        printf("===push front Operation===");
    }
    else if(op==2){
        printf("===push back Operation===");
    }
    else if(op==3){
        printf("===push after Operation===");
    }
    else if(op==4){
        printf("===push before Operation===");
    }
    else if(op==5){
        printf("===push at Operation===");
    }
    else if(op==6){
        printf("===Close Operation===");
        return op;
    }
    else{
        printf("Invalid Operation try again\n");
    }




}



void delete()
{
    int op;
    printf("Select Delete Operation :\n");
    printf("1. pop front\n");
    printf("2. pop back\n");
    printf("3. pop value\n");
    printf("4. pop at\n");
    printf("5. close\n");

    printf("Input Operation : ");

    scanf("%d",&op);
    printf("%d",op);
    if(op==1){
        printf("===pop front Operation===");
    }
    else if(op==2){
        printf("===pop back Operation===");
    }
    else if(op==3){
        printf("===pop value Operation===");
    }
    else if(op==4){
        printf("===pop at Operation===");
    }
    else if(op==5){
        printf("===Close Operation===");
        return op;
    }
    else{
        printf("Invalid Operation try again\n");
    }




}





void update()
{
    int op;
    printf("Select Update Operation :\n");
    printf("1. update at\n");
    printf("2. update value\n");
    printf("3. close\n");

    printf("Input Operation : ");

    scanf("%d",&op);
    printf("%d",op);
    if(op==1){
        printf("===update at Operation===");
    }
    else if(op==2){
        printf("===update value Operation===");
    }
    else if(op==3){
        printf("===Close Operation===");
        return op;
    }
    else{
        printf("Invalid Operation try again\n");
    }

}





void search()
{
    int op;
    printf("Select Search Operation :\n");
    printf("1. search\n");
    printf("2. close\n");

    printf("Input Operation : ");

    scanf("%d",&op);
    printf("%d",op);
    if(op==1){
        printf("===search Operation===");
    }
    else if(op==2){
        printf("===Close Operation===");
        return op;
    }
    else{
        printf("Invalid Operation try again\n");
    }

}
