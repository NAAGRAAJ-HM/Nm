/*****************************************************/
/* File   : Nm.cpp                                   */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"

#include "Nm_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_Nm : public class_module{
   public:
      FUNC(void, NM_CODE) InitFunction   (void);
      FUNC(void, NM_CODE) DeInitFunction (void);
      FUNC(void, NM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_Nm Nm;

interface_EcuM_Client *EcuM_Client_ptr_Nm = &Nm;
interface_SchM_Client *SchM_Client_ptr_Nm = &Nm;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, NM_CODE) module_Nm::InitFunction(void){
}

FUNC(void, NM_CODE) module_Nm::MainFunction(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::PassiveStartUp(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::NetworkRequest(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::NetworkRelease(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::DisableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::EnableCommunication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetPduData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetUserData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::SetUserData(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::RepeateMessageRequest(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetLocalNodeIdentifier(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CheckRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetState(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::GetVersionInfo(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbNetworkStartIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbNetworkMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbPrepareBusSleepMode(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRemoteSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRemoteSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbSynchronizationPoint(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCoordReadyToSleepIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCoordReadyToSleepCancellation(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbPduRxIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbStateChangeNotification(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbRepeateMessageIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbTxTimeoutException(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CbCarWakeUpIndication(void){
}

FUNC(void, NM_CODE) class_Nm_Unused::CalloutCarWakeUp(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

