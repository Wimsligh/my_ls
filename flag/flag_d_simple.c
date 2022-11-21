/*
** EPITECH PROJECT, 2022
** flag_d_simple
** File description:
** flag_d_simple
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "../include/my.h"

void flag_d_simple(int argc, char **argv)
{
    struct dirent *mat;
    DIR *der;
    struct stat sb;

    if (2 >= argc) {
        my_printf(".\n");
    }

    for (int e = 1; e < argc ;e++) {
        if (argv[e][0] != '-') {
            my_printf("%s\n", argv[e]);
        }
    }
}
