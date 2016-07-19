/** @file     Rte.c
  * 
  * @brief    RTE data structures
  * 
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  * 
  * @note     Generated by ETAS GmbH  RTA-RTE v5.8.4  (R4.0 backend version: v7.8.7 (Build 46772))
  */

/* RTE_HEADER_START */

#define RTE_CORE

#ifdef RTE_PREINCLUDE
#include RTE_PREINCLUDE
#endif
/* Box: RTE: OS Headers begin */
#include "Rte_Const.h"
#include "Os.h"
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
/* Box: RTE: OS Headers end */
/* Box: RTE headers begin */
#include <Rte.h>
#include <Rte_Intl.h>
#include <Rte_Main.h>
#include "Rte_Type.h"
#include "Rte_Cfg.h"
#include "Rte_Cbk.h"
#if defined(RTE_REQUIRES_COM)
#include <Com.h>
#endif /* defined(RTE_REQUIRES_COM) */
#if defined(RTE_REQUIRES_NVM)
#include <NvM.h>
#endif /* defined(RTE_REQUIRES_NVM) */
#include "Rte_Algo.h"
#include "Rte_BEA.h"
#include "Rte_EEA.h"
#include "Rte_EcuAbstraction.h"
#include "Rte_SensorSWComponent.h"
/* Box: RTE headers end */
/* RTE_HEADER_END */


/* ----- Function and RE prototypes ----- */

/* RTE_FN_PROTOTYPES_START */

/* Global functions */
#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_Algo (CPT_Algo), Type: Algo */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Algo_BrakeValue_RPort_ClientServerOperation_Brake(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                                                          VAR(float64, AUTOMATIC) DRBrakeValue,
                                                                                          VAR(float64, AUTOMATIC) ULBrakeValue,
                                                                                          VAR(float64, AUTOMATIC) URBrakeValue);
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_Algo_Engine_PPort_Throttle(VAR(float64, AUTOMATIC) data);
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_BEA (CPT_BEA), Type: BEA */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_BEA_BrakeValueTOECU_RPort_ClientServerOperation_Brake(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                                                              VAR(float64, AUTOMATIC) DRBrakeValue,
                                                                                              VAR(float64, AUTOMATIC) ULBrakeValue,
                                                                                              VAR(float64, AUTOMATIC) URBrakeValue);
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EEA (CPT_EEA), Type: EEA */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_EEA_ThrottleToECU_RPort_ClientServerOperation_Throttle(VAR(float64, AUTOMATIC) Throttle);
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_EEA_Throttle_RPort_Throttle(CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) data);
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EcuAbstraction (CPT_EcuAbstraction), Type: EcuAbstraction */
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_SensorSWComponent (CPT_SensorSWComponent), Type: SensorSWComponent */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SensorSWComponent_SensorTOAlgo_RPort_ClientServerOperation_Sensor(VAR(float64, AUTOMATIC) DLWheelSpeed,
                                                                                                          VAR(float64, AUTOMATIC) DRWheelSpeed,
                                                                                                          VAR(float64, AUTOMATIC) ULWheelSpeed,
                                                                                                          VAR(float64, AUTOMATIC) URWheelSpeed,
                                                                                                          VAR(float64, AUTOMATIC) Gyro,
                                                                                                          VAR(float64, AUTOMATIC) CarSpeed,
                                                                                                          VAR(float64, AUTOMATIC) SteeringAngle);
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_SensorSWComponent_Sensor_RPort_ClientServerOperation_Sensor(CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DLWheelSpeed,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DRWheelSpeed,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) ULWheelSpeed,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) URWheelSpeed,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) CarSpeed,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) SteeringAngle,
                                                                                                    CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) Gyro);
#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_FN_PROTOTYPES_END */

/* RTE_RE_PROTOTYPES_START */

/* Type: Algo */
#define Algo_START_SEC_CODE
#include "Algo_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Algo_CODE) RunnableEntity_Send_func(VAR(float64, AUTOMATIC) DLWheelSpeed,
                                               VAR(float64, AUTOMATIC) DRWheelSpeed,
                                               VAR(float64, AUTOMATIC) ULWheelSpeed,
                                               VAR(float64, AUTOMATIC) URWheelSpeed,
                                               VAR(float64, AUTOMATIC) Gyro,
                                               VAR(float64, AUTOMATIC) CarSpeed,
                                               VAR(float64, AUTOMATIC) SteeringAngle);
#define Algo_STOP_SEC_CODE
#include "Algo_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: BEA */
#define BEA_START_SEC_CODE
#include "BEA_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, BEA_CODE) RunnableEntity_BEA_Receive_func(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                     VAR(float64, AUTOMATIC) DRBrakeValue,
                                                     VAR(float64, AUTOMATIC) ULBrakeValue,
                                                     VAR(float64, AUTOMATIC) URBrakeValue);
#define BEA_STOP_SEC_CODE
#include "BEA_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: EEA */
#define EEA_START_SEC_CODE
#include "EEA_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, EEA_CODE) RunnableEntity_EEA_Receive_func(void);
#define EEA_STOP_SEC_CODE
#include "EEA_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: EcuAbstraction */
#define EcuAbstraction_START_SEC_CODE
#include "EcuAbstraction_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, EcuAbstraction_CODE) RunnableEntity_EcuAbstraction_Receive_func(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                                           VAR(float64, AUTOMATIC) DRBrakeValue,
                                                                           VAR(float64, AUTOMATIC) ULBrakeValue,
                                                                           VAR(float64, AUTOMATIC) URBrakeValue);
FUNC(void, EcuAbstraction_CODE) RunnableEntity_Throttle_func(VAR(float64, AUTOMATIC) Throttle);
FUNC(void, EcuAbstraction_CODE) RunnableEntity_WheelSpeed_func(CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DLWheelSpeed,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DRWheelSpeed,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) ULWheelSpeed,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) URWheelSpeed,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) CarSpeed,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) SteeringAngle,
                                                               CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) Gyro);
#define EcuAbstraction_STOP_SEC_CODE
#include "EcuAbstraction_MemMap.h" /*lint !e537 permit multiple inclusion */
/* Type: SensorSWComponent */
#define SensorSWComponent_START_SEC_CODE
#include "SensorSWComponent_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, SensorSWComponent_CODE) RunnableEntity_WheelSpeedPlausi_Receive_func(void);
#define SensorSWComponent_STOP_SEC_CODE
#include "SensorSWComponent_MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_RE_PROTOTYPES_END */

/* RTE_SE_PROTOTYPES_START */

/* RTE_SE_PROTOTYPES_END */

/* ----- External variables ----- */

/* RTE_IMPORTS_START */

/* RTE_IMPORTS_END */

/* ----- Global variables ----- */

/* RTE_GLOBALS_START */

#if defined(RTE_WOWP_EVENTS) && (RTE_WOWP_EVENTS > 0)
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
CONST(Rte_TaskInfo, RTE_CONST) Rte_Tasks[2] = {
   { RTE_REF_FROM_TASK(OsTask_0), RTE_NUM_TIMEOUT_ALARMS, 0 },
   { RTE_REF_FROM_TASK(OsTask_1), RTE_NUM_TIMEOUT_ALARMS, 0 }
};
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

#endif /* defined(RTE_WOWP_EVENTS) && (RTE_WOWP_EVENTS > 0) */
#define RTE_START_SEC_VAR_64BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
VAR(float64, RTE_DATA) Throttle;
#define RTE_STOP_SEC_VAR_64BIT
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* RTE_GLOBALS_END */


/* ----- Data structures ----- */

/* RTE_CDS_START */

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_Algo (CPT_Algo), Type: Algo */
CONST(struct Rte_CDS_Algo, RTE_CONST) Rte_Inst_Algo = {
   0U                                                /* _dummy */
};
CONST(Rte_SelfType_Algo, RTE_CONST) Rte_Self_CPT_Algo = &Rte_Inst_Algo;
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_BEA (CPT_BEA), Type: BEA */
CONST(struct Rte_CDS_BEA, RTE_CONST) Rte_Inst_BEA = {
   0U                                                /* _dummy */
};
CONST(Rte_SelfType_BEA, RTE_CONST) Rte_Self_CPT_BEA = &Rte_Inst_BEA;
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EEA (CPT_EEA), Type: EEA */
CONST(struct Rte_CDS_EEA, RTE_CONST) Rte_Inst_EEA = {
   0U                                                /* _dummy */
};
CONST(Rte_SelfType_EEA, RTE_CONST) Rte_Self_CPT_EEA = &Rte_Inst_EEA;
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EcuAbstraction (CPT_EcuAbstraction), Type: EcuAbstraction */
CONST(struct Rte_CDS_EcuAbstraction, RTE_CONST) Rte_Inst_EcuAbstraction = {
   0U                                                /* _dummy */
};
CONST(Rte_SelfType_EcuAbstraction, RTE_CONST) Rte_Self_CPT_EcuAbstraction = &Rte_Inst_EcuAbstraction;
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_SensorSWComponent (CPT_SensorSWComponent), Type: SensorSWComponent */
CONST(struct Rte_CDS_SensorSWComponent, RTE_CONST) Rte_Inst_SensorSWComponent = {
   0U                                                /* _dummy */
};
CONST(Rte_SelfType_SensorSWComponent, RTE_CONST) Rte_Self_CPT_SensorSWComponent = &Rte_Inst_SensorSWComponent;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h" /*lint !e537 permit multiple inclusion */

/* RTE_CDS_END */

/* ----- Function implementations ----- */

/* RTE_FUNCTIONS_START */

#define RTE_START_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_Algo (CPT_Algo), Type: Algo */
/* Direct API 'Rte_Call_BrakeValue_RPort_ClientServerOperation_Brake' for 'CPT_Algo' optimized to an inline call. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_Algo_BrakeValue_RPort_ClientServerOperation_Brake(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                           VAR(float64, AUTOMATIC) DRBrakeValue,
                                                           VAR(float64, AUTOMATIC) ULBrakeValue,
                                                           VAR(float64, AUTOMATIC) URBrakeValue) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Activate RE via Queue begin */
   /* Parameter DLBrakeValue has direction IN */
   /* Parameter DRBrakeValue has direction IN */
   /* Parameter ULBrakeValue has direction IN */
   /* Parameter URBrakeValue has direction IN */
   RunnableEntity_BEA_Receive_func(DLBrakeValue, DRBrakeValue, ULBrakeValue, URBrakeValue);
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Activate RE via Queue end */
   return rtn;
}

/* Direct API 'Rte_Write_Engine_PPort_Throttle' for 'CPT_Algo' optimized to direct write. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Write_Algo_Engine_PPort_Throttle(VAR(float64, AUTOMATIC) data) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* Box: Send Throttle to /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EEA.Throttle_RPort begin */
   /* SpecReq: Buffer write begin */
   /* Optimizer: optimized resource lock */
   RTE_ATOMIC64(Throttle = data);
   /* SpecReq: Buffer write end */
   /* Box: Send Throttle to /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EEA.Throttle_RPort end */
   /* Send complete */
   return rtn;
}

/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_BEA (CPT_BEA), Type: BEA */
/* Direct API 'Rte_Call_BrakeValueTOECU_RPort_ClientServerOperation_Brake' for 'CPT_BEA' optimized to an inline call. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_BEA_BrakeValueTOECU_RPort_ClientServerOperation_Brake(VAR(float64, AUTOMATIC) DLBrakeValue,
                                                               VAR(float64, AUTOMATIC) DRBrakeValue,
                                                               VAR(float64, AUTOMATIC) ULBrakeValue,
                                                               VAR(float64, AUTOMATIC) URBrakeValue) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Activate RE via Queue begin */
   /* Parameter DLBrakeValue has direction IN */
   /* Parameter DRBrakeValue has direction IN */
   /* Parameter ULBrakeValue has direction IN */
   /* Parameter URBrakeValue has direction IN */
   RunnableEntity_EcuAbstraction_Receive_func(DLBrakeValue, DRBrakeValue, ULBrakeValue, URBrakeValue);
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Activate RE via Queue end */
   return rtn;
}

/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EEA (CPT_EEA), Type: EEA */
/* Direct API 'Rte_Call_ThrottleToECU_RPort_ClientServerOperation_Throttle' for 'CPT_EEA' optimized to an inline call. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_EEA_ThrottleToECU_RPort_ClientServerOperation_Throttle(VAR(float64, AUTOMATIC) Throttle) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Activate RE via Queue begin */
   /* Parameter Throttle has direction IN */
   RunnableEntity_Throttle_func(Throttle);
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Activate RE via Queue end */
   return rtn;
}

/* Direct API 'Rte_Read_Throttle_RPort_Throttle' for 'CPT_EEA' optimized to direct read. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_EEA_Throttle_RPort_Throttle(CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) data) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Buffer read begin */
   /* Optimizer: Removed resource lock for assignment of parameter to global in highest pri task */
   (*(data)) = Throttle;
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Buffer read end */
   return rtn;
}

/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_EcuAbstraction (CPT_EcuAbstraction), Type: EcuAbstraction */
/* Instance: /EcuInstance_0_FlatView/SwComponentTypes/EcuInstance_0_FlatView/CPT_SensorSWComponent (CPT_SensorSWComponent), Type: SensorSWComponent */
/* Direct API 'Rte_Call_SensorTOAlgo_RPort_ClientServerOperation_Sensor' for 'CPT_SensorSWComponent' optimized to an inline call. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_SensorSWComponent_SensorTOAlgo_RPort_ClientServerOperation_Sensor(VAR(float64, AUTOMATIC) DLWheelSpeed,
                                                                           VAR(float64, AUTOMATIC) DRWheelSpeed,
                                                                           VAR(float64, AUTOMATIC) ULWheelSpeed,
                                                                           VAR(float64, AUTOMATIC) URWheelSpeed,
                                                                           VAR(float64, AUTOMATIC) Gyro,
                                                                           VAR(float64, AUTOMATIC) CarSpeed,
                                                                           VAR(float64, AUTOMATIC) SteeringAngle) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Activate RE via Queue begin */
   /* Parameter DLWheelSpeed has direction IN */
   /* Parameter DRWheelSpeed has direction IN */
   /* Parameter ULWheelSpeed has direction IN */
   /* Parameter URWheelSpeed has direction IN */
   /* Parameter Gyro has direction IN */
   /* Parameter CarSpeed has direction IN */
   /* Parameter SteeringAngle has direction IN */
   RunnableEntity_Send_func(DLWheelSpeed, DRWheelSpeed, ULWheelSpeed, URWheelSpeed, Gyro, CarSpeed, SteeringAngle);
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Activate RE via Queue end */
   return rtn;
}

/* Direct API 'Rte_Call_Sensor_RPort_ClientServerOperation_Sensor' for 'CPT_SensorSWComponent' optimized to an inline call. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_SensorSWComponent_Sensor_RPort_ClientServerOperation_Sensor(CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DLWheelSpeed,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) DRWheelSpeed,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) ULWheelSpeed,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) URWheelSpeed,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) CarSpeed,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) SteeringAngle,
                                                                     CONSTP2VAR(float64, AUTOMATIC, RTE_APPL_DATA) Gyro) /* 1 */
{
   VAR(Std_ReturnType, AUTOMATIC) rtn;

   /* SpecReq: Activate RE via Queue begin */
   /* Parameter DLWheelSpeed has direction OUT */
   /* Parameter DRWheelSpeed has direction OUT */
   /* Parameter ULWheelSpeed has direction OUT */
   /* Parameter URWheelSpeed has direction OUT */
   /* Parameter CarSpeed has direction OUT */
   /* Parameter SteeringAngle has direction OUT */
   /* Parameter Gyro has direction OUT */
   RunnableEntity_WheelSpeed_func(DLWheelSpeed, DRWheelSpeed, ULWheelSpeed, URWheelSpeed, CarSpeed, SteeringAngle, Gyro);
   rtn = ((VAR(Std_ReturnType, AUTOMATIC))RTE_E_OK);
   /* SpecReq: Activate RE via Queue end */
   return rtn;
}

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /*lint !e537 permit multiple inclusion */
/* RTE_FUNCTIONS_END */

