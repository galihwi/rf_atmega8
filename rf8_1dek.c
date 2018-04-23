/*****************************************************
This program was produced by the
CodeWizardAVR V1.25.9 Standard
Automatic Program Generator
© Copyright 1998-2008 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 9/15/2012
Author  : F4CG                            
Company : F4CG                            
Comments: 


Chip type           : ATmega8
Program type        : Application
Clock frequency     : 12.000000 MHz
Memory model        : Small
External SRAM size  : 0
Data Stack size     : 256
*****************************************************/                    

#include <mega8.h>       
#include <delay.h>

// Standard Input/Output functions
#include <stdio.h>                                                        

#define out PORTD.0
#define a0 PIND.5
#define a1 PIND.6
#define a2 PIND.7
#define a3 PINB.0

// Declare your global variables here

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port B initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State7=T State6=T State5=T State4=T State3=T State2=T State1=T State0=P 
PORTB=0x01;
DDRB=0x00;

// Port C initialization
// Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=In 
// State6=T State5=P State4=P State3=P State2=P State1=T State0=T 
PORTC=0x3C;
DDRC=0x00;

// Port D initialization
// Func7=In Func6=In Func5=In Func4=In Func3=In Func2=In Func1=In Func0=Out 
// State7=P State6=P State5=P State4=T State3=T State2=T State1=T State0=0 
PORTD=0xE0;
DDRD=0x01;

// Timer/Counter 0 initialization
// Clock source: System Clock
// Clock value: Timer 0 Stopped
TCCR0=0x00;
TCNT0=0x00;

// Timer/Counter 1 initialization
// Clock source: System Clock
// Clock value: Timer 1 Stopped
// Mode: Normal top=FFFFh
// OC1A output: Discon.
// OC1B output: Discon.
// Noise Canceler: Off
// Input Capture on Falling Edge
// Timer 1 Overflow Interrupt: Off
// Input Capture Interrupt: Off
// Compare A Match Interrupt: Off
// Compare B Match Interrupt: Off
TCCR1A=0x00;
TCCR1B=0x00;
TCNT1H=0x00;
TCNT1L=0x00;
ICR1H=0x00;
ICR1L=0x00;
OCR1AH=0x00;
OCR1AL=0x00;
OCR1BH=0x00;
OCR1BL=0x00;

// Timer/Counter 2 initialization
// Clock source: System Clock
// Clock value: Timer 2 Stopped
// Mode: Normal top=FFh
// OC2 output: Disconnected
ASSR=0x00;
TCCR2=0x00;
TCNT2=0x00;
OCR2=0x00;

// External Interrupt(s) initialization
// INT0: Off
// INT1: Off
MCUCR=0x00;

// Timer(s)/Counter(s) Interrupt(s) initialization
TIMSK=0x00;

// USART initialization
// Communication Parameters: 8 Data, 1 Stop, No Parity
// USART Receiver: Off
// USART Transmitter: On
// USART Mode: Asynchronous
// USART Baud Rate: 9600
UCSRA=0x00;
UCSRB=0x08;
UCSRC=0x86;
UBRRH=0x00;
UBRRL=0x4D;

// Analog Comparator initialization
// Analog Comparator: Off
// Analog Comparator Input Capture by Timer/Counter 1: Off
ACSR=0x80;
SFIOR=0x00;   

putsf("bismillah");   
out = 1;

while (1)
      {
      // Place your code here   
        while(a0==0 && a1==0 && a2==0 && a3==0){}     // nunggu diteken
                              
        if(a0==0 && a1== 0 && a2== 0 && a3== 1)
                putchar('a');
        else if (a0==0 && a1== 0 && a2== 1 && a3== 0)
                putchar('b');
        else if (a0==0 && a1== 0 && a2== 1 && a3== 1)
                putchar('c');                                            
        else if (a0==0 && a1== 1 && a2== 0 && a3== 1)
                putchar('d');                                            
        else if (a0==0 && a1== 1 && a2== 1 && a3== 0)
                putchar('e');                                            
        else if (a0==0 && a1== 1 && a2== 1 && a3== 1)
                putchar('f');                                            
        else if (a0==1 && a1== 0 && a2== 0 && a3== 1)
                putchar('g');                                            
        else if (a0==1 && a1== 0 && a2== 1 && a3== 0)
                putchar('h');                                            
        else if (a0==1 && a1== 0 && a2== 1 && a3== 1)
                putchar('i');                                            
        else if (a0==1 && a1== 1 && a2== 0 && a3== 1)
                putchar('j');                                            
        else if (a0==1 && a1== 1 && a2== 1 && a3== 0)
                putchar('k');                                            
        else if (a0==1 && a1== 1 && a2== 1 && a3== 1)
                putchar('l');                                            
        else if (a0==0 && a1== 1 && a2== 0 && a3== 0)
                putchar('m');                                            
        else if (a0==1 && a1== 0 && a2== 0 && a3== 0)
                putchar('n');                                            
        else if (a0==1 && a1== 1 && a2== 0 && a3== 0)
                putchar('o');                                            
                
        out = 0;
        delay_ms(30);
        out = 1;                                
      };
}