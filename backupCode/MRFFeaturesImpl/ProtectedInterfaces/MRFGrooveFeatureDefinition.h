#pragma once
#include "CATUnicodeString.h"
#include "CATFmFeatureModelerID.h"

#define _MRFGrooveClientID  "mrftyre"
#define _MRFGroovePartnerID  "MRFTyre"
#define _MRFGrooveCatalogName "MRFTyreFeatures"

//Attributes of MRFGrooveSweepFeat

#define _MRFGrooveStartupName "`MRFGrooveSweepFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFGrooveInput3DCurve "Input3DCurve"
#define _MRFGrooveBaseSurface "BaseSurface"
#define _MRFGrooveTopSurface "TopSurface"
#define _MRFGrooveEdgeList "EdgeList"
#define _MRFGrooveAngleReferenceList "AngleReferenceList"
#define _MRFGrooveEdgeIndexAndControlPointParams "EdgeIndexAndControlPointParams"
#define _MRFGrooveExtrapolateTrim "ExtrapolateTrim"
#define _MRFGrooveTrimBase "TrimBase"
#define _MRFGrooveTrimBaseObject "BaseTrimObject"
#define _MRFGrooveVersion "Version"
#define _MRFGroovePreviewUpto "PreviewUpto"

class MRFGrooveDefinition 
{

public:
	static HRESULT MRGGrooveCatalogDefinition(CATUnicodeString &mrfGrooveClientID, CATUnicodeString &mrfGroovePartnerID,
		 CATUnicodeString &mrfGrooveCatalogName, CATFmCredentials &CredentialForGS)
	{
		mrfGrooveClientID = _MRFGrooveClientID;
		mrfGroovePartnerID = _MRFGroovePartnerID;
		mrfGrooveCatalogName = _MRFGrooveCatalogName;

		HRESULT rc = E_FAIL;
		rc = CredentialForGS.RegisterAsApplicationBasedOn(CATFmFeatureModelerID, mrfGroovePartnerID);
		
		if (SUCCEEDED(rc))
			rc = CredentialForGS.RegisterAsCatalogOwner(mrfGrooveCatalogName, mrfGrooveClientID);

		return rc;

	}

};

