#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// This structure is defining the attributes of the property 
typedef struct property{
     char loc[100];
     int id;
     int price;
}pro;
pro p1;
FILE *ptr = NULL;
pro arr[30];
pro arr1[20];
pro arr2[20];
pro arr3[20];

// The function of this module is to add the property details to a file 
void add(){
    ptr = fopen("file1.txt","a");
    char no='y';
    int x=1;
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }
    while(no =='y'){
        printf("Enter the location of the property.......  ");
        gets(p1.loc);
        fflush(stdin);
        printf("Enter the id........  ");
        scanf("%d",&p1.id);
        fflush(stdin);
        printf("Enter the price.......  ");
        scanf("%d",&p1.price);
        fflush(stdin);
        fputs(p1.loc,ptr);
        fputs("\n",ptr);
        fprintf(ptr,"%d",p1.id);
        fputs("\n",ptr);
        fprintf(ptr,"%d",p1.price);
        fputs("\n",ptr);
        fputs("\n",ptr);
        printf("\nTO ADD MORE TYPE (y/n): ");
        scanf("%c",&no);
        fflush(stdin);
    }
    fclose(ptr);
    
} 

// The function of this module is to display all the property avaliable
void display(){
  ptr = fopen("file1.txt","r");
  char c;
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }

  c = fgetc(ptr);
  while(c!=EOF){
    printf("%c",c);
    c = fgetc(ptr);
  }
  fclose(ptr);

}

// The function of this module is to display the sold out property
void sold(){
  ptr = fopen("sold.txt","r");
  char c;
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }

  c = fgetc(ptr);
  while(c!=EOF){
    printf("%c",c);
    c = fgetc(ptr);
  }
  fclose(ptr);

}


// The function of this module is to search the property with respect to user's budget
void search(){

  int budget,x=0;
  char c;
  ptr  = fopen("file1.txt","r");
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }
    
  printf("Enter your budget: ");
  scanf("%d",&budget);
  fflush(stdin);
  c = fgetc(ptr);
    rewind(ptr);
    while (c!= EOF){
    fscanf(ptr,"%s%d%d",arr[x].loc,&arr[x].id,&arr[x].price);
    c = fgetc(ptr);
    x++;
    }

  fclose(ptr);
  for (int i=0;i<30;i++){
    if (budget==arr[i].price || arr[i].price<budget && arr[i].price!=0){
      printf("\n\n%s",arr[i].loc);
      printf("\n%d",arr[i].id);
      printf("\n%d",arr[i].price);

    }
  }
  }



// The function of this module is to edit the property details like location and price

void edit(){

  int sim,x=0;
  char c;

  ptr = fopen("file1.txt","r");
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }

    c = fgetc(ptr);
    rewind(ptr);
    while (c!= EOF){
    fscanf(ptr,"%s%d%d",arr1[x].loc,&arr1[x].id,&arr1[x].price);
    c = fgetc(ptr);
    x++;
    }
    fclose(ptr);
    char ch = 'y';
    int i =0;
    int z,price1;
    char ary[20];
    while(ch == 'y'){
      printf("Enter the id of property u want to edit: ");
      scanf("%d",&sim);
      fflush(stdin);
      for (int i=0;i<20;i++){
      if (sim == arr1[i].id){
        printf("\n\nPress 1 to change location");
        printf("\nPress 2 to change price");
        printf("\nEnter ur choice: ");
        scanf("%d",&z);
        fflush(stdin);
        switch (z){
          case 1:
          printf("Enter the location: ");
          gets(ary);
          strcpy(arr1[i].loc,ary);
          printf("\n\n!!!  SUCESSFULLY CHANGED  !!!\n\n");
          break;
          case 2:
          printf("Enter the price: ");
          scanf("%d",&price1);
          arr1[i].price = price1;
          printf("\n\n!!!  SUCESSFULLY CHANGED  !!!\n\n");
          break;
          default:
          printf("Enter valid choice");
        }
      }
    }
        fflush(stdin);
        printf("\nTO EDIT MORE TYPE (y/n): ");
        scanf("%c",&ch);
        fflush(stdin);
        
    }

    ptr = fopen("file1.txt","w");
    int j=0;
      while (arr1[j].price!=0){
      fputs(arr1[j].loc,ptr);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr1[j].id);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr1[j].price);
      fputs("\n",ptr);
      fputs("\n",ptr);
      j++;
    }
     
     fclose(ptr);
     int g;
  for (g=0;g<20;g++){
      arr1[g].id=0;
      arr1[g].price=0;
}
}


// The function of this module is to delete a record of property

 void delete(){

  int sim,x=0;
  char c;

  ptr = fopen("file1.txt","r");
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }

    c = fgetc(ptr);
    rewind(ptr);
    while (c!= EOF){
    fscanf(ptr,"%s%d%d",arr2[x].loc,&arr2[x].id,&arr2[x].price);
    c = fgetc(ptr);
    x++;
    }
    fclose(ptr);
    char ch = 'y';
    int i =0;
    char ary[20];
    while(ch == 'y'){
      printf("Enter the id of property u want to delete: ");
      scanf("%d",&sim);
      fflush(stdin);
      for (int i=0;i<20;i++){
      if (sim == arr2[i].id){
        arr2[i].price = 0;
        printf("\n\n!!!  SUCESSFULLY DELETED  !!!\n\n");
      }
    }
        fflush(stdin);
        printf("\nTO DELETE MORE TYPE (y/n): ");
        scanf("%c",&ch);
        fflush(stdin);
        
    }
    ptr = fopen("file1.txt","w");
    int j;
      for (j=0;j<20;j++){
      if (arr2[j].price!=0){
      fputs(arr2[j].loc,ptr);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr2[j].id);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr2[j].price);
      fputs("\n",ptr);
      fputs("\n",ptr);
      
    }
   }
  fclose(ptr);
  int w;
  for (w=0;w<20;w++){
      arr2[w].id=0;
      arr2[w].price=0;
}

}



// The function help's the user to buy any property 

void buy(){
   int x=0,sim,pay;
   char c; 
    ptr = fopen("file1.txt","r");
    if (ptr == NULL){
      printf("FILE CAN'T BE OPEN");
      exit(1);
    }

    c = fgetc(ptr);
    rewind(ptr);
    while (c!= EOF){
    fscanf(ptr,"%s%d%d",arr3[x].loc,&arr3[x].id,&arr3[x].price);
    c = fgetc(ptr);
    x++;
    }
    fclose(ptr);
    ptr = fopen("sold.txt","a");
    printf("Enter the id of the property u wann'a buy: ");
    scanf("%d",&sim);
    fflush(stdin);
    for (int i=0;i<20;i++){
      if (arr3[i].id==sim){
         printf("Price of this property is: %d",arr3[i].price);
         printf("\n\nPay your amount....  ");
         scanf("%d",&pay);
         fflush(stdin);
         if (pay==arr3[i].price){
          printf("\n\n\n!!!   PAYMENT SUCESSFULL   !!!");
          printf("\n  !!!     PURCHASED      !!!");
          fprintf(ptr,"%s",arr3[i].loc);
          fputs("\n",ptr);
          fprintf(ptr,"%d",arr3[i].id);
          fputs("\n",ptr);
          fprintf(ptr,"%d",arr3[i].price);
          fputs("\n",ptr);
          fputs("\n",ptr);
          arr3[i].id = 0;
          arr3[i].price = 0;

          break;
         }
         else if(pay > arr[3].price){
          printf("\n\n!!!   WE ARE NOT CORRUPTED   !!!");
          break;
         }
         else if (pay < arr3[i].price){
          printf("\n\n!!!   PAYMENT DECLINED   !!!");
          break;
         }
      }
    }
    fclose(ptr);

    ptr = fopen("file1.txt","w");
    int j;
      for (j=0;j<20;j++){
      if (arr3[j].price!=0 || arr3[j].id!=0){
      fputs(arr3[j].loc,ptr);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr3[j].id);
      fputs("\n",ptr);
      fprintf(ptr,"%d",arr3[j].price);
      fputs("\n",ptr);
      fputs("\n",ptr);
      
    }
   }
  fclose(ptr);
   int v;
   for (v=0;v<20;v++){
    arr3[v].id=0;
    arr3[v].price=0;
   }

    
}

// This is the main function by which user can select the option which is given below

int main(){
    int option;
    printf("\n\n        *********************************");
    printf("\n         !!!!   HEY! USER WELCOME   !!!!");
    printf("\n        *********************************");
    back:
    printf("\n\n\nEnter option 1 for adding any property");
    printf("\nEnter option 2 to display the property");
    printf("\nEnter option 3 to display the sold property");
    printf("\nEnter option 4 to search ");
    printf("\nEnter option 5 to edit the property");
    printf("\nEnter option 6 to delete the property");
    printf("\nEnter option 7 to buy a property ");
    printf("\nEnter option 8 to exit the program");
    printf("\n\nEnter your option........  ");
    scanf("%d",&option);
    fflush(stdin);
    
    switch (option){
        case 1:
         add();
        break;
        case 2:
         display();
        break;
        case 3:
         sold();
        break;
        case 4:
         search();
        break;
        case 5:
         edit();
         break;
        case 6:
         delete();
        break;
        case 7:
         buy();
        break;
        case 8:
         exit(1);
        break;
        default:
         printf("Enter the valid option !!!\n\n");
    }

    goto back;
    return 0;

}
