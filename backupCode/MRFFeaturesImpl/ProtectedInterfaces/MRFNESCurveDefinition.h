#pragma once
#include "CATUnicodeString.h"
#include "CATFmFeatureModelerID.h"
#include "CATFmCredentials.h"

#define _MRFNESCurveClientID  "mrftyre"
#define _MRFNESCurvePartnerID  "MRFTyre"
#define _MRFNESCurveCatalogName "MRFTyreFeatures"

//Attributes of MRFGrooveSweepFeat

#define _MRFNESCurveStartupName "`MRFNESCurveFeat`@`MRFTyreFeatures.CATfct`"

#define _MRFNESCurveReferenceUDF "ReferenceUDF"

class MRFNESCurveFeatureDefinition
{

public:
	static HRESULT MRFNESCurveCatalogDefinition(CATUnicodeString & strClientID, CATUnicodeString &strPartnerID, CATUnicodeString & strCatalogName, CATFmCredentials & CredentialForNESCurve)
	{
		strClientID = _MRFNESCurveClientID;
		strPartnerID = _MRFNESCurvePartnerID;
		strCatalogName = _MRFNESCurveCatalogName;

		HRESULT rc = E_FAIL;
		rc = CredentialForNESCurve.RegisterAsApplicationBasedOn(CATFmFeatureModelerID, strPartnerID);

		if (SUCCEEDED(rc))
			rc = CredentialForNESCurve.RegisterAsCatalogOwner(strCatalogName, strClientID);

		return rc;

	}

};
