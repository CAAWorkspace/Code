#ifndef MRFPointVentInputDescription_H
#define MRFPointVentInputDescription_H
// COPYRIGHT DASSAULT SYSTEMES 2000

// System Framework
#include "CATIniInputDescriptionAdaptor.h" // needed to derive from

class MRFPointVentInputDescription: public CATIniInputDescriptionAdaptor
{
    CATDeclareClass;
    
public:
     
    MRFPointVentInputDescription ();
    virtual ~MRFPointVentInputDescription ();
    
    virtual HRESULT GetListOfModifiedFeatures(CATListValCATBaseUnknown_var& oListOfModifiedFeatures );

    virtual HRESULT GetMainInput(CATBaseUnknown_var& oMainInput);

    virtual HRESULT GetFeatureType(CATIInputDescription::FeatureType& oFeature_type);

private:

    // The copy constructor and the equal operator must not be implemented
    // -------------------------------------------------------------------
    MRFPointVentInputDescription (MRFPointVentInputDescription &);
    MRFPointVentInputDescription& operator=(MRFPointVentInputDescription&);
    
};

#endif
