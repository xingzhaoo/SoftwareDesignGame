/*
 * Code for class USS_E_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F891_7179(EIF_REFERENCE);
extern EIF_TYPED_VALUE F891_7180(EIF_REFERENCE);
extern EIF_TYPED_VALUE F891_7181(EIF_REFERENCE);
extern void F891_7182(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F891_7618(EIF_REFERENCE, int);
extern void EIF_Minit891(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {USS_E_STATE}.make */
void F891_7179 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 0, 12840);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(890, Current, 12840);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 5088, 0xF80000DC, 0); /* state */
	tr1 = RTMS_EX_H("GREEN",5,1380816718);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5088, Dtype(Current))) = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_E_STATE}.the_singleton */
RTOID (F891_7180)
EIF_TYPED_VALUE F891_7180 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "the_singleton";
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F891_7180);

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 0, 12841);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(890, Current, 12841);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000379, 0,0); /* Result */
	Result = (EIF_REFERENCE) RTCCL(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef Result
}

/* {USS_E_STATE}.state */
EIF_TYPED_VALUE F891_7181 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5088,Dtype(Current)));
	return r;
}


/* {USS_E_STATE}.update */
void F891_7182 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLR(4,tr3);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 890, Current, 0, 1, 12843);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(890, Current, 12843);
	RTCC(arg1, 890, l_feature_name, 1, eif_new_type(887, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("non_void_s", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCK;
		RTHOOK(2);
		RTCT("is_uss_e", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5082, "name", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE(RTEQ(tr1, RTMS_EX_H("-E-",3,2966829)), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\01';
	tb2 = '\01';
	ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5069, "energy", arg1));
	if (!(EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L))) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5068, "torpedoes", arg1));
		tb2 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
	}
	if (!tb2) {
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5070, "shields", arg1));
		tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5088, 0xF80000DC, 0); /* state */
		tr1 = RTMS_EX_H("DEAD",4,1145389380);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5069, "energy", arg1));
		if (!(EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 600L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5068, "torpedoes", arg1));
			tb2 = (EIF_BOOLEAN) (ti4_1 < ((EIF_INTEGER_32) 3L));
		}
		if (!tb2) {
			ti4_1 = *(EIF_INTEGER_32 *)(arg1 + RTVA(5070, "shields", arg1));
			tb1 = (EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 500L));
		}
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 5088, 0xF80000DC, 0); /* state */
			tr1 = RTMS_EX_H("RED",3,5391684);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(7);
			RTDBGAA(Current, dtype, 5088, 0xF80000DC, 0); /* state */
			tr1 = RTMS_EX_H("GREEN",5,1380816718);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(5088, dtype)) = (EIF_REFERENCE) tr1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("correct_state", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5071, "condition", arg1))(arg1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(8,1);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4969, "state", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(tr1, tr3)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef up2
#undef arg1
}

/* {USS_E_STATE}._invariant */
void F891_7618 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTLD;
	RTDA;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTEAINV(l_feature_name, 890, Current, 0, 7617);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("condition_correct", Current);
	tb1 = '\01';
	tb2 = '\01';
	tr1 = RTLN(eif_new_type(220, 0x01).id);
	tr2 = RTMS_EX_H("GREEN",5,1380816718);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTEQ(tr1, tr2)) {
		tr1 = RTLN(eif_new_type(220, 0x01).id);
		tr2 = RTMS_EX_H("RED",3,5391684);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb2 = RTEQ(tr1, tr2);
	}
	if (!tb2) {
		tr1 = RTLN(eif_new_type(220, 0x01).id);
		tr2 = RTMS_EX_H("DEAD",4,1145389380);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5088, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tb1 = RTEQ(tr1, tr2);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLO(2);
	RTMD(0);
	RTLE;
	RTEE;
#undef up1
#undef ur1
}

void EIF_Minit891 (void)
{
	GTCX
	RTOTS (7180,F891_7180)
}


#ifdef __cplusplus
}
#endif
