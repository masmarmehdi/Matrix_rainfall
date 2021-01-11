#include "header.h"

void mx_introduction()
{
    initscr();
    mx_color();
    char *text1 = "Wake up , Neo..";
    char *text2 = "The Matrix has you..";
    char *text3 = "Follow the white rabbit";
    char *text4 = "Knock, knock, Neo";

    for (unsigned int i = 0; i < mx_strlen(text1); i++)// Iterating through the characters of the first text.
    {        
        mvaddch(5, i + 4, text1[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(text2); i++)// Iterating through the characters of the second text.
    {
        mvaddch(5, i + 4, text2[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(text3); i++)// Iterating through the characters of the third text.
    {      
        mvaddch(5, i + 4, text3[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();

    for (unsigned int i = 0; i < mx_strlen(text4); i++)// Iterating through the characters of the fourth text.
    {      
        mvaddch(5, i + 4, text4[i] | COLOR_PAIR(1));
        refresh();
        usleep(100000);
    }
    usleep(200000);
    clear();
}
