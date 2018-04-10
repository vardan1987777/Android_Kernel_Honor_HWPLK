

#ifndef __TTFMEMRB_H__
#define __TTFMEMRB_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "product_config.h"
#include "TTFLink.h"
#include "vos.h"
#include "VosPidDef.h"
#include "TTFUtil.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif



/*****************************************************************************
  1 消息头定义
*****************************************************************************/

/*****************************************************************************
  2 宏定义
*****************************************************************************/

#define TTF_MEM_RB_TASK_FAIL_CNT_MAX    (10000)

/* IMM 封装的打印 */
#ifdef __UT_CENTER__

#if (OSA_CPU_ACPU == VOS_OSA_CPU)
#define TTF_LOG(ModulePID, Level, String)\
                OM_LOG((ModulePID), 0, (Level), (String))
#define TTF_LOG1(ModulePID, Level, String, Para1)\
                OM_LOG1((ModulePID), 0, (Level), (String), (Para1))
#define TTF_LOG2(ModulePID, Level, String, Para1, Para2)\
                OM_LOG2((ModulePID), 0, (Level), (String), (Para1), (Para2))
#define TTF_LOG3(ModulePID, Level, String, Para1, Para2, Para3)\
                OM_LOG3((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3))
#define TTF_LOG4(ModulePID, Level, String, Para1, Para2, Para3, Para4)\
                OM_LOG4((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3), (Para4))
#elif (OSA_CPU_CCPU == VOS_OSA_CPU)
#define TTF_LOG(ModulePID, Level, String)\
                PS_LOG((ModulePID), 0, (Level), (String))
#define TTF_LOG1(ModulePID, Level, String, Para1)\
                PS_LOG1((ModulePID), 0, (Level), (String), (Para1))
#define TTF_LOG2(ModulePID, Level, String, Para1, Para2)\
                PS_LOG2((ModulePID), 0, (Level), (String), (Para1), (Para2))
#define TTF_LOG3(ModulePID, Level, String, Para1, Para2, Para3)\
                PS_LOG3((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3))
#define TTF_LOG4(ModulePID, Level, String, Para1, Para2, Para3, Para4)\
                PS_LOG4((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3), (Para4))
#endif

#else

#define TTF_LOG(ModulePID, Level, String)\
                PS_LOG((ModulePID), 0, (Level), (String))
#define TTF_LOG1(ModulePID, Level, String, Para1)\
                PS_LOG1((ModulePID), 0, (Level), (String), (Para1))
#define TTF_LOG2(ModulePID, Level, String, Para1, Para2)\
                PS_LOG2((ModulePID), 0, (Level), (String), (Para1), (Para2))
#define TTF_LOG3(ModulePID, Level, String, Para1, Para2, Para3)\
                PS_LOG3((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3))
#define TTF_LOG4(ModulePID, Level, String, Para1, Para2, Para3, Para4)\
                PS_LOG4((ModulePID), 0, (Level), (String), (Para1), (Para2), (Para3), (Para4))

#endif

#if (FEATURE_ON == FEATURE_SKB_EXP)

/* 将C99 标准宏 __func__ 转为VOS定义的宏 __FUNCTION__ */
#define __func__ __FUNCTION__

extern VOS_UINT8                               g_ucTtfMemDebugPrint;

/* 调试打印 */
/*
#define TTF_DEBUG_PRINT(...)\
             do{\
                 if ( PS_TRUE == g_ucTtfMemDebugPrint )\
                 {\
                     vos_printf(__VA_ARGS__);
                 }\
             }while(0)
*/

#define TTF_DEBUG_TRACE_FUNC            FEATURE_OFF

#ifdef _lint

#define TTF_DEBUG_TRACE_FUNC_ENTER()
#define TTF_DEBUG_TRACE_FUNC_LEAVE()

#else


#if(TTF_DEBUG_TRACE_FUNC == FEATURE_ON)
#define TTF_DEBUG_TRACE_FUNC_ENTER()\
            do{\
                if ( PS_TRUE == g_ucTtfMemDebugPrint )\
                {\
                    vos_printf("Enter Function: ");\
                    vos_printf(__func__);\
                    vos_printf("\n");\
                }\
            }while(0)

#define TTF_DEBUG_TRACE_FUNC_LEAVE()\
            do{\
                if ( PS_TRUE == g_ucTtfMemDebugPrint )\
                {\
                    vos_printf("Normal Leave Function: ");\
                    vos_printf(__func__);\
                    vos_printf("\n");\
                }\
            }while(0)
#else
#define TTF_DEBUG_TRACE_FUNC_ENTER()
#define TTF_DEBUG_TRACE_FUNC_LEAVE()
#endif
#endif

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/

/*****************************************************************************
  6 消息定义
*****************************************************************************/

/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
#pragma pack(4)


/*****************************************************************************
 结构名    : TTF_MEM_RB_DATA_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 核间数据传递信息结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                            ucUserId;           /* 用户ID */
    VOS_UINT8                            ucReserve;
    VOS_UINT16                           usDataLen;          /* 数据长度 */
    VOS_UINT32                           ulReserveLen;       /* C核通知A核 head和 data之间预留PAD的长度 */
    VOS_UINT8                           *pDataAddr;          /* 数据首地址 */
    VOS_VOID                            *pRetAddr;           /* 传递用于释放的地址 */
}TTF_MEM_RB_DATA_STRU;

/*****************************************************************************
 结构名    : TTF_MEM_RB_FREE_MEM_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 核间释放传递信息结构
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          *pRetAddr;         /* sk_buff 首地址，用于通知释放内存的地址 */
}TTF_MEM_RB_FREE_MEM_STRU;

/*****************************************************************************
 结构名    : TTF_MEM_RB_MNTN_INFO_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : 核间可维可测信息
*****************************************************************************/
typedef struct TTF_MEM_RB_MNTN_INFO
{
    VOS_UINT32          ulTtfMemRbSendIntCnt;       /* TtfMemRb 向IPF发送中断次数 */
    VOS_UINT32          ulTtfMemRbReceiveIntCnt;    /* TtfMemRb 收到IPF中断次数 */
    VOS_UINT32          ulTtfMemRbEnQFailCnt;       /* TtfMemRb 入队失败次数 */
    VOS_UINT32          ulTtfMemRbDeQFailCnt;       /* TtfMemRb 出队失败次数 */
    VOS_UINT32          ulTtfMemRbEnQTotalCnt;      /* TtfMemRb 入队总数 */
    VOS_UINT32          ulTtfMemRbDeQTotalCnt;      /* TtfMemRb 出队总数 */
}TTF_MEM_RB_MNTN_INFO_STRU;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/

/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  10 函数声明
*****************************************************************************/
extern VOS_VOID TTF_DebugLOG(VOS_CHAR *pcString);
extern VOS_VOID TTF_DebugLOG1(VOS_CHAR *pcString, VOS_INT32 lPara1);
extern VOS_VOID TTF_DebugLOG2(VOS_CHAR *pcString, VOS_INT32 lPara1, VOS_INT32 lPara2);
extern VOS_VOID TTF_DebugLOG3(VOS_CHAR *pcString, VOS_INT32 lPara1, VOS_INT32 lPara2, VOS_INT32 lPara3);
extern VOS_VOID TTF_DebugLOG4(VOS_CHAR *pcString, VOS_INT32 lPara1, VOS_INT32 lPara2, VOS_INT32 lPara3, VOS_INT32 lPara4);
extern VOS_VOID TTF_MemFreeFromQue(VOS_VOID);

#endif
#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of Adapter.h */







