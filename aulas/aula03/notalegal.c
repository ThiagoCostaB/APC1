#include <stdio.h>
int main(){
 printf("\x1b[32m--------------------------\n");
 printf("    N O T A  L E G A L    \n");
 printf("--------------------------\x1b[0m\n");
 printf("\x1b[35mITEM           QTD VALOR \x1b[0m\n");
 printf("\x1b[36m%-13s\x1b[0m %3i %7.2f\n", "Banana nanica", 1, 15.00); 
 printf("\x1b[36m%-13s\x1b[0m %3i %7.2f\n", "Maca fuji", 10, 50.00);
 printf("\x1b[36m%-13s\x1b[0m %3i %7.2f\n", "Uva globo", 5, 26.00);
 //printf("Banana nanica    1   15.00\n");
 //printf("Maca fuji        10  50.00\n");
 //printf("Uva globo        5   26.00\n");
 printf("\x1b[32m--------------------------\n");
 printf("TOTAL........:\x1b[0m R$ %8.2f      \n", 91.00);
  return 0;
}