typedef unsigned int uint32_t;

void Reset_Handler(void);
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVCal_Handler(void);
void DebugMonitor_Handler(void);
void PendSV_Handler(void);
void Systick_Handler(void);
void WWDG_IRQHandler(void);
void PVD_IRQHandler(void);
void TAMP_STAMP_IRQHandler(void);
void RTC_WKUP_IRQHandler(void);
void FLASH_IRQHandler(void);
void RCC_IRQHandler(void);
void EXTI0_IRQHandler(void);
void EXTI1_IRQHandler(void);
void EXTI2_IRQHandler(void);
void EXTI3_IRQHandler(void);
void EXTI4_IRQHandler(void);
void DMA1_Stream0_IRQHandler(void);
void DMA1_Stream1_IRQHandler(void);
void DMA1_Stream2_IRQHandler(void);
void DMA1_Stream3_IRQHandler(void);

void DMA1_Stream4_IRQHandler(void);
void DMA1_Stream5_IRQHandler(void);
void DMA1_Stream6_IRQHandler(void);
void ADC_IRQHandler(void);
void EXTI9_5_IRQHandler(void);
void TIM1_BRK_TIM9_IRQHandler(void);
void TIM1_UP_TIM10_IRQHandler(void);
void TIM1_TRG_COM_TIM11_IRQHandler(void);
void TIM1_CC_IRQHandler(void);
void TIM2_IRQHandler(void);
void TIM3_IRQHandler(void);
void TIM4_IRQHandler(void);
void I2C1_EV_IRQHandler(void);
void I2C1_ER_IRQHandler(void);
void I2C2_EV_IRQHandler(void);
void I2C2_ER_IRQHandler(void);
void SPI1_IRQHandler(void);
void SPI2_IRQHandler(void);
void USART1_IRQHandler(void);
void USART2_IRQHandler(void);
void EXTI15_10_IRQHandler(void);
void RTC_Alarm_IRQHandler(void);
void OTG_FS_WKUP_IRQHandler(void);
void DMA1_Stream7_IRQHandler(void);
void SDIO_IRQHandler(void);
void TIM5_IRQHandler(void);
void SPI3_IRQHandler(void);

void DMA2_Stream0_IRQHandler(void);
void DMA2_Stream1_IRQHandler(void);
void DMA2_Stream2_IRQHandler(void);
void DMA2_Stream3_IRQHandler(void);
void DMA2_Stream4_IRQHandler(void);
void OTG_FS_IRQHandler(void);
void DMA2_Stream5_IRQHandler(void);
void DMA2_Stream6_IRQHandler(void);
void DMA2_Stream7_IRQHandler(void);
void USART6_IRQHandler(void);
void I2C3_EV_IRQHandler(void);
void I2C3_ER_IRQHandler(void);
void FPU_IRQHandler(void);
void SPI4_IRQHandler(void);

extern void main(void);
extern uint32_t _estack ,  _sidata  , _sdata , _edata , _ebss , _sbss;
uint32_t* const MSP = (uint32_t *)&_estack;


uint32_t *VectorTable[] __attribute__ ((section (".isr_vector")))= 
{
	(uint32_t *)&MSP,
	(uint32_t *)&Reset_Handler,
	(uint32_t *)&NMI_Handler,
	(uint32_t *)&HardFault_Handler,
	(uint32_t *)&MemManage_Handler,
	(uint32_t *)&BusFault_Handler,
	(uint32_t *)&UsageFault_Handler,
	0,
	(uint32_t *)&SVCal_Handler,
	(uint32_t *)&DebugMonitor_Handler,
	0,
	(uint32_t *)&PendSV_Handler,
	(uint32_t *)&Systick_Handler,
	(uint32_t *)&WWDG_IRQHandler,
	(uint32_t *)&PVD_IRQHandler,
	(uint32_t *)&TAMP_STAMP_IRQHandler,
	(uint32_t *)&RTC_WKUP_IRQHandler,
	(uint32_t *)&FLASH_IRQHandler,
	(uint32_t *)&RCC_IRQHandler,
	(uint32_t *)&EXTI0_IRQHandler,
	(uint32_t *)&EXTI1_IRQHandler,
	(uint32_t *)&EXTI2_IRQHandler,
	(uint32_t *)&EXTI3_IRQHandler,
	(uint32_t *)&EXTI4_IRQHandler,
	(uint32_t *)&DMA1_Stream0_IRQHandler,
	(uint32_t *)&DMA1_Stream1_IRQHandler,
	(uint32_t *)&DMA1_Stream2_IRQHandler,
	(uint32_t *)&DMA1_Stream3_IRQHandler,

	(uint32_t *)&DMA1_Stream4_IRQHandler,
	(uint32_t *)&DMA1_Stream5_IRQHandler,
	(uint32_t *)&DMA1_Stream6_IRQHandler,
	(uint32_t *)&ADC_IRQHandler,
	(uint32_t *)&EXTI9_5_IRQHandler,
	(uint32_t *)&TIM1_BRK_TIM9_IRQHandler,
	(uint32_t *)&TIM1_UP_TIM10_IRQHandler,
	(uint32_t *)&TIM1_TRG_COM_TIM11_IRQHandler,
	(uint32_t *)&TIM1_CC_IRQHandler,
	(uint32_t *)&TIM2_IRQHandler,
	(uint32_t *)&TIM3_IRQHandler,
	(uint32_t *)&TIM4_IRQHandler,
	(uint32_t *)&I2C1_EV_IRQHandler,
	(uint32_t *)&I2C1_ER_IRQHandler,
	(uint32_t *)&I2C2_EV_IRQHandler,
	(uint32_t *)&I2C2_ER_IRQHandler,
	(uint32_t *)&SPI1_IRQHandler,
	(uint32_t *)&SPI2_IRQHandler,
	(uint32_t *)&USART1_IRQHandler,
	(uint32_t *)&USART2_IRQHandler,
	(uint32_t *)&EXTI15_10_IRQHandler,
	(uint32_t *)&RTC_Alarm_IRQHandler,
	(uint32_t *)&OTG_FS_WKUP_IRQHandler,
	(uint32_t *)&DMA1_Stream7_IRQHandler,
	(uint32_t *)&SDIO_IRQHandler,
	(uint32_t *)&TIM5_IRQHandler,
	(uint32_t *)&SPI3_IRQHandler,
	
	(uint32_t *)&DMA2_Stream0_IRQHandler,
	(uint32_t *)&DMA2_Stream1_IRQHandler,
	(uint32_t *)&DMA2_Stream2_IRQHandler,
	(uint32_t *)&DMA2_Stream3_IRQHandler,
	(uint32_t *)&DMA2_Stream4_IRQHandler,
	(uint32_t *)&OTG_FS_IRQHandler,
	(uint32_t *)&DMA2_Stream5_IRQHandler,
	(uint32_t *)&DMA2_Stream6_IRQHandler,
	(uint32_t *)&DMA2_Stream7_IRQHandler,
	(uint32_t *)&USART6_IRQHandler,
	(uint32_t *)&I2C3_EV_IRQHandler,
	(uint32_t *)&I2C3_ER_IRQHandler,
	(uint32_t *)&FPU_IRQHandler,
	(uint32_t *)&SPI4_IRQHandler

};

void Reset_Handler(void)
{
	uint32_t section_size = 0 ;
	uint32_t *memSourceAdd = 0 ;
	uint32_t *memDistAdd = 0 ;

	section_size = &_edata - &_sdata ;
	memSourceAdd = (uint32_t *)&_sidata ;
	memDistAdd   = (uint32_t *)&_sdata ;

	for(uint32_t count = 0 ; count < section_size ; count++)
	{
		*memDistAdd++ =  *memSourceAdd++ ;
	}

	section_size = &_ebss - &_sbss;
	memDistAdd   = (uint32_t *)&_sbss ;
	for(uint32_t count = 0 ; count < section_size ; count++)
	{
		*memDistAdd++ =  0 ;
	}

	main();
}

void NMI_Handler(void)                   
{

}

void HardFault_Handler(void)             
{

}

void MemManage_Handler(void)             
{

}

void BusFault_Handler(void)             
{

}

void UsageFault_Handler(void)            
{

}

void SVCal_Handler(void)                 
{

}

void DebugMonitor_Handler(void)          
{

}

void PendSV_Handler(void)               
{

}

void Systick_Handler(void)             
{

}

void WWDG_IRQHandler(void)               
{

}

void PVD_IRQHandler(void)                
{

}

void TAMP_STAMP_IRQHandler(void)         
{

}

void RTC_WKUP_IRQHandler(void)           
{

}

void FLASH_IRQHandler(void)              
{

}

void RCC_IRQHandler(void)                
{

}

void EXTI0_IRQHandler(void)              
{

}

void EXTI1_IRQHandler(void)              
{

}

void EXTI2_IRQHandler(void)              
{

}

void EXTI3_IRQHandler(void)              
{

}

void EXTI4_IRQHandler(void)              
{

}

void DMA1_Stream0_IRQHandler(void)       
{

}

void DMA1_Stream1_IRQHandler(void)      
{

}

void DMA1_Stream2_IRQHandler(void)       
{

}

void DMA1_Stream3_IRQHandler(void)       
{

}

void DMA1_Stream4_IRQHandler(void)       
{

}

void DMA1_Stream5_IRQHandler(void)       
{

}

void DMA1_Stream6_IRQHandler(void)       
{

}

void ADC_IRQHandler(void)                
{

}

void EXTI9_5_IRQHandler(void)           
{

}

void TIM1_BRK_TIM9_IRQHandler(void)      
{

}

void TIM1_UP_TIM10_IRQHandler(void)      
{

}

void TIM1_TRG_COM_TIM11_IRQHandler(void) 
{

}

void TIM1_CC_IRQHandler(void)            
{

}

void TIM2_IRQHandler(void)               
{

}

void TIM3_IRQHandler(void)               
{

}

void TIM4_IRQHandler(void)               
{

}

void I2C1_EV_IRQHandler(void)            
{

}

void I2C1_ER_IRQHandler(void)            
{

}

void I2C2_EV_IRQHandler(void)            
{

}

void I2C2_ER_IRQHandler(void)            
{

}

void SPI1_IRQHandler(void)               
{

}

void SPI2_IRQHandler(void)               
{

}

void USART1_IRQHandler(void)             
{

}

void USART2_IRQHandler(void)             
{

}

void EXTI15_10_IRQHandler(void)          
{

}

void RTC_Alarm_IRQHandler(void)          
{

}

void OTG_FS_WKUP_IRQHandler(void)        
{

}

void DMA1_Stream7_IRQHandler(void)       
{

}

void SDIO_IRQHandler(void)               
{

}

void TIM5_IRQHandler(void)               
{

}

void SPI3_IRQHandler(void)               
{

}

void DMA2_Stream0_IRQHandler(void)
{

}

void DMA2_Stream1_IRQHandler(void)       
{

}

void DMA2_Stream2_IRQHandler(void)       
{

}

void DMA2_Stream3_IRQHandler(void)       
{

}

void DMA2_Stream4_IRQHandler(void)       
{

}

void OTG_FS_IRQHandler(void)             
{

}

void DMA2_Stream5_IRQHandler(void)       
{

}

void DMA2_Stream6_IRQHandler(void)      
{

}

void DMA2_Stream7_IRQHandler(void)       
{

}

void USART6_IRQHandler(void)             
{

}

void I2C3_EV_IRQHandler(void)            
{

}

void I2C3_ER_IRQHandler(void)            
{

}

void FPU_IRQHandler(void)               
{

}

void SPI4_IRQHandler(void)
{

}
