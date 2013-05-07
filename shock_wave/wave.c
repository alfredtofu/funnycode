/*
 * =====================================================================================
 *
 *       Filename:  wave.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  05/07/2013 02:24:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Zhujin Liang (LZJ), alfredtofu@gmail.com
 *   Organization:
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

#if defined __linux__ || defined __unix__
#include <unistd.h>
#define SLEEP(x) usleep((x) * 1000)

#elif defined _WIN32 || defined _WIN64
#include <windows.h>
#define SLEEP(x) Sleep(x)

#else
#error "This program is not implemented in this OS."
#endif

int main(int argc, const char *argv[])
{
    double x;
    int i, count;

    for (x = 5; ; x += 0.1)
    {
        count = (1 + sin(x)) * 20;
        for (i = 0; i < count; i++)
        {
            printf("-");
        }
        printf("\n");
        SLEEP(10);
    }
    return 0;
}
