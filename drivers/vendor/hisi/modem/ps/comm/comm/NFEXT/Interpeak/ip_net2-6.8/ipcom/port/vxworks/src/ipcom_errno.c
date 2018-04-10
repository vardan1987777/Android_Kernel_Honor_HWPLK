/*
 ******************************************************************************
 *                     SOURCE FILE
 *
 *     Document no: @(#) $Name: VXWORKS_ITER18A_FRZ10 $ $RCSfile: ipcom_errno.c,v $ $Revision: 1.5 $
 *     $Source: /home/interpeak/CVSRoot/ipcom/port/vxworks/src/ipcom_errno.c,v $
 *     $Author: lob $ $Date: 2004-05-04 12:02:18 $
 *     $State: Exp $ $Locker:  $
 *
 *     INTERPEAK_COPYRIGHT_STRING
 *        Design and implementation by Lennart Bang <lob@interpeak.se>
 ******************************************************************************
 */

/*
 ****************************************************************************
 * 1                    DESCRIPTION
 ****************************************************************************
 *
 */

/*
 ****************************************************************************
 * 2                    CONFIGURATION
 ****************************************************************************
 */

#include "ipcom_config.h"


/*
 ****************************************************************************
 * 3                    INCLUDE FILES
 ****************************************************************************
 */

#include "ipcom_type.h"
#include "ipcom_cstyle.h"

#include <vxWorks.h>
#include <errno.h>


/*
 ****************************************************************************
 * 4                    EXTERN PROTOTYPES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 5                    DEFINES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 6                    TYPES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 7                    LOCAL PROTOTYPES
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 8                    DATA
 ****************************************************************************
 */

/*
 ****************************************************************************
 * 9                    FUNCTIONS
 ****************************************************************************
 */

/*
 *===========================================================================
 *                    ipcom_errno_set
 *===========================================================================
 * Description:
 * Parameters:
 * Returns:
 *
 */
IP_PUBLIC int
ipcom_errno_set(int errcode)
{
    errno = errcode;
    return -1;
}


/*
 *===========================================================================
 *                    ipcom_errno_get
 *===========================================================================
 * Description:
 * Parameters:
 * Returns:
 *
 */
IP_PUBLIC int *
ipcom_errno_get(void)
{
    return &errno;
}


/*
 ****************************************************************************
 *                      END OF FILE
 ****************************************************************************
 */


