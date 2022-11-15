/*
** word_count_main.c for word count in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Wed Nov 25 1:43:38 PM 2020 frozenmaple
** Last update Thu Dec 30 2:07:20 PM 2020 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include "get_word.h"
#include "word_manage.h"

#define WORD_LEN_MAX 1024

int main(int argc, char **argv)
{
    char buf[WORD_LEN_MAX];
    FILE *fp;

    if (argc==1)
    {
        fp=stdin;
    }
    else
    {
        fp=fopen(argv[1], "r");
        if (fp==NULL)
        {
            fprintf(stderr,"%s:%s cannot open.\n",argv[0],argv[1]);
            exit(1);
        }
    }

    word_initialize();

    while (get_word(buf,WORD_LEN_MAX,fp)!=EOF)
    {
        add_word(buf);
    }

    dump_word(stdout);

    word_finalize();

    return 0;
}
