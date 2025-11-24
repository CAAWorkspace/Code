#ifndef MRFPointVentMf3DBehavior_H
#define MRFPointVentMf3DBehavior_H
// COPYRIGHT DASSAULT SYSTEMES 2000

// System Framework
#include "CATBaseUnknown.h" // needed to derive from
#include "CATMf3DBehaviorAdapter.h"

class MRFPointVentMf3DBehavior: public CATMf3DBehaviorAdapter
{
    CATDeclareClass;
    
public:
     
    MRFPointVentMf3DBehavior ();
    virtual ~MRFPointVentMf3DBehavior ();
    
    virtual HRESULT IsAShape() const ;
    virtual HRESULT IsAVolume() const ;
    virtual HRESULT IsASolid() const ;
    virtual HRESULT IsADatum() const ;

private:

    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    MRFPointVentMf3DBehavior (MRFPointVentMf3DBehavior &iObjectToCopy);
    MRFPointVentMf3DBehavior& operator=(MRFPointVentMf3DBehavior &iObjectToCopy);
    
};

#endif
