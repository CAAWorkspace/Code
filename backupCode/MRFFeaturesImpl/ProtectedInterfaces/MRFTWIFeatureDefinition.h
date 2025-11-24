#pragma once
#include "CATUnicodeString.h"
#include "CATFmFeatureModelerID.h"

#define _MRFTWIClientID  "mrftyre"
#define _MRFTWIPartnerID  "MRFTyre"
#define _MRFTWICatalogName "MRFTyreFeatures"

#define _MRFTWISetStartupName "`MRFTWISetFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFTWIStartupName "`MRFTWIFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFNSDStartupName "`MRFNSDFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFTWIMarkStartupName "`MRFTWIMarkFeat`@`MRFTyreFeatures.CATfct`"

#define _MRFTWISegmentCuttingPlane "SegmentCuttingPlane"
#define _MRFTWIList "TWIs"
#define _MRFNSDList "NSDs"
#define _MRFNbOfTWI "NbOfTWI"
#define _MRFNbOfNSD "NbOfNSD"
#define _MRFTWIProfile "TWIProfileType"
#define _MRFTWIOrientation "TWIOrientation"

#define _MRFTWIReferenceSurface "ReferenceSurface"
#define _MRFTWIHeight "TWIHeight"
#define _MRFTWIWidth "TWIWidth"
#define _MRFTWIPaddingAngle1 "TWIPaddingAngle1"
#define _MRFTWIPaddingAngle2 "TWIPaddingAngle2"
#define _MRFTWIExtrapolLength "TWIExtrapolLength"
#define _MRFTWISegmentRotationAngle "TWISegmentRotationAngle"
#define _MRFTWIHoleDia "HoleDia"
#define _MRFTWIHoleDepth "HoleDepth"
#define _MRFTWINSDList "TWINSDs"
#define _MRFTWI_TWISetFeat "TWISetFeat"

#define _MRFNSDTWI "TWI"
#define _MRFNSDHeight "NSDHeight"
#define _MRFNSDWidth "NSDWidth"
#define _MRFNSDStartPosition "StartPosition"
#define _MRFNSDManufacturingType "ManufacturingType"
#define _MRFNSDPaddingAngle1 "NSDPaddingAngle1"
#define _MRFNSDPaddingAngle2 "NSDPaddingAngle2"
#define _MRFNSDSpacing "NSDSpacing"
#define _MRFNSDDirection "Direction"

#define _MRFTWIMarkReferenceSurface "ReferenceSurface"
#define _MRFTWIMarkReferencePlane "ReferencePlane"
#define _MRFTWIMarkCurveRatio "CurveRatio"
#define _MRFTWIMarkPositionAngle "PositionAngle"
#define _MRFTWIMarkOffsetDistance "OffsetDistance"
#define _MRFTWIMarkPaddingAngle "PaddingAngle"
#define _MRFTWIMarkManufacturingType "ManufacturingType"
#define _MRFTWIMarkProfileType "ProfileType"
#define _MRFTWIMarkUDFInputPlane "UDFInputPlane"
#define _MRFTWIMarkUDFInputPoint "UDFInputPoint"
#define _MRFTWIMarkReferenceUDF "ReferenceUDF"
#define _MRFTWIMarkUDFInputAxisSystem "UDFInputAxisSystem"
#define _MRFTWIMarkUDFDevelopCurve "UDFDevelopCurve"


class MRFTWIFeatureDefinition 
{

public:
	static HRESULT MRFTWICatalogDefinition(CATUnicodeString & strClientID, CATUnicodeString &strPartnerID, CATUnicodeString & strCatalogName, CATFmCredentials & CredentialForTWI)
	{
		strClientID = _MRFTWIClientID;
		strPartnerID = _MRFTWIPartnerID;
		strCatalogName = _MRFTWICatalogName;

		HRESULT rc = E_FAIL;
		rc = CredentialForTWI.RegisterAsApplicationBasedOn(CATFmFeatureModelerID, strPartnerID);
		
		if (SUCCEEDED(rc))
			rc = CredentialForTWI.RegisterAsCatalogOwner(strCatalogName, strClientID);

		return rc;

	}

};

