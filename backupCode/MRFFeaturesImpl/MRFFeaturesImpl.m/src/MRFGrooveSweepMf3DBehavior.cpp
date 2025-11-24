// COPYRIGHT DASSAULT SYSTEMES 2000
//====================================================================================
//
//  MRFGrooveSweepMf3DBehavior
//    Implementation of interface CATIMf3DBehavior for GrooveSweep 
//
//====================================================================================
#include "MRFGrooveSweepMf3DBehavior.h"
#include "iostream.h"

CATImplementClass(MRFGrooveSweepMf3DBehavior, DataExtension, CATIMf3DBehavior, MRFGrooveSweepFeat);
CATImplementBOA(CATIMf3DBehavior,MRFGrooveSweepMf3DBehavior);

//-----------------------------------------------------------------------------
// To declare that MRFIGrooveSweep implements CATIMf3DBehavior, insert 
// the following line in the interface dictionary:
//
// MRFGrooveSweepFeat  CATIMf3DBehavior  libMRFFeaturesImpl


//-------------------------------------------------------------------------------------
MRFGrooveSweepMf3DBehavior::MRFGrooveSweepMf3DBehavior()
{
}

//-------------------------------------------------------------------------------------
MRFGrooveSweepMf3DBehavior::~MRFGrooveSweepMf3DBehavior()
{
}

HRESULT MRFGrooveSweepMf3DBehavior::IsAShape()  const
{
	return S_OK;
}

HRESULT MRFGrooveSweepMf3DBehavior::IsAVolume()  const
{
	return S_OK;
}

HRESULT MRFGrooveSweepMf3DBehavior::IsASolid()  const
{
	return E_FAIL;
}

HRESULT MRFGrooveSweepMf3DBehavior::IsADatum()  const
{
	return E_FAIL;
}