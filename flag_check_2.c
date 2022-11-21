/*
** EPITECH PROJECT, 2022
** flag_check_2
** File description:
** flag_check_2
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

void flag_check_2(int argc, char **argv, int x)
{
    char *path;

    for (int p = 1; argv[x][p] != '\0'; p++) {
        switch (argv[x][p]) {
            case 'd' : flag_d_simple(argc, argv);
                break;
            case 'a' : flag_a_simple(argc, argv);
                break;
            case 't' : flag_t_simple(argc,argv);
                break;
        }
    }
}
