/*
** EPITECH PROJECT, 2022
** my_ls
** File description:
** my_ls
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "include/my.h"

int my_ls_arg_1(int argc, char **argv,
struct dirent *mat,DIR *der)
{
    char *Path;

    for (int x = 1; x < argc; x++) {
        if (dir_f(argv[x], mat,der)) {
            my_printf("%s\n",argv[x]);
        }else {
            der = opendir(argv[x]);
            my_ls_arg_2(argc,argv,mat,der);
        }
    }
}

int my_ls_arg_2(int argc, char **argv,struct dirent
*mat,DIR *der)
{
    if (der != NULL) {
        while ((mat = readdir(der)) != NULL) {
            my_ls_arg_3(argc,argv,mat,der);
        }
    }
}

int my_ls_arg_3(int argc, char **argv,struct dirent
*mat,DIR *der)
{
    if (mat->d_name[0] != '.') {
        my_printf("%s\n", mat->d_name);
    }
}

int my_ls_base(struct dirent *heo, DIR *mat)
{
    while ((heo = readdir(mat)) != NULL) {
        if (heo->d_name[0] != '.') {
            my_printf("%s\n",heo->d_name);
        }
    }
    closedir(mat);
}

int my_ls(int argc, char **argv)
{
    struct dirent *heo;
    DIR *mat = opendir(".");

    if (!mat)
        return (0);
    if (!argv[1]) {
        if (my_ls_base(heo, mat) == 0)
            return (0);
    }
    if (argv[1] != NULL) {
        if (flag_check(argc, argv, heo, mat) == 0)
            return (0);
    }
    return (0);
}
