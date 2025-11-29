#include"stm32F4xx.h"
void USART2_init(void);
void USART2_write(int c);
void delay_ms(int);

int main()
{
  USART2_init();
  
while(1)
{
USART2_write=('y');
USART2_write=('e');
USART2_write=('s');
delay_ms(200);
}
}

void USART2_Init(void);
{


RCC->AHB1ENR |=1;  // clock enabled for gpio 
RCC->APB1ENR |=0x20000; // clock enabled for usart

GPIOA->AFR [0] &= ~ 0x0F00;
GPIOA->AFR [0] |= 0x0700;

GPIOA->MODER  &=~0x0030;
GPIOA->MODER |=0x0020;
USART2->BRR |=0X0683; //BAUD RATE FOR 9600 16 MZ CLCK
USART2->CR1 =0x0008;
USART2->CR2 =0x0000;
USART2->CR3=0x0000;
USART2->CR1 |=0x20000;
}
void delay ms( int n)
{
int i;
for (; n>0; n--)

//write character to USART2//

void USART2_Write(int ch);{

while(!(USART2->SR & 0x0080)) {}
USART2->DR = (ch & 0x0ff);
}
for (i=0;i,2000;i++); }








