#include <avr/io.h>
#include <avr/delay.h>
int main(void){
	char sseg [10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
	DDRA=255;
	DDRB=255;
	DDRD=255;
	    void count(int start){
		    for(int i=start ;i>0;i--){
			    int n1=0,n2=0;
			    n2=i/10;
			    n1=i-n2*10;
				PORTA=sseg[n1];
				PORTB=sseg[n2];
				_delay_ms(500);
		    }
	    }
    while (1) {
		PORTD=0b00000010;
		count(30);
		PORTD=0b00000100;
		count(5);
		PORTD=0b00001000;
		count(30);
		PORTD=0b00000000;
	}	
}