#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*
    Use "w", "s" on the keyboard,
         "a", "D" control the movement of the ball,
         Move to ">" to win
*/
int i,x,y,p,q;
char ch;
 x=1;
 y=1;
 p=12;
 q=28;
main(){
    printf("\nUse ""w"", ""s"" on the keyboard, ""a"", ""D"" control the movement of the ball, \n move to "">"" to win\n\n");
    char a[50][50]={"_____________________________",
                    "|o        |   _|| || |_| |__|",
                    "| _____ | | |  ||   _| |_| ||",
                    "| |   | |  |_| ||_ | | |    |",
                    "|   | |__| | | | |_|    | _||",
                    "|___| |  | | |  || |_ __|   |",
                    "|   | | |  |  |    ||   || ||",
                    "| | | |_ | | | _| _|___  | ||",
                    "| | | | || |  | |   |    |_ |",
                    "| |   |_        |__ |__  | ||",
                    "| |___|  | ||  _|   ||      |",
                    "|       _| ||             | |",
                    "| _______| | | | |__  |   | >",
                    "|     |  | |     |   _| | | |",
                    "|____ |  | | | | |__  | | | |",
                    "|     |  | | |   ||  _| | | |",
                    "| | |        |__ || | | |  ||",
                    "| |   ___  ||       |    |  |",
                    "_____________________________",
                    };
    for(i=0;i<=18;i++)
        puts(a[i]);
    while(x != p || y != q){
        ch = getch();
        if(ch == 's')
        {
            if(a[x+1][y] != '_' && a[x+1][y] != '|')
            {
                a[x][y] = ' ';
                x++;
                a[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(a[x-1][y] != '_' && a[x-1][y] != '|')
            {
                a[x][y] = ' ';
                x--;
                a[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(a[x][y-1] != '_' && a[x][y-1] != '|')
            {
                a[x][y] = ' ';
                y--;
                a[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(a[x][y+1] != '_' && a[x][y+1] != '|')
            {
                a[x][y] = ' ';
                y++;
                a[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(a[i]);
    }
    printf("Wow, you won!\n");
}
