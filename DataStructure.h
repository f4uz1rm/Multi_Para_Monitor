#ifndef _DATASTRUCTURE_H_
#define _DATASTRUCTURE_H_
#include"PackID.h"

typedef enum _SYSTEM_STATUS_LIST
{
	SYSTEM_STATUS_AFTER_POST	= 0,
	SYSTEM_STATUS_MEASURE_MODE_MANUAL	= 1,
	SYSTEM_STATUS_ERROR	= 2,
	SYSTEM_STATUS_MANOMETER	= 4,
	SYSTEM_STATUS_CHECK_WATCHDOG	= 5,
	SYSTEM_STATUS_MEASURE_MODE_AUTO	= 6,
	SYSTEM_STATUS_CHECK_LEAK	= 7,
	SYSTEM_STATUS_MEASURE_MODE_CONT	= 8,
	SYSTEM_STATUS_VP	= 9,

	/*ZUGMED_NOTIFY_MODE_BP                     = 0x00,   //Ѫѹ����
	ZUGMED_NOTIFY_MODE_CALIBRATE_PRS          = 0x01,   //���ѹ��У׼
	ZUGMED_NOTIFY_MODE_CHECK_LEAK             = 0x02,   //©�����
	ZUGMED_NOTIFY_MODE_VP                     = 0x03,   */

	
	SYSTEM_STATUS_MAX
	
} SYSTEM_STATUS_LIST;

#endif