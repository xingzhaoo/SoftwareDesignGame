/*
 * Class USS_E_STATE_ACCESS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_862 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_1_862 [] = {0xFF01,915,861,0xFFFF};
static const EIF_TYPE_INDEX egt_2_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_3_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_862 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_862 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_6_862 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_7_862 [] = {0xFF01,220,0xFFFF};
static const EIF_TYPE_INDEX egt_8_862 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_9_862 [] = {0xFF01,890,0xFFFF};


static const struct desc_info desc_862[] = {
	{EIF_GENERIC(NULL), 12675, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_862), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_862), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x017F /*191*/), 9, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BB /*861*/), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_862), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_862), 14, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BB /*861*/), 15, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BB /*861*/), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_862), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_862), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_862), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_862), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_862), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BB /*861*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01AF /*215*/), 29, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x06BB /*861*/), 30, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_862), 12676, 0xFFFFFFFF},
};
void Init862(void)
{
	IDSC(desc_862, 0, 861);
	IDSC(desc_862 + 1, 1, 861);
	IDSC(desc_862 + 32, 358, 861);
}


#ifdef __cplusplus
}
#endif
