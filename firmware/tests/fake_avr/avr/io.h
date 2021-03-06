#ifndef _AVR_IO_H_
#define _AVR_IO_H_

#define _BV(x) (1<<(x))

extern uint8_t PORTB;
extern uint8_t DDRB;
extern uint8_t PINB;

extern uint8_t PORTC;
extern uint8_t DDRC;
extern uint8_t PINC;

extern uint8_t PORTD;
extern uint8_t DDRD;
extern uint8_t PIND;
#endif
