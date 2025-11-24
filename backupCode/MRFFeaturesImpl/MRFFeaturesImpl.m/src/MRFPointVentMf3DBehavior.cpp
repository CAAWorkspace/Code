// COPYRIGHT DASSAULT SYSTEMES 2000
//====================================================================================
//
//  MRFPointVentMf3DBehavior
//    Implementation of interface CATIMf3DBehavior for PointVent 
//
//====================================================================================
#include "MRFPointVentMf3DBehavior.h"
#include "iostream.h"
#include "MRFIPointVent.h"

CATImplementClass(MRFPointVentMf3DBehavior, DataExtension, CATIMf3DBehavior, MRFPointVentFeat);
CATImplementBOA(CATIMf3DBehavior,MRFPointVentMf3DBehavior);

//-----------------------------------------------------------------------------
// To declare that MRFIGrooveSweep implements CATIMf3DBehavior, insert 
// the following line in the interface dictionary:
//
// MRFPointVentFeat  CATIMf3DBehavior  libMRFFeaturesImpl


//-------------------------------------------------------------------------------------
MRFPointVentMf3DBehavior::MRFPointVentMf3DBehavior()
{
}

//-------------------------------------------------------------------------------------
MRFPointVentMf3DBehavior::~MRFPointVentMf3DBehavior()
{
}

HRESULT MRFPointVentMf3DBehavior::IsAShape()  const
{
	return S_OK;
}

HRESULT MRFPointVentMf3DBehavior::IsAVolume()  const
{
	return E_FAIL;
}

HRESULT MRFPointVentMf3DBehavior::IsASolid()  const
{
	return E_FAIL;
}

HRESULT MRFPointVentMf3DBehavior::IsADatum()  const
{
	return E_FAIL;
}