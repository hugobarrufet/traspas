#include <studio>
int main(){
int any;
printf("any??: ");
scanf("%d" , &any);
if(any%4 != 0)
  printf("no");
else if(any%100 != 0)
        printf("si");
     else if(any%400 != 0)
            printf("no");
          else printf("si");
printf("\n");
return 0;
}
