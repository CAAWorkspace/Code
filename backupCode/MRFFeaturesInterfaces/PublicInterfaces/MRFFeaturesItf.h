//#ifdef _WINDOWS_SOURCE
//#ifdef __MRFFeaturesItf
//#define ExportedByMRFFeaturesItf __declspec(dllexport)
//#else
//#define ExportedByMRFFeaturesItf __declspec(dllimport)
//#endif
//#else
//#define ExportedByMRFFeatures
//#endif
#include "DSYExport.h"

#ifndef ExportedByMRFFeaturesItf_H
#define ExportedByMRFFeaturesItf_H
#if defined(__MRFFeaturesItf)
# define ExportedByMRFFeaturesItf   DSYExport
#else // __MRFFeatures
#define ExportedByMRFFeaturesItf   DSYImport
#endif  // __MRFFeatures
//#include "DSYExport.h"
#endif //ExportedByMRFFeatures_H