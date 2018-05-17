#ifndef VLCVIEW_CONFIG_1080P25_H
#define VLCVIEW_CONFIG_1080P25_H

#include "isp/isp_enum.h"

#define CONFIG_1080P25

/* isp configuration */
#define ISP_FORMAT FORMAT_1080P25
#define ISP_INIT_WIDTH 1920
#define ISP_INIT_HEIGHT 1088

/* dsp configuration */
#define VIDEO_INPUT_WIDTH 1920
#define VIDEO_INPUT_HEIGHT 1080

/* channel 0 configuration */
#define CH0_WIDTH 1920
#define CH0_HEIGHT 1080
#define CH0_BIT_RATE (4096*1024)
#define CH0_FRAME_COUNT 25
#define CH0_FRAME_TIME 1

#endif