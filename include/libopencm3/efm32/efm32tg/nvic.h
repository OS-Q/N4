/* This file is part of the libopencm3 project.
 *
 * It was generated by the irq2nvic_h script.
 */

#ifndef LIBOPENCM3_EFM32TG_NVIC_H
#define LIBOPENCM3_EFM32TG_NVIC_H

#include <libopencm3/cm3/nvic.h>

/** @defgroup CM3_nvic_defines_EFM32TG User interrupts for EFM32 Tiny Gecko series
    @ingroup CM3_nvic_defines

    @{*/

#define NVIC_DMA_IRQ 0
#define NVIC_GPIO_EVEN_IRQ 1
#define NVIC_TIMER0_IRQ 2
#define NVIC_USART0_RX_IRQ 3
#define NVIC_USART0_TX_IRQ 4
#define NVIC_ACMP01_IRQ 5
#define NVIC_ADC0_IRQ 6
#define NVIC_DAC0_IRQ 7
#define NVIC_I2C0_IRQ 8
#define NVIC_GPIO_ODD_IRQ 9
#define NVIC_TIMER1_IRQ 10
#define NVIC_USART1_RX_IRQ 11
#define NVIC_USART1_TX_IRQ 12
#define NVIC_LESENSE_IRQ 13
#define NVIC_LEUART0_IRQ 14
#define NVIC_LETIMER0_IRQ 15
#define NVIC_PCNT0_IRQ 16
#define NVIC_RTC_IRQ 17
#define NVIC_CMU_IRQ 18
#define NVIC_VCMP_IRQ 19
#define NVIC_LCD_IRQ 20
#define NVIC_MSC_IRQ 21
#define NVIC_AES_IRQ 22

#define NVIC_IRQ_COUNT 23

/**@}*/

/** @defgroup CM3_nvic_isrprototypes_EFM32TG User interrupt service routines (ISR) prototypes for EFM32 Tiny Gecko series
    @ingroup CM3_nvic_isrprototypes

    @{*/

BEGIN_DECLS

void WEAK dma_isr(void);
void WEAK gpio_even_isr(void);
void WEAK timer0_isr(void);
void WEAK usart0_rx_isr(void);
void WEAK usart0_tx_isr(void);
void WEAK acmp01_isr(void);
void WEAK adc0_isr(void);
void WEAK dac0_isr(void);
void WEAK i2c0_isr(void);
void WEAK gpio_odd_isr(void);
void WEAK timer1_isr(void);
void WEAK usart1_rx_isr(void);
void WEAK usart1_tx_isr(void);
void WEAK lesense_isr(void);
void WEAK leuart0_isr(void);
void WEAK letimer0_isr(void);
void WEAK pcnt0_isr(void);
void WEAK rtc_isr(void);
void WEAK cmu_isr(void);
void WEAK vcmp_isr(void);
void WEAK lcd_isr(void);
void WEAK msc_isr(void);
void WEAK aes_isr(void);

END_DECLS

/**@}*/

#endif /* LIBOPENCM3_EFM32TG_NVIC_H */
