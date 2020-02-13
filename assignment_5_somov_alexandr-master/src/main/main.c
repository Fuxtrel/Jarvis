#include "mcu_support_package/inc/stm32f10x.h"



int main(void)
{
	RCC->APB2ENR |= 0x00000444;
	GPIOA->CRL &= 0x00000000;
    GPIOA->CRL |= 0x00000333;
	for(int i = 0; i < 10; i ++){
		GPIOA->ODR ^= 0x00000001;
		for(int i = 0; i < 3000000; i++){}
		GPIOA->ODR &= 0x00000000;
		GPIOA->ODR ^= 0x00000002;
		for(int i = 0; i < 3000000; i++){}
		GPIOA->ODR &= 0x00000000;
		GPIOA->ODR ^= 0x00000004;
		for(int i = 0; i < 3000000; i++){}
		GPIOA->ODR &= 0x00000000;
	}
	GPIOA->ODR ^= 0x00000000;

	
    return 0;
}


