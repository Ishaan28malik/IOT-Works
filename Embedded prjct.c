#include <REG51F.H>
void init(void);
void configureTimer0(void);
void enableInterrupt(void);
void resetTimer0(void);
void display(void);
sbit sl1 = P2^3;
sbit sl2 = P2^2;
sbit sl3 = P2^1;
sbit sl4 = P2^0;
unsigned int numbersToDisplay[4] = {3,6,9,2};   //enter 4 numbers here
unsigned int numberList[10] = {
                                  0xFC,   //0         
                                  0x60,   //1
                                  0xDA,   //2 
                                  0xF2,   //3
                                  0x66,   //4
                                  0xB6,   //5
                                  0xBE,   //6
                                  0xE0,   //7
                                  0xFE,   //8
                                  0xF6    //9
                              };
unsigned int digitSelector[4][4] = {
                                      0,1,1,1,   
                                      1,0,1,1,   
                                      1,1,0,1,   
                                      1,1,1,0    
                                   };       
unsigned int x;         
void main()
{
    init();
    configureTimer0();
    enableInterrupt();
    while(1);
}
void init(void)
{
    P0 = 0x00;      
    x = 0;
    TMOD = 0x01;     
}
void configureTimer0(void)
{
    resetTimer0();          
    TR0 = 1;                
    ET0 = 1;                
}
void enableInterrupt(void)
{
    EA = 1;
}
void resetTimer0(void)
{
    TH0 = 0xEF;
    TL0 = 0xCD;         
}
void display(void)
{

    P0 = 0x00;

    sl1 = digitSelector[x][0];
    sl2 = digitSelector[x][1];
    sl3 = digitSelector[x][2];
    sl4 = digitSelector[x][3];   
    P0 = numberList[numbersToDisplay[x]];
    x++;
    if(x == 4)
    {
        x = 0;
    }
}
void isr_t0() interrupt 1
{
    resetTimer0();
    display();
}
