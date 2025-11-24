#ifndef MRFGrooveSweepInputDescription_H
#define MRFGrooveSweepInputDescription_H
// COPYRIGHT DASSAULT SYSTEMES 2000

// System Framework
#include "CATIniInputDescriptionAdaptor.h" // needed to derive from

class MRFGrooveSweepInputDescription: public CATIniInputDescriptionAdaptor
{
    CATDeclareClass;
    
public:
     
    MRFGrooveSweepInputDescription ();
    virtual ~MRFGrooveSweepInputDescription ();
    
    virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& oListOfModifiedFeatures );

    virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput);

    virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& oFeature_type);

private:

    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    MRFGrooveSweepInputDescription (MRFGrooveSweepInputDescription &);
    MRFGrooveSweepInputDescription& operator=(MRFGrooveSweepInputDescription&);
    
};

#endif
