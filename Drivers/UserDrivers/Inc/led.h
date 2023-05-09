/*
 * led.h
 *
 *  Created on: May 2, 2023
 *      Author: ataha
 */

#ifndef USERDRIVERS_INC_LED_H_
#define USERDRIVERS_INC_LED_H_

void led_init(void);
void button_init(void);
void exti_init(void);
void EXTI0_IRQHandler(void);
void led_ON(void);

#endif /* USERDRIVERS_INC_LED_H_ */
