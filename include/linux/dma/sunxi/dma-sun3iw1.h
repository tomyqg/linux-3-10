/*
 * include/linux/dma/sunxi/dma-sun3iw1.h
 *
 * Copyright (C) 2013-2015 Allwinnertech Co., Ltd
 *
 * Author: Zqb <zhuangqiubin@allwinnertech.com>
 *
 * Sunxi DMA controller driver
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __DMA_SUN3IW1__
#define __DMA_SUN3IW1__

/*
 * The source DRQ type and port corresponding relation of normal DMA
 *
 */
#define SUN3I_NDMA_SRC_DRQ_TYPE_IR		0x00
#define SUN3I_NDMA_SRC_DRQ_TYPE_SPI0		0x04
#define SUN3I_NDMA_SRC_DRQ_TYPE_SPI1		0x05
#define SUN3I_NDMA_SRC_DRQ_TYPE_UART0		0x08
#define SUN3I_NDMA_SRC_DRQ_TYPE_UART1		0x09
#define SUN3I_NDMA_SRC_DRQ_TYPE_UART2		0x0a
#define SUN3I_NDMA_SRC_DRQ_TYPE_AUDIO		0x0c
#define SUN3I_NDMA_SRC_DRQ_TYPE_TP		0x0d
#define SUN3I_NDMA_SRC_DRQ_TYPE_DAUDIO		0x0e
#define SUN3I_NDMA_SRC_DRQ_TYPE_SRAM		0x10
#define SUN3I_NDMA_SRC_DRQ_TYPE_SDRAM		0x11
#define SUN3I_NDMA_SRC_DRQ_TYPE_USBEP1		0x15
#define SUN3I_NDMA_SRC_DRQ_TYPE_USBEP2		0x16
#define SUN3I_NDMA_SRC_DRQ_TYPE_USBEP3		0x17

/*
 * The destination DRQ type and port corresponding relation of normal DMA
 *
 */
#define SUN3I_NDMA_DST_DRQ_TYPE_SPDIF		0x01
#define SUN3I_NDMA_DST_DRQ_TYPE_SPI0		0x04
#define SUN3I_NDMA_DST_DRQ_TYPE_SPI1		0x05
#define SUN3I_NDMA_DST_DRQ_TYPE_UART0		0x08
#define SUN3I_NDMA_DST_DRQ_TYPE_UART1		0x09
#define SUN3I_NDMA_DST_DRQ_TYPE_UART2		0x0a
#define SUN3I_NDMA_DST_DRQ_TYPE_AUDIO		0x0c
#define SUN3I_NDMA_DST_DRQ_TYPE_DAUDIO		0x0e
#define SUN3I_NDMA_DST_DRQ_TYPE_SRAM		0x10
#define SUN3I_NDMA_DST_DRQ_TYPE_SDRAM		0x11
#define SUN3I_NDMA_DST_DRQ_TYPE_USB		0x14
#define SUN3I_NDMA_DST_DRQ_TYPE_USBEP1		0x15
#define SUN3I_NDMA_DST_DRQ_TYPE_USBEP2		0x16
#define SUN3I_NDMA_DST_DRQ_TYPE_USBEP3		0x17

/*
 * The source DRQ type and port corresponding relation of dedicated DMA
 *
 */
#define SUN3I_DDMA_SRC_DRQ_TYPE_SRAM		0x00
#define SUN3I_DDMA_SRC_DRQ_TYPE_SDRAM		0x01
#define SUN3I_DDMA_SRC_DRQ_TYPE_USB		0x04
#define SUN3I_DDMA_SRC_DRQ_TYPE_AHB		0x09

/*
 * The destination DRQ type and port corresponding relation of dedicated DMA
 *
 */
#define SUN3I_DDMA_DST_DRQ_TYPE_SRAM		0x00
#define SUN3I_DDMA_DST_DRQ_TYPE_SDRAM		0x01
#define SUN3I_DDMA_DST_DRQ_TYPE_LCD		0x02
#define SUN3I_DDMA_DST_DRQ_TYPE_USB		0x04
#define SUN3I_DDMA_DST_DRQ_TYPE_AHB		0x09

/*
 * The source DRQ type and port corresponding relation
 *
 */
#define DRQSRC_SRAM		SUN3I_NDMA_SRC_DRQ_TYPE_SRAM
#define DRQSRC_SDRAM		SUN3I_NDMA_SRC_DRQ_TYPE_SDRAM
#define DRQSRC_DAUDIO_0_RX	SUN3I_NDMA_SRC_DRQ_TYPE_DAUDIO
#define DRQSRC_UART0RX		SUN3I_NDMA_SRC_DRQ_TYPE_UART0
#define DRQSRC_UART1RX		SUN3I_NDMA_SRC_DRQ_TYPE_UART1
#define DRQSRC_UART2RX		SUN3I_NDMA_SRC_DRQ_TYPE_UART2

#define DRQSRC_AUDIO_CODEC	SUN3I_NDMA_SRC_DRQ_TYPE_AUDIO
#define DRQSRC_CODEC		DRQSRC_AUDIO_CODEC

#define DRQSRC_OTG_EP1		SUN3I_NDMA_SRC_DRQ_TYPE_USBEP1
#define DRQSRC_OTG_EP2		SUN3I_NDMA_SRC_DRQ_TYPE_USBEP2
#define DRQSRC_OTG_EP3		SUN3I_NDMA_SRC_DRQ_TYPE_USBEP3

#define DRQSRC_SPI0RX		SUN3I_NDMA_SRC_DRQ_TYPE_SPI0
#define DRQSRC_SPI1RX		SUN3I_NDMA_SRC_DRQ_TYPE_SPI1

/*
 * The destination DRQ type and port corresponding relation
 *
 */
#define DRQDST_SRAM		SUN3I_NDMA_DST_DRQ_TYPE_SRAM
#define DRQDST_SDRAM		SUN3I_NDMA_DST_DRQ_TYPE_SDRAM

#define DRQDST_SPDIFTX		SUN3I_NDMA_DST_DRQ_TYPE_SPDIF
#define DRQDST_DAUDIO_0_TX	SUN3I_NDMA_DST_DRQ_TYPE_DAUDIO
#define DRQDST_UART0TX		SUN3I_NDMA_DST_DRQ_TYPE_UART0
#define DRQDST_UART1TX		SUN3I_NDMA_DST_DRQ_TYPE_UART1
#define DRQDST_UART2TX		SUN3I_NDMA_DST_DRQ_TYPE_UART2

#define DRQDST_AUDIO_CODEC	SUN3I_NDMA_DST_DRQ_TYPE_AUDIO
#define DRQDST_CODEC		DRQDST_AUDIO_CODEC

#define DRQDST_OTG_EP1		SUN3I_NDMA_DST_DRQ_TYPE_USBEP1
#define DRQDST_OTG_EP2		SUN3I_NDMA_DST_DRQ_TYPE_USBEP2
#define DRQDST_OTG_EP3		SUN3I_NDMA_DST_DRQ_TYPE_USBEP2

#define DRQDST_SPI0TX		SUN3I_NDMA_DST_DRQ_TYPE_SPI0
#define DRQDST_SPI1TX		SUN3I_NDMA_DST_DRQ_TYPE_SPI1

#endif /* __DMA_SUN3IW1__ */

