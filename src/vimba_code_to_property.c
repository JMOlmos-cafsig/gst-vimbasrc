#include "vimba_code_to_property.h"



GstVimbaSrcStatusCode vimba_code_to_property(VmbError_t vimba_error_code)
{
   switch (vimba_error_code)
   {
   case VmbErrorSuccess:
      return GST_VIMBA_SRC_STATUS_CODE_OK;
   case VmbErrorInternalFault:
      return GST_VIMBA_SRC_STATUS_CODE_UNKNOWN;
   case VmbErrorApiNotStarted:
      return GST_VIMBA_SRC_STATUS_CODE_NOT_INITIALISED;
   case VmbErrorNotFound:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorBadHandle:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorDeviceNotOpen:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorInvalidAccess:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorBadParameter:
      return GST_VIMBA_SRC_STATUS_CODE_INVALID_PARAM;
   case VmbErrorStructSize:
      return GST_VIMBA_SRC_STATUS_CODE_VIMBA_INSTALLATION_ERROR;
   case VmbErrorMoreData:
      return GST_VIMBA_SRC_STATUS_CODE_MEMORY_OVERFLOW;
   case VmbErrorWrongType:
      return GST_VIMBA_SRC_STATUS_CODE_INVALID_PARAM;
   case VmbErrorInvalidValue:
      return GST_VIMBA_SRC_STATUS_CODE_INVALID_PARAM;
   case VmbErrorTimeout:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorOther:
      return GST_VIMBA_SRC_STATUS_CODE_UNKNOWN;
   case VmbErrorResources:
      return GST_VIMBA_SRC_STATUS_CODE_CAMERA_NOT_FOUND;
   case VmbErrorInvalidCall:
      return GST_VIMBA_SRC_STATUS_CODE_UNKNOWN;
   case VmbErrorNoTL:
      return GST_VIMBA_SRC_STATUS_CODE_DRIVER_ERROR;
   case VmbErrorNotImplemented:
      return GST_VIMBA_SRC_STATUS_CODE_DRIVER_ERROR;
   case VmbErrorNotSupported:
      return GST_VIMBA_SRC_STATUS_CODE_DRIVER_ERROR;
   default:
      return GST_VIMBA_SRC_STATUS_CODE_UNKNOWN;
   }
   

}
