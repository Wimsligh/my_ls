/*
** EPITECH PROJECT, 2022
** flag_check
** File description:
** flag_check
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

int flag_check(int argc, char **argv,struct dirent *mat,DIR *der)
{
    for (int x = 1; x < argc; x++) {

        if (argc >= 3 && argv[1][1] == 'l' && argv[2][0] != '-')
        return flag_l_simple(argv[2]);

        if (argv[1][1] == 'l')
        return flag_l_simple(".");

        if (argv[x][0] == '-') {
            flag_check_2(argc,argv,x);
            return 0;
        }
    }
        if (argv[1][0]) {
            my_ls_arg_1(argc,argv,mat,der);
        }
    return (0);
}
