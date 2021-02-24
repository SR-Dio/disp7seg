/*
 * File:   display7seg.c
 * Author: 19179166
 *
 * Created on 24 de Fevereiro de 2021, 15:48
 */


#include <xc.h>


void display7seg_init (void)
{
    TRISD = 0;
    PORTD = 0;
}


void display7seg (int c)
{
    PORTD = c;
}