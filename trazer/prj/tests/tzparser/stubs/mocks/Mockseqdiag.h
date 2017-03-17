/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKSEQDIAG_H
#define _MOCKSEQDIAG_H

#include "seqdiag.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC)
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockseqdiag_Init(void);
void Mockseqdiag_Destroy(void);
void Mockseqdiag_Verify(void);




#define sdiag_async_evt_Expect(p) sdiag_async_evt_CMockExpect(__LINE__, p)
void sdiag_async_evt_CMockExpect(UNITY_LINE_TYPE cmock_line, EVENT_ST* p);
#define sdiag_state_Expect(smobj, stobj) sdiag_state_CMockExpect(__LINE__, smobj, stobj)
void sdiag_state_CMockExpect(UNITY_LINE_TYPE cmock_line, ulong smobj, ulong stobj);
#define sdiag_tmrevt_Expect(t) sdiag_tmrevt_CMockExpect(__LINE__, t)
void sdiag_tmrevt_CMockExpect(UNITY_LINE_TYPE cmock_line, ulong t);
#define sdiag_text_Expect(s) sdiag_text_CMockExpect(__LINE__, s)
void sdiag_text_CMockExpect(UNITY_LINE_TYPE cmock_line, const char* s);
#define sdiag_exec_act_Expect(ao, act) sdiag_exec_act_CMockExpect(__LINE__, ao, act)
void sdiag_exec_act_CMockExpect(UNITY_LINE_TYPE cmock_line, ulong ao, ulong act);
#define sdiag_sync_Expect(f, snr, dest) sdiag_sync_CMockExpect(__LINE__, f, snr, dest)
void sdiag_sync_CMockExpect(UNITY_LINE_TYPE cmock_line, ulong f, ulong snr, ulong dest);
#define seqdiag_init_Expect() seqdiag_init_CMockExpect(__LINE__)
void seqdiag_init_CMockExpect(UNITY_LINE_TYPE cmock_line);

#endif
