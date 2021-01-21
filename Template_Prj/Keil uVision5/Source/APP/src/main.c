/**
  ******************************************************************************
  * @file    main.c
  * @author
  * @version V1.00
  * @date    22-Sep-2020
  * @brief   ......
  ******************************************************************************
  * @attention
  *
  * ......
  *
  ******************************************************************************
  */


/* Define to prevent recursive inclusion -------------------------------------*/
#define __MAIN_C__


/* Includes ------------------------------------------------------------------*/
#include "main.h"


/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/


/* Exported variables --------------------------------------------------------*/
/* Exported function prototypes ----------------------------------------------*/


/**
  * @brief
  * @param  None
  * @retval None
  */
int main(void)
{

    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);     //����ϵͳ�ж����ȼ�����2

    delay_init(168);                                    //��ʱ��ʼ��

    uart_init(115200);                                  //���ڳ�ʼ��������Ϊ115200

    LED_Init();

    printf("EST\r\n");

    bsp_InitAdc();

    while(1)
    {
        GPIO_SetBits(GPIOF, GPIO_Pin_9 | GPIO_Pin_10);
        delay_ms(200);
        GPIO_ResetBits(GPIOF, GPIO_Pin_9 | GPIO_Pin_10);
        delay_ms(200);
        Get_Adc();

    }
}


/******************* (C) COPYRIGHT 2020 *************************END OF FILE***/
