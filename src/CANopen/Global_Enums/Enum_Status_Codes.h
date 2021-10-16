/*
 * Enum_Error_Codes.h
 *
 *  Created on: 9 okt. 2021
 *      Author: Daniel Mårtensson
 */

#ifndef CANOPEN_GLOBAL_ENUMS_ENUM_STATUS_CODES_H_
#define CANOPEN_GLOBAL_ENUMS_ENUM_STATUS_CODES_H_

enum{
	TOGGLE_HEARTBEAT_0 = 0x0,
	TOGGLE_HEARTBEAT_1 = 0x1,
	STATUS_OPERATIONAL_ENTER_PRE_OPERATIONAL = 0x7F,
	STATUS_OPERATIONAL_NORMAL_OPERATIONAL = 0x5,
	STATUS_OPERATIONAL_IS_STOPPED = 0x4,
	STATUS_OPERATIONAL_HAS_BOOT_UP = 0x0
};

typedef enum {
	STATUS_CODE_SUCCESSFUL = 0x0,
	STATUS_CODE_INVALID_PARAMETER = 0x1,
	STATUS_CODE_ERROR_DURING_OPERATION = 0x2,
	STATUS_CODE_SERVICE_NOT_ENABLED = 0x3
}STATUS_CODE;

#endif /* CANOPEN_GLOBAL_ENUMS_ENUM_STATUS_CODES_H_ */
