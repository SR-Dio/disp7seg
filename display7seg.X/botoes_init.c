/*
 * File:   botoes_init.c
 * Author: 19179166
 *
 * Created on 26 de Fevereiro de 2021, 14:46
 */


#include <xc.h>

void botoes_init (void)
{
    TRISDbits.TRISD2 = 1;
    TRISDbits.TRISD3 = 1;
}

int bo_subida (void)
{
    return(PORTDbits.RD3);
}

int bo_descida (void)
{
    return(PORTDbits.RD2);
}