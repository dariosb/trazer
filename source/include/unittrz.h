/*
 *	file: unittrz.h
 */

#ifndef __UNITTRZ_H__
#define __UNITTRZ_H__


#ifdef __cplusplus
extern "C"{
#endif

#include <vector>
#include <stdarg.h>
#include "trkhtype.h"
#include "trkhdef.h"
#include "utrzhal.h"
#include "unitrzlib.h"

using namespace std;

enum
{
    EVT_EXPECTED,
    GRP_EXPECTED = EVT_EXPECTED,
    ARG_EXPECTED = EVT_EXPECTED,

    EVT_IGNORED,
    GRP_IGNORED = EVT_IGNORED,
    ARG_IGNORED = EVT_IGNORED
};

typedef struct v_u32args_t
{
	vector <rui32_t> args;
}V_U32ARGS_T;

typedef struct utrz_evt
{
	rui32_t id;
	V_U32ARGS_T va;
}UTRZ_EVT_ST;


typedef struct utrz_arg_t
{
	rui8_t	ignored;
	rui32_t	value;
}UTRZ_ARG_T;

typedef struct v_utrz_arg_t
{
	vector <utrz_arg_t> args;
}V_UTRZ_ARG_T;

typedef struct utrz_expect_evt
{
	unsigned int line;
	rui32_t id;
	V_UTRZ_ARG_T va;
}UTRZ_EXPECT_EVT;

extern UTRZ_EXPECT_EVT expected_evt;
extern int expect;

#define START_EXPECT()    expect = 1
#define END_EXPECT()      expect = 0

#define NEW_EXPECT_EVT(l,e)                 \
        {                                   \
            START_EXPECT();                 \
            expected_evt.va.args.clear();   \
            expected_evt.line = (l);        \
            expected_evt.id = (e);          \
        }

void utrz_init( char *ptext, rui32_t line );
void utrz_clean( char *ptext, rui32_t line );
void utrz_verify( char *ptext, rui32_t line );


void utrz_add_expect_any_args( rui32_t line, rui32_t e );

void utrz_add_expect( rui8_t nargs, ... );
void utrz_chk_expect( rui8_t id, rui8_t nargs, ... );

void utrz_ignore_arg( rui32_t line, rui32_t e, rui8_t ix );
void utrz_ignore_group( RKH_TG_T grp );
void utrz_ignore_evt( rui32_t e );

void utrz_insert( rui8_t id, rui8_t nargs, ... );
ri8_t utrz_check( rui8_t id, rui8_t nargs, ... );

void utrz_resp( RKH_TE_ID_T e, rui32_t line, const char *msg, int nargs, ... );

#define utrz_success()  				                \
            utrz_resp( RKH_TE_UT_SUCCESS, 0, "", 0, 0 )

#define utrz_fail( l, m, n, ... )                       \
            utrz_resp( RKH_TE_UT_FAIL, (l), m, n, __VA_ARGS__ )

#define utrzIgnArg_fail(l,e)                                    \
            utrz_fail( (l), "IgnoreArg called before "          \
                            "Expect on event ", 3,              \
                            "'", (e), "'." )

#define utrzVerify_fail(l,e)                                            \
            utrz_fail( (l), "Event '",  2,                              \
                            (e),                                        \
                            "' occurred less times than expected."       \
                    )

#define utrzEvtExpect_fail(l,r,e)                               \
            utrz_fail( (l), "Out of order Trace event.", 5,     \
                            " occurred: '", (r),                 \
                            "' expected: '", (e),               \
                            "'." )

#define utrz_ArgExpect_fail(l,e,at,x )                          \
            utrz_fail( (l), "Event '",   6,                              \
                       (e),                                              \
                       "' occurred with unexpected value for argument '", \
                       (at), "' expected value='", (x), "'." )

#define utrzMoreEvtThanExpect(l,e)                              \
            utrz_fail( (l), "Event '",   2,                     \
                       (e),                                     \
                       "' occurred more times than expected." )

#define RKH_TRC_CLEANUP()			utrz_clean()

#define UTRZEVT_ADD_OR_CHK_EXPECT( e, q, ... )	        \
        {                                               \
            if( expect )                                \
                utrz_add_expect( q, __VA_ARGS__ );      \
            else                                        \
                utrz_chk_expect( CTE(e)->id, q, __VA_ARGS__ );   \
        }

#define RKH_TRC_IS_FINAL_STATE(ao,state)	RKH_TE_SM_STATE,2,(ao),(state)
#define TEST_ASSERT_TRUE(x)					utrz_check(x)

#ifdef __cplusplus
}
#endif

#endif

