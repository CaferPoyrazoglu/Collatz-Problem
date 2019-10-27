#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    int sayi = 0;
    int PID,durum;

    printf("Sayi girin: \n");
    scanf("%d", &sayi);

       if(sayi < 0)
    {
          printf("Pozitif sayi girin: 0 \n");
		  scanf("%d", &sayi);
    }

    PID = fork();

    if(PID < 0)
    {
      printf(" Tamamlanamadi \n");
      exit(-1);
    }

    else if(PID == 0)
    {
             do
        {
        if(sayi%2 != 0)
        {
          sayi = (sayi*3)+1;
                }

        else if(sayi%2 == 0)
        {
          sayi = sayi/2;
        }

        printf("%d \n",sayi);
        }while(sayi != 1);
    }

    else
    {

        printf("PID %d \n",PID);
		wait(&durum);
      }


return 0;
}
