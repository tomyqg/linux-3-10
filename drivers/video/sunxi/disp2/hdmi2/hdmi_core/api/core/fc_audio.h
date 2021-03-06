/*
 * Allwinner SoCs hdmi2.0 driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */


#ifndef HALFRAMECOMPOSERAUDIO_H_
#define HALFRAMECOMPOSERAUDIO_H_

#include "frame_composer_reg.h"
#include "../hdmitx_dev.h"
#include "audio.h"
#include "../access.h"
#include "../log.h"

void fc_audio_config(hdmi_tx_dev_t *dev, audioParams_t *audio);
void fc_audio_mute(hdmi_tx_dev_t *dev);
void fc_audio_unmute(hdmi_tx_dev_t *dev);

#endif	/* HALFRAMECOMPOSERAUDIO_H_ */
