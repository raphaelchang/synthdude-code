#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* P0_2 */
#define P0_2__0__INTTYPE CYREG_PICU0_INTTYPE2
#define P0_2__0__MASK 0x04u
#define P0_2__0__PC CYREG_PRT0_PC2
#define P0_2__0__PORT 0u
#define P0_2__0__SHIFT 2u
#define P0_2__AG CYREG_PRT0_AG
#define P0_2__AMUX CYREG_PRT0_AMUX
#define P0_2__BIE CYREG_PRT0_BIE
#define P0_2__BIT_MASK CYREG_PRT0_BIT_MASK
#define P0_2__BYP CYREG_PRT0_BYP
#define P0_2__CTL CYREG_PRT0_CTL
#define P0_2__DM0 CYREG_PRT0_DM0
#define P0_2__DM1 CYREG_PRT0_DM1
#define P0_2__DM2 CYREG_PRT0_DM2
#define P0_2__DR CYREG_PRT0_DR
#define P0_2__INP_DIS CYREG_PRT0_INP_DIS
#define P0_2__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define P0_2__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define P0_2__LCD_EN CYREG_PRT0_LCD_EN
#define P0_2__MASK 0x04u
#define P0_2__PORT 0u
#define P0_2__PRT CYREG_PRT0_PRT
#define P0_2__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define P0_2__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define P0_2__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define P0_2__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define P0_2__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define P0_2__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define P0_2__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define P0_2__PS CYREG_PRT0_PS
#define P0_2__SHIFT 2u
#define P0_2__SLW CYREG_PRT0_SLW

/* Rx_1 */
#define Rx_1__0__INTTYPE CYREG_PICU1_INTTYPE4
#define Rx_1__0__MASK 0x10u
#define Rx_1__0__PC CYREG_PRT1_PC4
#define Rx_1__0__PORT 1u
#define Rx_1__0__SHIFT 4u
#define Rx_1__AG CYREG_PRT1_AG
#define Rx_1__AMUX CYREG_PRT1_AMUX
#define Rx_1__BIE CYREG_PRT1_BIE
#define Rx_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Rx_1__BYP CYREG_PRT1_BYP
#define Rx_1__CTL CYREG_PRT1_CTL
#define Rx_1__DM0 CYREG_PRT1_DM0
#define Rx_1__DM1 CYREG_PRT1_DM1
#define Rx_1__DM2 CYREG_PRT1_DM2
#define Rx_1__DR CYREG_PRT1_DR
#define Rx_1__INP_DIS CYREG_PRT1_INP_DIS
#define Rx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Rx_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Rx_1__LCD_EN CYREG_PRT1_LCD_EN
#define Rx_1__MASK 0x10u
#define Rx_1__PORT 1u
#define Rx_1__PRT CYREG_PRT1_PRT
#define Rx_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Rx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Rx_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Rx_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Rx_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Rx_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Rx_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Rx_1__PS CYREG_PRT1_PS
#define Rx_1__SHIFT 4u
#define Rx_1__SLW CYREG_PRT1_SLW

/* Tx_1 */
#define Tx_1__0__INTTYPE CYREG_PICU1_INTTYPE5
#define Tx_1__0__MASK 0x20u
#define Tx_1__0__PC CYREG_PRT1_PC5
#define Tx_1__0__PORT 1u
#define Tx_1__0__SHIFT 5u
#define Tx_1__AG CYREG_PRT1_AG
#define Tx_1__AMUX CYREG_PRT1_AMUX
#define Tx_1__BIE CYREG_PRT1_BIE
#define Tx_1__BIT_MASK CYREG_PRT1_BIT_MASK
#define Tx_1__BYP CYREG_PRT1_BYP
#define Tx_1__CTL CYREG_PRT1_CTL
#define Tx_1__DM0 CYREG_PRT1_DM0
#define Tx_1__DM1 CYREG_PRT1_DM1
#define Tx_1__DM2 CYREG_PRT1_DM2
#define Tx_1__DR CYREG_PRT1_DR
#define Tx_1__INP_DIS CYREG_PRT1_INP_DIS
#define Tx_1__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU1_BASE
#define Tx_1__LCD_COM_SEG CYREG_PRT1_LCD_COM_SEG
#define Tx_1__LCD_EN CYREG_PRT1_LCD_EN
#define Tx_1__MASK 0x20u
#define Tx_1__PORT 1u
#define Tx_1__PRT CYREG_PRT1_PRT
#define Tx_1__PRTDSI__CAPS_SEL CYREG_PRT1_CAPS_SEL
#define Tx_1__PRTDSI__DBL_SYNC_IN CYREG_PRT1_DBL_SYNC_IN
#define Tx_1__PRTDSI__OE_SEL0 CYREG_PRT1_OE_SEL0
#define Tx_1__PRTDSI__OE_SEL1 CYREG_PRT1_OE_SEL1
#define Tx_1__PRTDSI__OUT_SEL0 CYREG_PRT1_OUT_SEL0
#define Tx_1__PRTDSI__OUT_SEL1 CYREG_PRT1_OUT_SEL1
#define Tx_1__PRTDSI__SYNC_OUT CYREG_PRT1_SYNC_OUT
#define Tx_1__PS CYREG_PRT1_PS
#define Tx_1__SHIFT 5u
#define Tx_1__SLW CYREG_PRT1_SLW

/* isr_1 */
#define isr_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_1__INTC_MASK 0x20000u
#define isr_1__INTC_NUMBER 17u
#define isr_1__INTC_PRIOR_NUM 7u
#define isr_1__INTC_PRIOR_REG CYREG_NVIC_PRI_17
#define isr_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* isr_2 */
#define isr_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define isr_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define isr_2__INTC_MASK 0x02u
#define isr_2__INTC_NUMBER 1u
#define isr_2__INTC_PRIOR_NUM 7u
#define isr_2__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define isr_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define isr_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* UART_1_BUART */
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG CYREG_B0_UDB08_09_CTL
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG CYREG_B0_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG CYREG_B0_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB08_09_MSK
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_REG CYREG_B0_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG CYREG_B0_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_REG CYREG_B0_UDB08_CTL
#define UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG CYREG_B0_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter__PERIOD_REG CYREG_B0_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG CYREG_B0_UDB08_09_ST
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG CYREG_B0_UDB08_MSK
#define UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG CYREG_B0_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG CYREG_B0_UDB08_ST_CTL
#define UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG CYREG_B0_UDB08_ST
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG CYREG_B0_UDB08_09_A0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG CYREG_B0_UDB08_09_A1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG CYREG_B0_UDB08_09_D0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG CYREG_B0_UDB08_09_D1
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG CYREG_B0_UDB08_09_F0
#define UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG CYREG_B0_UDB08_09_F1
#define UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG CYREG_B0_UDB08_A0_A1
#define UART_1_BUART_sRX_RxShifter_u0__A0_REG CYREG_B0_UDB08_A0
#define UART_1_BUART_sRX_RxShifter_u0__A1_REG CYREG_B0_UDB08_A1
#define UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG CYREG_B0_UDB08_D0_D1
#define UART_1_BUART_sRX_RxShifter_u0__D0_REG CYREG_B0_UDB08_D0
#define UART_1_BUART_sRX_RxShifter_u0__D1_REG CYREG_B0_UDB08_D1
#define UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG CYREG_B0_UDB08_F0_F1
#define UART_1_BUART_sRX_RxShifter_u0__F0_REG CYREG_B0_UDB08_F0
#define UART_1_BUART_sRX_RxShifter_u0__F1_REG CYREG_B0_UDB08_F1
#define UART_1_BUART_sRX_RxShifter_u0__MSK_DP_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxShifter_u0__PER_DP_AUX_CTL_REG CYREG_B0_UDB08_MSK_ACTL
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB09_10_ACTL
#define UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG CYREG_B0_UDB09_10_ST
#define UART_1_BUART_sRX_RxSts__3__MASK 0x08u
#define UART_1_BUART_sRX_RxSts__3__POS 3
#define UART_1_BUART_sRX_RxSts__4__MASK 0x10u
#define UART_1_BUART_sRX_RxSts__4__POS 4
#define UART_1_BUART_sRX_RxSts__5__MASK 0x20u
#define UART_1_BUART_sRX_RxSts__5__POS 5
#define UART_1_BUART_sRX_RxSts__MASK 0x38u
#define UART_1_BUART_sRX_RxSts__MASK_REG CYREG_B0_UDB09_MSK
#define UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG CYREG_B0_UDB09_ACTL
#define UART_1_BUART_sRX_RxSts__STATUS_REG CYREG_B0_UDB09_ST
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG CYREG_B1_UDB08_09_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG CYREG_B1_UDB08_09_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG CYREG_B1_UDB08_09_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG CYREG_B1_UDB08_09_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB08_09_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG CYREG_B1_UDB08_09_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG CYREG_B1_UDB08_09_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG CYREG_B1_UDB08_A0_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG CYREG_B1_UDB08_A0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG CYREG_B1_UDB08_A1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG CYREG_B1_UDB08_D0_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG CYREG_B1_UDB08_D0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG CYREG_B1_UDB08_D1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG CYREG_B1_UDB08_ACTL
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG CYREG_B1_UDB08_F0_F1
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG CYREG_B1_UDB08_F0
#define UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG CYREG_B1_UDB08_F1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG CYREG_B1_UDB09_10_A0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG CYREG_B1_UDB09_10_A1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG CYREG_B1_UDB09_10_D0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG CYREG_B1_UDB09_10_D1
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG CYREG_B1_UDB09_10_F0
#define UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG CYREG_B1_UDB09_10_F1
#define UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG CYREG_B1_UDB09_A0_A1
#define UART_1_BUART_sTX_TxShifter_u0__A0_REG CYREG_B1_UDB09_A0
#define UART_1_BUART_sTX_TxShifter_u0__A1_REG CYREG_B1_UDB09_A1
#define UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG CYREG_B1_UDB09_D0_D1
#define UART_1_BUART_sTX_TxShifter_u0__D0_REG CYREG_B1_UDB09_D0
#define UART_1_BUART_sTX_TxShifter_u0__D1_REG CYREG_B1_UDB09_D1
#define UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG CYREG_B1_UDB09_F0_F1
#define UART_1_BUART_sTX_TxShifter_u0__F0_REG CYREG_B1_UDB09_F0
#define UART_1_BUART_sTX_TxShifter_u0__F1_REG CYREG_B1_UDB09_F1
#define UART_1_BUART_sTX_TxSts__0__MASK 0x01u
#define UART_1_BUART_sTX_TxSts__0__POS 0
#define UART_1_BUART_sTX_TxSts__1__MASK 0x02u
#define UART_1_BUART_sTX_TxSts__1__POS 1
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG CYREG_B1_UDB09_10_ACTL
#define UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG CYREG_B1_UDB09_10_ST
#define UART_1_BUART_sTX_TxSts__2__MASK 0x04u
#define UART_1_BUART_sTX_TxSts__2__POS 2
#define UART_1_BUART_sTX_TxSts__3__MASK 0x08u
#define UART_1_BUART_sTX_TxSts__3__POS 3
#define UART_1_BUART_sTX_TxSts__MASK 0x0Fu
#define UART_1_BUART_sTX_TxSts__MASK_REG CYREG_B1_UDB09_MSK
#define UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG CYREG_B1_UDB09_ACTL
#define UART_1_BUART_sTX_TxSts__STATUS_REG CYREG_B1_UDB09_ST

/* UART_1_RXInternalInterrupt */
#define UART_1_RXInternalInterrupt__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define UART_1_RXInternalInterrupt__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define UART_1_RXInternalInterrupt__INTC_MASK 0x01u
#define UART_1_RXInternalInterrupt__INTC_NUMBER 0u
#define UART_1_RXInternalInterrupt__INTC_PRIOR_NUM 7u
#define UART_1_RXInternalInterrupt__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define UART_1_RXInternalInterrupt__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define UART_1_RXInternalInterrupt__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* Timer_1_TimerHW */
#define Timer_1_TimerHW__CAP0 CYREG_TMR0_CAP0
#define Timer_1_TimerHW__CAP1 CYREG_TMR0_CAP1
#define Timer_1_TimerHW__CFG0 CYREG_TMR0_CFG0
#define Timer_1_TimerHW__CFG1 CYREG_TMR0_CFG1
#define Timer_1_TimerHW__CFG2 CYREG_TMR0_CFG2
#define Timer_1_TimerHW__CNT_CMP0 CYREG_TMR0_CNT_CMP0
#define Timer_1_TimerHW__CNT_CMP1 CYREG_TMR0_CNT_CMP1
#define Timer_1_TimerHW__PER0 CYREG_TMR0_PER0
#define Timer_1_TimerHW__PER1 CYREG_TMR0_PER1
#define Timer_1_TimerHW__PM_ACT_CFG CYREG_PM_ACT_CFG3
#define Timer_1_TimerHW__PM_ACT_MSK 0x01u
#define Timer_1_TimerHW__PM_STBY_CFG CYREG_PM_STBY_CFG3
#define Timer_1_TimerHW__PM_STBY_MSK 0x01u
#define Timer_1_TimerHW__RT0 CYREG_TMR0_RT0
#define Timer_1_TimerHW__RT1 CYREG_TMR0_RT1
#define Timer_1_TimerHW__SR0 CYREG_TMR0_SR0

/* WaveDAC8_1_BuffAmp_ABuf */
#define WaveDAC8_1_BuffAmp_ABuf__CR CYREG_OPAMP3_CR
#define WaveDAC8_1_BuffAmp_ABuf__MX CYREG_OPAMP3_MX
#define WaveDAC8_1_BuffAmp_ABuf__NPUMP_OPAMP_TR0 CYREG_NPUMP_OPAMP_TR0
#define WaveDAC8_1_BuffAmp_ABuf__PM_ACT_CFG CYREG_PM_ACT_CFG4
#define WaveDAC8_1_BuffAmp_ABuf__PM_ACT_MSK 0x08u
#define WaveDAC8_1_BuffAmp_ABuf__PM_STBY_CFG CYREG_PM_STBY_CFG4
#define WaveDAC8_1_BuffAmp_ABuf__PM_STBY_MSK 0x08u
#define WaveDAC8_1_BuffAmp_ABuf__RSVD CYREG_OPAMP3_RSVD
#define WaveDAC8_1_BuffAmp_ABuf__SW CYREG_OPAMP3_SW
#define WaveDAC8_1_BuffAmp_ABuf__TR0 CYREG_OPAMP3_TR0
#define WaveDAC8_1_BuffAmp_ABuf__TR1 CYREG_OPAMP3_TR1

/* WaveDAC8_1_VDAC8_viDAC8 */
#define WaveDAC8_1_VDAC8_viDAC8__CR0 CYREG_DAC3_CR0
#define WaveDAC8_1_VDAC8_viDAC8__CR1 CYREG_DAC3_CR1
#define WaveDAC8_1_VDAC8_viDAC8__D CYREG_DAC3_D
#define WaveDAC8_1_VDAC8_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define WaveDAC8_1_VDAC8_viDAC8__PM_ACT_MSK 0x08u
#define WaveDAC8_1_VDAC8_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define WaveDAC8_1_VDAC8_viDAC8__PM_STBY_MSK 0x08u
#define WaveDAC8_1_VDAC8_viDAC8__STROBE CYREG_DAC3_STROBE
#define WaveDAC8_1_VDAC8_viDAC8__SW0 CYREG_DAC3_SW0
#define WaveDAC8_1_VDAC8_viDAC8__SW2 CYREG_DAC3_SW2
#define WaveDAC8_1_VDAC8_viDAC8__SW3 CYREG_DAC3_SW3
#define WaveDAC8_1_VDAC8_viDAC8__SW4 CYREG_DAC3_SW4
#define WaveDAC8_1_VDAC8_viDAC8__TR CYREG_DAC3_TR
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC3_M1
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC3_M2
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC3_M3
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC3_M4
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC3_M5
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC3_M6
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC3_M7
#define WaveDAC8_1_VDAC8_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC3_M8
#define WaveDAC8_1_VDAC8_viDAC8__TST CYREG_DAC3_TST

/* WaveDAC8_1_Wave1_DMA */
#define WaveDAC8_1_Wave1_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_1_Wave1_DMA__DRQ_NUMBER 0u
#define WaveDAC8_1_Wave1_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_1_Wave1_DMA__PRIORITY 2u
#define WaveDAC8_1_Wave1_DMA__TERMIN_EN 0u
#define WaveDAC8_1_Wave1_DMA__TERMIN_SEL 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT0_EN 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT1_EN 0u
#define WaveDAC8_1_Wave1_DMA__TERMOUT1_SEL 0u

/* WaveDAC8_1_Wave2_DMA */
#define WaveDAC8_1_Wave2_DMA__DRQ_CTL CYREG_IDMUX_DRQ_CTL0
#define WaveDAC8_1_Wave2_DMA__DRQ_NUMBER 1u
#define WaveDAC8_1_Wave2_DMA__NUMBEROF_TDS 0u
#define WaveDAC8_1_Wave2_DMA__PRIORITY 2u
#define WaveDAC8_1_Wave2_DMA__TERMIN_EN 0u
#define WaveDAC8_1_Wave2_DMA__TERMIN_SEL 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT0_EN 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT0_SEL 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT1_EN 0u
#define WaveDAC8_1_Wave2_DMA__TERMOUT1_SEL 0u

/* timer_clock_1 */
#define timer_clock_1__CFG0 CYREG_CLKDIST_DCFG2_CFG0
#define timer_clock_1__CFG1 CYREG_CLKDIST_DCFG2_CFG1
#define timer_clock_1__CFG2 CYREG_CLKDIST_DCFG2_CFG2
#define timer_clock_1__CFG2_SRC_SEL_MASK 0x07u
#define timer_clock_1__INDEX 0x02u
#define timer_clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define timer_clock_1__PM_ACT_MSK 0x04u
#define timer_clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define timer_clock_1__PM_STBY_MSK 0x04u

/* timer_clock_2 */
#define timer_clock_2__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define timer_clock_2__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define timer_clock_2__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define timer_clock_2__CFG2_SRC_SEL_MASK 0x07u
#define timer_clock_2__INDEX 0x00u
#define timer_clock_2__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define timer_clock_2__PM_ACT_MSK 0x01u
#define timer_clock_2__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define timer_clock_2__PM_STBY_MSK 0x01u

/* timer_clock_3 */
#define timer_clock_3__CFG0 CYREG_CLKDIST_DCFG1_CFG0
#define timer_clock_3__CFG1 CYREG_CLKDIST_DCFG1_CFG1
#define timer_clock_3__CFG2 CYREG_CLKDIST_DCFG1_CFG2
#define timer_clock_3__CFG2_SRC_SEL_MASK 0x07u
#define timer_clock_3__INDEX 0x01u
#define timer_clock_3__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define timer_clock_3__PM_ACT_MSK 0x02u
#define timer_clock_3__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define timer_clock_3__PM_STBY_MSK 0x02u

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 66000000U
#define BCLK__BUS_CLK__KHZ 66000U
#define BCLK__BUS_CLK__MHZ 66U
#define CY_PROJECT_NAME "Synthdude"
#define CY_VERSION "PSoC Creator  4.0 Update 1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 12u
#define CYDEV_CHIP_DIE_PSOC5LP 19u
#define CYDEV_CHIP_DIE_PSOC5TM 20u
#define CYDEV_CHIP_DIE_TMA4 2u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 4u
#define CYDEV_CHIP_FAMILY_FM3 5u
#define CYDEV_CHIP_FAMILY_FM4 6u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 12u
#define CYDEV_CHIP_MEMBER_4C 18u
#define CYDEV_CHIP_MEMBER_4D 8u
#define CYDEV_CHIP_MEMBER_4E 4u
#define CYDEV_CHIP_MEMBER_4F 13u
#define CYDEV_CHIP_MEMBER_4G 2u
#define CYDEV_CHIP_MEMBER_4H 11u
#define CYDEV_CHIP_MEMBER_4I 17u
#define CYDEV_CHIP_MEMBER_4J 9u
#define CYDEV_CHIP_MEMBER_4K 10u
#define CYDEV_CHIP_MEMBER_4L 16u
#define CYDEV_CHIP_MEMBER_4M 15u
#define CYDEV_CHIP_MEMBER_4N 6u
#define CYDEV_CHIP_MEMBER_4O 5u
#define CYDEV_CHIP_MEMBER_4P 14u
#define CYDEV_CHIP_MEMBER_4Q 7u
#define CYDEV_CHIP_MEMBER_4U 3u
#define CYDEV_CHIP_MEMBER_5A 20u
#define CYDEV_CHIP_MEMBER_5B 19u
#define CYDEV_CHIP_MEMBER_FM3 24u
#define CYDEV_CHIP_MEMBER_FM4 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 21u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 22u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 23u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4C_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 0
#define CYDEV_CONFIGURATION_DMA 1
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_DMA
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 0
#define CYDEV_INTR_RISING 0x00000003u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 3.3
#define CYDEV_VDDIO0_MV 3300
#define CYDEV_VDDIO1 3.3
#define CYDEV_VDDIO1_MV 3300
#define CYDEV_VDDIO2 3.3
#define CYDEV_VDDIO2_MV 3300
#define CYDEV_VDDIO3 3.3
#define CYDEV_VDDIO3_MV 3300
#define CYDEV_VIO0 3.3
#define CYDEV_VIO0_MV 3300
#define CYDEV_VIO1 3.3
#define CYDEV_VIO1_MV 3300
#define CYDEV_VIO2 3.3
#define CYDEV_VIO2_MV 3300
#define CYDEV_VIO3 3.3
#define CYDEV_VIO3_MV 3300
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define Dedicated_Output__INTTYPE CYREG_PICU3_INTTYPE7
#define Dedicated_Output__MASK 0x80u
#define Dedicated_Output__PC CYREG_PRT3_PC7
#define Dedicated_Output__PORT 3u
#define Dedicated_Output__SHIFT 7u
#define DMA_CHANNELS_USED__MASK0 0x00000003u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
