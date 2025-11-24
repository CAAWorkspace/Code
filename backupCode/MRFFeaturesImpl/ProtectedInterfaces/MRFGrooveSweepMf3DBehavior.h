#ifndef MRFGrooveSweepMf3DBehavior_H
#define MRFGrooveSweepMf3DBehavior_H
// COPYRIGHT DASSAULT SYSTEMES 2000

// System Framework
#include "CATBaseUnknown.h" // needed to derive from
#include "CATMf3DBehaviorAdapter.h"

class MRFGrooveSweepMf3DBehavior: public CATMf3DBehaviorAdapter
{
    CATDeclareClass;
    
public:
     
    MRFGrooveSweepMf3DBehavior ();
    virtual ~MRFGrooveSweepMf3DBehavior ();
    
    virtual HRESULT IsAShape() const ;
    virtual HRESULT IsAVolume() const ;
    virtual HRESULT IsASolid() const ;
    virtual HRESULT IsADatum() const ;

private:

    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    MRFGrooveSweepMf3DBehavior (MRFGrooveSweepMf3DBehavior &iObjectToCopy);
    MRFGrooveSweepMf3DBehavior& operator=(MRFGrooveSweepMf3DBehavior &iObjectToCopy);
    
};

#endif
