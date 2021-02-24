/*
 * File:   main.c
 * Author: 19179166
 *
 * Created on 24 de Fevereiro de 2021, 14:03
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg_init.h"


    

    

void main(void) 
{
    int cont = 0;
    display7seg_init();
    
    while (1)
    {
       display7seg(cont);
       delay (1000);
       cont++;
       if( cont >= 16)
           cont = 0;
    }
}
