#ifndef MRFPointVentSetInputDescription_H
#define MRFPointVentSetInputDescription_H
// COPYRIGHT DASSAULT SYSTEMES 2000

// System Framework
#include "CATIniInputDescriptionAdaptor.h" // needed to derive from

class MRFPointVentSetInputDescription: public CATIniInputDescriptionAdaptor
{
    CATDeclareClass;
    
public:
     
    MRFPointVentSetInputDescription ();
    virtual ~MRFPointVentSetInputDescription ();
    
    virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& oListOfModifiedFeatures );

    virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput);

    virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& oFeature_type);

private:

    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    MRFPointVentSetInputDescription (MRFPointVentSetInputDescription &);
    MRFPointVentSetInputDescription& operator=(MRFPointVentSetInputDescription&);
    
};

#endif
