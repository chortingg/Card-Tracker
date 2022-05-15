#include <stdio.h>
#include <stdlib.h>
void display(void);
void refresh(void);

    char* clubs[15] = {"0", "0", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char* hearts[15] = {"0", "0", "2", "3", "4", "5", "6", "7","8", "9", "10", "J", "Q", "K", "A"};
    char* diamonds[15] = {"0", "0", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char* spades[15] = {"0", "0", "2", "3", "4" , "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char reply, ans, piccard, reply2; 
    char suit;
    char* mark;
    int card;
    int count = 0;

void main(void)
{
    
    printf("\tWelcome to Card Counter. \n\tIf you are ready, press Y.\n\n");
    fflush(stdin);
    scanf("%c", &reply);
    if (reply == 'y' || reply == 'Y')    
    {    
        system("cls");
        printf("Cards: \n\n      Clubs \x05\t       Hearts \x03 \t   Diamonds \x04 \t       Spades \x06\n");
        for (int i = 2; i < 15; i++)
        {
            printf("\n\t%s \x05 \t\t %s \x03  \t\t      %s \x04  \t\t  %s \x06\n", clubs[i], hearts[i], diamonds[i], spades[i]);
        }
        while (count < 52)
        {
            printf("\n\nEnter Suit (C/H/D/S): ");
            fflush(stdin);
            scanf("%c", &suit);
            mark = "XX";
            printf("Picture Card (y/n)? : "); 
            fflush(stdin);
            scanf("%c", &ans); 
            fflush(stdin);
            printf("Enter Card: ");
            fflush(stdin);
            if (ans == 'y' || ans == 'Y')
            {
                scanf("%c", &piccard); 
                fflush(stdin);
            }    
            else if (ans == 'n' || ans == 'N')
            {
                scanf("%d", &card); 
                fflush(stdin);
            }
            else
            {    
                printf("Wrong answer! Try again!");
            }
            fflush(stdin);
            if (suit == 'C' || suit == 'c')
            {
                if (piccard == 'J')
                    {clubs[11] = mark;}
                else if (piccard == 'Q')
                    {clubs[12] = mark;}
                else if (piccard == 'K')
                    {clubs[13] = mark;}
                else if (piccard == 'A') 
                    {clubs[14] = mark;}
           
                clubs[card] = mark; 
                display(); 
                count = count + 1;
            }
            else if (suit == 'H' || suit == 'h')
            {
                if (piccard == 'J')
                    {hearts[11] = mark;}
                else if (piccard == 'Q')
                    {hearts[12] = mark;}
                else if (piccard == 'K')
                    {hearts[13] = mark;}
                else if (piccard == 'A')
                    {hearts[14] = mark;}
                hearts[card] = mark;
                display();
                count = count + 1;
            }
            else if (suit == 'D' || suit == 'd')
            {
                if (piccard == 'J')
                    diamonds[11] = mark;
                if (piccard == 'Q')
                    diamonds[12] = mark;
                if (piccard == 'K')
                    diamonds[13] = mark;
                if (piccard == 'A')
                    diamonds[14] = mark;
                diamonds[card] = mark;
                display();
                count = count + 1;
            }
            else if (suit == 'S' || suit == 's')
            {
                if (piccard == 'J')
                    spades[11] = mark;
                if (piccard == 'Q')
                    spades[12] = mark;
                if (piccard == 'K')
                    spades[13] = mark;
                if (piccard == 'A')
                    spades [14] = mark;
                spades[card] = mark;
                display();
                count = count + 1;
            }
            piccard = '0';
            card    = 0; 
        }   
        printf("Game finished, refresh?\n");
        fflush(stdin);
        scanf("%c", &reply2);
        if (reply2 == 'y' || reply2 == 'Y')
        {
            refresh();
            display();
        }
        else
        {
            system("cls");
            printf("GOOOBYE!");
            count = 100;
        }
    }
    else
    {   printf("\nPlease exit this area now.\n\n\n");   
    }
}

void display(void)
{
    system("cls");
    for (int i = 2; i < 15; i++)
    {
        printf("\n\t%s \x05   \t\t %s \x03  \t\t   %s \x04  \t\t   %s \x06\n", clubs[i], hearts[i], diamonds[i], spades[i]);
    }
}
void refresh(void)
{
    char* clubs[15] = {"0", "0", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char* hearts[15] = {"0", "0", "2", "3", "4", "5", "6", "7","8", "9", "10", "J", "Q", "K", "A"};
    char* diamonds[15] = {"0", "0", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char* spades[15] = {"0", "0", "2", "3", "4" , "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    count = 0;
    system("cls");
}

