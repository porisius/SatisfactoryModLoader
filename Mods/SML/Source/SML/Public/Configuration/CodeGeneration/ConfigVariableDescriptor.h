#pragma once
#include "CoreMinimal.h"
#include "UObject/Class.h"
#include "ConfigVariableDescriptor.generated.h"

UENUM(BlueprintType)
enum class EConfigVariableType : uint8 {
    ECVT_Invalid UMETA(DisplayName = "Invalid"),
    ECVT_Int32 UMETA(DisplayName = "Int"),
    ECVT_Int64 UMETA(DisplayName = "Big Int"),
    ECVT_Float UMETA(DisplayName = "Float"),
    ECVT_String UMETA(DisplayName = "String"),
    ECVT_Bool UMETA(DisplayName = "Boolean"),
    ECVT_Array UMETA(DisplayName = "Array"),
    ECVT_Map UMETA(DisplayName = "Map"),
    ECVT_Object UMETA(DisplayName = "Object"),
    ECVT_Class UMETA(DisplayName = "Class"),
    ECVT_CustomStruct UMETA(DisplayName = "Custom Structure"),
    ECVT_ConfigGeneratedStruct UMETA(DisplayName = "Config Generated Struct (delayed)")
};

/** Describes variable generated by the config property and associated metadata */
USTRUCT(BlueprintType)
struct SML_API FConfigVariableDescriptor {
    GENERATED_BODY()
public:
    FConfigVariableDescriptor();
    FConfigVariableDescriptor(const FConfigVariableDescriptor& Descriptor);

    bool operator==(const FConfigVariableDescriptor& Other) const;

    bool operator!=(const FConfigVariableDescriptor& Other) const;
    
    void SetupAsPrimitive(EConfigVariableType VariableType);

    void SetupAsArray(const FConfigVariableDescriptor& ElementType);

    void SetupAsMap(const FConfigVariableDescriptor& KeyType, const FConfigVariableDescriptor& ValueType);

    void SetupAsCustomStruct(UScriptStruct* CustomStruct);

    void SetupAsConfigGeneratedStruct(class UConfigGeneratedStruct* ConfigStruct);

    void SetupAsObject(UClass* BaseObjectClass);

    void SetupAsClass(UClass* BaseClassType);

    /** Type of the generated variable. Decides which of the settings below are applied */
    FORCEINLINE EConfigVariableType GetVariableType() const { return VariableType; }
   
    /** Custom struct defined by this ECT_CustomStruct variable */
    UScriptStruct* GetCustomStructType() const;

    /** Returns base class of the object property defined by ECT_Object variable */
    UClass* GetBaseObjectClass() const;

    /** Returns base class that class values should be child of for this ECT_Class variable */
    UClass* GetBaseClassType() const;

    /** Returns config generated struct referenced by this variable */
    UConfigGeneratedStruct* GetConfigGeneratedStruct() const;

    /** Returns type of the nested array element property, or empty descriptor if it's not an array */
    FConfigVariableDescriptor GetArrayElementDescriptor() const;

    /** Returns type of the nested map key property, or empty descriptor if it's not a map */
    FConfigVariableDescriptor GetMapKeyDescriptor() const;

    /** Returns type of the nested map value property, or empty descriptor if it's not a map */
    FConfigVariableDescriptor GetMapValueDescriptor() const;

    /** Exposes references to GC system */
    void AddStructReferencedObjects(class FReferenceCollector& Collector) const;
    
private:
    EConfigVariableType VariableType;
    UScriptStruct* CustomStructType;
    UClass* BaseObjectClass;
    UClass* BaseClassType;
    class UConfigGeneratedStruct* ConfigGeneratedStructType;
    TSharedPtr<FConfigVariableDescriptor> ArrayElementDescriptor;
    TSharedPtr<FConfigVariableDescriptor> MapKeyDescriptor;
    TSharedPtr<FConfigVariableDescriptor> MapValueDescriptor;
};

template<>
struct SML_API TStructOpsTypeTraits<FConfigVariableDescriptor> : public TStructOpsTypeTraitsBase2<FConfigVariableDescriptor> {
    enum {
        WithCopy = true,
        WithIdenticalViaEquality = true,
        WithAddStructReferencedObjects = true,
    };
};
