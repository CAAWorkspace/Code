// COPYRIGHT DASSAULT SYSTEMES 2000
//====================================================================================
//
//  MRFGrooveSweepInputDescription
//  MRFGrooveSweepInputDescription
//    Implementation of interface CATIInputDescription for MRFGrooveSweepFeat 
//
//====================================================================================

#include "MRFGrooveSweepInputDescription.h"

#include "iostream.h"

CATImplementClass (MRFGrooveSweepInputDescription, DataExtension, CATIInputDescription, MRFGrooveSweepFeat);

// Tie the implementation to its interface by BOA
// ----------------------------------------------
CATImplementBOA(CATIInputDescription, MRFGrooveSweepInputDescription);

// To declare that MRFGrooveSweepFeat implements MRFGrooveSweep, insert 
// the following line in the interface dictionary:
//
// MRFGrooveSweepFeat  CATIInputDescription  libMRFFeaturesImpl


//-------------------------------------------------------------------------------------
MRFGrooveSweepInputDescription::MRFGrooveSweepInputDescription():CATIniInputDescriptionAdaptor()
{
}

//-------------------------------------------------------------------------------------
MRFGrooveSweepInputDescription::~MRFGrooveSweepInputDescription()
{
}

//-------------------------------------------------------------------------------------
HRESULT MRFGrooveSweepInputDescription::GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ListOfModifiedFeatures) 
{    
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFGrooveSweepInputDescription::GetMainInput(CATBaseUnknown_var& oMainInput) 
{
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFGrooveSweepInputDescription::GetFeatureType(CATIInputDescription::FeatureType& oFeature_type)
{

  oFeature_type = CATIInputDescription::FeatureType_Creation ;
  return S_OK;
}


