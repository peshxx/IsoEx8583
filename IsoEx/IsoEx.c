#include <stdio.h>
#include <string.h>
#include "IsoEx.h"
/************************************************************************
创建:	董毅	2001.10.24
目的:	解决不同银行ISO定义不同的问题.
************************************************************************/

/***********************************************************************/
/************以下代码由 ExportIso 函数用以前旧结构自动生成.*************/
/***********************************************************************/
static IsoTabEx IsoBocEx87[] = {
	{ 64 ,	ISOLFIX | ISODBCD | ISOF0  | ISOLJUST	},
	{ 19 ,	ISOLV2  | ISODBCD | ISOF0  | ISOLJUST	},
	{  6 ,	ISOLFIX | ISODBCD | ISOF0  | ISOLJUST	},
	{ 12 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[  5]  */
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 10]  */
	{  6 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 15]  */
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 20]  */
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  2 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	}, /*  Field[ 25]  */
	{  2 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  1 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	}, /*  Field[ 30]  */
	{  8 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	},
	{ 11 ,	ISOLV2  | ISODBCD | ISOF0  | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 37 ,	ISOLV2  | ISODBCD | ISOFSP | ISOLJUST	}, /*  Field[ 35]  */
	{104 ,	ISOLV3  | ISODBCD | ISOFSP | ISOLJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  2 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 40]  */
	{  8 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 15 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 40 ,	ISOLFIX | ISODASC | ISOF0  | ISOLJUST	},
	{ 25 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 76 ,	ISOLV2  | ISODBCD | ISOF0  | ISOLJUST	}, /*  Field[ 45]  */
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 50]  */
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{120 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 55]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOF0  | ISOLJUST	}, /*  Field[ 60]  */
	{999 ,	ISOLV3  | ISODASC | ISOF0  | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOF0  | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOF0  | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	}, /*  Field[ 65]  */
	{  1 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  2 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 70]  */
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 75]  */
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 80]  */
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 85]  */
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 42 ,	ISOLFIX | ISODASC | ISOF0  | ISOLJUST	}, /*  Field[ 90]  */
	{  1 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  2 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  5 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  7 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 42 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 95]  */
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 16 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	},
	{ 25 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	}, /*  Field[100]  */
	{ 17 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{100 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[105]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[110]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[115]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[120]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[125]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	}
};
/*******************ExportIso 函数导出文件完毕**************************/

/***********************************************************************/
/************以下代码由 ExportIso 函数用以前旧结构自动生成.*************/
/***********************************************************************/
static IsoTabEx IsoBocEx93[] = {
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 19 ,	ISOLV2  | ISODASC | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISOLJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[  5]  */
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  8 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 10]  */
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 15]  */
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 20]  */
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 25]  */
	{  2 ,	ISOLFIX | ISODBCD | ISOF0  | ISORJUST	},
	{  1 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 24 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 30]  */
	{ 99 ,	ISOLV2  | ISODASC | ISOF0  | ISORJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 37 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 35]  */
	{104 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 40]  */
	{  8 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 15 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 99 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 99 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 76 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 45]  */
	{204 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 50]  */
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 48 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{120 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{ 48 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	}, /*  Field[ 55]  */
	{ 35 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 60]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	}, /*  Field[ 65]  */
	{  1 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  2 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 70]  */
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  4 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{  6 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 75]  */
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 80]  */
	{ 10 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 12 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	}, /*  Field[ 85]  */
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 16 ,	ISOLFIX | ISODASC | ISOF0  | ISORJUST	},
	{ 42 ,	ISOLFIX | ISODASC | ISOF0  | ISOLJUST	}, /*  Field[ 90]  */
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{  3 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 42 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[ 95]  */
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	},
	{ 16 ,	ISOLFIX | ISODC_D | ISOF0  | ISORJUST	},
	{ 25 ,	ISOLFIX | ISODASC | ISOFSP | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	},
	{ 11 ,	ISOLV2  | ISODASC | ISOF0  | ISOLJUST	}, /*  Field[100]  */
	{ 17 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{ 28 ,	ISOLV2  | ISODASC | ISOFSP | ISOLJUST	},
	{100 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[105]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[110]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[115]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[120]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	}, /*  Field[125]  */
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{999 ,	ISOLV3  | ISODASC | ISOFSP | ISOLJUST	},
	{ 64 ,	ISOLFIX | ISODBIN | ISOF0  | ISOLJUST	}
};
/*******************ExportIso 函数导出文件完毕**************************/

int InitIsoEx(IsoEx *Iso, int MsgType, int BitType,
			int VarType, IsoTabEx *DefIso)
{
int i;

	if( Iso == (IsoEx *)NULL ) return -1;

	for (i = 0; i < 128; i++) Iso->f[i].bitf = 0;

	Iso->off = 0;
	Iso->msgtype = MsgType;
	Iso->bittype = BitType;
	Iso->vartype = MsgType;
	Iso->deftab  = DefIso;
	return 0;
}

int Str2IsoEx( IsoEx *Iso, unsigned char *dStr, int inLen )
{
unsigned char len_type, dat_type;
unsigned char *pBegin,*pData,*pEnd;
IsoTabEx *IsoDef;
unsigned char sBitBcd[17], sBitAsc[33];
int i, j, k, bit, BitNum, off, fLen;
	
	for (i = 0; i < 128; i++) Iso->f[i].bitf = 0;

	if ( inLen < MIN_ISO_LEN ) return -1;

	pBegin = dStr;
	pEnd = dStr + inLen;

	if ( Iso->msgtype == ASCMSG ) {
		memcpy(Iso->msgid, pBegin , 4);
		pBegin += 4;
	}
	else {	/*默认BCD类型的报文类型*/
		Iso->msgid[0] = (pBegin[0] >> 4) + '0';
		Iso->msgid[1] = (pBegin[0] & 0x0F) + '0';
		Iso->msgid[2] = (pBegin[1] >> 4) + '0';
		Iso->msgid[3] = (pBegin[1] & 0x0F) + '0';
		pBegin += 2;
	} 

	Iso->msgid[4] = 0;

	if ( Iso->deftab != NULL ) IsoDef = Iso->deftab;
	else {
		if ( Iso->msgid[0] == '1') IsoDef = IsoBocEx93;
		else IsoDef = IsoBocEx87;
	}

	BitNum = 8;	/*默认位图8位*/
	memset( sBitBcd, 0 , sizeof( sBitBcd ) );
	memset( sBitAsc, 0 , sizeof( sBitAsc ) );
	if ( Iso->bittype == ASCBIT ) {

		Asc2Bcd( sBitBcd, pBegin , 2 , 0);
		if ( sBitBcd[0] & 0x80 ) BitNum = 16;

		pData = pBegin + BitNum * 2;
		memcpy ( sBitAsc, pBegin , BitNum * 2 );
		Asc2Bcd( sBitBcd, sBitAsc, BitNum * 2 , 0);
	}
	else {	/* 默认BCD位图*/
		if ( pBegin[0] & 0x80 ) BitNum = 16;

		pData = pBegin + BitNum;
		memcpy( sBitBcd, pBegin , BitNum);
	}

	if ( pData > pEnd ) return -1;

	off = 0;

	for (i = 0; i < BitNum; i++) {
	for (j = 7; j >= 0; j--) {

		if ( (sBitBcd[i] & (1 << j)) == 0) continue;
		bit = (i + 1) * 8 - j - 1;
		if (bit == 0) continue;

		len_type = ( IsoDef[bit].type >> 6   );
		dat_type = ( IsoDef[bit].type & 0x3F );

		if ( ( pData + len_type ) > pEnd) return -1;

		if ( len_type == 0 ) fLen = IsoDef[bit].len;
		else {
			fLen = 0;
			switch( Iso->vartype ) {
			case ASCVAR:
				if ( pData + len_type + 1 > pEnd) return -1;
				for (k = 0; k < len_type + 1; k++) {
					fLen = fLen * 10 + *pData - '0';
					pData++;
				}
				break;
			case HEXVAR:
				for (k = 0; k < len_type ; k++) {
					fLen = fLen * 256 + *pData;
					pData++;
				}
				break;
			case BCDVAR:
			default:
				for (k = 0; k < len_type ; k++) {
					fLen= fLen*100 + *pData - (*pData>>4)*6;
					pData++;
				}
				break;
			}
			if (fLen < 0) return -1;
			if (fLen > IsoDef[bit].len) return -1;
		} 

		Iso->f[bit].len = fLen;
		Iso->f[bit].off = off;

		switch( dat_type & ISO_DATA_MASK ) {
		case ISODBIN:
			/*二进制码BINARY数据,长度为 位长度/8*/
			fLen = (fLen + 7) / 8;
			break;
		case ISODBCD:
			/*二进制码BCD数据,长度为 BCD长度/2*/
			fLen = (fLen + 1) / 2;
			break;
		case ISODC_D:
			/*借记,贷记数据,定义时没有包括'C'或 'D'*/
			fLen = fLen + 1;
			break;
		default:
			/*默认为ASCII数据,长度为本身.*/
			break;
		}

		for ( k = 0; k < fLen; k++) {
			if ( (pData + 1) > pEnd ) return -1;
			if ( (off + 1) > MAX_ISO_DATA ) return -1;
			Iso->dbuf[off++] = *(pData++);
		}
		Iso->f[bit].bitf = 1;
	}
	}

	Iso->off = off;

	return 0;
}

int Iso2StrEx(IsoEx *Iso, unsigned char *dStr, int CanUseLen )
{
unsigned char len_type, dat_type, nBitMap;
unsigned char *pBegin, *pData, *pEnd;
unsigned char sBitBcd[17], sBitAsc[33];
IsoTabEx *IsoDef;
int i, j, k, nBitNo, BitNum, fLen;

	if ( CanUseLen < MIN_ISO_LEN ) return -1;

	pBegin = dStr;
	pEnd = dStr + CanUseLen;
	memset( sBitBcd , 0 , sizeof( sBitBcd ) );
	memset( sBitAsc , 0 , sizeof( sBitAsc ) );

	if ( Iso->msgtype == ASCMSG ) {
		memcpy(dStr, Iso->msgid, 4);
		dStr += 4;
	}
	else {		/*默认报文类型BCDMSG*/
		dStr[0] = ((Iso->msgid[0] - '0') << 4) + Iso->msgid[1] - '0';
		dStr[1] = ((Iso->msgid[2] - '0') << 4) + Iso->msgid[3] - '0';
		dStr += 2;
	}

	if ( Iso->deftab != NULL ) IsoDef = Iso->deftab;
	else {
		if (Iso->msgid[0] == '1') IsoDef = IsoBocEx93;
		else IsoDef = IsoBocEx87;
	}

	for ( i = 64, BitNum = 8; i < 127; i++) {
		if (Iso->f[i].bitf) {
			BitNum = 16;
			break;
		} 
	}

	if ( Iso->bittype == ASCBIT ){
		pData = dStr + BitNum * 2 ;
	}
	else {
		pData = dStr + BitNum ;
	}

	if (pData > pEnd ) return -1;

	for (i = 0; i < BitNum ; i++) {

		nBitMap = 0x00;
		for (j = 7; j >= 0; j--) {

			nBitNo = (i + 1) * 8 - j - 1;
			if (nBitNo == 0) continue;
			if (Iso->f[nBitNo].bitf == 0) continue;

			nBitMap |= (1 << j);

			fLen = Iso->f[nBitNo].len;

			len_type = (IsoDef[nBitNo].type >> 6);
			dat_type = IsoDef[nBitNo].type & 0x3F;

			if( pData + len_type > pEnd ) return -1;
			if( Iso->vartype == ASCVAR ) {
				if( pData + len_type + 1 > pEnd ) return -1;
			}
			switch ( len_type ) {
			case 2:
				if (Iso->vartype == ASCVAR) {
					*(pData++) = fLen / 100 + '0';
					*(pData++) = fLen % 100 / 10 + '0';
					*(pData++) = fLen % 10 + '0';
				} 
				else if (Iso->vartype == HEXVAR) {
					*(pData++) = fLen / 256;
					*(pData++) = fLen % 256;
				}
				else {
					*(pData++) = fLen / 100;
					*(pData++) = fLen%100/10*16 + fLen % 10;
				}
				break;
			case 1:
				if (Iso->vartype == ASCVAR) {
					*(pData++) = fLen / 10 + '0';
					*(pData++) = fLen % 10 + '0';
				}
				else if (Iso->vartype == HEXVAR) {
					*(pData++) = fLen;
				} else{
					*(pData++) = fLen / 10 * 16 + fLen % 10;
				}
				break;
			}

			switch( dat_type & ISO_DATA_MASK ) {
			case ISODBIN:
				/*二进制码BINARY数据,长度为 位长度/8*/
				fLen = (fLen + 7) / 8;
				break;
			case ISODBCD:
				/*二进制码BCD数据,长度为 BCD长度/2*/
				fLen = (fLen + 1) / 2;
				break;
			case ISODC_D:
				/*借记,贷记数据,定义时没有包括'C'或 'D'*/
				fLen = fLen + 1;
				break;
			default:
				/*默认为ASCII,EBCD数据,长度为本身.*/
				break;
			}

			for (k = 0; k < fLen; k++) {
				if ((pData + 1) > pEnd ) return -1;
				*(pData++) = Iso->dbuf[Iso->f[nBitNo].off + k];
			}
		}
		sBitBcd[i] = nBitMap;
	}

	if ((BitNum == 8) && (Iso->f[127].bitf)) {
		if ( pData + 8 > pEnd) return -1;
		memcpy(pData, Iso->dbuf + Iso->f[127].off, 8);
		sBitBcd[BitNum - 1] |= 0x01;
		pData += 8;
	}

	if (BitNum == 16) sBitBcd[0] |= 0x80;

	if ( Iso->bittype == ASCBIT ) {
		Bcd2Asc( sBitAsc, sBitBcd, BitNum * 2, 0);
		memcpy( dStr , sBitAsc,  BitNum * 2 );
	}
	else {
		memcpy( dStr , sBitBcd, BitNum);
	}
	return (int)(pData - pBegin);
}

/*如果对同一域反复多次打包,会造成打包失败.原因是:
 *每次打包Iso->off都加上该域的长度.
 */
int SetBitEx(IsoEx *Iso, int nBitNo, char *sData, int len)
{
int fLen,JustLen;
unsigned char len_type, dat_type;
unsigned char *pInData, *pData, Data[FIELD_MAX_SIZE];
IsoTabEx *IsoDef;

	if (len <= 0 ) return 0;

	pInData = (unsigned char *)sData;

	if (nBitNo == 0) {
		memcpy(Iso->msgid, pInData, 4);
		Iso->msgid[4] = 0;
		return 0;
	}

	nBitNo = nBitNo - 1;
	if ( nBitNo < 1 || nBitNo > 127 ) return 0;

	if (Iso->deftab != NULL ) IsoDef = Iso->deftab;
	else {
		if (Iso->msgid[0] == '1') IsoDef = IsoBocEx93;
		else IsoDef = IsoBocEx87;
	}

	len_type = (IsoDef[nBitNo].type >> 6);
	dat_type = IsoDef[nBitNo].type & 0x3F;

	/*处理长度*/
	fLen = len;
	if ( (dat_type & ISO_DATA_MASK) == ISODBIN )
	{
		fLen = fLen * 8;
	}
	switch (len_type & ISO_LEN_MASK) 
	{
	case ISO_LEN_FIX:
		fLen = IsoDef[nBitNo].len;
		break;
	default:
		if (fLen > IsoDef[nBitNo].len)
			fLen = IsoDef[nBitNo].len;
		break;
	}
		
	/*设置标识,长度,偏移.*/
	Iso->f[nBitNo].bitf = 1;
	Iso->f[nBitNo].len = fLen;
	Iso->f[nBitNo].off = Iso->off;
	pData = Iso->dbuf + Iso->off;

	/*特殊数据类型的长度处理*/
	switch( dat_type & ISO_DATA_MASK ){
	case ISODBIN:
		fLen = (fLen + 7) / 8;
		break;
	case ISODC_D:
		if ((Iso->off + 1) > MAX_ISO_DATA ) return -1;
		*(pData++) = *(pInData++);
		Iso->off++;
		break;
	}

	/*填充处理*/
	switch( dat_type & ISO_FIL_MASK ){
	case ISOFSP:
		memset(Data, 0x20, fLen);
		break;
	default:
		if( (dat_type & ISO_JUST_MASK) == ISORJUST )
			memset(Data, 0x30, fLen);
		else
			memset(Data, 0x00, fLen);
		break;
	}
	if( fLen > len )
		JustLen = fLen - len;
	else
		JustLen = 0;

	/*对齐处理*/
	switch( dat_type & ISO_JUST_MASK ){
	case ISORJUST:
		memcpy( Data + JustLen, pInData, len);
		break;
	case ISOLJUST:
	default:
		memcpy(Data, pInData, len);
		break;
	}

	switch( dat_type & ISO_DATA_MASK ){
	case ISODBCD:
		if ( (Iso->off + (fLen + 1) / 2) > MAX_ISO_DATA ) return -1;
		Asc2Bcd(pData, Data, fLen, (dat_type & ISO_JUST_MASK));
		Iso->off += (fLen + 1) / 2;
		break;
	case ISODEBC:
		if ((Iso->off + fLen) > MAX_ISO_DATA ) return -1;
		Asc2EBcd( (char *)pData, (char *)Data, fLen );
		Iso->off += fLen;
		break;
	default:
		if ((Iso->off + fLen) > MAX_ISO_DATA ) return -1;
		memcpy( pData, Data, fLen);
		Iso->off += fLen;
		break;
	}

	return 0;
}

int GetBitEx(IsoEx *Iso, int nBitNo, char *rData , int GetLen)
{
unsigned char *pOutData, *pData, dat_type;
IsoTabEx *IsoDef;
int realLen;

	pOutData = (unsigned char *)rData;

	if ( nBitNo == 0) {
		if( GetLen > 4 ) GetLen = 4;
		memcpy(pOutData, Iso->msgid, GetLen);
		pOutData[GetLen] = 0;
		return GetLen;
	}

	nBitNo = nBitNo - 1;
	if ( (nBitNo < 0 ) || (nBitNo > 127)) return 0;

	if (Iso->deftab ) IsoDef = Iso->deftab;
	else {
		if (Iso->msgid[0] == '1') IsoDef = IsoBocEx93;
		else IsoDef = IsoBocEx87;
	}

	if (Iso->f[nBitNo].bitf == 0) {
		if ( nBitNo != 127 ) return 0;
		if (Iso->f[63].bitf == 0) return 0;
		nBitNo = 63;
	}
	
	dat_type = IsoDef[nBitNo].type & 0x3F;
	realLen  = Iso->f[nBitNo].len;
	pData    = Iso->dbuf + Iso->f[nBitNo].off;

	/*特殊数据类型处理*/
	if (dat_type & ISODBIN ) realLen = (realLen + 7) / 8;
	if (dat_type & ISODC_D ) {
		*(pOutData++) = *(pData++);
	}

	if ( realLen > GetLen ) realLen = GetLen;

	if ( dat_type & ISODBCD )
		Bcd2Asc( pOutData, pData, realLen, dat_type & ISO_JUST_MASK);
	else if( dat_type & ISODEBC )
		EBcd2Asc( (char *)pOutData, (char *)pData, realLen );
	else
		memcpy(pOutData, pData, realLen);

	pOutData[realLen] = 0;
	return realLen;
}

int ExportIso( char *TabName, IsoTabEx *IsoDefEx)
{
int i;
unsigned char len_type,dat_type;
char *p,mFile[256];
FILE *fp;

	sprintf( mFile, "%s/log/%s", getenv("WORKDIR"), TabName );
	p = strchr( mFile , '.' );
	if( p == NULL ) strcat( mFile , ".c" );

	fp = fopen( mFile,"w+");
	if( fp == NULL ) return -1;

	fprintf(fp,"#include \"IsoEx.h\"\n\n");
	fprintf(fp,
"/***********************************************************************/\n");
	fprintf(fp,
"/************以下代码由 ExportIso 函数用以前旧结构自动生成.*************/\n");
	fprintf(fp,
"/***********************************************************************/\n");

	fprintf(fp,"IsoTabEx %s[] = {\n", TabName );

	for( i = 0; i < 128 ; i++ ){

		/*Print LEN*/
		fprintf(fp,"\t{%3d ,\t",IsoDefEx[i].len);

		len_type = (IsoDefEx[i].type >> 6);
		dat_type = IsoDefEx[i].type & 0x3F;

		/*Print LEN_TYPE*/
		switch (len_type & ISO_LEN_MASK)
		{
		case ISO_LEN_FIX:
			fprintf(fp,"ISOLFIX | ");
			break;
		case ISO_LEN_VAR2:
			fprintf(fp,"ISOLV2  | ");
			break;
		case ISO_LEN_VAR3:
			fprintf(fp,"ISOLV3  | ");
			break;
		}

		/*Print DATA_TYPE*/
		switch( dat_type & ISO_DATA_MASK ) {
		case ISODBCD:
			fprintf(fp,"ISODBCD | ");
			break;
		case ISODBIN:
			fprintf(fp,"ISODBIN | ");
			break;
		case ISODC_D:
			fprintf(fp,"ISODC_D | ");
			break;
		case ISODASC:
			fprintf(fp,"ISODASC | ");
			break;
		}

		/*Print FILL_TYPE*/
		switch( dat_type & ISO_FIL_MASK ){
		case ISOFSP:
			fprintf(fp,"ISOFSP | ");
			break;
		default:
			fprintf(fp,"ISOF0  | ");
			break;
		}

		/*Print JUSTIFY_TYPE*/
		switch( dat_type & ISO_JUST_MASK ){
		case ISORJUST:
			fprintf(fp,"ISORJUST\t");
			break;
		default:
			fprintf(fp,"ISOLJUST\t");
			break;
		}
		fprintf( fp , "}" );
		if( i != 127 )
			fprintf( fp , "," );
		if( ( (i+1) % 5 ) == 0 )
			fprintf( fp , " /*  Field[%3d]  */\n",i+1);
		else fprintf( fp ,"\n" );
	}
	fprintf( fp , "};\n");
	fprintf(fp,
"/*******************ExportIso 函数导出文件完毕**************************/\n");
	
	fclose( fp );
	return 0;
}

#ifdef __TEST__

int main()
{
int i,len;
char Buffer[10];
unsigned char IsoStr[2048];
int  IsoLen;
IsoEx Iso;

	LogInit( "hehe" );
	ExportIso( "IsoBocEx87", IsoBocEx87);
	ExportIso( "IsoBocEx93", IsoBocEx93);

	InitIsoEx( &Iso, 0, 0, 0, NULL);
	for( i = 0; i < 128; i++ ){
		memset( Buffer, 0, sizeof( Buffer ) );
		memset( Buffer, (i%10)+'0', sizeof( Buffer ) -1 );
		SetBitEx( &Iso, i, Buffer , strlen(Buffer) );
	}
	memset( IsoStr , 0 , sizeof( IsoStr ) );
	IsoLen = Iso2StrEx( &Iso, IsoStr , sizeof( IsoStr ) -1 );
	LogHex( "hehe", IsoStr, IsoLen );
	if( IsoLen <= 0 ) printf("Iso2StrEx Error\n");
	InitIsoEx( &Iso, 0, 0, 0, NULL );
	Str2IsoEx( &Iso, IsoStr, IsoLen);
	for( i = 0; i < 128; i++ ){
		memset( Buffer, 0, sizeof( Buffer ) );
		len = GetBitEx( &Iso, i, Buffer , sizeof(Buffer) -1 );
		printf("Field[%3d] Len[%3d] Data:[%s]\n",i,len,Buffer);
	}

return 0;
}
#endif
