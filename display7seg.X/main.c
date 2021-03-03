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
#include "botoes_init.h"


    

    

void main(void) 
{
    display7seg_init();
    botoes_init();
    char cont = 0;
    char estado = 0;
    
    while(1)
    {
        switch (estado)
        {
            case 0:
                    if(bo_subida() == 1)
                    
                        estado = 1;
                    if(bo_descida() == 1)
                        estado = 3;
                    break;
            case 1:
                    if(bo_subida() == 0)   
                        estado = 2;
                    
                    break;
            case 2:
                    ++cont;
                    estado = 0;
                    break;
            case 3:
                    if(bo_descida() == 0)
                    estado = 4;
                    break;
            case 4:
                   --cont;
                    estado = 0;
                    break; 
            
        }
            display7seg(cont);
            if( cont >= 16)
            cont = 0;
            if( cont < 0)
                cont = 15;
    }
      
}
        
    

