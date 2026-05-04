#include<stdio.h>
int main()
{
    int amount, notes_1000, notes_500, notes_200, notes_100, notes_50, notes_20, notes_10, notes_5, notes_2, notes_1;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of notes for each denomination
    //notes_1000 = amount / 1000;
    //amount = amount % 1000;

    notes_500 = amount / 500;
    amount = amount % 500;

    notes_200 = amount / 200;
    amount = amount % 200;
    
    notes_100 = amount / 100;
    amount = amount % 100;

    notes_50 = amount / 50;
    amount = amount % 50;

    notes_20 = amount / 20;
    amount = amount % 20;

    notes_10 = amount / 10;
    amount = amount % 10;

    notes_5 = amount / 5;
    amount = amount % 5;

    notes_2 = amount / 2;
    amount = amount % 2;

    notes_1 = amount / 1;
    amount = amount % 1;

    // Print the count of each note
    
    printf("500 rupees notes: %d\n", notes_500);
    printf("200 rupees notes: %d\n", notes_200);
    printf("100 rupees notes: %d\n", notes_100);
    printf("50 rupees notes: %d\n", notes_50);
    printf("20 rupees notes: %d\n", notes_20);
    printf("10 rupees notes: %d\n", notes_10);
    printf("5 rupees notes: %d\n", notes_5);
    printf("2 rupees coins: %d\n", notes_2);
    printf("1 rupee coins: %d\n", notes_1);

    return 0;
}