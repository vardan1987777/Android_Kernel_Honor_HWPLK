/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : NasMmlMsgProc.h
  版 本 号   : 初稿
  作    者   : zhoujun 40661
  生成日期   : 2011年7月25日
  最近修改   :
  功能描述   : NasMmlMsgProc.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2011年7月25日
    作    者   : zhoujun 40661
    修改内容   : 创建文件

******************************************************************************/
#ifndef _NAS_MML_MSG_PROC_H_
#define _NAS_MML_MSG_PROC_H_
/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include  "NasMmlCtx.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#if (VOS_WIN32 == VOS_OS_VER)
#define NAS_MM_TASK_PRIO                                   (137)
#endif


/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/

typedef VOS_VOID  (*pNasMmPIdMsgProc)(struct MsgCB* pMsg );


NAS_MML_INTERNAL_MSG_BUF_STRU *NAS_MML_GetIntMsgSendBuf(
    VOS_UINT32                          ulLen
);

NAS_MML_INTERNAL_MSG_BUF_STRU* NAS_MML_GetNextInternalMsg( VOS_VOID );

VOS_UINT32  NAS_MML_SndInternalMsg(
    VOS_VOID                           *pSndMsg
);

VOS_UINT32  NAS_MML_MsgProc(
    struct MsgCB                        *pRcvMsg
);

VOS_UINT32  NAS_MML_FidMsgProc(
    struct MsgCB                        *pRcvMsg
);



VOS_UINT32 NAS_MML_FidInit (
    enum VOS_INIT_PHASE_DEFINE          enInitPhase
);

VOS_UINT32  NAS_MML_InsertInternalMsgHead( 
    VOS_VOID                           *pSndMsg
);


#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of NasMmlMsgProc.h */
