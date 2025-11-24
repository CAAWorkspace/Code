#pragma once
#include "CATUnicodeString.h"
#include "CATFmFeatureModelerID.h"

#define _MRFGreenProfileSetClientID  "mrftyre"
#define _MRFGreenProfileSetPartnerID  "MRFTyre"
#define _MRFGreenProfileSetCatalogName "MRFTyreFeatures"

//Attributes of MRFGrooveSweepFeat

#define _MRFGreenProfileSetStartupName "`MRFGreenProfileSetFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFGreenProfileStartupName "`MRFGreenProfileFeat`@`MRFTyreFeatures.CATfct`"

#define _MRFGreenProfileSet_ConfigName "ConfigName"
#define _MRFGreenProfileSet_ConfigComboIndex "ConfigComboIndex"
#define _MRFGreenProfileSet_SmoothenedCurve "SmoothenedCurve"
#define _MRFGreenProfileSet_SmoothenedCurveStartPoint "SmoothenedCurveStartPoint"
#define _MRFGreenProfileSet_FiniteElementCuredWidth "FiniteElementCuredWidth"
#define _MRFGreenProfileSet_ProfileSplitterOuterLength "ProfileSplitterOuterLength"
#define _MRFGreenProfileSet_ProfileSplitterInnerLength "ProfileSplitterInnerLength"
#define _MRFGreenProfileSet_ExeFileName "ExeFileName"
#define _MRFGreenProfileSet_ExeFilePath "ExeFilePath"
#define _MRFGreenProfileSet_SurfaceList "SurfaceList"
#define _MRFGreenProfileSet_ParametersFromTree "ParametersFromTree"
#define _MRFGreenProfileSet_UserParameters "UserParameters"
#define _MRFGreenProfileSet_OutputParameters "OutputParameters"
#define _MRFGreenProfileSet_GreenProfileList "GreenProfileList"



#define _MRFGreenProfileName "GreenProfileName"
#define _MRFGreenProfileXList "XCordinateList"
#define _MRFGreenProfileYList "YCordinateList"
#define _MRFGreenProfileZList "ZCordinateList"



class MRFGreenProfileFeatureDefinition 
{

public:
	static HRESULT MRFGreenProfileCatalogDefinition(CATUnicodeString & strClientID, CATUnicodeString &strPartnerID, CATUnicodeString & strCatalogName, CATFmCredentials & CredentialForPVS)
	{
		strClientID = _MRFGreenProfileSetClientID;
		strPartnerID = _MRFGreenProfileSetPartnerID;
		strCatalogName = _MRFGreenProfileSetCatalogName;

		HRESULT rc = E_FAIL;
		rc = CredentialForPVS.RegisterAsApplicationBasedOn(CATFmFeatureModelerID, strPartnerID);
		
		if (SUCCEEDED(rc))
			rc = CredentialForPVS.RegisterAsCatalogOwner(strCatalogName, strClientID);

		return rc;

	}

};

