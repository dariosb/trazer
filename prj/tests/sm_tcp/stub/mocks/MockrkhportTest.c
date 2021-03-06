/* AUTOGENERATED FILE. DO NOT EDIT. */
#include <string.h>
#include <stdlib.h>
#include <setjmp.h>
#include "unity.h"
#include "cmock.h"
#include "MockrkhportTest.h"

typedef struct _CMOCK_rkh_sma_activate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_SMA_T* Expected_me;
  RKH_EVT_T** Expected_qSto;
  RKH_RQNE_T Expected_qSize;
  void* Expected_stkSto;
  rui32_t Expected_stkSize;

} CMOCK_rkh_sma_activate_CALL_INSTANCE;

typedef struct _CMOCK_rkh_sma_terminate_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_SMA_T* Expected_me;

} CMOCK_rkh_sma_terminate_CALL_INSTANCE;

typedef struct _CMOCK_rkh_sma_post_fifo_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_SMA_T* Expected_me;
  RKH_EVT_T* Expected_e;
  void* Expected_sender;

} CMOCK_rkh_sma_post_fifo_CALL_INSTANCE;

typedef struct _CMOCK_rkh_sma_post_lifo_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_SMA_T* Expected_me;
  RKH_EVT_T* Expected_e;
  void* Expected_sender;

} CMOCK_rkh_sma_post_lifo_CALL_INSTANCE;

typedef struct _CMOCK_rkh_sma_get_CALL_INSTANCE
{
  UNITY_LINE_TYPE LineNumber;
  RKH_EVT_T* ReturnVal;
  RKH_SMA_T* Expected_me;

} CMOCK_rkh_sma_get_CALL_INSTANCE;

static struct MockrkhportTestInstance
{
  CMOCK_MEM_INDEX_TYPE rkh_sma_activate_CallInstance;
  CMOCK_MEM_INDEX_TYPE rkh_sma_terminate_CallInstance;
  CMOCK_MEM_INDEX_TYPE rkh_sma_post_fifo_CallInstance;
  CMOCK_MEM_INDEX_TYPE rkh_sma_post_lifo_CallInstance;
  CMOCK_MEM_INDEX_TYPE rkh_sma_get_CallInstance;
} Mock;

extern jmp_buf AbortFrame;

void MockrkhportTest_Verify(void)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_sma_activate_CallInstance, cmock_line, "Function 'rkh_sma_activate' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_sma_terminate_CallInstance, cmock_line, "Function 'rkh_sma_terminate' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_sma_post_fifo_CallInstance, cmock_line, "Function 'rkh_sma_post_fifo' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_sma_post_lifo_CallInstance, cmock_line, "Function 'rkh_sma_post_lifo' called less times than expected.");
  UNITY_TEST_ASSERT(CMOCK_GUTS_NONE == Mock.rkh_sma_get_CallInstance, cmock_line, "Function 'rkh_sma_get' called less times than expected.");
}

void MockrkhportTest_Init(void)
{
  MockrkhportTest_Destroy();
}

void MockrkhportTest_Destroy(void)
{
  CMock_Guts_MemFreeAll();
  memset(&Mock, 0, sizeof(Mock));
}

void rkh_sma_activate(RKH_SMA_T* me, const RKH_EVT_T** qSto, RKH_RQNE_T qSize, void* stkSto, rui32_t stkSize)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_sma_activate_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_activate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_sma_activate_CallInstance);
  Mock.rkh_sma_activate_CallInstance = CMock_Guts_MemNext(Mock.rkh_sma_activate_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'rkh_sma_activate' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(RKH_SMA_T), cmock_line, "Function 'rkh_sma_activate' called with unexpected value for argument 'me'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_qSto, qSto, cmock_line, "Function 'rkh_sma_activate' called with unexpected value for argument 'qSto'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_qSize), (void*)(&qSize), sizeof(RKH_RQNE_T), cmock_line, "Function 'rkh_sma_activate' called with unexpected value for argument 'qSize'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_stkSto, stkSto, cmock_line, "Function 'rkh_sma_activate' called with unexpected value for argument 'stkSto'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(&cmock_call_instance->Expected_stkSize), (void*)(&stkSize), sizeof(rui32_t), cmock_line, "Function 'rkh_sma_activate' called with unexpected value for argument 'stkSize'.");
  }
}

void CMockExpectParameters_rkh_sma_activate(CMOCK_rkh_sma_activate_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me, const RKH_EVT_T** qSto, RKH_RQNE_T qSize, void* stkSto, rui32_t stkSize)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->Expected_qSto = (RKH_EVT_T**)qSto;
  memcpy(&cmock_call_instance->Expected_qSize, &qSize, sizeof(RKH_RQNE_T));
  cmock_call_instance->Expected_stkSto = stkSto;
  memcpy(&cmock_call_instance->Expected_stkSize, &stkSize, sizeof(rui32_t));
}

void rkh_sma_activate_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, const RKH_EVT_T** qSto, RKH_RQNE_T qSize, void* stkSto, rui32_t stkSize)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_sma_activate_CALL_INSTANCE));
  CMOCK_rkh_sma_activate_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_activate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_sma_activate_CallInstance = CMock_Guts_MemChain(Mock.rkh_sma_activate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_sma_activate(cmock_call_instance, me, qSto, qSize, stkSto, stkSize);
}

void rkh_sma_terminate(RKH_SMA_T* me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_sma_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_sma_terminate_CallInstance);
  Mock.rkh_sma_terminate_CallInstance = CMock_Guts_MemNext(Mock.rkh_sma_terminate_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'rkh_sma_terminate' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(RKH_SMA_T), cmock_line, "Function 'rkh_sma_terminate' called with unexpected value for argument 'me'.");
  }
}

void CMockExpectParameters_rkh_sma_terminate(CMOCK_rkh_sma_terminate_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me)
{
  cmock_call_instance->Expected_me = me;
}

void rkh_sma_terminate_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_sma_terminate_CALL_INSTANCE));
  CMOCK_rkh_sma_terminate_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_terminate_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_sma_terminate_CallInstance = CMock_Guts_MemChain(Mock.rkh_sma_terminate_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_sma_terminate(cmock_call_instance, me);
}

void rkh_sma_post_fifo(RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_sma_post_fifo_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_post_fifo_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_sma_post_fifo_CallInstance);
  Mock.rkh_sma_post_fifo_CallInstance = CMock_Guts_MemNext(Mock.rkh_sma_post_fifo_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'rkh_sma_post_fifo' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(RKH_SMA_T), cmock_line, "Function 'rkh_sma_post_fifo' called with unexpected value for argument 'me'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_e), (void*)(e), sizeof(RKH_EVT_T), cmock_line, "Function 'rkh_sma_post_fifo' called with unexpected value for argument 'e'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_sender, sender, cmock_line, "Function 'rkh_sma_post_fifo' called with unexpected value for argument 'sender'.");
  }
}

void CMockExpectParameters_rkh_sma_post_fifo(CMOCK_rkh_sma_post_fifo_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->Expected_e = (RKH_EVT_T*)e;
  cmock_call_instance->Expected_sender = (void*)sender;
}

void rkh_sma_post_fifo_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_sma_post_fifo_CALL_INSTANCE));
  CMOCK_rkh_sma_post_fifo_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_post_fifo_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_sma_post_fifo_CallInstance = CMock_Guts_MemChain(Mock.rkh_sma_post_fifo_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_sma_post_fifo(cmock_call_instance, me, e, sender);
}

void rkh_sma_post_lifo(RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_sma_post_lifo_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_post_lifo_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_sma_post_lifo_CallInstance);
  Mock.rkh_sma_post_lifo_CallInstance = CMock_Guts_MemNext(Mock.rkh_sma_post_lifo_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'rkh_sma_post_lifo' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(RKH_SMA_T), cmock_line, "Function 'rkh_sma_post_lifo' called with unexpected value for argument 'me'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_e), (void*)(e), sizeof(RKH_EVT_T), cmock_line, "Function 'rkh_sma_post_lifo' called with unexpected value for argument 'e'.");
  }
  {
    UNITY_TEST_ASSERT_EQUAL_PTR(cmock_call_instance->Expected_sender, sender, cmock_line, "Function 'rkh_sma_post_lifo' called with unexpected value for argument 'sender'.");
  }
}

void CMockExpectParameters_rkh_sma_post_lifo(CMOCK_rkh_sma_post_lifo_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  cmock_call_instance->Expected_me = me;
  cmock_call_instance->Expected_e = (RKH_EVT_T*)e;
  cmock_call_instance->Expected_sender = (void*)sender;
}

void rkh_sma_post_lifo_CMockExpect(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, const RKH_EVT_T* e, const void* const sender)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_sma_post_lifo_CALL_INSTANCE));
  CMOCK_rkh_sma_post_lifo_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_post_lifo_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_sma_post_lifo_CallInstance = CMock_Guts_MemChain(Mock.rkh_sma_post_lifo_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_sma_post_lifo(cmock_call_instance, me, e, sender);
}

RKH_EVT_T* rkh_sma_get(RKH_SMA_T* me)
{
  UNITY_LINE_TYPE cmock_line = TEST_LINE_NUM;
  CMOCK_rkh_sma_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(Mock.rkh_sma_get_CallInstance);
  Mock.rkh_sma_get_CallInstance = CMock_Guts_MemNext(Mock.rkh_sma_get_CallInstance);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "Function 'rkh_sma_get' called more times than expected.");
  cmock_line = cmock_call_instance->LineNumber;
  {
    UNITY_TEST_ASSERT_EQUAL_MEMORY((void*)(cmock_call_instance->Expected_me), (void*)(me), sizeof(RKH_SMA_T), cmock_line, "Function 'rkh_sma_get' called with unexpected value for argument 'me'.");
  }
  return cmock_call_instance->ReturnVal;
}

void CMockExpectParameters_rkh_sma_get(CMOCK_rkh_sma_get_CALL_INSTANCE* cmock_call_instance, RKH_SMA_T* me)
{
  cmock_call_instance->Expected_me = me;
}

void rkh_sma_get_CMockExpectAndReturn(UNITY_LINE_TYPE cmock_line, RKH_SMA_T* me, RKH_EVT_T* cmock_to_return)
{
  CMOCK_MEM_INDEX_TYPE cmock_guts_index = CMock_Guts_MemNew(sizeof(CMOCK_rkh_sma_get_CALL_INSTANCE));
  CMOCK_rkh_sma_get_CALL_INSTANCE* cmock_call_instance = (CMOCK_rkh_sma_get_CALL_INSTANCE*)CMock_Guts_GetAddressFor(cmock_guts_index);
  UNITY_TEST_ASSERT_NOT_NULL(cmock_call_instance, cmock_line, "CMock has run out of memory. Please allocate more.");
  memset(cmock_call_instance, 0, sizeof(*cmock_call_instance));
  Mock.rkh_sma_get_CallInstance = CMock_Guts_MemChain(Mock.rkh_sma_get_CallInstance, cmock_guts_index);
  cmock_call_instance->LineNumber = cmock_line;
  CMockExpectParameters_rkh_sma_get(cmock_call_instance, me);
  cmock_call_instance->ReturnVal = cmock_to_return;
}

