#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void quiz_1(int(walk));
void quiz_2(int(walk));
void quiz_3(int(walk));
void quiz_4(int(walk));
void quiz_5(int(walk));
int i,x,y,p,q;
int walk;
int ans;
char ch;
char press;
int main(){
    x=1;
    y=13;
    p=17;
    q=28;
    walk=0;
    printf("\nUse ""w"", ""s"" on the keyboard, ""a"", ""D"" control the movement of the ball, \n move to "">"" to win\n\n");
    char a[50][50]={"_____________________________",
                    "|           |o|   |         |",
                    "| |_________| |___|  _____  |",
                    "|                   |     | |",
                    "|   ________| |_____|     | |",
                    "|  |________| |           | |",
                    "|  ||         |___________| |",
                    "|  ||  _______|             |",
                    "|  || |         __________| |",
                    "|  || |________________   | |",
                    "|  ||                  |  | |",
                    "|  |_________________  |  | |",
                    "|       _____________| |  | |",
                    "|    | |               |  | |",
                    "|    | |  _____________|  | |",
                    "| ___| | |                | |",
                    "|    | | |______________| |_|",
                    "|    | |                    >",
                    "|____|_|____________________|",
                    };
    for(i=0;i<=18;i++)
        puts(a[i]);
    while(x != p || y != q){
        ch = getch();
        if (walk == 5){
            quiz_1(walk);
            press = getch();
        }
        else if (walk == 23){
            quiz_1(walk);
            press = getch();
        }
        else if (walk == 39){
            quiz_1(walk);
            press = getch();
        }
        if(ch == 's')
        {
            if(a[x+1][y] != '_' && a[x+1][y] != '|')
            {
                a[x][y] = ' ';
                x++;
                walk++;
                a[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(a[x-1][y] != '_' && a[x-1][y] != '|')
            {
                a[x][y] = ' ';
                x--;
                walk++;
                a[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(a[x][y-1] != '_' && a[x][y-1] != '|')
            {
                a[x][y] = ' ';
                y--;
                walk++;
                a[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(a[x][y+1] != '_' && a[x][y+1] != '|')
            {
                a[x][y] = ' ';
                y++;
                walk++;
                a[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(a[i]);
    }
    printf("\n\nStage 1 Clear!\n\n");
    x=1;
    y=11;
    p=17;
    q=28;
    walk=0;
    char b[50][50]={"_____________________________",
                    "|   |_____|o   |__ | | | |__|",
                    "| _____ | | |    |   | | |  |",
                    "| |   | |   |____| __|      |",
                    "|   | |_|  _| | |       | __|",
                    "|___| | |  |  | |  | |__|   |",
                    "|   | | |  |  |    |    ||  |",
                    "| | | |_|  | _|_|  |___  |  |",
                    "| | | | |  |  | |   |    |__|",
                    "| |   |         |__ |__  |  |",
                    "| |___|  | |   _|   | |    _|",
                    "|       _| |          |   | |",
                    "| _______  |_| | |__  |  _| |",
                    "|     |  | |     |   _| |   |",
                    "|____ |  | | | |_|__  |   | |",
                    "|     |  | | |       _|  || |",
                    "| | |        |______ _|  |  |",
                    "| |   ___  ||       |       >",
                    "|_|___|_|__||_______|_______|",
                    };
    for(i=0;i<=18;i++)
        puts(b[i]);
    while(x != p || y != q){
        ch = getch();
        if (walk == 7){
            quiz_2(walk);
            press = getch();
        }
        else if (walk == 20){
            quiz_2(walk);
            press = getch();
        }
        else if (walk == 41){
            quiz_2(walk);
            press = getch();
        }
        if(ch == 's')
        {
            if(b[x+1][y] != '_' && b[x+1][y] != '|')
            {
                b[x][y] = ' ';
                x++;
                walk++;
                b[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(b[x-1][y] != '_' && b[x-1][y] != '|')
            {
                b[x][y] = ' ';
                x--;
                walk++;
                b[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(b[x][y-1] != '_' && b[x][y-1] != '|')
            {
                b[x][y] = ' ';
                y--;
                walk++;
                b[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(b[x][y+1] != '_' && b[x][y+1] != '|')
            {
                b[x][y] = ' ';
                y++;
                walk++;
                b[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(b[i]);
    }
    printf("\n\nStage 2 Clear!\n\n");
    x=1;
    y=27;
    p=12;
    q=0;
    walk=0;
    char c[50][50]={"_____________________________",
                    "|         |        |  _ |  o|",
                    "|  ___  | | |  | |   | ||   |",
                    "| |   | |   |  | | | | || |_|",
                    "|   | |__| | | | |_|        |",
                    "|___| |  | | |  || || |_    |",
                    "|   | |    | |     |    |   |",
                    "| | | |__| | |__  _|___  |  |",
                    "| | | |    |    |   |    |__|",
                    "| |   |__|      |__ |__  |  |",
                    "| |___|  | |_  _|   |       |",
                    "|       _| | |            | |",
                    "> _______| | | | |__  |   | |",
                    "|     |  | |     |   _| | | |",
                    "|____ |  |_| | __|__  | | | |",
                    "|     |  | | |   ||  _| | | |",
                    "| | |        |___|| | | |  ||",
                    "| |   ___  | |      |    |  |",
                    "|_|___|_|__|_|______|____|__|",
                    };
    for(i=0;i<=18;i++)
        puts(c[i]);
    while(x != p || y != q){
        ch = getch();
        if (walk == 10){
            quiz_3(walk);
            press = getch();
        }
        else if (walk == 25){
            quiz_3(walk);
            press = getch();
        }
        else if (walk == 40){
            quiz_3(walk);
            press = getch();
        }
        if(ch == 's')
        {
            if(c[x+1][y] != '_' && c[x+1][y] != '|')
            {
                c[x][y] = ' ';
                x++;
                walk++;
                c[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(c[x-1][y] != '_' && c[x-1][y] != '|')
            {
                c[x][y] = ' ';
                x--;
                walk++;
                c[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(c[x][y-1] != '_' && c[x][y-1] != '|')
            {
                c[x][y] = ' ';
                y--;
                walk++;
                c[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(c[x][y+1] != '_' && c[x][y+1] != '|')
            {
                c[x][y] = ' ';
                y++;
                walk++;
                c[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(c[i]);
    }
    printf("\n\nStage 3 Clear!\n\n");
    x=7;
    y=14;
    p=12;
    q=28;
    walk=0;
    char d[50][50]={"_____________________________",
                    "|      |      |          |  |",
                    "|| |            ______|_ |  |",
                    "|| |___________|       | |  |",
                    "|| |______    ||  ___| | |  |",
                    "||        | _       |  | |  |",
                    "||___|__| | _|___|  |  | |  |",
                    "| ||      ||  o  | _|  | |  |",
                    "| |  _____||_   _|    _| |  |",
                    "| | |  |     | |     |   |  |",
                    "| | |     |  | |__|  |  _|  |",
                    "| | |_____|  |       | |____|",
                    "| |       |  |____|  |      >",
                    "| |_____  | _|       |__|___|",
                    "|       | |        |  | |   |",
                    "|  | |__| | _|____||  | | | |",
                    "| _|      |__|    |       | |",
                    "|    |  |      |    __|___| |",
                    "|____|__|____|_|___|________|",
                    };
    for(i=0;i<=18;i++)
        puts(d[i]);
    while(x != p || y != q){
        ch = getch();
        if (walk == 11){
            quiz_4(walk);
            press = getch();
        }
        else if (walk == 25){
            quiz_4(walk);
            press = getch();
        }
        else if (walk == 41){
            quiz_4(walk);
            press = getch();
        }
        if(ch == 's')
        {
            if(d[x+1][y] != '_' && d[x+1][y] != '|')
            {
                d[x][y] = ' ';
                x++;
                walk++;
                d[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(d[x-1][y] != '_' && d[x-1][y] != '|')
            {
                d[x][y] = ' ';
                x--;
                walk++;
                d[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(d[x][y-1] != '_' && d[x][y-1] != '|')
            {
                d[x][y] = ' ';
                y--;
                walk++;
                d[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(d[x][y+1] != '_' && d[x][y+1] != '|')
            {
                d[x][y] = ' ';
                y++;
                walk++;
                d[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(d[i]);
    }
    printf("\n\nStage 4 Clear!\n\n");
    x=1;
    y=1;
    p=9;
    q=10;
    walk=0;
    char e[50][50]={"_____________________________",
                    "|o     |>|                  |",
                    "| |____| |____     |    __  |",
                    "|            >| ___|___| >| |",
                    "|    |    |_  || _    |   | |",
                    "|    |      |    >|   |   | |",
                    "|    |      |  | _|  _| __| |",
                    "|    |    __|__|    |       |",
                    "|    |   |  |         |     |",
                    "|    |   |> |__|__|   |   | |",
                    "|    |   |_ |    >|   |   | |",
                    "| |__|    | |_  |_|___|___| |",
                    "| |  |    |   |             |",
                    "| |  |____|_| |    |___   | |",
                    "| >         | |      > |  | |",
                    "| |______  >| |    |_  |  | |",
                    "|        |  | |      | |_ | |",
                    "|        |  |        | >  | |",
                    "|________|__|________|____|_|",
                    };
    for(i=0;i<=18;i++)
        puts(e[i]);
    while(x != p || y != q){
        ch = getch();
        if (walk == 4){
            quiz_5(walk);
            press = getch();
        }
        else if (walk == 18){
            quiz_5(walk);
            press = getch();
        }
        else if (walk == 26){
            quiz_5(walk);
            press = getch();
        }
        if(ch == 's')
        {
            if(e[x+1][y] != '_' && e[x+1][y] != '|')
            {
                e[x][y] = ' ';
                x++;
                walk++;
                e[x][y]='o';
            }
        }
        if(ch == 'w')
        {
            if(e[x-1][y] != '_' && e[x-1][y] != '|')
            {
                e[x][y] = ' ';
                x--;
                walk++;
                e[x][y]='o';
            }
        }
        if(ch == 'a')
        {
            if(e[x][y-1] != '_' && e[x][y-1] != '|')
            {
                e[x][y] = ' ';
                y--;
                walk++;
                e[x][y]='o';
            }
        }
        if(ch == 'd')
        {
            if(e[x][y+1] != '_' && e[x][y+1] != '|')
            {
                e[x][y] = ' ';
                y++;
                walk++;
                e[x][y]='o';
            }
        }
            system("cls");
            for(i=0;i<=18;i++)
                puts(e[i]);
    }
    printf("\n\nStage 5 Clear!\n\n");
    printf("\nThank For Playing\n");
    return 0;
}

void quiz_1(int(walk)){
    ans=0;
    if (walk == 5){
        printf("\n1. Which of the following is not a correct variable type?\n(1) int		        (2) char\n(3) double		(4) num\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==4){
            printf("Correct!\n");
        }
        else if (ans!=4){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 23){
        printf("\n2. What is the correct value to return to the operating system upon the successful completion of a program?\n(1) 0			(2) 1\n(3) -1			(4) 0.1\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!\n");
        }
        else if (ans!=1){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 39){
        printf("\n3. Which of the following is the correct operator to compare two variables?\n(1) equl		(2) !=\n(3) =			(4) ==\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==4){
            printf("Correct!\n");
        }
        else if (ans!=4){
            printf("Incorrect!!!\n");
        }
    }
}

void quiz_2(int(walk)){
    ans=0;
    if (walk == 7){
        printf("\n4. What is the only function all C programs must contain?\n(1) main()		(2) int()\n(3) int()		(4) float()\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!\n");
        }
        else if (ans!=1){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 20){
        printf("\n5. What punctuation ends most lines of C code?\n(1) :            (2) ;\n(3) ""             (4) .\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==2){
            printf("Correct!\n");
        }
        else if (ans!=2){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 41){
        printf("\n6. Which function is used to print something on console (c language)?\n(1) scanf()         (2) getch()\n(3) printf()        (4) print()\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==3){
            printf("Correct!\n");
        }
        else if (ans!=3){
            printf("Incorrect!!!\n");
        }
    }
}

void quiz_3(int(walk)){
    ans=0;
    if (walk == 10){
        printf("\n7. which function is used to read the input from console?\n(1) scanf()          (2) get()\n(3) getchar()        (4) printf()\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!\n");
        }
        else if (ans!=1){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 25){
        printf("\n8.Which symbol is used to make comments in C?\n(1) //            (2) #\n(3) !!            (4) <!--\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!\n");
        }
        else if (ans!=1){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 40){
        printf("\n9.In which standard library file is the function printf() located?\n(1) ctype.h         (2) stdlib.h\n(3) string.h        (4) stdio.h\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==4){
            printf("Correct!\n");
        }
        else if (ans!=4){
            printf("Incorrect!!!\n");
        }
    }
}

void quiz_4(int(walk)){
    ans=0;
    if (walk == 11){
        printf("\n10.How would you round off a value from 4.66 to 5.0?\n(1) floor(4.66)        (2) ceil(4.66)\n(3) roundup(4.66)      (4) roundto(4.66)\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==2){
            printf("Correct!\n");
        }
        else if (ans!=2){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 25){
        printf("\n11. Which of the following special symbol allowed in a variable name?\n(1) -            (2) _\n(3) *            (4) |\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==2){
            printf("Correct!\n");
        }
        else if (ans!=2){
            printf("Incorrect!!!\n");
        }
    }
    if (walk == 41){
        printf("\n12.If the two strings are identical, then strcmp() function returns\n(1) 0             (2) 1\n(3) -1            (3) True\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!\n");
        }
        else if (ans!=1){
            printf("Incorrect!!!\n");
        }
    }
}

void quiz_5(int(walk)){
    ans=0;
    if (walk == 4){
        printf("\n13.Which of the following shows the correct syntax for an if statement ?\n(1) expression if       (2) if expression\n(3) if { expresssion    (4) if (expression)\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==4){
            printf("Correct!");
        }
        else if (ans!=4){
            printf("Incorrect!!!");
        }
    }
    if (walk == 18){
        printf("\n14. What is the final value of x when the code\nint x;\nfor(x=0;x<10;x++){}\nis run?\n(1) 0            (2) 1\n(3) 9            (4) 10    \n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==4){
            printf("Correct!");
        }
        else if (ans!=4){
            printf("Incorrect!!!");
        }
    }
    if (walk == 26){
        printf("\n15.How many times is a do while loop guaranteed to loop?\n(1) 1                 (2) 0\n(3) Infinitely        (3) Variable\n");
        printf("Your answer is  ");
        scanf("   %d", &ans);
        if (ans==1){
            printf("Correct!");
        }
        else if (ans!=1){
            printf("Incorrect!!!");
        }
    }
}
