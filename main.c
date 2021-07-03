#include <stdio.h>

int main()
{
    char character;
    int source;
    int drive;
    int river_going; // variable used for going in the river
    int climbing; // variable used for climbing on the mountain
    int JUMANJI;
    int turning; // variable used for turning the skydiving suit 
    int piranha; // variable used for piranha driving
    int helicopter; // variable used for helicopter
    //main code

    printf("Welcome to JUMANJI \n");
    printf("Please select the character ! \n");
    printf("Type A to choose Bravestone \n Type B to choose Ruby roundhouse \n");
    scanf("%c", &character);
    if (character == 'A')
    {
        printf("Welcome Bravestone \n");
    }
    else if (character == 'B')
    {
        printf("Welcome Ruby roundhouse \n");
    }
    printf("Welcome to the jungle \n Please press 1 for boat \n Please press 2 for areoplane \n");
    scanf("%d", &source);
    if (source == 1)
    {
        printf("Welcome in the Boat \n");
        printf("Press 1 for driving fast \n Press 2 for moderate \n Press 3 for slow \n");
        scanf("%d", &drive);
        if (drive == 1)
        {
           printf("Please do not shout crocodile is here \n");
           printf("Press 1 for going in the river \n Press 2 for not going in the river \n");
           scanf("%d", &river_going);
           if (river_going == 1)
           {
               printf("Game over \n");
               printf("Crocodile eaten you like a cheese !\n");
               
           }
           else if (river_going == 2)
           {
               printf("Welcome to the mountain \n");
               printf("Press 1 for going to the mountain by bike \n Press 2 for skydiving \n");
               scanf("%d", &climbing);
               if (climbing == 1)
               {
                   printf("For speaking jumanji Press 1 \n");
                   scanf("%d", &JUMANJI);
                   if(JUMANJI == 1)
                   {
                       printf("You won the game\n");
                   }
                   
               }
               else if (climbing == 2)
               {
                   printf("Please press 1 for turning right \n Please press 2 for turning left \n");
                   scanf("%d", &turning);
                   if (turning == 1)
                   {
                       printf("For speaking jumanji Press 1 \n");
                       scanf("%d", &JUMANJI);
                       if(JUMANJI == 1)
                       {
                       printf("You won the game\n");
                       }
                   }
                   else if (turning == 2)
                   {
                       printf("You got stuck in the monkey house\n");
                       printf("You become dinner of monkey \n");
                   }
               }

           }
        
        }
        else if (drive == 2)
        {
            printf("Sound of piranha is comming \n");
            printf("Press 1 for fast driving \n Press 2 for staying \n");
            scanf("%d", &piranha);
            if(piranha == 1)
            {
               printf("Piranha is faster then you and you become a dinner \n");
               printf("Game over");
            }
            else if (piranha == 2)
            {
                printf("Helicopter is there to help you \n");
                printf("Press 1 to go in the helicopter \n");
                scanf("%d", &helicopter);
                if (helicopter == 1)
                {
                    printf("You are safe now \n");
                    printf("Welcome to the mountain \n");
                    printf("Press 1 for going to the mountain by bike \n Press 2 for skydiving \n");
                    scanf("%d", &climbing);
                    if (climbing == 1)
                    {
                       printf("For speaking jumanji Press 1 \n");
                       scanf("%d", &JUMANJI);
                       if(JUMANJI == 1)
                       {
                       printf("You won the game\n");
                       }
                   
                    }

                }
            }
        }
        else if (drive == 3)
        {
            printf("You are surrounded by some kind of fish \n");
            sleep(2);
            printf("Megalidon eaten you\n");
            sleep(1);
            printf("game over\n");
        }

    }
    else if (source == 2)
    {
       printf("Welcome to the mountain \n");
       printf("Press 1 for going to the mountain by bike \n Press 2 for skydiving \n");
       scanf("%d", &climbing);
       if (climbing == 1)
            {
                printf("For speaking jumanji Press 1 \n");
                scanf("%d", &JUMANJI);
                if(JUMANJI == 1)
                {
                    printf("You won the game\n");
                }
                   
            }
        else if (climbing == 2)
            {
                printf("Please press 1 for turning right \n Pleas    press 2 for turning left \n");
                scanf("%d", &turning);
                if (turning == 1)
                {
                    printf("For speaking jumanji Press 1 \n");
                    scanf("%d", &JUMANJI);
                    if(JUMANJI == 1)
                    {
                    printf("You won the game\n");
                    }
                }

            }


    }
    printf("Thanks for playing this game");
    return 0;
}
