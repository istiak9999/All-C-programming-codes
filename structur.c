#include<stdio.h>
int main()
{
    struct{
    char name[50];
    char colour[10];
    int capacity;
    float milage;


    }Mycar,Yourcar;
    { printf("Mycar\n");
        printf("Model name of the car:");
        scanf("%s",&Mycar.name);
    printf("Colour of the car:");
        scanf("%s",&Mycar.colour);
    printf("Battery Capacity:");
        scanf("%d",&Mycar.capacity);
                printf("Milage:");
        scanf("%f",&Mycar.milage);
  printf("Yourcar\n");
        printf("Model name of the car:");
        scanf("%s",&Yourcar.name);
    printf("Colour of the car:");
        scanf("%s",&Yourcar.colour);
    printf("Battery Capacity:");
        scanf("%d",&Yourcar.capacity);
                printf("Milage:");
        scanf("%f",&Yourcar.milage);
        printf("Mycar\n");
        printf("%s",Mycar.name);
    printf("%s",Mycar.colour);
    printf("Battery Capacity:%d",Mycar.capacity);
                printf("Milage:%f",Mycar.milage);

                printf("Yourcar\n");
        printf("%s",Yourcar.name);
    printf("%s",Yourcar.colour);
    printf("Battery Capacity:%d",Yourcar.capacity);
                printf("Milage:%f",Yourcar.milage);



    }




    return 0;
}
