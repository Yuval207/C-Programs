#include <stdio.h>

int main()
{
    int amount , coin1 , coin2 , coin5 , note10 , note20 , note50 , note100 , note200 , note500 , note2000 ;
    note2000 = note500 = note100 = note200 = note50 = note20 = note10 = coin5 = coin2 = coin1 = 0;
    printf("Enter the amount : ");
    scanf("%d" , &amount);

        if (amount>=2000)
        {
            note2000 = amount/2000;
            amount = amount-(2000*note2000);
        }
        if (amount>=500)
        {
            note500 = amount/500;
            amount = amount-(500*note500);
        }
        if (amount>=200)
        {
            note200 = amount/200;
            amount = amount-(200*note200);
        }
        if (amount>=100)
        {
            note100 = amount/100;
            amount = amount-(100*note100);
        }
        if (amount>=50)
        {
            note50 = amount/50;
            amount = amount-(50*note50);
        }
        if (amount>=20)
        {
            note20 = amount/20;
            amount = amount-(20*note20);
        }
        if (amount>=10)
        {
            note10 = amount/10;
            amount = amount-(10*note10);
        }
        if (amount>=5)
        {
            coin5 = amount/5;
            amount = amount-(5*coin5);
        }
        if (amount>=2)
        {
            coin2 = amount/2;
            amount = amount-(2*coin2);
        }
        if (amount>=1)
        {
            coin1 = amount/1;
            amount = amount-(1*coin1);
        }

    printf("\n%d notes of 2000 " , note2000 );
    printf("\n%d notes of 500 " , note500 );
    printf("\n%d notes of 200 " , note200 );
    printf("\n%d notes of 100 " , note100 );
    printf("\n%d notes of 50 " , note50 );
    printf("\n%d notes of 20 " , note20 );
    printf("\n%d notes of 10 " , note10 );
    printf("\n%d coins of 5 " , coin5 );
    printf("\n%d coins of 2 " , coin2 );
    printf("\n%d coins of 1 " , coin1 );

}
/**
 * C program to count minimum number of notes in an amount
 */
 
// #include <stdio.h>

// int main()
// {
//     int amount;
//     int note500, note100, note50, note20, note10, note5, note2, note1;
    
//     /* Initialize all notes to 0 */
//     note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


//     /* Input amount from user */
//     printf("Enter amount: ");
//     scanf("%d", &amount);


//     if(amount >= 500)
//     {
//         note500 = amount/500;
//         amount -= note500 * 500;
//     }
//     if(amount >= 100)
//     {
//         note100 = amount/100;
//         amount -= note100 * 100;
//     }
//     if(amount >= 50)
//     {
//         note50 = amount/50;
//         amount -= note50 * 50;
//     }
//     if(amount >= 20)
//     {
//         note20 = amount/20;
//         amount -= note20 * 20;
//     }
//     if(amount >= 10)
//     {
//         note10 = amount/10;
//         amount -= note10 * 10;
//     }
//     if(amount >= 5)
//     {
//         note5 = amount/5;
//         amount -= note5 * 5;
//     }
//     if(amount >= 2)
//     {
//         note2 = amount /2;
//         amount -= note2 * 2;
//     }
//     if(amount >= 1)
//     {
//         note1 = amount;
//     }

//     /* Print required notes */
//     printf("Total number of notes = \n");
//     printf("500 = %d\n", note500);
//     printf("100 = %d\n", note100);
//     printf("50 = %d\n", note50);
//     printf("20 = %d\n", note20);
//     printf("10 = %d\n", note10);
//     printf("5 = %d\n", note5);
//     printf("2 = %d\n", note2);
//     printf("1 = %d\n", note1);

//     return 0;
// }