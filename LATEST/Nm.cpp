/******************************************************************************/
/* File   : Nm.cpp                                                            */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Nm.hpp"
#include "infNm_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define NM_AR_RELEASE_VERSION_MAJOR                                            4
#define NM_AR_RELEASE_VERSION_MINOR                                            3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(NM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible NM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(NM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible NM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Nm, NM_VAR) Nm;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, NM_CODE) module_Nm::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, NM_CONST,       NM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   NM_CONFIG_DATA, NM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Nm_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstNm_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Nm_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Nm_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Nm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_Nm::DeInitFunction(
   void
){
#if(STD_ON == Nm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Nm_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Nm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_Nm::MainFunction(
   void
){
#if(STD_ON == Nm_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Nm_InitCheck)
   }
   else{
#if(STD_ON == Nm_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  NM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, NM_CODE) module_Nm::PassiveStartUp(
   void
){
}

FUNC(void, NM_CODE) module_Nm::NetworkRequest(
   void
){
}

FUNC(void, NM_CODE) module_Nm::NetworkRelease(
   void
){
}

FUNC(void, NM_CODE) module_Nm::DisableCommunication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::EnableCommunication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::GetPduData(
   void
){
}

FUNC(void, NM_CODE) module_Nm::GetUserData(
   void
){
}

FUNC(void, NM_CODE) module_Nm::SetUserData(
   void
){
}

FUNC(void, NM_CODE) module_Nm::RepeateMessageRequest(
   void
){
}

FUNC(void, NM_CODE) module_Nm::GetNodeIdentifier(
   void
){
}

FUNC(void, NM_CODE) module_Nm::GetLocalNodeIdentifier(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CheckRemoteSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::GetState(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbNetworkStartIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbNetworkMode(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbBusSleepMode(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbPrepareBusSleepMode(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbRemoteSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbRemoteSleepCancellation(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbSynchronizationPoint(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbCoordReadyToSleepIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbCoordReadyToSleepCancellation(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbPduRxIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbStateChangeNotification(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbRepeateMessageIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbTxTimeoutException(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CbCarWakeUpIndication(
   void
){
}

FUNC(void, NM_CODE) module_Nm::CalloutCarWakeUp(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

