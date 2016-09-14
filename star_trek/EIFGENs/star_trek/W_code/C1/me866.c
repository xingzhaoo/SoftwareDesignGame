/*
 * Code for class MESSAGE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F866_6996(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_6997(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_6998(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_6999(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7000(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7001(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7002(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7003(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7004(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7005(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7006(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7007(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7008(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7009(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7010(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7011(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7012(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7013(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7014(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7015(EIF_REFERENCE);
extern void EIF_Minit866(void);

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

/* {MESSAGE}.greeting */
RTOID (F866_6996)


EIF_TYPED_VALUE F866_6996 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_6996,12692,RTMS_EX_H("\012 Welcome to USS Enterprise, Captain!\012 Your fleet is ready to commence.\012",72,1142643210));
}

/* {MESSAGE}.luck_intro */
RTOID (F866_6997)


EIF_TYPED_VALUE F866_6997 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_6997,12693,RTMS_EX_H(" Upon you move, you may pick up some\012  supply left by our Allies.\012",66,1000714));
}

/* {MESSAGE}.attack_warning */
RTOID (F866_6998)


EIF_TYPED_VALUE F866_6998 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_6998,12694,RTMS_EX_H(" Your attack will expose your position\012  and attract attacks from klingons on\012  your row and column.\012\012",102,977009418));
}

/* {MESSAGE}.command */
RTOID (F866_6999)


EIF_TYPED_VALUE F866_6999 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_6999,12695,RTMS_EX_H(" command: ",10,517387808));
}

/* {MESSAGE}.restart */
RTOID (F866_7000)


EIF_TYPED_VALUE F866_7000 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7000,12696,RTMS_EX_H(" To restart the game, enter \'s\'. Or enter \'q\' to quit.\012",55,1699380234));
}

/* {MESSAGE}.menu */
RTOID (F866_7001)


EIF_TYPED_VALUE F866_7001 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7001,12697,RTMS_EX_H(" [l-left  r-right  u-up  d-down  al-attack left \012 ar-attack right au-attack up  ad-attack down  q-quit]\012",104,1803891722));
}

/* {MESSAGE}.edge */
RTOID (F866_7002)


EIF_TYPED_VALUE F866_7002 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7002,12698,RTMS_EX_H(" You have reached to the edge, choice another direction.\012",57,1811562506));
}

/* {MESSAGE}.point */
RTOID (F866_7003)


EIF_TYPED_VALUE F866_7003 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7003,12699,RTMS_EX_H(" torpedo+1, energy+100, shields+100.\012",37,1975581962));
}

/* {MESSAGE}.gain_point */
RTOID (F866_7004)


EIF_TYPED_VALUE F866_7004 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7004,12700,RTMS_EX_H(" Destoried one klingon fleet.\012 torpedo+1, energy+100, shields+100.\012",67,1500381194));
}

/* {MESSAGE}.miss */
RTOID (F866_7005)


EIF_TYPED_VALUE F866_7005 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7005,12701,RTMS_EX_H(" No klingons on your attacked direction.\012",41,2135180042));
}

/* {MESSAGE}.victory */
RTOID (F866_7006)


EIF_TYPED_VALUE F866_7006 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7006,12682,RTMS_EX_H(" VICTORY!\012 Congratulations, Captain! You destoried all invaders.\012 Enter any key to start a new mission.\012",104,728248586));
}

/* {MESSAGE}.lose */
RTOID (F866_7007)


EIF_TYPED_VALUE F866_7007 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7007,12683,RTMS_EX_H(" USS Enterprise condition is DEAD.\012 Mission failed!\012",52,1950497034));
}

/* {MESSAGE}.quit */
RTOID (F866_7008)


EIF_TYPED_VALUE F866_7008 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7008,12684,RTMS_EX_H(" Mission Aborted!\012",18,1503983114));
}

/* {MESSAGE}.uss_e_err */
RTOID (F866_7009)


EIF_TYPED_VALUE F866_7009 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7009,12685,RTMS_EX_H("ERR: USS_ENTERPRICE not loaded yet",34,159789172));
}

/* {MESSAGE}.uss_e_move_err */
RTOID (F866_7010)


EIF_TYPED_VALUE F866_7010 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7010,12686,RTMS_EX_H("ERR: USS_ENTERPRICE not loaded yet",34,159789172));
}

/* {MESSAGE}.move */
RTOID (F866_7011)


EIF_TYPED_VALUE F866_7011 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7011,12687,RTMS_EX_H(" Message: move costs 50 energy\012",31,649006602));
}

/* {MESSAGE}.crash */
RTOID (F866_7012)


EIF_TYPED_VALUE F866_7012 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7012,12688,RTMS_EX_H(" Warning: crashed into a Klingon fleet, -500 shields!\012",54,1821720586));
}

/* {MESSAGE}.red_help */
RTOID (F866_7013)


EIF_TYPED_VALUE F866_7013 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7013,12689,RTMS_EX_H(" Warning!\012 USS Enterprice is in RED condition.\012 Enter \'h\' to call for ammunition\012 Or enter any key to pass.\012",108,352902922));
}

/* {MESSAGE}.red_call */
RTOID (F866_7014)


EIF_TYPED_VALUE F866_7014 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7014,12690,RTMS_EX_H(" Ammunition is arrived!\012 torpedo+1, energy+100, shields+100.\012",61,1486958602));
}

/* {MESSAGE}.luck */
RTOID (F866_7015)


EIF_TYPED_VALUE F866_7015 (EIF_REFERENCE Current)
{
	GTCX
	RTOTC (F866_7015,12691,RTMS_EX_H(" Congratulations!\012 You just picked up some supply left by our Allies.\012 torpedo+1, energy+100, shields+100.\012",107,1412987914));
}

void EIF_Minit866 (void)
{
	GTCX
	RTOTS (6996,F866_6996)
	RTOTS (6997,F866_6997)
	RTOTS (6998,F866_6998)
	RTOTS (6999,F866_6999)
	RTOTS (7000,F866_7000)
	RTOTS (7001,F866_7001)
	RTOTS (7002,F866_7002)
	RTOTS (7003,F866_7003)
	RTOTS (7004,F866_7004)
	RTOTS (7005,F866_7005)
	RTOTS (7006,F866_7006)
	RTOTS (7007,F866_7007)
	RTOTS (7008,F866_7008)
	RTOTS (7009,F866_7009)
	RTOTS (7010,F866_7010)
	RTOTS (7011,F866_7011)
	RTOTS (7012,F866_7012)
	RTOTS (7013,F866_7013)
	RTOTS (7014,F866_7014)
	RTOTS (7015,F866_7015)
}


#ifdef __cplusplus
}
#endif
