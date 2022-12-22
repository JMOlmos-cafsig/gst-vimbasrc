#ifndef __VIMBA_CODE_TO_PROPERTY_H__
#define __VIMBA_CODE_TO_PROPERTY_H__
#include "gstvimbasrc_status_code.h"
#include <glib.h>

#include <VimbaC/Include/VimbaC.h>
#include <VimbaC/Include/VmbCommonTypes.h>

GstVimbaSrcStatusCode vimba_code_to_property(VmbError_t vimba_error_code);

#endif // __VIMBA_CODE_TO_PROPERTY_H__
