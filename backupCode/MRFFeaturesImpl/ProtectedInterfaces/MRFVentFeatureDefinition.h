#pragma once
#include "CATUnicodeString.h"
#include "CATFmFeatureModelerID.h"

#define _MRFVentClientID  "mrftyre"
#define _MRFVentPartnerID  "MRFTyre"
#define _MRFVentCatalogName "MRFTyreFeatures"

//Attributes of MRFGrooveSweepFeat

#define _MRFPointVentSetStartupName "`MRFPointVentSetFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFPointVentStartupName "`MRFPointVentFeat`@`MRFTyreFeatures.CATfct`"

#define _MRFPointVentNbOfVents "NbOfVents"
#define _MRFPointVentListOfVents "VentList"

#define _MRFPointVentType "VentType"
#define _MRFPointVentRefSurface "RefSurface"
#define _MRFPointVentRefCurve "RefCurve"
#define _MRFPointVentRefEdge1 "RefEdge1"
#define _MRFPointVentRefEdge2 "RefEdge2"
#define _MRFPointVentOffsetDist1 "OffsetDist1"
#define _MRFPointVentOffsetDist2 "OffsetDist2"
#define _MRFPointVent3DRepresentation "3DRepresentation"
#define _MRFPointVent3DProfileType "ProfileType"

#define _MRFPointVentRatio "Ratio"
#define _MRFPointVentOffsetDir1 "Dir1"
#define _MRFPointVentOffsetDir2 "Dir2"

#define _MRFPointVent3DProfileA "a"
#define _MRFPointVent3DProfileB "b"
#define _MRFPointVent3DProfileC "c"
#define _MRFPointVent3DProfileD "d"

#define _MRFPointVentX "X"
#define _MRFPointVentY "Y"
#define _MRFPointVentZ "Z"

#define _MRFPointVentSurfaceParamU "SurfaceParamU"
#define _MRFPointVentSurfaceParamV "SurfaceParamV"

#define _MRFPointVentDeltaParamU "DeltaParamU"
#define _MRFPointVentDeltaParamV "DeltaParamV"

#define _MRFPointVentRefVent1 "RefVent1"
#define _MRFPointVentRefVent2 "RefVent2"

#define _MRFPointVentSubType "SubType"
#define _MRFPointVentAxis "Axis"
#define _MRFPointVentRefEdges "RefEdges"

#define _MRFPointVentAutoUpdate "AutoUpdate"
#define _MRFPointVentDir1Ratio "Dir1Ratio"
#define _MRFPointVentDir2Ratio "Dir2Ratio"

//For Circumferential Vent
#define _MRFCircumVentStartupName "`MRFCircumferentialVentFeat`@`MRFTyreFeatures.CATfct`"
#define _MRFCircumVent_BackProfile "BackProfile"
#define _MRFCircumVent_TyreAssemble "TyreAssemble"
#define _MRFCircumVent_DefaultGeomSet "DefaultGeomSet"
#define _MRFCircumVent_MergedGeomSet "MergedGeomSet"
#define _MRFCircumVent_LateralGeomSet "LateralGeomSet"
#define _MRFCircumVent_DefaultGeomSetValues "DefaultVentValuesList"
#define _MRFCircumVent_MergedGeomSetValues "MergedVentValuesList"
#define _MRFCircumVent_LateralGeomSetValues "LateralVentValuesList"


class MRFVentFeatureDefinition 
{

public:
	static HRESULT MRFVentCatalogDefinition(CATUnicodeString & strClientID, CATUnicodeString &strPartnerID, CATUnicodeString & strCatalogName, CATFmCredentials & CredentialForPVS)
	{
		strClientID = _MRFVentClientID;
		strPartnerID = _MRFVentPartnerID;
		strCatalogName = _MRFVentCatalogName;

		HRESULT rc = E_FAIL;
		rc = CredentialForPVS.RegisterAsApplicationBasedOn(CATFmFeatureModelerID, strPartnerID);
		
		if (SUCCEEDED(rc))
			rc = CredentialForPVS.RegisterAsCatalogOwner(strCatalogName, strClientID);

		return rc;

	}

};

