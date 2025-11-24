// COPYRIGHT DASSAULT SYSTEMES 2000
//====================================================================================
//
//  MRFPointVentSetInputDescription
//  MRFPointVentSetInputDescription
//    Implementation of interface CATIInputDescription for MRFPointVentSetFeat 
//
//====================================================================================

#include "MRFPointVentSetInputDescription.h"

#include "iostream.h"

CATImplementClass (MRFPointVentSetInputDescription, DataExtension, CATIInputDescription, MRFPointVentSetFeat);

// Tie the implementation to its interface by BOA
// ----------------------------------------------
CATImplementBOA(CATIInputDescription, MRFPointVentSetInputDescription);

// To declare that MRFPointVentSetFeat implements MRFPointVentSet, insert 
// the following line in the interface dictionary:
//
// MRFPointVentSetFeat  CATIInputDescription  libMRFFeaturesImpl


//-------------------------------------------------------------------------------------
MRFPointVentSetInputDescription::MRFPointVentSetInputDescription():CATIniInputDescriptionAdaptor()
{
}

//-------------------------------------------------------------------------------------
MRFPointVentSetInputDescription::~MRFPointVentSetInputDescription()
{
}

//-------------------------------------------------------------------------------------
HRESULT MRFPointVentSetInputDescription::GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& ListOfModifiedFeatures) 
{    
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFPointVentSetInputDescription::GetMainInput(CATBaseUnknown_var& oMainInput) 
{
	return E_FAIL;
}

//-------------------------------------------------------------------------------------

HRESULT MRFPointVentSetInputDescription::GetFeatureType(CATIInputDescription::FeatureType& oFeature_type)
{

  oFeature_type = CATIInputDescription::FeatureType_Creation ;
  return S_OK;
}


