#include "main.h" 

int main(void){
	uint32_t i = 0;
	uint32_t t = 0;
	GPIO_InitTypeDef GPIO_Initialize;
	
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_GPIOA,ENABLE);
	
	GPIO_Initialize.GPIO_Mode = GPIO_Mode_OUT;
	GPIO_Initialize.GPIO_OType = GPIO_OType_PP;
	GPIO_Initialize.GPIO_Pin = GPIO_Pin_4;
	GPIO_Initialize.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Initialize.GPIO_Speed = GPIO_Speed_Level_1;
	
	GPIO_Init(GPIOA,&GPIO_Initialize);
	
	while(1){
		for(i=0;i<500000;i++);
		GPIO_SetBits(GPIOA,GPIO_Pin_4);
		for(i=0;i<500000;i++);
		GPIO_ResetBits(GPIOA,GPIO_Pin_4);
		
	}
}

