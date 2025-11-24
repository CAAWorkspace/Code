// COPYRIGHT DASSAULT SYSTEMES 2000
//====================================================================================
//
//  MRFPointVentInputDescription
//  MRFPointVentInputDescription
//    Implementation of interface CATIInputDescription for MRFPointVentFeat 
//
//====================================================================================

#include "MRFPointVentInputDescription.h"

#include "iostream.h"

CATImplementClass (MRFPointVentInputDescription, DataExtension, CATIInputDescription, MRFPointVentFeat);

// Tie the implementation to its interface by BOA
// ----------------------------------------------
CATImplementBOA(CATIInputDescription, MRFPointVentInputDescription);

// To declare that MRFPointVentFeat implements MRFPointVent, insert 
// the following line in the interface dictionary:
//
// MRFPointVentFeat  CATIInputDescription  libMRFFeaturesImpl


//-------------------------------------------------------------------------------------
MRFPointVentInputDescription::MRFPointVentInputDescription():CATIniInputDescriptionAdaptor()
{
}

//-------------------------------------------------------------------------------------
MRFPointVentInputDescription::~MRFPointVentInputDescription()
{
}

//-------------------------------------------------------------------------------------
HRESULT MRFPointVentInputDescription::GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ListOfModifiedFeatures) 
{    
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFPointVentInputDescription::GetMainInput(CATBaseUnknown_var& oMainInput) 
{
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFPointVentInputDescription::GetFeatureType(CATIInputDescription::FeatureType& oFeature_type)
{

  oFeature_type = CATIInputDescription::FeatureType_Creation ;
  return S_OK;
}


