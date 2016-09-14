/*
 * Code for class USS_ENTERPRISE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F888_7157(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F888_7158(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7159(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7160(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7161(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7162(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7163(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7164(EIF_REFERENCE);
extern void F888_7165(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F888_7166(EIF_REFERENCE);
extern void F888_7167(EIF_REFERENCE);
extern void F888_7168(EIF_REFERENCE);
extern void F888_7169(EIF_REFERENCE);
extern void F888_7170(EIF_REFERENCE);
extern void F888_7171(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7172(EIF_REFERENCE);
extern EIF_TYPED_VALUE F888_7173(EIF_REFERENCE);
extern void F888_7615(EIF_REFERENCE, int);
extern void EIF_Minit888(void);

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

/* {USS_ENTERPRISE}.make */
void F888_7157 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
	struct eif_ex_861 sloc1;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) sloc1.data;
#define arg1 arg1x.it_i4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	memset (&sloc1.overhead, 0, OVERHEAD + 0);
	sloc1.overhead.ov_flags = EO_EXP | EO_STACK;
	RT_DFS(&sloc1.overhead, eif_new_type(861, 0x00).id);
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,ur1);
	RTLR(4,loc1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 887, Current, 1, 1, 12830);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12830);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_id_in_range", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5062, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	wstdinit(loc1,loc1);
	RTLXI(loc1);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5082, 0xF80000DC, 0); /* name */
	tr1 = RTLNSMART(RTWCT(5082, dtype, Dftype(Current)).id);
	tr2 = RTMS_EX_H("-E-",3,2966829);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5082, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5081, 0x10000000, 1); /* id */
	*(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype)) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 5068, 0x10000000, 1); /* torpedoes */
	*(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
	RTHOOK(5);
	RTDBGAA(Current, dtype, 5069, 0x10000000, 1); /* energy */
	*(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2000L);
	RTHOOK(6);
	RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
	*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1000L);
	RTHOOK(7);
	RTDBGAA(Current, dtype, 5071, 0xF800036B, 0); /* condition */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4922, "uss_e_state", loc1))(loc1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(5071, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(8);
	RTDBGAA(Current, dtype, 5072, 0x04000000, 1); /* alive */
	*(EIF_BOOLEAN *)(Current + RTWA(5072, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("name_correct", EX_POST);
		tr1 = RTLN(eif_new_type(220, 0x01).id);
		tr2 = RTMS_EX_H("-E-",3,2966829);
		ur1 = tr2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(9,1);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5082, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		if (RTEQ(tr1, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("id_correct", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("is_alive", EX_POST);
		tb1 = *(EIF_BOOLEAN *)(Current + RTWA(5072, dtype));
		if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) 1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef up1
#undef ur1
#undef arg1
}

/* {USS_ENTERPRISE}.name */
EIF_TYPED_VALUE F888_7158 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5082,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.id */
EIF_TYPED_VALUE F888_7159 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5081,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.torpedoes */
EIF_TYPED_VALUE F888_7160 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5068,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.energy */
EIF_TYPED_VALUE F888_7161 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5069,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.shields */
EIF_TYPED_VALUE F888_7162 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.condition */
EIF_TYPED_VALUE F888_7163 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5071,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.alive */
EIF_TYPED_VALUE F888_7164 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(5072,Dtype(Current)));
	return r;
}


/* {USS_ENTERPRISE}.set_id */
void F888_7165 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_id";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 1, 12820);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12820);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("index_positive", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5062, dtype))(Current)).it_i4);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 <= ti4_1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5081, 0x10000000, 1); /* id */
	*(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("id_assigned", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {USS_ENTERPRISE}.condition_check */
void F888_7166 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "condition_check";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12821);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12821);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("condution_non_void", EX_PRE);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTTE((EIF_BOOLEAN)(tr1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	ur1 = RTCCL(Current);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4970, "update", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef ur1
}

/* {USS_ENTERPRISE}.move */
void F888_7167 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "move";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12822);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12822);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5069, 0x10000000, 1); /* energy */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype))) -= ((EIF_INTEGER_32) 50L);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("energy_correct", EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 50L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_ENTERPRISE}.crash */
void F888_7168 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "crash";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12823);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12823);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
	if ((EIF_BOOLEAN) (ti4_4 < ((EIF_INTEGER_32) 500L))) {
		RTHOOK(2);
		RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
		*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype))) -= ((EIF_INTEGER_32) 500L);
	}
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("enough_shields", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTCO(tr1);
		RTCO(tr2);
		if ((!((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 500L)))) || ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 500L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("less_shields", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTCO(tr3);
		if ((!((EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) (ti4_3 <= ((EIF_INTEGER_32) 500L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_ENTERPRISE}.attack */
void F888_7169 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "attack";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12824);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12824);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("torpedo_not_out", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5068, 0x10000000, 1); /* torpedoes */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype)))--;
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT(NULL, EX_POST);
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_ENTERPRISE}.hit */
void F888_7170 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hit";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12825);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12825);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("shields_valid", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTTE((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
	if ((EIF_BOOLEAN) (ti4_4 < ((EIF_INTEGER_32) 100L))) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
		*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype)) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	} else {
		RTHOOK(4);
		RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
		(*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype))) -= ((EIF_INTEGER_32) 100L);
	}
	RTHOOK(5);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("enough_h_shields", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTCO(tr1);
		RTCO(tr2);
		if ((!((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 100L)))) || ((EIF_BOOLEAN) (ti4_2 >= ((EIF_INTEGER_32) 100L))))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("less_h_shields", EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTCO(tr3);
		if ((!((EIF_BOOLEAN)(ti4_4 == ((EIF_INTEGER_32) 0L))) || ((EIF_BOOLEAN) (ti4_3 <= ((EIF_INTEGER_32) 100L))))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_ENTERPRISE}.get_point */
void F888_7171 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "get_point";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_INTEGER_32 ti4_4;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12826);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12826);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		RTE_OT
		ti4_3 = *(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype));
		ti4_2 = ti4_3;
		tr2 = NULL;
		RTE_O
		tr2 = RTLA;
		RTE_OE
		RTE_OT
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		ti4_3 = ti4_4;
		tr3 = NULL;
		RTE_O
		tr3 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	RTDBGAA(Current, dtype, 5068, 0x10000000, 1); /* torpedoes */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype)))++;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5069, 0x10000000, 1); /* energy */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype))) += ((EIF_INTEGER_32) 100L);
	RTHOOK(3);
	RTDBGAA(Current, dtype, 5070, 0x10000000, 1); /* shields */
	(*(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype))) += ((EIF_INTEGER_32) 100L);
	RTHOOK(4);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT(NULL, EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT(NULL, EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype));
		RTCO(tr2);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 100L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT(NULL, EX_POST);
		ti4_4 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
		RTCO(tr3);
		if ((EIF_BOOLEAN)(ti4_4 == (EIF_INTEGER_32) (ti4_3 + ((EIF_INTEGER_32) 100L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
}

/* {USS_ENTERPRISE}.is_alive */
EIF_TYPED_VALUE F888_7172 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_alive";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12827);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12827);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5080, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (!RTEQ(tr1, RTMS_EX_H("DEAD",4,1145389380))) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("alive_check", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4969, "state", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if ((EIF_BOOLEAN)(Result == !RTEQ(tr2, RTMS_EX_H("DEAD",4,1145389380)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef up2
}

/* {USS_ENTERPRISE}.condition_status */
EIF_TYPED_VALUE F888_7173 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "condition_status";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 887, Current, 0, 0, 12828);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(887, Current, 12828);
	RTIV(Current, RTAL);
	RTHOOK(1);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5073, dtype))(Current);
	RTHOOK(2);
	RTDBGAL(Current, 0, 0xF80000DC, 0,0); /* Result */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4969, "state", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	Result = (EIF_REFERENCE) RTCCL(tr2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("correct_condition", EX_POST);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4969, "state", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		if (RTCEQ(Result, tr2)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
}

/* {USS_ENTERPRISE}._invariant */
void F888_7615 (EIF_REFERENCE Current, int where)
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
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
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
	RTEAINV(l_feature_name, 887, Current, 0, 7614);
	RTSA(dtype);
	RTME(dtype, 0);
	RTIT("name_correct", Current);
	tr1 = RTLN(eif_new_type(220, 0x01).id);
	tr2 = RTMS_EX_H("-E-",3,2966829);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4438, Dtype(tr1)))(tr1, ur1x);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5082, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if (RTEQ(tr1, tr2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("id_in_range", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype));
	ti4_2 = *(EIF_INTEGER_32 *)(Current + RTWA(5081, dtype));
	ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5062, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (ti4_2 <= ti4_3))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("non_void_condition", Current);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5071, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("energy_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5069, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("torpedoes_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5068, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("shields_positive", Current);
	ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(5070, dtype));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
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

void EIF_Minit888 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
