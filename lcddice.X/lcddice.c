/*
 * File:   lcddice.c
 * Author: Karaca
 *
 * Created on 24 May?s 2022 Sal?, 20:02
 */

#include<time.h>
#include<stdio.h>
#include<stdlib.h>
#include <xc.h>
#include "lcd_lib.h"
#define sut1 RD2
#define sut2 RD1
#define sut3 RD0

int Dice1[6];
int Dice2[6];

void main(void) {
  int i;
    TRISD=0x7;
    TRISB=0;
    TRISC=0; 
    lcd_hazirla();
    lcd_gotoxy(1,2);
    lcd_yaz("Micro Lab Final");
    lcd_gotoxy(2,6);
    lcd_yaz("Proje");
    while(1)
    {
        PORTD=8;
        if (sut1){
    lcd_sil();
    lcd_hazirla();
    for(i=0; i<=20 ; i++){
        int r=rand()%6+1;
        sprintf(Dice1,"Dice 1 =%d",r);
        lcd_gotoxy(1,1);
        lcd_yaz(Dice1);
        __delay_ms(50);
    }
    __delay_ms(20);
        }
        if (sut2){
    lcd_sil();
    lcd_hazirla();
    for(i=0; i<=20 ; i++){
        int r=rand()%6+1;
        sprintf(Dice2,"Dice 2 =%d",r);
        lcd_gotoxy(1,1);
        lcd_yaz(Dice2);
        __delay_ms(50);
    }
    __delay_ms(20);
        }
        if (sut3){  
    lcd_sil();
    lcd_hazirla();
    for(i=0; i<=20 ; i++){
        int r=rand()%6+1;
        sprintf(Dice1,"Dice 1 =%d",r);
        lcd_gotoxy(1,5);
        lcd_yaz(Dice1);
        __delay_ms(50);
    }
    lcd_gotoxy(2,1);
        for(i=0; i<=20 ; i++){
        int r=rand()%6+1;
        sprintf(Dice2,"Dice 2 =%d",r);
        lcd_gotoxy(2,5);
        lcd_yaz(Dice2);
        __delay_ms(50);
    }
    __delay_ms(20);
        }
        PORTD=16;
        if (sut1){
    lcd_sil();
        }
        if (sut2){
    lcd_sil();        
    lcd_hazirla();
    lcd_gotoxy(1,2);
    lcd_yaz("Micro Lab Final");
    lcd_gotoxy(2,6);
    lcd_yaz("Proje");
        }
        //if (sut3){tus="6";}
        //PORTD=32;
        //if (sut1){tus="7";}
        //if (sut2){tus="8";}
        //if (sut3){tus="9";}
        PORTD=64;
        if (sut1){
            for(i=0; i<=33 ; i++){
            lcd_sil();
            lcd_hazirla();
            lcd_gotoxy(1,i);
            lcd_yaz("Sait Karaca");
            lcd_gotoxy(2,i);
            lcd_yaz("140755024");
            __delay_ms(1000);
    }
        }
        //if (sut2){tus="0";}
        if (sut3){
             for(i=0; i<=33 ; i++){
            lcd_sil();
            lcd_hazirla();
            lcd_gotoxy(1,i);
            lcd_yaz("Ugur Altuntas");
            lcd_gotoxy(2,i);
            lcd_yaz("200755064");
            __delay_ms(1000);
    }
        }
        __delay_ms(20);
    }
}