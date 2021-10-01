#ifndef _ENUMERATE_H_
#define _ENUMERATE_H_

enum ARR_TYPE_CODE
{
	ASY = 0,            // asystole
	FIB = 1,            // fibrillation
	VTA = 2,            // ventricular tachycardia
	ROT = 3,            // VPB R on T
	RUN = 4,            // VPB runs of 3 or 4
	TPT = 5,            // VPB triple. important: not use
	CPT = 6,            // VPB couple
	VPB = 7,            // accidental VPB
	BGM = 8,            // VPB bigeminy
	TGM = 9,            // VPB trigeminy
	TAC = 10,           // supraventricular tachycaridia
	BRD = 11,           // supraventricular bradycaridia
	MTI = 12,           // VPB multiform. important: not use
	PNC = 13,           // pace not capture
	PNP = 14,           // pacer not paced
	PNF = 15,           // pacer not function. important: not use
	MIS = 16,           // missed beat
	SPB = 17,           // supraventricular premature beat. important: not use
	IPB = 18,           // insertion premature beat. important: not use
	APB = 19,           // artial premature beat. important: not use
	MAX_ARR = APB,      // the maximal number for a valid arrhythmia type
	LRN = 20,           // QRS detection learning
	ARR_DETECT_OFF=21,  // off
	NML=22,             // normal qrs
	PAC = 23,           // pace rhythmia. important: not used
	NOS = 24,           // noise beat
	NON = 25,
	ARRLRN              // Arrhythmia analysis learning
};

typedef enum _PATIENT_TYPE
{
	PATIENTTYPE_ADULT,
	PATIENTTYPE_NEONATE,
	PATIENTTYPE_PEDIATRIC,
	PATIENTTYPE_LUCIFER
} PATIENT_TYPE;

typedef enum _HR_AVG_TIME {
	HR_AVG_TIME_2S,
	HR_AVG_TIME_4S,
	HR_AVG_TIME_6S,
	HR_AVG_TIME_8S,
	HR_AVG_TIME_12S,
	HR_AVG_TIME_16S
} HR_AVG_TIME;

typedef enum _ECG_GAIN_MODE {
	ECG_GAIN_0_25,
	ECG_GAIN_0_50,
	ECG_GAIN_1_00,
	ECG_GAIN_2_00,

	ECG_GAIN_MAX
} ECG_GAIN_MODE;

typedef enum _ECG_LEAD_NAME {
	ECG_LEAD_CAL,
	ECG_LEAD_I,
	ECG_LEAD_II,
	ECG_LEAD_III,
	ECG_LEAD_AVR,
	ECG_LEAD_AVL,
	ECG_LEAD_AVF,
	ECG_LEAD_V1,
	ECG_LEAD_V2,
	ECG_LEAD_V3,
	ECG_LEAD_V4,
	ECG_LEAD_V5,
	ECG_LEAD_V6,
	ECG_LEAD_MAX
} ECG_LEAD_NAME;

typedef enum _RR_AVG_TIME {
	RR_AVG_TIME_2S,
	RR_AVG_TIME_4S,
	RR_AVG_TIME_6S,
	RR_AVG_TIME_8S,
	RR_AVG_TIME_12S,
	RR_AVG_TIME_16S
} RR_AVG_TIME;

typedef enum _RESP_GAIN {
	RESP_GAIN_500,
	RESP_GAIN_1000,
	RESP_GAIN_2000,
	RESP_GAIN_3000,
	RESP_GAIN_4000,
	RESP_GAIN_5000,
	RESP_GAIN_6000,
	RESP_GAIN_AUTO
} RESP_GAIN;

typedef enum _RESP_FILTER {
	RESP_FILTER_ADULT,
	RESP_FILTER_CHILD,
	RESP_FILTER_NEORATE,
	RESP_FILTER_AUTO
} RESP_FILTER;

typedef enum _RESP_ALARM_TIME {
	RESP_ALARM_TIME_0S,
	RESP_ALARM_TIME_10S,
	RESP_ALARM_TIME_15S,
	RESP_ALARM_TIME_20S,
	RESP_ALARM_TIME_30S,
	RESP_ALARM_TIME_40S,
	RESP_ALARM_TIME_AUTO
} RESP_ALARM_TIME;

typedef enum _RESP_THRESHOLD {
	RESP_THRESHOLD_AUTO,
	RESP_THRESHOLD_MANUAL
} RESP_THRESHOLD;

typedef enum _TEMP_SENSOR {
	TEMP_SENSOR_YSI,
	TEMP_SENSOR_OTHER
} TEMP_SENSOR;

typedef enum _WAVE_LAYOUT {
	WAVE_LAYOUT_3LEAD_STANDARD,
	WAVE_LAYOUT_5LEAD_STANDARD,
	WAVE_LAYOUT_5LEAD_EXTEND
} WAVE_LAYOUT;

typedef enum _ECG_CHANNEL {
	ECG_CHANNEL_I,
	ECG_CHANNEL_II,
	ECG_CHANNEL_V1,

	ECG_CHANNEL_MAX
} ECG_CHANNEL;

typedef enum _ECG_LEAD_MODE
{
	ECG_LEAD_SYSTEM_SET_3,
	ECG_LEAD_SYSTEM_SET_5,
	ECG_LEAD_SYSTEM_SET_12,
	ECG_LEAD_SYSTEM_SET_MAX    
} ECG_LEAD_MODE;

typedef enum _ECG_FILTER_MODE
{
	FILTER_DIAG,
	FILTER_MONITOR,
	FILTER_HARDEST,
	FILTER_SURGERY,
	FILTER_MONITOR2,
	FILTER_MAX
} ECG_FILTER_MODE;

typedef enum _STOP_FILTER_MODE
{
	STOP50_FILTER,
	STOP60_FILTER,
	STOP50_60_FILTER,
	STOP_NO_FILTER,

	STOPFILTER_MAX
} STOP_FILTER_MODE;

typedef enum _ECG_PACE_LEAD_LIST
{
	ECG_PACE_LEAD_I,
	ECG_PACE_LEAD_II,
	ECG_PACE_LEAD_III,
	ECG_PACE_LEAD_AVR,
	ECG_PACE_LEAD_AVL,
	ECG_PACE_LEAD_AVF,
	ECG_PACE_LEAD_V1,

	ECG_PACE_LEAD_MAX
} ECG_PACE_LEAD_LIST;

typedef enum _ZUGMED_PACKET_ID_LIST
{
	ZUGMED_PACKET_ID_CMD_HANDSHAKE			= 0x01,
	ZUGMED_PACKET_ID_REQUEST_MODULE_INFO	= 0x02,
	ZUGMED_PACKET_ID_REQUEST_MODULE_STATUS	= 0x03,

	ZUGMED_PACKET_ID_CMD_SET_PATIENT		= 0x10,

	ZUGMED_PACKET_ID_CMD_ECG_SET_LEAD_SET	= 0x20,
	ZUGMED_PACKET_ID_CMD_ECG_SET_LEAD		= 0x21,
	ZUGMED_PACKET_ID_CMD_ECG_SET_FILTER	= 0x22,
	ZUGMED_PACKET_ID_CMD_ECG_SET_TRAP		= 0x23,
	ZUGMED_PACKET_ID_CMD_ECG_SET_GAIN		= 0x24,
	ZUGMED_PACKET_ID_CMD_ECG_SET_ST_POS	= 0x25,
	ZUGMED_PACKET_ID_CMD_ECG_SET_ARR_CHAN	= 0x26,
	ZUGMED_PACKET_ID_CMD_ECG_START_STOP_PACE	= 0x27,
	ZUGMED_PACKET_ID_CMD_ECG_START_STOP_CAL	= 0x28,
	ZUGMED_PACKET_ID_CMD_ECG_PACE_SET_LEAD		= 0x29,

	ZUGMED_PACKET_ID_CMD_RESP_SET_APNEA		= 0x30,
	ZUGMED_PACKET_ID_CMD_RESP_SET_LEAD			= 0x31,
	ZUGMED_PACKET_ID_CMD_RESP_SET_SENSITIVITY	= 0x32,
	ZUGMED_PACKET_ID_CMD_UPDATE				=0x7F,

	ZUGMED_PACKET_ID_RESPONSE_GENERAL	= 0x80,
	ZUGMED_PACKET_ID_REQUEST_HANDSHAKE	= 0x81,
	ZUGMED_PACKET_ID_RESPONSE_MODULE_INFO	= 0x82,
	ZUGMED_PACKET_ID_RESPONSE_MODULE_STATUS	= 0x83,

	ZUGMED_PACKET_ID_DATA_ECG_RESP_WAVE	= 0x90,
	ZUGMED_PACKET_ID_DATA_ECG_RESP_RATE	= 0x91,
	ZUGMED_PACKET_ID_DATA_ECG_LEAD_STATUS	= 0x92,
	ZUGMED_PACKET_ID_DATA_ECG_CHAN_OVLD	= 0x93,

	ZUGMED_PACKET_ID_DATA_RESP_APNEA_FLAG	= 0xA0,
	ZUGMED_PACKET_ID_DATA_RESP_CVA_FLAG	= 0xA1,

	ZUGMED_PACKET_ID_DATA_TEMP_RESULT		= 0xB0,

	ZUGMED_PACKET_ID_MAX
} ZUGMED_PACKET_ID_LIST;

typedef enum _SCAN_SPEED_MODE_
{
	SCAN_SPEED_2MS,
	SCAN_SPEED_4MS,
	SCAN_SPEED_10MS,
	SCAN_SPEED_20MS
} SCAN_SPEED_MODE;

typedef enum _ECG_ANA_STATUS_LIST
{
	ECG_ANA_STATUS_NORMAL,
	ECG_ANA_STATUS_QRS_LEARN,
	ECG_ANA_STATUS_ARR_LRN,
	ECG_ANA_STATUS_NOISE,
	ECG_ANA_STATUS_UNDETECTABLE,
	ECG_ANA_STATUS_NO_SIGNAL,

	ECG_ANA_STATUS_MAX

} ECG_ANA_STATUS_LIST;

typedef enum _RESP_LEAD_LIST
{
	RESP_LEAD_I		= 0x00,
	RESP_LEAD_II	= 0x01,

	RESP_LEAD_MAX
} RESP_LEAD_LIST;

typedef enum _RESP_SENSITIVITY_LIST
{
	RESP_SENSITIVITY_1 = 0,
	RESP_SENSITIVITY_2,
	RESP_SENSITIVITY_3,
	RESP_SENSITIVITY_4,
	RESP_SENSITIVITY_5,
	
	RESP_SENSITIVITY_MAX
	
} RESP_SENSITIVITY_LIST;

#endif