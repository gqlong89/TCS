/** @file     OsTask_2.c
  *
  * @brief    Task OsTask_2 body
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.5.0  (R4.0 backend version: v7.2.5 (Build 34089))
  *           at Sun Apr 24 17:41:23 2016
  */

#define RTE_CORE

#include "Rte_Const.h"
#if !defined(RTE_VENDOR_MODE)
#pragma message "Compiling an individual task file but RTE_VENDOR_MODE not defined. Compiling a stale file?"
#endif /* !defined(RTE_VENDOR_MODE) */
#if defined(RTE_USE_TASK_HEADER)
#include "OsTask_2.h"
#else /* defined(RTE_USE_TASK_HEADER) */
#include "Os.h"
#endif /* defined(RTE_USE_TASK_HEADER) */
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Type.h"
#include "Rte_DataHandleType.h"

#define SensorSWConponent_START_SEC_CODE
#include "SensorSWConponent_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SensorSWConponent_CODE) RunnableEntity_WheelSpeedPlausi_Receive_func(void);
#define SensorSWConponent_STOP_SEC_CODE
#include "SensorSWConponent_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_2)
{
   /* Box: Implicit Buffer Fill begin */
   /* Box: Implicit Buffer Fill end */
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   {
      /* Box: CPT_SensorSWConponent begin */
      RunnableEntity_WheelSpeedPlausi_Receive_func();
      /* Box: CPT_SensorSWConponent end */
   }
   /* Box: Implicit Buffer Flush begin */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* OsTask_2 */
#define RTE_STOP_SEC_TASKBODY
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

