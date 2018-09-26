#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};

// Mono.Xml.XmlCanonicalizer
struct XmlCanonicalizer_t3076776375;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080582;
// System.Attribute
struct Attribute_t861562559;
// System.String
struct String_t;
// System.Security.Cryptography.Xml.CipherData
struct CipherData_t4021546579;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.Cryptography.Xml.CipherReference
struct CipherReference_t859746092;
// System.Security.Cryptography.CryptographicException
struct CryptographicException_t248831461;
// System.Xml.XmlElement
struct XmlElement_t561603118;
// System.Xml.XmlDocument
struct XmlDocument_t2837193595;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.Security.Cryptography.ToBase64Transform
struct ToBase64Transform_t2551557057;
// System.Security.Cryptography.CryptoStream
struct CryptoStream_t2702504504;
// System.IO.Stream
struct Stream_t1273022909;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// System.Security.Cryptography.Xml.EncryptedReference
struct EncryptedReference_t3282913964;
// System.Security.Cryptography.Xml.TransformChain
struct TransformChain_t1669092815;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Security.Cryptography.Xml.Transform
struct Transform_t1105379765;
// System.Security.Cryptography.Xml.DataReference
struct DataReference_t3754427214;
// System.Security.Cryptography.Xml.DSAKeyValue
struct DSAKeyValue_t682905322;
// System.Security.Cryptography.Xml.KeyInfoClause
struct KeyInfoClause_t4210275625;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;
// System.Security.Cryptography.Xml.EncryptedData
struct EncryptedData_t3129875747;
// System.Security.Cryptography.Xml.EncryptedType
struct EncryptedType_t2124600183;
// System.Security.Cryptography.Xml.EncryptionMethod
struct EncryptionMethod_t2271876579;
// System.Security.Cryptography.Xml.KeyInfo
struct KeyInfo_t3757684699;
// System.Security.Cryptography.Xml.EncryptionPropertyCollection
struct EncryptionPropertyCollection_t3294881567;
// System.Security.Cryptography.Xml.EncryptionProperty
struct EncryptionProperty_t3099724478;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2316283784;
// System.Xml.XmlAttribute
struct XmlAttribute_t1173852259;
// System.Security.Cryptography.Xml.EncryptedKey
struct EncryptedKey_t805343673;
// System.Security.Cryptography.Xml.ReferenceList
struct ReferenceList_t2222396100;
// System.Security.Cryptography.Xml.KeyReference
struct KeyReference_t1254893728;
// System.Security.Cryptography.Xml.XmlDsigBase64Transform
struct XmlDsigBase64Transform_t260084727;
// System.Security.Cryptography.Xml.XmlDsigC14NTransform
struct XmlDsigC14NTransform_t3949211521;
// System.Security.Cryptography.Xml.XmlDsigC14NWithCommentsTransform
struct XmlDsigC14NWithCommentsTransform_t1074875822;
// System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform
struct XmlDsigEnvelopedSignatureTransform_t2851260348;
// System.Security.Cryptography.Xml.XmlDsigXPathTransform
struct XmlDsigXPathTransform_t1962434658;
// System.Security.Cryptography.Xml.XmlDsigXsltTransform
struct XmlDsigXsltTransform_t2973394665;
// System.Security.Cryptography.Xml.XmlDsigExcC14NTransform
struct XmlDsigExcC14NTransform_t586418029;
// System.Security.Cryptography.Xml.XmlDsigExcC14NWithCommentsTransform
struct XmlDsigExcC14NWithCommentsTransform_t1461379654;
// System.Security.Cryptography.Xml.XmlDecryptionTransform
struct XmlDecryptionTransform_t4000891284;
// System.Security.Cryptography.Xml.EncryptedXml
struct EncryptedXml_t2455217639;
// System.Text.Encoding
struct Encoding_t1523322056;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.Xml.KeyInfoName
struct KeyInfoName_t2325312217;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct RSAOAEPKeyExchangeDeformatter_t3344463048;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct RSAPKCS1KeyExchangeDeformatter_t2578812791;
// System.Security.Cryptography.Xml.KeyInfoEncryptedKey
struct KeyInfoEncryptedKey_t109830476;
// System.IO.BinaryWriter
struct BinaryWriter_t3992595042;
// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct RSAOAEPKeyExchangeFormatter_t2041696538;
// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t2761096101;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.IO.StringReader
struct StringReader_t3465604688;
// System.Xml.XmlTextReader
struct XmlTextReader_t4233384356;
// System.IO.TextReader
struct TextReader_t283511965;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Security.Cryptography.Xml.RSAKeyValue
struct RSAKeyValue_t3247853290;
// System.Security.Cryptography.Xml.KeyInfoRetrievalMethod
struct KeyInfoRetrievalMethod_t2493599240;
// System.Security.Cryptography.Xml.KeyInfoX509Data
struct KeyInfoX509Data_t3389067689;
// System.Security.Cryptography.Xml.KeyInfoNode
struct KeyInfoNode_t3535559014;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t713131622;
// System.Xml.XmlElement[]
struct XmlElementU5BU5D_t1541675355;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// System.Xml.XmlUrlResolver
struct XmlUrlResolver_t817895037;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Xml.XmlSecureResolver
struct XmlSecureResolver_t3504191023;
// System.Xml.XmlResolver
struct XmlResolver_t626023767;
// System.Xml.XmlNodeList
struct XmlNodeList_t2551693786;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.Type
struct Type_t;
// System.Text.DecoderFallback
struct DecoderFallback_t3123823036;
// System.Text.EncoderFallback
struct EncoderFallback_t1188251036;
// System.Reflection.Assembly
struct Assembly_t;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t1809665003;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t2186285234;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243024;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Xml.XmlNode
struct XmlNode_t3767805227;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Xml.XmlNode/EmptyNodeList
struct EmptyNodeList_t139615908;
// System.Xml.XmlNodeListChildren
struct XmlNodeListChildren_t1082692789;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2994659099;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Hashtable/HashKeys
struct HashKeys_t1568156503;
// System.Collections.Hashtable/HashValues
struct HashValues_t618387445;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t267601189;
// System.Collections.IComparer
struct IComparer_t1540313114;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1493878338;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Xml.XmlNameTable
struct XmlNameTable_t71772148;
// System.Xml.XmlImplementation
struct XmlImplementation_t254178875;
// System.Xml.XmlNameEntryCache
struct XmlNameEntryCache_t2890546907;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t1437094927;
// System.Xml.Schema.XmlSchemaSet
struct XmlSchemaSet_t266093086;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t934654762;
// System.Xml.XmlNodeChangedEventHandler
struct XmlNodeChangedEventHandler_t1533444722;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t3455035481;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t2690840144;
// System.Void
struct Void_t1185182177;
// System.Net.ICredentials
struct ICredentials_t725721261;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.Xml.XmlNameEntry
struct XmlNameEntry_t1073099671;
// System.Text.Decoder
struct Decoder_t2204182725;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Byte[,]
struct ByteU5BU2CU5D_t4116647658;

extern RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
extern const uint32_t XmlCanonicalizer__ctor_m2574885826_MetadataUsageId;
extern RuntimeClass* CryptographicException_t248831461_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CipherData_set_CipherReference_m1087595014_RuntimeMethod_var;
extern String_t* _stringLiteral2319714889;
extern const uint32_t CipherData_set_CipherReference_m1087595014_MetadataUsageId;
extern const RuntimeMethod* CipherData_set_CipherValue_m2389002018_RuntimeMethod_var;
extern const uint32_t CipherData_set_CipherValue_m2389002018_MetadataUsageId;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* ToBase64Transform_t2551557057_il2cpp_TypeInfo_var;
extern RuntimeClass* CryptoStream_t2702504504_il2cpp_TypeInfo_var;
extern RuntimeClass* StreamReader_t4009935899_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CipherData_GetXml_m2328051665_RuntimeMethod_var;
extern String_t* _stringLiteral3608856901;
extern String_t* _stringLiteral1984398691;
extern String_t* _stringLiteral2355207777;
extern const uint32_t CipherData_GetXml_m2328051665_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlNode_t3767805227_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlWhitespace_t131741354_il2cpp_TypeInfo_var;
extern RuntimeClass* CipherData_t4021546579_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* CipherReference_t859746092_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlElement_t561603118_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const RuntimeMethod* CipherData_LoadXml_m1782359316_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2392909825_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_m282647386_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var;
extern String_t* _stringLiteral3493618073;
extern String_t* _stringLiteral1994678490;
extern String_t* _stringLiteral330687204;
extern const uint32_t CipherData_LoadXml_m1782359316_MetadataUsageId;
extern RuntimeClass* XmlDocument_t2837193595_il2cpp_TypeInfo_var;
extern const uint32_t CipherReference_GetXml_m3092490659_MetadataUsageId;
extern RuntimeClass* Transform_t1105379765_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1891153624;
extern String_t* _stringLiteral1706932836;
extern const uint32_t CipherReference_GetXml_m3907286928_MetadataUsageId;
extern const RuntimeMethod* CipherReference_LoadXml_m3119664368_RuntimeMethod_var;
extern String_t* _stringLiteral62225616;
extern const uint32_t CipherReference_LoadXml_m3119664368_MetadataUsageId;
extern String_t* _stringLiteral4169104624;
extern const uint32_t DataReference__ctor_m4026518688_MetadataUsageId;
extern String_t* _stringLiteral1076923336;
extern String_t* _stringLiteral3726462450;
extern String_t* _stringLiteral3929236445;
extern const uint32_t DSAKeyValue_GetXml_m11496612_MetadataUsageId;
extern const RuntimeMethod* DSAKeyValue_LoadXml_m4097399301_RuntimeMethod_var;
extern const uint32_t DSAKeyValue_LoadXml_m4097399301_MetadataUsageId;
extern const uint32_t EncryptedData_GetXml_m1548431538_MetadataUsageId;
extern RuntimeClass* EncryptionProperty_t3099724478_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedData_GetXml_m2500531459_RuntimeMethod_var;
extern String_t* _stringLiteral4204821015;
extern String_t* _stringLiteral3847996581;
extern String_t* _stringLiteral2902905802;
extern String_t* _stringLiteral3454449639;
extern String_t* _stringLiteral3243520198;
extern String_t* _stringLiteral2515942052;
extern String_t* _stringLiteral3002373536;
extern const uint32_t EncryptedData_GetXml_m2500531459_MetadataUsageId;
extern RuntimeClass* EncryptedData_t3129875747_il2cpp_TypeInfo_var;
extern RuntimeClass* EncryptionMethod_t2271876579_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfo_t3757684699_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedData_LoadXml_m3733935022_RuntimeMethod_var;
extern String_t* _stringLiteral676128015;
extern String_t* _stringLiteral3041704345;
extern String_t* _stringLiteral2911941651;
extern String_t* _stringLiteral3360770542;
extern const uint32_t EncryptedData_LoadXml_m3733935022_MetadataUsageId;
extern RuntimeClass* ReferenceList_t2222396100_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedKey__ctor_m739319042_MetadataUsageId;
extern const uint32_t EncryptedKey_GetXml_m3519934298_MetadataUsageId;
extern RuntimeClass* EncryptedReference_t3282913964_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedKey_GetXml_m2029937150_RuntimeMethod_var;
extern String_t* _stringLiteral3321084327;
extern String_t* _stringLiteral2197859913;
extern String_t* _stringLiteral4113096098;
extern String_t* _stringLiteral1079456919;
extern const uint32_t EncryptedKey_GetXml_m2029937150_MetadataUsageId;
extern RuntimeClass* EncryptedKey_t805343673_il2cpp_TypeInfo_var;
extern RuntimeClass* DataReference_t3754427214_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyReference_t1254893728_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedKey_LoadXml_m2702380362_RuntimeMethod_var;
extern String_t* _stringLiteral4184179926;
extern String_t* _stringLiteral386517117;
extern const uint32_t EncryptedKey_LoadXml_m2702380362_MetadataUsageId;
extern RuntimeClass* TransformChain_t1669092815_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedReference__ctor_m3809608059_MetadataUsageId;
extern const uint32_t EncryptedReference_GetXml_m2759238525_MetadataUsageId;
extern const uint32_t EncryptedReference_GetXml_m2806412198_MetadataUsageId;
extern RuntimeClass* XmlDsigBase64Transform_t260084727_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigC14NTransform_t3949211521_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigC14NWithCommentsTransform_t1074875822_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigEnvelopedSignatureTransform_t2851260348_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigXPathTransform_t1962434658_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigXsltTransform_t2973394665_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigExcC14NTransform_t586418029_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDsigExcC14NWithCommentsTransform_t1461379654_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlDecryptionTransform_t4000891284_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedReference_LoadXml_m1352321336_RuntimeMethod_var;
extern String_t* _stringLiteral1705687652;
extern String_t* _stringLiteral3493885024;
extern String_t* _stringLiteral2162480690;
extern String_t* _stringLiteral3994662901;
extern String_t* _stringLiteral1972575430;
extern String_t* _stringLiteral2496344816;
extern String_t* _stringLiteral329648764;
extern String_t* _stringLiteral1340937441;
extern String_t* _stringLiteral3988398138;
extern String_t* _stringLiteral1118642106;
extern String_t* _stringLiteral3576697708;
extern const uint32_t EncryptedReference_LoadXml_m1352321336_MetadataUsageId;
extern RuntimeClass* EncryptionPropertyCollection_t3294881567_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedType__ctor_m3540871624_MetadataUsageId;
extern RuntimeClass* Encoding_t1523322056_il2cpp_TypeInfo_var;
extern RuntimeClass* Hashtable_t1853889766_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedXml__ctor_m989113906_MetadataUsageId;
extern const uint32_t EncryptedXml__ctor_m4190937112_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_DecryptData_m3481279421_RuntimeMethod_var;
extern String_t* _stringLiteral3846635461;
extern String_t* _stringLiteral1509742296;
extern const uint32_t EncryptedXml_DecryptData_m3481279421_MetadataUsageId;
extern const uint32_t EncryptedXml_DecryptDocument_m1270994510_MetadataUsageId;
extern RuntimeClass* KeyInfoClause_t4210275625_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfoName_t2325312217_il2cpp_TypeInfo_var;
extern RuntimeClass* EncryptedXml_t2455217639_il2cpp_TypeInfo_var;
extern RuntimeClass* RSA_t2385438082_il2cpp_TypeInfo_var;
extern RuntimeClass* SymmetricAlgorithm_t4254223087_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedXml_DecryptEncryptedKey_m884005057_RuntimeMethod_var;
extern String_t* _stringLiteral3321043079;
extern String_t* _stringLiteral2223091237;
extern String_t* _stringLiteral4045009689;
extern const uint32_t EncryptedXml_DecryptEncryptedKey_m884005057_MetadataUsageId;
extern RuntimeClass* TripleDES_t92303514_il2cpp_TypeInfo_var;
extern RuntimeClass* Rijndael_t2986313634_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedXml_DecryptKey_m2820904737_RuntimeMethod_var;
extern String_t* _stringLiteral3576982476;
extern String_t* _stringLiteral1900717853;
extern const uint32_t EncryptedXml_DecryptKey_m2820904737_MetadataUsageId;
extern RuntimeClass* RSAOAEPKeyExchangeDeformatter_t3344463048_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAPKCS1KeyExchangeDeformatter_t2578812791_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedXml_DecryptKey_m262904073_MetadataUsageId;
extern RuntimeClass* KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2648998989;
extern String_t* _stringLiteral1667627287;
extern const uint32_t EncryptedXml_Encrypt_m3903036646_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_EncryptData_m2079615939_RuntimeMethod_var;
extern String_t* _stringLiteral2627767329;
extern const uint32_t EncryptedXml_EncryptData_m2079615939_MetadataUsageId;
extern RuntimeClass* BinaryWriter_t3992595042_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedXml_EncryptDataCore_m3696169156_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_EncryptData_m4171828045_RuntimeMethod_var;
extern String_t* _stringLiteral3873985397;
extern const uint32_t EncryptedXml_EncryptData_m4171828045_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_EncryptKey_m1663508456_RuntimeMethod_var;
extern const uint32_t EncryptedXml_EncryptKey_m1663508456_MetadataUsageId;
extern RuntimeClass* RSAOAEPKeyExchangeFormatter_t2041696538_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAPKCS1KeyExchangeFormatter_t2761096101_il2cpp_TypeInfo_var;
extern const uint32_t EncryptedXml_EncryptKey_m3578715373_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_GetAlgorithm_m2452441519_RuntimeMethod_var;
extern String_t* _stringLiteral1487116116;
extern String_t* _stringLiteral2952230759;
extern String_t* _stringLiteral3452265014;
extern String_t* _stringLiteral2951575392;
extern String_t* _stringLiteral4012458413;
extern String_t* _stringLiteral612661092;
extern String_t* _stringLiteral570134936;
extern String_t* _stringLiteral3804108681;
extern String_t* _stringLiteral3173071871;
extern String_t* _stringLiteral2696477479;
extern String_t* _stringLiteral3569897280;
extern String_t* _stringLiteral3215099942;
extern const uint32_t EncryptedXml_GetAlgorithm_m2452441519_MetadataUsageId;
extern RuntimeClass* DES_t821106792_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedXml_GetAlgorithmUri_m206671318_RuntimeMethod_var;
extern const uint32_t EncryptedXml_GetAlgorithmUri_m206671318_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_GetKeyWrapAlgorithmUri_m241829005_RuntimeMethod_var;
extern String_t* _stringLiteral2710813124;
extern const uint32_t EncryptedXml_GetKeyWrapAlgorithmUri_m241829005_MetadataUsageId;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedXml_GetDecryptionIV_m2394716305_RuntimeMethod_var;
extern const uint32_t EncryptedXml_GetDecryptionIV_m2394716305_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_GetDecryptionKey_m3847908196_RuntimeMethod_var;
extern const uint32_t EncryptedXml_GetDecryptionKey_m3847908196_MetadataUsageId;
extern RuntimeClass* StringReader_t3465604688_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlTextReader_t4233384356_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptedXml_ReplaceData_m2573463983_RuntimeMethod_var;
extern String_t* _stringLiteral2533598114;
extern const uint32_t EncryptedXml_ReplaceData_m2573463983_MetadataUsageId;
extern const RuntimeMethod* EncryptedXml_Transform_m3824077793_RuntimeMethod_var;
extern const uint32_t EncryptedXml_Transform_m3824077793_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EncryptionMethod_set_KeySize_m1500697790_RuntimeMethod_var;
extern String_t* _stringLiteral1350661676;
extern const uint32_t EncryptionMethod_set_KeySize_m1500697790_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3625796128;
extern String_t* _stringLiteral628085470;
extern const uint32_t EncryptionMethod_GetXml_m4098092980_MetadataUsageId;
extern const RuntimeMethod* EncryptionMethod_LoadXml_m616092953_RuntimeMethod_var;
extern String_t* _stringLiteral3279934454;
extern const uint32_t EncryptionMethod_LoadXml_m616092953_MetadataUsageId;
extern String_t* _stringLiteral2833504309;
extern const uint32_t EncryptionProperty_GetXml_m2164701001_MetadataUsageId;
extern const RuntimeMethod* EncryptionProperty_LoadXml_m879045214_RuntimeMethod_var;
extern String_t* _stringLiteral2975465272;
extern const uint32_t EncryptionProperty_LoadXml_m879045214_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern const uint32_t EncryptionPropertyCollection__ctor_m1867345757_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_set_Item_m3766158180_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_Contains_m3938168598_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_Add_m256411036_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_IndexOf_m444676057_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_Insert_m1464091862_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_System_Collections_IList_Remove_m324540698_MetadataUsageId;
extern const uint32_t EncryptionPropertyCollection_get_ItemOf_m1667401162_MetadataUsageId;
extern const uint32_t KeyInfo__ctor_m2843249396_MetadataUsageId;
extern const uint32_t KeyInfo_GetXml_m847639489_MetadataUsageId;
extern RuntimeClass* DSAKeyValue_t682905322_il2cpp_TypeInfo_var;
extern RuntimeClass* RSAKeyValue_t3247853290_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfoRetrievalMethod_t2493599240_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfoX509Data_t3389067689_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyInfoNode_t3535559014_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyInfo_LoadXml_m2855923995_RuntimeMethod_var;
extern String_t* _stringLiteral804733464;
extern String_t* _stringLiteral4247367443;
extern String_t* _stringLiteral3467844206;
extern String_t* _stringLiteral158637857;
extern String_t* _stringLiteral158747095;
extern const uint32_t KeyInfo_LoadXml_m2855923995_MetadataUsageId;
extern const uint32_t KeyInfoEncryptedKey_GetXml_m3585616529_MetadataUsageId;
extern const uint32_t KeyInfoEncryptedKey_LoadXml_m715906761_MetadataUsageId;
extern const uint32_t KeyInfoName_GetXml_m2296422198_MetadataUsageId;
extern const RuntimeMethod* KeyInfoName_LoadXml_m1550746100_RuntimeMethod_var;
extern const uint32_t KeyInfoName_LoadXml_m1550746100_MetadataUsageId;
extern const uint32_t KeyInfoRetrievalMethod_GetXml_m3521211347_MetadataUsageId;
extern const RuntimeMethod* KeyInfoRetrievalMethod_LoadXml_m828829976_RuntimeMethod_var;
extern const uint32_t KeyInfoRetrievalMethod_LoadXml_m828829976_MetadataUsageId;
extern const RuntimeMethod* KeyInfoX509Data_AddCertificate_m1427145446_RuntimeMethod_var;
extern String_t* _stringLiteral3602728074;
extern const uint32_t KeyInfoX509Data_AddCertificate_m1427145446_MetadataUsageId;
extern RuntimeClass* X509IssuerSerial_t3270105241_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyInfoX509Data_AddIssuerSerial_m239207945_RuntimeMethod_var;
extern String_t* _stringLiteral166250998;
extern const uint32_t KeyInfoX509Data_AddIssuerSerial_m239207945_MetadataUsageId;
extern const uint32_t KeyInfoX509Data_AddSubjectKeyId_m649458755_MetadataUsageId;
extern const uint32_t KeyInfoX509Data_AddSubjectName_m4154902555_MetadataUsageId;
extern RuntimeClass* X509Certificate_t713131622_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral830628722;
extern String_t* _stringLiteral3059114414;
extern String_t* _stringLiteral1851337633;
extern String_t* _stringLiteral2732595130;
extern String_t* _stringLiteral68611663;
extern String_t* _stringLiteral1155140630;
extern String_t* _stringLiteral2330949019;
extern const uint32_t KeyInfoX509Data_GetXml_m3676775010_MetadataUsageId;
extern const RuntimeMethod* KeyInfoX509Data_LoadXml_m256694754_RuntimeMethod_var;
extern String_t* _stringLiteral4059539929;
extern const uint32_t KeyInfoX509Data_LoadXml_m256694754_MetadataUsageId;
extern const uint32_t KeyReference__ctor_m2929745253_MetadataUsageId;
extern const uint32_t ReferenceList__ctor_m938614769_MetadataUsageId;
extern const uint32_t ReferenceList_System_Collections_IList_set_Item_m4073129743_MetadataUsageId;
extern const uint32_t ReferenceList_get_ItemOf_m3656255803_MetadataUsageId;
extern const RuntimeMethod* ReferenceList_Add_m665697094_RuntimeMethod_var;
extern const uint32_t ReferenceList_Add_m665697094_MetadataUsageId;
extern const RuntimeMethod* ReferenceList_Insert_m2475045249_RuntimeMethod_var;
extern const uint32_t ReferenceList_Insert_m2475045249_MetadataUsageId;
extern const uint32_t RSAKeyValue_GetXml_m257296398_MetadataUsageId;
extern const RuntimeMethod* RSAKeyValue_LoadXml_m2848906369_RuntimeMethod_var;
extern const uint32_t RSAKeyValue_LoadXml_m2848906369_MetadataUsageId;
extern RuntimeClass* ICryptoTransform_t2733259762_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5DU5BU5D_t457913172_il2cpp_TypeInfo_var;
extern RuntimeClass* BitConverter_t3118986983_il2cpp_TypeInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D1_0_FieldInfo_var;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D2_1_FieldInfo_var;
extern const uint32_t SymmetricKeyWrap_AESKeyWrapEncrypt_m3291131172_MetadataUsageId;
extern const uint32_t SymmetricKeyWrap_AESKeyWrapDecrypt_m1188890246_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D3_2_FieldInfo_var;
extern const uint32_t SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m1613069101_MetadataUsageId;
extern RuntimeField* U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D4_3_FieldInfo_var;
extern const uint32_t SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m3979056352_MetadataUsageId;
extern const uint32_t SymmetricKeyWrap_Transform_m3435197795_MetadataUsageId;
extern String_t* _stringLiteral1144609714;
extern const uint32_t SymmetricKeyWrap_ComputeCMSKeyChecksum_m4173814019_MetadataUsageId;
extern const uint32_t SymmetricKeyWrap_Concatenate_m2655912172_MetadataUsageId;
extern const uint32_t SymmetricKeyWrap_MSB_m933140928_MetadataUsageId;
extern const uint32_t SymmetricKeyWrap_LSB_m2711009516_MetadataUsageId;
extern const RuntimeMethod* SymmetricKeyWrap_Xor_m2659683204_RuntimeMethod_var;
extern String_t* _stringLiteral1436504311;
extern const uint32_t SymmetricKeyWrap_Xor_m2659683204_MetadataUsageId;
extern RuntimeClass* SecurityManager_t3383402582_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlUrlResolver_t817895037_il2cpp_TypeInfo_var;
extern RuntimeClass* Evidence_t2008144148_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlSecureResolver_t3504191023_il2cpp_TypeInfo_var;
extern const uint32_t Transform__ctor_m426598508_MetadataUsageId;
extern const uint32_t Transform_GetXml_m3710823594_MetadataUsageId;
extern const uint32_t TransformChain__ctor_m99576165_MetadataUsageId;
extern const uint32_t XmlDecryptionTransform__ctor_m2968698842_MetadataUsageId;
extern String_t* _stringLiteral3459047110;
extern String_t* _stringLiteral2407896252;
extern String_t* _stringLiteral620655673;
extern const uint32_t XmlDecryptionTransform_GetInnerXml_m2956802163_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern const RuntimeMethod* XmlDecryptionTransform_LoadInnerXml_m302742112_RuntimeMethod_var;
extern String_t* _stringLiteral3452614525;
extern String_t* _stringLiteral769489549;
extern const uint32_t XmlDecryptionTransform_LoadInnerXml_m302742112_MetadataUsageId;
extern const uint32_t XmlDsigBase64Transform__ctor_m1582715825_MetadataUsageId;
extern RuntimeClass* XmlCanonicalizer_t3076776375_il2cpp_TypeInfo_var;
extern const uint32_t XmlDsigC14NTransform__ctor_m1295642362_MetadataUsageId;
extern const uint32_t XmlDsigEnvelopedSignatureTransform__ctor_m4150449793_MetadataUsageId;
extern const uint32_t XmlDsigExcC14NTransform__ctor_m128464798_MetadataUsageId;
extern const uint32_t XmlDsigXPathTransform__ctor_m249722684_MetadataUsageId;
extern String_t* _stringLiteral1330964347;
extern const uint32_t XmlDsigXPathTransform_GetInnerXml_m4293602249_MetadataUsageId;
extern const RuntimeMethod* XmlDsigXPathTransform_LoadInnerXml_m703395937_RuntimeMethod_var;
extern String_t* _stringLiteral3779497061;
extern const uint32_t XmlDsigXPathTransform_LoadInnerXml_m703395937_MetadataUsageId;
extern const uint32_t XmlDsigXsltTransform__ctor_m3403610689_MetadataUsageId;
extern const RuntimeMethod* XmlDsigXsltTransform_LoadInnerXml_m2954929238_RuntimeMethod_var;
extern const uint32_t XmlDsigXsltTransform_LoadInnerXml_m2954929238_MetadataUsageId;
extern const uint32_t XmlSignature_GetChildElement_m690326908_MetadataUsageId;
extern const RuntimeType* XmlElement_t561603118_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* XmlElementU5BU5D_t1541675355_il2cpp_TypeInfo_var;
extern const uint32_t XmlSignature_GetChildElements_m123056127_MetadataUsageId;

struct ByteU5BU5D_t4116647657;
struct XmlElementU5BU5D_t1541675355;
struct ByteU5BU5DU5BU5D_t457913172;


#ifndef U3CMODULEU3E_T692745526_H
#define U3CMODULEU3E_T692745526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745526 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745526_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef TRANSFORMCHAIN_T1669092815_H
#define TRANSFORMCHAIN_T1669092815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.TransformChain
struct  TransformChain_t1669092815  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.TransformChain::chain
	ArrayList_t2718874744 * ___chain_0;

public:
	inline static int32_t get_offset_of_chain_0() { return static_cast<int32_t>(offsetof(TransformChain_t1669092815, ___chain_0)); }
	inline ArrayList_t2718874744 * get_chain_0() const { return ___chain_0; }
	inline ArrayList_t2718874744 ** get_address_of_chain_0() { return &___chain_0; }
	inline void set_chain_0(ArrayList_t2718874744 * value)
	{
		___chain_0 = value;
		Il2CppCodeGenWriteBarrier((&___chain_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORMCHAIN_T1669092815_H
#ifndef KEYINFOCLAUSE_T4210275625_H
#define KEYINFOCLAUSE_T4210275625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoClause
struct  KeyInfoClause_t4210275625  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFOCLAUSE_T4210275625_H
#ifndef ENCRYPTEDTYPE_T2124600183_H
#define ENCRYPTEDTYPE_T2124600183_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedType
struct  EncryptedType_t2124600183  : public RuntimeObject
{
public:
	// System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::cipherData
	CipherData_t4021546579 * ___cipherData_0;
	// System.String System.Security.Cryptography.Xml.EncryptedType::encoding
	String_t* ___encoding_1;
	// System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::encryptionMethod
	EncryptionMethod_t2271876579 * ___encryptionMethod_2;
	// System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::encryptionProperties
	EncryptionPropertyCollection_t3294881567 * ___encryptionProperties_3;
	// System.String System.Security.Cryptography.Xml.EncryptedType::id
	String_t* ___id_4;
	// System.Security.Cryptography.Xml.KeyInfo System.Security.Cryptography.Xml.EncryptedType::keyInfo
	KeyInfo_t3757684699 * ___keyInfo_5;
	// System.String System.Security.Cryptography.Xml.EncryptedType::mimeType
	String_t* ___mimeType_6;
	// System.String System.Security.Cryptography.Xml.EncryptedType::type
	String_t* ___type_7;

public:
	inline static int32_t get_offset_of_cipherData_0() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___cipherData_0)); }
	inline CipherData_t4021546579 * get_cipherData_0() const { return ___cipherData_0; }
	inline CipherData_t4021546579 ** get_address_of_cipherData_0() { return &___cipherData_0; }
	inline void set_cipherData_0(CipherData_t4021546579 * value)
	{
		___cipherData_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherData_0), value);
	}

	inline static int32_t get_offset_of_encoding_1() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___encoding_1)); }
	inline String_t* get_encoding_1() const { return ___encoding_1; }
	inline String_t** get_address_of_encoding_1() { return &___encoding_1; }
	inline void set_encoding_1(String_t* value)
	{
		___encoding_1 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_1), value);
	}

	inline static int32_t get_offset_of_encryptionMethod_2() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___encryptionMethod_2)); }
	inline EncryptionMethod_t2271876579 * get_encryptionMethod_2() const { return ___encryptionMethod_2; }
	inline EncryptionMethod_t2271876579 ** get_address_of_encryptionMethod_2() { return &___encryptionMethod_2; }
	inline void set_encryptionMethod_2(EncryptionMethod_t2271876579 * value)
	{
		___encryptionMethod_2 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionMethod_2), value);
	}

	inline static int32_t get_offset_of_encryptionProperties_3() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___encryptionProperties_3)); }
	inline EncryptionPropertyCollection_t3294881567 * get_encryptionProperties_3() const { return ___encryptionProperties_3; }
	inline EncryptionPropertyCollection_t3294881567 ** get_address_of_encryptionProperties_3() { return &___encryptionProperties_3; }
	inline void set_encryptionProperties_3(EncryptionPropertyCollection_t3294881567 * value)
	{
		___encryptionProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionProperties_3), value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___id_4)); }
	inline String_t* get_id_4() const { return ___id_4; }
	inline String_t** get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(String_t* value)
	{
		___id_4 = value;
		Il2CppCodeGenWriteBarrier((&___id_4), value);
	}

	inline static int32_t get_offset_of_keyInfo_5() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___keyInfo_5)); }
	inline KeyInfo_t3757684699 * get_keyInfo_5() const { return ___keyInfo_5; }
	inline KeyInfo_t3757684699 ** get_address_of_keyInfo_5() { return &___keyInfo_5; }
	inline void set_keyInfo_5(KeyInfo_t3757684699 * value)
	{
		___keyInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&___keyInfo_5), value);
	}

	inline static int32_t get_offset_of_mimeType_6() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___mimeType_6)); }
	inline String_t* get_mimeType_6() const { return ___mimeType_6; }
	inline String_t** get_address_of_mimeType_6() { return &___mimeType_6; }
	inline void set_mimeType_6(String_t* value)
	{
		___mimeType_6 = value;
		Il2CppCodeGenWriteBarrier((&___mimeType_6), value);
	}

	inline static int32_t get_offset_of_type_7() { return static_cast<int32_t>(offsetof(EncryptedType_t2124600183, ___type_7)); }
	inline String_t* get_type_7() const { return ___type_7; }
	inline String_t** get_address_of_type_7() { return &___type_7; }
	inline void set_type_7(String_t* value)
	{
		___type_7 = value;
		Il2CppCodeGenWriteBarrier((&___type_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDTYPE_T2124600183_H
#ifndef ENCRYPTIONPROPERTY_T3099724478_H
#define ENCRYPTIONPROPERTY_T3099724478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptionProperty
struct  EncryptionProperty_t3099724478  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptionProperty::id
	String_t* ___id_0;
	// System.String System.Security.Cryptography.Xml.EncryptionProperty::target
	String_t* ___target_1;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(EncryptionProperty_t3099724478, ___id_0)); }
	inline String_t* get_id_0() const { return ___id_0; }
	inline String_t** get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(String_t* value)
	{
		___id_0 = value;
		Il2CppCodeGenWriteBarrier((&___id_0), value);
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(EncryptionProperty_t3099724478, ___target_1)); }
	inline String_t* get_target_1() const { return ___target_1; }
	inline String_t** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(String_t* value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier((&___target_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONPROPERTY_T3099724478_H
#ifndef ENCRYPTIONMETHOD_T2271876579_H
#define ENCRYPTIONMETHOD_T2271876579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptionMethod
struct  EncryptionMethod_t2271876579  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptionMethod::algorithm
	String_t* ___algorithm_0;
	// System.Int32 System.Security.Cryptography.Xml.EncryptionMethod::keySize
	int32_t ___keySize_1;

public:
	inline static int32_t get_offset_of_algorithm_0() { return static_cast<int32_t>(offsetof(EncryptionMethod_t2271876579, ___algorithm_0)); }
	inline String_t* get_algorithm_0() const { return ___algorithm_0; }
	inline String_t** get_address_of_algorithm_0() { return &___algorithm_0; }
	inline void set_algorithm_0(String_t* value)
	{
		___algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&___algorithm_0), value);
	}

	inline static int32_t get_offset_of_keySize_1() { return static_cast<int32_t>(offsetof(EncryptionMethod_t2271876579, ___keySize_1)); }
	inline int32_t get_keySize_1() const { return ___keySize_1; }
	inline int32_t* get_address_of_keySize_1() { return &___keySize_1; }
	inline void set_keySize_1(int32_t value)
	{
		___keySize_1 = value;
	}
};

struct EncryptionMethod_t2271876579_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptionMethod::<>f__switch$mapA
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapA_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_2() { return static_cast<int32_t>(offsetof(EncryptionMethod_t2271876579_StaticFields, ___U3CU3Ef__switchU24mapA_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapA_2() const { return ___U3CU3Ef__switchU24mapA_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapA_2() { return &___U3CU3Ef__switchU24mapA_2; }
	inline void set_U3CU3Ef__switchU24mapA_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapA_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONMETHOD_T2271876579_H
#ifndef KEYINFO_T3757684699_H
#define KEYINFO_T3757684699_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfo
struct  KeyInfo_t3757684699  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfo::Info
	ArrayList_t2718874744 * ___Info_0;
	// System.String System.Security.Cryptography.Xml.KeyInfo::id
	String_t* ___id_1;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(KeyInfo_t3757684699, ___Info_0)); }
	inline ArrayList_t2718874744 * get_Info_0() const { return ___Info_0; }
	inline ArrayList_t2718874744 ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(ArrayList_t2718874744 * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((&___Info_0), value);
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(KeyInfo_t3757684699, ___id_1)); }
	inline String_t* get_id_1() const { return ___id_1; }
	inline String_t** get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(String_t* value)
	{
		___id_1 = value;
		Il2CppCodeGenWriteBarrier((&___id_1), value);
	}
};

struct KeyInfo_t3757684699_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.KeyInfo::<>f__switch$mapB
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapB_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.KeyInfo::<>f__switch$mapC
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapC_3;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_2() { return static_cast<int32_t>(offsetof(KeyInfo_t3757684699_StaticFields, ___U3CU3Ef__switchU24mapB_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapB_2() const { return ___U3CU3Ef__switchU24mapB_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapB_2() { return &___U3CU3Ef__switchU24mapB_2; }
	inline void set_U3CU3Ef__switchU24mapB_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapB_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_2), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_3() { return static_cast<int32_t>(offsetof(KeyInfo_t3757684699_StaticFields, ___U3CU3Ef__switchU24mapC_3)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapC_3() const { return ___U3CU3Ef__switchU24mapC_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapC_3() { return &___U3CU3Ef__switchU24mapC_3; }
	inline void set_U3CU3Ef__switchU24mapC_3(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapC_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFO_T3757684699_H
#ifndef ENCRYPTIONPROPERTYCOLLECTION_T3294881567_H
#define ENCRYPTIONPROPERTYCOLLECTION_T3294881567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptionPropertyCollection
struct  EncryptionPropertyCollection_t3294881567  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.EncryptionPropertyCollection::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(EncryptionPropertyCollection_t3294881567, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTIONPROPERTYCOLLECTION_T3294881567_H
#ifndef REFERENCELIST_T2222396100_H
#define REFERENCELIST_T2222396100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.ReferenceList
struct  ReferenceList_t2222396100  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Security.Cryptography.Xml.ReferenceList::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReferenceList_t2222396100, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCELIST_T2222396100_H
#ifndef ENCODING_T1523322056_H
#define ENCODING_T1523322056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Encoding
struct  Encoding_t1523322056  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::codePage
	int32_t ___codePage_0;
	// System.Int32 System.Text.Encoding::windows_code_page
	int32_t ___windows_code_page_1;
	// System.Boolean System.Text.Encoding::is_readonly
	bool ___is_readonly_2;
	// System.Text.DecoderFallback System.Text.Encoding::decoder_fallback
	DecoderFallback_t3123823036 * ___decoder_fallback_3;
	// System.Text.EncoderFallback System.Text.Encoding::encoder_fallback
	EncoderFallback_t1188251036 * ___encoder_fallback_4;
	// System.String System.Text.Encoding::body_name
	String_t* ___body_name_8;
	// System.String System.Text.Encoding::encoding_name
	String_t* ___encoding_name_9;
	// System.String System.Text.Encoding::header_name
	String_t* ___header_name_10;
	// System.Boolean System.Text.Encoding::is_mail_news_display
	bool ___is_mail_news_display_11;
	// System.Boolean System.Text.Encoding::is_mail_news_save
	bool ___is_mail_news_save_12;
	// System.Boolean System.Text.Encoding::is_browser_save
	bool ___is_browser_save_13;
	// System.Boolean System.Text.Encoding::is_browser_display
	bool ___is_browser_display_14;
	// System.String System.Text.Encoding::web_name
	String_t* ___web_name_15;

public:
	inline static int32_t get_offset_of_codePage_0() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___codePage_0)); }
	inline int32_t get_codePage_0() const { return ___codePage_0; }
	inline int32_t* get_address_of_codePage_0() { return &___codePage_0; }
	inline void set_codePage_0(int32_t value)
	{
		___codePage_0 = value;
	}

	inline static int32_t get_offset_of_windows_code_page_1() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___windows_code_page_1)); }
	inline int32_t get_windows_code_page_1() const { return ___windows_code_page_1; }
	inline int32_t* get_address_of_windows_code_page_1() { return &___windows_code_page_1; }
	inline void set_windows_code_page_1(int32_t value)
	{
		___windows_code_page_1 = value;
	}

	inline static int32_t get_offset_of_is_readonly_2() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_readonly_2)); }
	inline bool get_is_readonly_2() const { return ___is_readonly_2; }
	inline bool* get_address_of_is_readonly_2() { return &___is_readonly_2; }
	inline void set_is_readonly_2(bool value)
	{
		___is_readonly_2 = value;
	}

	inline static int32_t get_offset_of_decoder_fallback_3() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___decoder_fallback_3)); }
	inline DecoderFallback_t3123823036 * get_decoder_fallback_3() const { return ___decoder_fallback_3; }
	inline DecoderFallback_t3123823036 ** get_address_of_decoder_fallback_3() { return &___decoder_fallback_3; }
	inline void set_decoder_fallback_3(DecoderFallback_t3123823036 * value)
	{
		___decoder_fallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_fallback_3), value);
	}

	inline static int32_t get_offset_of_encoder_fallback_4() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoder_fallback_4)); }
	inline EncoderFallback_t1188251036 * get_encoder_fallback_4() const { return ___encoder_fallback_4; }
	inline EncoderFallback_t1188251036 ** get_address_of_encoder_fallback_4() { return &___encoder_fallback_4; }
	inline void set_encoder_fallback_4(EncoderFallback_t1188251036 * value)
	{
		___encoder_fallback_4 = value;
		Il2CppCodeGenWriteBarrier((&___encoder_fallback_4), value);
	}

	inline static int32_t get_offset_of_body_name_8() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___body_name_8)); }
	inline String_t* get_body_name_8() const { return ___body_name_8; }
	inline String_t** get_address_of_body_name_8() { return &___body_name_8; }
	inline void set_body_name_8(String_t* value)
	{
		___body_name_8 = value;
		Il2CppCodeGenWriteBarrier((&___body_name_8), value);
	}

	inline static int32_t get_offset_of_encoding_name_9() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___encoding_name_9)); }
	inline String_t* get_encoding_name_9() const { return ___encoding_name_9; }
	inline String_t** get_address_of_encoding_name_9() { return &___encoding_name_9; }
	inline void set_encoding_name_9(String_t* value)
	{
		___encoding_name_9 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_name_9), value);
	}

	inline static int32_t get_offset_of_header_name_10() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___header_name_10)); }
	inline String_t* get_header_name_10() const { return ___header_name_10; }
	inline String_t** get_address_of_header_name_10() { return &___header_name_10; }
	inline void set_header_name_10(String_t* value)
	{
		___header_name_10 = value;
		Il2CppCodeGenWriteBarrier((&___header_name_10), value);
	}

	inline static int32_t get_offset_of_is_mail_news_display_11() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_display_11)); }
	inline bool get_is_mail_news_display_11() const { return ___is_mail_news_display_11; }
	inline bool* get_address_of_is_mail_news_display_11() { return &___is_mail_news_display_11; }
	inline void set_is_mail_news_display_11(bool value)
	{
		___is_mail_news_display_11 = value;
	}

	inline static int32_t get_offset_of_is_mail_news_save_12() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_mail_news_save_12)); }
	inline bool get_is_mail_news_save_12() const { return ___is_mail_news_save_12; }
	inline bool* get_address_of_is_mail_news_save_12() { return &___is_mail_news_save_12; }
	inline void set_is_mail_news_save_12(bool value)
	{
		___is_mail_news_save_12 = value;
	}

	inline static int32_t get_offset_of_is_browser_save_13() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_save_13)); }
	inline bool get_is_browser_save_13() const { return ___is_browser_save_13; }
	inline bool* get_address_of_is_browser_save_13() { return &___is_browser_save_13; }
	inline void set_is_browser_save_13(bool value)
	{
		___is_browser_save_13 = value;
	}

	inline static int32_t get_offset_of_is_browser_display_14() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___is_browser_display_14)); }
	inline bool get_is_browser_display_14() const { return ___is_browser_display_14; }
	inline bool* get_address_of_is_browser_display_14() { return &___is_browser_display_14; }
	inline void set_is_browser_display_14(bool value)
	{
		___is_browser_display_14 = value;
	}

	inline static int32_t get_offset_of_web_name_15() { return static_cast<int32_t>(offsetof(Encoding_t1523322056, ___web_name_15)); }
	inline String_t* get_web_name_15() const { return ___web_name_15; }
	inline String_t** get_address_of_web_name_15() { return &___web_name_15; }
	inline void set_web_name_15(String_t* value)
	{
		___web_name_15 = value;
		Il2CppCodeGenWriteBarrier((&___web_name_15), value);
	}
};

struct Encoding_t1523322056_StaticFields
{
public:
	// System.Reflection.Assembly System.Text.Encoding::i18nAssembly
	Assembly_t * ___i18nAssembly_5;
	// System.Boolean System.Text.Encoding::i18nDisabled
	bool ___i18nDisabled_6;
	// System.Object[] System.Text.Encoding::encodings
	ObjectU5BU5D_t2843939325* ___encodings_7;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t1523322056 * ___asciiEncoding_16;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianEncoding
	Encoding_t1523322056 * ___bigEndianEncoding_17;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t1523322056 * ___defaultEncoding_18;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t1523322056 * ___utf7Encoding_19;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithMarkers
	Encoding_t1523322056 * ___utf8EncodingWithMarkers_20;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingWithoutMarkers
	Encoding_t1523322056 * ___utf8EncodingWithoutMarkers_21;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t1523322056 * ___unicodeEncoding_22;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::isoLatin1Encoding
	Encoding_t1523322056 * ___isoLatin1Encoding_23;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8EncodingUnsafe
	Encoding_t1523322056 * ___utf8EncodingUnsafe_24;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t1523322056 * ___utf32Encoding_25;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUTF32Encoding
	Encoding_t1523322056 * ___bigEndianUTF32Encoding_26;
	// System.Object System.Text.Encoding::lockobj
	RuntimeObject * ___lockobj_27;

public:
	inline static int32_t get_offset_of_i18nAssembly_5() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nAssembly_5)); }
	inline Assembly_t * get_i18nAssembly_5() const { return ___i18nAssembly_5; }
	inline Assembly_t ** get_address_of_i18nAssembly_5() { return &___i18nAssembly_5; }
	inline void set_i18nAssembly_5(Assembly_t * value)
	{
		___i18nAssembly_5 = value;
		Il2CppCodeGenWriteBarrier((&___i18nAssembly_5), value);
	}

	inline static int32_t get_offset_of_i18nDisabled_6() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___i18nDisabled_6)); }
	inline bool get_i18nDisabled_6() const { return ___i18nDisabled_6; }
	inline bool* get_address_of_i18nDisabled_6() { return &___i18nDisabled_6; }
	inline void set_i18nDisabled_6(bool value)
	{
		___i18nDisabled_6 = value;
	}

	inline static int32_t get_offset_of_encodings_7() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___encodings_7)); }
	inline ObjectU5BU5D_t2843939325* get_encodings_7() const { return ___encodings_7; }
	inline ObjectU5BU5D_t2843939325** get_address_of_encodings_7() { return &___encodings_7; }
	inline void set_encodings_7(ObjectU5BU5D_t2843939325* value)
	{
		___encodings_7 = value;
		Il2CppCodeGenWriteBarrier((&___encodings_7), value);
	}

	inline static int32_t get_offset_of_asciiEncoding_16() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___asciiEncoding_16)); }
	inline Encoding_t1523322056 * get_asciiEncoding_16() const { return ___asciiEncoding_16; }
	inline Encoding_t1523322056 ** get_address_of_asciiEncoding_16() { return &___asciiEncoding_16; }
	inline void set_asciiEncoding_16(Encoding_t1523322056 * value)
	{
		___asciiEncoding_16 = value;
		Il2CppCodeGenWriteBarrier((&___asciiEncoding_16), value);
	}

	inline static int32_t get_offset_of_bigEndianEncoding_17() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianEncoding_17)); }
	inline Encoding_t1523322056 * get_bigEndianEncoding_17() const { return ___bigEndianEncoding_17; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianEncoding_17() { return &___bigEndianEncoding_17; }
	inline void set_bigEndianEncoding_17(Encoding_t1523322056 * value)
	{
		___bigEndianEncoding_17 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianEncoding_17), value);
	}

	inline static int32_t get_offset_of_defaultEncoding_18() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___defaultEncoding_18)); }
	inline Encoding_t1523322056 * get_defaultEncoding_18() const { return ___defaultEncoding_18; }
	inline Encoding_t1523322056 ** get_address_of_defaultEncoding_18() { return &___defaultEncoding_18; }
	inline void set_defaultEncoding_18(Encoding_t1523322056 * value)
	{
		___defaultEncoding_18 = value;
		Il2CppCodeGenWriteBarrier((&___defaultEncoding_18), value);
	}

	inline static int32_t get_offset_of_utf7Encoding_19() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf7Encoding_19)); }
	inline Encoding_t1523322056 * get_utf7Encoding_19() const { return ___utf7Encoding_19; }
	inline Encoding_t1523322056 ** get_address_of_utf7Encoding_19() { return &___utf7Encoding_19; }
	inline void set_utf7Encoding_19(Encoding_t1523322056 * value)
	{
		___utf7Encoding_19 = value;
		Il2CppCodeGenWriteBarrier((&___utf7Encoding_19), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithMarkers_20() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithMarkers_20)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithMarkers_20() const { return ___utf8EncodingWithMarkers_20; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithMarkers_20() { return &___utf8EncodingWithMarkers_20; }
	inline void set_utf8EncodingWithMarkers_20(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithMarkers_20 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithMarkers_20), value);
	}

	inline static int32_t get_offset_of_utf8EncodingWithoutMarkers_21() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingWithoutMarkers_21)); }
	inline Encoding_t1523322056 * get_utf8EncodingWithoutMarkers_21() const { return ___utf8EncodingWithoutMarkers_21; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingWithoutMarkers_21() { return &___utf8EncodingWithoutMarkers_21; }
	inline void set_utf8EncodingWithoutMarkers_21(Encoding_t1523322056 * value)
	{
		___utf8EncodingWithoutMarkers_21 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingWithoutMarkers_21), value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_22() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___unicodeEncoding_22)); }
	inline Encoding_t1523322056 * get_unicodeEncoding_22() const { return ___unicodeEncoding_22; }
	inline Encoding_t1523322056 ** get_address_of_unicodeEncoding_22() { return &___unicodeEncoding_22; }
	inline void set_unicodeEncoding_22(Encoding_t1523322056 * value)
	{
		___unicodeEncoding_22 = value;
		Il2CppCodeGenWriteBarrier((&___unicodeEncoding_22), value);
	}

	inline static int32_t get_offset_of_isoLatin1Encoding_23() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___isoLatin1Encoding_23)); }
	inline Encoding_t1523322056 * get_isoLatin1Encoding_23() const { return ___isoLatin1Encoding_23; }
	inline Encoding_t1523322056 ** get_address_of_isoLatin1Encoding_23() { return &___isoLatin1Encoding_23; }
	inline void set_isoLatin1Encoding_23(Encoding_t1523322056 * value)
	{
		___isoLatin1Encoding_23 = value;
		Il2CppCodeGenWriteBarrier((&___isoLatin1Encoding_23), value);
	}

	inline static int32_t get_offset_of_utf8EncodingUnsafe_24() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf8EncodingUnsafe_24)); }
	inline Encoding_t1523322056 * get_utf8EncodingUnsafe_24() const { return ___utf8EncodingUnsafe_24; }
	inline Encoding_t1523322056 ** get_address_of_utf8EncodingUnsafe_24() { return &___utf8EncodingUnsafe_24; }
	inline void set_utf8EncodingUnsafe_24(Encoding_t1523322056 * value)
	{
		___utf8EncodingUnsafe_24 = value;
		Il2CppCodeGenWriteBarrier((&___utf8EncodingUnsafe_24), value);
	}

	inline static int32_t get_offset_of_utf32Encoding_25() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___utf32Encoding_25)); }
	inline Encoding_t1523322056 * get_utf32Encoding_25() const { return ___utf32Encoding_25; }
	inline Encoding_t1523322056 ** get_address_of_utf32Encoding_25() { return &___utf32Encoding_25; }
	inline void set_utf32Encoding_25(Encoding_t1523322056 * value)
	{
		___utf32Encoding_25 = value;
		Il2CppCodeGenWriteBarrier((&___utf32Encoding_25), value);
	}

	inline static int32_t get_offset_of_bigEndianUTF32Encoding_26() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___bigEndianUTF32Encoding_26)); }
	inline Encoding_t1523322056 * get_bigEndianUTF32Encoding_26() const { return ___bigEndianUTF32Encoding_26; }
	inline Encoding_t1523322056 ** get_address_of_bigEndianUTF32Encoding_26() { return &___bigEndianUTF32Encoding_26; }
	inline void set_bigEndianUTF32Encoding_26(Encoding_t1523322056 * value)
	{
		___bigEndianUTF32Encoding_26 = value;
		Il2CppCodeGenWriteBarrier((&___bigEndianUTF32Encoding_26), value);
	}

	inline static int32_t get_offset_of_lockobj_27() { return static_cast<int32_t>(offsetof(Encoding_t1523322056_StaticFields, ___lockobj_27)); }
	inline RuntimeObject * get_lockobj_27() const { return ___lockobj_27; }
	inline RuntimeObject ** get_address_of_lockobj_27() { return &___lockobj_27; }
	inline void set_lockobj_27(RuntimeObject * value)
	{
		___lockobj_27 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCODING_T1523322056_H
#ifndef ASYMMETRICALGORITHM_T932037087_H
#define ASYMMETRICALGORITHM_T932037087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t932037087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t932037087, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T932037087_H
#ifndef ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#define ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeDeformatter
struct  AsymmetricKeyExchangeDeformatter_t3370779160  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEDEFORMATTER_T3370779160_H
#ifndef BINARYWRITER_T3992595042_H
#define BINARYWRITER_T3992595042_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3992595042  : public RuntimeObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t1273022909 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t1523322056 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;
	// System.Byte[] System.IO.BinaryWriter::stringBuffer
	ByteU5BU5D_t4116647657* ___stringBuffer_5;
	// System.Int32 System.IO.BinaryWriter::maxCharsPerRound
	int32_t ___maxCharsPerRound_6;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___OutStream_1)); }
	inline Stream_t1273022909 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t1273022909 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t1273022909 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___OutStream_1), value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___m_encoding_2)); }
	inline Encoding_t1523322056 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t1523322056 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t1523322056 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_encoding_2), value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}

	inline static int32_t get_offset_of_stringBuffer_5() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___stringBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get_stringBuffer_5() const { return ___stringBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stringBuffer_5() { return &___stringBuffer_5; }
	inline void set_stringBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		___stringBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___stringBuffer_5), value);
	}

	inline static int32_t get_offset_of_maxCharsPerRound_6() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042, ___maxCharsPerRound_6)); }
	inline int32_t get_maxCharsPerRound_6() const { return ___maxCharsPerRound_6; }
	inline int32_t* get_address_of_maxCharsPerRound_6() { return &___maxCharsPerRound_6; }
	inline void set_maxCharsPerRound_6(int32_t value)
	{
		___maxCharsPerRound_6 = value;
	}
};

struct BinaryWriter_t3992595042_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3992595042 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3992595042_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3992595042 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3992595042 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3992595042 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier((&___Null_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYWRITER_T3992595042_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t937192061  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T937192061_H
#ifndef XMLREADER_T3121518892_H
#define XMLREADER_T3121518892_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlReader
struct  XmlReader_t3121518892  : public RuntimeObject
{
public:
	// System.Text.StringBuilder System.Xml.XmlReader::readStringBuffer
	StringBuilder_t * ___readStringBuffer_0;
	// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::binary
	XmlReaderBinarySupport_t1809665003 * ___binary_1;
	// System.Xml.XmlReaderSettings System.Xml.XmlReader::settings
	XmlReaderSettings_t2186285234 * ___settings_2;

public:
	inline static int32_t get_offset_of_readStringBuffer_0() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___readStringBuffer_0)); }
	inline StringBuilder_t * get_readStringBuffer_0() const { return ___readStringBuffer_0; }
	inline StringBuilder_t ** get_address_of_readStringBuffer_0() { return &___readStringBuffer_0; }
	inline void set_readStringBuffer_0(StringBuilder_t * value)
	{
		___readStringBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((&___readStringBuffer_0), value);
	}

	inline static int32_t get_offset_of_binary_1() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___binary_1)); }
	inline XmlReaderBinarySupport_t1809665003 * get_binary_1() const { return ___binary_1; }
	inline XmlReaderBinarySupport_t1809665003 ** get_address_of_binary_1() { return &___binary_1; }
	inline void set_binary_1(XmlReaderBinarySupport_t1809665003 * value)
	{
		___binary_1 = value;
		Il2CppCodeGenWriteBarrier((&___binary_1), value);
	}

	inline static int32_t get_offset_of_settings_2() { return static_cast<int32_t>(offsetof(XmlReader_t3121518892, ___settings_2)); }
	inline XmlReaderSettings_t2186285234 * get_settings_2() const { return ___settings_2; }
	inline XmlReaderSettings_t2186285234 ** get_address_of_settings_2() { return &___settings_2; }
	inline void set_settings_2(XmlReaderSettings_t2186285234 * value)
	{
		___settings_2 = value;
		Il2CppCodeGenWriteBarrier((&___settings_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLREADER_T3121518892_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef X509CERTIFICATE_T713131622_H
#define X509CERTIFICATE_T713131622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t713131622  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t489243024 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t4116647657* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___x509_0)); }
	inline X509Certificate_t489243024 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t489243024 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t489243024 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t4116647657* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t4116647657* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t713131622, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T713131622_H
#ifndef SYMMETRICKEYWRAP_T405371701_H
#define SYMMETRICKEYWRAP_T405371701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.SymmetricKeyWrap
struct  SymmetricKeyWrap_t405371701  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICKEYWRAP_T405371701_H
#ifndef BITCONVERTER_T3118986983_H
#define BITCONVERTER_T3118986983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.BitConverter
struct  BitConverter_t3118986983  : public RuntimeObject
{
public:

public:
};

struct BitConverter_t3118986983_StaticFields
{
public:
	// System.Boolean System.BitConverter::SwappedWordsInDouble
	bool ___SwappedWordsInDouble_0;
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_1;

public:
	inline static int32_t get_offset_of_SwappedWordsInDouble_0() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___SwappedWordsInDouble_0)); }
	inline bool get_SwappedWordsInDouble_0() const { return ___SwappedWordsInDouble_0; }
	inline bool* get_address_of_SwappedWordsInDouble_0() { return &___SwappedWordsInDouble_0; }
	inline void set_SwappedWordsInDouble_0(bool value)
	{
		___SwappedWordsInDouble_0 = value;
	}

	inline static int32_t get_offset_of_IsLittleEndian_1() { return static_cast<int32_t>(offsetof(BitConverter_t3118986983_StaticFields, ___IsLittleEndian_1)); }
	inline bool get_IsLittleEndian_1() const { return ___IsLittleEndian_1; }
	inline bool* get_address_of_IsLittleEndian_1() { return &___IsLittleEndian_1; }
	inline void set_IsLittleEndian_1(bool value)
	{
		___IsLittleEndian_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BITCONVERTER_T3118986983_H
#ifndef HASHALGORITHM_T1432317219_H
#define HASHALGORITHM_T1432317219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.HashAlgorithm
struct  HashAlgorithm_t1432317219  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_t4116647657* ___HashValue_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_2;
	// System.Boolean System.Security.Cryptography.HashAlgorithm::disposed
	bool ___disposed_3;

public:
	inline static int32_t get_offset_of_HashValue_0() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashValue_0)); }
	inline ByteU5BU5D_t4116647657* get_HashValue_0() const { return ___HashValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_HashValue_0() { return &___HashValue_0; }
	inline void set_HashValue_0(ByteU5BU5D_t4116647657* value)
	{
		___HashValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___HashValue_0), value);
	}

	inline static int32_t get_offset_of_HashSizeValue_1() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___HashSizeValue_1)); }
	inline int32_t get_HashSizeValue_1() const { return ___HashSizeValue_1; }
	inline int32_t* get_address_of_HashSizeValue_1() { return &___HashSizeValue_1; }
	inline void set_HashSizeValue_1(int32_t value)
	{
		___HashSizeValue_1 = value;
	}

	inline static int32_t get_offset_of_State_2() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___State_2)); }
	inline int32_t get_State_2() const { return ___State_2; }
	inline int32_t* get_address_of_State_2() { return &___State_2; }
	inline void set_State_2(int32_t value)
	{
		___State_2 = value;
	}

	inline static int32_t get_offset_of_disposed_3() { return static_cast<int32_t>(offsetof(HashAlgorithm_t1432317219, ___disposed_3)); }
	inline bool get_disposed_3() const { return ___disposed_3; }
	inline bool* get_address_of_disposed_3() { return &___disposed_3; }
	inline void set_disposed_3(bool value)
	{
		___disposed_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHALGORITHM_T1432317219_H
#ifndef XMLRESOLVER_T626023767_H
#define XMLRESOLVER_T626023767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlResolver
struct  XmlResolver_t626023767  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLRESOLVER_T626023767_H
#ifndef EVIDENCE_T2008144148_H
#define EVIDENCE_T2008144148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Policy.Evidence
struct  Evidence_t2008144148  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Policy.Evidence::_locked
	bool ____locked_0;
	// System.Collections.ArrayList System.Security.Policy.Evidence::hostEvidenceList
	ArrayList_t2718874744 * ___hostEvidenceList_1;
	// System.Collections.ArrayList System.Security.Policy.Evidence::assemblyEvidenceList
	ArrayList_t2718874744 * ___assemblyEvidenceList_2;
	// System.Int32 System.Security.Policy.Evidence::_hashCode
	int32_t ____hashCode_3;

public:
	inline static int32_t get_offset_of__locked_0() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____locked_0)); }
	inline bool get__locked_0() const { return ____locked_0; }
	inline bool* get_address_of__locked_0() { return &____locked_0; }
	inline void set__locked_0(bool value)
	{
		____locked_0 = value;
	}

	inline static int32_t get_offset_of_hostEvidenceList_1() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___hostEvidenceList_1)); }
	inline ArrayList_t2718874744 * get_hostEvidenceList_1() const { return ___hostEvidenceList_1; }
	inline ArrayList_t2718874744 ** get_address_of_hostEvidenceList_1() { return &___hostEvidenceList_1; }
	inline void set_hostEvidenceList_1(ArrayList_t2718874744 * value)
	{
		___hostEvidenceList_1 = value;
		Il2CppCodeGenWriteBarrier((&___hostEvidenceList_1), value);
	}

	inline static int32_t get_offset_of_assemblyEvidenceList_2() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ___assemblyEvidenceList_2)); }
	inline ArrayList_t2718874744 * get_assemblyEvidenceList_2() const { return ___assemblyEvidenceList_2; }
	inline ArrayList_t2718874744 ** get_address_of_assemblyEvidenceList_2() { return &___assemblyEvidenceList_2; }
	inline void set_assemblyEvidenceList_2(ArrayList_t2718874744 * value)
	{
		___assemblyEvidenceList_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyEvidenceList_2), value);
	}

	inline static int32_t get_offset_of__hashCode_3() { return static_cast<int32_t>(offsetof(Evidence_t2008144148, ____hashCode_3)); }
	inline int32_t get__hashCode_3() const { return ____hashCode_3; }
	inline int32_t* get_address_of__hashCode_3() { return &____hashCode_3; }
	inline void set__hashCode_3(int32_t value)
	{
		____hashCode_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVIDENCE_T2008144148_H
#ifndef XMLSIGNATURE_T1498580954_H
#define XMLSIGNATURE_T1498580954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlSignature
struct  XmlSignature_t1498580954  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSIGNATURE_T1498580954_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef XMLNAMEDNODEMAP_T2821286253_H
#define XMLNAMEDNODEMAP_T2821286253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNamedNodeMap
struct  XmlNamedNodeMap_t2821286253  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t3767805227 * ___parent_1;
	// System.Collections.ArrayList System.Xml.XmlNamedNodeMap::nodeList
	ArrayList_t2718874744 * ___nodeList_2;
	// System.Boolean System.Xml.XmlNamedNodeMap::readOnly
	bool ___readOnly_3;

public:
	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___parent_1)); }
	inline XmlNode_t3767805227 * get_parent_1() const { return ___parent_1; }
	inline XmlNode_t3767805227 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(XmlNode_t3767805227 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}

	inline static int32_t get_offset_of_nodeList_2() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___nodeList_2)); }
	inline ArrayList_t2718874744 * get_nodeList_2() const { return ___nodeList_2; }
	inline ArrayList_t2718874744 ** get_address_of_nodeList_2() { return &___nodeList_2; }
	inline void set_nodeList_2(ArrayList_t2718874744 * value)
	{
		___nodeList_2 = value;
		Il2CppCodeGenWriteBarrier((&___nodeList_2), value);
	}

	inline static int32_t get_offset_of_readOnly_3() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253, ___readOnly_3)); }
	inline bool get_readOnly_3() const { return ___readOnly_3; }
	inline bool* get_address_of_readOnly_3() { return &___readOnly_3; }
	inline void set_readOnly_3(bool value)
	{
		___readOnly_3 = value;
	}
};

struct XmlNamedNodeMap_t2821286253_StaticFields
{
public:
	// System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::emptyEnumerator
	RuntimeObject* ___emptyEnumerator_0;

public:
	inline static int32_t get_offset_of_emptyEnumerator_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t2821286253_StaticFields, ___emptyEnumerator_0)); }
	inline RuntimeObject* get_emptyEnumerator_0() const { return ___emptyEnumerator_0; }
	inline RuntimeObject** get_address_of_emptyEnumerator_0() { return &___emptyEnumerator_0; }
	inline void set_emptyEnumerator_0(RuntimeObject* value)
	{
		___emptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyEnumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNAMEDNODEMAP_T2821286253_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef TRANSFORM_T1105379765_H
#define TRANSFORM_T1105379765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.Transform
struct  Transform_t1105379765  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Xml.Transform::algo
	String_t* ___algo_0;
	// System.Xml.XmlResolver System.Security.Cryptography.Xml.Transform::xmlResolver
	XmlResolver_t626023767 * ___xmlResolver_1;
	// System.Collections.Hashtable System.Security.Cryptography.Xml.Transform::propagated_namespaces
	Hashtable_t1853889766 * ___propagated_namespaces_2;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(Transform_t1105379765, ___algo_0)); }
	inline String_t* get_algo_0() const { return ___algo_0; }
	inline String_t** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(String_t* value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_xmlResolver_1() { return static_cast<int32_t>(offsetof(Transform_t1105379765, ___xmlResolver_1)); }
	inline XmlResolver_t626023767 * get_xmlResolver_1() const { return ___xmlResolver_1; }
	inline XmlResolver_t626023767 ** get_address_of_xmlResolver_1() { return &___xmlResolver_1; }
	inline void set_xmlResolver_1(XmlResolver_t626023767 * value)
	{
		___xmlResolver_1 = value;
		Il2CppCodeGenWriteBarrier((&___xmlResolver_1), value);
	}

	inline static int32_t get_offset_of_propagated_namespaces_2() { return static_cast<int32_t>(offsetof(Transform_t1105379765, ___propagated_namespaces_2)); }
	inline Hashtable_t1853889766 * get_propagated_namespaces_2() const { return ___propagated_namespaces_2; }
	inline Hashtable_t1853889766 ** get_address_of_propagated_namespaces_2() { return &___propagated_namespaces_2; }
	inline void set_propagated_namespaces_2(Hashtable_t1853889766 * value)
	{
		___propagated_namespaces_2 = value;
		Il2CppCodeGenWriteBarrier((&___propagated_namespaces_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T1105379765_H
#ifndef ENCRYPTEDREFERENCE_T3282913964_H
#define ENCRYPTEDREFERENCE_T3282913964_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedReference
struct  EncryptedReference_t3282913964  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptedReference::referenceType
	String_t* ___referenceType_0;
	// System.String System.Security.Cryptography.Xml.EncryptedReference::uri
	String_t* ___uri_1;
	// System.Security.Cryptography.Xml.TransformChain System.Security.Cryptography.Xml.EncryptedReference::tc
	TransformChain_t1669092815 * ___tc_2;

public:
	inline static int32_t get_offset_of_referenceType_0() { return static_cast<int32_t>(offsetof(EncryptedReference_t3282913964, ___referenceType_0)); }
	inline String_t* get_referenceType_0() const { return ___referenceType_0; }
	inline String_t** get_address_of_referenceType_0() { return &___referenceType_0; }
	inline void set_referenceType_0(String_t* value)
	{
		___referenceType_0 = value;
		Il2CppCodeGenWriteBarrier((&___referenceType_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(EncryptedReference_t3282913964, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_tc_2() { return static_cast<int32_t>(offsetof(EncryptedReference_t3282913964, ___tc_2)); }
	inline TransformChain_t1669092815 * get_tc_2() const { return ___tc_2; }
	inline TransformChain_t1669092815 ** get_address_of_tc_2() { return &___tc_2; }
	inline void set_tc_2(TransformChain_t1669092815 * value)
	{
		___tc_2 = value;
		Il2CppCodeGenWriteBarrier((&___tc_2), value);
	}
};

struct EncryptedReference_t3282913964_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedReference::<>f__switch$map2
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedReference::<>f__switch$map3
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map3_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2_3() { return static_cast<int32_t>(offsetof(EncryptedReference_t3282913964_StaticFields, ___U3CU3Ef__switchU24map2_3)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2_3() const { return ___U3CU3Ef__switchU24map2_3; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2_3() { return &___U3CU3Ef__switchU24map2_3; }
	inline void set_U3CU3Ef__switchU24map2_3(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2_3), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map3_4() { return static_cast<int32_t>(offsetof(EncryptedReference_t3282913964_StaticFields, ___U3CU3Ef__switchU24map3_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map3_4() const { return ___U3CU3Ef__switchU24map3_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map3_4() { return &___U3CU3Ef__switchU24map3_4; }
	inline void set_U3CU3Ef__switchU24map3_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map3_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map3_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDREFERENCE_T3282913964_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef XMLNODELIST_T2551693786_H
#define XMLNODELIST_T2551693786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeList
struct  XmlNodeList_t2551693786  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODELIST_T2551693786_H
#ifndef CIPHERDATA_T4021546579_H
#define CIPHERDATA_T4021546579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.CipherData
struct  CipherData_t4021546579  : public RuntimeObject
{
public:
	// System.Byte[] System.Security.Cryptography.Xml.CipherData::cipherValue
	ByteU5BU5D_t4116647657* ___cipherValue_0;
	// System.Security.Cryptography.Xml.CipherReference System.Security.Cryptography.Xml.CipherData::cipherReference
	CipherReference_t859746092 * ___cipherReference_1;

public:
	inline static int32_t get_offset_of_cipherValue_0() { return static_cast<int32_t>(offsetof(CipherData_t4021546579, ___cipherValue_0)); }
	inline ByteU5BU5D_t4116647657* get_cipherValue_0() const { return ___cipherValue_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_cipherValue_0() { return &___cipherValue_0; }
	inline void set_cipherValue_0(ByteU5BU5D_t4116647657* value)
	{
		___cipherValue_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherValue_0), value);
	}

	inline static int32_t get_offset_of_cipherReference_1() { return static_cast<int32_t>(offsetof(CipherData_t4021546579, ___cipherReference_1)); }
	inline CipherReference_t859746092 * get_cipherReference_1() const { return ___cipherReference_1; }
	inline CipherReference_t859746092 ** get_address_of_cipherReference_1() { return &___cipherReference_1; }
	inline void set_cipherReference_1(CipherReference_t859746092 * value)
	{
		___cipherReference_1 = value;
		Il2CppCodeGenWriteBarrier((&___cipherReference_1), value);
	}
};

struct CipherData_t4021546579_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.CipherData::<>f__switch$map1
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1_2() { return static_cast<int32_t>(offsetof(CipherData_t4021546579_StaticFields, ___U3CU3Ef__switchU24map1_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1_2() const { return ___U3CU3Ef__switchU24map1_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1_2() { return &___U3CU3Ef__switchU24map1_2; }
	inline void set_U3CU3Ef__switchU24map1_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERDATA_T4021546579_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef STRINGBUILDER_T_H
#define STRINGBUILDER_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Int32 System.Text.StringBuilder::_length
	int32_t ____length_1;
	// System.String System.Text.StringBuilder::_str
	String_t* ____str_2;
	// System.String System.Text.StringBuilder::_cached_str
	String_t* ____cached_str_3;
	// System.Int32 System.Text.StringBuilder::_maxCapacity
	int32_t ____maxCapacity_4;

public:
	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__str_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____str_2)); }
	inline String_t* get__str_2() const { return ____str_2; }
	inline String_t** get_address_of__str_2() { return &____str_2; }
	inline void set__str_2(String_t* value)
	{
		____str_2 = value;
		Il2CppCodeGenWriteBarrier((&____str_2), value);
	}

	inline static int32_t get_offset_of__cached_str_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____cached_str_3)); }
	inline String_t* get__cached_str_3() const { return ____cached_str_3; }
	inline String_t** get_address_of__cached_str_3() { return &____cached_str_3; }
	inline void set__cached_str_3(String_t* value)
	{
		____cached_str_3 = value;
		Il2CppCodeGenWriteBarrier((&____cached_str_3), value);
	}

	inline static int32_t get_offset_of__maxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ____maxCapacity_4)); }
	inline int32_t get__maxCapacity_4() const { return ____maxCapacity_4; }
	inline int32_t* get_address_of__maxCapacity_4() { return &____maxCapacity_4; }
	inline void set__maxCapacity_4(int32_t value)
	{
		____maxCapacity_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGBUILDER_T_H
#ifndef XMLNODE_T3767805227_H
#define XMLNODE_T3767805227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNode
struct  XmlNode_t3767805227  : public RuntimeObject
{
public:
	// System.Xml.XmlDocument System.Xml.XmlNode::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_1;
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t3767805227 * ___parentNode_2;
	// System.Xml.XmlNodeListChildren System.Xml.XmlNode::childNodes
	XmlNodeListChildren_t1082692789 * ___childNodes_3;

public:
	inline static int32_t get_offset_of_ownerDocument_1() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___ownerDocument_1)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_1() const { return ___ownerDocument_1; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_1() { return &___ownerDocument_1; }
	inline void set_ownerDocument_1(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_1 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_1), value);
	}

	inline static int32_t get_offset_of_parentNode_2() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___parentNode_2)); }
	inline XmlNode_t3767805227 * get_parentNode_2() const { return ___parentNode_2; }
	inline XmlNode_t3767805227 ** get_address_of_parentNode_2() { return &___parentNode_2; }
	inline void set_parentNode_2(XmlNode_t3767805227 * value)
	{
		___parentNode_2 = value;
		Il2CppCodeGenWriteBarrier((&___parentNode_2), value);
	}

	inline static int32_t get_offset_of_childNodes_3() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227, ___childNodes_3)); }
	inline XmlNodeListChildren_t1082692789 * get_childNodes_3() const { return ___childNodes_3; }
	inline XmlNodeListChildren_t1082692789 ** get_address_of_childNodes_3() { return &___childNodes_3; }
	inline void set_childNodes_3(XmlNodeListChildren_t1082692789 * value)
	{
		___childNodes_3 = value;
		Il2CppCodeGenWriteBarrier((&___childNodes_3), value);
	}
};

struct XmlNode_t3767805227_StaticFields
{
public:
	// System.Xml.XmlNode/EmptyNodeList System.Xml.XmlNode::emptyList
	EmptyNodeList_t139615908 * ___emptyList_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Xml.XmlNode::<>f__switch$map2B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map2B_4;

public:
	inline static int32_t get_offset_of_emptyList_0() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___emptyList_0)); }
	inline EmptyNodeList_t139615908 * get_emptyList_0() const { return ___emptyList_0; }
	inline EmptyNodeList_t139615908 ** get_address_of_emptyList_0() { return &___emptyList_0; }
	inline void set_emptyList_0(EmptyNodeList_t139615908 * value)
	{
		___emptyList_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptyList_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map2B_4() { return static_cast<int32_t>(offsetof(XmlNode_t3767805227_StaticFields, ___U3CU3Ef__switchU24map2B_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map2B_4() const { return ___U3CU3Ef__switchU24map2B_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map2B_4() { return &___U3CU3Ef__switchU24map2B_4; }
	inline void set_U3CU3Ef__switchU24map2B_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map2B_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map2B_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODE_T3767805227_H
#ifndef TOBASE64TRANSFORM_T2551557057_H
#define TOBASE64TRANSFORM_T2551557057_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.ToBase64Transform
struct  ToBase64Transform_t2551557057  : public RuntimeObject
{
public:
	// System.Boolean System.Security.Cryptography.ToBase64Transform::m_disposed
	bool ___m_disposed_2;

public:
	inline static int32_t get_offset_of_m_disposed_2() { return static_cast<int32_t>(offsetof(ToBase64Transform_t2551557057, ___m_disposed_2)); }
	inline bool get_m_disposed_2() const { return ___m_disposed_2; }
	inline bool* get_address_of_m_disposed_2() { return &___m_disposed_2; }
	inline void set_m_disposed_2(bool value)
	{
		___m_disposed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOBASE64TRANSFORM_T2551557057_H
#ifndef HASHTABLE_T1853889766_H
#define HASHTABLE_T1853889766_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t1853889766  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Hashtable::inUse
	int32_t ___inUse_1;
	// System.Int32 System.Collections.Hashtable::modificationCount
	int32_t ___modificationCount_2;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_3;
	// System.Collections.Hashtable/Slot[] System.Collections.Hashtable::table
	SlotU5BU5D_t2994659099* ___table_4;
	// System.Int32[] System.Collections.Hashtable::hashes
	Int32U5BU5D_t385246372* ___hashes_5;
	// System.Int32 System.Collections.Hashtable::threshold
	int32_t ___threshold_6;
	// System.Collections.Hashtable/HashKeys System.Collections.Hashtable::hashKeys
	HashKeys_t1568156503 * ___hashKeys_7;
	// System.Collections.Hashtable/HashValues System.Collections.Hashtable::hashValues
	HashValues_t618387445 * ___hashValues_8;
	// System.Collections.IHashCodeProvider System.Collections.Hashtable::hcpRef
	RuntimeObject* ___hcpRef_9;
	// System.Collections.IComparer System.Collections.Hashtable::comparerRef
	RuntimeObject* ___comparerRef_10;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Hashtable::serializationInfo
	SerializationInfo_t950877179 * ___serializationInfo_11;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::equalityComparer
	RuntimeObject* ___equalityComparer_12;

public:
	inline static int32_t get_offset_of_inUse_1() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___inUse_1)); }
	inline int32_t get_inUse_1() const { return ___inUse_1; }
	inline int32_t* get_address_of_inUse_1() { return &___inUse_1; }
	inline void set_inUse_1(int32_t value)
	{
		___inUse_1 = value;
	}

	inline static int32_t get_offset_of_modificationCount_2() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___modificationCount_2)); }
	inline int32_t get_modificationCount_2() const { return ___modificationCount_2; }
	inline int32_t* get_address_of_modificationCount_2() { return &___modificationCount_2; }
	inline void set_modificationCount_2(int32_t value)
	{
		___modificationCount_2 = value;
	}

	inline static int32_t get_offset_of_loadFactor_3() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___loadFactor_3)); }
	inline float get_loadFactor_3() const { return ___loadFactor_3; }
	inline float* get_address_of_loadFactor_3() { return &___loadFactor_3; }
	inline void set_loadFactor_3(float value)
	{
		___loadFactor_3 = value;
	}

	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___table_4)); }
	inline SlotU5BU5D_t2994659099* get_table_4() const { return ___table_4; }
	inline SlotU5BU5D_t2994659099** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(SlotU5BU5D_t2994659099* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_hashes_5() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashes_5)); }
	inline Int32U5BU5D_t385246372* get_hashes_5() const { return ___hashes_5; }
	inline Int32U5BU5D_t385246372** get_address_of_hashes_5() { return &___hashes_5; }
	inline void set_hashes_5(Int32U5BU5D_t385246372* value)
	{
		___hashes_5 = value;
		Il2CppCodeGenWriteBarrier((&___hashes_5), value);
	}

	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___threshold_6)); }
	inline int32_t get_threshold_6() const { return ___threshold_6; }
	inline int32_t* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(int32_t value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_hashKeys_7() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashKeys_7)); }
	inline HashKeys_t1568156503 * get_hashKeys_7() const { return ___hashKeys_7; }
	inline HashKeys_t1568156503 ** get_address_of_hashKeys_7() { return &___hashKeys_7; }
	inline void set_hashKeys_7(HashKeys_t1568156503 * value)
	{
		___hashKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&___hashKeys_7), value);
	}

	inline static int32_t get_offset_of_hashValues_8() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hashValues_8)); }
	inline HashValues_t618387445 * get_hashValues_8() const { return ___hashValues_8; }
	inline HashValues_t618387445 ** get_address_of_hashValues_8() { return &___hashValues_8; }
	inline void set_hashValues_8(HashValues_t618387445 * value)
	{
		___hashValues_8 = value;
		Il2CppCodeGenWriteBarrier((&___hashValues_8), value);
	}

	inline static int32_t get_offset_of_hcpRef_9() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___hcpRef_9)); }
	inline RuntimeObject* get_hcpRef_9() const { return ___hcpRef_9; }
	inline RuntimeObject** get_address_of_hcpRef_9() { return &___hcpRef_9; }
	inline void set_hcpRef_9(RuntimeObject* value)
	{
		___hcpRef_9 = value;
		Il2CppCodeGenWriteBarrier((&___hcpRef_9), value);
	}

	inline static int32_t get_offset_of_comparerRef_10() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___comparerRef_10)); }
	inline RuntimeObject* get_comparerRef_10() const { return ___comparerRef_10; }
	inline RuntimeObject** get_address_of_comparerRef_10() { return &___comparerRef_10; }
	inline void set_comparerRef_10(RuntimeObject* value)
	{
		___comparerRef_10 = value;
		Il2CppCodeGenWriteBarrier((&___comparerRef_10), value);
	}

	inline static int32_t get_offset_of_serializationInfo_11() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___serializationInfo_11)); }
	inline SerializationInfo_t950877179 * get_serializationInfo_11() const { return ___serializationInfo_11; }
	inline SerializationInfo_t950877179 ** get_address_of_serializationInfo_11() { return &___serializationInfo_11; }
	inline void set_serializationInfo_11(SerializationInfo_t950877179 * value)
	{
		___serializationInfo_11 = value;
		Il2CppCodeGenWriteBarrier((&___serializationInfo_11), value);
	}

	inline static int32_t get_offset_of_equalityComparer_12() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766, ___equalityComparer_12)); }
	inline RuntimeObject* get_equalityComparer_12() const { return ___equalityComparer_12; }
	inline RuntimeObject** get_address_of_equalityComparer_12() { return &___equalityComparer_12; }
	inline void set_equalityComparer_12(RuntimeObject* value)
	{
		___equalityComparer_12 = value;
		Il2CppCodeGenWriteBarrier((&___equalityComparer_12), value);
	}
};

struct Hashtable_t1853889766_StaticFields
{
public:
	// System.Int32[] System.Collections.Hashtable::primeTbl
	Int32U5BU5D_t385246372* ___primeTbl_13;

public:
	inline static int32_t get_offset_of_primeTbl_13() { return static_cast<int32_t>(offsetof(Hashtable_t1853889766_StaticFields, ___primeTbl_13)); }
	inline Int32U5BU5D_t385246372* get_primeTbl_13() const { return ___primeTbl_13; }
	inline Int32U5BU5D_t385246372** get_address_of_primeTbl_13() { return &___primeTbl_13; }
	inline void set_primeTbl_13(Int32U5BU5D_t385246372* value)
	{
		___primeTbl_13 = value;
		Il2CppCodeGenWriteBarrier((&___primeTbl_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T1853889766_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef XMLCANONICALIZER_T3076776375_H
#define XMLCANONICALIZER_T3076776375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.XmlCanonicalizer
struct  XmlCanonicalizer_t3076776375  : public RuntimeObject
{
public:
	// System.Boolean Mono.Xml.XmlCanonicalizer::comments
	bool ___comments_0;
	// System.Boolean Mono.Xml.XmlCanonicalizer::exclusive
	bool ___exclusive_1;
	// System.Text.StringBuilder Mono.Xml.XmlCanonicalizer::res
	StringBuilder_t * ___res_2;
	// System.Collections.Hashtable Mono.Xml.XmlCanonicalizer::propagatedNss
	Hashtable_t1853889766 * ___propagatedNss_3;

public:
	inline static int32_t get_offset_of_comments_0() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t3076776375, ___comments_0)); }
	inline bool get_comments_0() const { return ___comments_0; }
	inline bool* get_address_of_comments_0() { return &___comments_0; }
	inline void set_comments_0(bool value)
	{
		___comments_0 = value;
	}

	inline static int32_t get_offset_of_exclusive_1() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t3076776375, ___exclusive_1)); }
	inline bool get_exclusive_1() const { return ___exclusive_1; }
	inline bool* get_address_of_exclusive_1() { return &___exclusive_1; }
	inline void set_exclusive_1(bool value)
	{
		___exclusive_1 = value;
	}

	inline static int32_t get_offset_of_res_2() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t3076776375, ___res_2)); }
	inline StringBuilder_t * get_res_2() const { return ___res_2; }
	inline StringBuilder_t ** get_address_of_res_2() { return &___res_2; }
	inline void set_res_2(StringBuilder_t * value)
	{
		___res_2 = value;
		Il2CppCodeGenWriteBarrier((&___res_2), value);
	}

	inline static int32_t get_offset_of_propagatedNss_3() { return static_cast<int32_t>(offsetof(XmlCanonicalizer_t3076776375, ___propagatedNss_3)); }
	inline Hashtable_t1853889766 * get_propagatedNss_3() const { return ___propagatedNss_3; }
	inline Hashtable_t1853889766 ** get_address_of_propagatedNss_3() { return &___propagatedNss_3; }
	inline void set_propagatedNss_3(Hashtable_t1853889766 * value)
	{
		___propagatedNss_3 = value;
		Il2CppCodeGenWriteBarrier((&___propagatedNss_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCANONICALIZER_T3076776375_H
#ifndef DICTIONARY_2_T2736202052_H
#define DICTIONARY_2_T2736202052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_t2736202052  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	Int32U5BU5D_t385246372* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t950877179 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___valueSlots_7)); }
	inline Int32U5BU5D_t385246372* get_valueSlots_7() const { return ___valueSlots_7; }
	inline Int32U5BU5D_t385246372** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(Int32U5BU5D_t385246372* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2736202052_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3530625384 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2736202052_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3530625384 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3530625384 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3530625384 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2736202052_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef KEYINFOENCRYPTEDKEY_T109830476_H
#define KEYINFOENCRYPTEDKEY_T109830476_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoEncryptedKey
struct  KeyInfoEncryptedKey_t109830476  : public KeyInfoClause_t4210275625
{
public:
	// System.Security.Cryptography.Xml.EncryptedKey System.Security.Cryptography.Xml.KeyInfoEncryptedKey::encryptedKey
	EncryptedKey_t805343673 * ___encryptedKey_0;

public:
	inline static int32_t get_offset_of_encryptedKey_0() { return static_cast<int32_t>(offsetof(KeyInfoEncryptedKey_t109830476, ___encryptedKey_0)); }
	inline EncryptedKey_t805343673 * get_encryptedKey_0() const { return ___encryptedKey_0; }
	inline EncryptedKey_t805343673 ** get_address_of_encryptedKey_0() { return &___encryptedKey_0; }
	inline void set_encryptedKey_0(EncryptedKey_t805343673 * value)
	{
		___encryptedKey_0 = value;
		Il2CppCodeGenWriteBarrier((&___encryptedKey_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFOENCRYPTEDKEY_T109830476_H
#ifndef XMLDOCUMENT_T2837193595_H
#define XMLDOCUMENT_T2837193595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlDocument
struct  XmlDocument_t2837193595  : public XmlNode_t3767805227
{
public:
	// System.Boolean System.Xml.XmlDocument::optimal_create_element
	bool ___optimal_create_element_6;
	// System.Boolean System.Xml.XmlDocument::optimal_create_attribute
	bool ___optimal_create_attribute_7;
	// System.Xml.XmlNameTable System.Xml.XmlDocument::nameTable
	XmlNameTable_t71772148 * ___nameTable_8;
	// System.String System.Xml.XmlDocument::baseURI
	String_t* ___baseURI_9;
	// System.Xml.XmlImplementation System.Xml.XmlDocument::implementation
	XmlImplementation_t254178875 * ___implementation_10;
	// System.Boolean System.Xml.XmlDocument::preserveWhitespace
	bool ___preserveWhitespace_11;
	// System.Xml.XmlResolver System.Xml.XmlDocument::resolver
	XmlResolver_t626023767 * ___resolver_12;
	// System.Collections.Hashtable System.Xml.XmlDocument::idTable
	Hashtable_t1853889766 * ___idTable_13;
	// System.Xml.XmlNameEntryCache System.Xml.XmlDocument::nameCache
	XmlNameEntryCache_t2890546907 * ___nameCache_14;
	// System.Xml.XmlLinkedNode System.Xml.XmlDocument::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_15;
	// System.Xml.Schema.XmlSchemaSet System.Xml.XmlDocument::schemas
	XmlSchemaSet_t266093086 * ___schemas_16;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlDocument::schemaInfo
	RuntimeObject* ___schemaInfo_17;
	// System.Boolean System.Xml.XmlDocument::loadMode
	bool ___loadMode_18;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanged
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanged_19;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeChanging
	XmlNodeChangedEventHandler_t1533444722 * ___NodeChanging_20;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserted
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserted_21;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeInserting
	XmlNodeChangedEventHandler_t1533444722 * ___NodeInserting_22;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoved
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoved_23;
	// System.Xml.XmlNodeChangedEventHandler System.Xml.XmlDocument::NodeRemoving
	XmlNodeChangedEventHandler_t1533444722 * ___NodeRemoving_24;

public:
	inline static int32_t get_offset_of_optimal_create_element_6() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_element_6)); }
	inline bool get_optimal_create_element_6() const { return ___optimal_create_element_6; }
	inline bool* get_address_of_optimal_create_element_6() { return &___optimal_create_element_6; }
	inline void set_optimal_create_element_6(bool value)
	{
		___optimal_create_element_6 = value;
	}

	inline static int32_t get_offset_of_optimal_create_attribute_7() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___optimal_create_attribute_7)); }
	inline bool get_optimal_create_attribute_7() const { return ___optimal_create_attribute_7; }
	inline bool* get_address_of_optimal_create_attribute_7() { return &___optimal_create_attribute_7; }
	inline void set_optimal_create_attribute_7(bool value)
	{
		___optimal_create_attribute_7 = value;
	}

	inline static int32_t get_offset_of_nameTable_8() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameTable_8)); }
	inline XmlNameTable_t71772148 * get_nameTable_8() const { return ___nameTable_8; }
	inline XmlNameTable_t71772148 ** get_address_of_nameTable_8() { return &___nameTable_8; }
	inline void set_nameTable_8(XmlNameTable_t71772148 * value)
	{
		___nameTable_8 = value;
		Il2CppCodeGenWriteBarrier((&___nameTable_8), value);
	}

	inline static int32_t get_offset_of_baseURI_9() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___baseURI_9)); }
	inline String_t* get_baseURI_9() const { return ___baseURI_9; }
	inline String_t** get_address_of_baseURI_9() { return &___baseURI_9; }
	inline void set_baseURI_9(String_t* value)
	{
		___baseURI_9 = value;
		Il2CppCodeGenWriteBarrier((&___baseURI_9), value);
	}

	inline static int32_t get_offset_of_implementation_10() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___implementation_10)); }
	inline XmlImplementation_t254178875 * get_implementation_10() const { return ___implementation_10; }
	inline XmlImplementation_t254178875 ** get_address_of_implementation_10() { return &___implementation_10; }
	inline void set_implementation_10(XmlImplementation_t254178875 * value)
	{
		___implementation_10 = value;
		Il2CppCodeGenWriteBarrier((&___implementation_10), value);
	}

	inline static int32_t get_offset_of_preserveWhitespace_11() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___preserveWhitespace_11)); }
	inline bool get_preserveWhitespace_11() const { return ___preserveWhitespace_11; }
	inline bool* get_address_of_preserveWhitespace_11() { return &___preserveWhitespace_11; }
	inline void set_preserveWhitespace_11(bool value)
	{
		___preserveWhitespace_11 = value;
	}

	inline static int32_t get_offset_of_resolver_12() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___resolver_12)); }
	inline XmlResolver_t626023767 * get_resolver_12() const { return ___resolver_12; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_12() { return &___resolver_12; }
	inline void set_resolver_12(XmlResolver_t626023767 * value)
	{
		___resolver_12 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_12), value);
	}

	inline static int32_t get_offset_of_idTable_13() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___idTable_13)); }
	inline Hashtable_t1853889766 * get_idTable_13() const { return ___idTable_13; }
	inline Hashtable_t1853889766 ** get_address_of_idTable_13() { return &___idTable_13; }
	inline void set_idTable_13(Hashtable_t1853889766 * value)
	{
		___idTable_13 = value;
		Il2CppCodeGenWriteBarrier((&___idTable_13), value);
	}

	inline static int32_t get_offset_of_nameCache_14() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___nameCache_14)); }
	inline XmlNameEntryCache_t2890546907 * get_nameCache_14() const { return ___nameCache_14; }
	inline XmlNameEntryCache_t2890546907 ** get_address_of_nameCache_14() { return &___nameCache_14; }
	inline void set_nameCache_14(XmlNameEntryCache_t2890546907 * value)
	{
		___nameCache_14 = value;
		Il2CppCodeGenWriteBarrier((&___nameCache_14), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_15() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___lastLinkedChild_15)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_15() const { return ___lastLinkedChild_15; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_15() { return &___lastLinkedChild_15; }
	inline void set_lastLinkedChild_15(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_15 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_15), value);
	}

	inline static int32_t get_offset_of_schemas_16() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemas_16)); }
	inline XmlSchemaSet_t266093086 * get_schemas_16() const { return ___schemas_16; }
	inline XmlSchemaSet_t266093086 ** get_address_of_schemas_16() { return &___schemas_16; }
	inline void set_schemas_16(XmlSchemaSet_t266093086 * value)
	{
		___schemas_16 = value;
		Il2CppCodeGenWriteBarrier((&___schemas_16), value);
	}

	inline static int32_t get_offset_of_schemaInfo_17() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___schemaInfo_17)); }
	inline RuntimeObject* get_schemaInfo_17() const { return ___schemaInfo_17; }
	inline RuntimeObject** get_address_of_schemaInfo_17() { return &___schemaInfo_17; }
	inline void set_schemaInfo_17(RuntimeObject* value)
	{
		___schemaInfo_17 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_17), value);
	}

	inline static int32_t get_offset_of_loadMode_18() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___loadMode_18)); }
	inline bool get_loadMode_18() const { return ___loadMode_18; }
	inline bool* get_address_of_loadMode_18() { return &___loadMode_18; }
	inline void set_loadMode_18(bool value)
	{
		___loadMode_18 = value;
	}

	inline static int32_t get_offset_of_NodeChanged_19() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanged_19)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanged_19() const { return ___NodeChanged_19; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanged_19() { return &___NodeChanged_19; }
	inline void set_NodeChanged_19(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanged_19 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanged_19), value);
	}

	inline static int32_t get_offset_of_NodeChanging_20() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeChanging_20)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeChanging_20() const { return ___NodeChanging_20; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeChanging_20() { return &___NodeChanging_20; }
	inline void set_NodeChanging_20(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeChanging_20 = value;
		Il2CppCodeGenWriteBarrier((&___NodeChanging_20), value);
	}

	inline static int32_t get_offset_of_NodeInserted_21() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserted_21)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserted_21() const { return ___NodeInserted_21; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserted_21() { return &___NodeInserted_21; }
	inline void set_NodeInserted_21(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserted_21 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserted_21), value);
	}

	inline static int32_t get_offset_of_NodeInserting_22() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeInserting_22)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeInserting_22() const { return ___NodeInserting_22; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeInserting_22() { return &___NodeInserting_22; }
	inline void set_NodeInserting_22(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeInserting_22 = value;
		Il2CppCodeGenWriteBarrier((&___NodeInserting_22), value);
	}

	inline static int32_t get_offset_of_NodeRemoved_23() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoved_23)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoved_23() const { return ___NodeRemoved_23; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoved_23() { return &___NodeRemoved_23; }
	inline void set_NodeRemoved_23(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoved_23 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoved_23), value);
	}

	inline static int32_t get_offset_of_NodeRemoving_24() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595, ___NodeRemoving_24)); }
	inline XmlNodeChangedEventHandler_t1533444722 * get_NodeRemoving_24() const { return ___NodeRemoving_24; }
	inline XmlNodeChangedEventHandler_t1533444722 ** get_address_of_NodeRemoving_24() { return &___NodeRemoving_24; }
	inline void set_NodeRemoving_24(XmlNodeChangedEventHandler_t1533444722 * value)
	{
		___NodeRemoving_24 = value;
		Il2CppCodeGenWriteBarrier((&___NodeRemoving_24), value);
	}
};

struct XmlDocument_t2837193595_StaticFields
{
public:
	// System.Type[] System.Xml.XmlDocument::optimal_create_types
	TypeU5BU5D_t3940880105* ___optimal_create_types_5;

public:
	inline static int32_t get_offset_of_optimal_create_types_5() { return static_cast<int32_t>(offsetof(XmlDocument_t2837193595_StaticFields, ___optimal_create_types_5)); }
	inline TypeU5BU5D_t3940880105* get_optimal_create_types_5() const { return ___optimal_create_types_5; }
	inline TypeU5BU5D_t3940880105** get_address_of_optimal_create_types_5() { return &___optimal_create_types_5; }
	inline void set_optimal_create_types_5(TypeU5BU5D_t3940880105* value)
	{
		___optimal_create_types_5 = value;
		Il2CppCodeGenWriteBarrier((&___optimal_create_types_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDOCUMENT_T2837193595_H
#ifndef RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#define RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeFormatter
struct  RSAOAEPKeyExchangeFormatter_t2041696538  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::random
	RandomNumberGenerator_t386037858 * ___random_1;
	// System.Byte[] System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::param
	ByteU5BU5D_t4116647657* ___param_2;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}

	inline static int32_t get_offset_of_param_2() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeFormatter_t2041696538, ___param_2)); }
	inline ByteU5BU5D_t4116647657* get_param_2() const { return ___param_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_param_2() { return &___param_2; }
	inline void set_param_2(ByteU5BU5D_t4116647657* value)
	{
		___param_2 = value;
		Il2CppCodeGenWriteBarrier((&___param_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEFORMATTER_T2041696538_H
#ifndef RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#define RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct  RSAPKCS1KeyExchangeFormatter_t2761096101  : public AsymmetricKeyExchangeFormatter_t937192061
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::random
	RandomNumberGenerator_t386037858 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeFormatter_t2761096101, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEFORMATTER_T2761096101_H
#ifndef TEXTREADER_T283511965_H
#define TEXTREADER_T283511965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextReader
struct  TextReader_t283511965  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct TextReader_t283511965_StaticFields
{
public:
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t283511965 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextReader_t283511965_StaticFields, ___Null_1)); }
	inline TextReader_t283511965 * get_Null_1() const { return ___Null_1; }
	inline TextReader_t283511965 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextReader_t283511965 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTREADER_T283511965_H
#ifndef XMLTEXTREADER_T4233384356_H
#define XMLTEXTREADER_T4233384356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlTextReader
struct  XmlTextReader_t4233384356  : public XmlReader_t3121518892
{
public:
	// System.Xml.XmlTextReader System.Xml.XmlTextReader::entity
	XmlTextReader_t4233384356 * ___entity_3;
	// Mono.Xml2.XmlTextReader System.Xml.XmlTextReader::source
	XmlTextReader_t3455035481 * ___source_4;
	// System.Boolean System.Xml.XmlTextReader::entityInsideAttribute
	bool ___entityInsideAttribute_5;
	// System.Boolean System.Xml.XmlTextReader::insideAttribute
	bool ___insideAttribute_6;
	// System.Collections.Generic.Stack`1<System.String> System.Xml.XmlTextReader::entityNameStack
	Stack_1_t2690840144 * ___entityNameStack_7;

public:
	inline static int32_t get_offset_of_entity_3() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entity_3)); }
	inline XmlTextReader_t4233384356 * get_entity_3() const { return ___entity_3; }
	inline XmlTextReader_t4233384356 ** get_address_of_entity_3() { return &___entity_3; }
	inline void set_entity_3(XmlTextReader_t4233384356 * value)
	{
		___entity_3 = value;
		Il2CppCodeGenWriteBarrier((&___entity_3), value);
	}

	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___source_4)); }
	inline XmlTextReader_t3455035481 * get_source_4() const { return ___source_4; }
	inline XmlTextReader_t3455035481 ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(XmlTextReader_t3455035481 * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_entityInsideAttribute_5() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityInsideAttribute_5)); }
	inline bool get_entityInsideAttribute_5() const { return ___entityInsideAttribute_5; }
	inline bool* get_address_of_entityInsideAttribute_5() { return &___entityInsideAttribute_5; }
	inline void set_entityInsideAttribute_5(bool value)
	{
		___entityInsideAttribute_5 = value;
	}

	inline static int32_t get_offset_of_insideAttribute_6() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___insideAttribute_6)); }
	inline bool get_insideAttribute_6() const { return ___insideAttribute_6; }
	inline bool* get_address_of_insideAttribute_6() { return &___insideAttribute_6; }
	inline void set_insideAttribute_6(bool value)
	{
		___insideAttribute_6 = value;
	}

	inline static int32_t get_offset_of_entityNameStack_7() { return static_cast<int32_t>(offsetof(XmlTextReader_t4233384356, ___entityNameStack_7)); }
	inline Stack_1_t2690840144 * get_entityNameStack_7() const { return ___entityNameStack_7; }
	inline Stack_1_t2690840144 ** get_address_of_entityNameStack_7() { return &___entityNameStack_7; }
	inline void set_entityNameStack_7(Stack_1_t2690840144 * value)
	{
		___entityNameStack_7 = value;
		Il2CppCodeGenWriteBarrier((&___entityNameStack_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLTEXTREADER_T4233384356_H
#ifndef CIPHERREFERENCE_T859746092_H
#define CIPHERREFERENCE_T859746092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.CipherReference
struct  CipherReference_t859746092  : public EncryptedReference_t3282913964
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERREFERENCE_T859746092_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_2)); }
	inline int64_t get_m_value_2() const { return ___m_value_2; }
	inline int64_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int64_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_2)); }
	inline uint8_t get_m_value_2() const { return ___m_value_2; }
	inline uint8_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint8_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef RSAKEYVALUE_T3247853290_H
#define RSAKEYVALUE_T3247853290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.RSAKeyValue
struct  RSAKeyValue_t3247853290  : public KeyInfoClause_t4210275625
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.Xml.RSAKeyValue::rsa
	RSA_t2385438082 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAKeyValue_t3247853290, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAKEYVALUE_T3247853290_H
#ifndef KEYINFORETRIEVALMETHOD_T2493599240_H
#define KEYINFORETRIEVALMETHOD_T2493599240_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoRetrievalMethod
struct  KeyInfoRetrievalMethod_t2493599240  : public KeyInfoClause_t4210275625
{
public:
	// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::URI
	String_t* ___URI_0;
	// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::element
	XmlElement_t561603118 * ___element_1;
	// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::type
	String_t* ___type_2;

public:
	inline static int32_t get_offset_of_URI_0() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t2493599240, ___URI_0)); }
	inline String_t* get_URI_0() const { return ___URI_0; }
	inline String_t** get_address_of_URI_0() { return &___URI_0; }
	inline void set_URI_0(String_t* value)
	{
		___URI_0 = value;
		Il2CppCodeGenWriteBarrier((&___URI_0), value);
	}

	inline static int32_t get_offset_of_element_1() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t2493599240, ___element_1)); }
	inline XmlElement_t561603118 * get_element_1() const { return ___element_1; }
	inline XmlElement_t561603118 ** get_address_of_element_1() { return &___element_1; }
	inline void set_element_1(XmlElement_t561603118 * value)
	{
		___element_1 = value;
		Il2CppCodeGenWriteBarrier((&___element_1), value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(KeyInfoRetrievalMethod_t2493599240, ___type_2)); }
	inline String_t* get_type_2() const { return ___type_2; }
	inline String_t** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(String_t* value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((&___type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFORETRIEVALMETHOD_T2493599240_H
#ifndef KEYINFONODE_T3535559014_H
#define KEYINFONODE_T3535559014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoNode
struct  KeyInfoNode_t3535559014  : public KeyInfoClause_t4210275625
{
public:
	// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoNode::Node
	XmlElement_t561603118 * ___Node_0;

public:
	inline static int32_t get_offset_of_Node_0() { return static_cast<int32_t>(offsetof(KeyInfoNode_t3535559014, ___Node_0)); }
	inline XmlElement_t561603118 * get_Node_0() const { return ___Node_0; }
	inline XmlElement_t561603118 ** get_address_of_Node_0() { return &___Node_0; }
	inline void set_Node_0(XmlElement_t561603118 * value)
	{
		___Node_0 = value;
		Il2CppCodeGenWriteBarrier((&___Node_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFONODE_T3535559014_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef X509ISSUERSERIAL_T3270105241_H
#define X509ISSUERSERIAL_T3270105241_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.X509IssuerSerial
struct  X509IssuerSerial_t3270105241 
{
public:
	// System.String System.Security.Cryptography.Xml.X509IssuerSerial::_issuerName
	String_t* ____issuerName_0;
	// System.String System.Security.Cryptography.Xml.X509IssuerSerial::_serialNumber
	String_t* ____serialNumber_1;

public:
	inline static int32_t get_offset_of__issuerName_0() { return static_cast<int32_t>(offsetof(X509IssuerSerial_t3270105241, ____issuerName_0)); }
	inline String_t* get__issuerName_0() const { return ____issuerName_0; }
	inline String_t** get_address_of__issuerName_0() { return &____issuerName_0; }
	inline void set__issuerName_0(String_t* value)
	{
		____issuerName_0 = value;
		Il2CppCodeGenWriteBarrier((&____issuerName_0), value);
	}

	inline static int32_t get_offset_of__serialNumber_1() { return static_cast<int32_t>(offsetof(X509IssuerSerial_t3270105241, ____serialNumber_1)); }
	inline String_t* get__serialNumber_1() const { return ____serialNumber_1; }
	inline String_t** get_address_of__serialNumber_1() { return &____serialNumber_1; }
	inline void set__serialNumber_1(String_t* value)
	{
		____serialNumber_1 = value;
		Il2CppCodeGenWriteBarrier((&____serialNumber_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Security.Cryptography.Xml.X509IssuerSerial
struct X509IssuerSerial_t3270105241_marshaled_pinvoke
{
	char* ____issuerName_0;
	char* ____serialNumber_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.Xml.X509IssuerSerial
struct X509IssuerSerial_t3270105241_marshaled_com
{
	Il2CppChar* ____issuerName_0;
	Il2CppChar* ____serialNumber_1;
};
#endif // X509ISSUERSERIAL_T3270105241_H
#ifndef U24ARRAYTYPEU248_T3244137464_H
#define U24ARRAYTYPEU248_T3244137464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$8
struct  U24ArrayTypeU248_t3244137464 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t U24ArrayTypeU248_t3244137464__padding[8];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU248_T3244137464_H
#ifndef RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#define RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter
struct  RSAPKCS1KeyExchangeDeformatter_t2578812791  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::rsa
	RSA_t2385438082 * ___rsa_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::random
	RandomNumberGenerator_t386037858 * ___random_1;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}

	inline static int32_t get_offset_of_random_1() { return static_cast<int32_t>(offsetof(RSAPKCS1KeyExchangeDeformatter_t2578812791, ___random_1)); }
	inline RandomNumberGenerator_t386037858 * get_random_1() const { return ___random_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_1() { return &___random_1; }
	inline void set_random_1(RandomNumberGenerator_t386037858 * value)
	{
		___random_1 = value;
		Il2CppCodeGenWriteBarrier((&___random_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAPKCS1KEYEXCHANGEDEFORMATTER_T2578812791_H
#ifndef MONOTODOATTRIBUTE_T4131080582_H
#define MONOTODOATTRIBUTE_T4131080582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080582  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080582, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080582_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef XMLURLRESOLVER_T817895037_H
#define XMLURLRESOLVER_T817895037_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlUrlResolver
struct  XmlUrlResolver_t817895037  : public XmlResolver_t626023767
{
public:
	// System.Net.ICredentials System.Xml.XmlUrlResolver::credential
	RuntimeObject* ___credential_0;

public:
	inline static int32_t get_offset_of_credential_0() { return static_cast<int32_t>(offsetof(XmlUrlResolver_t817895037, ___credential_0)); }
	inline RuntimeObject* get_credential_0() const { return ___credential_0; }
	inline RuntimeObject** get_address_of_credential_0() { return &___credential_0; }
	inline void set_credential_0(RuntimeObject* value)
	{
		___credential_0 = value;
		Il2CppCodeGenWriteBarrier((&___credential_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLURLRESOLVER_T817895037_H
#ifndef XMLSECURERESOLVER_T3504191023_H
#define XMLSECURERESOLVER_T3504191023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlSecureResolver
struct  XmlSecureResolver_t3504191023  : public XmlResolver_t626023767
{
public:
	// System.Xml.XmlResolver System.Xml.XmlSecureResolver::resolver
	XmlResolver_t626023767 * ___resolver_0;
	// System.Security.PermissionSet System.Xml.XmlSecureResolver::permissionSet
	PermissionSet_t223948603 * ___permissionSet_1;

public:
	inline static int32_t get_offset_of_resolver_0() { return static_cast<int32_t>(offsetof(XmlSecureResolver_t3504191023, ___resolver_0)); }
	inline XmlResolver_t626023767 * get_resolver_0() const { return ___resolver_0; }
	inline XmlResolver_t626023767 ** get_address_of_resolver_0() { return &___resolver_0; }
	inline void set_resolver_0(XmlResolver_t626023767 * value)
	{
		___resolver_0 = value;
		Il2CppCodeGenWriteBarrier((&___resolver_0), value);
	}

	inline static int32_t get_offset_of_permissionSet_1() { return static_cast<int32_t>(offsetof(XmlSecureResolver_t3504191023, ___permissionSet_1)); }
	inline PermissionSet_t223948603 * get_permissionSet_1() const { return ___permissionSet_1; }
	inline PermissionSet_t223948603 ** get_address_of_permissionSet_1() { return &___permissionSet_1; }
	inline void set_permissionSet_1(PermissionSet_t223948603 * value)
	{
		___permissionSet_1 = value;
		Il2CppCodeGenWriteBarrier((&___permissionSet_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLSECURERESOLVER_T3504191023_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef XMLLINKEDNODE_T1437094927_H
#define XMLLINKEDNODE_T1437094927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlLinkedNode
struct  XmlLinkedNode_t1437094927  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::nextSibling
	XmlLinkedNode_t1437094927 * ___nextSibling_5;

public:
	inline static int32_t get_offset_of_nextSibling_5() { return static_cast<int32_t>(offsetof(XmlLinkedNode_t1437094927, ___nextSibling_5)); }
	inline XmlLinkedNode_t1437094927 * get_nextSibling_5() const { return ___nextSibling_5; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_nextSibling_5() { return &___nextSibling_5; }
	inline void set_nextSibling_5(XmlLinkedNode_t1437094927 * value)
	{
		___nextSibling_5 = value;
		Il2CppCodeGenWriteBarrier((&___nextSibling_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLLINKEDNODE_T1437094927_H
#ifndef KEYINFOX509DATA_T3389067689_H
#define KEYINFOX509DATA_T3389067689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoX509Data
struct  KeyInfoX509Data_t3389067689  : public KeyInfoClause_t4210275625
{
public:
	// System.Byte[] System.Security.Cryptography.Xml.KeyInfoX509Data::x509crl
	ByteU5BU5D_t4116647657* ___x509crl_0;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::IssuerSerialList
	ArrayList_t2718874744 * ___IssuerSerialList_1;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::SubjectKeyIdList
	ArrayList_t2718874744 * ___SubjectKeyIdList_2;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::SubjectNameList
	ArrayList_t2718874744 * ___SubjectNameList_3;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.KeyInfoX509Data::X509CertificateList
	ArrayList_t2718874744 * ___X509CertificateList_4;

public:
	inline static int32_t get_offset_of_x509crl_0() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t3389067689, ___x509crl_0)); }
	inline ByteU5BU5D_t4116647657* get_x509crl_0() const { return ___x509crl_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_x509crl_0() { return &___x509crl_0; }
	inline void set_x509crl_0(ByteU5BU5D_t4116647657* value)
	{
		___x509crl_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509crl_0), value);
	}

	inline static int32_t get_offset_of_IssuerSerialList_1() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t3389067689, ___IssuerSerialList_1)); }
	inline ArrayList_t2718874744 * get_IssuerSerialList_1() const { return ___IssuerSerialList_1; }
	inline ArrayList_t2718874744 ** get_address_of_IssuerSerialList_1() { return &___IssuerSerialList_1; }
	inline void set_IssuerSerialList_1(ArrayList_t2718874744 * value)
	{
		___IssuerSerialList_1 = value;
		Il2CppCodeGenWriteBarrier((&___IssuerSerialList_1), value);
	}

	inline static int32_t get_offset_of_SubjectKeyIdList_2() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t3389067689, ___SubjectKeyIdList_2)); }
	inline ArrayList_t2718874744 * get_SubjectKeyIdList_2() const { return ___SubjectKeyIdList_2; }
	inline ArrayList_t2718874744 ** get_address_of_SubjectKeyIdList_2() { return &___SubjectKeyIdList_2; }
	inline void set_SubjectKeyIdList_2(ArrayList_t2718874744 * value)
	{
		___SubjectKeyIdList_2 = value;
		Il2CppCodeGenWriteBarrier((&___SubjectKeyIdList_2), value);
	}

	inline static int32_t get_offset_of_SubjectNameList_3() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t3389067689, ___SubjectNameList_3)); }
	inline ArrayList_t2718874744 * get_SubjectNameList_3() const { return ___SubjectNameList_3; }
	inline ArrayList_t2718874744 ** get_address_of_SubjectNameList_3() { return &___SubjectNameList_3; }
	inline void set_SubjectNameList_3(ArrayList_t2718874744 * value)
	{
		___SubjectNameList_3 = value;
		Il2CppCodeGenWriteBarrier((&___SubjectNameList_3), value);
	}

	inline static int32_t get_offset_of_X509CertificateList_4() { return static_cast<int32_t>(offsetof(KeyInfoX509Data_t3389067689, ___X509CertificateList_4)); }
	inline ArrayList_t2718874744 * get_X509CertificateList_4() const { return ___X509CertificateList_4; }
	inline ArrayList_t2718874744 ** get_address_of_X509CertificateList_4() { return &___X509CertificateList_4; }
	inline void set_X509CertificateList_4(ArrayList_t2718874744 * value)
	{
		___X509CertificateList_4 = value;
		Il2CppCodeGenWriteBarrier((&___X509CertificateList_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFOX509DATA_T3389067689_H
#ifndef RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#define RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter
struct  RSAOAEPKeyExchangeDeformatter_t3344463048  : public AsymmetricKeyExchangeDeformatter_t3370779160
{
public:
	// System.Security.Cryptography.RSA System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::rsa
	RSA_t2385438082 * ___rsa_0;

public:
	inline static int32_t get_offset_of_rsa_0() { return static_cast<int32_t>(offsetof(RSAOAEPKeyExchangeDeformatter_t3344463048, ___rsa_0)); }
	inline RSA_t2385438082 * get_rsa_0() const { return ___rsa_0; }
	inline RSA_t2385438082 ** get_address_of_rsa_0() { return &___rsa_0; }
	inline void set_rsa_0(RSA_t2385438082 * value)
	{
		___rsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAOAEPKEYEXCHANGEDEFORMATTER_T3344463048_H
#ifndef XMLDECRYPTIONTRANSFORM_T4000891284_H
#define XMLDECRYPTIONTRANSFORM_T4000891284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDecryptionTransform
struct  XmlDecryptionTransform_t4000891284  : public Transform_t1105379765
{
public:
	// System.Security.Cryptography.Xml.EncryptedXml System.Security.Cryptography.Xml.XmlDecryptionTransform::encryptedXml
	EncryptedXml_t2455217639 * ___encryptedXml_3;
	// System.Collections.ArrayList System.Security.Cryptography.Xml.XmlDecryptionTransform::exceptUris
	ArrayList_t2718874744 * ___exceptUris_4;

public:
	inline static int32_t get_offset_of_encryptedXml_3() { return static_cast<int32_t>(offsetof(XmlDecryptionTransform_t4000891284, ___encryptedXml_3)); }
	inline EncryptedXml_t2455217639 * get_encryptedXml_3() const { return ___encryptedXml_3; }
	inline EncryptedXml_t2455217639 ** get_address_of_encryptedXml_3() { return &___encryptedXml_3; }
	inline void set_encryptedXml_3(EncryptedXml_t2455217639 * value)
	{
		___encryptedXml_3 = value;
		Il2CppCodeGenWriteBarrier((&___encryptedXml_3), value);
	}

	inline static int32_t get_offset_of_exceptUris_4() { return static_cast<int32_t>(offsetof(XmlDecryptionTransform_t4000891284, ___exceptUris_4)); }
	inline ArrayList_t2718874744 * get_exceptUris_4() const { return ___exceptUris_4; }
	inline ArrayList_t2718874744 ** get_address_of_exceptUris_4() { return &___exceptUris_4; }
	inline void set_exceptUris_4(ArrayList_t2718874744 * value)
	{
		___exceptUris_4 = value;
		Il2CppCodeGenWriteBarrier((&___exceptUris_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDECRYPTIONTRANSFORM_T4000891284_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:

public:
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef XMLDSIGENVELOPEDSIGNATURETRANSFORM_T2851260348_H
#define XMLDSIGENVELOPEDSIGNATURETRANSFORM_T2851260348_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform
struct  XmlDsigEnvelopedSignatureTransform_t2851260348  : public Transform_t1105379765
{
public:
	// System.Boolean System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::comments
	bool ___comments_3;

public:
	inline static int32_t get_offset_of_comments_3() { return static_cast<int32_t>(offsetof(XmlDsigEnvelopedSignatureTransform_t2851260348, ___comments_3)); }
	inline bool get_comments_3() const { return ___comments_3; }
	inline bool* get_address_of_comments_3() { return &___comments_3; }
	inline void set_comments_3(bool value)
	{
		___comments_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGENVELOPEDSIGNATURETRANSFORM_T2851260348_H
#ifndef XMLDSIGXPATHTRANSFORM_T1962434658_H
#define XMLDSIGXPATHTRANSFORM_T1962434658_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigXPathTransform
struct  XmlDsigXPathTransform_t1962434658  : public Transform_t1105379765
{
public:
	// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXPathTransform::xpath
	XmlNodeList_t2551693786 * ___xpath_3;

public:
	inline static int32_t get_offset_of_xpath_3() { return static_cast<int32_t>(offsetof(XmlDsigXPathTransform_t1962434658, ___xpath_3)); }
	inline XmlNodeList_t2551693786 * get_xpath_3() const { return ___xpath_3; }
	inline XmlNodeList_t2551693786 ** get_address_of_xpath_3() { return &___xpath_3; }
	inline void set_xpath_3(XmlNodeList_t2551693786 * value)
	{
		___xpath_3 = value;
		Il2CppCodeGenWriteBarrier((&___xpath_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGXPATHTRANSFORM_T1962434658_H
#ifndef XMLDSIGXSLTTRANSFORM_T2973394665_H
#define XMLDSIGXSLTTRANSFORM_T2973394665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigXsltTransform
struct  XmlDsigXsltTransform_t2973394665  : public Transform_t1105379765
{
public:
	// System.Boolean System.Security.Cryptography.Xml.XmlDsigXsltTransform::comments
	bool ___comments_3;
	// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXsltTransform::xnl
	XmlNodeList_t2551693786 * ___xnl_4;

public:
	inline static int32_t get_offset_of_comments_3() { return static_cast<int32_t>(offsetof(XmlDsigXsltTransform_t2973394665, ___comments_3)); }
	inline bool get_comments_3() const { return ___comments_3; }
	inline bool* get_address_of_comments_3() { return &___comments_3; }
	inline void set_comments_3(bool value)
	{
		___comments_3 = value;
	}

	inline static int32_t get_offset_of_xnl_4() { return static_cast<int32_t>(offsetof(XmlDsigXsltTransform_t2973394665, ___xnl_4)); }
	inline XmlNodeList_t2551693786 * get_xnl_4() const { return ___xnl_4; }
	inline XmlNodeList_t2551693786 ** get_address_of_xnl_4() { return &___xnl_4; }
	inline void set_xnl_4(XmlNodeList_t2551693786 * value)
	{
		___xnl_4 = value;
		Il2CppCodeGenWriteBarrier((&___xnl_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGXSLTTRANSFORM_T2973394665_H
#ifndef XMLDSIGEXCC14NTRANSFORM_T586418029_H
#define XMLDSIGEXCC14NTRANSFORM_T586418029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigExcC14NTransform
struct  XmlDsigExcC14NTransform_t586418029  : public Transform_t1105379765
{
public:
	// Mono.Xml.XmlCanonicalizer System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::canonicalizer
	XmlCanonicalizer_t3076776375 * ___canonicalizer_3;
	// System.String System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::inclusiveNamespacesPrefixList
	String_t* ___inclusiveNamespacesPrefixList_4;

public:
	inline static int32_t get_offset_of_canonicalizer_3() { return static_cast<int32_t>(offsetof(XmlDsigExcC14NTransform_t586418029, ___canonicalizer_3)); }
	inline XmlCanonicalizer_t3076776375 * get_canonicalizer_3() const { return ___canonicalizer_3; }
	inline XmlCanonicalizer_t3076776375 ** get_address_of_canonicalizer_3() { return &___canonicalizer_3; }
	inline void set_canonicalizer_3(XmlCanonicalizer_t3076776375 * value)
	{
		___canonicalizer_3 = value;
		Il2CppCodeGenWriteBarrier((&___canonicalizer_3), value);
	}

	inline static int32_t get_offset_of_inclusiveNamespacesPrefixList_4() { return static_cast<int32_t>(offsetof(XmlDsigExcC14NTransform_t586418029, ___inclusiveNamespacesPrefixList_4)); }
	inline String_t* get_inclusiveNamespacesPrefixList_4() const { return ___inclusiveNamespacesPrefixList_4; }
	inline String_t** get_address_of_inclusiveNamespacesPrefixList_4() { return &___inclusiveNamespacesPrefixList_4; }
	inline void set_inclusiveNamespacesPrefixList_4(String_t* value)
	{
		___inclusiveNamespacesPrefixList_4 = value;
		Il2CppCodeGenWriteBarrier((&___inclusiveNamespacesPrefixList_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGEXCC14NTRANSFORM_T586418029_H
#ifndef KEYREFERENCE_T1254893728_H
#define KEYREFERENCE_T1254893728_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyReference
struct  KeyReference_t1254893728  : public EncryptedReference_t3282913964
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYREFERENCE_T1254893728_H
#ifndef ENCRYPTEDKEY_T805343673_H
#define ENCRYPTEDKEY_T805343673_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedKey
struct  EncryptedKey_t805343673  : public EncryptedType_t2124600183
{
public:
	// System.String System.Security.Cryptography.Xml.EncryptedKey::carriedKeyName
	String_t* ___carriedKeyName_8;
	// System.String System.Security.Cryptography.Xml.EncryptedKey::recipient
	String_t* ___recipient_9;
	// System.Security.Cryptography.Xml.ReferenceList System.Security.Cryptography.Xml.EncryptedKey::referenceList
	ReferenceList_t2222396100 * ___referenceList_10;

public:
	inline static int32_t get_offset_of_carriedKeyName_8() { return static_cast<int32_t>(offsetof(EncryptedKey_t805343673, ___carriedKeyName_8)); }
	inline String_t* get_carriedKeyName_8() const { return ___carriedKeyName_8; }
	inline String_t** get_address_of_carriedKeyName_8() { return &___carriedKeyName_8; }
	inline void set_carriedKeyName_8(String_t* value)
	{
		___carriedKeyName_8 = value;
		Il2CppCodeGenWriteBarrier((&___carriedKeyName_8), value);
	}

	inline static int32_t get_offset_of_recipient_9() { return static_cast<int32_t>(offsetof(EncryptedKey_t805343673, ___recipient_9)); }
	inline String_t* get_recipient_9() const { return ___recipient_9; }
	inline String_t** get_address_of_recipient_9() { return &___recipient_9; }
	inline void set_recipient_9(String_t* value)
	{
		___recipient_9 = value;
		Il2CppCodeGenWriteBarrier((&___recipient_9), value);
	}

	inline static int32_t get_offset_of_referenceList_10() { return static_cast<int32_t>(offsetof(EncryptedKey_t805343673, ___referenceList_10)); }
	inline ReferenceList_t2222396100 * get_referenceList_10() const { return ___referenceList_10; }
	inline ReferenceList_t2222396100 ** get_address_of_referenceList_10() { return &___referenceList_10; }
	inline void set_referenceList_10(ReferenceList_t2222396100 * value)
	{
		___referenceList_10 = value;
		Il2CppCodeGenWriteBarrier((&___referenceList_10), value);
	}
};

struct EncryptedKey_t805343673_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedKey::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_11;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedKey::<>f__switch$map7
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map7_12;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_11() { return static_cast<int32_t>(offsetof(EncryptedKey_t805343673_StaticFields, ___U3CU3Ef__switchU24map6_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_11() const { return ___U3CU3Ef__switchU24map6_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_11() { return &___U3CU3Ef__switchU24map6_11; }
	inline void set_U3CU3Ef__switchU24map6_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_12() { return static_cast<int32_t>(offsetof(EncryptedKey_t805343673_StaticFields, ___U3CU3Ef__switchU24map7_12)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map7_12() const { return ___U3CU3Ef__switchU24map7_12; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map7_12() { return &___U3CU3Ef__switchU24map7_12; }
	inline void set_U3CU3Ef__switchU24map7_12(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map7_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDKEY_T805343673_H
#ifndef XMLATTRIBUTE_T1173852259_H
#define XMLATTRIBUTE_T1173852259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttribute
struct  XmlAttribute_t1173852259  : public XmlNode_t3767805227
{
public:
	// System.Xml.XmlNameEntry System.Xml.XmlAttribute::name
	XmlNameEntry_t1073099671 * ___name_5;
	// System.Boolean System.Xml.XmlAttribute::isDefault
	bool ___isDefault_6;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_7;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlAttribute::schemaInfo
	RuntimeObject* ___schemaInfo_8;

public:
	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___name_5)); }
	inline XmlNameEntry_t1073099671 * get_name_5() const { return ___name_5; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(XmlNameEntry_t1073099671 * value)
	{
		___name_5 = value;
		Il2CppCodeGenWriteBarrier((&___name_5), value);
	}

	inline static int32_t get_offset_of_isDefault_6() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___isDefault_6)); }
	inline bool get_isDefault_6() const { return ___isDefault_6; }
	inline bool* get_address_of_isDefault_6() { return &___isDefault_6; }
	inline void set_isDefault_6(bool value)
	{
		___isDefault_6 = value;
	}

	inline static int32_t get_offset_of_lastLinkedChild_7() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___lastLinkedChild_7)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_7() const { return ___lastLinkedChild_7; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_7() { return &___lastLinkedChild_7; }
	inline void set_lastLinkedChild_7(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_7 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_7), value);
	}

	inline static int32_t get_offset_of_schemaInfo_8() { return static_cast<int32_t>(offsetof(XmlAttribute_t1173852259, ___schemaInfo_8)); }
	inline RuntimeObject* get_schemaInfo_8() const { return ___schemaInfo_8; }
	inline RuntimeObject** get_address_of_schemaInfo_8() { return &___schemaInfo_8; }
	inline void set_schemaInfo_8(RuntimeObject* value)
	{
		___schemaInfo_8 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTE_T1173852259_H
#ifndef XMLATTRIBUTECOLLECTION_T2316283784_H
#define XMLATTRIBUTECOLLECTION_T2316283784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlAttributeCollection
struct  XmlAttributeCollection_t2316283784  : public XmlNamedNodeMap_t2821286253
{
public:
	// System.Xml.XmlElement System.Xml.XmlAttributeCollection::ownerElement
	XmlElement_t561603118 * ___ownerElement_4;
	// System.Xml.XmlDocument System.Xml.XmlAttributeCollection::ownerDocument
	XmlDocument_t2837193595 * ___ownerDocument_5;

public:
	inline static int32_t get_offset_of_ownerElement_4() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t2316283784, ___ownerElement_4)); }
	inline XmlElement_t561603118 * get_ownerElement_4() const { return ___ownerElement_4; }
	inline XmlElement_t561603118 ** get_address_of_ownerElement_4() { return &___ownerElement_4; }
	inline void set_ownerElement_4(XmlElement_t561603118 * value)
	{
		___ownerElement_4 = value;
		Il2CppCodeGenWriteBarrier((&___ownerElement_4), value);
	}

	inline static int32_t get_offset_of_ownerDocument_5() { return static_cast<int32_t>(offsetof(XmlAttributeCollection_t2316283784, ___ownerDocument_5)); }
	inline XmlDocument_t2837193595 * get_ownerDocument_5() const { return ___ownerDocument_5; }
	inline XmlDocument_t2837193595 ** get_address_of_ownerDocument_5() { return &___ownerDocument_5; }
	inline void set_ownerDocument_5(XmlDocument_t2837193595 * value)
	{
		___ownerDocument_5 = value;
		Il2CppCodeGenWriteBarrier((&___ownerDocument_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLATTRIBUTECOLLECTION_T2316283784_H
#ifndef XMLDSIGBASE64TRANSFORM_T260084727_H
#define XMLDSIGBASE64TRANSFORM_T260084727_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigBase64Transform
struct  XmlDsigBase64Transform_t260084727  : public Transform_t1105379765
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGBASE64TRANSFORM_T260084727_H
#ifndef XMLDSIGC14NTRANSFORM_T3949211521_H
#define XMLDSIGC14NTRANSFORM_T3949211521_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigC14NTransform
struct  XmlDsigC14NTransform_t3949211521  : public Transform_t1105379765
{
public:
	// Mono.Xml.XmlCanonicalizer System.Security.Cryptography.Xml.XmlDsigC14NTransform::canonicalizer
	XmlCanonicalizer_t3076776375 * ___canonicalizer_3;

public:
	inline static int32_t get_offset_of_canonicalizer_3() { return static_cast<int32_t>(offsetof(XmlDsigC14NTransform_t3949211521, ___canonicalizer_3)); }
	inline XmlCanonicalizer_t3076776375 * get_canonicalizer_3() const { return ___canonicalizer_3; }
	inline XmlCanonicalizer_t3076776375 ** get_address_of_canonicalizer_3() { return &___canonicalizer_3; }
	inline void set_canonicalizer_3(XmlCanonicalizer_t3076776375 * value)
	{
		___canonicalizer_3 = value;
		Il2CppCodeGenWriteBarrier((&___canonicalizer_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGC14NTRANSFORM_T3949211521_H
#ifndef ENCRYPTEDDATA_T3129875747_H
#define ENCRYPTEDDATA_T3129875747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedData
struct  EncryptedData_t3129875747  : public EncryptedType_t2124600183
{
public:

public:
};

struct EncryptedData_t3129875747_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedData::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_8;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_8() { return static_cast<int32_t>(offsetof(EncryptedData_t3129875747_StaticFields, ___U3CU3Ef__switchU24map5_8)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_8() const { return ___U3CU3Ef__switchU24map5_8; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_8() { return &___U3CU3Ef__switchU24map5_8; }
	inline void set_U3CU3Ef__switchU24map5_8(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3129875747_H
#ifndef DSA_T2386879874_H
#define DSA_T2386879874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSA
struct  DSA_t2386879874  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSA_T2386879874_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef DSAKEYVALUE_T682905322_H
#define DSAKEYVALUE_T682905322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.DSAKeyValue
struct  DSAKeyValue_t682905322  : public KeyInfoClause_t4210275625
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.Xml.DSAKeyValue::dsa
	DSA_t2386879874 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSAKeyValue_t682905322, ___dsa_0)); }
	inline DSA_t2386879874 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t2386879874 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t2386879874 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DSAKEYVALUE_T682905322_H
#ifndef RSA_T2385438082_H
#define RSA_T2385438082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RSA
struct  RSA_t2385438082  : public AsymmetricAlgorithm_t932037087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSA_T2385438082_H
#ifndef KEYINFONAME_T2325312217_H
#define KEYINFONAME_T2325312217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.KeyInfoName
struct  KeyInfoName_t2325312217  : public KeyInfoClause_t4210275625
{
public:
	// System.String System.Security.Cryptography.Xml.KeyInfoName::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(KeyInfoName_t2325312217, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYINFONAME_T2325312217_H
#ifndef DATAREFERENCE_T3754427214_H
#define DATAREFERENCE_T3754427214_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.DataReference
struct  DataReference_t3754427214  : public EncryptedReference_t3282913964
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATAREFERENCE_T3754427214_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef STREAMREADER_T4009935899_H
#define STREAMREADER_T4009935899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t4009935899  : public TextReader_t283511965
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t4116647657* ___input_buffer_2;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t3528271667* ___decoded_buffer_3;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_4;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_5;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_6;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_7;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1523322056 * ___encoding_8;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t2204182725 * ___decoder_9;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1273022909 * ___base_stream_10;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_11;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t * ___line_builder_12;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_14;

public:
	inline static int32_t get_offset_of_input_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___input_buffer_2)); }
	inline ByteU5BU5D_t4116647657* get_input_buffer_2() const { return ___input_buffer_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_input_buffer_2() { return &___input_buffer_2; }
	inline void set_input_buffer_2(ByteU5BU5D_t4116647657* value)
	{
		___input_buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___input_buffer_2), value);
	}

	inline static int32_t get_offset_of_decoded_buffer_3() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_buffer_3)); }
	inline CharU5BU5D_t3528271667* get_decoded_buffer_3() const { return ___decoded_buffer_3; }
	inline CharU5BU5D_t3528271667** get_address_of_decoded_buffer_3() { return &___decoded_buffer_3; }
	inline void set_decoded_buffer_3(CharU5BU5D_t3528271667* value)
	{
		___decoded_buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___decoded_buffer_3), value);
	}

	inline static int32_t get_offset_of_decoded_count_4() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoded_count_4)); }
	inline int32_t get_decoded_count_4() const { return ___decoded_count_4; }
	inline int32_t* get_address_of_decoded_count_4() { return &___decoded_count_4; }
	inline void set_decoded_count_4(int32_t value)
	{
		___decoded_count_4 = value;
	}

	inline static int32_t get_offset_of_pos_5() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___pos_5)); }
	inline int32_t get_pos_5() const { return ___pos_5; }
	inline int32_t* get_address_of_pos_5() { return &___pos_5; }
	inline void set_pos_5(int32_t value)
	{
		___pos_5 = value;
	}

	inline static int32_t get_offset_of_buffer_size_6() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___buffer_size_6)); }
	inline int32_t get_buffer_size_6() const { return ___buffer_size_6; }
	inline int32_t* get_address_of_buffer_size_6() { return &___buffer_size_6; }
	inline void set_buffer_size_6(int32_t value)
	{
		___buffer_size_6 = value;
	}

	inline static int32_t get_offset_of_do_checks_7() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___do_checks_7)); }
	inline int32_t get_do_checks_7() const { return ___do_checks_7; }
	inline int32_t* get_address_of_do_checks_7() { return &___do_checks_7; }
	inline void set_do_checks_7(int32_t value)
	{
		___do_checks_7 = value;
	}

	inline static int32_t get_offset_of_encoding_8() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___encoding_8)); }
	inline Encoding_t1523322056 * get_encoding_8() const { return ___encoding_8; }
	inline Encoding_t1523322056 ** get_address_of_encoding_8() { return &___encoding_8; }
	inline void set_encoding_8(Encoding_t1523322056 * value)
	{
		___encoding_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_8), value);
	}

	inline static int32_t get_offset_of_decoder_9() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___decoder_9)); }
	inline Decoder_t2204182725 * get_decoder_9() const { return ___decoder_9; }
	inline Decoder_t2204182725 ** get_address_of_decoder_9() { return &___decoder_9; }
	inline void set_decoder_9(Decoder_t2204182725 * value)
	{
		___decoder_9 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_9), value);
	}

	inline static int32_t get_offset_of_base_stream_10() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___base_stream_10)); }
	inline Stream_t1273022909 * get_base_stream_10() const { return ___base_stream_10; }
	inline Stream_t1273022909 ** get_address_of_base_stream_10() { return &___base_stream_10; }
	inline void set_base_stream_10(Stream_t1273022909 * value)
	{
		___base_stream_10 = value;
		Il2CppCodeGenWriteBarrier((&___base_stream_10), value);
	}

	inline static int32_t get_offset_of_mayBlock_11() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___mayBlock_11)); }
	inline bool get_mayBlock_11() const { return ___mayBlock_11; }
	inline bool* get_address_of_mayBlock_11() { return &___mayBlock_11; }
	inline void set_mayBlock_11(bool value)
	{
		___mayBlock_11 = value;
	}

	inline static int32_t get_offset_of_line_builder_12() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___line_builder_12)); }
	inline StringBuilder_t * get_line_builder_12() const { return ___line_builder_12; }
	inline StringBuilder_t ** get_address_of_line_builder_12() { return &___line_builder_12; }
	inline void set_line_builder_12(StringBuilder_t * value)
	{
		___line_builder_12 = value;
		Il2CppCodeGenWriteBarrier((&___line_builder_12), value);
	}

	inline static int32_t get_offset_of_foundCR_14() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899, ___foundCR_14)); }
	inline bool get_foundCR_14() const { return ___foundCR_14; }
	inline bool* get_address_of_foundCR_14() { return &___foundCR_14; }
	inline void set_foundCR_14(bool value)
	{
		___foundCR_14 = value;
	}
};

struct StreamReader_t4009935899_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t4009935899 * ___Null_13;

public:
	inline static int32_t get_offset_of_Null_13() { return static_cast<int32_t>(offsetof(StreamReader_t4009935899_StaticFields, ___Null_13)); }
	inline StreamReader_t4009935899 * get_Null_13() const { return ___Null_13; }
	inline StreamReader_t4009935899 ** get_address_of_Null_13() { return &___Null_13; }
	inline void set_Null_13(StreamReader_t4009935899 * value)
	{
		___Null_13 = value;
		Il2CppCodeGenWriteBarrier((&___Null_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMREADER_T4009935899_H
#ifndef XMLCHARACTERDATA_T1167807131_H
#define XMLCHARACTERDATA_T1167807131_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlCharacterData
struct  XmlCharacterData_t1167807131  : public XmlLinkedNode_t1437094927
{
public:
	// System.String System.Xml.XmlCharacterData::data
	String_t* ___data_6;

public:
	inline static int32_t get_offset_of_data_6() { return static_cast<int32_t>(offsetof(XmlCharacterData_t1167807131, ___data_6)); }
	inline String_t* get_data_6() const { return ___data_6; }
	inline String_t** get_address_of_data_6() { return &___data_6; }
	inline void set_data_6(String_t* value)
	{
		___data_6 = value;
		Il2CppCodeGenWriteBarrier((&___data_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLCHARACTERDATA_T1167807131_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255362  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D1_0;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D2_1;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D3_2;
	// <PrivateImplementationDetails>/$ArrayType$8 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU248_t3244137464  ___U24U24fieldU2D4_3;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D1_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___U24U24fieldU2D1_0)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D1_0() const { return ___U24U24fieldU2D1_0; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D1_0() { return &___U24U24fieldU2D1_0; }
	inline void set_U24U24fieldU2D1_0(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D1_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___U24U24fieldU2D2_1)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D2_1() const { return ___U24U24fieldU2D2_1; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D2_1() { return &___U24U24fieldU2D2_1; }
	inline void set_U24U24fieldU2D2_1(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D2_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___U24U24fieldU2D3_2)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D3_2() const { return ___U24U24fieldU2D3_2; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D3_2() { return &___U24U24fieldU2D3_2; }
	inline void set_U24U24fieldU2D3_2(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D3_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255362_StaticFields, ___U24U24fieldU2D4_3)); }
	inline U24ArrayTypeU248_t3244137464  get_U24U24fieldU2D4_3() const { return ___U24U24fieldU2D4_3; }
	inline U24ArrayTypeU248_t3244137464 * get_address_of_U24U24fieldU2D4_3() { return &___U24U24fieldU2D4_3; }
	inline void set_U24U24fieldU2D4_3(U24ArrayTypeU248_t3244137464  value)
	{
		___U24U24fieldU2D4_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255362_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Boolean System.IO.MemoryStream::canWrite
	bool ___canWrite_2;
	// System.Boolean System.IO.MemoryStream::allowGetBuffer
	bool ___allowGetBuffer_3;
	// System.Int32 System.IO.MemoryStream::capacity
	int32_t ___capacity_4;
	// System.Int32 System.IO.MemoryStream::length
	int32_t ___length_5;
	// System.Byte[] System.IO.MemoryStream::internalBuffer
	ByteU5BU5D_t4116647657* ___internalBuffer_6;
	// System.Int32 System.IO.MemoryStream::initialIndex
	int32_t ___initialIndex_7;
	// System.Boolean System.IO.MemoryStream::expandable
	bool ___expandable_8;
	// System.Boolean System.IO.MemoryStream::streamClosed
	bool ___streamClosed_9;
	// System.Int32 System.IO.MemoryStream::position
	int32_t ___position_10;
	// System.Int32 System.IO.MemoryStream::dirty_bytes
	int32_t ___dirty_bytes_11;

public:
	inline static int32_t get_offset_of_canWrite_2() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___canWrite_2)); }
	inline bool get_canWrite_2() const { return ___canWrite_2; }
	inline bool* get_address_of_canWrite_2() { return &___canWrite_2; }
	inline void set_canWrite_2(bool value)
	{
		___canWrite_2 = value;
	}

	inline static int32_t get_offset_of_allowGetBuffer_3() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___allowGetBuffer_3)); }
	inline bool get_allowGetBuffer_3() const { return ___allowGetBuffer_3; }
	inline bool* get_address_of_allowGetBuffer_3() { return &___allowGetBuffer_3; }
	inline void set_allowGetBuffer_3(bool value)
	{
		___allowGetBuffer_3 = value;
	}

	inline static int32_t get_offset_of_capacity_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___capacity_4)); }
	inline int32_t get_capacity_4() const { return ___capacity_4; }
	inline int32_t* get_address_of_capacity_4() { return &___capacity_4; }
	inline void set_capacity_4(int32_t value)
	{
		___capacity_4 = value;
	}

	inline static int32_t get_offset_of_length_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___length_5)); }
	inline int32_t get_length_5() const { return ___length_5; }
	inline int32_t* get_address_of_length_5() { return &___length_5; }
	inline void set_length_5(int32_t value)
	{
		___length_5 = value;
	}

	inline static int32_t get_offset_of_internalBuffer_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___internalBuffer_6)); }
	inline ByteU5BU5D_t4116647657* get_internalBuffer_6() const { return ___internalBuffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_internalBuffer_6() { return &___internalBuffer_6; }
	inline void set_internalBuffer_6(ByteU5BU5D_t4116647657* value)
	{
		___internalBuffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___internalBuffer_6), value);
	}

	inline static int32_t get_offset_of_initialIndex_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___initialIndex_7)); }
	inline int32_t get_initialIndex_7() const { return ___initialIndex_7; }
	inline int32_t* get_address_of_initialIndex_7() { return &___initialIndex_7; }
	inline void set_initialIndex_7(int32_t value)
	{
		___initialIndex_7 = value;
	}

	inline static int32_t get_offset_of_expandable_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___expandable_8)); }
	inline bool get_expandable_8() const { return ___expandable_8; }
	inline bool* get_address_of_expandable_8() { return &___expandable_8; }
	inline void set_expandable_8(bool value)
	{
		___expandable_8 = value;
	}

	inline static int32_t get_offset_of_streamClosed_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___streamClosed_9)); }
	inline bool get_streamClosed_9() const { return ___streamClosed_9; }
	inline bool* get_address_of_streamClosed_9() { return &___streamClosed_9; }
	inline void set_streamClosed_9(bool value)
	{
		___streamClosed_9 = value;
	}

	inline static int32_t get_offset_of_position_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___position_10)); }
	inline int32_t get_position_10() const { return ___position_10; }
	inline int32_t* get_address_of_position_10() { return &___position_10; }
	inline void set_position_10(int32_t value)
	{
		___position_10 = value;
	}

	inline static int32_t get_offset_of_dirty_bytes_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ___dirty_bytes_11)); }
	inline int32_t get_dirty_bytes_11() const { return ___dirty_bytes_11; }
	inline int32_t* get_address_of_dirty_bytes_11() { return &___dirty_bytes_11; }
	inline void set_dirty_bytes_11(int32_t value)
	{
		___dirty_bytes_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef XMLDSIGC14NWITHCOMMENTSTRANSFORM_T1074875822_H
#define XMLDSIGC14NWITHCOMMENTSTRANSFORM_T1074875822_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigC14NWithCommentsTransform
struct  XmlDsigC14NWithCommentsTransform_t1074875822  : public XmlDsigC14NTransform_t3949211521
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGC14NWITHCOMMENTSTRANSFORM_T1074875822_H
#ifndef XMLELEMENT_T561603118_H
#define XMLELEMENT_T561603118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlElement
struct  XmlElement_t561603118  : public XmlLinkedNode_t1437094927
{
public:
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_t2316283784 * ___attributes_6;
	// System.Xml.XmlNameEntry System.Xml.XmlElement::name
	XmlNameEntry_t1073099671 * ___name_7;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastLinkedChild
	XmlLinkedNode_t1437094927 * ___lastLinkedChild_8;
	// System.Boolean System.Xml.XmlElement::isNotEmpty
	bool ___isNotEmpty_9;
	// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlElement::schemaInfo
	RuntimeObject* ___schemaInfo_10;

public:
	inline static int32_t get_offset_of_attributes_6() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___attributes_6)); }
	inline XmlAttributeCollection_t2316283784 * get_attributes_6() const { return ___attributes_6; }
	inline XmlAttributeCollection_t2316283784 ** get_address_of_attributes_6() { return &___attributes_6; }
	inline void set_attributes_6(XmlAttributeCollection_t2316283784 * value)
	{
		___attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___name_7)); }
	inline XmlNameEntry_t1073099671 * get_name_7() const { return ___name_7; }
	inline XmlNameEntry_t1073099671 ** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(XmlNameEntry_t1073099671 * value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_lastLinkedChild_8() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___lastLinkedChild_8)); }
	inline XmlLinkedNode_t1437094927 * get_lastLinkedChild_8() const { return ___lastLinkedChild_8; }
	inline XmlLinkedNode_t1437094927 ** get_address_of_lastLinkedChild_8() { return &___lastLinkedChild_8; }
	inline void set_lastLinkedChild_8(XmlLinkedNode_t1437094927 * value)
	{
		___lastLinkedChild_8 = value;
		Il2CppCodeGenWriteBarrier((&___lastLinkedChild_8), value);
	}

	inline static int32_t get_offset_of_isNotEmpty_9() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___isNotEmpty_9)); }
	inline bool get_isNotEmpty_9() const { return ___isNotEmpty_9; }
	inline bool* get_address_of_isNotEmpty_9() { return &___isNotEmpty_9; }
	inline void set_isNotEmpty_9(bool value)
	{
		___isNotEmpty_9 = value;
	}

	inline static int32_t get_offset_of_schemaInfo_10() { return static_cast<int32_t>(offsetof(XmlElement_t561603118, ___schemaInfo_10)); }
	inline RuntimeObject* get_schemaInfo_10() const { return ___schemaInfo_10; }
	inline RuntimeObject** get_address_of_schemaInfo_10() { return &___schemaInfo_10; }
	inline void set_schemaInfo_10(RuntimeObject* value)
	{
		___schemaInfo_10 = value;
		Il2CppCodeGenWriteBarrier((&___schemaInfo_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLELEMENT_T561603118_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef PADDINGMODE_T2546806710_H
#define PADDINGMODE_T2546806710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t2546806710 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t2546806710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T2546806710_H
#ifndef RUNTIMEFIELDHANDLE_T1871169219_H
#define RUNTIMEFIELDHANDLE_T1871169219_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t1871169219 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t1871169219, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEFIELDHANDLE_T1871169219_H
#ifndef CIPHERMODE_T84635067_H
#define CIPHERMODE_T84635067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t84635067 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t84635067, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T84635067_H
#ifndef STRINGREADER_T3465604688_H
#define STRINGREADER_T3465604688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StringReader
struct  StringReader_t3465604688  : public TextReader_t283511965
{
public:
	// System.String System.IO.StringReader::source
	String_t* ___source_2;
	// System.Int32 System.IO.StringReader::nextChar
	int32_t ___nextChar_3;
	// System.Int32 System.IO.StringReader::sourceLength
	int32_t ___sourceLength_4;

public:
	inline static int32_t get_offset_of_source_2() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___source_2)); }
	inline String_t* get_source_2() const { return ___source_2; }
	inline String_t** get_address_of_source_2() { return &___source_2; }
	inline void set_source_2(String_t* value)
	{
		___source_2 = value;
		Il2CppCodeGenWriteBarrier((&___source_2), value);
	}

	inline static int32_t get_offset_of_nextChar_3() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___nextChar_3)); }
	inline int32_t get_nextChar_3() const { return ___nextChar_3; }
	inline int32_t* get_address_of_nextChar_3() { return &___nextChar_3; }
	inline void set_nextChar_3(int32_t value)
	{
		___nextChar_3 = value;
	}

	inline static int32_t get_offset_of_sourceLength_4() { return static_cast<int32_t>(offsetof(StringReader_t3465604688, ___sourceLength_4)); }
	inline int32_t get_sourceLength_4() const { return ___sourceLength_4; }
	inline int32_t* get_address_of_sourceLength_4() { return &___sourceLength_4; }
	inline void set_sourceLength_4(int32_t value)
	{
		___sourceLength_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGREADER_T3465604688_H
#ifndef CRYPTOGRAPHICEXCEPTION_T248831461_H
#define CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t248831461  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T248831461_H
#ifndef XMLNODETYPE_T1672767151_H
#define XMLNODETYPE_T1672767151_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlNodeType
struct  XmlNodeType_t1672767151 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XmlNodeType_t1672767151, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLNODETYPE_T1672767151_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef XMLDSIGEXCC14NWITHCOMMENTSTRANSFORM_T1461379654_H
#define XMLDSIGEXCC14NWITHCOMMENTSTRANSFORM_T1461379654_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.XmlDsigExcC14NWithCommentsTransform
struct  XmlDsigExcC14NWithCommentsTransform_t1461379654  : public XmlDsigExcC14NTransform_t586418029
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLDSIGEXCC14NWITHCOMMENTSTRANSFORM_T1461379654_H
#ifndef CRYPTOSTREAMMODE_T3639658227_H
#define CRYPTOSTREAMMODE_T3639658227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStreamMode
struct  CryptoStreamMode_t3639658227 
{
public:
	// System.Int32 System.Security.Cryptography.CryptoStreamMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CryptoStreamMode_t3639658227, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAMMODE_T3639658227_H
#ifndef ENCRYPTEDXML_T2455217639_H
#define ENCRYPTEDXML_T2455217639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Xml.EncryptedXml
struct  EncryptedXml_t2455217639  : public RuntimeObject
{
public:
	// System.Text.Encoding System.Security.Cryptography.Xml.EncryptedXml::encoding
	Encoding_t1523322056 * ___encoding_0;
	// System.Collections.Hashtable System.Security.Cryptography.Xml.EncryptedXml::keyNameMapping
	Hashtable_t1853889766 * ___keyNameMapping_1;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.Xml.EncryptedXml::mode
	int32_t ___mode_2;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.Xml.EncryptedXml::padding
	int32_t ___padding_3;
	// System.Xml.XmlDocument System.Security.Cryptography.Xml.EncryptedXml::document
	XmlDocument_t2837193595 * ___document_4;

public:
	inline static int32_t get_offset_of_encoding_0() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639, ___encoding_0)); }
	inline Encoding_t1523322056 * get_encoding_0() const { return ___encoding_0; }
	inline Encoding_t1523322056 ** get_address_of_encoding_0() { return &___encoding_0; }
	inline void set_encoding_0(Encoding_t1523322056 * value)
	{
		___encoding_0 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_0), value);
	}

	inline static int32_t get_offset_of_keyNameMapping_1() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639, ___keyNameMapping_1)); }
	inline Hashtable_t1853889766 * get_keyNameMapping_1() const { return ___keyNameMapping_1; }
	inline Hashtable_t1853889766 ** get_address_of_keyNameMapping_1() { return &___keyNameMapping_1; }
	inline void set_keyNameMapping_1(Hashtable_t1853889766 * value)
	{
		___keyNameMapping_1 = value;
		Il2CppCodeGenWriteBarrier((&___keyNameMapping_1), value);
	}

	inline static int32_t get_offset_of_mode_2() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639, ___mode_2)); }
	inline int32_t get_mode_2() const { return ___mode_2; }
	inline int32_t* get_address_of_mode_2() { return &___mode_2; }
	inline void set_mode_2(int32_t value)
	{
		___mode_2 = value;
	}

	inline static int32_t get_offset_of_padding_3() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639, ___padding_3)); }
	inline int32_t get_padding_3() const { return ___padding_3; }
	inline int32_t* get_address_of_padding_3() { return &___padding_3; }
	inline void set_padding_3(int32_t value)
	{
		___padding_3 = value;
	}

	inline static int32_t get_offset_of_document_4() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639, ___document_4)); }
	inline XmlDocument_t2837193595 * get_document_4() const { return ___document_4; }
	inline XmlDocument_t2837193595 ** get_address_of_document_4() { return &___document_4; }
	inline void set_document_4(XmlDocument_t2837193595 * value)
	{
		___document_4 = value;
		Il2CppCodeGenWriteBarrier((&___document_4), value);
	}
};

struct EncryptedXml_t2455217639_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedXml::<>f__switch$map8
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map8_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.Xml.EncryptedXml::<>f__switch$map9
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map9_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_5() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639_StaticFields, ___U3CU3Ef__switchU24map8_5)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map8_5() const { return ___U3CU3Ef__switchU24map8_5; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map8_5() { return &___U3CU3Ef__switchU24map8_5; }
	inline void set_U3CU3Ef__switchU24map8_5(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map8_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_6() { return static_cast<int32_t>(offsetof(EncryptedXml_t2455217639_StaticFields, ___U3CU3Ef__switchU24map9_6)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map9_6() const { return ___U3CU3Ef__switchU24map9_6; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map9_6() { return &___U3CU3Ef__switchU24map9_6; }
	inline void set_U3CU3Ef__switchU24map9_6(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map9_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDXML_T2455217639_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	RuntimeObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___actual_value_13)); }
	inline RuntimeObject * get_actual_value_13() const { return ___actual_value_13; }
	inline RuntimeObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(RuntimeObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier((&___actual_value_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifndef SYMMETRICALGORITHM_T4254223087_H
#define SYMMETRICALGORITHM_T4254223087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t4254223087  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t4116647657* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t722666473* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t722666473* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___IVValue_1)); }
	inline ByteU5BU5D_t4116647657* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t4116647657* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___KeyValue_3)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t722666473* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t722666473* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t722666473* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t722666473** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t722666473* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t4254223087, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T4254223087_H
#ifndef XMLWHITESPACE_T131741354_H
#define XMLWHITESPACE_T131741354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Xml.XmlWhitespace
struct  XmlWhitespace_t131741354  : public XmlCharacterData_t1167807131
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWHITESPACE_T131741354_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
#ifndef CRYPTOSTREAM_T2702504504_H
#define CRYPTOSTREAM_T2702504504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoStream
struct  CryptoStream_t2702504504  : public Stream_t1273022909
{
public:
	// System.IO.Stream System.Security.Cryptography.CryptoStream::_stream
	Stream_t1273022909 * ____stream_2;
	// System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.CryptoStream::_transform
	RuntimeObject* ____transform_3;
	// System.Security.Cryptography.CryptoStreamMode System.Security.Cryptography.CryptoStream::_mode
	int32_t ____mode_4;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_currentBlock
	ByteU5BU5D_t4116647657* ____currentBlock_5;
	// System.Boolean System.Security.Cryptography.CryptoStream::_disposed
	bool ____disposed_6;
	// System.Boolean System.Security.Cryptography.CryptoStream::_flushedFinalBlock
	bool ____flushedFinalBlock_7;
	// System.Int32 System.Security.Cryptography.CryptoStream::_partialCount
	int32_t ____partialCount_8;
	// System.Boolean System.Security.Cryptography.CryptoStream::_endOfStream
	bool ____endOfStream_9;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_waitingBlock
	ByteU5BU5D_t4116647657* ____waitingBlock_10;
	// System.Int32 System.Security.Cryptography.CryptoStream::_waitingCount
	int32_t ____waitingCount_11;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_transformedBlock
	ByteU5BU5D_t4116647657* ____transformedBlock_12;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedPos
	int32_t ____transformedPos_13;
	// System.Int32 System.Security.Cryptography.CryptoStream::_transformedCount
	int32_t ____transformedCount_14;
	// System.Byte[] System.Security.Cryptography.CryptoStream::_workingBlock
	ByteU5BU5D_t4116647657* ____workingBlock_15;
	// System.Int32 System.Security.Cryptography.CryptoStream::_workingCount
	int32_t ____workingCount_16;

public:
	inline static int32_t get_offset_of__stream_2() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____stream_2)); }
	inline Stream_t1273022909 * get__stream_2() const { return ____stream_2; }
	inline Stream_t1273022909 ** get_address_of__stream_2() { return &____stream_2; }
	inline void set__stream_2(Stream_t1273022909 * value)
	{
		____stream_2 = value;
		Il2CppCodeGenWriteBarrier((&____stream_2), value);
	}

	inline static int32_t get_offset_of__transform_3() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transform_3)); }
	inline RuntimeObject* get__transform_3() const { return ____transform_3; }
	inline RuntimeObject** get_address_of__transform_3() { return &____transform_3; }
	inline void set__transform_3(RuntimeObject* value)
	{
		____transform_3 = value;
		Il2CppCodeGenWriteBarrier((&____transform_3), value);
	}

	inline static int32_t get_offset_of__mode_4() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____mode_4)); }
	inline int32_t get__mode_4() const { return ____mode_4; }
	inline int32_t* get_address_of__mode_4() { return &____mode_4; }
	inline void set__mode_4(int32_t value)
	{
		____mode_4 = value;
	}

	inline static int32_t get_offset_of__currentBlock_5() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____currentBlock_5)); }
	inline ByteU5BU5D_t4116647657* get__currentBlock_5() const { return ____currentBlock_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__currentBlock_5() { return &____currentBlock_5; }
	inline void set__currentBlock_5(ByteU5BU5D_t4116647657* value)
	{
		____currentBlock_5 = value;
		Il2CppCodeGenWriteBarrier((&____currentBlock_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}

	inline static int32_t get_offset_of__flushedFinalBlock_7() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____flushedFinalBlock_7)); }
	inline bool get__flushedFinalBlock_7() const { return ____flushedFinalBlock_7; }
	inline bool* get_address_of__flushedFinalBlock_7() { return &____flushedFinalBlock_7; }
	inline void set__flushedFinalBlock_7(bool value)
	{
		____flushedFinalBlock_7 = value;
	}

	inline static int32_t get_offset_of__partialCount_8() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____partialCount_8)); }
	inline int32_t get__partialCount_8() const { return ____partialCount_8; }
	inline int32_t* get_address_of__partialCount_8() { return &____partialCount_8; }
	inline void set__partialCount_8(int32_t value)
	{
		____partialCount_8 = value;
	}

	inline static int32_t get_offset_of__endOfStream_9() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____endOfStream_9)); }
	inline bool get__endOfStream_9() const { return ____endOfStream_9; }
	inline bool* get_address_of__endOfStream_9() { return &____endOfStream_9; }
	inline void set__endOfStream_9(bool value)
	{
		____endOfStream_9 = value;
	}

	inline static int32_t get_offset_of__waitingBlock_10() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____waitingBlock_10)); }
	inline ByteU5BU5D_t4116647657* get__waitingBlock_10() const { return ____waitingBlock_10; }
	inline ByteU5BU5D_t4116647657** get_address_of__waitingBlock_10() { return &____waitingBlock_10; }
	inline void set__waitingBlock_10(ByteU5BU5D_t4116647657* value)
	{
		____waitingBlock_10 = value;
		Il2CppCodeGenWriteBarrier((&____waitingBlock_10), value);
	}

	inline static int32_t get_offset_of__waitingCount_11() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____waitingCount_11)); }
	inline int32_t get__waitingCount_11() const { return ____waitingCount_11; }
	inline int32_t* get_address_of__waitingCount_11() { return &____waitingCount_11; }
	inline void set__waitingCount_11(int32_t value)
	{
		____waitingCount_11 = value;
	}

	inline static int32_t get_offset_of__transformedBlock_12() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedBlock_12)); }
	inline ByteU5BU5D_t4116647657* get__transformedBlock_12() const { return ____transformedBlock_12; }
	inline ByteU5BU5D_t4116647657** get_address_of__transformedBlock_12() { return &____transformedBlock_12; }
	inline void set__transformedBlock_12(ByteU5BU5D_t4116647657* value)
	{
		____transformedBlock_12 = value;
		Il2CppCodeGenWriteBarrier((&____transformedBlock_12), value);
	}

	inline static int32_t get_offset_of__transformedPos_13() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedPos_13)); }
	inline int32_t get__transformedPos_13() const { return ____transformedPos_13; }
	inline int32_t* get_address_of__transformedPos_13() { return &____transformedPos_13; }
	inline void set__transformedPos_13(int32_t value)
	{
		____transformedPos_13 = value;
	}

	inline static int32_t get_offset_of__transformedCount_14() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____transformedCount_14)); }
	inline int32_t get__transformedCount_14() const { return ____transformedCount_14; }
	inline int32_t* get_address_of__transformedCount_14() { return &____transformedCount_14; }
	inline void set__transformedCount_14(int32_t value)
	{
		____transformedCount_14 = value;
	}

	inline static int32_t get_offset_of__workingBlock_15() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____workingBlock_15)); }
	inline ByteU5BU5D_t4116647657* get__workingBlock_15() const { return ____workingBlock_15; }
	inline ByteU5BU5D_t4116647657** get_address_of__workingBlock_15() { return &____workingBlock_15; }
	inline void set__workingBlock_15(ByteU5BU5D_t4116647657* value)
	{
		____workingBlock_15 = value;
		Il2CppCodeGenWriteBarrier((&____workingBlock_15), value);
	}

	inline static int32_t get_offset_of__workingCount_16() { return static_cast<int32_t>(offsetof(CryptoStream_t2702504504, ____workingCount_16)); }
	inline int32_t get__workingCount_16() const { return ____workingCount_16; }
	inline int32_t* get_address_of__workingCount_16() { return &____workingCount_16; }
	inline void set__workingCount_16(int32_t value)
	{
		____workingCount_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOSTREAM_T2702504504_H
#ifndef DES_T821106792_H
#define DES_T821106792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t821106792  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct DES_t821106792_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t4116647658* ___weakKeys_11;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t4116647658* ___semiWeakKeys_12;

public:
	inline static int32_t get_offset_of_weakKeys_11() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___weakKeys_11)); }
	inline ByteU5BU2CU5D_t4116647658* get_weakKeys_11() const { return ___weakKeys_11; }
	inline ByteU5BU2CU5D_t4116647658** get_address_of_weakKeys_11() { return &___weakKeys_11; }
	inline void set_weakKeys_11(ByteU5BU2CU5D_t4116647658* value)
	{
		___weakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_11), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_12() { return static_cast<int32_t>(offsetof(DES_t821106792_StaticFields, ___semiWeakKeys_12)); }
	inline ByteU5BU2CU5D_t4116647658* get_semiWeakKeys_12() const { return ___semiWeakKeys_12; }
	inline ByteU5BU2CU5D_t4116647658** get_address_of_semiWeakKeys_12() { return &___semiWeakKeys_12; }
	inline void set_semiWeakKeys_12(ByteU5BU2CU5D_t4116647658* value)
	{
		___semiWeakKeys_12 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T821106792_H
#ifndef TRIPLEDES_T92303514_H
#define TRIPLEDES_T92303514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.TripleDES
struct  TripleDES_t92303514  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIPLEDES_T92303514_H
#ifndef RIJNDAEL_T2986313634_H
#define RIJNDAEL_T2986313634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Rijndael
struct  Rijndael_t2986313634  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIJNDAEL_T2986313634_H
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.XmlElement[]
struct XmlElementU5BU5D_t1541675355  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) XmlElement_t561603118 * m_Items[1];

public:
	inline XmlElement_t561603118 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlElement_t561603118 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlElement_t561603118 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline XmlElement_t561603118 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlElement_t561603118 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlElement_t561603118 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t457913172  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ByteU5BU5D_t4116647657* m_Items[1];

public:
	inline ByteU5BU5D_t4116647657* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_t4116647657** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_t4116647657* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ByteU5BU5D_t4116647657* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_t4116647657** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_t4116647657* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m182537451_gshared (Dictionary_2_t3384741 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(!0,!1)
extern "C"  void Dictionary_2_Add_m1279427033_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3959998165_gshared (Dictionary_2_t3384741 * __this, RuntimeObject * p0, int32_t* p1, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.StringBuilder::.ctor()
extern "C"  void StringBuilder__ctor_m3121283359 (StringBuilder_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherValue(System.Byte[])
extern "C"  void CipherData_set_CipherValue_m2389002018 (CipherData_t4021546579 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.CipherData::get_CipherValue()
extern "C"  ByteU5BU5D_t4116647657* CipherData_get_CipherValue_m4127530842 (CipherData_t4021546579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C"  void CryptographicException__ctor_m503735289 (CryptographicException_t248831461 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.CipherReference System.Security.Cryptography.Xml.CipherData::get_CipherReference()
extern "C"  CipherReference_t859746092 * CipherData_get_CipherReference_m787313783 (CipherData_t4021546579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String,System.String)
extern "C"  XmlElement_t561603118 * XmlDocument_CreateElement_m3950844455 (XmlDocument_t2837193595 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherReference::GetXml()
extern "C"  XmlElement_t561603118 * CipherReference_GetXml_m3092490659 (CipherReference_t859746092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
extern "C"  void MemoryStream__ctor_m4100805873 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.ToBase64Transform::.ctor()
extern "C"  void ToBase64Transform__ctor_m3068884132 (ToBase64Transform_t2551557057 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::.ctor(System.IO.Stream,System.Security.Cryptography.ICryptoTransform,System.Security.Cryptography.CryptoStreamMode)
extern "C"  void CryptoStream__ctor_m2579441618 (CryptoStream_t2702504504 * __this, Stream_t1273022909 * p0, RuntimeObject* p1, int32_t p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
extern "C"  void StreamReader__ctor_m1047876681 (StreamReader_t4009935899 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherReference(System.Security.Cryptography.Xml.CipherReference)
extern "C"  void CipherData_set_CipherReference_m1087595014 (CipherData_t4021546579 * __this, CipherReference_t859746092 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
#define Dictionary_2__ctor_m2392909825(__this, p0, method) ((  void (*) (Dictionary_2_t2736202052 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m182537451_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::Add(!0,!1)
#define Dictionary_2_Add_m282647386(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2736202052 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_Add_m1279427033_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1013208020(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2736202052 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m3959998165_gshared)(__this, p0, p1, method)
// System.Void System.Security.Cryptography.Xml.CipherReference::.ctor()
extern "C"  void CipherReference__ctor_m3778162726 (CipherReference_t859746092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherReference::LoadXml(System.Xml.XmlElement)
extern "C"  void CipherReference_LoadXml_m3119664368 (CipherReference_t859746092 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C"  ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::.ctor()
extern "C"  void EncryptedReference__ctor_m3809608059 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocument::.ctor()
extern "C"  void XmlDocument__ctor_m39773473 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherReference::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * CipherReference_GetXml_m3907286928 (CipherReference_t859746092 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_Uri()
extern "C"  String_t* EncryptedReference_get_Uri_m294820826 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.TransformChain System.Security.Cryptography.Xml.EncryptedReference::get_TransformChain()
extern "C"  TransformChain_t1669092815 * EncryptedReference_get_TransformChain_m3731705707 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.TransformChain::get_Count()
extern "C"  int32_t TransformChain_get_Count_m3542384029 (TransformChain_t1669092815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.TransformChain::GetEnumerator()
extern "C"  RuntimeObject* TransformChain_GetEnumerator_m4235168822 (TransformChain_t1669092815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.Transform::GetXml()
extern "C"  XmlElement_t561603118 * Transform_GetXml_m3710823594 (Transform_t1105379765 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedReference_LoadXml_m1352321336 (EncryptedReference_t3282913964 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_ReferenceType(System.String)
extern "C"  void EncryptedReference_set_ReferenceType_m1398693937 (EncryptedReference_t3282913964 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoClause::.ctor()
extern "C"  void KeyInfoClause__ctor_m794259235 (KeyInfoClause_t4210275625 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.DSA::Create()
extern "C"  DSA_t2386879874 * DSA_Create_m1220983153 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor()
extern "C"  void ArgumentNullException__ctor_m2751210921 (ArgumentNullException_t1615371798 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedType::.ctor()
extern "C"  void EncryptedType__ctor_m3540871624 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedData::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptedData_GetXml_m2500531459 (EncryptedData_t3129875747 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionMethod::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptionMethod_GetXml_m4098092980 (EncryptionMethod_t2271876579 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.KeyInfo System.Security.Cryptography.Xml.EncryptedType::get_KeyInfo()
extern "C"  KeyInfo_t3757684699 * EncryptedType_get_KeyInfo_m2827788688 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfo::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfo_GetXml_m847639489 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherData::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * CipherData_GetXml_m2328051665 (CipherData_t4021546579 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_Count()
extern "C"  int32_t EncryptionPropertyCollection_get_Count_m2956813631 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.EncryptionPropertyCollection::GetEnumerator()
extern "C"  RuntimeObject* EncryptionPropertyCollection_GetEnumerator_m1028937343 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionProperty::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptionProperty_GetXml_m2164701001 (EncryptionProperty_t3099724478 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Clear()
extern "C"  void EncryptionPropertyCollection_Clear_m3434930940 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor()
extern "C"  void EncryptionMethod__ctor_m4287255623 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionMethod_LoadXml_m616092953 (EncryptionMethod_t2271876579 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::.ctor()
extern "C"  void KeyInfo__ctor_m2843249396 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_KeyInfo(System.Security.Cryptography.Xml.KeyInfo)
extern "C"  void EncryptedType_set_KeyInfo_m2286232490 (EncryptedType_t2124600183 * __this, KeyInfo_t3757684699 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfo_LoadXml_m2855923995 (KeyInfo_t3757684699 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::.ctor()
extern "C"  void CipherData__ctor_m823107412 (CipherData_t4021546579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::LoadXml(System.Xml.XmlElement)
extern "C"  void CipherData_LoadXml_m1782359316 (CipherData_t4021546579 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionProperty::.ctor(System.Xml.XmlElement)
extern "C"  void EncryptionProperty__ctor_m4273973733 (EncryptionProperty_t3099724478 * __this, XmlElement_t561603118 * ___elemProp0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::Add(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  int32_t EncryptionPropertyCollection_Add_m1382797104 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String)
extern "C"  XmlAttribute_t1173852259 * XmlAttributeCollection_get_ItemOf_m3472332322 (XmlAttributeCollection_t2316283784 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.ReferenceList::.ctor()
extern "C"  void ReferenceList__ctor_m938614769 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.ReferenceList System.Security.Cryptography.Xml.EncryptedKey::get_ReferenceList()
extern "C"  ReferenceList_t2222396100 * EncryptedKey_get_ReferenceList_m1321188651 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.ReferenceList::Add(System.Object)
extern "C"  int32_t ReferenceList_Add_m665697094 (ReferenceList_t2222396100 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptedKey_GetXml_m2029937150 (EncryptedKey_t805343673 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.ReferenceList::get_Count()
extern "C"  int32_t ReferenceList_get_Count_m1546645390 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.ReferenceList::GetEnumerator()
extern "C"  RuntimeObject* ReferenceList_GetEnumerator_m1386260068 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_CarriedKeyName()
extern "C"  String_t* EncryptedKey_get_CarriedKeyName_m3447511591 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_Recipient()
extern "C"  String_t* EncryptedKey_get_Recipient_m2332837277 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.ReferenceList::Clear()
extern "C"  void ReferenceList_Clear_m1548714595 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_CarriedKeyName(System.String)
extern "C"  void EncryptedKey_set_CarriedKeyName_m402644610 (EncryptedKey_t805343673 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_Recipient(System.String)
extern "C"  void EncryptedKey_set_Recipient_m3616942824 (EncryptedKey_t805343673 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.DataReference::.ctor()
extern "C"  void DataReference__ctor_m4026518688 (DataReference_t3754427214 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.DataReference)
extern "C"  void EncryptedKey_AddReference_m664325077 (EncryptedKey_t805343673 * __this, DataReference_t3754427214 * ___dataReference0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyReference::.ctor()
extern "C"  void KeyReference__ctor_m2929745253 (KeyReference_t1254893728 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.KeyReference)
extern "C"  void EncryptedKey_AddReference_m651753650 (EncryptedKey_t805343673 * __this, KeyReference_t1254893728 * ___keyReference0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.TransformChain::.ctor()
extern "C"  void TransformChain__ctor_m99576165 (TransformChain_t1669092815 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_TransformChain(System.Security.Cryptography.Xml.TransformChain)
extern "C"  void EncryptedReference_set_TransformChain_m1849774042 (EncryptedReference_t3282913964 * __this, TransformChain_t1669092815 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_ReferenceType()
extern "C"  String_t* EncryptedReference_get_ReferenceType_m1584760138 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_Uri(System.String)
extern "C"  void EncryptedReference_set_Uri_m3383711198 (EncryptedReference_t3282913964 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigBase64Transform::.ctor()
extern "C"  void XmlDsigBase64Transform__ctor_m1582715825 (XmlDsigBase64Transform_t260084727 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NTransform::.ctor()
extern "C"  void XmlDsigC14NTransform__ctor_m3787210150 (XmlDsigC14NTransform_t3949211521 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NWithCommentsTransform::.ctor()
extern "C"  void XmlDsigC14NWithCommentsTransform__ctor_m530905444 (XmlDsigC14NWithCommentsTransform_t1074875822 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::.ctor()
extern "C"  void XmlDsigEnvelopedSignatureTransform__ctor_m100737688 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigXPathTransform::.ctor()
extern "C"  void XmlDsigXPathTransform__ctor_m249722684 (XmlDsigXPathTransform_t1962434658 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigXsltTransform::.ctor()
extern "C"  void XmlDsigXsltTransform__ctor_m1284152114 (XmlDsigXsltTransform_t2973394665 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor()
extern "C"  void XmlDsigExcC14NTransform__ctor_m1001005067 (XmlDsigExcC14NTransform_t586418029 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NWithCommentsTransform::.ctor()
extern "C"  void XmlDsigExcC14NWithCommentsTransform__ctor_m3791089173 (XmlDsigExcC14NWithCommentsTransform_t1461379654 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::.ctor()
extern "C"  void XmlDecryptionTransform__ctor_m2968698842 (XmlDecryptionTransform_t4000891284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.TransformChain::Add(System.Security.Cryptography.Xml.Transform)
extern "C"  void TransformChain_Add_m67722782 (TransformChain_t1669092815 * __this, Transform_t1105379765 * ___transform0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::.ctor()
extern "C"  void EncryptionPropertyCollection__ctor_m1867345757 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C"  Encoding_t1523322056 * Encoding_get_UTF8_m1008486739 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor()
extern "C"  void Hashtable__ctor_m1815022027 (Hashtable_t1853889766 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.Xml.EncryptedXml::get_Padding()
extern "C"  int32_t EncryptedXml_get_Padding_m4270855717 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform,System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_Transform_m3824077793 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___transform1, int32_t ___blockOctetCount2, bool ___trimPadding3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m2190032190 (EncryptedData_t3129875747 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedData::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedData_LoadXml_m3733935022 (EncryptedData_t3129875747 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionMethod::get_KeyAlgorithm()
extern "C"  String_t* EncryptionMethod_get_KeyAlgorithm_m3594308328 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptData(System.Security.Cryptography.Xml.EncryptedData,System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptData_m3481279421 (EncryptedXml_t2455217639 * __this, EncryptedData_t3129875747 * ___encryptedData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::ReplaceData(System.Xml.XmlElement,System.Byte[])
extern "C"  void EncryptedXml_ReplaceData_m2573463983 (EncryptedXml_t2455217639 * __this, XmlElement_t561603118 * ___inputElement0, ByteU5BU5D_t4116647657* ___decryptedData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Security.Cryptography.Xml.KeyInfo::GetEnumerator()
extern "C"  RuntimeObject* KeyInfo_GetEnumerator_m3346430934 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.KeyInfoName::get_Value()
extern "C"  String_t* KeyInfoName_get_Value_m1421941987 (KeyInfoName_t2325312217 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptKey_m262904073 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, RSA_t2385438082 * ___rsa1, bool ___fOAEP2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptKey_m2820904737 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m3979056352 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbEncryptedWrappedKeyData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_AESKeyWrapDecrypt_m1188890246 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbEncryptedWrappedKeyData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeDeformatter__ctor_m783067294 (RSAOAEPKeyExchangeDeformatter_t3344463048 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeDeformatter__ctor_m262111882 (RSAPKCS1KeyExchangeDeformatter_t2578812791 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.SymmetricAlgorithm::Create(System.String)
extern "C"  SymmetricAlgorithm_t4254223087 * SymmetricAlgorithm_Create_m2726390826 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::.ctor()
extern "C"  void EncryptedKey__ctor_m739319042 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetKeyWrapAlgorithmUri(System.Object)
extern "C"  String_t* EncryptedXml_GetKeyWrapAlgorithmUri_m241829005 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___keyAlg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor(System.String)
extern "C"  void EncryptionMethod__ctor_m2359305186 (EncryptionMethod_t2271876579 * __this, String_t* ___strAlgorithm0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptKey_m3578715373 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, RSA_t2385438082 * ___rsa1, bool ___fOAEP2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.CipherData::.ctor(System.Byte[])
extern "C"  void CipherData__ctor_m2467805249 (CipherData_t4021546579 * __this, ByteU5BU5D_t4116647657* ___cipherValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptKey_m1663508456 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoName::.ctor(System.String)
extern "C"  void KeyInfoName__ctor_m2566502717 (KeyInfoName_t2325312217 * __this, String_t* ___keyName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::AddClause(System.Security.Cryptography.Xml.KeyInfoClause)
extern "C"  void KeyInfo_AddClause_m3169793473 (KeyInfo_t3757684699 * __this, KeyInfoClause_t4210275625 * ___clause0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithmUri(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  String_t* EncryptedXml_GetAlgorithmUri_m206671318 (RuntimeObject * __this /* static, unused */, SymmetricAlgorithm_t4254223087 * ___symAlg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey__ctor_m3679225613 (KeyInfoEncryptedKey_t109830476 * __this, EncryptedKey_t805343673 * ___ek0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Xml.XmlElement,System.Security.Cryptography.SymmetricAlgorithm,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptData_m4171828045 (EncryptedXml_t2455217639 * __this, XmlElement_t561603118 * ___inputElement0, SymmetricAlgorithm_t4254223087 * ___symAlg1, bool ___content2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptDataCore(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptDataCore_m3696169156 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___plainText0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.MemoryStream::.ctor()
extern "C"  void MemoryStream__ctor_m2678285228 (MemoryStream_t94973147 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
extern "C"  void BinaryWriter__ctor_m1874693998 (BinaryWriter_t3992595042 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_Transform_m946449195 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___transform1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Security.Cryptography.Xml.EncryptedXml::get_Encoding()
extern "C"  Encoding_t1523322056 * EncryptedXml_get_Encoding_m741438105 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptData_m2079615939 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___plainText0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m1613069101 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbWrappedKeyData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_AESKeyWrapEncrypt_m3291131172 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbWrappedKeyData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAOAEPKeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAOAEPKeyExchangeFormatter__ctor_m921340853 (RSAOAEPKeyExchangeFormatter_t2041696538 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C"  void RSAPKCS1KeyExchangeFormatter__ctor_m1170240343 (RSAPKCS1KeyExchangeFormatter_t2761096101 * __this, AsymmetricAlgorithm_t932037087 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithm(System.String)
extern "C"  SymmetricAlgorithm_t4254223087 * EncryptedXml_GetAlgorithm_m2452441519 (RuntimeObject * __this /* static, unused */, String_t* ___symAlgUri0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Buffer_BlockCopy_m2884209081 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.EncryptedKey System.Security.Cryptography.Xml.KeyInfoEncryptedKey::get_EncryptedKey()
extern "C"  EncryptedKey_t805343673 * KeyInfoEncryptedKey_get_EncryptedKey_m2314334438 (KeyInfoEncryptedKey_t109830476 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.StringReader::.ctor(System.String)
extern "C"  void StringReader__ctor_m126993932 (StringReader_t3465604688 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C"  void XmlTextReader__ctor_m1979385252 (XmlTextReader_t4233384356 * __this, TextReader_t283511965 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptoStream::FlushFinalBlock()
extern "C"  void CryptoStream_FlushFinalBlock_m2793658271 (CryptoStream_t2702504504 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
extern "C"  void Array_Copy_m344457298 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, int32_t p1, RuntimeArray * p2, int32_t p3, int32_t p4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeyAlgorithm(System.String)
extern "C"  void EncryptionMethod_set_KeyAlgorithm_m1138584935 (EncryptionMethod_t2271876579 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.EncryptionMethod::get_KeySize()
extern "C"  int32_t EncryptionMethod_get_KeySize_m1905268523 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeySize(System.Int32)
extern "C"  void EncryptionMethod_set_KeySize_m1500697790 (EncryptionMethod_t2271876579 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionProperty::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionProperty_LoadXml_m879045214 (EncryptionProperty_t3099724478 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Id()
extern "C"  String_t* EncryptionProperty_get_Id_m1124324033 (EncryptionProperty_t3099724478 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Target()
extern "C"  String_t* EncryptionProperty_get_Target_m543866775 (EncryptionProperty_t3099724478 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.EncryptionProperty System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_ItemOf(System.Int32)
extern "C"  EncryptionProperty_t3099724478 * EncryptionPropertyCollection_get_ItemOf_m1667401162 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::set_ItemOf(System.Int32,System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_set_ItemOf_m2771847742 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, EncryptionProperty_t3099724478 * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::Contains(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  bool EncryptionPropertyCollection_Contains_m2781563633 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::IndexOf(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  int32_t EncryptionPropertyCollection_IndexOf_m502958654 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Insert(System.Int32,System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_Insert_m1496907771 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, EncryptionProperty_t3099724478 * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Remove(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_Remove_m1658865379 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfo::set_Id(System.String)
extern "C"  void KeyInfo_set_Id_m2499954846 (KeyInfo_t3757684699 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.DSAKeyValue::.ctor()
extern "C"  void DSAKeyValue__ctor_m739534853 (DSAKeyValue_t682905322 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.RSAKeyValue::.ctor()
extern "C"  void RSAKeyValue__ctor_m2366602773 (RSAKeyValue_t3247853290 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoName::.ctor()
extern "C"  void KeyInfoName__ctor_m3486294112 (KeyInfoName_t2325312217 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::.ctor()
extern "C"  void KeyInfoRetrievalMethod__ctor_m1291544675 (KeyInfoRetrievalMethod_t2493599240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::.ctor()
extern "C"  void KeyInfoX509Data__ctor_m2307053325 (KeyInfoX509Data_t3389067689 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor()
extern "C"  void KeyInfoEncryptedKey__ctor_m915376870 (KeyInfoEncryptedKey_t109830476 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoNode::.ctor()
extern "C"  void KeyInfoNode__ctor_m1391412554 (KeyInfoNode_t3535559014 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::set_EncryptedKey(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey_set_EncryptedKey_m1899815332 (KeyInfoEncryptedKey_t109830476 * __this, EncryptedKey_t805343673 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoEncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * KeyInfoEncryptedKey_GetXml_m3961843726 (KeyInfoEncryptedKey_t109830476 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedKey::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedKey_LoadXml_m2702380362 (EncryptedKey_t805343673 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::get_Type()
extern "C"  String_t* KeyInfoRetrievalMethod_get_Type_m2075633511 (KeyInfoRetrievalMethod_t2493599240 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::set_Type(System.String)
extern "C"  void KeyInfoRetrievalMethod_set_Type_m2503858427 (KeyInfoRetrievalMethod_t2493599240 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.X509IssuerSerial::.ctor(System.String,System.String)
extern "C"  void X509IssuerSerial__ctor_m1367199679 (X509IssuerSerial_t3270105241 * __this, String_t* ___issuer0, String_t* ___serial1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_IssuerName()
extern "C"  String_t* X509IssuerSerial_get_IssuerName_m1361594627 (X509IssuerSerial_t3270105241 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_SerialNumber()
extern "C"  String_t* X509IssuerSerial_get_SerialNumber_m1055994994 (X509IssuerSerial_t3270105241 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Convert::ToBase64String(System.Byte[])
extern "C"  String_t* Convert_ToBase64String_m3839334935 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement[] System.Security.Cryptography.Xml.XmlSignature::GetChildElements(System.Xml.XmlElement,System.String)
extern "C"  XmlElementU5BU5D_t1541675355* XmlSignature_GetChildElements_m123056127 (RuntimeObject * __this /* static, unused */, XmlElement_t561603118 * ___xel0, String_t* ___element1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Security.Cryptography.Xml.XmlSignature::GetChildElement(System.Xml.XmlElement,System.String,System.String)
extern "C"  XmlElement_t561603118 * XmlSignature_GetChildElement_m690326908 (RuntimeObject * __this /* static, unused */, XmlElement_t561603118 * ___xel0, String_t* ___element1, String_t* ___ns2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddIssuerSerial(System.String,System.String)
extern "C"  void KeyInfoX509Data_AddIssuerSerial_m239207945 (KeyInfoX509Data_t3389067689 * __this, String_t* ___issuerName0, String_t* ___serialNumber1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectKeyId(System.Byte[])
extern "C"  void KeyInfoX509Data_AddSubjectKeyId_m649458755 (KeyInfoX509Data_t3389067689 * __this, ByteU5BU5D_t4116647657* ___subjectKeyId0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectName(System.String)
extern "C"  void KeyInfoX509Data_AddSubjectName_m4154902555 (KeyInfoX509Data_t3389067689 * __this, String_t* ___subjectName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate::.ctor(System.Byte[])
extern "C"  void X509Certificate__ctor_m1413707489 (X509Certificate_t713131622 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void KeyInfoX509Data_AddCertificate_m1427145446 (KeyInfoX509Data_t3389067689 * __this, X509Certificate_t713131622 * ___certificate0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Xml.EncryptedReference System.Security.Cryptography.Xml.ReferenceList::get_ItemOf(System.Int32)
extern "C"  EncryptedReference_t3282913964 * ReferenceList_get_ItemOf_m3656255803 (ReferenceList_t2222396100 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.ReferenceList::set_ItemOf(System.Int32,System.Security.Cryptography.Xml.EncryptedReference)
extern "C"  void ReferenceList_set_ItemOf_m3172190161 (ReferenceList_t2222396100 * __this, int32_t ___index0, EncryptedReference_t3282913964 * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.RSA::Create()
extern "C"  RSA_t2385438082 * RSA_Create_m4065275734 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
extern "C"  void RuntimeHelpers_InitializeArray_m3117905507 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, RuntimeFieldHandle_t1871169219  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Concatenate(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Concatenate_m2655912172 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buf10, ByteU5BU5D_t4116647657* ___buf21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_MSB_m1355712825 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_LSB_m3516631426 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
extern "C"  ByteU5BU5D_t4116647657* BitConverter_GetBytes_m4144088731 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Array::Reverse(System.Array)
extern "C"  void Array_Reverse_m3714848183 (RuntimeObject * __this /* static, unused */, RuntimeArray * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Xor(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Xor_m2659683204 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___x0, ByteU5BU5D_t4116647657* ___y1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::ComputeCMSKeyChecksum(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_ComputeCMSKeyChecksum_m4173814019 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Transform_m3435197795 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___t1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C"  HashAlgorithm_t1432317219 * HashAlgorithm_Create_m644612360 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* HashAlgorithm_ComputeHash_m2825542963 (HashAlgorithm_t1432317219 * __this, ByteU5BU5D_t4116647657* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_MSB_m933140928 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, int32_t ___bytes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_LSB_m2711009516 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, int32_t ___bytes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.SecurityManager::get_SecurityEnabled()
extern "C"  bool SecurityManager_get_SecurityEnabled_m3467182822 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlUrlResolver::.ctor()
extern "C"  void XmlUrlResolver__ctor_m4255120074 (XmlUrlResolver_t817895037 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence::.ctor()
extern "C"  void Evidence__ctor_m415538579 (Evidence_t2008144148 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlSecureResolver::.ctor(System.Xml.XmlResolver,System.Security.Policy.Evidence)
extern "C"  void XmlSecureResolver__ctor_m499824172 (XmlSecureResolver_t3504191023 * __this, XmlResolver_t626023767 * p0, Evidence_t2008144148 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Security.Cryptography.Xml.Transform::GetResolver()
extern "C"  XmlResolver_t626023767 * Transform_GetResolver_m1126097980 (Transform_t1105379765 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.Transform::.ctor()
extern "C"  void Transform__ctor_m426598508 (Transform_t1105379765 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.Transform::set_Algorithm(System.String)
extern "C"  void Transform_set_Algorithm_m2662008040 (Transform_t1105379765 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.EncryptedXml::.ctor()
extern "C"  void EncryptedXml__ctor_m989113906 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::CreateElement(System.String)
extern "C"  XmlElement_t561603118 * XmlDocument_CreateElement_m1545481562 (XmlDocument_t2837193595 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlDocument::CreateAttribute(System.String,System.String)
extern "C"  XmlAttribute_t1173852259 * XmlDocument_CreateAttribute_m2644608424 (XmlDocument_t2837193595 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::Append(System.Xml.XmlAttribute)
extern "C"  XmlAttribute_t1173852259 * XmlAttributeCollection_Append_m2892286316 (XmlAttributeCollection_t2316283784 * __this, XmlAttribute_t1173852259 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlAttributeCollection::get_ItemOf(System.String,System.String)
extern "C"  XmlAttribute_t1173852259 * XmlAttributeCollection_get_ItemOf_m1847320162 (XmlAttributeCollection_t2316283784 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlDocument::get_DocumentElement()
extern "C"  XmlElement_t561603118 * XmlDocument_get_DocumentElement_m595554940 (XmlDocument_t2837193595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor()
extern "C"  void NullReferenceException__ctor_m744513393 (NullReferenceException_t1023182353 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::ClearExceptUris()
extern "C"  void XmlDecryptionTransform_ClearExceptUris_m3619548113 (XmlDecryptionTransform_t4000891284 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::StartsWith(System.String)
extern "C"  bool String_StartsWith_m1759067526 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::AddExceptUri(System.String)
extern "C"  void XmlDecryptionTransform_AddExceptUri_m2609050410 (XmlDecryptionTransform_t4000891284 * __this, String_t* ___uri0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigC14NTransform__ctor_m1295642362 (XmlDsigC14NTransform_t3949211521 * __this, bool ___includeComments0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Security.Cryptography.Xml.Transform::get_PropagatedNamespaces()
extern "C"  Hashtable_t1853889766 * Transform_get_PropagatedNamespaces_m1327681064 (Transform_t1105379765 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.XmlCanonicalizer::.ctor(System.Boolean,System.Boolean,System.Collections.Hashtable)
extern "C"  void XmlCanonicalizer__ctor_m2574885826 (XmlCanonicalizer_t3076776375 * __this, bool ___withComments0, bool ___excC14N1, Hashtable_t1853889766 * ___propagatedNamespaces2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigEnvelopedSignatureTransform__ctor_m4150449793 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, bool ___includeComments0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor(System.Boolean,System.String)
extern "C"  void XmlDsigExcC14NTransform__ctor_m128464798 (XmlDsigExcC14NTransform_t586418029 * __this, bool ___includeComments0, String_t* ___inclusiveNamespacesPrefixList1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigExcC14NTransform__ctor_m1384431502 (XmlDsigExcC14NTransform_t586418029 * __this, bool ___includeComments0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.Xml.XmlDsigXsltTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigXsltTransform__ctor_m3403610689 (XmlDsigXsltTransform_t2973394665 * __this, bool ___includeComments0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Xml.XmlCanonicalizer::.ctor(System.Boolean,System.Boolean,System.Collections.Hashtable)
extern "C"  void XmlCanonicalizer__ctor_m2574885826 (XmlCanonicalizer_t3076776375 * __this, bool ___withComments0, bool ___excC14N1, Hashtable_t1853889766 * ___propagatedNamespaces2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlCanonicalizer__ctor_m2574885826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m3121283359(L_0, /*hidden argument*/NULL);
		__this->set_res_2(L_0);
		bool L_1 = ___withComments0;
		__this->set_comments_0(L_1);
		bool L_2 = ___excC14N1;
		__this->set_exclusive_1(L_2);
		Hashtable_t1853889766 * L_3 = ___propagatedNamespaces2;
		__this->set_propagatedNss_3(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.MonoTODOAttribute::.ctor()
extern "C"  void MonoTODOAttribute__ctor_m164336335 (MonoTODOAttribute_t4131080582 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C"  void MonoTODOAttribute__ctor_m4105953439 (MonoTODOAttribute_t4131080582 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___comment0;
		__this->set_comment_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.CipherData::.ctor()
extern "C"  void CipherData__ctor_m823107412 (CipherData_t4021546579 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.CipherData::.ctor(System.Byte[])
extern "C"  void CipherData__ctor_m2467805249 (CipherData_t4021546579 * __this, ByteU5BU5D_t4116647657* ___cipherValue0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_0 = ___cipherValue0;
		CipherData_set_CipherValue_m2389002018(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.Xml.CipherReference System.Security.Cryptography.Xml.CipherData::get_CipherReference()
extern "C"  CipherReference_t859746092 * CipherData_get_CipherReference_m787313783 (CipherData_t4021546579 * __this, const RuntimeMethod* method)
{
	{
		CipherReference_t859746092 * L_0 = __this->get_cipherReference_1();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherReference(System.Security.Cryptography.Xml.CipherReference)
extern "C"  void CipherData_set_CipherReference_m1087595014 (CipherData_t4021546579 * __this, CipherReference_t859746092 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherData_set_CipherReference_m1087595014_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = CipherData_get_CipherValue_m4127530842(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral2319714889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CipherData_set_CipherReference_m1087595014_RuntimeMethod_var);
	}

IL_0016:
	{
		CipherReference_t859746092 * L_2 = ___value0;
		__this->set_cipherReference_1(L_2);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.CipherData::get_CipherValue()
extern "C"  ByteU5BU5D_t4116647657* CipherData_get_CipherValue_m4127530842 (CipherData_t4021546579 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = __this->get_cipherValue_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.CipherData::set_CipherValue(System.Byte[])
extern "C"  void CipherData_set_CipherValue_m2389002018 (CipherData_t4021546579 * __this, ByteU5BU5D_t4116647657* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherData_set_CipherValue_m2389002018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CipherReference_t859746092 * L_0 = CipherData_get_CipherReference_m787313783(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral2319714889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CipherData_set_CipherValue_m2389002018_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_2 = ___value0;
		__this->set_cipherValue_0(L_2);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherData::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * CipherData_GetXml_m2328051665 (CipherData_t4021546579 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherData_GetXml_m2328051665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	StreamReader_t4009935899 * V_2 = NULL;
	{
		CipherReference_t859746092 * L_0 = CipherData_get_CipherReference_m787313783(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_1 = CipherData_get_CipherValue_m4127530842(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		CryptographicException_t248831461 * L_2 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_2, _stringLiteral2319714889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, CipherData_GetXml_m2328051665_RuntimeMethod_var);
	}

IL_0021:
	{
		XmlDocument_t2837193595 * L_3 = ___document0;
		NullCheck(L_3);
		XmlElement_t561603118 * L_4 = XmlDocument_CreateElement_m3950844455(L_3, _stringLiteral3608856901, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_4;
		CipherReference_t859746092 * L_5 = CipherData_get_CipherReference_m787313783(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		XmlElement_t561603118 * L_6 = V_0;
		XmlDocument_t2837193595 * L_7 = ___document0;
		CipherReference_t859746092 * L_8 = __this->get_cipherReference_1();
		NullCheck(L_8);
		XmlElement_t561603118 * L_9 = CipherReference_GetXml_m3092490659(L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		XmlNode_t3767805227 * L_10 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_7, L_9, (bool)1);
		NullCheck(L_6);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_6, L_10);
	}

IL_0056:
	{
		ByteU5BU5D_t4116647657* L_11 = CipherData_get_CipherValue_m4127530842(__this, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		XmlDocument_t2837193595 * L_12 = ___document0;
		NullCheck(L_12);
		XmlElement_t561603118 * L_13 = XmlDocument_CreateElement_m3950844455(L_12, _stringLiteral2355207777, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_13;
		ByteU5BU5D_t4116647657* L_14 = __this->get_cipherValue_0();
		MemoryStream_t94973147 * L_15 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m4100805873(L_15, L_14, /*hidden argument*/NULL);
		ToBase64Transform_t2551557057 * L_16 = (ToBase64Transform_t2551557057 *)il2cpp_codegen_object_new(ToBase64Transform_t2551557057_il2cpp_TypeInfo_var);
		ToBase64Transform__ctor_m3068884132(L_16, /*hidden argument*/NULL);
		CryptoStream_t2702504504 * L_17 = (CryptoStream_t2702504504 *)il2cpp_codegen_object_new(CryptoStream_t2702504504_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m2579441618(L_17, L_15, L_16, 0, /*hidden argument*/NULL);
		StreamReader_t4009935899 * L_18 = (StreamReader_t4009935899 *)il2cpp_codegen_object_new(StreamReader_t4009935899_il2cpp_TypeInfo_var);
		StreamReader__ctor_m1047876681(L_18, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		XmlElement_t561603118 * L_19 = V_1;
		StreamReader_t4009935899 * L_20 = V_2;
		NullCheck(L_20);
		String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.StreamReader::ReadToEnd() */, L_20);
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_19, L_21);
		StreamReader_t4009935899 * L_22 = V_2;
		NullCheck(L_22);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.StreamReader::Close() */, L_22);
		XmlElement_t561603118 * L_23 = V_0;
		XmlElement_t561603118 * L_24 = V_1;
		NullCheck(L_23);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_23, L_24);
	}

IL_00a8:
	{
		XmlElement_t561603118 * L_25 = V_0;
		return L_25;
	}
}
// System.Void System.Security.Cryptography.Xml.CipherData::LoadXml(System.Xml.XmlElement)
extern "C"  void CipherData_LoadXml_m1782359316 (CipherData_t4021546579 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherData_LoadXml_m1782359316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2736202052 * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CipherData_set_CipherReference_m1087595014(__this, (CipherReference_t859746092 *)NULL, /*hidden argument*/NULL);
		CipherData_set_CipherValue_m2389002018(__this, (ByteU5BU5D_t4116647657*)(ByteU5BU5D_t4116647657*)NULL, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_001f;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CipherData_LoadXml_m1782359316_RuntimeMethod_var);
	}

IL_001f:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral3608856901, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0049;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0054;
		}
	}

IL_0049:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral1994678490, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, CipherData_LoadXml_m1782359316_RuntimeMethod_var);
	}

IL_0054:
	{
		XmlElement_t561603118 * L_9 = ___value0;
		NullCheck(L_9);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_10);
		V_1 = L_11;
	}

IL_0060:
	try
	{ // begin try (depth: 1)
		{
			goto IL_011a;
		}

IL_0065:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_13, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_14 = V_0;
			if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_14, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
			{
				goto IL_0081;
			}
		}

IL_007c:
		{
			goto IL_011a;
		}

IL_0081:
		{
			XmlNode_t3767805227 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_15);
			V_2 = L_16;
			String_t* L_17 = V_2;
			if (!L_17)
			{
				goto IL_011a;
			}
		}

IL_008e:
		{
			Dictionary_2_t2736202052 * L_18 = ((CipherData_t4021546579_StaticFields*)il2cpp_codegen_static_fields_for(CipherData_t4021546579_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map1_2();
			if (L_18)
			{
				goto IL_00bd;
			}
		}

IL_0098:
		{
			Dictionary_2_t2736202052 * L_19 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_19, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_3 = L_19;
			Dictionary_2_t2736202052 * L_20 = V_3;
			NullCheck(L_20);
			Dictionary_2_Add_m282647386(L_20, _stringLiteral330687204, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_21 = V_3;
			NullCheck(L_21);
			Dictionary_2_Add_m282647386(L_21, _stringLiteral2355207777, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_22 = V_3;
			((CipherData_t4021546579_StaticFields*)il2cpp_codegen_static_fields_for(CipherData_t4021546579_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map1_2(L_22);
		}

IL_00bd:
		{
			Dictionary_2_t2736202052 * L_23 = ((CipherData_t4021546579_StaticFields*)il2cpp_codegen_static_fields_for(CipherData_t4021546579_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map1_2();
			String_t* L_24 = V_2;
			NullCheck(L_23);
			bool L_25 = Dictionary_2_TryGetValue_m1013208020(L_23, L_24, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_25)
			{
				goto IL_011a;
			}
		}

IL_00cf:
		{
			int32_t L_26 = V_4;
			if (!L_26)
			{
				goto IL_00e3;
			}
		}

IL_00d6:
		{
			int32_t L_27 = V_4;
			if ((((int32_t)L_27) == ((int32_t)1)))
			{
				goto IL_0104;
			}
		}

IL_00de:
		{
			goto IL_011a;
		}

IL_00e3:
		{
			CipherReference_t859746092 * L_28 = (CipherReference_t859746092 *)il2cpp_codegen_object_new(CipherReference_t859746092_il2cpp_TypeInfo_var);
			CipherReference__ctor_m3778162726(L_28, /*hidden argument*/NULL);
			__this->set_cipherReference_1(L_28);
			CipherReference_t859746092 * L_29 = __this->get_cipherReference_1();
			XmlNode_t3767805227 * L_30 = V_0;
			NullCheck(L_29);
			CipherReference_LoadXml_m3119664368(L_29, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_30, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_011a;
		}

IL_0104:
		{
			XmlNode_t3767805227 * L_31 = V_0;
			NullCheck(L_31);
			String_t* L_32 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_31);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			ByteU5BU5D_t4116647657* L_33 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
			CipherData_set_CipherValue_m2389002018(__this, L_33, /*hidden argument*/NULL);
			goto IL_011a;
		}

IL_011a:
		{
			RuntimeObject* L_34 = V_1;
			NullCheck(L_34);
			bool L_35 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_34);
			if (L_35)
			{
				goto IL_0065;
			}
		}

IL_0125:
		{
			IL2CPP_LEAVE(0x13F, FINALLY_012a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_012a;
	}

FINALLY_012a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_36 = V_1;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_36, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_37 = V_5;
			if (L_37)
			{
				goto IL_0137;
			}
		}

IL_0136:
		{
			IL2CPP_END_FINALLY(298)
		}

IL_0137:
		{
			RuntimeObject* L_38 = V_5;
			NullCheck(L_38);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_38);
			IL2CPP_END_FINALLY(298)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(298)
	{
		IL2CPP_JUMP_TBL(0x13F, IL_013f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013f:
	{
		CipherReference_t859746092 * L_39 = CipherData_get_CipherReference_m787313783(__this, /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_0160;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_40 = CipherData_get_CipherValue_m4127530842(__this, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0160;
		}
	}
	{
		CryptographicException_t248831461 * L_41 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_41, _stringLiteral2319714889, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_41, NULL, CipherData_LoadXml_m1782359316_RuntimeMethod_var);
	}

IL_0160:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.CipherReference::.ctor()
extern "C"  void CipherReference__ctor_m3778162726 (CipherReference_t859746092 * __this, const RuntimeMethod* method)
{
	{
		EncryptedReference__ctor_m3809608059(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherReference::GetXml()
extern "C"  XmlElement_t561603118 * CipherReference_GetXml_m3092490659 (CipherReference_t859746092 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherReference_GetXml_m3092490659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_1 = CipherReference_GetXml_m3907286928(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.CipherReference::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * CipherReference_GetXml_m3907286928 (CipherReference_t859746092 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherReference_GetXml_m3907286928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	Transform_t1105379765 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = ___document0;
		NullCheck(L_0);
		XmlElement_t561603118 * L_1 = XmlDocument_CreateElement_m3950844455(L_0, _stringLiteral330687204, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlElement_t561603118 * L_2 = V_0;
		String_t* L_3 = EncryptedReference_get_Uri_m294820826(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_2, _stringLiteral1891153624, L_3);
		TransformChain_t1669092815 * L_4 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00ad;
		}
	}
	{
		TransformChain_t1669092815 * L_5 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = TransformChain_get_Count_m3542384029(L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_00ad;
		}
	}
	{
		XmlDocument_t2837193595 * L_7 = ___document0;
		NullCheck(L_7);
		XmlElement_t561603118 * L_8 = XmlDocument_CreateElement_m3950844455(L_7, _stringLiteral1706932836, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_8;
		TransformChain_t1669092815 * L_9 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		RuntimeObject* L_10 = TransformChain_GetEnumerator_m4235168822(L_9, /*hidden argument*/NULL);
		V_3 = L_10;
	}

IL_005b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0080;
		}

IL_0060:
		{
			RuntimeObject* L_11 = V_3;
			NullCheck(L_11);
			RuntimeObject * L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			V_2 = ((Transform_t1105379765 *)CastclassClass((RuntimeObject*)L_12, Transform_t1105379765_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_13 = V_1;
			XmlDocument_t2837193595 * L_14 = ___document0;
			Transform_t1105379765 * L_15 = V_2;
			NullCheck(L_15);
			XmlElement_t561603118 * L_16 = Transform_GetXml_m3710823594(L_15, /*hidden argument*/NULL);
			NullCheck(L_14);
			XmlNode_t3767805227 * L_17 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_14, L_16, (bool)1);
			NullCheck(L_13);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_13, L_17);
		}

IL_0080:
		{
			RuntimeObject* L_18 = V_3;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0060;
			}
		}

IL_008b:
		{
			IL2CPP_LEAVE(0xA5, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_3;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_4;
			if (L_21)
			{
				goto IL_009d;
			}
		}

IL_009c:
		{
			IL2CPP_END_FINALLY(144)
		}

IL_009d:
		{
			RuntimeObject* L_22 = V_4;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(144)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_JUMP_TBL(0xA5, IL_00a5)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a5:
	{
		XmlElement_t561603118 * L_23 = V_0;
		XmlElement_t561603118 * L_24 = V_1;
		NullCheck(L_23);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_23, L_24);
	}

IL_00ad:
	{
		XmlElement_t561603118 * L_25 = V_0;
		return L_25;
	}
}
// System.Void System.Security.Cryptography.Xml.CipherReference::LoadXml(System.Xml.XmlElement)
extern "C"  void CipherReference_LoadXml_m3119664368 (CipherReference_t859746092 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CipherReference_LoadXml_m3119664368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, CipherReference_LoadXml_m3119664368_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral330687204, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral62225616, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, CipherReference_LoadXml_m3119664368_RuntimeMethod_var);
	}

IL_0046:
	{
		XmlElement_t561603118 * L_9 = ___value0;
		EncryptedReference_LoadXml_m1352321336(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.DataReference::.ctor()
extern "C"  void DataReference__ctor_m4026518688 (DataReference_t3754427214 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataReference__ctor_m4026518688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncryptedReference__ctor_m3809608059(__this, /*hidden argument*/NULL);
		EncryptedReference_set_ReferenceType_m1398693937(__this, _stringLiteral4169104624, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.DSAKeyValue::.ctor()
extern "C"  void DSAKeyValue__ctor_m739534853 (DSAKeyValue_t682905322 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		DSA_t2386879874 * L_0 = DSA_Create_m1220983153(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_dsa_0(L_0);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.DSAKeyValue::GetXml()
extern "C"  XmlElement_t561603118 * DSAKeyValue_GetXml_m11496612 (DSAKeyValue_t682905322 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSAKeyValue_GetXml_m11496612_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_1, _stringLiteral1076923336, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_2;
		XmlElement_t561603118 * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_3, _stringLiteral3929236445, _stringLiteral3726462450);
		XmlElement_t561603118 * L_4 = V_1;
		DSA_t2386879874 * L_5 = __this->get_dsa_0();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker1< String_t*, bool >::Invoke(12 /* System.String System.Security.Cryptography.DSA::ToXmlString(System.Boolean) */, L_5, (bool)0);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlElement::set_InnerXml(System.String) */, L_4, L_6);
		XmlElement_t561603118 * L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Security.Cryptography.Xml.DSAKeyValue::LoadXml(System.Xml.XmlElement)
extern "C"  void DSAKeyValue_LoadXml_m4097399301 (DSAKeyValue_t682905322 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DSAKeyValue_LoadXml_m4097399301_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, DSAKeyValue_LoadXml_m4097399301_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral1076923336, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, DSAKeyValue_LoadXml_m4097399301_RuntimeMethod_var);
	}

IL_0041:
	{
		DSA_t2386879874 * L_9 = __this->get_dsa_0();
		XmlElement_t561603118 * L_10 = ___value0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.DSA::FromXmlString(System.String) */, L_9, L_11);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptedData::.ctor()
extern "C"  void EncryptedData__ctor_m2190032190 (EncryptedData_t3129875747 * __this, const RuntimeMethod* method)
{
	{
		EncryptedType__ctor_m3540871624(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedData::GetXml()
extern "C"  XmlElement_t561603118 * EncryptedData_GetXml_m1548431538 (EncryptedData_t3129875747 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedData_GetXml_m1548431538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_1 = EncryptedData_GetXml_m2500531459(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedData::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptedData_GetXml_m2500531459 (EncryptedData_t3129875747 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedData_GetXml_m2500531459_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	EncryptionProperty_t3099724478 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CipherData_t4021546579 * L_0 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral4204821015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedData_GetXml_m2500531459_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlDocument_t2837193595 * L_2 = ___document0;
		NullCheck(L_2);
		XmlElement_t561603118 * L_3 = XmlDocument_CreateElement_m3950844455(L_2, _stringLiteral3847996581, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_3;
		EncryptionMethod_t2271876579 * L_4 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		XmlElement_t561603118 * L_5 = V_0;
		EncryptionMethod_t2271876579 * L_6 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
		XmlDocument_t2837193595 * L_7 = ___document0;
		NullCheck(L_6);
		XmlElement_t561603118 * L_8 = EncryptionMethod_GetXml_m4098092980(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_5, L_8);
	}

IL_0045:
	{
		KeyInfo_t3757684699 * L_9 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		XmlElement_t561603118 * L_10 = V_0;
		XmlDocument_t2837193595 * L_11 = ___document0;
		KeyInfo_t3757684699 * L_12 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		XmlElement_t561603118 * L_13 = KeyInfo_GetXml_m847639489(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlNode_t3767805227 * L_14 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_11, L_13, (bool)1);
		NullCheck(L_10);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_10, L_14);
	}

IL_0069:
	{
		CipherData_t4021546579 * L_15 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		XmlElement_t561603118 * L_16 = V_0;
		CipherData_t4021546579 * L_17 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		XmlDocument_t2837193595 * L_18 = ___document0;
		NullCheck(L_17);
		XmlElement_t561603118 * L_19 = CipherData_GetXml_m2328051665(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_16, L_19);
	}

IL_0087:
	{
		EncryptionPropertyCollection_t3294881567 * L_20 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_20);
		int32_t L_21 = EncryptionPropertyCollection_get_Count_m2956813631(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		XmlDocument_t2837193595 * L_22 = ___document0;
		NullCheck(L_22);
		XmlElement_t561603118 * L_23 = XmlDocument_CreateElement_m3950844455(L_22, _stringLiteral2902905802, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_23;
		EncryptionPropertyCollection_t3294881567 * L_24 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_24);
		RuntimeObject* L_25 = EncryptionPropertyCollection_GetEnumerator_m1028937343(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d4;
		}

IL_00ba:
		{
			RuntimeObject* L_26 = V_3;
			NullCheck(L_26);
			RuntimeObject * L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
			V_2 = ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_27, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_28 = V_1;
			EncryptionProperty_t3099724478 * L_29 = V_2;
			XmlDocument_t2837193595 * L_30 = ___document0;
			NullCheck(L_29);
			XmlElement_t561603118 * L_31 = EncryptionProperty_GetXml_m2164701001(L_29, L_30, /*hidden argument*/NULL);
			NullCheck(L_28);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_28, L_31);
		}

IL_00d4:
		{
			RuntimeObject* L_32 = V_3;
			NullCheck(L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_00ba;
			}
		}

IL_00df:
		{
			IL2CPP_LEAVE(0xF9, FINALLY_00e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e4;
	}

FINALLY_00e4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_3;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_4;
			if (L_35)
			{
				goto IL_00f1;
			}
		}

IL_00f0:
		{
			IL2CPP_END_FINALLY(228)
		}

IL_00f1:
		{
			RuntimeObject* L_36 = V_4;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_36);
			IL2CPP_END_FINALLY(228)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(228)
	{
		IL2CPP_JUMP_TBL(0xF9, IL_00f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f9:
	{
		XmlElement_t561603118 * L_37 = V_0;
		XmlElement_t561603118 * L_38 = V_1;
		NullCheck(L_37);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_37, L_38);
	}

IL_0101:
	{
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Id() */, __this);
		if (!L_39)
		{
			goto IL_011d;
		}
	}
	{
		XmlElement_t561603118 * L_40 = V_0;
		String_t* L_41 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Id() */, __this);
		NullCheck(L_40);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_40, _stringLiteral3454449639, L_41);
	}

IL_011d:
	{
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Type() */, __this);
		if (!L_42)
		{
			goto IL_0139;
		}
	}
	{
		XmlElement_t561603118 * L_43 = V_0;
		String_t* L_44 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Type() */, __this);
		NullCheck(L_43);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_43, _stringLiteral3243520198, L_44);
	}

IL_0139:
	{
		String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_MimeType() */, __this);
		if (!L_45)
		{
			goto IL_0155;
		}
	}
	{
		XmlElement_t561603118 * L_46 = V_0;
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_MimeType() */, __this);
		NullCheck(L_46);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_46, _stringLiteral2515942052, L_47);
	}

IL_0155:
	{
		String_t* L_48 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Encoding() */, __this);
		if (!L_48)
		{
			goto IL_0171;
		}
	}
	{
		XmlElement_t561603118 * L_49 = V_0;
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Encoding() */, __this);
		NullCheck(L_49);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_49, _stringLiteral3002373536, L_50);
	}

IL_0171:
	{
		XmlElement_t561603118 * L_51 = V_0;
		return L_51;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedData::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedData_LoadXml_m3733935022 (EncryptedData_t3129875747 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedData_LoadXml_m3733935022_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XmlElement_t561603118 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	Dictionary_2_t2736202052 * V_5 = NULL;
	int32_t V_6 = 0;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedData_LoadXml_m3733935022_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral3847996581, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral676128015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptedData_LoadXml_m3733935022_RuntimeMethod_var);
	}

IL_0046:
	{
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, (EncryptionMethod_t2271876579 *)NULL);
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, (EncryptionMethod_t2271876579 *)NULL);
		EncryptionPropertyCollection_t3294881567 * L_9 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_9);
		EncryptionPropertyCollection_Clear_m3434930940(L_9, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Id(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_MimeType(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String) */, __this, (String_t*)NULL);
		XmlElement_t561603118 * L_10 = ___value0;
		NullCheck(L_10);
		XmlNodeList_t2551693786 * L_11 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_11);
		V_1 = L_12;
	}

IL_0087:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01fe;
		}

IL_008c:
		{
			RuntimeObject* L_13 = V_1;
			NullCheck(L_13);
			RuntimeObject * L_14 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_13);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_14, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_15 = V_0;
			if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_15, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
			{
				goto IL_00a8;
			}
		}

IL_00a3:
		{
			goto IL_01fe;
		}

IL_00a8:
		{
			XmlNode_t3767805227 * L_16 = V_0;
			NullCheck(L_16);
			String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_16);
			V_4 = L_17;
			String_t* L_18 = V_4;
			if (!L_18)
			{
				goto IL_01fe;
			}
		}

IL_00b7:
		{
			Dictionary_2_t2736202052 * L_19 = ((EncryptedData_t3129875747_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedData_t3129875747_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map5_8();
			if (L_19)
			{
				goto IL_0104;
			}
		}

IL_00c1:
		{
			Dictionary_2_t2736202052 * L_20 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_20, 4, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_5 = L_20;
			Dictionary_2_t2736202052 * L_21 = V_5;
			NullCheck(L_21);
			Dictionary_2_Add_m282647386(L_21, _stringLiteral3041704345, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_22 = V_5;
			NullCheck(L_22);
			Dictionary_2_Add_m282647386(L_22, _stringLiteral2911941651, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_23 = V_5;
			NullCheck(L_23);
			Dictionary_2_Add_m282647386(L_23, _stringLiteral3608856901, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_24 = V_5;
			NullCheck(L_24);
			Dictionary_2_Add_m282647386(L_24, _stringLiteral2902905802, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_25 = V_5;
			((EncryptedData_t3129875747_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedData_t3129875747_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map5_8(L_25);
		}

IL_0104:
		{
			Dictionary_2_t2736202052 * L_26 = ((EncryptedData_t3129875747_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedData_t3129875747_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map5_8();
			String_t* L_27 = V_4;
			NullCheck(L_26);
			bool L_28 = Dictionary_2_TryGetValue_m1013208020(L_26, L_27, (int32_t*)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_28)
			{
				goto IL_01fe;
			}
		}

IL_0117:
		{
			int32_t L_29 = V_6;
			switch (L_29)
			{
				case 0:
				{
					goto IL_0133;
				}
				case 1:
				{
					goto IL_0154;
				}
				case 2:
				{
					goto IL_0175;
				}
				case 3:
				{
					goto IL_0196;
				}
			}
		}

IL_012e:
		{
			goto IL_01fe;
		}

IL_0133:
		{
			EncryptionMethod_t2271876579 * L_30 = (EncryptionMethod_t2271876579 *)il2cpp_codegen_object_new(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var);
			EncryptionMethod__ctor_m4287255623(L_30, /*hidden argument*/NULL);
			VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, L_30);
			EncryptionMethod_t2271876579 * L_31 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
			XmlNode_t3767805227 * L_32 = V_0;
			NullCheck(L_31);
			EncryptionMethod_LoadXml_m616092953(L_31, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_32, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_01fe;
		}

IL_0154:
		{
			KeyInfo_t3757684699 * L_33 = (KeyInfo_t3757684699 *)il2cpp_codegen_object_new(KeyInfo_t3757684699_il2cpp_TypeInfo_var);
			KeyInfo__ctor_m2843249396(L_33, /*hidden argument*/NULL);
			EncryptedType_set_KeyInfo_m2286232490(__this, L_33, /*hidden argument*/NULL);
			KeyInfo_t3757684699 * L_34 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
			XmlNode_t3767805227 * L_35 = V_0;
			NullCheck(L_34);
			KeyInfo_LoadXml_m2855923995(L_34, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_35, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_01fe;
		}

IL_0175:
		{
			CipherData_t4021546579 * L_36 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
			CipherData__ctor_m823107412(L_36, /*hidden argument*/NULL);
			VirtActionInvoker1< CipherData_t4021546579 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData) */, __this, L_36);
			CipherData_t4021546579 * L_37 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
			XmlNode_t3767805227 * L_38 = V_0;
			NullCheck(L_37);
			CipherData_LoadXml_m1782359316(L_37, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_38, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_01fe;
		}

IL_0196:
		{
			XmlNode_t3767805227 * L_39 = V_0;
			NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_39, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			XmlNodeList_t2551693786 * L_40 = VirtFuncInvoker2< XmlNodeList_t2551693786 *, String_t*, String_t* >::Invoke(48 /* System.Xml.XmlNodeList System.Xml.XmlElement::GetElementsByTagName(System.String,System.String) */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_39, XmlElement_t561603118_il2cpp_TypeInfo_var)), _stringLiteral3360770542, _stringLiteral1984398691);
			NullCheck(L_40);
			RuntimeObject* L_41 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_40);
			V_3 = L_41;
		}

IL_01b1:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01d4;
			}

IL_01b6:
			{
				RuntimeObject* L_42 = V_3;
				NullCheck(L_42);
				RuntimeObject * L_43 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_42);
				V_2 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_43, XmlElement_t561603118_il2cpp_TypeInfo_var));
				EncryptionPropertyCollection_t3294881567 * L_44 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
				XmlElement_t561603118 * L_45 = V_2;
				EncryptionProperty_t3099724478 * L_46 = (EncryptionProperty_t3099724478 *)il2cpp_codegen_object_new(EncryptionProperty_t3099724478_il2cpp_TypeInfo_var);
				EncryptionProperty__ctor_m4273973733(L_46, L_45, /*hidden argument*/NULL);
				NullCheck(L_44);
				EncryptionPropertyCollection_Add_m1382797104(L_44, L_46, /*hidden argument*/NULL);
			}

IL_01d4:
			{
				RuntimeObject* L_47 = V_3;
				NullCheck(L_47);
				bool L_48 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_47);
				if (L_48)
				{
					goto IL_01b6;
				}
			}

IL_01df:
			{
				IL2CPP_LEAVE(0x1F9, FINALLY_01e4);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_01e4;
		}

FINALLY_01e4:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_49 = V_3;
				V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_49, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_50 = V_7;
				if (L_50)
				{
					goto IL_01f1;
				}
			}

IL_01f0:
			{
				IL2CPP_END_FINALLY(484)
			}

IL_01f1:
			{
				RuntimeObject* L_51 = V_7;
				NullCheck(L_51);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_51);
				IL2CPP_END_FINALLY(484)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(484)
		{
			IL2CPP_JUMP_TBL(0x1F9, IL_01f9)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_01f9:
		{
			goto IL_01fe;
		}

IL_01fe:
		{
			RuntimeObject* L_52 = V_1;
			NullCheck(L_52);
			bool L_53 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_008c;
			}
		}

IL_0209:
		{
			IL2CPP_LEAVE(0x223, FINALLY_020e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_020e;
	}

FINALLY_020e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_1;
			V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_54, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_55 = V_8;
			if (L_55)
			{
				goto IL_021b;
			}
		}

IL_021a:
		{
			IL2CPP_END_FINALLY(526)
		}

IL_021b:
		{
			RuntimeObject* L_56 = V_8;
			NullCheck(L_56);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_56);
			IL2CPP_END_FINALLY(526)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(526)
	{
		IL2CPP_JUMP_TBL(0x223, IL_0223)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0223:
	{
		XmlElement_t561603118 * L_57 = ___value0;
		NullCheck(L_57);
		bool L_58 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_57, _stringLiteral3454449639);
		if (!L_58)
		{
			goto IL_024e;
		}
	}
	{
		XmlElement_t561603118 * L_59 = ___value0;
		NullCheck(L_59);
		XmlAttributeCollection_t2316283784 * L_60 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_59);
		NullCheck(L_60);
		XmlAttribute_t1173852259 * L_61 = XmlAttributeCollection_get_ItemOf_m3472332322(L_60, _stringLiteral3454449639, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_61);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Id(System.String) */, __this, L_62);
	}

IL_024e:
	{
		XmlElement_t561603118 * L_63 = ___value0;
		NullCheck(L_63);
		bool L_64 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_63, _stringLiteral3243520198);
		if (!L_64)
		{
			goto IL_0279;
		}
	}
	{
		XmlElement_t561603118 * L_65 = ___value0;
		NullCheck(L_65);
		XmlAttributeCollection_t2316283784 * L_66 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_65);
		NullCheck(L_66);
		XmlAttribute_t1173852259 * L_67 = XmlAttributeCollection_get_ItemOf_m3472332322(L_66, _stringLiteral3243520198, /*hidden argument*/NULL);
		NullCheck(L_67);
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_67);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String) */, __this, L_68);
	}

IL_0279:
	{
		XmlElement_t561603118 * L_69 = ___value0;
		NullCheck(L_69);
		bool L_70 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_69, _stringLiteral2515942052);
		if (!L_70)
		{
			goto IL_02a4;
		}
	}
	{
		XmlElement_t561603118 * L_71 = ___value0;
		NullCheck(L_71);
		XmlAttributeCollection_t2316283784 * L_72 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_71);
		NullCheck(L_72);
		XmlAttribute_t1173852259 * L_73 = XmlAttributeCollection_get_ItemOf_m3472332322(L_72, _stringLiteral2515942052, /*hidden argument*/NULL);
		NullCheck(L_73);
		String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_73);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_MimeType(System.String) */, __this, L_74);
	}

IL_02a4:
	{
		XmlElement_t561603118 * L_75 = ___value0;
		NullCheck(L_75);
		bool L_76 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_75, _stringLiteral3002373536);
		if (!L_76)
		{
			goto IL_02cf;
		}
	}
	{
		XmlElement_t561603118 * L_77 = ___value0;
		NullCheck(L_77);
		XmlAttributeCollection_t2316283784 * L_78 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_77);
		NullCheck(L_78);
		XmlAttribute_t1173852259 * L_79 = XmlAttributeCollection_get_ItemOf_m3472332322(L_78, _stringLiteral3002373536, /*hidden argument*/NULL);
		NullCheck(L_79);
		String_t* L_80 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_79);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String) */, __this, L_80);
	}

IL_02cf:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptedKey::.ctor()
extern "C"  void EncryptedKey__ctor_m739319042 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedKey__ctor_m739319042_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncryptedType__ctor_m3540871624(__this, /*hidden argument*/NULL);
		ReferenceList_t2222396100 * L_0 = (ReferenceList_t2222396100 *)il2cpp_codegen_object_new(ReferenceList_t2222396100_il2cpp_TypeInfo_var);
		ReferenceList__ctor_m938614769(L_0, /*hidden argument*/NULL);
		__this->set_referenceList_10(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_CarriedKeyName()
extern "C"  String_t* EncryptedKey_get_CarriedKeyName_m3447511591 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_carriedKeyName_8();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_CarriedKeyName(System.String)
extern "C"  void EncryptedKey_set_CarriedKeyName_m402644610 (EncryptedKey_t805343673 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_carriedKeyName_8(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedKey::get_Recipient()
extern "C"  String_t* EncryptedKey_get_Recipient_m2332837277 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_recipient_9();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedKey::set_Recipient(System.String)
extern "C"  void EncryptedKey_set_Recipient_m3616942824 (EncryptedKey_t805343673 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_recipient_9(L_0);
		return;
	}
}
// System.Security.Cryptography.Xml.ReferenceList System.Security.Cryptography.Xml.EncryptedKey::get_ReferenceList()
extern "C"  ReferenceList_t2222396100 * EncryptedKey_get_ReferenceList_m1321188651 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method)
{
	{
		ReferenceList_t2222396100 * L_0 = __this->get_referenceList_10();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.DataReference)
extern "C"  void EncryptedKey_AddReference_m664325077 (EncryptedKey_t805343673 * __this, DataReference_t3754427214 * ___dataReference0, const RuntimeMethod* method)
{
	{
		ReferenceList_t2222396100 * L_0 = EncryptedKey_get_ReferenceList_m1321188651(__this, /*hidden argument*/NULL);
		DataReference_t3754427214 * L_1 = ___dataReference0;
		NullCheck(L_0);
		ReferenceList_Add_m665697094(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedKey::AddReference(System.Security.Cryptography.Xml.KeyReference)
extern "C"  void EncryptedKey_AddReference_m651753650 (EncryptedKey_t805343673 * __this, KeyReference_t1254893728 * ___keyReference0, const RuntimeMethod* method)
{
	{
		ReferenceList_t2222396100 * L_0 = EncryptedKey_get_ReferenceList_m1321188651(__this, /*hidden argument*/NULL);
		KeyReference_t1254893728 * L_1 = ___keyReference0;
		NullCheck(L_0);
		ReferenceList_Add_m665697094(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedKey::GetXml()
extern "C"  XmlElement_t561603118 * EncryptedKey_GetXml_m3519934298 (EncryptedKey_t805343673 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedKey_GetXml_m3519934298_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_1 = EncryptedKey_GetXml_m2029937150(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptedKey_GetXml_m2029937150 (EncryptedKey_t805343673 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedKey_GetXml_m2029937150_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	EncryptionProperty_t3099724478 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XmlElement_t561603118 * V_4 = NULL;
	EncryptedReference_t3282913964 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	XmlElement_t561603118 * V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	RuntimeObject* V_9 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		CipherData_t4021546579 * L_0 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral4204821015, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedKey_GetXml_m2029937150_RuntimeMethod_var);
	}

IL_0016:
	{
		XmlDocument_t2837193595 * L_2 = ___document0;
		NullCheck(L_2);
		XmlElement_t561603118 * L_3 = XmlDocument_CreateElement_m3950844455(L_2, _stringLiteral3321084327, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_3;
		EncryptionMethod_t2271876579 * L_4 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		XmlElement_t561603118 * L_5 = V_0;
		EncryptionMethod_t2271876579 * L_6 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
		XmlDocument_t2837193595 * L_7 = ___document0;
		NullCheck(L_6);
		XmlElement_t561603118 * L_8 = EncryptionMethod_GetXml_m4098092980(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_5, L_8);
	}

IL_0045:
	{
		KeyInfo_t3757684699 * L_9 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		XmlElement_t561603118 * L_10 = V_0;
		XmlDocument_t2837193595 * L_11 = ___document0;
		KeyInfo_t3757684699 * L_12 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		XmlElement_t561603118 * L_13 = KeyInfo_GetXml_m847639489(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		XmlNode_t3767805227 * L_14 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_11, L_13, (bool)1);
		NullCheck(L_10);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_10, L_14);
	}

IL_0069:
	{
		CipherData_t4021546579 * L_15 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		if (!L_15)
		{
			goto IL_0087;
		}
	}
	{
		XmlElement_t561603118 * L_16 = V_0;
		CipherData_t4021546579 * L_17 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
		XmlDocument_t2837193595 * L_18 = ___document0;
		NullCheck(L_17);
		XmlElement_t561603118 * L_19 = CipherData_GetXml_m2328051665(L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_16, L_19);
	}

IL_0087:
	{
		EncryptionPropertyCollection_t3294881567 * L_20 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_20);
		int32_t L_21 = EncryptionPropertyCollection_get_Count_m2956813631(L_20, /*hidden argument*/NULL);
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		XmlDocument_t2837193595 * L_22 = ___document0;
		NullCheck(L_22);
		XmlElement_t561603118 * L_23 = XmlDocument_CreateElement_m3950844455(L_22, _stringLiteral2902905802, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_23;
		EncryptionPropertyCollection_t3294881567 * L_24 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_24);
		RuntimeObject* L_25 = EncryptionPropertyCollection_GetEnumerator_m1028937343(L_24, /*hidden argument*/NULL);
		V_3 = L_25;
	}

IL_00b5:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d4;
		}

IL_00ba:
		{
			RuntimeObject* L_26 = V_3;
			NullCheck(L_26);
			RuntimeObject * L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_26);
			V_2 = ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_27, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_28 = V_1;
			EncryptionProperty_t3099724478 * L_29 = V_2;
			XmlDocument_t2837193595 * L_30 = ___document0;
			NullCheck(L_29);
			XmlElement_t561603118 * L_31 = EncryptionProperty_GetXml_m2164701001(L_29, L_30, /*hidden argument*/NULL);
			NullCheck(L_28);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_28, L_31);
		}

IL_00d4:
		{
			RuntimeObject* L_32 = V_3;
			NullCheck(L_32);
			bool L_33 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_32);
			if (L_33)
			{
				goto IL_00ba;
			}
		}

IL_00df:
		{
			IL2CPP_LEAVE(0xF9, FINALLY_00e4);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e4;
	}

FINALLY_00e4:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_34 = V_3;
			V_8 = ((RuntimeObject*)IsInst((RuntimeObject*)L_34, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_35 = V_8;
			if (L_35)
			{
				goto IL_00f1;
			}
		}

IL_00f0:
		{
			IL2CPP_END_FINALLY(228)
		}

IL_00f1:
		{
			RuntimeObject* L_36 = V_8;
			NullCheck(L_36);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_36);
			IL2CPP_END_FINALLY(228)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(228)
	{
		IL2CPP_JUMP_TBL(0xF9, IL_00f9)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f9:
	{
		XmlElement_t561603118 * L_37 = V_0;
		XmlElement_t561603118 * L_38 = V_1;
		NullCheck(L_37);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_37, L_38);
	}

IL_0101:
	{
		ReferenceList_t2222396100 * L_39 = EncryptedKey_get_ReferenceList_m1321188651(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = ReferenceList_get_Count_m1546645390(L_39, /*hidden argument*/NULL);
		if ((((int32_t)L_40) <= ((int32_t)0)))
		{
			goto IL_0184;
		}
	}
	{
		XmlDocument_t2837193595 * L_41 = ___document0;
		NullCheck(L_41);
		XmlElement_t561603118 * L_42 = XmlDocument_CreateElement_m3950844455(L_41, _stringLiteral2197859913, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_4 = L_42;
		ReferenceList_t2222396100 * L_43 = EncryptedKey_get_ReferenceList_m1321188651(__this, /*hidden argument*/NULL);
		NullCheck(L_43);
		RuntimeObject* L_44 = ReferenceList_GetEnumerator_m1386260068(L_43, /*hidden argument*/NULL);
		V_6 = L_44;
	}

IL_0131:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0154;
		}

IL_0136:
		{
			RuntimeObject* L_45 = V_6;
			NullCheck(L_45);
			RuntimeObject * L_46 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_45);
			V_5 = ((EncryptedReference_t3282913964 *)CastclassClass((RuntimeObject*)L_46, EncryptedReference_t3282913964_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_47 = V_4;
			EncryptedReference_t3282913964 * L_48 = V_5;
			XmlDocument_t2837193595 * L_49 = ___document0;
			NullCheck(L_48);
			XmlElement_t561603118 * L_50 = VirtFuncInvoker1< XmlElement_t561603118 *, XmlDocument_t2837193595 * >::Invoke(5 /* System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml(System.Xml.XmlDocument) */, L_48, L_49);
			NullCheck(L_47);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_47, L_50);
		}

IL_0154:
		{
			RuntimeObject* L_51 = V_6;
			NullCheck(L_51);
			bool L_52 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_51);
			if (L_52)
			{
				goto IL_0136;
			}
		}

IL_0160:
		{
			IL2CPP_LEAVE(0x17B, FINALLY_0165);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0165;
	}

FINALLY_0165:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_53 = V_6;
			V_9 = ((RuntimeObject*)IsInst((RuntimeObject*)L_53, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_54 = V_9;
			if (L_54)
			{
				goto IL_0173;
			}
		}

IL_0172:
		{
			IL2CPP_END_FINALLY(357)
		}

IL_0173:
		{
			RuntimeObject* L_55 = V_9;
			NullCheck(L_55);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_55);
			IL2CPP_END_FINALLY(357)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(357)
	{
		IL2CPP_JUMP_TBL(0x17B, IL_017b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_017b:
	{
		XmlElement_t561603118 * L_56 = V_0;
		XmlElement_t561603118 * L_57 = V_4;
		NullCheck(L_56);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_56, L_57);
	}

IL_0184:
	{
		String_t* L_58 = EncryptedKey_get_CarriedKeyName_m3447511591(__this, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_01b7;
		}
	}
	{
		XmlDocument_t2837193595 * L_59 = ___document0;
		NullCheck(L_59);
		XmlElement_t561603118 * L_60 = XmlDocument_CreateElement_m3950844455(L_59, _stringLiteral4113096098, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_7 = L_60;
		XmlElement_t561603118 * L_61 = V_7;
		String_t* L_62 = EncryptedKey_get_CarriedKeyName_m3447511591(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_61, L_62);
		XmlElement_t561603118 * L_63 = V_0;
		XmlElement_t561603118 * L_64 = V_7;
		NullCheck(L_63);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_63, L_64);
	}

IL_01b7:
	{
		String_t* L_65 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Id() */, __this);
		if (!L_65)
		{
			goto IL_01d3;
		}
	}
	{
		XmlElement_t561603118 * L_66 = V_0;
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Id() */, __this);
		NullCheck(L_66);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_66, _stringLiteral3454449639, L_67);
	}

IL_01d3:
	{
		String_t* L_68 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Type() */, __this);
		if (!L_68)
		{
			goto IL_01ef;
		}
	}
	{
		XmlElement_t561603118 * L_69 = V_0;
		String_t* L_70 = VirtFuncInvoker0< String_t* >::Invoke(15 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Type() */, __this);
		NullCheck(L_69);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_69, _stringLiteral3243520198, L_70);
	}

IL_01ef:
	{
		String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_MimeType() */, __this);
		if (!L_71)
		{
			goto IL_020b;
		}
	}
	{
		XmlElement_t561603118 * L_72 = V_0;
		String_t* L_73 = VirtFuncInvoker0< String_t* >::Invoke(13 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_MimeType() */, __this);
		NullCheck(L_72);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_72, _stringLiteral2515942052, L_73);
	}

IL_020b:
	{
		String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Encoding() */, __this);
		if (!L_74)
		{
			goto IL_0227;
		}
	}
	{
		XmlElement_t561603118 * L_75 = V_0;
		String_t* L_76 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Security.Cryptography.Xml.EncryptedType::get_Encoding() */, __this);
		NullCheck(L_75);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_75, _stringLiteral3002373536, L_76);
	}

IL_0227:
	{
		String_t* L_77 = EncryptedKey_get_Recipient_m2332837277(__this, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_0243;
		}
	}
	{
		XmlElement_t561603118 * L_78 = V_0;
		String_t* L_79 = EncryptedKey_get_Recipient_m2332837277(__this, /*hidden argument*/NULL);
		NullCheck(L_78);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_78, _stringLiteral1079456919, L_79);
	}

IL_0243:
	{
		XmlElement_t561603118 * L_80 = V_0;
		return L_80;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedKey::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedKey_LoadXml_m2702380362 (EncryptedKey_t805343673 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedKey_LoadXml_m2702380362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XmlElement_t561603118 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XmlNode_t3767805227 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	DataReference_t3754427214 * V_6 = NULL;
	KeyReference_t1254893728 * V_7 = NULL;
	String_t* V_8 = NULL;
	Dictionary_2_t2736202052 * V_9 = NULL;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	String_t* V_12 = NULL;
	int32_t V_13 = 0;
	RuntimeObject* V_14 = NULL;
	RuntimeObject* V_15 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedKey_LoadXml_m2702380362_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral3321084327, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral4184179926, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptedKey_LoadXml_m2702380362_RuntimeMethod_var);
	}

IL_0046:
	{
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, (EncryptionMethod_t2271876579 *)NULL);
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, (EncryptionMethod_t2271876579 *)NULL);
		EncryptionPropertyCollection_t3294881567 * L_9 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
		NullCheck(L_9);
		EncryptionPropertyCollection_Clear_m3434930940(L_9, /*hidden argument*/NULL);
		ReferenceList_t2222396100 * L_10 = EncryptedKey_get_ReferenceList_m1321188651(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ReferenceList_Clear_m1548714595(L_10, /*hidden argument*/NULL);
		EncryptedKey_set_CarriedKeyName_m402644610(__this, (String_t*)NULL, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Id(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_MimeType(System.String) */, __this, (String_t*)NULL);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String) */, __this, (String_t*)NULL);
		EncryptedKey_set_Recipient_m3616942824(__this, (String_t*)NULL, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_11 = ___value0;
		NullCheck(L_11);
		XmlNodeList_t2551693786 * L_12 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_12);
		V_1 = L_13;
	}

IL_00a0:
	try
	{ // begin try (depth: 1)
		{
			goto IL_035f;
		}

IL_00a5:
		{
			RuntimeObject* L_14 = V_1;
			NullCheck(L_14);
			RuntimeObject * L_15 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_15, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_16 = V_0;
			if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_16, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
			{
				goto IL_00c1;
			}
		}

IL_00bc:
		{
			goto IL_035f;
		}

IL_00c1:
		{
			XmlNode_t3767805227 * L_17 = V_0;
			NullCheck(L_17);
			String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_17);
			V_8 = L_18;
			String_t* L_19 = V_8;
			if (!L_19)
			{
				goto IL_035f;
			}
		}

IL_00d0:
		{
			Dictionary_2_t2736202052 * L_20 = ((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map7_12();
			if (L_20)
			{
				goto IL_0137;
			}
		}

IL_00da:
		{
			Dictionary_2_t2736202052 * L_21 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_21, 6, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_9 = L_21;
			Dictionary_2_t2736202052 * L_22 = V_9;
			NullCheck(L_22);
			Dictionary_2_Add_m282647386(L_22, _stringLiteral3041704345, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_23 = V_9;
			NullCheck(L_23);
			Dictionary_2_Add_m282647386(L_23, _stringLiteral2911941651, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_24 = V_9;
			NullCheck(L_24);
			Dictionary_2_Add_m282647386(L_24, _stringLiteral3608856901, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_25 = V_9;
			NullCheck(L_25);
			Dictionary_2_Add_m282647386(L_25, _stringLiteral2902905802, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_26 = V_9;
			NullCheck(L_26);
			Dictionary_2_Add_m282647386(L_26, _stringLiteral2197859913, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_27 = V_9;
			NullCheck(L_27);
			Dictionary_2_Add_m282647386(L_27, _stringLiteral4113096098, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_28 = V_9;
			((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map7_12(L_28);
		}

IL_0137:
		{
			Dictionary_2_t2736202052 * L_29 = ((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map7_12();
			String_t* L_30 = V_8;
			NullCheck(L_29);
			bool L_31 = Dictionary_2_TryGetValue_m1013208020(L_29, L_30, (int32_t*)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_31)
			{
				goto IL_035f;
			}
		}

IL_014a:
		{
			int32_t L_32 = V_10;
			switch (L_32)
			{
				case 0:
				{
					goto IL_016e;
				}
				case 1:
				{
					goto IL_018f;
				}
				case 2:
				{
					goto IL_01b0;
				}
				case 3:
				{
					goto IL_01d1;
				}
				case 4:
				{
					goto IL_0239;
				}
				case 5:
				{
					goto IL_0349;
				}
			}
		}

IL_0169:
		{
			goto IL_035f;
		}

IL_016e:
		{
			EncryptionMethod_t2271876579 * L_33 = (EncryptionMethod_t2271876579 *)il2cpp_codegen_object_new(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var);
			EncryptionMethod__ctor_m4287255623(L_33, /*hidden argument*/NULL);
			VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, __this, L_33);
			EncryptionMethod_t2271876579 * L_34 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, __this);
			XmlNode_t3767805227 * L_35 = V_0;
			NullCheck(L_34);
			EncryptionMethod_LoadXml_m616092953(L_34, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_35, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_035f;
		}

IL_018f:
		{
			KeyInfo_t3757684699 * L_36 = (KeyInfo_t3757684699 *)il2cpp_codegen_object_new(KeyInfo_t3757684699_il2cpp_TypeInfo_var);
			KeyInfo__ctor_m2843249396(L_36, /*hidden argument*/NULL);
			EncryptedType_set_KeyInfo_m2286232490(__this, L_36, /*hidden argument*/NULL);
			KeyInfo_t3757684699 * L_37 = EncryptedType_get_KeyInfo_m2827788688(__this, /*hidden argument*/NULL);
			XmlNode_t3767805227 * L_38 = V_0;
			NullCheck(L_37);
			KeyInfo_LoadXml_m2855923995(L_37, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_38, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_035f;
		}

IL_01b0:
		{
			CipherData_t4021546579 * L_39 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
			CipherData__ctor_m823107412(L_39, /*hidden argument*/NULL);
			VirtActionInvoker1< CipherData_t4021546579 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData) */, __this, L_39);
			CipherData_t4021546579 * L_40 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, __this);
			XmlNode_t3767805227 * L_41 = V_0;
			NullCheck(L_40);
			CipherData_LoadXml_m1782359316(L_40, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_41, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			goto IL_035f;
		}

IL_01d1:
		{
			XmlNode_t3767805227 * L_42 = V_0;
			NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_42, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			XmlNodeList_t2551693786 * L_43 = VirtFuncInvoker2< XmlNodeList_t2551693786 *, String_t*, String_t* >::Invoke(48 /* System.Xml.XmlNodeList System.Xml.XmlElement::GetElementsByTagName(System.String,System.String) */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_42, XmlElement_t561603118_il2cpp_TypeInfo_var)), _stringLiteral3360770542, _stringLiteral1984398691);
			NullCheck(L_43);
			RuntimeObject* L_44 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_43);
			V_3 = L_44;
		}

IL_01ec:
		try
		{ // begin try (depth: 2)
			{
				goto IL_020f;
			}

IL_01f1:
			{
				RuntimeObject* L_45 = V_3;
				NullCheck(L_45);
				RuntimeObject * L_46 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_45);
				V_2 = ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_46, XmlElement_t561603118_il2cpp_TypeInfo_var));
				EncryptionPropertyCollection_t3294881567 * L_47 = VirtFuncInvoker0< EncryptionPropertyCollection_t3294881567 * >::Invoke(10 /* System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties() */, __this);
				XmlElement_t561603118 * L_48 = V_2;
				EncryptionProperty_t3099724478 * L_49 = (EncryptionProperty_t3099724478 *)il2cpp_codegen_object_new(EncryptionProperty_t3099724478_il2cpp_TypeInfo_var);
				EncryptionProperty__ctor_m4273973733(L_49, L_48, /*hidden argument*/NULL);
				NullCheck(L_47);
				EncryptionPropertyCollection_Add_m1382797104(L_47, L_49, /*hidden argument*/NULL);
			}

IL_020f:
			{
				RuntimeObject* L_50 = V_3;
				NullCheck(L_50);
				bool L_51 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_50);
				if (L_51)
				{
					goto IL_01f1;
				}
			}

IL_021a:
			{
				IL2CPP_LEAVE(0x234, FINALLY_021f);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_021f;
		}

FINALLY_021f:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_52 = V_3;
				V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_52, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_53 = V_11;
				if (L_53)
				{
					goto IL_022c;
				}
			}

IL_022b:
			{
				IL2CPP_END_FINALLY(543)
			}

IL_022c:
			{
				RuntimeObject* L_54 = V_11;
				NullCheck(L_54);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_54);
				IL2CPP_END_FINALLY(543)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(543)
		{
			IL2CPP_JUMP_TBL(0x234, IL_0234)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0234:
		{
			goto IL_035f;
		}

IL_0239:
		{
			XmlNode_t3767805227 * L_55 = V_0;
			NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_55, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			XmlNodeList_t2551693786 * L_56 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_55, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			NullCheck(L_56);
			RuntimeObject* L_57 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_56);
			V_5 = L_57;
		}

IL_024b:
		try
		{ // begin try (depth: 2)
			{
				goto IL_031d;
			}

IL_0250:
			{
				RuntimeObject* L_58 = V_5;
				NullCheck(L_58);
				RuntimeObject * L_59 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_58);
				V_4 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_59, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				XmlNode_t3767805227 * L_60 = V_4;
				if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_60, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
				{
					goto IL_026f;
				}
			}

IL_026a:
			{
				goto IL_031d;
			}

IL_026f:
			{
				XmlNode_t3767805227 * L_61 = V_4;
				NullCheck(L_61);
				String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_61);
				V_12 = L_62;
				String_t* L_63 = V_12;
				if (!L_63)
				{
					goto IL_031d;
				}
			}

IL_027f:
			{
				Dictionary_2_t2736202052 * L_64 = ((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map6_11();
				if (L_64)
				{
					goto IL_02b2;
				}
			}

IL_0289:
			{
				Dictionary_2_t2736202052 * L_65 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
				Dictionary_2__ctor_m2392909825(L_65, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
				V_9 = L_65;
				Dictionary_2_t2736202052 * L_66 = V_9;
				NullCheck(L_66);
				Dictionary_2_Add_m282647386(L_66, _stringLiteral4169104624, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_67 = V_9;
				NullCheck(L_67);
				Dictionary_2_Add_m282647386(L_67, _stringLiteral386517117, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_68 = V_9;
				((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map6_11(L_68);
			}

IL_02b2:
			{
				Dictionary_2_t2736202052 * L_69 = ((EncryptedKey_t805343673_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedKey_t805343673_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map6_11();
				String_t* L_70 = V_12;
				NullCheck(L_69);
				bool L_71 = Dictionary_2_TryGetValue_m1013208020(L_69, L_70, (int32_t*)(&V_13), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
				if (!L_71)
				{
					goto IL_031d;
				}
			}

IL_02c5:
			{
				int32_t L_72 = V_13;
				if (!L_72)
				{
					goto IL_02d9;
				}
			}

IL_02cc:
			{
				int32_t L_73 = V_13;
				if ((((int32_t)L_73) == ((int32_t)1)))
				{
					goto IL_02fb;
				}
			}

IL_02d4:
			{
				goto IL_031d;
			}

IL_02d9:
			{
				DataReference_t3754427214 * L_74 = (DataReference_t3754427214 *)il2cpp_codegen_object_new(DataReference_t3754427214_il2cpp_TypeInfo_var);
				DataReference__ctor_m4026518688(L_74, /*hidden argument*/NULL);
				V_6 = L_74;
				DataReference_t3754427214 * L_75 = V_6;
				XmlNode_t3767805227 * L_76 = V_4;
				NullCheck(L_75);
				VirtActionInvoker1< XmlElement_t561603118 * >::Invoke(6 /* System.Void System.Security.Cryptography.Xml.EncryptedReference::LoadXml(System.Xml.XmlElement) */, L_75, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_76, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				DataReference_t3754427214 * L_77 = V_6;
				EncryptedKey_AddReference_m664325077(__this, L_77, /*hidden argument*/NULL);
				goto IL_031d;
			}

IL_02fb:
			{
				KeyReference_t1254893728 * L_78 = (KeyReference_t1254893728 *)il2cpp_codegen_object_new(KeyReference_t1254893728_il2cpp_TypeInfo_var);
				KeyReference__ctor_m2929745253(L_78, /*hidden argument*/NULL);
				V_7 = L_78;
				KeyReference_t1254893728 * L_79 = V_7;
				XmlNode_t3767805227 * L_80 = V_4;
				NullCheck(L_79);
				VirtActionInvoker1< XmlElement_t561603118 * >::Invoke(6 /* System.Void System.Security.Cryptography.Xml.EncryptedReference::LoadXml(System.Xml.XmlElement) */, L_79, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_80, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				KeyReference_t1254893728 * L_81 = V_7;
				EncryptedKey_AddReference_m651753650(__this, L_81, /*hidden argument*/NULL);
				goto IL_031d;
			}

IL_031d:
			{
				RuntimeObject* L_82 = V_5;
				NullCheck(L_82);
				bool L_83 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_82);
				if (L_83)
				{
					goto IL_0250;
				}
			}

IL_0329:
			{
				IL2CPP_LEAVE(0x344, FINALLY_032e);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_032e;
		}

FINALLY_032e:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_84 = V_5;
				V_14 = ((RuntimeObject*)IsInst((RuntimeObject*)L_84, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_85 = V_14;
				if (L_85)
				{
					goto IL_033c;
				}
			}

IL_033b:
			{
				IL2CPP_END_FINALLY(814)
			}

IL_033c:
			{
				RuntimeObject* L_86 = V_14;
				NullCheck(L_86);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_86);
				IL2CPP_END_FINALLY(814)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(814)
		{
			IL2CPP_JUMP_TBL(0x344, IL_0344)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0344:
		{
			goto IL_035f;
		}

IL_0349:
		{
			XmlNode_t3767805227 * L_87 = V_0;
			NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_87, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			String_t* L_88 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlElement::get_InnerText() */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_87, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			EncryptedKey_set_CarriedKeyName_m402644610(__this, L_88, /*hidden argument*/NULL);
			goto IL_035f;
		}

IL_035f:
		{
			RuntimeObject* L_89 = V_1;
			NullCheck(L_89);
			bool L_90 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_89);
			if (L_90)
			{
				goto IL_00a5;
			}
		}

IL_036a:
		{
			IL2CPP_LEAVE(0x384, FINALLY_036f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_036f;
	}

FINALLY_036f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_91 = V_1;
			V_15 = ((RuntimeObject*)IsInst((RuntimeObject*)L_91, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_92 = V_15;
			if (L_92)
			{
				goto IL_037c;
			}
		}

IL_037b:
		{
			IL2CPP_END_FINALLY(879)
		}

IL_037c:
		{
			RuntimeObject* L_93 = V_15;
			NullCheck(L_93);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_93);
			IL2CPP_END_FINALLY(879)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(879)
	{
		IL2CPP_JUMP_TBL(0x384, IL_0384)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0384:
	{
		XmlElement_t561603118 * L_94 = ___value0;
		NullCheck(L_94);
		bool L_95 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_94, _stringLiteral3454449639);
		if (!L_95)
		{
			goto IL_03af;
		}
	}
	{
		XmlElement_t561603118 * L_96 = ___value0;
		NullCheck(L_96);
		XmlAttributeCollection_t2316283784 * L_97 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_96);
		NullCheck(L_97);
		XmlAttribute_t1173852259 * L_98 = XmlAttributeCollection_get_ItemOf_m3472332322(L_97, _stringLiteral3454449639, /*hidden argument*/NULL);
		NullCheck(L_98);
		String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_98);
		VirtActionInvoker1< String_t* >::Invoke(12 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Id(System.String) */, __this, L_99);
	}

IL_03af:
	{
		XmlElement_t561603118 * L_100 = ___value0;
		NullCheck(L_100);
		bool L_101 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_100, _stringLiteral3243520198);
		if (!L_101)
		{
			goto IL_03da;
		}
	}
	{
		XmlElement_t561603118 * L_102 = ___value0;
		NullCheck(L_102);
		XmlAttributeCollection_t2316283784 * L_103 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_102);
		NullCheck(L_103);
		XmlAttribute_t1173852259 * L_104 = XmlAttributeCollection_get_ItemOf_m3472332322(L_103, _stringLiteral3243520198, /*hidden argument*/NULL);
		NullCheck(L_104);
		String_t* L_105 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_104);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String) */, __this, L_105);
	}

IL_03da:
	{
		XmlElement_t561603118 * L_106 = ___value0;
		NullCheck(L_106);
		bool L_107 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_106, _stringLiteral2515942052);
		if (!L_107)
		{
			goto IL_0405;
		}
	}
	{
		XmlElement_t561603118 * L_108 = ___value0;
		NullCheck(L_108);
		XmlAttributeCollection_t2316283784 * L_109 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_108);
		NullCheck(L_109);
		XmlAttribute_t1173852259 * L_110 = XmlAttributeCollection_get_ItemOf_m3472332322(L_109, _stringLiteral2515942052, /*hidden argument*/NULL);
		NullCheck(L_110);
		String_t* L_111 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_110);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_MimeType(System.String) */, __this, L_111);
	}

IL_0405:
	{
		XmlElement_t561603118 * L_112 = ___value0;
		NullCheck(L_112);
		bool L_113 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_112, _stringLiteral3002373536);
		if (!L_113)
		{
			goto IL_0430;
		}
	}
	{
		XmlElement_t561603118 * L_114 = ___value0;
		NullCheck(L_114);
		XmlAttributeCollection_t2316283784 * L_115 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_114);
		NullCheck(L_115);
		XmlAttribute_t1173852259 * L_116 = XmlAttributeCollection_get_ItemOf_m3472332322(L_115, _stringLiteral3002373536, /*hidden argument*/NULL);
		NullCheck(L_116);
		String_t* L_117 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_116);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String) */, __this, L_117);
	}

IL_0430:
	{
		XmlElement_t561603118 * L_118 = ___value0;
		NullCheck(L_118);
		bool L_119 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_118, _stringLiteral1079456919);
		if (!L_119)
		{
			goto IL_045b;
		}
	}
	{
		XmlElement_t561603118 * L_120 = ___value0;
		NullCheck(L_120);
		XmlAttributeCollection_t2316283784 * L_121 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_120);
		NullCheck(L_121);
		XmlAttribute_t1173852259 * L_122 = XmlAttributeCollection_get_ItemOf_m3472332322(L_121, _stringLiteral1079456919, /*hidden argument*/NULL);
		NullCheck(L_122);
		String_t* L_123 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_122);
		VirtActionInvoker1< String_t* >::Invoke(7 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String) */, __this, L_123);
	}

IL_045b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptedReference::.ctor()
extern "C"  void EncryptedReference__ctor_m3809608059 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedReference__ctor_m3809608059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		TransformChain_t1669092815 * L_0 = (TransformChain_t1669092815 *)il2cpp_codegen_object_new(TransformChain_t1669092815_il2cpp_TypeInfo_var);
		TransformChain__ctor_m99576165(L_0, /*hidden argument*/NULL);
		EncryptedReference_set_TransformChain_m1849774042(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_ReferenceType()
extern "C"  String_t* EncryptedReference_get_ReferenceType_m1584760138 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_referenceType_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_ReferenceType(System.String)
extern "C"  void EncryptedReference_set_ReferenceType_m1398693937 (EncryptedReference_t3282913964 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_referenceType_0(L_0);
		return;
	}
}
// System.Security.Cryptography.Xml.TransformChain System.Security.Cryptography.Xml.EncryptedReference::get_TransformChain()
extern "C"  TransformChain_t1669092815 * EncryptedReference_get_TransformChain_m3731705707 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method)
{
	{
		TransformChain_t1669092815 * L_0 = __this->get_tc_2();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_TransformChain(System.Security.Cryptography.Xml.TransformChain)
extern "C"  void EncryptedReference_set_TransformChain_m1849774042 (EncryptedReference_t3282913964 * __this, TransformChain_t1669092815 * ___value0, const RuntimeMethod* method)
{
	{
		TransformChain_t1669092815 * L_0 = ___value0;
		__this->set_tc_2(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedReference::get_Uri()
extern "C"  String_t* EncryptedReference_get_Uri_m294820826 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_uri_1();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedReference::set_Uri(System.String)
extern "C"  void EncryptedReference_set_Uri_m3383711198 (EncryptedReference_t3282913964 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_uri_1(L_0);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml()
extern "C"  XmlElement_t561603118 * EncryptedReference_GetXml_m2759238525 (EncryptedReference_t3282913964 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedReference_GetXml_m2759238525_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_1 = VirtFuncInvoker1< XmlElement_t561603118 *, XmlDocument_t2837193595 * >::Invoke(5 /* System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml(System.Xml.XmlDocument) */, __this, L_0);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptedReference::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptedReference_GetXml_m2806412198 (EncryptedReference_t3282913964 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedReference_GetXml_m2806412198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	Transform_t1105379765 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = ___document0;
		String_t* L_1 = EncryptedReference_get_ReferenceType_m1584760138(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_0, L_1, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlElement_t561603118 * L_3 = V_0;
		String_t* L_4 = EncryptedReference_get_Uri_m294820826(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_3, _stringLiteral1891153624, L_4);
		TransformChain_t1669092815 * L_5 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_00ae;
		}
	}
	{
		TransformChain_t1669092815 * L_6 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = TransformChain_get_Count_m3542384029(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		XmlDocument_t2837193595 * L_8 = ___document0;
		NullCheck(L_8);
		XmlElement_t561603118 * L_9 = XmlDocument_CreateElement_m3950844455(L_8, _stringLiteral1706932836, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_9;
		TransformChain_t1669092815 * L_10 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		RuntimeObject* L_11 = TransformChain_GetEnumerator_m4235168822(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
	}

IL_005c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0081;
		}

IL_0061:
		{
			RuntimeObject* L_12 = V_3;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			V_2 = ((Transform_t1105379765 *)CastclassClass((RuntimeObject*)L_13, Transform_t1105379765_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_14 = V_1;
			XmlDocument_t2837193595 * L_15 = ___document0;
			Transform_t1105379765 * L_16 = V_2;
			NullCheck(L_16);
			XmlElement_t561603118 * L_17 = Transform_GetXml_m3710823594(L_16, /*hidden argument*/NULL);
			NullCheck(L_15);
			XmlNode_t3767805227 * L_18 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_15, L_17, (bool)1);
			NullCheck(L_14);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_14, L_18);
		}

IL_0081:
		{
			RuntimeObject* L_19 = V_3;
			NullCheck(L_19);
			bool L_20 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_0061;
			}
		}

IL_008c:
		{
			IL2CPP_LEAVE(0xA6, FINALLY_0091);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0091;
	}

FINALLY_0091:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_21 = V_3;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_21, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_22 = V_4;
			if (L_22)
			{
				goto IL_009e;
			}
		}

IL_009d:
		{
			IL2CPP_END_FINALLY(145)
		}

IL_009e:
		{
			RuntimeObject* L_23 = V_4;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_23);
			IL2CPP_END_FINALLY(145)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(145)
	{
		IL2CPP_JUMP_TBL(0xA6, IL_00a6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a6:
	{
		XmlElement_t561603118 * L_24 = V_0;
		XmlElement_t561603118 * L_25 = V_1;
		NullCheck(L_24);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_24, L_25);
	}

IL_00ae:
	{
		XmlElement_t561603118 * L_26 = V_0;
		return L_26;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedReference::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptedReference_LoadXml_m1352321336 (EncryptedReference_t3282913964 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedReference_LoadXml_m1352321336_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XmlNode_t3767805227 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	Transform_t1105379765 * V_4 = NULL;
	String_t* V_5 = NULL;
	Dictionary_2_t2736202052 * V_6 = NULL;
	int32_t V_7 = 0;
	String_t* V_8 = NULL;
	int32_t V_9 = 0;
	RuntimeObject* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedReference_LoadXml_m1352321336_RuntimeMethod_var);
	}

IL_0011:
	{
		EncryptedReference_set_Uri_m3383711198(__this, (String_t*)NULL, /*hidden argument*/NULL);
		TransformChain_t1669092815 * L_2 = (TransformChain_t1669092815 *)il2cpp_codegen_object_new(TransformChain_t1669092815_il2cpp_TypeInfo_var);
		TransformChain__ctor_m99576165(L_2, /*hidden argument*/NULL);
		EncryptedReference_set_TransformChain_m1849774042(__this, L_2, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_3 = ___value0;
		NullCheck(L_3);
		XmlNodeList_t2551693786 * L_4 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_3);
		NullCheck(L_4);
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_4);
		V_1 = L_5;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0282;
		}

IL_0034:
		{
			RuntimeObject* L_6 = V_1;
			NullCheck(L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_7, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_8 = V_0;
			if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_8, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
			{
				goto IL_0050;
			}
		}

IL_004b:
		{
			goto IL_0282;
		}

IL_0050:
		{
			XmlNode_t3767805227 * L_9 = V_0;
			NullCheck(L_9);
			String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_9);
			V_5 = L_10;
			String_t* L_11 = V_5;
			if (!L_11)
			{
				goto IL_0282;
			}
		}

IL_005f:
		{
			Dictionary_2_t2736202052 * L_12 = ((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map3_4();
			if (L_12)
			{
				goto IL_0085;
			}
		}

IL_0069:
		{
			Dictionary_2_t2736202052 * L_13 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_13, 1, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_6 = L_13;
			Dictionary_2_t2736202052 * L_14 = V_6;
			NullCheck(L_14);
			Dictionary_2_Add_m282647386(L_14, _stringLiteral1706932836, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_15 = V_6;
			((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map3_4(L_15);
		}

IL_0085:
		{
			Dictionary_2_t2736202052 * L_16 = ((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map3_4();
			String_t* L_17 = V_5;
			NullCheck(L_16);
			bool L_18 = Dictionary_2_TryGetValue_m1013208020(L_16, L_17, (int32_t*)(&V_7), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_18)
			{
				goto IL_0282;
			}
		}

IL_0098:
		{
			int32_t L_19 = V_7;
			if (!L_19)
			{
				goto IL_00a4;
			}
		}

IL_009f:
		{
			goto IL_0282;
		}

IL_00a4:
		{
			XmlNode_t3767805227 * L_20 = V_0;
			NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_20, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			XmlNodeList_t2551693786 * L_21 = VirtFuncInvoker2< XmlNodeList_t2551693786 *, String_t*, String_t* >::Invoke(48 /* System.Xml.XmlNodeList System.Xml.XmlElement::GetElementsByTagName(System.String,System.String) */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_20, XmlElement_t561603118_il2cpp_TypeInfo_var)), _stringLiteral1705687652, _stringLiteral3726462450);
			NullCheck(L_21);
			RuntimeObject* L_22 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_21);
			V_3 = L_22;
		}

IL_00bf:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0258;
			}

IL_00c4:
			{
				RuntimeObject* L_23 = V_3;
				NullCheck(L_23);
				RuntimeObject * L_24 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_23);
				V_2 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_24, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				V_4 = (Transform_t1105379765 *)NULL;
				XmlNode_t3767805227 * L_25 = V_2;
				NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_25, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				XmlAttributeCollection_t2316283784 * L_26 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_25, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				NullCheck(L_26);
				XmlAttribute_t1173852259 * L_27 = XmlAttributeCollection_get_ItemOf_m3472332322(L_26, _stringLiteral3493885024, /*hidden argument*/NULL);
				NullCheck(L_27);
				String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_27);
				V_8 = L_28;
				String_t* L_29 = V_8;
				if (!L_29)
				{
					goto IL_0234;
				}
			}

IL_00f6:
			{
				Dictionary_2_t2736202052 * L_30 = ((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map2_3();
				if (L_30)
				{
					goto IL_0185;
				}
			}

IL_0100:
			{
				Dictionary_2_t2736202052 * L_31 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
				Dictionary_2__ctor_m2392909825(L_31, ((int32_t)9), /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
				V_6 = L_31;
				Dictionary_2_t2736202052 * L_32 = V_6;
				NullCheck(L_32);
				Dictionary_2_Add_m282647386(L_32, _stringLiteral2162480690, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_33 = V_6;
				NullCheck(L_33);
				Dictionary_2_Add_m282647386(L_33, _stringLiteral3994662901, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_34 = V_6;
				NullCheck(L_34);
				Dictionary_2_Add_m282647386(L_34, _stringLiteral1972575430, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_35 = V_6;
				NullCheck(L_35);
				Dictionary_2_Add_m282647386(L_35, _stringLiteral2496344816, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_36 = V_6;
				NullCheck(L_36);
				Dictionary_2_Add_m282647386(L_36, _stringLiteral329648764, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_37 = V_6;
				NullCheck(L_37);
				Dictionary_2_Add_m282647386(L_37, _stringLiteral1340937441, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_38 = V_6;
				NullCheck(L_38);
				Dictionary_2_Add_m282647386(L_38, _stringLiteral3988398138, 6, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_39 = V_6;
				NullCheck(L_39);
				Dictionary_2_Add_m282647386(L_39, _stringLiteral1118642106, 7, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_40 = V_6;
				NullCheck(L_40);
				Dictionary_2_Add_m282647386(L_40, _stringLiteral3576697708, 8, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_41 = V_6;
				((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map2_3(L_41);
			}

IL_0185:
			{
				Dictionary_2_t2736202052 * L_42 = ((EncryptedReference_t3282913964_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedReference_t3282913964_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map2_3();
				String_t* L_43 = V_8;
				NullCheck(L_42);
				bool L_44 = Dictionary_2_TryGetValue_m1013208020(L_42, L_43, (int32_t*)(&V_9), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
				if (!L_44)
				{
					goto IL_0234;
				}
			}

IL_0198:
			{
				int32_t L_45 = V_9;
				switch (L_45)
				{
					case 0:
					{
						goto IL_01c8;
					}
					case 1:
					{
						goto IL_01d4;
					}
					case 2:
					{
						goto IL_01e0;
					}
					case 3:
					{
						goto IL_01ec;
					}
					case 4:
					{
						goto IL_01f8;
					}
					case 5:
					{
						goto IL_0204;
					}
					case 6:
					{
						goto IL_0210;
					}
					case 7:
					{
						goto IL_021c;
					}
					case 8:
					{
						goto IL_0228;
					}
				}
			}

IL_01c3:
			{
				goto IL_0234;
			}

IL_01c8:
			{
				XmlDsigBase64Transform_t260084727 * L_46 = (XmlDsigBase64Transform_t260084727 *)il2cpp_codegen_object_new(XmlDsigBase64Transform_t260084727_il2cpp_TypeInfo_var);
				XmlDsigBase64Transform__ctor_m1582715825(L_46, /*hidden argument*/NULL);
				V_4 = L_46;
				goto IL_0239;
			}

IL_01d4:
			{
				XmlDsigC14NTransform_t3949211521 * L_47 = (XmlDsigC14NTransform_t3949211521 *)il2cpp_codegen_object_new(XmlDsigC14NTransform_t3949211521_il2cpp_TypeInfo_var);
				XmlDsigC14NTransform__ctor_m3787210150(L_47, /*hidden argument*/NULL);
				V_4 = L_47;
				goto IL_0239;
			}

IL_01e0:
			{
				XmlDsigC14NWithCommentsTransform_t1074875822 * L_48 = (XmlDsigC14NWithCommentsTransform_t1074875822 *)il2cpp_codegen_object_new(XmlDsigC14NWithCommentsTransform_t1074875822_il2cpp_TypeInfo_var);
				XmlDsigC14NWithCommentsTransform__ctor_m530905444(L_48, /*hidden argument*/NULL);
				V_4 = L_48;
				goto IL_0239;
			}

IL_01ec:
			{
				XmlDsigEnvelopedSignatureTransform_t2851260348 * L_49 = (XmlDsigEnvelopedSignatureTransform_t2851260348 *)il2cpp_codegen_object_new(XmlDsigEnvelopedSignatureTransform_t2851260348_il2cpp_TypeInfo_var);
				XmlDsigEnvelopedSignatureTransform__ctor_m100737688(L_49, /*hidden argument*/NULL);
				V_4 = L_49;
				goto IL_0239;
			}

IL_01f8:
			{
				XmlDsigXPathTransform_t1962434658 * L_50 = (XmlDsigXPathTransform_t1962434658 *)il2cpp_codegen_object_new(XmlDsigXPathTransform_t1962434658_il2cpp_TypeInfo_var);
				XmlDsigXPathTransform__ctor_m249722684(L_50, /*hidden argument*/NULL);
				V_4 = L_50;
				goto IL_0239;
			}

IL_0204:
			{
				XmlDsigXsltTransform_t2973394665 * L_51 = (XmlDsigXsltTransform_t2973394665 *)il2cpp_codegen_object_new(XmlDsigXsltTransform_t2973394665_il2cpp_TypeInfo_var);
				XmlDsigXsltTransform__ctor_m1284152114(L_51, /*hidden argument*/NULL);
				V_4 = L_51;
				goto IL_0239;
			}

IL_0210:
			{
				XmlDsigExcC14NTransform_t586418029 * L_52 = (XmlDsigExcC14NTransform_t586418029 *)il2cpp_codegen_object_new(XmlDsigExcC14NTransform_t586418029_il2cpp_TypeInfo_var);
				XmlDsigExcC14NTransform__ctor_m1001005067(L_52, /*hidden argument*/NULL);
				V_4 = L_52;
				goto IL_0239;
			}

IL_021c:
			{
				XmlDsigExcC14NWithCommentsTransform_t1461379654 * L_53 = (XmlDsigExcC14NWithCommentsTransform_t1461379654 *)il2cpp_codegen_object_new(XmlDsigExcC14NWithCommentsTransform_t1461379654_il2cpp_TypeInfo_var);
				XmlDsigExcC14NWithCommentsTransform__ctor_m3791089173(L_53, /*hidden argument*/NULL);
				V_4 = L_53;
				goto IL_0239;
			}

IL_0228:
			{
				XmlDecryptionTransform_t4000891284 * L_54 = (XmlDecryptionTransform_t4000891284 *)il2cpp_codegen_object_new(XmlDecryptionTransform_t4000891284_il2cpp_TypeInfo_var);
				XmlDecryptionTransform__ctor_m2968698842(L_54, /*hidden argument*/NULL);
				V_4 = L_54;
				goto IL_0239;
			}

IL_0234:
			{
				goto IL_0258;
			}

IL_0239:
			{
				Transform_t1105379765 * L_55 = V_4;
				XmlNode_t3767805227 * L_56 = V_2;
				NullCheck(((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_56, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				XmlNodeList_t2551693786 * L_57 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_56, XmlElement_t561603118_il2cpp_TypeInfo_var)));
				NullCheck(L_55);
				VirtActionInvoker1< XmlNodeList_t2551693786 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.Transform::LoadInnerXml(System.Xml.XmlNodeList) */, L_55, L_57);
				TransformChain_t1669092815 * L_58 = EncryptedReference_get_TransformChain_m3731705707(__this, /*hidden argument*/NULL);
				Transform_t1105379765 * L_59 = V_4;
				NullCheck(L_58);
				TransformChain_Add_m67722782(L_58, L_59, /*hidden argument*/NULL);
			}

IL_0258:
			{
				RuntimeObject* L_60 = V_3;
				NullCheck(L_60);
				bool L_61 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_60);
				if (L_61)
				{
					goto IL_00c4;
				}
			}

IL_0263:
			{
				IL2CPP_LEAVE(0x27D, FINALLY_0268);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0268;
		}

FINALLY_0268:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_62 = V_3;
				V_10 = ((RuntimeObject*)IsInst((RuntimeObject*)L_62, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_63 = V_10;
				if (L_63)
				{
					goto IL_0275;
				}
			}

IL_0274:
			{
				IL2CPP_END_FINALLY(616)
			}

IL_0275:
			{
				RuntimeObject* L_64 = V_10;
				NullCheck(L_64);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_64);
				IL2CPP_END_FINALLY(616)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(616)
		{
			IL2CPP_JUMP_TBL(0x27D, IL_027d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_027d:
		{
			goto IL_0282;
		}

IL_0282:
		{
			RuntimeObject* L_65 = V_1;
			NullCheck(L_65);
			bool L_66 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_65);
			if (L_66)
			{
				goto IL_0034;
			}
		}

IL_028d:
		{
			IL2CPP_LEAVE(0x2A7, FINALLY_0292);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0292;
	}

FINALLY_0292:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_67 = V_1;
			V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_67, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_68 = V_11;
			if (L_68)
			{
				goto IL_029f;
			}
		}

IL_029e:
		{
			IL2CPP_END_FINALLY(658)
		}

IL_029f:
		{
			RuntimeObject* L_69 = V_11;
			NullCheck(L_69);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_69);
			IL2CPP_END_FINALLY(658)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(658)
	{
		IL2CPP_JUMP_TBL(0x2A7, IL_02a7)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_02a7:
	{
		XmlElement_t561603118 * L_70 = ___value0;
		NullCheck(L_70);
		bool L_71 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_70, _stringLiteral1891153624);
		if (!L_71)
		{
			goto IL_02d2;
		}
	}
	{
		XmlElement_t561603118 * L_72 = ___value0;
		NullCheck(L_72);
		XmlAttributeCollection_t2316283784 * L_73 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_72);
		NullCheck(L_73);
		XmlAttribute_t1173852259 * L_74 = XmlAttributeCollection_get_ItemOf_m3472332322(L_73, _stringLiteral1891153624, /*hidden argument*/NULL);
		NullCheck(L_74);
		String_t* L_75 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_74);
		EncryptedReference_set_Uri_m3383711198(__this, L_75, /*hidden argument*/NULL);
	}

IL_02d2:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptedType::.ctor()
extern "C"  void EncryptedType__ctor_m3540871624 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedType__ctor_m3540871624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		CipherData_t4021546579 * L_0 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
		CipherData__ctor_m823107412(L_0, /*hidden argument*/NULL);
		__this->set_cipherData_0(L_0);
		EncryptionPropertyCollection_t3294881567 * L_1 = (EncryptionPropertyCollection_t3294881567 *)il2cpp_codegen_object_new(EncryptionPropertyCollection_t3294881567_il2cpp_TypeInfo_var);
		EncryptionPropertyCollection__ctor_m1867345757(L_1, /*hidden argument*/NULL);
		__this->set_encryptionProperties_3(L_1);
		KeyInfo_t3757684699 * L_2 = (KeyInfo_t3757684699 *)il2cpp_codegen_object_new(KeyInfo_t3757684699_il2cpp_TypeInfo_var);
		KeyInfo__ctor_m2843249396(L_2, /*hidden argument*/NULL);
		__this->set_keyInfo_5(L_2);
		return;
	}
}
// System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData()
extern "C"  CipherData_t4021546579 * EncryptedType_get_CipherData_m1104021855 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		CipherData_t4021546579 * L_0 = __this->get_cipherData_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData)
extern "C"  void EncryptedType_set_CipherData_m3100106849 (EncryptedType_t2124600183 * __this, CipherData_t4021546579 * ___value0, const RuntimeMethod* method)
{
	{
		CipherData_t4021546579 * L_0 = ___value0;
		__this->set_cipherData_0(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedType::get_Encoding()
extern "C"  String_t* EncryptedType_get_Encoding_m597359369 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_encoding_1();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_Encoding(System.String)
extern "C"  void EncryptedType_set_Encoding_m3968290843 (EncryptedType_t2124600183 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_encoding_1(L_0);
		return;
	}
}
// System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod()
extern "C"  EncryptionMethod_t2271876579 * EncryptedType_get_EncryptionMethod_m2019898522 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		EncryptionMethod_t2271876579 * L_0 = __this->get_encryptionMethod_2();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod)
extern "C"  void EncryptedType_set_EncryptionMethod_m3415084810 (EncryptedType_t2124600183 * __this, EncryptionMethod_t2271876579 * ___value0, const RuntimeMethod* method)
{
	{
		EncryptionMethod_t2271876579 * L_0 = ___value0;
		__this->set_encryptionMethod_2(L_0);
		return;
	}
}
// System.Security.Cryptography.Xml.EncryptionPropertyCollection System.Security.Cryptography.Xml.EncryptedType::get_EncryptionProperties()
extern "C"  EncryptionPropertyCollection_t3294881567 * EncryptedType_get_EncryptionProperties_m3690031789 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		EncryptionPropertyCollection_t3294881567 * L_0 = __this->get_encryptionProperties_3();
		return L_0;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedType::get_Id()
extern "C"  String_t* EncryptedType_get_Id_m1125502986 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_4();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_Id(System.String)
extern "C"  void EncryptedType_set_Id_m1058133058 (EncryptedType_t2124600183 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_id_4(L_0);
		return;
	}
}
// System.Security.Cryptography.Xml.KeyInfo System.Security.Cryptography.Xml.EncryptedType::get_KeyInfo()
extern "C"  KeyInfo_t3757684699 * EncryptedType_get_KeyInfo_m2827788688 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		KeyInfo_t3757684699 * L_0 = __this->get_keyInfo_5();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_KeyInfo(System.Security.Cryptography.Xml.KeyInfo)
extern "C"  void EncryptedType_set_KeyInfo_m2286232490 (EncryptedType_t2124600183 * __this, KeyInfo_t3757684699 * ___value0, const RuntimeMethod* method)
{
	{
		KeyInfo_t3757684699 * L_0 = ___value0;
		__this->set_keyInfo_5(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedType::get_MimeType()
extern "C"  String_t* EncryptedType_get_MimeType_m2190558149 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_mimeType_6();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_MimeType(System.String)
extern "C"  void EncryptedType_set_MimeType_m2234713958 (EncryptedType_t2124600183 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_mimeType_6(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedType::get_Type()
extern "C"  String_t* EncryptedType_get_Type_m164705379 (EncryptedType_t2124600183 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_type_7();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String)
extern "C"  void EncryptedType_set_Type_m3175816008 (EncryptedType_t2124600183 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_type_7(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptedXml::.ctor()
extern "C"  void EncryptedXml__ctor_m989113906 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml__ctor_m989113906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_encoding_0(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		__this->set_keyNameMapping_1(L_1);
		__this->set_mode_2(1);
		__this->set_padding_3(5);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedXml::.ctor(System.Xml.XmlDocument)
extern "C"  void EncryptedXml__ctor_m4190937112 (EncryptedXml_t2455217639 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml__ctor_m4190937112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1523322056_il2cpp_TypeInfo_var);
		Encoding_t1523322056 * L_0 = Encoding_get_UTF8_m1008486739(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_encoding_0(L_0);
		Hashtable_t1853889766 * L_1 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_1, /*hidden argument*/NULL);
		__this->set_keyNameMapping_1(L_1);
		__this->set_mode_2(1);
		__this->set_padding_3(5);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlDocument_t2837193595 * L_2 = ___document0;
		__this->set_document_4(L_2);
		return;
	}
}
// System.Text.Encoding System.Security.Cryptography.Xml.EncryptedXml::get_Encoding()
extern "C"  Encoding_t1523322056 * EncryptedXml_get_Encoding_m741438105 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method)
{
	{
		Encoding_t1523322056 * L_0 = __this->get_encoding_0();
		return L_0;
	}
}
// System.Security.Cryptography.PaddingMode System.Security.Cryptography.Xml.EncryptedXml::get_Padding()
extern "C"  int32_t EncryptedXml_get_Padding_m4270855717 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_padding_3();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedXml::AddKeyNameMapping(System.String,System.Object)
extern "C"  void EncryptedXml_AddKeyNameMapping_m1683352572 (EncryptedXml_t2455217639 * __this, String_t* ___keyName0, RuntimeObject * ___keyObject1, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = __this->get_keyNameMapping_1();
		String_t* L_1 = ___keyName0;
		RuntimeObject * L_2 = ___keyObject1;
		NullCheck(L_0);
		VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(31 /* System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptData(System.Security.Cryptography.Xml.EncryptedData,System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptData_m3481279421 (EncryptedXml_t2455217639 * __this, EncryptedData_t3129875747 * ___encryptedData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_DecryptData_m3481279421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EncryptedData_t3129875747 * L_0 = ___encryptedData0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3846635461, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_DecryptData_m3481279421_RuntimeMethod_var);
	}

IL_0011:
	{
		SymmetricAlgorithm_t4254223087 * L_2 = ___symAlg1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1509742296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, EncryptedXml_DecryptData_m3481279421_RuntimeMethod_var);
	}

IL_0022:
	{
		SymmetricAlgorithm_t4254223087 * L_4 = ___symAlg1;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_4);
		V_0 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			SymmetricAlgorithm_t4254223087 * L_6 = ___symAlg1;
			int32_t L_7 = EncryptedXml_get_Padding_m4270855717(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_6, L_7);
			EncryptedData_t3129875747 * L_8 = ___encryptedData0;
			NullCheck(L_8);
			CipherData_t4021546579 * L_9 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, L_8);
			NullCheck(L_9);
			ByteU5BU5D_t4116647657* L_10 = CipherData_get_CipherValue_m4127530842(L_9, /*hidden argument*/NULL);
			SymmetricAlgorithm_t4254223087 * L_11 = ___symAlg1;
			NullCheck(L_11);
			RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_11);
			SymmetricAlgorithm_t4254223087 * L_13 = ___symAlg1;
			NullCheck(L_13);
			int32_t L_14 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_13);
			ByteU5BU5D_t4116647657* L_15 = EncryptedXml_Transform_m3824077793(__this, L_10, L_12, ((int32_t)((int32_t)L_14/(int32_t)8)), (bool)1, /*hidden argument*/NULL);
			V_1 = L_15;
			IL2CPP_LEAVE(0x68, FINALLY_0060);
		}

IL_005b:
		{
			; // IL_005b: leave IL_0068
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		SymmetricAlgorithm_t4254223087 * L_16 = ___symAlg1;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_16, L_17);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		ByteU5BU5D_t4116647657* L_18 = V_1;
		return L_18;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedXml::DecryptDocument()
extern "C"  void EncryptedXml_DecryptDocument_m1270994510 (EncryptedXml_t2455217639 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_DecryptDocument_m1270994510_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeList_t2551693786 * V_0 = NULL;
	XmlNode_t3767805227 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	EncryptedData_t3129875747 * V_3 = NULL;
	SymmetricAlgorithm_t4254223087 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = __this->get_document_4();
		NullCheck(L_0);
		XmlNodeList_t2551693786 * L_1 = VirtFuncInvoker2< XmlNodeList_t2551693786 *, String_t*, String_t* >::Invoke(60 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String,System.String) */, L_0, _stringLiteral3847996581, _stringLiteral1984398691);
		V_0 = L_1;
		XmlNodeList_t2551693786 * L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_2);
		V_2 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0069;
		}

IL_0022:
		{
			RuntimeObject* L_4 = V_2;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_1 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_5, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			EncryptedData_t3129875747 * L_6 = (EncryptedData_t3129875747 *)il2cpp_codegen_object_new(EncryptedData_t3129875747_il2cpp_TypeInfo_var);
			EncryptedData__ctor_m2190032190(L_6, /*hidden argument*/NULL);
			V_3 = L_6;
			EncryptedData_t3129875747 * L_7 = V_3;
			XmlNode_t3767805227 * L_8 = V_1;
			NullCheck(L_7);
			EncryptedData_LoadXml_m3733935022(L_7, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_8, XmlElement_t561603118_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			EncryptedData_t3129875747 * L_9 = V_3;
			EncryptedData_t3129875747 * L_10 = V_3;
			NullCheck(L_10);
			EncryptionMethod_t2271876579 * L_11 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, L_10);
			NullCheck(L_11);
			String_t* L_12 = EncryptionMethod_get_KeyAlgorithm_m3594308328(L_11, /*hidden argument*/NULL);
			SymmetricAlgorithm_t4254223087 * L_13 = VirtFuncInvoker2< SymmetricAlgorithm_t4254223087 *, EncryptedData_t3129875747 *, String_t* >::Invoke(6 /* System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionKey(System.Security.Cryptography.Xml.EncryptedData,System.String) */, __this, L_9, L_12);
			V_4 = L_13;
			XmlNode_t3767805227 * L_14 = V_1;
			EncryptedData_t3129875747 * L_15 = V_3;
			SymmetricAlgorithm_t4254223087 * L_16 = V_4;
			ByteU5BU5D_t4116647657* L_17 = EncryptedXml_DecryptData_m3481279421(__this, L_15, L_16, /*hidden argument*/NULL);
			EncryptedXml_ReplaceData_m2573463983(__this, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_14, XmlElement_t561603118_il2cpp_TypeInfo_var)), L_17, /*hidden argument*/NULL);
		}

IL_0069:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0022;
			}
		}

IL_0074:
		{
			IL2CPP_LEAVE(0x8E, FINALLY_0079);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0079;
	}

FINALLY_0079:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_2;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_5;
			if (L_21)
			{
				goto IL_0086;
			}
		}

IL_0085:
		{
			IL2CPP_END_FINALLY(121)
		}

IL_0086:
		{
			RuntimeObject* L_22 = V_5;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(121)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(121)
	{
		IL2CPP_JUMP_TBL(0x8E, IL_008e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_008e:
	{
		return;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptEncryptedKey(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptEncryptedKey_m884005057 (EncryptedXml_t2455217639 * __this, EncryptedKey_t805343673 * ___encryptedKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_DecryptEncryptedKey_m884005057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	KeyInfoClause_t4210275625 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	Dictionary_2_t2736202052 * V_5 = NULL;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EncryptedKey_t805343673 * L_0 = ___encryptedKey0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3321043079, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_DecryptEncryptedKey_m884005057_RuntimeMethod_var);
	}

IL_0011:
	{
		V_0 = NULL;
		EncryptedKey_t805343673 * L_2 = ___encryptedKey0;
		NullCheck(L_2);
		KeyInfo_t3757684699 * L_3 = EncryptedType_get_KeyInfo_m2827788688(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = KeyInfo_GetEnumerator_m3346430934(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0024:
		{
			RuntimeObject* L_5 = V_2;
			NullCheck(L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
			V_1 = ((KeyInfoClause_t4210275625 *)CastclassClass((RuntimeObject*)L_6, KeyInfoClause_t4210275625_il2cpp_TypeInfo_var));
			KeyInfoClause_t4210275625 * L_7 = V_1;
			if (!((KeyInfoName_t2325312217 *)IsInstClass((RuntimeObject*)L_7, KeyInfoName_t2325312217_il2cpp_TypeInfo_var)))
			{
				goto IL_0057;
			}
		}

IL_003b:
		{
			Hashtable_t1853889766 * L_8 = __this->get_keyNameMapping_1();
			KeyInfoClause_t4210275625 * L_9 = V_1;
			NullCheck(((KeyInfoName_t2325312217 *)CastclassClass((RuntimeObject*)L_9, KeyInfoName_t2325312217_il2cpp_TypeInfo_var)));
			String_t* L_10 = KeyInfoName_get_Value_m1421941987(((KeyInfoName_t2325312217 *)CastclassClass((RuntimeObject*)L_9, KeyInfoName_t2325312217_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			NullCheck(L_8);
			RuntimeObject * L_11 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_8, L_10);
			V_0 = L_11;
			goto IL_0062;
		}

IL_0057:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0024;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x79, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_2;
			V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_14, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_15 = V_3;
			if (L_15)
			{
				goto IL_0072;
			}
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(103)
		}

IL_0072:
		{
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_16);
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0079:
	{
		EncryptedKey_t805343673 * L_17 = ___encryptedKey0;
		NullCheck(L_17);
		EncryptionMethod_t2271876579 * L_18 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, L_17);
		NullCheck(L_18);
		String_t* L_19 = EncryptionMethod_get_KeyAlgorithm_m3594308328(L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		String_t* L_20 = V_4;
		if (!L_20)
		{
			goto IL_0117;
		}
	}
	{
		Dictionary_2_t2736202052 * L_21 = ((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map8_5();
		if (L_21)
		{
			goto IL_00c0;
		}
	}
	{
		Dictionary_2_t2736202052 * L_22 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_22, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_5 = L_22;
		Dictionary_2_t2736202052 * L_23 = V_5;
		NullCheck(L_23);
		Dictionary_2_Add_m282647386(L_23, _stringLiteral2223091237, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_24 = V_5;
		NullCheck(L_24);
		Dictionary_2_Add_m282647386(L_24, _stringLiteral4045009689, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_25 = V_5;
		((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map8_5(L_25);
	}

IL_00c0:
	{
		Dictionary_2_t2736202052 * L_26 = ((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map8_5();
		String_t* L_27 = V_4;
		NullCheck(L_26);
		bool L_28 = Dictionary_2_TryGetValue_m1013208020(L_26, L_27, (int32_t*)(&V_6), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_28)
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_29 = V_6;
		if (!L_29)
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_30 = V_6;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_00ff;
		}
	}
	{
		goto IL_0117;
	}

IL_00e7:
	{
		EncryptedKey_t805343673 * L_31 = ___encryptedKey0;
		NullCheck(L_31);
		CipherData_t4021546579 * L_32 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, L_31);
		NullCheck(L_32);
		ByteU5BU5D_t4116647657* L_33 = CipherData_get_CipherValue_m4127530842(L_32, /*hidden argument*/NULL);
		RuntimeObject * L_34 = V_0;
		ByteU5BU5D_t4116647657* L_35 = EncryptedXml_DecryptKey_m262904073(NULL /*static, unused*/, L_33, ((RSA_t2385438082 *)CastclassClass((RuntimeObject*)L_34, RSA_t2385438082_il2cpp_TypeInfo_var)), (bool)0, /*hidden argument*/NULL);
		return L_35;
	}

IL_00ff:
	{
		EncryptedKey_t805343673 * L_36 = ___encryptedKey0;
		NullCheck(L_36);
		CipherData_t4021546579 * L_37 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, L_36);
		NullCheck(L_37);
		ByteU5BU5D_t4116647657* L_38 = CipherData_get_CipherValue_m4127530842(L_37, /*hidden argument*/NULL);
		RuntimeObject * L_39 = V_0;
		ByteU5BU5D_t4116647657* L_40 = EncryptedXml_DecryptKey_m262904073(NULL /*static, unused*/, L_38, ((RSA_t2385438082 *)CastclassClass((RuntimeObject*)L_39, RSA_t2385438082_il2cpp_TypeInfo_var)), (bool)1, /*hidden argument*/NULL);
		return L_40;
	}

IL_0117:
	{
		EncryptedKey_t805343673 * L_41 = ___encryptedKey0;
		NullCheck(L_41);
		CipherData_t4021546579 * L_42 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, L_41);
		NullCheck(L_42);
		ByteU5BU5D_t4116647657* L_43 = CipherData_get_CipherValue_m4127530842(L_42, /*hidden argument*/NULL);
		RuntimeObject * L_44 = V_0;
		ByteU5BU5D_t4116647657* L_45 = EncryptedXml_DecryptKey_m2820904737(NULL /*static, unused*/, L_43, ((SymmetricAlgorithm_t4254223087 *)CastclassClass((RuntimeObject*)L_44, SymmetricAlgorithm_t4254223087_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_45;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptKey_m2820904737 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_DecryptKey_m2820904737_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___keyData0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3576982476, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_DecryptKey_m2820904737_RuntimeMethod_var);
	}

IL_0011:
	{
		SymmetricAlgorithm_t4254223087 * L_2 = ___symAlg1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1509742296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, EncryptedXml_DecryptKey_m2820904737_RuntimeMethod_var);
	}

IL_0022:
	{
		SymmetricAlgorithm_t4254223087 * L_4 = ___symAlg1;
		if (!((TripleDES_t92303514 *)IsInstClass((RuntimeObject*)L_4, TripleDES_t92303514_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_5 = ___symAlg1;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_5);
		ByteU5BU5D_t4116647657* L_7 = ___keyData0;
		ByteU5BU5D_t4116647657* L_8 = SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m3979056352(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_003a:
	{
		SymmetricAlgorithm_t4254223087 * L_9 = ___symAlg1;
		if (!((Rijndael_t2986313634 *)IsInstClass((RuntimeObject*)L_9, Rijndael_t2986313634_il2cpp_TypeInfo_var)))
		{
			goto IL_0052;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_10 = ___symAlg1;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_11 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_10);
		ByteU5BU5D_t4116647657* L_12 = ___keyData0;
		ByteU5BU5D_t4116647657* L_13 = SymmetricKeyWrap_AESKeyWrapDecrypt_m1188890246(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0052:
	{
		CryptographicException_t248831461 * L_14 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_14, _stringLiteral1900717853, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, EncryptedXml_DecryptKey_m2820904737_RuntimeMethod_var);
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_DecryptKey_m262904073 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, RSA_t2385438082 * ___rsa1, bool ___fOAEP2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_DecryptKey_m262904073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AsymmetricKeyExchangeDeformatter_t3370779160 * V_0 = NULL;
	{
		V_0 = (AsymmetricKeyExchangeDeformatter_t3370779160 *)NULL;
		bool L_0 = ___fOAEP2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RSA_t2385438082 * L_1 = ___rsa1;
		RSAOAEPKeyExchangeDeformatter_t3344463048 * L_2 = (RSAOAEPKeyExchangeDeformatter_t3344463048 *)il2cpp_codegen_object_new(RSAOAEPKeyExchangeDeformatter_t3344463048_il2cpp_TypeInfo_var);
		RSAOAEPKeyExchangeDeformatter__ctor_m783067294(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_0014:
	{
		RSA_t2385438082 * L_3 = ___rsa1;
		RSAPKCS1KeyExchangeDeformatter_t2578812791 * L_4 = (RSAPKCS1KeyExchangeDeformatter_t2578812791 *)il2cpp_codegen_object_new(RSAPKCS1KeyExchangeDeformatter_t2578812791_il2cpp_TypeInfo_var);
		RSAPKCS1KeyExchangeDeformatter__ctor_m262111882(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		AsymmetricKeyExchangeDeformatter_t3370779160 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ___keyData0;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(6 /* System.Byte[] System.Security.Cryptography.AsymmetricKeyExchangeDeformatter::DecryptKeyExchange(System.Byte[]) */, L_5, L_6);
		return L_7;
	}
}
// System.Security.Cryptography.Xml.EncryptedData System.Security.Cryptography.Xml.EncryptedXml::Encrypt(System.Xml.XmlElement,System.String)
extern "C"  EncryptedData_t3129875747 * EncryptedXml_Encrypt_m3903036646 (EncryptedXml_t2455217639 * __this, XmlElement_t561603118 * ___inputElement0, String_t* ___keyName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_Encrypt_m3903036646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	EncryptedData_t3129875747 * V_1 = NULL;
	EncryptedKey_t805343673 * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_0;
		SymmetricAlgorithm_t4254223087 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_1, ((int32_t)256));
		SymmetricAlgorithm_t4254223087 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(27 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateKey() */, L_2);
		SymmetricAlgorithm_t4254223087 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_3);
		EncryptedData_t3129875747 * L_4 = (EncryptedData_t3129875747 *)il2cpp_codegen_object_new(EncryptedData_t3129875747_il2cpp_TypeInfo_var);
		EncryptedData__ctor_m2190032190(L_4, /*hidden argument*/NULL);
		V_1 = L_4;
		EncryptedKey_t805343673 * L_5 = (EncryptedKey_t805343673 *)il2cpp_codegen_object_new(EncryptedKey_t805343673_il2cpp_TypeInfo_var);
		EncryptedKey__ctor_m739319042(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		Hashtable_t1853889766 * L_6 = __this->get_keyNameMapping_1();
		String_t* L_7 = ___keyName1;
		NullCheck(L_6);
		RuntimeObject * L_8 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(30 /* System.Object System.Collections.Hashtable::get_Item(System.Object) */, L_6, L_7);
		V_3 = L_8;
		EncryptedKey_t805343673 * L_9 = V_2;
		RuntimeObject * L_10 = V_3;
		String_t* L_11 = EncryptedXml_GetKeyWrapAlgorithmUri_m241829005(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		EncryptionMethod_t2271876579 * L_12 = (EncryptionMethod_t2271876579 *)il2cpp_codegen_object_new(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var);
		EncryptionMethod__ctor_m2359305186(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, L_9, L_12);
		RuntimeObject * L_13 = V_3;
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_13, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0079;
		}
	}
	{
		EncryptedKey_t805343673 * L_14 = V_2;
		SymmetricAlgorithm_t4254223087 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_15);
		RuntimeObject * L_17 = V_3;
		ByteU5BU5D_t4116647657* L_18 = EncryptedXml_EncryptKey_m3578715373(NULL /*static, unused*/, L_16, ((RSA_t2385438082 *)CastclassClass((RuntimeObject*)L_17, RSA_t2385438082_il2cpp_TypeInfo_var)), (bool)0, /*hidden argument*/NULL);
		CipherData_t4021546579 * L_19 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
		CipherData__ctor_m2467805249(L_19, L_18, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< CipherData_t4021546579 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData) */, L_14, L_19);
		goto IL_0095;
	}

IL_0079:
	{
		EncryptedKey_t805343673 * L_20 = V_2;
		SymmetricAlgorithm_t4254223087 * L_21 = V_0;
		NullCheck(L_21);
		ByteU5BU5D_t4116647657* L_22 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_21);
		RuntimeObject * L_23 = V_3;
		ByteU5BU5D_t4116647657* L_24 = EncryptedXml_EncryptKey_m1663508456(NULL /*static, unused*/, L_22, ((SymmetricAlgorithm_t4254223087 *)CastclassClass((RuntimeObject*)L_23, SymmetricAlgorithm_t4254223087_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		CipherData_t4021546579 * L_25 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
		CipherData__ctor_m2467805249(L_25, L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< CipherData_t4021546579 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData) */, L_20, L_25);
	}

IL_0095:
	{
		EncryptedKey_t805343673 * L_26 = V_2;
		KeyInfo_t3757684699 * L_27 = (KeyInfo_t3757684699 *)il2cpp_codegen_object_new(KeyInfo_t3757684699_il2cpp_TypeInfo_var);
		KeyInfo__ctor_m2843249396(L_27, /*hidden argument*/NULL);
		NullCheck(L_26);
		EncryptedType_set_KeyInfo_m2286232490(L_26, L_27, /*hidden argument*/NULL);
		EncryptedKey_t805343673 * L_28 = V_2;
		NullCheck(L_28);
		KeyInfo_t3757684699 * L_29 = EncryptedType_get_KeyInfo_m2827788688(L_28, /*hidden argument*/NULL);
		String_t* L_30 = ___keyName1;
		KeyInfoName_t2325312217 * L_31 = (KeyInfoName_t2325312217 *)il2cpp_codegen_object_new(KeyInfoName_t2325312217_il2cpp_TypeInfo_var);
		KeyInfoName__ctor_m2566502717(L_31, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		KeyInfo_AddClause_m3169793473(L_29, L_31, /*hidden argument*/NULL);
		EncryptedData_t3129875747 * L_32 = V_1;
		NullCheck(L_32);
		VirtActionInvoker1< String_t* >::Invoke(16 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_Type(System.String) */, L_32, _stringLiteral1667627287);
		EncryptedData_t3129875747 * L_33 = V_1;
		SymmetricAlgorithm_t4254223087 * L_34 = V_0;
		String_t* L_35 = EncryptedXml_GetAlgorithmUri_m206671318(NULL /*static, unused*/, L_34, /*hidden argument*/NULL);
		EncryptionMethod_t2271876579 * L_36 = (EncryptionMethod_t2271876579 *)il2cpp_codegen_object_new(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var);
		EncryptionMethod__ctor_m2359305186(L_36, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		VirtActionInvoker1< EncryptionMethod_t2271876579 * >::Invoke(9 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_EncryptionMethod(System.Security.Cryptography.Xml.EncryptionMethod) */, L_33, L_36);
		EncryptedData_t3129875747 * L_37 = V_1;
		KeyInfo_t3757684699 * L_38 = (KeyInfo_t3757684699 *)il2cpp_codegen_object_new(KeyInfo_t3757684699_il2cpp_TypeInfo_var);
		KeyInfo__ctor_m2843249396(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		EncryptedType_set_KeyInfo_m2286232490(L_37, L_38, /*hidden argument*/NULL);
		EncryptedData_t3129875747 * L_39 = V_1;
		NullCheck(L_39);
		KeyInfo_t3757684699 * L_40 = EncryptedType_get_KeyInfo_m2827788688(L_39, /*hidden argument*/NULL);
		EncryptedKey_t805343673 * L_41 = V_2;
		KeyInfoEncryptedKey_t109830476 * L_42 = (KeyInfoEncryptedKey_t109830476 *)il2cpp_codegen_object_new(KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var);
		KeyInfoEncryptedKey__ctor_m3679225613(L_42, L_41, /*hidden argument*/NULL);
		NullCheck(L_40);
		KeyInfo_AddClause_m3169793473(L_40, L_42, /*hidden argument*/NULL);
		EncryptedData_t3129875747 * L_43 = V_1;
		XmlElement_t561603118 * L_44 = ___inputElement0;
		SymmetricAlgorithm_t4254223087 * L_45 = V_0;
		ByteU5BU5D_t4116647657* L_46 = EncryptedXml_EncryptData_m4171828045(__this, L_44, L_45, (bool)0, /*hidden argument*/NULL);
		CipherData_t4021546579 * L_47 = (CipherData_t4021546579 *)il2cpp_codegen_object_new(CipherData_t4021546579_il2cpp_TypeInfo_var);
		CipherData__ctor_m2467805249(L_47, L_46, /*hidden argument*/NULL);
		NullCheck(L_43);
		VirtActionInvoker1< CipherData_t4021546579 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.EncryptedType::set_CipherData(System.Security.Cryptography.Xml.CipherData) */, L_43, L_47);
		EncryptedData_t3129875747 * L_48 = V_1;
		return L_48;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptData_m2079615939 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___plainText0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_EncryptData_m2079615939_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		ByteU5BU5D_t4116647657* L_0 = ___plainText0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2627767329, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_EncryptData_m2079615939_RuntimeMethod_var);
	}

IL_0011:
	{
		SymmetricAlgorithm_t4254223087 * L_2 = ___symAlg1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1509742296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, EncryptedXml_EncryptData_m2079615939_RuntimeMethod_var);
	}

IL_0022:
	{
		SymmetricAlgorithm_t4254223087 * L_4 = ___symAlg1;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::get_Padding() */, L_4);
		V_0 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			SymmetricAlgorithm_t4254223087 * L_6 = ___symAlg1;
			int32_t L_7 = EncryptedXml_get_Padding_m4270855717(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_6, L_7);
			ByteU5BU5D_t4116647657* L_8 = ___plainText0;
			SymmetricAlgorithm_t4254223087 * L_9 = ___symAlg1;
			ByteU5BU5D_t4116647657* L_10 = EncryptedXml_EncryptDataCore_m3696169156(__this, L_8, L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			IL2CPP_LEAVE(0x50, FINALLY_0048);
		}

IL_0043:
		{
			; // IL_0043: leave IL_0050
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0048;
	}

FINALLY_0048:
	{ // begin finally (depth: 1)
		SymmetricAlgorithm_t4254223087 * L_11 = ___symAlg1;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_11, L_12);
		IL2CPP_END_FINALLY(72)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(72)
	{
		IL2CPP_JUMP_TBL(0x50, IL_0050)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0050:
	{
		ByteU5BU5D_t4116647657* L_13 = V_1;
		return L_13;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptDataCore(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptDataCore_m3696169156 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___plainText0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_EncryptDataCore_m3696169156_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	BinaryWriter_t3992595042 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t94973147 * L_1 = V_0;
		BinaryWriter_t3992595042 * L_2 = (BinaryWriter_t3992595042 *)il2cpp_codegen_object_new(BinaryWriter_t3992595042_il2cpp_TypeInfo_var);
		BinaryWriter__ctor_m1874693998(L_2, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		BinaryWriter_t3992595042 * L_3 = V_1;
		SymmetricAlgorithm_t4254223087 * L_4 = ___symAlg1;
		NullCheck(L_4);
		ByteU5BU5D_t4116647657* L_5 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_4);
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_3, L_5);
		BinaryWriter_t3992595042 * L_6 = V_1;
		ByteU5BU5D_t4116647657* L_7 = ___plainText0;
		SymmetricAlgorithm_t4254223087 * L_8 = ___symAlg1;
		NullCheck(L_8);
		RuntimeObject* L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_8);
		ByteU5BU5D_t4116647657* L_10 = EncryptedXml_Transform_m946449195(__this, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_6, L_10);
		BinaryWriter_t3992595042 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.BinaryWriter::Flush() */, L_11);
		MemoryStream_t94973147 * L_12 = V_0;
		NullCheck(L_12);
		ByteU5BU5D_t4116647657* L_13 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_12);
		V_2 = L_13;
		BinaryWriter_t3992595042 * L_14 = V_1;
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void System.IO.BinaryWriter::Close() */, L_14);
		MemoryStream_t94973147 * L_15 = V_0;
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_15);
		ByteU5BU5D_t4116647657* L_16 = V_2;
		return L_16;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptData(System.Xml.XmlElement,System.Security.Cryptography.SymmetricAlgorithm,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptData_m4171828045 (EncryptedXml_t2455217639 * __this, XmlElement_t561603118 * ___inputElement0, SymmetricAlgorithm_t4254223087 * ___symAlg1, bool ___content2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_EncryptData_m4171828045_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___inputElement0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3873985397, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_EncryptData_m4171828045_RuntimeMethod_var);
	}

IL_0011:
	{
		bool L_2 = ___content2;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		Encoding_t1523322056 * L_3 = EncryptedXml_get_Encoding_m741438105(__this, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_4 = ___inputElement0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_4);
		NullCheck(L_3);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_3, L_5);
		SymmetricAlgorithm_t4254223087 * L_7 = ___symAlg1;
		ByteU5BU5D_t4116647657* L_8 = EncryptedXml_EncryptData_m2079615939(__this, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0030:
	{
		Encoding_t1523322056 * L_9 = EncryptedXml_get_Encoding_m741438105(__this, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_10 = ___inputElement0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Xml.XmlNode::get_OuterXml() */, L_10);
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_12 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_9, L_11);
		SymmetricAlgorithm_t4254223087 * L_13 = ___symAlg1;
		ByteU5BU5D_t4116647657* L_14 = EncryptedXml_EncryptData_m2079615939(__this, L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptKey_m1663508456 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, SymmetricAlgorithm_t4254223087 * ___symAlg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_EncryptKey_m1663508456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_t4116647657* L_0 = ___keyData0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3576982476, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_EncryptKey_m1663508456_RuntimeMethod_var);
	}

IL_0011:
	{
		SymmetricAlgorithm_t4254223087 * L_2 = ___symAlg1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral1509742296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, EncryptedXml_EncryptKey_m1663508456_RuntimeMethod_var);
	}

IL_0022:
	{
		SymmetricAlgorithm_t4254223087 * L_4 = ___symAlg1;
		if (!((TripleDES_t92303514 *)IsInstClass((RuntimeObject*)L_4, TripleDES_t92303514_il2cpp_TypeInfo_var)))
		{
			goto IL_003a;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_5 = ___symAlg1;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_5);
		ByteU5BU5D_t4116647657* L_7 = ___keyData0;
		ByteU5BU5D_t4116647657* L_8 = SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m1613069101(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_003a:
	{
		SymmetricAlgorithm_t4254223087 * L_9 = ___symAlg1;
		if (!((Rijndael_t2986313634 *)IsInstClass((RuntimeObject*)L_9, Rijndael_t2986313634_il2cpp_TypeInfo_var)))
		{
			goto IL_0052;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_10 = ___symAlg1;
		NullCheck(L_10);
		ByteU5BU5D_t4116647657* L_11 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(12 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_Key() */, L_10);
		ByteU5BU5D_t4116647657* L_12 = ___keyData0;
		ByteU5BU5D_t4116647657* L_13 = SymmetricKeyWrap_AESKeyWrapEncrypt_m3291131172(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_0052:
	{
		CryptographicException_t248831461 * L_14 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_14, _stringLiteral1900717853, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, NULL, EncryptedXml_EncryptKey_m1663508456_RuntimeMethod_var);
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::EncryptKey(System.Byte[],System.Security.Cryptography.RSA,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_EncryptKey_m3578715373 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___keyData0, RSA_t2385438082 * ___rsa1, bool ___fOAEP2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_EncryptKey_m3578715373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AsymmetricKeyExchangeFormatter_t937192061 * V_0 = NULL;
	{
		V_0 = (AsymmetricKeyExchangeFormatter_t937192061 *)NULL;
		bool L_0 = ___fOAEP2;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		RSA_t2385438082 * L_1 = ___rsa1;
		RSAOAEPKeyExchangeFormatter_t2041696538 * L_2 = (RSAOAEPKeyExchangeFormatter_t2041696538 *)il2cpp_codegen_object_new(RSAOAEPKeyExchangeFormatter_t2041696538_il2cpp_TypeInfo_var);
		RSAOAEPKeyExchangeFormatter__ctor_m921340853(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_0014:
	{
		RSA_t2385438082 * L_3 = ___rsa1;
		RSAPKCS1KeyExchangeFormatter_t2761096101 * L_4 = (RSAPKCS1KeyExchangeFormatter_t2761096101 *)il2cpp_codegen_object_new(RSAPKCS1KeyExchangeFormatter_t2761096101_il2cpp_TypeInfo_var);
		RSAPKCS1KeyExchangeFormatter__ctor_m1170240343(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001b:
	{
		AsymmetricKeyExchangeFormatter_t937192061 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ___keyData0;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_7 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(5 /* System.Byte[] System.Security.Cryptography.AsymmetricKeyExchangeFormatter::CreateKeyExchange(System.Byte[]) */, L_5, L_6);
		return L_7;
	}
}
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithm(System.String)
extern "C"  SymmetricAlgorithm_t4254223087 * EncryptedXml_GetAlgorithm_m2452441519 (RuntimeObject * __this /* static, unused */, String_t* ___symAlgUri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_GetAlgorithm_m2452441519_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	String_t* V_1 = NULL;
	Dictionary_2_t2736202052 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		V_0 = (SymmetricAlgorithm_t4254223087 *)NULL;
		String_t* L_0 = ___symAlgUri0;
		V_1 = L_0;
		String_t* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0130;
		}
	}
	{
		Dictionary_2_t2736202052 * L_2 = ((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map9_6();
		if (L_2)
		{
			goto IL_008e;
		}
	}
	{
		Dictionary_2_t2736202052 * L_3 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2392909825(L_3, ((int32_t)9), /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
		V_2 = L_3;
		Dictionary_2_t2736202052 * L_4 = V_2;
		NullCheck(L_4);
		Dictionary_2_Add_m282647386(L_4, _stringLiteral1487116116, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_5 = V_2;
		NullCheck(L_5);
		Dictionary_2_Add_m282647386(L_5, _stringLiteral2952230759, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_6 = V_2;
		NullCheck(L_6);
		Dictionary_2_Add_m282647386(L_6, _stringLiteral3452265014, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_7 = V_2;
		NullCheck(L_7);
		Dictionary_2_Add_m282647386(L_7, _stringLiteral2951575392, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_8 = V_2;
		NullCheck(L_8);
		Dictionary_2_Add_m282647386(L_8, _stringLiteral4012458413, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_9 = V_2;
		NullCheck(L_9);
		Dictionary_2_Add_m282647386(L_9, _stringLiteral612661092, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_10 = V_2;
		NullCheck(L_10);
		Dictionary_2_Add_m282647386(L_10, _stringLiteral570134936, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_11 = V_2;
		NullCheck(L_11);
		Dictionary_2_Add_m282647386(L_11, _stringLiteral3804108681, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_12 = V_2;
		NullCheck(L_12);
		Dictionary_2_Add_m282647386(L_12, _stringLiteral3173071871, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
		Dictionary_2_t2736202052 * L_13 = V_2;
		((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24map9_6(L_13);
	}

IL_008e:
	{
		Dictionary_2_t2736202052 * L_14 = ((EncryptedXml_t2455217639_StaticFields*)il2cpp_codegen_static_fields_for(EncryptedXml_t2455217639_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24map9_6();
		String_t* L_15 = V_1;
		NullCheck(L_14);
		bool L_16 = Dictionary_2_TryGetValue_m1013208020(L_14, L_15, (int32_t*)(&V_3), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_0130;
		}
	}
	{
		int32_t L_17 = V_3;
		switch (L_17)
		{
			case 0:
			{
				goto IL_00bf;
			}
			case 1:
			{
				goto IL_00da;
			}
			case 2:
			{
				goto IL_00f5;
			}
			case 3:
			{
				goto IL_0110;
			}
			case 4:
			{
				goto IL_0120;
			}
		}
	}
	{
		goto IL_0130;
	}

IL_00bf:
	{
		SymmetricAlgorithm_t4254223087 * L_18 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_18;
		SymmetricAlgorithm_t4254223087 * L_19 = V_0;
		NullCheck(L_19);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_19, ((int32_t)128));
		goto IL_013b;
	}

IL_00da:
	{
		SymmetricAlgorithm_t4254223087 * L_20 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_20;
		SymmetricAlgorithm_t4254223087 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_21, ((int32_t)192));
		goto IL_013b;
	}

IL_00f5:
	{
		SymmetricAlgorithm_t4254223087 * L_22 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_22;
		SymmetricAlgorithm_t4254223087 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker1< int32_t >::Invoke(15 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_KeySize(System.Int32) */, L_23, ((int32_t)256));
		goto IL_013b;
	}

IL_0110:
	{
		SymmetricAlgorithm_t4254223087 * L_24 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2696477479, /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_013b;
	}

IL_0120:
	{
		SymmetricAlgorithm_t4254223087 * L_25 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral3569897280, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_013b;
	}

IL_0130:
	{
		CryptographicException_t248831461 * L_26 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_26, _stringLiteral3215099942, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, NULL, EncryptedXml_GetAlgorithm_m2452441519_RuntimeMethod_var);
	}

IL_013b:
	{
		SymmetricAlgorithm_t4254223087 * L_27 = V_0;
		return L_27;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetAlgorithmUri(System.Security.Cryptography.SymmetricAlgorithm)
extern "C"  String_t* EncryptedXml_GetAlgorithmUri_m206671318 (RuntimeObject * __this /* static, unused */, SymmetricAlgorithm_t4254223087 * ___symAlg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_GetAlgorithmUri_m206671318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = ___symAlg0;
		if (!((Rijndael_t2986313634 *)IsInstClass((RuntimeObject*)L_0, Rijndael_t2986313634_il2cpp_TypeInfo_var)))
		{
			goto IL_004f;
		}
	}
	{
		SymmetricAlgorithm_t4254223087 * L_1 = ___symAlg0;
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize() */, L_1);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)128))))
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)192))))
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)256))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_004a;
	}

IL_0038:
	{
		return _stringLiteral1487116116;
	}

IL_003e:
	{
		return _stringLiteral3452265014;
	}

IL_0044:
	{
		return _stringLiteral4012458413;
	}

IL_004a:
	{
		goto IL_0071;
	}

IL_004f:
	{
		SymmetricAlgorithm_t4254223087 * L_6 = ___symAlg0;
		if (!((DES_t821106792 *)IsInstClass((RuntimeObject*)L_6, DES_t821106792_il2cpp_TypeInfo_var)))
		{
			goto IL_0060;
		}
	}
	{
		return _stringLiteral570134936;
	}

IL_0060:
	{
		SymmetricAlgorithm_t4254223087 * L_7 = ___symAlg0;
		if (!((TripleDES_t92303514 *)IsInstClass((RuntimeObject*)L_7, TripleDES_t92303514_il2cpp_TypeInfo_var)))
		{
			goto IL_0071;
		}
	}
	{
		return _stringLiteral3804108681;
	}

IL_0071:
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, _stringLiteral1509742296, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptedXml_GetAlgorithmUri_m206671318_RuntimeMethod_var);
	}
}
// System.String System.Security.Cryptography.Xml.EncryptedXml::GetKeyWrapAlgorithmUri(System.Object)
extern "C"  String_t* EncryptedXml_GetKeyWrapAlgorithmUri_m241829005 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___keyAlg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_GetKeyWrapAlgorithmUri_m241829005_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___keyAlg0;
		if (!((Rijndael_t2986313634 *)IsInstClass((RuntimeObject*)L_0, Rijndael_t2986313634_il2cpp_TypeInfo_var)))
		{
			goto IL_0054;
		}
	}
	{
		RuntimeObject * L_1 = ___keyAlg0;
		NullCheck(((Rijndael_t2986313634 *)CastclassClass((RuntimeObject*)L_1, Rijndael_t2986313634_il2cpp_TypeInfo_var)));
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_KeySize() */, ((Rijndael_t2986313634 *)CastclassClass((RuntimeObject*)L_1, Rijndael_t2986313634_il2cpp_TypeInfo_var)));
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)128))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)192))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)256))))
		{
			goto IL_0049;
		}
	}
	{
		goto IL_004f;
	}

IL_003d:
	{
		return _stringLiteral2952230759;
	}

IL_0043:
	{
		return _stringLiteral2951575392;
	}

IL_0049:
	{
		return _stringLiteral612661092;
	}

IL_004f:
	{
		goto IL_0076;
	}

IL_0054:
	{
		RuntimeObject * L_6 = ___keyAlg0;
		if (!((RSA_t2385438082 *)IsInstClass((RuntimeObject*)L_6, RSA_t2385438082_il2cpp_TypeInfo_var)))
		{
			goto IL_0065;
		}
	}
	{
		return _stringLiteral2223091237;
	}

IL_0065:
	{
		RuntimeObject * L_7 = ___keyAlg0;
		if (!((TripleDES_t92303514 *)IsInstClass((RuntimeObject*)L_7, TripleDES_t92303514_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		return _stringLiteral3173071871;
	}

IL_0076:
	{
		ArgumentException_t132251570 * L_8 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_8, _stringLiteral2710813124, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptedXml_GetKeyWrapAlgorithmUri_m241829005_RuntimeMethod_var);
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionIV(System.Security.Cryptography.Xml.EncryptedData,System.String)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_GetDecryptionIV_m2394716305 (EncryptedXml_t2455217639 * __this, EncryptedData_t3129875747 * ___encryptedData0, String_t* ___symAlgUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_GetDecryptionIV_m2394716305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		EncryptedData_t3129875747 * L_0 = ___encryptedData0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3846635461, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_GetDecryptionIV_m2394716305_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___symAlgUri1;
		SymmetricAlgorithm_t4254223087 * L_3 = EncryptedXml_GetAlgorithm_m2452441519(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		SymmetricAlgorithm_t4254223087 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.SymmetricAlgorithm::get_BlockSize() */, L_4);
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)L_5/(int32_t)8))));
		EncryptedData_t3129875747 * L_6 = ___encryptedData0;
		NullCheck(L_6);
		CipherData_t4021546579 * L_7 = VirtFuncInvoker0< CipherData_t4021546579 * >::Invoke(4 /* System.Security.Cryptography.Xml.CipherData System.Security.Cryptography.Xml.EncryptedType::get_CipherData() */, L_6);
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = CipherData_get_CipherValue_m4127530842(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = V_1;
		ByteU5BU5D_t4116647657* L_10 = V_1;
		NullCheck(L_10);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, 0, (RuntimeArray *)(RuntimeArray *)L_9, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_11 = V_1;
		return L_11;
	}
}
// System.Security.Cryptography.SymmetricAlgorithm System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionKey(System.Security.Cryptography.Xml.EncryptedData,System.String)
extern "C"  SymmetricAlgorithm_t4254223087 * EncryptedXml_GetDecryptionKey_m3847908196 (EncryptedXml_t2455217639 * __this, EncryptedData_t3129875747 * ___encryptedData0, String_t* ___symAlgUri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_GetDecryptionKey_m3847908196_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	KeyInfo_t3757684699 * V_1 = NULL;
	KeyInfoClause_t4210275625 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		EncryptedData_t3129875747 * L_0 = ___encryptedData0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3846635461, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_GetDecryptionKey_m3847908196_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___symAlgUri1;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		return (SymmetricAlgorithm_t4254223087 *)NULL;
	}

IL_0019:
	{
		String_t* L_3 = ___symAlgUri1;
		SymmetricAlgorithm_t4254223087 * L_4 = EncryptedXml_GetAlgorithm_m2452441519(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		SymmetricAlgorithm_t4254223087 * L_5 = V_0;
		EncryptedData_t3129875747 * L_6 = ___encryptedData0;
		EncryptedData_t3129875747 * L_7 = ___encryptedData0;
		NullCheck(L_7);
		EncryptionMethod_t2271876579 * L_8 = VirtFuncInvoker0< EncryptionMethod_t2271876579 * >::Invoke(8 /* System.Security.Cryptography.Xml.EncryptionMethod System.Security.Cryptography.Xml.EncryptedType::get_EncryptionMethod() */, L_7);
		NullCheck(L_8);
		String_t* L_9 = EncryptionMethod_get_KeyAlgorithm_m3594308328(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_10 = VirtFuncInvoker2< ByteU5BU5D_t4116647657*, EncryptedData_t3129875747 *, String_t* >::Invoke(5 /* System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::GetDecryptionIV(System.Security.Cryptography.Xml.EncryptedData,System.String) */, __this, L_6, L_9);
		NullCheck(L_5);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_5, L_10);
		EncryptedData_t3129875747 * L_11 = ___encryptedData0;
		NullCheck(L_11);
		KeyInfo_t3757684699 * L_12 = EncryptedType_get_KeyInfo_m2827788688(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		KeyInfo_t3757684699 * L_13 = V_1;
		NullCheck(L_13);
		RuntimeObject* L_14 = KeyInfo_GetEnumerator_m3346430934(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
	}

IL_0046:
	try
	{ // begin try (depth: 1)
		{
			goto IL_007e;
		}

IL_004b:
		{
			RuntimeObject* L_15 = V_3;
			NullCheck(L_15);
			RuntimeObject * L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_15);
			V_2 = ((KeyInfoClause_t4210275625 *)CastclassClass((RuntimeObject*)L_16, KeyInfoClause_t4210275625_il2cpp_TypeInfo_var));
			KeyInfoClause_t4210275625 * L_17 = V_2;
			if (!((KeyInfoEncryptedKey_t109830476 *)IsInstClass((RuntimeObject*)L_17, KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var)))
			{
				goto IL_007e;
			}
		}

IL_0062:
		{
			SymmetricAlgorithm_t4254223087 * L_18 = V_0;
			KeyInfoClause_t4210275625 * L_19 = V_2;
			NullCheck(((KeyInfoEncryptedKey_t109830476 *)CastclassClass((RuntimeObject*)L_19, KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var)));
			EncryptedKey_t805343673 * L_20 = KeyInfoEncryptedKey_get_EncryptedKey_m2314334438(((KeyInfoEncryptedKey_t109830476 *)CastclassClass((RuntimeObject*)L_19, KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			ByteU5BU5D_t4116647657* L_21 = VirtFuncInvoker1< ByteU5BU5D_t4116647657*, EncryptedKey_t805343673 * >::Invoke(4 /* System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::DecryptEncryptedKey(System.Security.Cryptography.Xml.EncryptedKey) */, __this, L_20);
			NullCheck(L_18);
			VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_18, L_21);
			goto IL_0089;
		}

IL_007e:
		{
			RuntimeObject* L_22 = V_3;
			NullCheck(L_22);
			bool L_23 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_22);
			if (L_23)
			{
				goto IL_004b;
			}
		}

IL_0089:
		{
			IL2CPP_LEAVE(0xA3, FINALLY_008e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008e;
	}

FINALLY_008e:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_24 = V_3;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_24, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_25 = V_4;
			if (L_25)
			{
				goto IL_009b;
			}
		}

IL_009a:
		{
			IL2CPP_END_FINALLY(142)
		}

IL_009b:
		{
			RuntimeObject* L_26 = V_4;
			NullCheck(L_26);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_26);
			IL2CPP_END_FINALLY(142)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(142)
	{
		IL2CPP_JUMP_TBL(0xA3, IL_00a3)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a3:
	{
		SymmetricAlgorithm_t4254223087 * L_27 = V_0;
		return L_27;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptedXml::ReplaceData(System.Xml.XmlElement,System.Byte[])
extern "C"  void EncryptedXml_ReplaceData_m2573463983 (EncryptedXml_t2455217639 * __this, XmlElement_t561603118 * ___inputElement0, ByteU5BU5D_t4116647657* ___decryptedData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_ReplaceData_m2573463983_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlTextReader_t4233384356 * V_1 = NULL;
	XmlNode_t3767805227 * V_2 = NULL;
	{
		XmlElement_t561603118 * L_0 = ___inputElement0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3873985397, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptedXml_ReplaceData_m2573463983_RuntimeMethod_var);
	}

IL_0011:
	{
		ByteU5BU5D_t4116647657* L_2 = ___decryptedData1;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2533598114, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, EncryptedXml_ReplaceData_m2573463983_RuntimeMethod_var);
	}

IL_0022:
	{
		XmlElement_t561603118 * L_4 = ___inputElement0;
		NullCheck(L_4);
		XmlDocument_t2837193595 * L_5 = VirtFuncInvoker0< XmlDocument_t2837193595 * >::Invoke(24 /* System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument() */, L_4);
		V_0 = L_5;
		Encoding_t1523322056 * L_6 = EncryptedXml_get_Encoding_m741438105(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_7 = ___decryptedData1;
		ByteU5BU5D_t4116647657* L_8 = ___decryptedData1;
		NullCheck(L_8);
		NullCheck(L_6);
		String_t* L_9 = VirtFuncInvoker3< String_t*, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(21 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))));
		StringReader_t3465604688 * L_10 = (StringReader_t3465604688 *)il2cpp_codegen_object_new(StringReader_t3465604688_il2cpp_TypeInfo_var);
		StringReader__ctor_m126993932(L_10, L_9, /*hidden argument*/NULL);
		XmlTextReader_t4233384356 * L_11 = (XmlTextReader_t4233384356 *)il2cpp_codegen_object_new(XmlTextReader_t4233384356_il2cpp_TypeInfo_var);
		XmlTextReader__ctor_m1979385252(L_11, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		XmlTextReader_t4233384356 * L_12 = V_1;
		NullCheck(L_12);
		VirtFuncInvoker0< int32_t >::Invoke(38 /* System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent() */, L_12);
		XmlDocument_t2837193595 * L_13 = V_0;
		XmlTextReader_t4233384356 * L_14 = V_1;
		NullCheck(L_13);
		XmlNode_t3767805227 * L_15 = VirtFuncInvoker1< XmlNode_t3767805227 *, XmlReader_t3121518892 * >::Invoke(66 /* System.Xml.XmlNode System.Xml.XmlDocument::ReadNode(System.Xml.XmlReader) */, L_13, L_14);
		V_2 = L_15;
		XmlElement_t561603118 * L_16 = ___inputElement0;
		NullCheck(L_16);
		XmlNode_t3767805227 * L_17 = VirtFuncInvoker0< XmlNode_t3767805227 * >::Invoke(25 /* System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode() */, L_16);
		XmlNode_t3767805227 * L_18 = V_2;
		XmlElement_t561603118 * L_19 = ___inputElement0;
		NullCheck(L_17);
		VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(41 /* System.Xml.XmlNode System.Xml.XmlNode::ReplaceChild(System.Xml.XmlNode,System.Xml.XmlNode) */, L_17, L_18, L_19);
		return;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_Transform_m946449195 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___transform1, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___data0;
		RuntimeObject* L_1 = ___transform1;
		ByteU5BU5D_t4116647657* L_2 = EncryptedXml_Transform_m3824077793(__this, L_0, L_1, 0, (bool)0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.EncryptedXml::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform,System.Int32,System.Boolean)
extern "C"  ByteU5BU5D_t4116647657* EncryptedXml_Transform_m3824077793 (EncryptedXml_t2455217639 * __this, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___transform1, int32_t ___blockOctetCount2, bool ___trimPadding3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptedXml_Transform_m3824077793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	CryptoStream_t2702504504 * V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t94973147 * L_1 = V_0;
		RuntimeObject* L_2 = ___transform1;
		CryptoStream_t2702504504 * L_3 = (CryptoStream_t2702504504 *)il2cpp_codegen_object_new(CryptoStream_t2702504504_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m2579441618(L_3, L_1, L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		CryptoStream_t2702504504 * L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = ___data0;
		ByteU5BU5D_t4116647657* L_6 = ___data0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(25 /* System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))));
		CryptoStream_t2702504504 * L_7 = V_1;
		NullCheck(L_7);
		CryptoStream_FlushFinalBlock_m2793658271(L_7, /*hidden argument*/NULL);
		V_2 = 0;
		bool L_8 = ___trimPadding3;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		MemoryStream_t94973147 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_t4116647657* L_10 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_9);
		MemoryStream_t94973147 * L_11 = V_0;
		NullCheck(L_11);
		int64_t L_12 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_11);
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, EncryptedXml_Transform_m3824077793_RuntimeMethod_var);
		NullCheck(L_10);
		intptr_t L_13 = (((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_12, (int64_t)(((int64_t)((int64_t)1)))))));
		uint8_t L_14 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
	}

IL_003b:
	{
		int32_t L_15 = V_2;
		int32_t L_16 = ___blockOctetCount2;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0044;
		}
	}
	{
		V_2 = 0;
	}

IL_0044:
	{
		MemoryStream_t94973147 * L_17 = V_0;
		NullCheck(L_17);
		int64_t L_18 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_17);
		int32_t L_19 = ___blockOctetCount2;
		int32_t L_20 = V_2;
		if ((int64_t)(((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)(((int64_t)((int64_t)L_19))))), (int64_t)(((int64_t)((int64_t)L_20)))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, EncryptedXml_Transform_m3824077793_RuntimeMethod_var);
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_18, (int64_t)(((int64_t)((int64_t)L_19))))), (int64_t)(((int64_t)((int64_t)L_20)))))))));
		MemoryStream_t94973147 * L_21 = V_0;
		NullCheck(L_21);
		ByteU5BU5D_t4116647657* L_22 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(32 /* System.Byte[] System.IO.MemoryStream::GetBuffer() */, L_21);
		int32_t L_23 = ___blockOctetCount2;
		ByteU5BU5D_t4116647657* L_24 = V_3;
		ByteU5BU5D_t4116647657* L_25 = V_3;
		NullCheck(L_25);
		Array_Copy_m344457298(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_22, L_23, (RuntimeArray *)(RuntimeArray *)L_24, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))), /*hidden argument*/NULL);
		CryptoStream_t2702504504 * L_26 = V_1;
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(15 /* System.Void System.Security.Cryptography.CryptoStream::Close() */, L_26);
		MemoryStream_t94973147 * L_27 = V_0;
		NullCheck(L_27);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_27);
		ByteU5BU5D_t4116647657* L_28 = V_3;
		return L_28;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor()
extern "C"  void EncryptionMethod__ctor_m4287255623 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		EncryptionMethod_set_KeyAlgorithm_m1138584935(__this, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::.ctor(System.String)
extern "C"  void EncryptionMethod__ctor_m2359305186 (EncryptionMethod_t2271876579 * __this, String_t* ___strAlgorithm0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___strAlgorithm0;
		EncryptionMethod_set_KeyAlgorithm_m1138584935(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptionMethod::get_KeyAlgorithm()
extern "C"  String_t* EncryptionMethod_get_KeyAlgorithm_m3594308328 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_algorithm_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeyAlgorithm(System.String)
extern "C"  void EncryptionMethod_set_KeyAlgorithm_m1138584935 (EncryptionMethod_t2271876579 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_algorithm_0(L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionMethod::get_KeySize()
extern "C"  int32_t EncryptionMethod_get_KeySize_m1905268523 (EncryptionMethod_t2271876579 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_keySize_1();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::set_KeySize(System.Int32)
extern "C"  void EncryptionMethod_set_KeySize_m1500697790 (EncryptionMethod_t2271876579 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionMethod_set_KeySize_m1500697790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral1350661676, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptionMethod_set_KeySize_m1500697790_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___value0;
		__this->set_keySize_1(L_2);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionMethod::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptionMethod_GetXml_m4098092980 (EncryptionMethod_t2271876579 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionMethod_GetXml_m4098092980_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = ___document0;
		NullCheck(L_0);
		XmlElement_t561603118 * L_1 = XmlDocument_CreateElement_m3950844455(L_0, _stringLiteral3041704345, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = EncryptionMethod_get_KeySize_m1905268523(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		XmlDocument_t2837193595 * L_3 = ___document0;
		NullCheck(L_3);
		XmlElement_t561603118 * L_4 = XmlDocument_CreateElement_m3950844455(L_3, _stringLiteral3625796128, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_1 = L_4;
		XmlElement_t561603118 * L_5 = V_1;
		int32_t L_6 = __this->get_keySize_1();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral628085470, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_5, L_9);
		XmlElement_t561603118 * L_10 = V_0;
		XmlElement_t561603118 * L_11 = V_1;
		NullCheck(L_10);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_10, L_11);
	}

IL_0050:
	{
		String_t* L_12 = EncryptionMethod_get_KeyAlgorithm_m3594308328(__this, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		XmlElement_t561603118 * L_13 = V_0;
		String_t* L_14 = EncryptionMethod_get_KeyAlgorithm_m3594308328(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_13, _stringLiteral3493885024, L_14);
	}

IL_006c:
	{
		XmlElement_t561603118 * L_15 = V_0;
		return L_15;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionMethod::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionMethod_LoadXml_m616092953 (EncryptionMethod_t2271876579 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionMethod_LoadXml_m616092953_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	Dictionary_2_t2736202052 * V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptionMethod_LoadXml_m616092953_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral3041704345, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral3279934454, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptionMethod_LoadXml_m616092953_RuntimeMethod_var);
	}

IL_0046:
	{
		EncryptionMethod_set_KeyAlgorithm_m1138584935(__this, (String_t*)NULL, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_9 = ___value0;
		NullCheck(L_9);
		XmlNodeList_t2551693786 * L_10 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_10);
		V_1 = L_11;
	}

IL_0059:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00de;
		}

IL_005e:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			RuntimeObject * L_13 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_12);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_13, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_14 = V_0;
			if (!((XmlWhitespace_t131741354 *)IsInstClass((RuntimeObject*)L_14, XmlWhitespace_t131741354_il2cpp_TypeInfo_var)))
			{
				goto IL_007a;
			}
		}

IL_0075:
		{
			goto IL_00de;
		}

IL_007a:
		{
			XmlNode_t3767805227 * L_15 = V_0;
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_15);
			V_2 = L_16;
			String_t* L_17 = V_2;
			if (!L_17)
			{
				goto IL_00de;
			}
		}

IL_0087:
		{
			Dictionary_2_t2736202052 * L_18 = ((EncryptionMethod_t2271876579_StaticFields*)il2cpp_codegen_static_fields_for(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapA_2();
			if (L_18)
			{
				goto IL_00aa;
			}
		}

IL_0091:
		{
			Dictionary_2_t2736202052 * L_19 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_19, 1, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_3 = L_19;
			Dictionary_2_t2736202052 * L_20 = V_3;
			NullCheck(L_20);
			Dictionary_2_Add_m282647386(L_20, _stringLiteral3625796128, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_21 = V_3;
			((EncryptionMethod_t2271876579_StaticFields*)il2cpp_codegen_static_fields_for(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24mapA_2(L_21);
		}

IL_00aa:
		{
			Dictionary_2_t2736202052 * L_22 = ((EncryptionMethod_t2271876579_StaticFields*)il2cpp_codegen_static_fields_for(EncryptionMethod_t2271876579_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapA_2();
			String_t* L_23 = V_2;
			NullCheck(L_22);
			bool L_24 = Dictionary_2_TryGetValue_m1013208020(L_22, L_23, (int32_t*)(&V_4), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_24)
			{
				goto IL_00de;
			}
		}

IL_00bc:
		{
			int32_t L_25 = V_4;
			if (!L_25)
			{
				goto IL_00c8;
			}
		}

IL_00c3:
		{
			goto IL_00de;
		}

IL_00c8:
		{
			XmlNode_t3767805227 * L_26 = V_0;
			NullCheck(L_26);
			String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlNode::get_InnerText() */, L_26);
			int32_t L_28 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_27, /*hidden argument*/NULL);
			EncryptionMethod_set_KeySize_m1500697790(__this, L_28, /*hidden argument*/NULL);
			goto IL_00de;
		}

IL_00de:
		{
			RuntimeObject* L_29 = V_1;
			NullCheck(L_29);
			bool L_30 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_005e;
			}
		}

IL_00e9:
		{
			IL2CPP_LEAVE(0x103, FINALLY_00ee);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ee;
	}

FINALLY_00ee:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_1;
			V_5 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_32 = V_5;
			if (L_32)
			{
				goto IL_00fb;
			}
		}

IL_00fa:
		{
			IL2CPP_END_FINALLY(238)
		}

IL_00fb:
		{
			RuntimeObject* L_33 = V_5;
			NullCheck(L_33);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_33);
			IL2CPP_END_FINALLY(238)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(238)
	{
		IL2CPP_JUMP_TBL(0x103, IL_0103)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0103:
	{
		XmlElement_t561603118 * L_34 = ___value0;
		NullCheck(L_34);
		bool L_35 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_34, _stringLiteral3493885024);
		if (!L_35)
		{
			goto IL_012e;
		}
	}
	{
		XmlElement_t561603118 * L_36 = ___value0;
		NullCheck(L_36);
		XmlAttributeCollection_t2316283784 * L_37 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_36);
		NullCheck(L_37);
		XmlAttribute_t1173852259 * L_38 = XmlAttributeCollection_get_ItemOf_m3472332322(L_37, _stringLiteral3493885024, /*hidden argument*/NULL);
		NullCheck(L_38);
		String_t* L_39 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_38);
		EncryptionMethod_set_KeyAlgorithm_m1138584935(__this, L_39, /*hidden argument*/NULL);
	}

IL_012e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptionProperty::.ctor(System.Xml.XmlElement)
extern "C"  void EncryptionProperty__ctor_m4273973733 (EncryptionProperty_t3099724478 * __this, XmlElement_t561603118 * ___elemProp0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_0 = ___elemProp0;
		EncryptionProperty_LoadXml_m879045214(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Id()
extern "C"  String_t* EncryptionProperty_get_Id_m1124324033 (EncryptionProperty_t3099724478 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_id_0();
		return L_0;
	}
}
// System.String System.Security.Cryptography.Xml.EncryptionProperty::get_Target()
extern "C"  String_t* EncryptionProperty_get_Target_m543866775 (EncryptionProperty_t3099724478 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_target_1();
		return L_0;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.EncryptionProperty::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * EncryptionProperty_GetXml_m2164701001 (EncryptionProperty_t3099724478 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionProperty_GetXml_m2164701001_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElement_t561603118 * V_0 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = ___document0;
		NullCheck(L_0);
		XmlElement_t561603118 * L_1 = XmlDocument_CreateElement_m3950844455(L_0, _stringLiteral3360770542, _stringLiteral1984398691, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = EncryptionProperty_get_Id_m1124324033(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		XmlElement_t561603118 * L_3 = V_0;
		String_t* L_4 = EncryptionProperty_get_Id_m1124324033(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_3, _stringLiteral3454449639, L_4);
	}

IL_002d:
	{
		String_t* L_5 = EncryptionProperty_get_Target_m543866775(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		XmlElement_t561603118 * L_6 = V_0;
		String_t* L_7 = EncryptionProperty_get_Target_m543866775(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_6, _stringLiteral2833504309, L_7);
	}

IL_0049:
	{
		XmlElement_t561603118 * L_8 = V_0;
		return L_8;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionProperty::LoadXml(System.Xml.XmlElement)
extern "C"  void EncryptionProperty_LoadXml_m879045214 (EncryptionProperty_t3099724478 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionProperty_LoadXml_m879045214_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, EncryptionProperty_LoadXml_m879045214_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral3360770542, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral1984398691, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_003b:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral2975465272, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, EncryptionProperty_LoadXml_m879045214_RuntimeMethod_var);
	}

IL_0046:
	{
		XmlElement_t561603118 * L_9 = ___value0;
		NullCheck(L_9);
		bool L_10 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_9, _stringLiteral3454449639);
		if (!L_10)
		{
			goto IL_0071;
		}
	}
	{
		XmlElement_t561603118 * L_11 = ___value0;
		NullCheck(L_11);
		XmlAttributeCollection_t2316283784 * L_12 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_11);
		NullCheck(L_12);
		XmlAttribute_t1173852259 * L_13 = XmlAttributeCollection_get_ItemOf_m3472332322(L_12, _stringLiteral3454449639, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_13);
		__this->set_id_0(L_14);
	}

IL_0071:
	{
		XmlElement_t561603118 * L_15 = ___value0;
		NullCheck(L_15);
		bool L_16 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_15, _stringLiteral2833504309);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		XmlElement_t561603118 * L_17 = ___value0;
		NullCheck(L_17);
		XmlAttributeCollection_t2316283784 * L_18 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_17);
		NullCheck(L_18);
		XmlAttribute_t1173852259 * L_19 = XmlAttributeCollection_get_ItemOf_m3472332322(L_18, _stringLiteral2833504309, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_19);
		__this->set_target_1(L_20);
	}

IL_009c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::.ctor()
extern "C"  void EncryptionPropertyCollection__ctor_m1867345757 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection__ctor_m1867345757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_list_0(L_0);
		return;
	}
}
// System.Object System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.get_Item(System.Int32)
extern "C"  RuntimeObject * EncryptionPropertyCollection_System_Collections_IList_get_Item_m1571824246 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		EncryptionProperty_t3099724478 * L_1 = EncryptionPropertyCollection_get_ItemOf_m1667401162(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void EncryptionPropertyCollection_System_Collections_IList_set_Item_m3766158180 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_set_Item_m3766158180_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		EncryptionPropertyCollection_set_ItemOf_m2771847742(__this, L_0, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_1, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.Contains(System.Object)
extern "C"  bool EncryptionPropertyCollection_System_Collections_IList_Contains_m3938168598 (EncryptionPropertyCollection_t3294881567 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_Contains_m3938168598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		bool L_1 = EncryptionPropertyCollection_Contains_m2781563633(__this, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_0, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.Add(System.Object)
extern "C"  int32_t EncryptionPropertyCollection_System_Collections_IList_Add_m256411036 (EncryptionPropertyCollection_t3294881567 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_Add_m256411036_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = EncryptionPropertyCollection_Add_m1382797104(__this, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_0, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t EncryptionPropertyCollection_System_Collections_IList_IndexOf_m444676057 (EncryptionPropertyCollection_t3294881567 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_IndexOf_m444676057_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = EncryptionPropertyCollection_IndexOf_m502958654(__this, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_0, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void EncryptionPropertyCollection_System_Collections_IList_Insert_m1464091862 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_Insert_m1464091862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		EncryptionPropertyCollection_Insert_m1496907771(__this, L_0, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_1, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::System.Collections.IList.Remove(System.Object)
extern "C"  void EncryptionPropertyCollection_System_Collections_IList_Remove_m324540698 (EncryptionPropertyCollection_t3294881567 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_System_Collections_IList_Remove_m324540698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		EncryptionPropertyCollection_Remove_m1658865379(__this, ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_0, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_Count()
extern "C"  int32_t EncryptionPropertyCollection_get_Count_m2956813631 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_IsFixedSize()
extern "C"  bool EncryptionPropertyCollection_get_IsFixedSize_m1117778686 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(26 /* System.Boolean System.Collections.ArrayList::get_IsFixedSize() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_IsReadOnly()
extern "C"  bool EncryptionPropertyCollection_get_IsReadOnly_m1912315938 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Collections.ArrayList::get_IsReadOnly() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_IsSynchronized()
extern "C"  bool EncryptionPropertyCollection_get_IsSynchronized_m1661142907 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Collections.ArrayList::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Security.Cryptography.Xml.EncryptionProperty System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_ItemOf(System.Int32)
extern "C"  EncryptionProperty_t3099724478 * EncryptionPropertyCollection_get_ItemOf_m1667401162 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EncryptionPropertyCollection_get_ItemOf_m1667401162_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((EncryptionProperty_t3099724478 *)CastclassSealed((RuntimeObject*)L_2, EncryptionProperty_t3099724478_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::set_ItemOf(System.Int32,System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_set_ItemOf_m2771847742 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, EncryptionProperty_t3099724478 * ___value1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		EncryptionProperty_t3099724478 * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Object System.Security.Cryptography.Xml.EncryptionPropertyCollection::get_SyncRoot()
extern "C"  RuntimeObject * EncryptionPropertyCollection_get_SyncRoot_m2494828247 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::Add(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  int32_t EncryptionPropertyCollection_Add_m1382797104 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		EncryptionProperty_t3099724478 * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Clear()
extern "C"  void EncryptionPropertyCollection_Clear_m3434930940 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.Xml.EncryptionPropertyCollection::Contains(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  bool EncryptionPropertyCollection_Contains_m2781563633 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		EncryptionProperty_t3099724478 * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::CopyTo(System.Array,System.Int32)
extern "C"  void EncryptionPropertyCollection_CopyTo_m722793808 (EncryptionPropertyCollection_t3294881567 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtActionInvoker2< RuntimeArray *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.Xml.EncryptionPropertyCollection::GetEnumerator()
extern "C"  RuntimeObject* EncryptionPropertyCollection_GetEnumerator_m1028937343 (EncryptionPropertyCollection_t3294881567 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.EncryptionPropertyCollection::IndexOf(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  int32_t EncryptionPropertyCollection_IndexOf_m502958654 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		EncryptionProperty_t3099724478 * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(33 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Insert(System.Int32,System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_Insert_m1496907771 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, EncryptionProperty_t3099724478 * ___value1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		EncryptionProperty_t3099724478 * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::Remove(System.Security.Cryptography.Xml.EncryptionProperty)
extern "C"  void EncryptionPropertyCollection_Remove_m1658865379 (EncryptionPropertyCollection_t3294881567 * __this, EncryptionProperty_t3099724478 * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		EncryptionProperty_t3099724478 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.EncryptionPropertyCollection::RemoveAt(System.Int32)
extern "C"  void EncryptionPropertyCollection_RemoveAt_m443851886 (EncryptionPropertyCollection_t3294881567 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfo::.ctor()
extern "C"  void KeyInfo__ctor_m2843249396 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfo__ctor_m2843249396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_Info_0(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfo::set_Id(System.String)
extern "C"  void KeyInfo_set_Id_m2499954846 (KeyInfo_t3757684699 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_id_1(L_0);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfo::AddClause(System.Security.Cryptography.Xml.KeyInfoClause)
extern "C"  void KeyInfo_AddClause_m3169793473 (KeyInfo_t3757684699 * __this, KeyInfoClause_t4210275625 * ___clause0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_Info_0();
		KeyInfoClause_t4210275625 * L_1 = ___clause0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.Xml.KeyInfo::GetEnumerator()
extern "C"  RuntimeObject* KeyInfo_GetEnumerator_m3346430934 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_Info_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfo::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfo_GetXml_m847639489 (KeyInfo_t3757684699 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfo_GetXml_m847639489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	KeyInfoClause_t4210275625 * V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	XmlNode_t3767805227 * V_4 = NULL;
	XmlNode_t3767805227 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_1, _stringLiteral2911941651, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_2;
		ArrayList_t2718874744 * L_3 = __this->get_Info_0();
		NullCheck(L_3);
		RuntimeObject* L_4 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_3);
		V_3 = L_4;
	}

IL_0023:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0050;
		}

IL_0028:
		{
			RuntimeObject* L_5 = V_3;
			NullCheck(L_5);
			RuntimeObject * L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_5);
			V_2 = ((KeyInfoClause_t4210275625 *)CastclassClass((RuntimeObject*)L_6, KeyInfoClause_t4210275625_il2cpp_TypeInfo_var));
			KeyInfoClause_t4210275625 * L_7 = V_2;
			NullCheck(L_7);
			XmlElement_t561603118 * L_8 = VirtFuncInvoker0< XmlElement_t561603118 * >::Invoke(4 /* System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoClause::GetXml() */, L_7);
			V_4 = L_8;
			XmlDocument_t2837193595 * L_9 = V_0;
			XmlNode_t3767805227 * L_10 = V_4;
			NullCheck(L_9);
			XmlNode_t3767805227 * L_11 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_9, L_10, (bool)1);
			V_5 = L_11;
			XmlElement_t561603118 * L_12 = V_1;
			XmlNode_t3767805227 * L_13 = V_5;
			NullCheck(L_12);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_12, L_13);
		}

IL_0050:
		{
			RuntimeObject* L_14 = V_3;
			NullCheck(L_14);
			bool L_15 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0028;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x75, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_3;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_6;
			if (L_17)
			{
				goto IL_006d;
			}
		}

IL_006c:
		{
			IL2CPP_END_FINALLY(96)
		}

IL_006d:
		{
			RuntimeObject* L_18 = V_6;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_18);
			IL2CPP_END_FINALLY(96)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x75, IL_0075)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0075:
	{
		XmlElement_t561603118 * L_19 = V_1;
		return L_19;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfo::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfo_LoadXml_m2855923995 (KeyInfo_t3757684699 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfo_LoadXml_m2855923995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyInfoClause_t4210275625 * V_2 = NULL;
	XmlNodeList_t2551693786 * V_3 = NULL;
	XmlNode_t3767805227 * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	Dictionary_2_t2736202052 * V_7 = NULL;
	int32_t V_8 = 0;
	String_t* V_9 = NULL;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	RuntimeObject* V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	KeyInfo_t3757684699 * G_B4_0 = NULL;
	KeyInfo_t3757684699 * G_B3_0 = NULL;
	String_t* G_B5_0 = NULL;
	KeyInfo_t3757684699 * G_B5_1 = NULL;
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfo_LoadXml_m2855923995_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		XmlAttributeCollection_t2316283784 * L_3 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_2);
		NullCheck(L_3);
		XmlAttribute_t1173852259 * L_4 = XmlAttributeCollection_get_ItemOf_m3472332322(L_3, _stringLiteral3454449639, /*hidden argument*/NULL);
		G_B3_0 = __this;
		if (!L_4)
		{
			G_B4_0 = __this;
			goto IL_0037;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(47 /* System.String System.Xml.XmlElement::GetAttribute(System.String) */, L_5, _stringLiteral3454449639);
		G_B5_0 = L_6;
		G_B5_1 = G_B3_0;
		goto IL_0038;
	}

IL_0037:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0038:
	{
		NullCheck(G_B5_1);
		KeyInfo_set_Id_m2499954846(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_7 = ___value0;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, _stringLiteral2911941651, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_029e;
		}
	}
	{
		XmlElement_t561603118 * L_10 = ___value0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_029e;
		}
	}
	{
		XmlElement_t561603118 * L_13 = ___value0;
		NullCheck(L_13);
		XmlNodeList_t2551693786 * L_14 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_14);
		V_1 = L_15;
	}

IL_0073:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0279;
		}

IL_0078:
		{
			RuntimeObject* L_16 = V_1;
			NullCheck(L_16);
			RuntimeObject * L_17 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_16);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_17, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_18 = V_0;
			NullCheck(L_18);
			int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_18);
			if ((((int32_t)L_19) == ((int32_t)1)))
			{
				goto IL_0095;
			}
		}

IL_0090:
		{
			goto IL_0279;
		}

IL_0095:
		{
			V_2 = (KeyInfoClause_t4210275625 *)NULL;
			XmlNode_t3767805227 * L_20 = V_0;
			NullCheck(L_20);
			String_t* L_21 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_20);
			V_6 = L_21;
			String_t* L_22 = V_6;
			if (!L_22)
			{
				goto IL_0255;
			}
		}

IL_00a6:
		{
			Dictionary_2_t2736202052 * L_23 = ((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapC_3();
			if (L_23)
			{
				goto IL_010d;
			}
		}

IL_00b0:
		{
			Dictionary_2_t2736202052 * L_24 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2392909825(L_24, 6, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
			V_7 = L_24;
			Dictionary_2_t2736202052 * L_25 = V_7;
			NullCheck(L_25);
			Dictionary_2_Add_m282647386(L_25, _stringLiteral1076923336, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_26 = V_7;
			NullCheck(L_26);
			Dictionary_2_Add_m282647386(L_26, _stringLiteral804733464, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_27 = V_7;
			NullCheck(L_27);
			Dictionary_2_Add_m282647386(L_27, _stringLiteral4247367443, 2, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_28 = V_7;
			NullCheck(L_28);
			Dictionary_2_Add_m282647386(L_28, _stringLiteral3467844206, 3, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_29 = V_7;
			NullCheck(L_29);
			Dictionary_2_Add_m282647386(L_29, _stringLiteral158637857, 4, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_30 = V_7;
			NullCheck(L_30);
			Dictionary_2_Add_m282647386(L_30, _stringLiteral3321084327, 5, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
			Dictionary_2_t2736202052 * L_31 = V_7;
			((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24mapC_3(L_31);
		}

IL_010d:
		{
			Dictionary_2_t2736202052 * L_32 = ((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapC_3();
			String_t* L_33 = V_6;
			NullCheck(L_32);
			bool L_34 = Dictionary_2_TryGetValue_m1013208020(L_32, L_33, (int32_t*)(&V_8), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
			if (!L_34)
			{
				goto IL_0255;
			}
		}

IL_0120:
		{
			int32_t L_35 = V_8;
			switch (L_35)
			{
				case 0:
				{
					goto IL_0144;
				}
				case 1:
				{
					goto IL_021e;
				}
				case 2:
				{
					goto IL_0229;
				}
				case 3:
				{
					goto IL_0234;
				}
				case 4:
				{
					goto IL_023f;
				}
				case 5:
				{
					goto IL_024a;
				}
			}
		}

IL_013f:
		{
			goto IL_0255;
		}

IL_0144:
		{
			XmlNode_t3767805227 * L_36 = V_0;
			NullCheck(L_36);
			XmlNodeList_t2551693786 * L_37 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_36);
			V_3 = L_37;
			XmlNodeList_t2551693786 * L_38 = V_3;
			NullCheck(L_38);
			int32_t L_39 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_38);
			if ((((int32_t)L_39) <= ((int32_t)0)))
			{
				goto IL_0219;
			}
		}

IL_0157:
		{
			XmlNodeList_t2551693786 * L_40 = V_3;
			NullCheck(L_40);
			RuntimeObject* L_41 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_40);
			V_5 = L_41;
		}

IL_015f:
		try
		{ // begin try (depth: 2)
			{
				goto IL_01f2;
			}

IL_0164:
			{
				RuntimeObject* L_42 = V_5;
				NullCheck(L_42);
				RuntimeObject * L_43 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_42);
				V_4 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_43, XmlNode_t3767805227_il2cpp_TypeInfo_var));
				XmlNode_t3767805227 * L_44 = V_4;
				NullCheck(L_44);
				String_t* L_45 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_44);
				V_9 = L_45;
				String_t* L_46 = V_9;
				if (!L_46)
				{
					goto IL_01f2;
				}
			}

IL_0182:
			{
				Dictionary_2_t2736202052 * L_47 = ((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapB_2();
				if (L_47)
				{
					goto IL_01b5;
				}
			}

IL_018c:
			{
				Dictionary_2_t2736202052 * L_48 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
				Dictionary_2__ctor_m2392909825(L_48, 2, /*hidden argument*/Dictionary_2__ctor_m2392909825_RuntimeMethod_var);
				V_7 = L_48;
				Dictionary_2_t2736202052 * L_49 = V_7;
				NullCheck(L_49);
				Dictionary_2_Add_m282647386(L_49, _stringLiteral158747095, 0, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_50 = V_7;
				NullCheck(L_50);
				Dictionary_2_Add_m282647386(L_50, _stringLiteral158637857, 1, /*hidden argument*/Dictionary_2_Add_m282647386_RuntimeMethod_var);
				Dictionary_2_t2736202052 * L_51 = V_7;
				((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->set_U3CU3Ef__switchU24mapB_2(L_51);
			}

IL_01b5:
			{
				Dictionary_2_t2736202052 * L_52 = ((KeyInfo_t3757684699_StaticFields*)il2cpp_codegen_static_fields_for(KeyInfo_t3757684699_il2cpp_TypeInfo_var))->get_U3CU3Ef__switchU24mapB_2();
				String_t* L_53 = V_9;
				NullCheck(L_52);
				bool L_54 = Dictionary_2_TryGetValue_m1013208020(L_52, L_53, (int32_t*)(&V_10), /*hidden argument*/Dictionary_2_TryGetValue_m1013208020_RuntimeMethod_var);
				if (!L_54)
				{
					goto IL_01f2;
				}
			}

IL_01c8:
			{
				int32_t L_55 = V_10;
				if (!L_55)
				{
					goto IL_01dc;
				}
			}

IL_01cf:
			{
				int32_t L_56 = V_10;
				if ((((int32_t)L_56) == ((int32_t)1)))
				{
					goto IL_01e7;
				}
			}

IL_01d7:
			{
				goto IL_01f2;
			}

IL_01dc:
			{
				DSAKeyValue_t682905322 * L_57 = (DSAKeyValue_t682905322 *)il2cpp_codegen_object_new(DSAKeyValue_t682905322_il2cpp_TypeInfo_var);
				DSAKeyValue__ctor_m739534853(L_57, /*hidden argument*/NULL);
				V_2 = L_57;
				goto IL_01f2;
			}

IL_01e7:
			{
				RSAKeyValue_t3247853290 * L_58 = (RSAKeyValue_t3247853290 *)il2cpp_codegen_object_new(RSAKeyValue_t3247853290_il2cpp_TypeInfo_var);
				RSAKeyValue__ctor_m2366602773(L_58, /*hidden argument*/NULL);
				V_2 = L_58;
				goto IL_01f2;
			}

IL_01f2:
			{
				RuntimeObject* L_59 = V_5;
				NullCheck(L_59);
				bool L_60 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_59);
				if (L_60)
				{
					goto IL_0164;
				}
			}

IL_01fe:
			{
				IL2CPP_LEAVE(0x219, FINALLY_0203);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0203;
		}

FINALLY_0203:
		{ // begin finally (depth: 2)
			{
				RuntimeObject* L_61 = V_5;
				V_11 = ((RuntimeObject*)IsInst((RuntimeObject*)L_61, IDisposable_t3640265483_il2cpp_TypeInfo_var));
				RuntimeObject* L_62 = V_11;
				if (L_62)
				{
					goto IL_0211;
				}
			}

IL_0210:
			{
				IL2CPP_END_FINALLY(515)
			}

IL_0211:
			{
				RuntimeObject* L_63 = V_11;
				NullCheck(L_63);
				InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_63);
				IL2CPP_END_FINALLY(515)
			}
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(515)
		{
			IL2CPP_JUMP_TBL(0x219, IL_0219)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0219:
		{
			goto IL_0260;
		}

IL_021e:
		{
			KeyInfoName_t2325312217 * L_64 = (KeyInfoName_t2325312217 *)il2cpp_codegen_object_new(KeyInfoName_t2325312217_il2cpp_TypeInfo_var);
			KeyInfoName__ctor_m3486294112(L_64, /*hidden argument*/NULL);
			V_2 = L_64;
			goto IL_0260;
		}

IL_0229:
		{
			KeyInfoRetrievalMethod_t2493599240 * L_65 = (KeyInfoRetrievalMethod_t2493599240 *)il2cpp_codegen_object_new(KeyInfoRetrievalMethod_t2493599240_il2cpp_TypeInfo_var);
			KeyInfoRetrievalMethod__ctor_m1291544675(L_65, /*hidden argument*/NULL);
			V_2 = L_65;
			goto IL_0260;
		}

IL_0234:
		{
			KeyInfoX509Data_t3389067689 * L_66 = (KeyInfoX509Data_t3389067689 *)il2cpp_codegen_object_new(KeyInfoX509Data_t3389067689_il2cpp_TypeInfo_var);
			KeyInfoX509Data__ctor_m2307053325(L_66, /*hidden argument*/NULL);
			V_2 = L_66;
			goto IL_0260;
		}

IL_023f:
		{
			RSAKeyValue_t3247853290 * L_67 = (RSAKeyValue_t3247853290 *)il2cpp_codegen_object_new(RSAKeyValue_t3247853290_il2cpp_TypeInfo_var);
			RSAKeyValue__ctor_m2366602773(L_67, /*hidden argument*/NULL);
			V_2 = L_67;
			goto IL_0260;
		}

IL_024a:
		{
			KeyInfoEncryptedKey_t109830476 * L_68 = (KeyInfoEncryptedKey_t109830476 *)il2cpp_codegen_object_new(KeyInfoEncryptedKey_t109830476_il2cpp_TypeInfo_var);
			KeyInfoEncryptedKey__ctor_m915376870(L_68, /*hidden argument*/NULL);
			V_2 = L_68;
			goto IL_0260;
		}

IL_0255:
		{
			KeyInfoNode_t3535559014 * L_69 = (KeyInfoNode_t3535559014 *)il2cpp_codegen_object_new(KeyInfoNode_t3535559014_il2cpp_TypeInfo_var);
			KeyInfoNode__ctor_m1391412554(L_69, /*hidden argument*/NULL);
			V_2 = L_69;
			goto IL_0260;
		}

IL_0260:
		{
			KeyInfoClause_t4210275625 * L_70 = V_2;
			if (!L_70)
			{
				goto IL_0279;
			}
		}

IL_0266:
		{
			KeyInfoClause_t4210275625 * L_71 = V_2;
			XmlNode_t3767805227 * L_72 = V_0;
			NullCheck(L_71);
			VirtActionInvoker1< XmlElement_t561603118 * >::Invoke(5 /* System.Void System.Security.Cryptography.Xml.KeyInfoClause::LoadXml(System.Xml.XmlElement) */, L_71, ((XmlElement_t561603118 *)CastclassClass((RuntimeObject*)L_72, XmlElement_t561603118_il2cpp_TypeInfo_var)));
			KeyInfoClause_t4210275625 * L_73 = V_2;
			KeyInfo_AddClause_m3169793473(__this, L_73, /*hidden argument*/NULL);
		}

IL_0279:
		{
			RuntimeObject* L_74 = V_1;
			NullCheck(L_74);
			bool L_75 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_74);
			if (L_75)
			{
				goto IL_0078;
			}
		}

IL_0284:
		{
			IL2CPP_LEAVE(0x29E, FINALLY_0289);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0289;
	}

FINALLY_0289:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_76 = V_1;
			V_12 = ((RuntimeObject*)IsInst((RuntimeObject*)L_76, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_77 = V_12;
			if (L_77)
			{
				goto IL_0296;
			}
		}

IL_0295:
		{
			IL2CPP_END_FINALLY(649)
		}

IL_0296:
		{
			RuntimeObject* L_78 = V_12;
			NullCheck(L_78);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_78);
			IL2CPP_END_FINALLY(649)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(649)
	{
		IL2CPP_JUMP_TBL(0x29E, IL_029e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_029e:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoClause::.ctor()
extern "C"  void KeyInfoClause__ctor_m794259235 (KeyInfoClause_t4210275625 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor()
extern "C"  void KeyInfoEncryptedKey__ctor_m915376870 (KeyInfoEncryptedKey_t109830476 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::.ctor(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey__ctor_m3679225613 (KeyInfoEncryptedKey_t109830476 * __this, EncryptedKey_t805343673 * ___ek0, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		EncryptedKey_t805343673 * L_0 = ___ek0;
		KeyInfoEncryptedKey_set_EncryptedKey_m1899815332(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.Xml.EncryptedKey System.Security.Cryptography.Xml.KeyInfoEncryptedKey::get_EncryptedKey()
extern "C"  EncryptedKey_t805343673 * KeyInfoEncryptedKey_get_EncryptedKey_m2314334438 (KeyInfoEncryptedKey_t109830476 * __this, const RuntimeMethod* method)
{
	{
		EncryptedKey_t805343673 * L_0 = __this->get_encryptedKey_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::set_EncryptedKey(System.Security.Cryptography.Xml.EncryptedKey)
extern "C"  void KeyInfoEncryptedKey_set_EncryptedKey_m1899815332 (KeyInfoEncryptedKey_t109830476 * __this, EncryptedKey_t805343673 * ___value0, const RuntimeMethod* method)
{
	{
		EncryptedKey_t805343673 * L_0 = ___value0;
		__this->set_encryptedKey_0(L_0);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoEncryptedKey::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfoEncryptedKey_GetXml_m3585616529 (KeyInfoEncryptedKey_t109830476 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoEncryptedKey_GetXml_m3585616529_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_1 = KeyInfoEncryptedKey_GetXml_m3961843726(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoEncryptedKey::GetXml(System.Xml.XmlDocument)
extern "C"  XmlElement_t561603118 * KeyInfoEncryptedKey_GetXml_m3961843726 (KeyInfoEncryptedKey_t109830476 * __this, XmlDocument_t2837193595 * ___document0, const RuntimeMethod* method)
{
	{
		EncryptedKey_t805343673 * L_0 = __this->get_encryptedKey_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EncryptedKey_t805343673 * L_1 = __this->get_encryptedKey_0();
		XmlDocument_t2837193595 * L_2 = ___document0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_3 = EncryptedKey_GetXml_m2029937150(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0018:
	{
		return (XmlElement_t561603118 *)NULL;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoEncryptedKey::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoEncryptedKey_LoadXml_m715906761 (KeyInfoEncryptedKey_t109830476 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoEncryptedKey_LoadXml_m715906761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncryptedKey_t805343673 * L_0 = (EncryptedKey_t805343673 *)il2cpp_codegen_object_new(EncryptedKey_t805343673_il2cpp_TypeInfo_var);
		EncryptedKey__ctor_m739319042(L_0, /*hidden argument*/NULL);
		KeyInfoEncryptedKey_set_EncryptedKey_m1899815332(__this, L_0, /*hidden argument*/NULL);
		EncryptedKey_t805343673 * L_1 = KeyInfoEncryptedKey_get_EncryptedKey_m2314334438(__this, /*hidden argument*/NULL);
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_1);
		EncryptedKey_LoadXml_m2702380362(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoName::.ctor()
extern "C"  void KeyInfoName__ctor_m3486294112 (KeyInfoName_t2325312217 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoName::.ctor(System.String)
extern "C"  void KeyInfoName__ctor_m2566502717 (KeyInfoName_t2325312217 * __this, String_t* ___keyName0, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___keyName0;
		__this->set_name_0(L_0);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.KeyInfoName::get_Value()
extern "C"  String_t* KeyInfoName_get_Value_m1421941987 (KeyInfoName_t2325312217 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_0();
		return L_0;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoName::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfoName_GetXml_m2296422198 (KeyInfoName_t2325312217 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoName_GetXml_m2296422198_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_1, _stringLiteral804733464, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_2;
		XmlElement_t561603118 * L_3 = V_1;
		String_t* L_4 = __this->get_name_0();
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_3, L_4);
		XmlElement_t561603118 * L_5 = V_1;
		return L_5;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoName::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoName_LoadXml_m1550746100 (KeyInfoName_t2325312217 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoName_LoadXml_m1550746100_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfoName_LoadXml_m1550746100_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral804733464, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_name_0(L_8);
		goto IL_0052;
	}

IL_0046:
	{
		XmlElement_t561603118 * L_9 = ___value0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlElement::get_InnerText() */, L_9);
		__this->set_name_0(L_10);
	}

IL_0052:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoNode::.ctor()
extern "C"  void KeyInfoNode__ctor_m1391412554 (KeyInfoNode_t3535559014 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoNode::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfoNode_GetXml_m4005182126 (KeyInfoNode_t3535559014 * __this, const RuntimeMethod* method)
{
	{
		XmlElement_t561603118 * L_0 = __this->get_Node_0();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoNode::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoNode_LoadXml_m21171561 (KeyInfoNode_t3535559014 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	{
		XmlElement_t561603118 * L_0 = ___value0;
		__this->set_Node_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::.ctor()
extern "C"  void KeyInfoRetrievalMethod__ctor_m1291544675 (KeyInfoRetrievalMethod_t2493599240 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::get_Type()
extern "C"  String_t* KeyInfoRetrievalMethod_get_Type_m2075633511 (KeyInfoRetrievalMethod_t2493599240 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_type_2();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::set_Type(System.String)
extern "C"  void KeyInfoRetrievalMethod_set_Type_m2503858427 (KeyInfoRetrievalMethod_t2493599240 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		__this->set_element_1((XmlElement_t561603118 *)NULL);
		String_t* L_0 = ___value0;
		__this->set_type_2(L_0);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfoRetrievalMethod_GetXml_m3521211347 (KeyInfoRetrievalMethod_t2493599240 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoRetrievalMethod_GetXml_m3521211347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	{
		XmlElement_t561603118 * L_0 = __this->get_element_1();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		XmlElement_t561603118 * L_1 = __this->get_element_1();
		return L_1;
	}

IL_0012:
	{
		XmlDocument_t2837193595 * L_2 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		XmlDocument_t2837193595 * L_3 = V_0;
		NullCheck(L_3);
		XmlElement_t561603118 * L_4 = XmlDocument_CreateElement_m3950844455(L_3, _stringLiteral4247367443, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = __this->get_URI_0();
		if (!L_5)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_6 = __this->get_URI_0();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		XmlElement_t561603118 * L_8 = V_1;
		String_t* L_9 = __this->get_URI_0();
		NullCheck(L_8);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_8, _stringLiteral1891153624, L_9);
	}

IL_0056:
	{
		String_t* L_10 = KeyInfoRetrievalMethod_get_Type_m2075633511(__this, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0072;
		}
	}
	{
		XmlElement_t561603118 * L_11 = V_1;
		String_t* L_12 = KeyInfoRetrievalMethod_get_Type_m2075633511(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_11, _stringLiteral3243520198, L_12);
	}

IL_0072:
	{
		XmlElement_t561603118 * L_13 = V_1;
		return L_13;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoRetrievalMethod::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoRetrievalMethod_LoadXml_m828829976 (KeyInfoRetrievalMethod_t2493599240 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoRetrievalMethod_LoadXml_m828829976_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfoRetrievalMethod_LoadXml_m828829976_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral4247367443, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}

IL_0036:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		__this->set_URI_0(L_8);
		goto IL_0093;
	}

IL_0046:
	{
		XmlElement_t561603118 * L_9 = ___value0;
		NullCheck(L_9);
		XmlAttributeCollection_t2316283784 * L_10 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_9);
		NullCheck(L_10);
		XmlAttribute_t1173852259 * L_11 = XmlAttributeCollection_get_ItemOf_m3472332322(L_10, _stringLiteral1891153624, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_11);
		__this->set_URI_0(L_12);
		XmlElement_t561603118 * L_13 = ___value0;
		NullCheck(L_13);
		bool L_14 = VirtFuncInvoker1< bool, String_t* >::Invoke(49 /* System.Boolean System.Xml.XmlElement::HasAttribute(System.String) */, L_13, _stringLiteral3243520198);
		if (!L_14)
		{
			goto IL_008c;
		}
	}
	{
		XmlElement_t561603118 * L_15 = ___value0;
		NullCheck(L_15);
		XmlAttributeCollection_t2316283784 * L_16 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_15);
		NullCheck(L_16);
		XmlAttribute_t1173852259 * L_17 = XmlAttributeCollection_get_ItemOf_m3472332322(L_16, _stringLiteral3243520198, /*hidden argument*/NULL);
		NullCheck(L_17);
		String_t* L_18 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_17);
		KeyInfoRetrievalMethod_set_Type_m2503858427(__this, L_18, /*hidden argument*/NULL);
	}

IL_008c:
	{
		XmlElement_t561603118 * L_19 = ___value0;
		__this->set_element_1(L_19);
	}

IL_0093:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::.ctor()
extern "C"  void KeyInfoX509Data__ctor_m2307053325 (KeyInfoX509Data_t3389067689 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C"  void KeyInfoX509Data_AddCertificate_m1427145446 (KeyInfoX509Data_t3389067689 * __this, X509Certificate_t713131622 * ___certificate0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_AddCertificate_m1427145446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		X509Certificate_t713131622 * L_0 = ___certificate0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3602728074, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfoX509Data_AddCertificate_m1427145446_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = __this->get_X509CertificateList_4();
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_3, /*hidden argument*/NULL);
		__this->set_X509CertificateList_4(L_3);
	}

IL_0027:
	{
		ArrayList_t2718874744 * L_4 = __this->get_X509CertificateList_4();
		X509Certificate_t713131622 * L_5 = ___certificate0;
		NullCheck(L_4);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_4, L_5);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddIssuerSerial(System.String,System.String)
extern "C"  void KeyInfoX509Data_AddIssuerSerial_m239207945 (KeyInfoX509Data_t3389067689 * __this, String_t* ___issuerName0, String_t* ___serialNumber1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_AddIssuerSerial_m239207945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	X509IssuerSerial_t3270105241  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		String_t* L_0 = ___issuerName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral166250998, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfoX509Data_AddIssuerSerial_m239207945_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = __this->get_IssuerSerialList_1();
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_3, /*hidden argument*/NULL);
		__this->set_IssuerSerialList_1(L_3);
	}

IL_0027:
	{
		String_t* L_4 = ___issuerName0;
		String_t* L_5 = ___serialNumber1;
		X509IssuerSerial__ctor_m1367199679((X509IssuerSerial_t3270105241 *)(&V_0), L_4, L_5, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_6 = __this->get_IssuerSerialList_1();
		X509IssuerSerial_t3270105241  L_7 = V_0;
		X509IssuerSerial_t3270105241  L_8 = L_7;
		RuntimeObject * L_9 = Box(X509IssuerSerial_t3270105241_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_9);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectKeyId(System.Byte[])
extern "C"  void KeyInfoX509Data_AddSubjectKeyId_m649458755 (KeyInfoX509Data_t3389067689 * __this, ByteU5BU5D_t4116647657* ___subjectKeyId0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_AddSubjectKeyId_m649458755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_SubjectKeyIdList_2();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set_SubjectKeyIdList_2(L_1);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_2 = __this->get_SubjectKeyIdList_2();
		ByteU5BU5D_t4116647657* L_3 = ___subjectKeyId0;
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, (RuntimeObject *)(RuntimeObject *)L_3);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::AddSubjectName(System.String)
extern "C"  void KeyInfoX509Data_AddSubjectName_m4154902555 (KeyInfoX509Data_t3389067689 * __this, String_t* ___subjectName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_AddSubjectName_m4154902555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_SubjectNameList_3();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set_SubjectNameList_3(L_1);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_2 = __this->get_SubjectNameList_3();
		String_t* L_3 = ___subjectName0;
		NullCheck(L_2);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.KeyInfoX509Data::GetXml()
extern "C"  XmlElement_t561603118 * KeyInfoX509Data_GetXml_m3676775010 (KeyInfoX509Data_t3389067689 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_GetXml_m3676775010_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	X509IssuerSerial_t3270105241  V_2;
	memset(&V_2, 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	XmlElement_t561603118 * V_4 = NULL;
	XmlElement_t561603118 * V_5 = NULL;
	XmlElement_t561603118 * V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	XmlElement_t561603118 * V_9 = NULL;
	String_t* V_10 = NULL;
	RuntimeObject* V_11 = NULL;
	XmlElement_t561603118 * V_12 = NULL;
	X509Certificate_t713131622 * V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	XmlElement_t561603118 * V_15 = NULL;
	XmlElement_t561603118 * V_16 = NULL;
	RuntimeObject* V_17 = NULL;
	RuntimeObject* V_18 = NULL;
	RuntimeObject* V_19 = NULL;
	RuntimeObject* V_20 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_1, _stringLiteral3467844206, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_2;
		XmlElement_t561603118 * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_3, _stringLiteral3929236445, _stringLiteral3726462450);
		ArrayList_t2718874744 * L_4 = __this->get_IssuerSerialList_1();
		if (!L_4)
		{
			goto IL_00f4;
		}
	}
	{
		ArrayList_t2718874744 * L_5 = __this->get_IssuerSerialList_1();
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_00f4;
		}
	}
	{
		ArrayList_t2718874744 * L_7 = __this->get_IssuerSerialList_1();
		NullCheck(L_7);
		RuntimeObject* L_8 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_7);
		V_3 = L_8;
	}

IL_004f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00cf;
		}

IL_0054:
		{
			RuntimeObject* L_9 = V_3;
			NullCheck(L_9);
			RuntimeObject * L_10 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_9);
			V_2 = ((*(X509IssuerSerial_t3270105241 *)((X509IssuerSerial_t3270105241 *)UnBox(L_10, X509IssuerSerial_t3270105241_il2cpp_TypeInfo_var))));
			XmlDocument_t2837193595 * L_11 = V_0;
			NullCheck(L_11);
			XmlElement_t561603118 * L_12 = XmlDocument_CreateElement_m3950844455(L_11, _stringLiteral830628722, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_4 = L_12;
			XmlDocument_t2837193595 * L_13 = V_0;
			NullCheck(L_13);
			XmlElement_t561603118 * L_14 = XmlDocument_CreateElement_m3950844455(L_13, _stringLiteral3059114414, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_5 = L_14;
			XmlElement_t561603118 * L_15 = V_5;
			String_t* L_16 = X509IssuerSerial_get_IssuerName_m1361594627((X509IssuerSerial_t3270105241 *)(&V_2), /*hidden argument*/NULL);
			NullCheck(L_15);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_15, L_16);
			XmlElement_t561603118 * L_17 = V_4;
			XmlElement_t561603118 * L_18 = V_5;
			NullCheck(L_17);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_17, L_18);
			XmlDocument_t2837193595 * L_19 = V_0;
			NullCheck(L_19);
			XmlElement_t561603118 * L_20 = XmlDocument_CreateElement_m3950844455(L_19, _stringLiteral1851337633, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_6 = L_20;
			XmlElement_t561603118 * L_21 = V_6;
			String_t* L_22 = X509IssuerSerial_get_SerialNumber_m1055994994((X509IssuerSerial_t3270105241 *)(&V_2), /*hidden argument*/NULL);
			NullCheck(L_21);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_21, L_22);
			XmlElement_t561603118 * L_23 = V_4;
			XmlElement_t561603118 * L_24 = V_6;
			NullCheck(L_23);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_23, L_24);
			XmlElement_t561603118 * L_25 = V_1;
			XmlElement_t561603118 * L_26 = V_4;
			NullCheck(L_25);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_25, L_26);
		}

IL_00cf:
		{
			RuntimeObject* L_27 = V_3;
			NullCheck(L_27);
			bool L_28 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_27);
			if (L_28)
			{
				goto IL_0054;
			}
		}

IL_00da:
		{
			IL2CPP_LEAVE(0xF4, FINALLY_00df);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00df;
	}

FINALLY_00df:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_29 = V_3;
			V_17 = ((RuntimeObject*)IsInst((RuntimeObject*)L_29, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_30 = V_17;
			if (L_30)
			{
				goto IL_00ec;
			}
		}

IL_00eb:
		{
			IL2CPP_END_FINALLY(223)
		}

IL_00ec:
		{
			RuntimeObject* L_31 = V_17;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_31);
			IL2CPP_END_FINALLY(223)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(223)
	{
		IL2CPP_JUMP_TBL(0xF4, IL_00f4)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f4:
	{
		ArrayList_t2718874744 * L_32 = __this->get_SubjectKeyIdList_2();
		if (!L_32)
		{
			goto IL_0180;
		}
	}
	{
		ArrayList_t2718874744 * L_33 = __this->get_SubjectKeyIdList_2();
		NullCheck(L_33);
		int32_t L_34 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_33);
		if ((((int32_t)L_34) <= ((int32_t)0)))
		{
			goto IL_0180;
		}
	}
	{
		ArrayList_t2718874744 * L_35 = __this->get_SubjectKeyIdList_2();
		NullCheck(L_35);
		RuntimeObject* L_36 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_35);
		V_8 = L_36;
	}

IL_011d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0159;
		}

IL_0122:
		{
			RuntimeObject* L_37 = V_8;
			NullCheck(L_37);
			RuntimeObject * L_38 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_37);
			V_7 = ((ByteU5BU5D_t4116647657*)Castclass((RuntimeObject*)L_38, ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var));
			XmlDocument_t2837193595 * L_39 = V_0;
			NullCheck(L_39);
			XmlElement_t561603118 * L_40 = XmlDocument_CreateElement_m3950844455(L_39, _stringLiteral2732595130, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_9 = L_40;
			XmlElement_t561603118 * L_41 = V_9;
			ByteU5BU5D_t4116647657* L_42 = V_7;
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			String_t* L_43 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
			NullCheck(L_41);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_41, L_43);
			XmlElement_t561603118 * L_44 = V_1;
			XmlElement_t561603118 * L_45 = V_9;
			NullCheck(L_44);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_44, L_45);
		}

IL_0159:
		{
			RuntimeObject* L_46 = V_8;
			NullCheck(L_46);
			bool L_47 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_46);
			if (L_47)
			{
				goto IL_0122;
			}
		}

IL_0165:
		{
			IL2CPP_LEAVE(0x180, FINALLY_016a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_016a;
	}

FINALLY_016a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_48 = V_8;
			V_18 = ((RuntimeObject*)IsInst((RuntimeObject*)L_48, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_49 = V_18;
			if (L_49)
			{
				goto IL_0178;
			}
		}

IL_0177:
		{
			IL2CPP_END_FINALLY(362)
		}

IL_0178:
		{
			RuntimeObject* L_50 = V_18;
			NullCheck(L_50);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_50);
			IL2CPP_END_FINALLY(362)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(362)
	{
		IL2CPP_JUMP_TBL(0x180, IL_0180)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0180:
	{
		ArrayList_t2718874744 * L_51 = __this->get_SubjectNameList_3();
		if (!L_51)
		{
			goto IL_0207;
		}
	}
	{
		ArrayList_t2718874744 * L_52 = __this->get_SubjectNameList_3();
		NullCheck(L_52);
		int32_t L_53 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_52);
		if ((((int32_t)L_53) <= ((int32_t)0)))
		{
			goto IL_0207;
		}
	}
	{
		ArrayList_t2718874744 * L_54 = __this->get_SubjectNameList_3();
		NullCheck(L_54);
		RuntimeObject* L_55 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_54);
		V_11 = L_55;
	}

IL_01a9:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01e0;
		}

IL_01ae:
		{
			RuntimeObject* L_56 = V_11;
			NullCheck(L_56);
			RuntimeObject * L_57 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_56);
			V_10 = ((String_t*)CastclassSealed((RuntimeObject*)L_57, String_t_il2cpp_TypeInfo_var));
			XmlDocument_t2837193595 * L_58 = V_0;
			NullCheck(L_58);
			XmlElement_t561603118 * L_59 = XmlDocument_CreateElement_m3950844455(L_58, _stringLiteral68611663, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_12 = L_59;
			XmlElement_t561603118 * L_60 = V_12;
			String_t* L_61 = V_10;
			NullCheck(L_60);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_60, L_61);
			XmlElement_t561603118 * L_62 = V_1;
			XmlElement_t561603118 * L_63 = V_12;
			NullCheck(L_62);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_62, L_63);
		}

IL_01e0:
		{
			RuntimeObject* L_64 = V_11;
			NullCheck(L_64);
			bool L_65 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_64);
			if (L_65)
			{
				goto IL_01ae;
			}
		}

IL_01ec:
		{
			IL2CPP_LEAVE(0x207, FINALLY_01f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01f1;
	}

FINALLY_01f1:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_66 = V_11;
			V_19 = ((RuntimeObject*)IsInst((RuntimeObject*)L_66, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_67 = V_19;
			if (L_67)
			{
				goto IL_01ff;
			}
		}

IL_01fe:
		{
			IL2CPP_END_FINALLY(497)
		}

IL_01ff:
		{
			RuntimeObject* L_68 = V_19;
			NullCheck(L_68);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_68);
			IL2CPP_END_FINALLY(497)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(497)
	{
		IL2CPP_JUMP_TBL(0x207, IL_0207)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0207:
	{
		ArrayList_t2718874744 * L_69 = __this->get_X509CertificateList_4();
		if (!L_69)
		{
			goto IL_0298;
		}
	}
	{
		ArrayList_t2718874744 * L_70 = __this->get_X509CertificateList_4();
		NullCheck(L_70);
		int32_t L_71 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_70);
		if ((((int32_t)L_71) <= ((int32_t)0)))
		{
			goto IL_0298;
		}
	}
	{
		ArrayList_t2718874744 * L_72 = __this->get_X509CertificateList_4();
		NullCheck(L_72);
		RuntimeObject* L_73 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_72);
		V_14 = L_73;
	}

IL_0230:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0271;
		}

IL_0235:
		{
			RuntimeObject* L_74 = V_14;
			NullCheck(L_74);
			RuntimeObject * L_75 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_74);
			V_13 = ((X509Certificate_t713131622 *)CastclassClass((RuntimeObject*)L_75, X509Certificate_t713131622_il2cpp_TypeInfo_var));
			XmlDocument_t2837193595 * L_76 = V_0;
			NullCheck(L_76);
			XmlElement_t561603118 * L_77 = XmlDocument_CreateElement_m3950844455(L_76, _stringLiteral1155140630, _stringLiteral3726462450, /*hidden argument*/NULL);
			V_15 = L_77;
			XmlElement_t561603118 * L_78 = V_15;
			X509Certificate_t713131622 * L_79 = V_13;
			NullCheck(L_79);
			ByteU5BU5D_t4116647657* L_80 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(19 /* System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData() */, L_79);
			IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
			String_t* L_81 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
			NullCheck(L_78);
			VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_78, L_81);
			XmlElement_t561603118 * L_82 = V_1;
			XmlElement_t561603118 * L_83 = V_15;
			NullCheck(L_82);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_82, L_83);
		}

IL_0271:
		{
			RuntimeObject* L_84 = V_14;
			NullCheck(L_84);
			bool L_85 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_84);
			if (L_85)
			{
				goto IL_0235;
			}
		}

IL_027d:
		{
			IL2CPP_LEAVE(0x298, FINALLY_0282);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0282;
	}

FINALLY_0282:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_86 = V_14;
			V_20 = ((RuntimeObject*)IsInst((RuntimeObject*)L_86, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_87 = V_20;
			if (L_87)
			{
				goto IL_0290;
			}
		}

IL_028f:
		{
			IL2CPP_END_FINALLY(642)
		}

IL_0290:
		{
			RuntimeObject* L_88 = V_20;
			NullCheck(L_88);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_88);
			IL2CPP_END_FINALLY(642)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(642)
	{
		IL2CPP_JUMP_TBL(0x298, IL_0298)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0298:
	{
		ByteU5BU5D_t4116647657* L_89 = __this->get_x509crl_0();
		if (!L_89)
		{
			goto IL_02d0;
		}
	}
	{
		XmlDocument_t2837193595 * L_90 = V_0;
		NullCheck(L_90);
		XmlElement_t561603118 * L_91 = XmlDocument_CreateElement_m3950844455(L_90, _stringLiteral2330949019, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_16 = L_91;
		XmlElement_t561603118 * L_92 = V_16;
		ByteU5BU5D_t4116647657* L_93 = __this->get_x509crl_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		String_t* L_94 = Convert_ToBase64String_m3839334935(NULL /*static, unused*/, L_93, /*hidden argument*/NULL);
		NullCheck(L_92);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void System.Xml.XmlElement::set_InnerText(System.String) */, L_92, L_94);
		XmlElement_t561603118 * L_95 = V_1;
		XmlElement_t561603118 * L_96 = V_16;
		NullCheck(L_95);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_95, L_96);
	}

IL_02d0:
	{
		XmlElement_t561603118 * L_97 = V_1;
		return L_97;
	}
}
// System.Void System.Security.Cryptography.Xml.KeyInfoX509Data::LoadXml(System.Xml.XmlElement)
extern "C"  void KeyInfoX509Data_LoadXml_m256694754 (KeyInfoX509Data_t3389067689 * __this, XmlElement_t561603118 * ___element0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyInfoX509Data_LoadXml_m256694754_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlElementU5BU5D_t1541675355* V_0 = NULL;
	int32_t V_1 = 0;
	XmlElement_t561603118 * V_2 = NULL;
	XmlElement_t561603118 * V_3 = NULL;
	XmlElement_t561603118 * V_4 = NULL;
	int32_t V_5 = 0;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	XmlElement_t561603118 * V_10 = NULL;
	{
		XmlElement_t561603118 * L_0 = ___element0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral4059539929, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, KeyInfoX509Data_LoadXml_m256694754_RuntimeMethod_var);
	}

IL_0011:
	{
		ArrayList_t2718874744 * L_2 = __this->get_IssuerSerialList_1();
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArrayList_t2718874744 * L_3 = __this->get_IssuerSerialList_1();
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_3);
	}

IL_0027:
	{
		ArrayList_t2718874744 * L_4 = __this->get_SubjectKeyIdList_2();
		if (!L_4)
		{
			goto IL_003d;
		}
	}
	{
		ArrayList_t2718874744 * L_5 = __this->get_SubjectKeyIdList_2();
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_5);
	}

IL_003d:
	{
		ArrayList_t2718874744 * L_6 = __this->get_SubjectNameList_3();
		if (!L_6)
		{
			goto IL_0053;
		}
	}
	{
		ArrayList_t2718874744 * L_7 = __this->get_SubjectNameList_3();
		NullCheck(L_7);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_7);
	}

IL_0053:
	{
		ArrayList_t2718874744 * L_8 = __this->get_X509CertificateList_4();
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		ArrayList_t2718874744 * L_9 = __this->get_X509CertificateList_4();
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_9);
	}

IL_0069:
	{
		__this->set_x509crl_0((ByteU5BU5D_t4116647657*)NULL);
		XmlElement_t561603118 * L_10 = ___element0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_11, _stringLiteral3467844206, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_009a;
		}
	}
	{
		XmlElement_t561603118 * L_13 = ___element0;
		NullCheck(L_13);
		String_t* L_14 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_13);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_15 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_14, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_00a5;
		}
	}

IL_009a:
	{
		CryptographicException_t248831461 * L_16 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_16, _stringLiteral4059539929, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, KeyInfoX509Data_LoadXml_m256694754_RuntimeMethod_var);
	}

IL_00a5:
	{
		V_0 = (XmlElementU5BU5D_t1541675355*)NULL;
		XmlElement_t561603118 * L_17 = ___element0;
		XmlElementU5BU5D_t1541675355* L_18 = XmlSignature_GetChildElements_m123056127(NULL /*static, unused*/, L_17, _stringLiteral830628722, /*hidden argument*/NULL);
		V_0 = L_18;
		XmlElementU5BU5D_t1541675355* L_19 = V_0;
		if (!L_19)
		{
			goto IL_0107;
		}
	}
	{
		V_1 = 0;
		goto IL_00fe;
	}

IL_00c0:
	{
		XmlElementU5BU5D_t1541675355* L_20 = V_0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		XmlElement_t561603118 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_2 = L_23;
		XmlElement_t561603118 * L_24 = V_2;
		XmlElement_t561603118 * L_25 = XmlSignature_GetChildElement_m690326908(NULL /*static, unused*/, L_24, _stringLiteral3059114414, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_3 = L_25;
		XmlElement_t561603118 * L_26 = V_2;
		XmlElement_t561603118 * L_27 = XmlSignature_GetChildElement_m690326908(NULL /*static, unused*/, L_26, _stringLiteral1851337633, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_4 = L_27;
		XmlElement_t561603118 * L_28 = V_3;
		NullCheck(L_28);
		String_t* L_29 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlElement::get_InnerText() */, L_28);
		XmlElement_t561603118 * L_30 = V_4;
		NullCheck(L_30);
		String_t* L_31 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Xml.XmlElement::get_InnerText() */, L_30);
		KeyInfoX509Data_AddIssuerSerial_m239207945(__this, L_29, L_31, /*hidden argument*/NULL);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00fe:
	{
		int32_t L_33 = V_1;
		XmlElementU5BU5D_t1541675355* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_00c0;
		}
	}

IL_0107:
	{
		XmlElement_t561603118 * L_35 = ___element0;
		XmlElementU5BU5D_t1541675355* L_36 = XmlSignature_GetChildElements_m123056127(NULL /*static, unused*/, L_35, _stringLiteral2732595130, /*hidden argument*/NULL);
		V_0 = L_36;
		XmlElementU5BU5D_t1541675355* L_37 = V_0;
		if (!L_37)
		{
			goto IL_0149;
		}
	}
	{
		V_5 = 0;
		goto IL_013f;
	}

IL_0121:
	{
		XmlElementU5BU5D_t1541675355* L_38 = V_0;
		int32_t L_39 = V_5;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		XmlElement_t561603118 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		NullCheck(L_41);
		String_t* L_42 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_41);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_43 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_42, /*hidden argument*/NULL);
		V_6 = L_43;
		ByteU5BU5D_t4116647657* L_44 = V_6;
		KeyInfoX509Data_AddSubjectKeyId_m649458755(__this, L_44, /*hidden argument*/NULL);
		int32_t L_45 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_013f:
	{
		int32_t L_46 = V_5;
		XmlElementU5BU5D_t1541675355* L_47 = V_0;
		NullCheck(L_47);
		if ((((int32_t)L_46) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_47)->max_length)))))))
		{
			goto IL_0121;
		}
	}

IL_0149:
	{
		XmlElement_t561603118 * L_48 = ___element0;
		XmlElementU5BU5D_t1541675355* L_49 = XmlSignature_GetChildElements_m123056127(NULL /*static, unused*/, L_48, _stringLiteral68611663, /*hidden argument*/NULL);
		V_0 = L_49;
		XmlElementU5BU5D_t1541675355* L_50 = V_0;
		if (!L_50)
		{
			goto IL_0182;
		}
	}
	{
		V_7 = 0;
		goto IL_0178;
	}

IL_0163:
	{
		XmlElementU5BU5D_t1541675355* L_51 = V_0;
		int32_t L_52 = V_7;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		XmlElement_t561603118 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		String_t* L_55 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_54);
		KeyInfoX509Data_AddSubjectName_m4154902555(__this, L_55, /*hidden argument*/NULL);
		int32_t L_56 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_0178:
	{
		int32_t L_57 = V_7;
		XmlElementU5BU5D_t1541675355* L_58 = V_0;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_58)->max_length)))))))
		{
			goto IL_0163;
		}
	}

IL_0182:
	{
		XmlElement_t561603118 * L_59 = ___element0;
		XmlElementU5BU5D_t1541675355* L_60 = XmlSignature_GetChildElements_m123056127(NULL /*static, unused*/, L_59, _stringLiteral1155140630, /*hidden argument*/NULL);
		V_0 = L_60;
		XmlElementU5BU5D_t1541675355* L_61 = V_0;
		if (!L_61)
		{
			goto IL_01c9;
		}
	}
	{
		V_8 = 0;
		goto IL_01bf;
	}

IL_019c:
	{
		XmlElementU5BU5D_t1541675355* L_62 = V_0;
		int32_t L_63 = V_8;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		XmlElement_t561603118 * L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_65);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_67 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_66, /*hidden argument*/NULL);
		V_9 = L_67;
		ByteU5BU5D_t4116647657* L_68 = V_9;
		X509Certificate_t713131622 * L_69 = (X509Certificate_t713131622 *)il2cpp_codegen_object_new(X509Certificate_t713131622_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1413707489(L_69, L_68, /*hidden argument*/NULL);
		KeyInfoX509Data_AddCertificate_m1427145446(__this, L_69, /*hidden argument*/NULL);
		int32_t L_70 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_01bf:
	{
		int32_t L_71 = V_8;
		XmlElementU5BU5D_t1541675355* L_72 = V_0;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_72)->max_length)))))))
		{
			goto IL_019c;
		}
	}

IL_01c9:
	{
		XmlElement_t561603118 * L_73 = ___element0;
		XmlElement_t561603118 * L_74 = XmlSignature_GetChildElement_m690326908(NULL /*static, unused*/, L_73, _stringLiteral2330949019, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_10 = L_74;
		XmlElement_t561603118 * L_75 = V_10;
		if (!L_75)
		{
			goto IL_01f4;
		}
	}
	{
		XmlElement_t561603118 * L_76 = V_10;
		NullCheck(L_76);
		String_t* L_77 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_76);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_78 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		__this->set_x509crl_0(L_78);
	}

IL_01f4:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.KeyReference::.ctor()
extern "C"  void KeyReference__ctor_m2929745253 (KeyReference_t1254893728 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyReference__ctor_m2929745253_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EncryptedReference__ctor_m3809608059(__this, /*hidden argument*/NULL);
		EncryptedReference_set_ReferenceType_m1398693937(__this, _stringLiteral386517117, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.ReferenceList::.ctor()
extern "C"  void ReferenceList__ctor_m938614769 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceList__ctor_m938614769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_list_0(L_0);
		return;
	}
}
// System.Object System.Security.Cryptography.Xml.ReferenceList::System.Collections.IList.get_Item(System.Int32)
extern "C"  RuntimeObject * ReferenceList_System_Collections_IList_get_Item_m3348928105 (ReferenceList_t2222396100 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		EncryptedReference_t3282913964 * L_1 = ReferenceList_get_ItemOf_m3656255803(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void ReferenceList_System_Collections_IList_set_Item_m4073129743 (ReferenceList_t2222396100 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceList_System_Collections_IList_set_Item_m4073129743_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		ReferenceList_set_ItemOf_m3172190161(__this, L_0, ((EncryptedReference_t3282913964 *)CastclassClass((RuntimeObject*)L_1, EncryptedReference_t3282913964_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Security.Cryptography.Xml.ReferenceList::System.Collections.IList.get_IsFixedSize()
extern "C"  bool ReferenceList_System_Collections_IList_get_IsFixedSize_m3537635736 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Security.Cryptography.Xml.ReferenceList::System.Collections.IList.get_IsReadOnly()
extern "C"  bool ReferenceList_System_Collections_IList_get_IsReadOnly_m638617869 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 System.Security.Cryptography.Xml.ReferenceList::get_Count()
extern "C"  int32_t ReferenceList_get_Count_m1546645390 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Boolean System.Security.Cryptography.Xml.ReferenceList::get_IsSynchronized()
extern "C"  bool ReferenceList_get_IsSynchronized_m2196509519 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Collections.ArrayList::get_IsSynchronized() */, L_0);
		return L_1;
	}
}
// System.Security.Cryptography.Xml.EncryptedReference System.Security.Cryptography.Xml.ReferenceList::get_ItemOf(System.Int32)
extern "C"  EncryptedReference_t3282913964 * ReferenceList_get_ItemOf_m3656255803 (ReferenceList_t2222396100 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceList_get_ItemOf_m3656255803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return ((EncryptedReference_t3282913964 *)CastclassClass((RuntimeObject*)L_2, EncryptedReference_t3282913964_il2cpp_TypeInfo_var));
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::set_ItemOf(System.Int32,System.Security.Cryptography.Xml.EncryptedReference)
extern "C"  void ReferenceList_set_ItemOf_m3172190161 (ReferenceList_t2222396100 * __this, int32_t ___index0, EncryptedReference_t3282913964 * ___value1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		EncryptedReference_t3282913964 * L_2 = ___value1;
		NullCheck(L_0);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(22 /* System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object) */, L_0, L_1, L_2);
		return;
	}
}
// System.Object System.Security.Cryptography.Xml.ReferenceList::get_SyncRoot()
extern "C"  RuntimeObject * ReferenceList_get_SyncRoot_m3161319120 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(29 /* System.Object System.Collections.ArrayList::get_SyncRoot() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.ReferenceList::Add(System.Object)
extern "C"  int32_t ReferenceList_Add_m665697094 (ReferenceList_t2222396100 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceList_Add_m665697094_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (((EncryptedReference_t3282913964 *)IsInstClass((RuntimeObject*)L_0, EncryptedReference_t3282913964_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReferenceList_Add_m665697094_RuntimeMethod_var);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_2 = __this->get_list_0();
		RuntimeObject * L_3 = ___value0;
		NullCheck(L_2);
		int32_t L_4 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_2, L_3);
		return L_4;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::Clear()
extern "C"  void ReferenceList_Clear_m1548714595 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Boolean System.Security.Cryptography.Xml.ReferenceList::Contains(System.Object)
extern "C"  bool ReferenceList_Contains_m3133057931 (ReferenceList_t2222396100 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::CopyTo(System.Array,System.Int32)
extern "C"  void ReferenceList_CopyTo_m922867976 (ReferenceList_t2222396100 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		VirtActionInvoker2< RuntimeArray *, int32_t >::Invoke(41 /* System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32) */, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.Xml.ReferenceList::GetEnumerator()
extern "C"  RuntimeObject* ReferenceList_GetEnumerator_m1386260068 (ReferenceList_t2222396100 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
// System.Int32 System.Security.Cryptography.Xml.ReferenceList::IndexOf(System.Object)
extern "C"  int32_t ReferenceList_IndexOf_m1225410892 (ReferenceList_t2222396100 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2 = VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(33 /* System.Int32 System.Collections.ArrayList::IndexOf(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::Insert(System.Int32,System.Object)
extern "C"  void ReferenceList_Insert_m2475045249 (ReferenceList_t2222396100 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReferenceList_Insert_m2475045249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value1;
		if (((EncryptedReference_t3282913964 *)IsInstClass((RuntimeObject*)L_0, EncryptedReference_t3282913964_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, ReferenceList_Insert_m2475045249_RuntimeMethod_var);
	}

IL_0016:
	{
		ArrayList_t2718874744 * L_2 = __this->get_list_0();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_2);
		VirtActionInvoker2< int32_t, RuntimeObject * >::Invoke(36 /* System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object) */, L_2, L_3, L_4);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::Remove(System.Object)
extern "C"  void ReferenceList_Remove_m2040417840 (ReferenceList_t2222396100 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(38 /* System.Void System.Collections.ArrayList::Remove(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.ReferenceList::RemoveAt(System.Int32)
extern "C"  void ReferenceList_RemoveAt_m3672185048 (ReferenceList_t2222396100 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_list_0();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(39 /* System.Void System.Collections.ArrayList::RemoveAt(System.Int32) */, L_0, L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.RSAKeyValue::.ctor()
extern "C"  void RSAKeyValue__ctor_m2366602773 (RSAKeyValue_t3247853290 * __this, const RuntimeMethod* method)
{
	{
		KeyInfoClause__ctor_m794259235(__this, /*hidden argument*/NULL);
		RSA_t2385438082 * L_0 = RSA_Create_m4065275734(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_rsa_0(L_0);
		return;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.RSAKeyValue::GetXml()
extern "C"  XmlElement_t561603118 * RSAKeyValue_GetXml_m257296398 (RSAKeyValue_t3247853290 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKeyValue_GetXml_m257296398_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		NullCheck(L_1);
		XmlElement_t561603118 * L_2 = XmlDocument_CreateElement_m3950844455(L_1, _stringLiteral1076923336, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_2;
		XmlElement_t561603118 * L_3 = V_1;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_3, _stringLiteral3929236445, _stringLiteral3726462450);
		XmlElement_t561603118 * L_4 = V_1;
		RSA_t2385438082 * L_5 = __this->get_rsa_0();
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker1< String_t*, bool >::Invoke(12 /* System.String System.Security.Cryptography.RSA::ToXmlString(System.Boolean) */, L_5, (bool)0);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.Xml.XmlElement::set_InnerXml(System.String) */, L_4, L_6);
		XmlElement_t561603118 * L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Security.Cryptography.Xml.RSAKeyValue::LoadXml(System.Xml.XmlElement)
extern "C"  void RSAKeyValue_LoadXml_m2848906369 (RSAKeyValue_t3247853290 * __this, XmlElement_t561603118 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RSAKeyValue_LoadXml_m2848906369_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlElement_t561603118 * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, RSAKeyValue_LoadXml_m2848906369_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlElement_t561603118 * L_2 = ___value0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_3, _stringLiteral1076923336, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0036;
		}
	}
	{
		XmlElement_t561603118 * L_5 = ___value0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_7 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_6, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0041;
		}
	}

IL_0036:
	{
		CryptographicException_t248831461 * L_8 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_8, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, RSAKeyValue_LoadXml_m2848906369_RuntimeMethod_var);
	}

IL_0041:
	{
		RSA_t2385438082 * L_9 = __this->get_rsa_0();
		XmlElement_t561603118 * L_10 = ___value0;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(14 /* System.String System.Xml.XmlElement::get_InnerXml() */, L_10);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void System.Security.Cryptography.RSA::FromXmlString(System.String) */, L_9, L_11);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_AESKeyWrapEncrypt_m3291131172 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbWrappedKeyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_AESKeyWrapEncrypt_m3291131172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	ByteU5BU5DU5BU5D_t457913172* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	int32_t V_11 = 0;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_0;
		SymmetricAlgorithm_t4254223087 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_1, 2);
		SymmetricAlgorithm_t4254223087 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_2, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16))));
		SymmetricAlgorithm_t4254223087 * L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___rgbKey0;
		SymmetricAlgorithm_t4254223087 * L_5 = V_0;
		NullCheck(L_5);
		ByteU5BU5D_t4116647657* L_6 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_5);
		NullCheck(L_3);
		RuntimeObject* L_7 = VirtFuncInvoker2< RuntimeObject*, ByteU5BU5D_t4116647657*, ByteU5BU5D_t4116647657* >::Invoke(25 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor(System.Byte[],System.Byte[]) */, L_3, L_4, L_6);
		V_1 = L_7;
		ByteU5BU5D_t4116647657* L_8 = ___rgbWrappedKeyData1;
		NullCheck(L_8);
		V_2 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length))))/(int32_t)8));
		V_4 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16)));
		int32_t L_9 = V_2;
		V_5 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))))));
		int32_t L_10 = V_2;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_009c;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_11 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		RuntimeFieldHandle_t1871169219  L_12 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D1_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_11, L_12, /*hidden argument*/NULL);
		V_3 = L_11;
		RuntimeObject* L_13 = V_1;
		ByteU5BU5D_t4116647657* L_14 = V_3;
		ByteU5BU5D_t4116647657* L_15 = ___rgbWrappedKeyData1;
		ByteU5BU5D_t4116647657* L_16 = SymmetricKeyWrap_Concatenate_m2655912172(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_17 = V_4;
		NullCheck(L_13);
		InterfaceFuncInvoker5< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_13, L_16, 0, ((int32_t)16), L_17, 0);
		ByteU5BU5D_t4116647657* L_18 = V_4;
		ByteU5BU5D_t4116647657* L_19 = SymmetricKeyWrap_MSB_m1355712825(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_20 = V_5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, 0, (RuntimeArray *)(RuntimeArray *)L_20, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_21 = V_4;
		ByteU5BU5D_t4116647657* L_22 = SymmetricKeyWrap_LSB_m3516631426(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_23 = V_5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_22, 0, (RuntimeArray *)(RuntimeArray *)L_23, 8, 8, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_009c:
	{
		ByteU5BU5D_t4116647657* L_24 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		RuntimeFieldHandle_t1871169219  L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D2_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_24, L_25, /*hidden argument*/NULL);
		V_3 = L_24;
		int32_t L_26 = V_2;
		V_6 = ((ByteU5BU5DU5BU5D_t457913172*)SZArrayNew(ByteU5BU5DU5BU5D_t457913172_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1))));
		V_7 = 1;
		goto IL_00e4;
	}

IL_00c0:
	{
		ByteU5BU5DU5BU5D_t457913172* L_27 = V_6;
		int32_t L_28 = V_7;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8)));
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (ByteU5BU5D_t4116647657*)((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8)));
		ByteU5BU5D_t4116647657* L_29 = ___rgbWrappedKeyData1;
		int32_t L_30 = V_7;
		ByteU5BU5DU5BU5D_t457913172* L_31 = V_6;
		int32_t L_32 = V_7;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		ByteU5BU5D_t4116647657* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_29, ((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)))), (RuntimeArray *)(RuntimeArray *)L_34, 0, 8, /*hidden argument*/NULL);
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00e4:
	{
		int32_t L_36 = V_7;
		int32_t L_37 = V_2;
		if ((((int32_t)L_36) <= ((int32_t)L_37)))
		{
			goto IL_00c0;
		}
	}
	{
		V_8 = 0;
		goto IL_0163;
	}

IL_00f4:
	{
		V_9 = 1;
		goto IL_0155;
	}

IL_00fc:
	{
		RuntimeObject* L_38 = V_1;
		ByteU5BU5D_t4116647657* L_39 = V_3;
		ByteU5BU5DU5BU5D_t457913172* L_40 = V_6;
		int32_t L_41 = V_9;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		ByteU5BU5D_t4116647657* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		ByteU5BU5D_t4116647657* L_44 = SymmetricKeyWrap_Concatenate_m2655912172(NULL /*static, unused*/, L_39, L_43, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_45 = V_4;
		NullCheck(L_38);
		InterfaceFuncInvoker5< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_38, L_44, 0, ((int32_t)16), L_45, 0);
		int32_t L_46 = V_2;
		int32_t L_47 = V_8;
		int32_t L_48 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_49 = BitConverter_GetBytes_m4144088731(NULL /*static, unused*/, (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_46, (int32_t)L_47)), (int32_t)L_48))))), /*hidden argument*/NULL);
		V_10 = L_49;
		bool L_50 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (!L_50)
		{
			goto IL_0134;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_51 = V_10;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_51, /*hidden argument*/NULL);
	}

IL_0134:
	{
		ByteU5BU5D_t4116647657* L_52 = V_10;
		ByteU5BU5D_t4116647657* L_53 = V_4;
		ByteU5BU5D_t4116647657* L_54 = SymmetricKeyWrap_MSB_m1355712825(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_55 = SymmetricKeyWrap_Xor_m2659683204(NULL /*static, unused*/, L_52, L_54, /*hidden argument*/NULL);
		V_3 = L_55;
		ByteU5BU5DU5BU5D_t457913172* L_56 = V_6;
		int32_t L_57 = V_9;
		ByteU5BU5D_t4116647657* L_58 = V_4;
		ByteU5BU5D_t4116647657* L_59 = SymmetricKeyWrap_LSB_m3516631426(NULL /*static, unused*/, L_58, /*hidden argument*/NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_59);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(L_57), (ByteU5BU5D_t4116647657*)L_59);
		int32_t L_60 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_0155:
	{
		int32_t L_61 = V_9;
		int32_t L_62 = V_2;
		if ((((int32_t)L_61) <= ((int32_t)L_62)))
		{
			goto IL_00fc;
		}
	}
	{
		int32_t L_63 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_63, (int32_t)1));
	}

IL_0163:
	{
		int32_t L_64 = V_8;
		if ((((int32_t)L_64) <= ((int32_t)5)))
		{
			goto IL_00f4;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_65 = V_3;
		ByteU5BU5D_t4116647657* L_66 = V_5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_65, 0, (RuntimeArray *)(RuntimeArray *)L_66, 0, 8, /*hidden argument*/NULL);
		V_11 = 1;
		goto IL_0196;
	}

IL_017e:
	{
		ByteU5BU5DU5BU5D_t457913172* L_67 = V_6;
		int32_t L_68 = V_11;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		ByteU5BU5D_t4116647657* L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		ByteU5BU5D_t4116647657* L_71 = V_5;
		int32_t L_72 = V_11;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_70, 0, (RuntimeArray *)(RuntimeArray *)L_71, ((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)L_72)), 8, /*hidden argument*/NULL);
		int32_t L_73 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_73, (int32_t)1));
	}

IL_0196:
	{
		int32_t L_74 = V_11;
		int32_t L_75 = V_2;
		if ((((int32_t)L_74) <= ((int32_t)L_75)))
		{
			goto IL_017e;
		}
	}

IL_019e:
	{
		ByteU5BU5D_t4116647657* L_76 = V_5;
		return L_76;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::AESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_AESKeyWrapDecrypt_m1188890246 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbEncryptedWrappedKeyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_AESKeyWrapDecrypt_m1188890246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	ByteU5BU5D_t4116647657* V_8 = NULL;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	ByteU5BU5D_t4116647657* V_10 = NULL;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral2648998989, /*hidden argument*/NULL);
		V_0 = L_0;
		SymmetricAlgorithm_t4254223087 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_1, 2);
		SymmetricAlgorithm_t4254223087 * L_2 = V_0;
		ByteU5BU5D_t4116647657* L_3 = ___rgbKey0;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_t4116647657* L_4 = ___rgbEncryptedWrappedKeyData1;
		NullCheck(L_4);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))/(int32_t)8)), (int32_t)1));
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_5 = ___rgbEncryptedWrappedKeyData1;
		ByteU5BU5D_t4116647657* L_6 = V_2;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, 0, 8, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)8))));
		ByteU5BU5D_t4116647657* L_8 = ___rgbEncryptedWrappedKeyData1;
		ByteU5BU5D_t4116647657* L_9 = V_3;
		ByteU5BU5D_t4116647657* L_10 = ___rgbEncryptedWrappedKeyData1;
		NullCheck(L_10);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_8, 8, (RuntimeArray *)(RuntimeArray *)L_9, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))), (int32_t)8)), /*hidden argument*/NULL);
		SymmetricAlgorithm_t4254223087 * L_11 = V_0;
		NullCheck(L_11);
		RuntimeObject* L_12 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_11);
		V_4 = L_12;
		V_5 = 5;
		goto IL_00f6;
	}

IL_0059:
	{
		int32_t L_13 = V_1;
		V_6 = L_13;
		goto IL_00e8;
	}

IL_0061:
	{
		int32_t L_14 = V_1;
		int32_t L_15 = V_5;
		int32_t L_16 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t3118986983_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_17 = BitConverter_GetBytes_m4144088731(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)L_14))), (int64_t)(((int64_t)((int64_t)L_15))))), (int64_t)(((int64_t)((int64_t)L_16))))), /*hidden argument*/NULL);
		V_7 = L_17;
		bool L_18 = ((BitConverter_t3118986983_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t3118986983_il2cpp_TypeInfo_var))->get_IsLittleEndian_1();
		if (!L_18)
		{
			goto IL_0083;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_19 = V_7;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, /*hidden argument*/NULL);
	}

IL_0083:
	{
		V_8 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16)));
		V_9 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_20 = V_3;
		int32_t L_21 = V_6;
		ByteU5BU5D_t4116647657* L_22 = V_9;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_20, ((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)))), (RuntimeArray *)(RuntimeArray *)L_22, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_23 = V_2;
		ByteU5BU5D_t4116647657* L_24 = V_7;
		ByteU5BU5D_t4116647657* L_25 = SymmetricKeyWrap_Xor_m2659683204(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_26 = V_9;
		ByteU5BU5D_t4116647657* L_27 = SymmetricKeyWrap_Concatenate_m2655912172(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_10 = L_27;
		RuntimeObject* L_28 = V_4;
		ByteU5BU5D_t4116647657* L_29 = V_10;
		ByteU5BU5D_t4116647657* L_30 = V_8;
		NullCheck(L_28);
		InterfaceFuncInvoker5< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t, ByteU5BU5D_t4116647657*, int32_t >::Invoke(4 /* System.Int32 System.Security.Cryptography.ICryptoTransform::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, ICryptoTransform_t2733259762_il2cpp_TypeInfo_var, L_28, L_29, 0, ((int32_t)16), L_30, 0);
		ByteU5BU5D_t4116647657* L_31 = V_8;
		ByteU5BU5D_t4116647657* L_32 = SymmetricKeyWrap_MSB_m1355712825(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		ByteU5BU5D_t4116647657* L_33 = V_8;
		ByteU5BU5D_t4116647657* L_34 = SymmetricKeyWrap_LSB_m3516631426(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_35 = V_3;
		int32_t L_36 = V_6;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_34, 0, (RuntimeArray *)(RuntimeArray *)L_35, ((int32_t)il2cpp_codegen_multiply((int32_t)8, (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)))), 8, /*hidden argument*/NULL);
		int32_t L_37 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)1));
	}

IL_00e8:
	{
		int32_t L_38 = V_6;
		if ((((int32_t)L_38) >= ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_39 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_39, (int32_t)1));
	}

IL_00f6:
	{
		int32_t L_40 = V_5;
		if ((((int32_t)L_40) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_41 = V_3;
		return L_41;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapEncrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m1613069101 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbWrappedKeyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_TripleDESKeyWrapEncrypt_m1613069101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral3569897280, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t4116647657* L_1 = ___rgbWrappedKeyData1;
		ByteU5BU5D_t4116647657* L_2 = SymmetricKeyWrap_ComputeCMSKeyChecksum_m4173814019(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		ByteU5BU5D_t4116647657* L_3 = ___rgbWrappedKeyData1;
		ByteU5BU5D_t4116647657* L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = SymmetricKeyWrap_Concatenate_m2655912172(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		SymmetricAlgorithm_t4254223087 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(26 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::GenerateIV() */, L_6);
		SymmetricAlgorithm_t4254223087 * L_7 = V_0;
		NullCheck(L_7);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_7, 1);
		SymmetricAlgorithm_t4254223087 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_8, 1);
		SymmetricAlgorithm_t4254223087 * L_9 = V_0;
		ByteU5BU5D_t4116647657* L_10 = ___rgbKey0;
		NullCheck(L_9);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_9, L_10);
		ByteU5BU5D_t4116647657* L_11 = V_2;
		SymmetricAlgorithm_t4254223087 * L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_12);
		ByteU5BU5D_t4116647657* L_14 = SymmetricKeyWrap_Transform_m3435197795(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		SymmetricAlgorithm_t4254223087 * L_15 = V_0;
		NullCheck(L_15);
		ByteU5BU5D_t4116647657* L_16 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(10 /* System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::get_IV() */, L_15);
		ByteU5BU5D_t4116647657* L_17 = V_3;
		ByteU5BU5D_t4116647657* L_18 = SymmetricKeyWrap_Concatenate_m2655912172(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		ByteU5BU5D_t4116647657* L_19 = V_4;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_19, /*hidden argument*/NULL);
		SymmetricAlgorithm_t4254223087 * L_20 = V_0;
		ByteU5BU5D_t4116647657* L_21 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		RuntimeFieldHandle_t1871169219  L_22 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D3_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_20, L_21);
		ByteU5BU5D_t4116647657* L_23 = V_4;
		SymmetricAlgorithm_t4254223087 * L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = VirtFuncInvoker0< RuntimeObject* >::Invoke(24 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateEncryptor() */, L_24);
		ByteU5BU5D_t4116647657* L_26 = SymmetricKeyWrap_Transform_m3435197795(NULL /*static, unused*/, L_23, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		ByteU5BU5D_t4116647657* L_27 = V_5;
		return L_27;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::TripleDESKeyWrapDecrypt(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m3979056352 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___rgbKey0, ByteU5BU5D_t4116647657* ___rgbEncryptedWrappedKeyData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_TripleDESKeyWrapDecrypt_m3979056352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SymmetricAlgorithm_t4254223087 * V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	ByteU5BU5D_t4116647657* V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	ByteU5BU5D_t4116647657* V_5 = NULL;
	ByteU5BU5D_t4116647657* V_6 = NULL;
	{
		SymmetricAlgorithm_t4254223087 * L_0 = SymmetricAlgorithm_Create_m2726390826(NULL /*static, unused*/, _stringLiteral3569897280, /*hidden argument*/NULL);
		V_0 = L_0;
		SymmetricAlgorithm_t4254223087 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker1< int32_t >::Invoke(19 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode) */, L_1, 1);
		SymmetricAlgorithm_t4254223087 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(21 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode) */, L_2, 1);
		SymmetricAlgorithm_t4254223087 * L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___rgbKey0;
		NullCheck(L_3);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(13 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_Key(System.Byte[]) */, L_3, L_4);
		SymmetricAlgorithm_t4254223087 * L_5 = V_0;
		ByteU5BU5D_t4116647657* L_6 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		RuntimeFieldHandle_t1871169219  L_7 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t3057255362____U24U24fieldU2D4_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m3117905507(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_5, L_6);
		ByteU5BU5D_t4116647657* L_8 = ___rgbEncryptedWrappedKeyData1;
		SymmetricAlgorithm_t4254223087 * L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_9);
		ByteU5BU5D_t4116647657* L_11 = SymmetricKeyWrap_Transform_m3435197795(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		ByteU5BU5D_t4116647657* L_12 = V_1;
		Array_Reverse_m3714848183(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_13 = V_1;
		NullCheck(L_13);
		V_2 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)8))));
		V_3 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_14 = V_1;
		ByteU5BU5D_t4116647657* L_15 = V_3;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_14, 0, (RuntimeArray *)(RuntimeArray *)L_15, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_16 = V_1;
		ByteU5BU5D_t4116647657* L_17 = V_2;
		ByteU5BU5D_t4116647657* L_18 = V_2;
		NullCheck(L_18);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_16, 8, (RuntimeArray *)(RuntimeArray *)L_17, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))), /*hidden argument*/NULL);
		SymmetricAlgorithm_t4254223087 * L_19 = V_0;
		ByteU5BU5D_t4116647657* L_20 = V_3;
		NullCheck(L_19);
		VirtActionInvoker1< ByteU5BU5D_t4116647657* >::Invoke(11 /* System.Void System.Security.Cryptography.SymmetricAlgorithm::set_IV(System.Byte[]) */, L_19, L_20);
		ByteU5BU5D_t4116647657* L_21 = V_2;
		SymmetricAlgorithm_t4254223087 * L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = VirtFuncInvoker0< RuntimeObject* >::Invoke(22 /* System.Security.Cryptography.ICryptoTransform System.Security.Cryptography.SymmetricAlgorithm::CreateDecryptor() */, L_22);
		ByteU5BU5D_t4116647657* L_24 = SymmetricKeyWrap_Transform_m3435197795(NULL /*static, unused*/, L_21, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		V_5 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_25 = V_4;
		NullCheck(L_25);
		V_6 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_25)->max_length)))), (int32_t)8))));
		ByteU5BU5D_t4116647657* L_26 = V_4;
		ByteU5BU5D_t4116647657* L_27 = V_6;
		ByteU5BU5D_t4116647657* L_28 = V_6;
		NullCheck(L_28);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_26, 0, (RuntimeArray *)(RuntimeArray *)L_27, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_29 = V_4;
		ByteU5BU5D_t4116647657* L_30 = V_6;
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = V_5;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_29, (((int32_t)((int32_t)(((RuntimeArray *)L_30)->max_length)))), (RuntimeArray *)(RuntimeArray *)L_31, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_32 = V_6;
		return L_32;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Transform(System.Byte[],System.Security.Cryptography.ICryptoTransform)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Transform_m3435197795 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, RuntimeObject* ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_Transform_m3435197795_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t94973147 * V_0 = NULL;
	CryptoStream_t2702504504 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		MemoryStream_t94973147 * L_0 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2678285228(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		MemoryStream_t94973147 * L_1 = V_0;
		RuntimeObject* L_2 = ___t1;
		CryptoStream_t2702504504 * L_3 = (CryptoStream_t2702504504 *)il2cpp_codegen_object_new(CryptoStream_t2702504504_il2cpp_TypeInfo_var);
		CryptoStream__ctor_m2579441618(L_3, L_1, L_2, 1, /*hidden argument*/NULL);
		V_1 = L_3;
		CryptoStream_t2702504504 * L_4 = V_1;
		ByteU5BU5D_t4116647657* L_5 = ___data0;
		ByteU5BU5D_t4116647657* L_6 = ___data0;
		NullCheck(L_6);
		NullCheck(L_4);
		VirtActionInvoker3< ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(25 /* System.Void System.Security.Cryptography.CryptoStream::Write(System.Byte[],System.Int32,System.Int32) */, L_4, L_5, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))));
		CryptoStream_t2702504504 * L_7 = V_1;
		NullCheck(L_7);
		CryptoStream_FlushFinalBlock_m2793658271(L_7, /*hidden argument*/NULL);
		MemoryStream_t94973147 * L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_t4116647657* L_9 = VirtFuncInvoker0< ByteU5BU5D_t4116647657* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_8);
		V_2 = L_9;
		MemoryStream_t94973147 * L_10 = V_0;
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(15 /* System.Void System.IO.Stream::Close() */, L_10);
		CryptoStream_t2702504504 * L_11 = V_1;
		NullCheck(L_11);
		VirtActionInvoker0::Invoke(15 /* System.Void System.Security.Cryptography.CryptoStream::Close() */, L_11);
		ByteU5BU5D_t4116647657* L_12 = V_2;
		return L_12;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::ComputeCMSKeyChecksum(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_ComputeCMSKeyChecksum_m4173814019 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_ComputeCMSKeyChecksum_m4173814019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	ByteU5BU5D_t4116647657* V_1 = NULL;
	{
		HashAlgorithm_t1432317219 * L_0 = HashAlgorithm_Create_m644612360(NULL /*static, unused*/, _stringLiteral1144609714, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_1 = ___data0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_2 = HashAlgorithm_ComputeHash_m2825542963(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)8));
		ByteU5BU5D_t4116647657* L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = V_1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_3, 0, (RuntimeArray *)(RuntimeArray *)L_4, 0, 8, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = V_1;
		return L_5;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Concatenate(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Concatenate_m2655912172 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___buf10, ByteU5BU5D_t4116647657* ___buf21, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_Concatenate_m2655912172_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		ByteU5BU5D_t4116647657* L_0 = ___buf10;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___buf21;
		NullCheck(L_1);
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))))));
		ByteU5BU5D_t4116647657* L_2 = ___buf10;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		ByteU5BU5D_t4116647657* L_4 = ___buf10;
		NullCheck(L_4);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_2, 0, (RuntimeArray *)(RuntimeArray *)L_3, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = ___buf21;
		ByteU5BU5D_t4116647657* L_6 = V_0;
		ByteU5BU5D_t4116647657* L_7 = ___buf10;
		NullCheck(L_7);
		ByteU5BU5D_t4116647657* L_8 = ___buf21;
		NullCheck(L_8);
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_5, 0, (RuntimeArray *)(RuntimeArray *)L_6, (((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))), (((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_9 = V_0;
		return L_9;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_MSB_m1355712825 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		ByteU5BU5D_t4116647657* L_1 = SymmetricKeyWrap_MSB_m933140928(NULL /*static, unused*/, L_0, 8, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::MSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_MSB_m933140928 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, int32_t ___bytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_MSB_m933140928_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___bytes1;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		ByteU5BU5D_t4116647657* L_1 = ___input0;
		ByteU5BU5D_t4116647657* L_2 = V_0;
		int32_t L_3 = ___bytes1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, 0, (RuntimeArray *)(RuntimeArray *)L_2, 0, L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_4 = V_0;
		return L_4;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_LSB_m3516631426 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_t4116647657* L_0 = ___input0;
		ByteU5BU5D_t4116647657* L_1 = SymmetricKeyWrap_LSB_m2711009516(NULL /*static, unused*/, L_0, 8, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::LSB(System.Byte[],System.Int32)
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_LSB_m2711009516 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___input0, int32_t ___bytes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_LSB_m2711009516_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	{
		int32_t L_0 = ___bytes1;
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_0));
		ByteU5BU5D_t4116647657* L_1 = ___input0;
		int32_t L_2 = ___bytes1;
		ByteU5BU5D_t4116647657* L_3 = V_0;
		int32_t L_4 = ___bytes1;
		Buffer_BlockCopy_m2884209081(NULL /*static, unused*/, (RuntimeArray *)(RuntimeArray *)L_1, L_2, (RuntimeArray *)(RuntimeArray *)L_3, 0, L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_5 = V_0;
		return L_5;
	}
}
// System.Byte[] System.Security.Cryptography.Xml.SymmetricKeyWrap::Xor(System.Byte[],System.Byte[])
extern "C"  ByteU5BU5D_t4116647657* SymmetricKeyWrap_Xor_m2659683204 (RuntimeObject * __this /* static, unused */, ByteU5BU5D_t4116647657* ___x0, ByteU5BU5D_t4116647657* ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SymmetricKeyWrap_Xor_m2659683204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_t4116647657* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_t4116647657* L_0 = ___x0;
		NullCheck(L_0);
		ByteU5BU5D_t4116647657* L_1 = ___y1;
		NullCheck(L_1);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))))
		{
			goto IL_0016;
		}
	}
	{
		CryptographicException_t248831461 * L_2 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_2, _stringLiteral1436504311, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, SymmetricKeyWrap_Xor_m2659683204_RuntimeMethod_var);
	}

IL_0016:
	{
		ByteU5BU5D_t4116647657* L_3 = ___x0;
		NullCheck(L_3);
		V_0 = ((ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length))))));
		V_1 = 0;
		goto IL_0035;
	}

IL_0026:
	{
		ByteU5BU5D_t4116647657* L_4 = V_0;
		int32_t L_5 = V_1;
		ByteU5BU5D_t4116647657* L_6 = ___x0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		ByteU5BU5D_t4116647657* L_10 = ___y1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		uint8_t L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9^(int32_t)L_13))))));
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_15 = V_1;
		ByteU5BU5D_t4116647657* L_16 = ___x0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_16)->max_length)))))))
		{
			goto IL_0026;
		}
	}
	{
		ByteU5BU5D_t4116647657* L_17 = V_0;
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.Transform::.ctor()
extern "C"  void Transform__ctor_m426598508 (Transform_t1105379765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform__ctor_m426598508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Hashtable_t1853889766 * L_0 = (Hashtable_t1853889766 *)il2cpp_codegen_object_new(Hashtable_t1853889766_il2cpp_TypeInfo_var);
		Hashtable__ctor_m1815022027(L_0, /*hidden argument*/NULL);
		__this->set_propagated_namespaces_2(L_0);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SecurityManager_t3383402582_il2cpp_TypeInfo_var);
		bool L_1 = SecurityManager_get_SecurityEnabled_m3467182822(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0035;
		}
	}
	{
		XmlUrlResolver_t817895037 * L_2 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m4255120074(L_2, /*hidden argument*/NULL);
		Evidence_t2008144148 * L_3 = (Evidence_t2008144148 *)il2cpp_codegen_object_new(Evidence_t2008144148_il2cpp_TypeInfo_var);
		Evidence__ctor_m415538579(L_3, /*hidden argument*/NULL);
		XmlSecureResolver_t3504191023 * L_4 = (XmlSecureResolver_t3504191023 *)il2cpp_codegen_object_new(XmlSecureResolver_t3504191023_il2cpp_TypeInfo_var);
		XmlSecureResolver__ctor_m499824172(L_4, L_2, L_3, /*hidden argument*/NULL);
		__this->set_xmlResolver_1(L_4);
		goto IL_0040;
	}

IL_0035:
	{
		XmlUrlResolver_t817895037 * L_5 = (XmlUrlResolver_t817895037 *)il2cpp_codegen_object_new(XmlUrlResolver_t817895037_il2cpp_TypeInfo_var);
		XmlUrlResolver__ctor_m4255120074(L_5, /*hidden argument*/NULL);
		__this->set_xmlResolver_1(L_5);
	}

IL_0040:
	{
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.Transform::set_Algorithm(System.String)
extern "C"  void Transform_set_Algorithm_m2662008040 (Transform_t1105379765 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_algo_0(L_0);
		return;
	}
}
// System.Collections.Hashtable System.Security.Cryptography.Xml.Transform::get_PropagatedNamespaces()
extern "C"  Hashtable_t1853889766 * Transform_get_PropagatedNamespaces_m1327681064 (Transform_t1105379765 * __this, const RuntimeMethod* method)
{
	{
		Hashtable_t1853889766 * L_0 = __this->get_propagated_namespaces_2();
		return L_0;
	}
}
// System.Xml.XmlElement System.Security.Cryptography.Xml.Transform::GetXml()
extern "C"  XmlElement_t561603118 * Transform_GetXml_m3710823594 (Transform_t1105379765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Transform_GetXml_m3710823594_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	XmlElement_t561603118 * V_1 = NULL;
	XmlNodeList_t2551693786 * V_2 = NULL;
	XmlNode_t3767805227 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	XmlNode_t3767805227 * V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		XmlResolver_t626023767 * L_2 = Transform_GetResolver_m1126097980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< XmlResolver_t626023767 * >::Invoke(47 /* System.Void System.Xml.XmlDocument::set_XmlResolver(System.Xml.XmlResolver) */, L_1, L_2);
		XmlDocument_t2837193595 * L_3 = V_0;
		NullCheck(L_3);
		XmlElement_t561603118 * L_4 = XmlDocument_CreateElement_m3950844455(L_3, _stringLiteral1705687652, _stringLiteral3726462450, /*hidden argument*/NULL);
		V_1 = L_4;
		XmlElement_t561603118 * L_5 = V_1;
		String_t* L_6 = __this->get_algo_0();
		NullCheck(L_5);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(50 /* System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String) */, L_5, _stringLiteral3493885024, L_6);
		XmlNodeList_t2551693786 * L_7 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(4 /* System.Xml.XmlNodeList System.Security.Cryptography.Xml.Transform::GetInnerXml() */, __this);
		V_2 = L_7;
		XmlNodeList_t2551693786 * L_8 = V_2;
		if (!L_8)
		{
			goto IL_0095;
		}
	}
	{
		XmlNodeList_t2551693786 * L_9 = V_2;
		NullCheck(L_9);
		RuntimeObject* L_10 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_9);
		V_4 = L_10;
	}

IL_0049:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006e;
		}

IL_004e:
		{
			RuntimeObject* L_11 = V_4;
			NullCheck(L_11);
			RuntimeObject * L_12 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_11);
			V_3 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_12, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlDocument_t2837193595 * L_13 = V_0;
			XmlNode_t3767805227 * L_14 = V_3;
			NullCheck(L_13);
			XmlNode_t3767805227 * L_15 = VirtFuncInvoker2< XmlNode_t3767805227 *, XmlNode_t3767805227 *, bool >::Invoke(61 /* System.Xml.XmlNode System.Xml.XmlDocument::ImportNode(System.Xml.XmlNode,System.Boolean) */, L_13, L_14, (bool)1);
			V_5 = L_15;
			XmlElement_t561603118 * L_16 = V_1;
			XmlNode_t3767805227 * L_17 = V_5;
			NullCheck(L_16);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_16, L_17);
		}

IL_006e:
		{
			RuntimeObject* L_18 = V_4;
			NullCheck(L_18);
			bool L_19 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_004e;
			}
		}

IL_007a:
		{
			IL2CPP_LEAVE(0x95, FINALLY_007f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007f;
	}

FINALLY_007f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_4;
			V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_6;
			if (L_21)
			{
				goto IL_008d;
			}
		}

IL_008c:
		{
			IL2CPP_END_FINALLY(127)
		}

IL_008d:
		{
			RuntimeObject* L_22 = V_6;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_22);
			IL2CPP_END_FINALLY(127)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(127)
	{
		IL2CPP_JUMP_TBL(0x95, IL_0095)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0095:
	{
		XmlElement_t561603118 * L_23 = V_1;
		return L_23;
	}
}
// System.Xml.XmlResolver System.Security.Cryptography.Xml.Transform::GetResolver()
extern "C"  XmlResolver_t626023767 * Transform_GetResolver_m1126097980 (Transform_t1105379765 * __this, const RuntimeMethod* method)
{
	{
		XmlResolver_t626023767 * L_0 = __this->get_xmlResolver_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.TransformChain::.ctor()
extern "C"  void TransformChain__ctor_m99576165 (TransformChain_t1669092815 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TransformChain__ctor_m99576165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		__this->set_chain_0(L_0);
		return;
	}
}
// System.Int32 System.Security.Cryptography.Xml.TransformChain::get_Count()
extern "C"  int32_t TransformChain_get_Count_m3542384029 (TransformChain_t1669092815 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_chain_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void System.Security.Cryptography.Xml.TransformChain::Add(System.Security.Cryptography.Xml.Transform)
extern "C"  void TransformChain_Add_m67722782 (TransformChain_t1669092815 * __this, Transform_t1105379765 * ___transform0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_chain_0();
		Transform_t1105379765 * L_1 = ___transform0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator System.Security.Cryptography.Xml.TransformChain::GetEnumerator()
extern "C"  RuntimeObject* TransformChain_GetEnumerator_m4235168822 (TransformChain_t1669092815 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_chain_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.Security.Cryptography.Xml.X509IssuerSerial
extern "C" void X509IssuerSerial_t3270105241_marshal_pinvoke(const X509IssuerSerial_t3270105241& unmarshaled, X509IssuerSerial_t3270105241_marshaled_pinvoke& marshaled)
{
	marshaled.____issuerName_0 = il2cpp_codegen_marshal_string(unmarshaled.get__issuerName_0());
	marshaled.____serialNumber_1 = il2cpp_codegen_marshal_string(unmarshaled.get__serialNumber_1());
}
extern "C" void X509IssuerSerial_t3270105241_marshal_pinvoke_back(const X509IssuerSerial_t3270105241_marshaled_pinvoke& marshaled, X509IssuerSerial_t3270105241& unmarshaled)
{
	unmarshaled.set__issuerName_0(il2cpp_codegen_marshal_string_result(marshaled.____issuerName_0));
	unmarshaled.set__serialNumber_1(il2cpp_codegen_marshal_string_result(marshaled.____serialNumber_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.Xml.X509IssuerSerial
extern "C" void X509IssuerSerial_t3270105241_marshal_pinvoke_cleanup(X509IssuerSerial_t3270105241_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.____issuerName_0);
	marshaled.____issuerName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.____serialNumber_1);
	marshaled.____serialNumber_1 = NULL;
}
// Conversion methods for marshalling of: System.Security.Cryptography.Xml.X509IssuerSerial
extern "C" void X509IssuerSerial_t3270105241_marshal_com(const X509IssuerSerial_t3270105241& unmarshaled, X509IssuerSerial_t3270105241_marshaled_com& marshaled)
{
	marshaled.____issuerName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get__issuerName_0());
	marshaled.____serialNumber_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get__serialNumber_1());
}
extern "C" void X509IssuerSerial_t3270105241_marshal_com_back(const X509IssuerSerial_t3270105241_marshaled_com& marshaled, X509IssuerSerial_t3270105241& unmarshaled)
{
	unmarshaled.set__issuerName_0(il2cpp_codegen_marshal_bstring_result(marshaled.____issuerName_0));
	unmarshaled.set__serialNumber_1(il2cpp_codegen_marshal_bstring_result(marshaled.____serialNumber_1));
}
// Conversion method for clean up from marshalling of: System.Security.Cryptography.Xml.X509IssuerSerial
extern "C" void X509IssuerSerial_t3270105241_marshal_com_cleanup(X509IssuerSerial_t3270105241_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.____issuerName_0);
	marshaled.____issuerName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.____serialNumber_1);
	marshaled.____serialNumber_1 = NULL;
}
// System.Void System.Security.Cryptography.Xml.X509IssuerSerial::.ctor(System.String,System.String)
extern "C"  void X509IssuerSerial__ctor_m1367199679 (X509IssuerSerial_t3270105241 * __this, String_t* ___issuer0, String_t* ___serial1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___issuer0;
		__this->set__issuerName_0(L_0);
		String_t* L_1 = ___serial1;
		__this->set__serialNumber_1(L_1);
		return;
	}
}
extern "C"  void X509IssuerSerial__ctor_m1367199679_AdjustorThunk (RuntimeObject * __this, String_t* ___issuer0, String_t* ___serial1, const RuntimeMethod* method)
{
	X509IssuerSerial_t3270105241 * _thisAdjusted = reinterpret_cast<X509IssuerSerial_t3270105241 *>(__this + 1);
	X509IssuerSerial__ctor_m1367199679(_thisAdjusted, ___issuer0, ___serial1, method);
}
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_IssuerName()
extern "C"  String_t* X509IssuerSerial_get_IssuerName_m1361594627 (X509IssuerSerial_t3270105241 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__issuerName_0();
		return L_0;
	}
}
extern "C"  String_t* X509IssuerSerial_get_IssuerName_m1361594627_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	X509IssuerSerial_t3270105241 * _thisAdjusted = reinterpret_cast<X509IssuerSerial_t3270105241 *>(__this + 1);
	return X509IssuerSerial_get_IssuerName_m1361594627(_thisAdjusted, method);
}
// System.String System.Security.Cryptography.Xml.X509IssuerSerial::get_SerialNumber()
extern "C"  String_t* X509IssuerSerial_get_SerialNumber_m1055994994 (X509IssuerSerial_t3270105241 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__serialNumber_1();
		return L_0;
	}
}
extern "C"  String_t* X509IssuerSerial_get_SerialNumber_m1055994994_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	X509IssuerSerial_t3270105241 * _thisAdjusted = reinterpret_cast<X509IssuerSerial_t3270105241 *>(__this + 1);
	return X509IssuerSerial_get_SerialNumber_m1055994994(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::.ctor()
extern "C"  void XmlDecryptionTransform__ctor_m2968698842 (XmlDecryptionTransform_t4000891284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDecryptionTransform__ctor_m2968698842_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral3576697708, /*hidden argument*/NULL);
		EncryptedXml_t2455217639 * L_0 = (EncryptedXml_t2455217639 *)il2cpp_codegen_object_new(EncryptedXml_t2455217639_il2cpp_TypeInfo_var);
		EncryptedXml__ctor_m989113906(L_0, /*hidden argument*/NULL);
		__this->set_encryptedXml_3(L_0);
		ArrayList_t2718874744 * L_1 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_1, /*hidden argument*/NULL);
		__this->set_exceptUris_4(L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::AddExceptUri(System.String)
extern "C"  void XmlDecryptionTransform_AddExceptUri_m2609050410 (XmlDecryptionTransform_t4000891284 * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_exceptUris_4();
		String_t* L_1 = ___uri0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::ClearExceptUris()
extern "C"  void XmlDecryptionTransform_ClearExceptUris_m3619548113 (XmlDecryptionTransform_t4000891284 * __this, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = __this->get_exceptUris_4();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_0);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDecryptionTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDecryptionTransform_GetInnerXml_m2956802163 (XmlDecryptionTransform_t4000891284 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDecryptionTransform_GetInnerXml_m2956802163_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	XmlElement_t561603118 * V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlDocument_t2837193595 * L_0 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		XmlDocument_t2837193595 * L_1 = V_0;
		XmlDocument_t2837193595 * L_2 = V_0;
		NullCheck(L_2);
		XmlElement_t561603118 * L_3 = XmlDocument_CreateElement_m1545481562(L_2, _stringLiteral3459047110, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_1, L_3);
		ArrayList_t2718874744 * L_4 = __this->get_exceptUris_4();
		NullCheck(L_4);
		RuntimeObject* L_5 = VirtFuncInvoker0< RuntimeObject* >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_4);
		V_2 = L_5;
	}

IL_0024:
	try
	{ // begin try (depth: 1)
		{
			goto IL_008a;
		}

IL_0029:
		{
			RuntimeObject* L_6 = V_2;
			NullCheck(L_6);
			RuntimeObject * L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_6);
			V_1 = L_7;
			XmlDocument_t2837193595 * L_8 = V_0;
			NullCheck(L_8);
			XmlElement_t561603118 * L_9 = XmlDocument_CreateElement_m3950844455(L_8, _stringLiteral2407896252, _stringLiteral620655673, /*hidden argument*/NULL);
			V_3 = L_9;
			XmlElement_t561603118 * L_10 = V_3;
			NullCheck(L_10);
			XmlAttributeCollection_t2316283784 * L_11 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_10);
			XmlDocument_t2837193595 * L_12 = V_0;
			NullCheck(L_12);
			XmlAttribute_t1173852259 * L_13 = XmlDocument_CreateAttribute_m2644608424(L_12, _stringLiteral1891153624, _stringLiteral620655673, /*hidden argument*/NULL);
			NullCheck(L_11);
			XmlAttributeCollection_Append_m2892286316(L_11, L_13, /*hidden argument*/NULL);
			XmlElement_t561603118 * L_14 = V_3;
			NullCheck(L_14);
			XmlAttributeCollection_t2316283784 * L_15 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_14);
			NullCheck(L_15);
			XmlAttribute_t1173852259 * L_16 = XmlAttributeCollection_get_ItemOf_m1847320162(L_15, _stringLiteral1891153624, _stringLiteral620655673, /*hidden argument*/NULL);
			RuntimeObject * L_17 = V_1;
			NullCheck(L_16);
			VirtActionInvoker1< String_t* >::Invoke(29 /* System.Void System.Xml.XmlAttribute::set_Value(System.String) */, L_16, ((String_t*)CastclassSealed((RuntimeObject*)L_17, String_t_il2cpp_TypeInfo_var)));
			XmlDocument_t2837193595 * L_18 = V_0;
			NullCheck(L_18);
			XmlElement_t561603118 * L_19 = XmlDocument_get_DocumentElement_m595554940(L_18, /*hidden argument*/NULL);
			XmlElement_t561603118 * L_20 = V_3;
			NullCheck(L_19);
			VirtFuncInvoker1< XmlNode_t3767805227 *, XmlNode_t3767805227 * >::Invoke(34 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_19, L_20);
		}

IL_008a:
		{
			RuntimeObject* L_21 = V_2;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0029;
			}
		}

IL_0095:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_24 = V_4;
			if (L_24)
			{
				goto IL_00a7;
			}
		}

IL_00a6:
		{
			IL2CPP_END_FINALLY(154)
		}

IL_00a7:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(154)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		XmlDocument_t2837193595 * L_26 = V_0;
		NullCheck(L_26);
		XmlNodeList_t2551693786 * L_27 = VirtFuncInvoker2< XmlNodeList_t2551693786 *, String_t*, String_t* >::Invoke(60 /* System.Xml.XmlNodeList System.Xml.XmlDocument::GetElementsByTagName(System.String,System.String) */, L_26, _stringLiteral2407896252, _stringLiteral620655673);
		return L_27;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDecryptionTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDecryptionTransform_LoadInnerXml_m302742112 (XmlDecryptionTransform_t4000891284 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDecryptionTransform_LoadInnerXml_m302742112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t3767805227 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	XmlElement_t561603118 * V_2 = NULL;
	String_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		XmlNodeList_t2551693786 * L_0 = ___nodeList0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		NullReferenceException_t1023182353 * L_1 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m744513393(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlDecryptionTransform_LoadInnerXml_m302742112_RuntimeMethod_var);
	}

IL_000c:
	{
		XmlDecryptionTransform_ClearExceptUris_m3619548113(__this, /*hidden argument*/NULL);
		XmlNodeList_t2551693786 * L_2 = ___nodeList0;
		NullCheck(L_2);
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_2);
		V_1 = L_3;
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0098;
		}

IL_001e:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
			V_0 = ((XmlNode_t3767805227 *)CastclassClass((RuntimeObject*)L_5, XmlNode_t3767805227_il2cpp_TypeInfo_var));
			XmlNode_t3767805227 * L_6 = V_0;
			V_2 = ((XmlElement_t561603118 *)IsInstClass((RuntimeObject*)L_6, XmlElement_t561603118_il2cpp_TypeInfo_var));
			XmlElement_t561603118 * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlElement::get_NamespaceURI() */, L_7);
			NullCheck(L_8);
			bool L_9 = String_Equals_m2270643605(L_8, _stringLiteral620655673, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0098;
			}
		}

IL_0046:
		{
			XmlElement_t561603118 * L_10 = V_2;
			NullCheck(L_10);
			String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlElement::get_LocalName() */, L_10);
			NullCheck(L_11);
			bool L_12 = String_Equals_m2270643605(L_11, _stringLiteral2407896252, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0098;
			}
		}

IL_005b:
		{
			XmlElement_t561603118 * L_13 = V_2;
			NullCheck(L_13);
			XmlAttributeCollection_t2316283784 * L_14 = VirtFuncInvoker0< XmlAttributeCollection_t2316283784 * >::Invoke(6 /* System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes() */, L_13);
			NullCheck(L_14);
			XmlAttribute_t1173852259 * L_15 = XmlAttributeCollection_get_ItemOf_m1847320162(L_14, _stringLiteral1891153624, _stringLiteral620655673, /*hidden argument*/NULL);
			NullCheck(L_15);
			String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(28 /* System.String System.Xml.XmlAttribute::get_Value() */, L_15);
			V_3 = L_16;
			String_t* L_17 = V_3;
			NullCheck(L_17);
			bool L_18 = String_StartsWith_m1759067526(L_17, _stringLiteral3452614525, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_0091;
			}
		}

IL_0086:
		{
			CryptographicException_t248831461 * L_19 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
			CryptographicException__ctor_m503735289(L_19, _stringLiteral769489549, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, XmlDecryptionTransform_LoadInnerXml_m302742112_RuntimeMethod_var);
		}

IL_0091:
		{
			String_t* L_20 = V_3;
			XmlDecryptionTransform_AddExceptUri_m2609050410(__this, L_20, /*hidden argument*/NULL);
		}

IL_0098:
		{
			RuntimeObject* L_21 = V_1;
			NullCheck(L_21);
			bool L_22 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_001e;
			}
		}

IL_00a3:
		{
			IL2CPP_LEAVE(0xBD, FINALLY_00a8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a8;
	}

FINALLY_00a8:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_1;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t3640265483_il2cpp_TypeInfo_var));
			RuntimeObject* L_24 = V_4;
			if (L_24)
			{
				goto IL_00b5;
			}
		}

IL_00b4:
		{
			IL2CPP_END_FINALLY(168)
		}

IL_00b5:
		{
			RuntimeObject* L_25 = V_4;
			NullCheck(L_25);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_25);
			IL2CPP_END_FINALLY(168)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(168)
	{
		IL2CPP_JUMP_TBL(0xBD, IL_00bd)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00bd:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigBase64Transform::.ctor()
extern "C"  void XmlDsigBase64Transform__ctor_m1582715825 (XmlDsigBase64Transform_t260084727 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigBase64Transform__ctor_m1582715825_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral2162480690, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigBase64Transform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigBase64Transform_GetInnerXml_m1777180018 (XmlDsigBase64Transform_t260084727 * __this, const RuntimeMethod* method)
{
	{
		return (XmlNodeList_t2551693786 *)NULL;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigBase64Transform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigBase64Transform_LoadInnerXml_m342015483 (XmlDsigBase64Transform_t260084727 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NTransform::.ctor()
extern "C"  void XmlDsigC14NTransform__ctor_m3787210150 (XmlDsigC14NTransform_t3949211521 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigC14NTransform__ctor_m1295642362(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigC14NTransform__ctor_m1295642362 (XmlDsigC14NTransform_t3949211521 * __this, bool ___includeComments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigC14NTransform__ctor_m1295642362_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		bool L_0 = ___includeComments0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral1972575430, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001c:
	{
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral3994662901, /*hidden argument*/NULL);
	}

IL_0027:
	{
		bool L_1 = ___includeComments0;
		Hashtable_t1853889766 * L_2 = Transform_get_PropagatedNamespaces_m1327681064(__this, /*hidden argument*/NULL);
		XmlCanonicalizer_t3076776375 * L_3 = (XmlCanonicalizer_t3076776375 *)il2cpp_codegen_object_new(XmlCanonicalizer_t3076776375_il2cpp_TypeInfo_var);
		XmlCanonicalizer__ctor_m2574885826(L_3, L_1, (bool)0, L_2, /*hidden argument*/NULL);
		__this->set_canonicalizer_3(L_3);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigC14NTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigC14NTransform_GetInnerXml_m2441103735 (XmlDsigC14NTransform_t3949211521 * __this, const RuntimeMethod* method)
{
	{
		return (XmlNodeList_t2551693786 *)NULL;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigC14NTransform_LoadInnerXml_m2811410997 (XmlDsigC14NTransform_t3949211521 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigC14NWithCommentsTransform::.ctor()
extern "C"  void XmlDsigC14NWithCommentsTransform__ctor_m530905444 (XmlDsigC14NWithCommentsTransform_t1074875822 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigC14NTransform__ctor_m1295642362(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::.ctor()
extern "C"  void XmlDsigEnvelopedSignatureTransform__ctor_m100737688 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigEnvelopedSignatureTransform__ctor_m4150449793(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigEnvelopedSignatureTransform__ctor_m4150449793 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, bool ___includeComments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigEnvelopedSignatureTransform__ctor_m4150449793_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral2496344816, /*hidden argument*/NULL);
		bool L_0 = ___includeComments0;
		__this->set_comments_3(L_0);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigEnvelopedSignatureTransform_GetInnerXml_m1660661564 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, const RuntimeMethod* method)
{
	{
		return (XmlNodeList_t2551693786 *)NULL;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigEnvelopedSignatureTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigEnvelopedSignatureTransform_LoadInnerXml_m2733306428 (XmlDsigEnvelopedSignatureTransform_t2851260348 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor()
extern "C"  void XmlDsigExcC14NTransform__ctor_m1001005067 (XmlDsigExcC14NTransform_t586418029 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigExcC14NTransform__ctor_m128464798(__this, (bool)0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigExcC14NTransform__ctor_m1384431502 (XmlDsigExcC14NTransform_t586418029 * __this, bool ___includeComments0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___includeComments0;
		XmlDsigExcC14NTransform__ctor_m128464798(__this, L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::.ctor(System.Boolean,System.String)
extern "C"  void XmlDsigExcC14NTransform__ctor_m128464798 (XmlDsigExcC14NTransform_t586418029 * __this, bool ___includeComments0, String_t* ___inclusiveNamespacesPrefixList1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigExcC14NTransform__ctor_m128464798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		bool L_0 = ___includeComments0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral1118642106, /*hidden argument*/NULL);
		goto IL_0027;
	}

IL_001c:
	{
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral3988398138, /*hidden argument*/NULL);
	}

IL_0027:
	{
		String_t* L_1 = ___inclusiveNamespacesPrefixList1;
		__this->set_inclusiveNamespacesPrefixList_4(L_1);
		bool L_2 = ___includeComments0;
		Hashtable_t1853889766 * L_3 = Transform_get_PropagatedNamespaces_m1327681064(__this, /*hidden argument*/NULL);
		XmlCanonicalizer_t3076776375 * L_4 = (XmlCanonicalizer_t3076776375 *)il2cpp_codegen_object_new(XmlCanonicalizer_t3076776375_il2cpp_TypeInfo_var);
		XmlCanonicalizer__ctor_m2574885826(L_4, L_2, (bool)1, L_3, /*hidden argument*/NULL);
		__this->set_canonicalizer_3(L_4);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigExcC14NTransform_GetInnerXml_m1009922798 (XmlDsigExcC14NTransform_t586418029 * __this, const RuntimeMethod* method)
{
	{
		return (XmlNodeList_t2551693786 *)NULL;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigExcC14NTransform_LoadInnerXml_m1361118370 (XmlDsigExcC14NTransform_t586418029 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigExcC14NWithCommentsTransform::.ctor()
extern "C"  void XmlDsigExcC14NWithCommentsTransform__ctor_m3791089173 (XmlDsigExcC14NWithCommentsTransform_t1461379654 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigExcC14NTransform__ctor_m1384431502(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigXPathTransform::.ctor()
extern "C"  void XmlDsigXPathTransform__ctor_m249722684 (XmlDsigXPathTransform_t1962434658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigXPathTransform__ctor_m249722684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral329648764, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXPathTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigXPathTransform_GetInnerXml_m4293602249 (XmlDsigXPathTransform_t1962434658 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigXPathTransform_GetInnerXml_m4293602249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	XmlDocument_t2837193595 * V_0 = NULL;
	{
		XmlNodeList_t2551693786 * L_0 = __this->get_xpath_3();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		XmlDocument_t2837193595 * L_1 = (XmlDocument_t2837193595 *)il2cpp_codegen_object_new(XmlDocument_t2837193595_il2cpp_TypeInfo_var);
		XmlDocument__ctor_m39773473(L_1, /*hidden argument*/NULL);
		V_0 = L_1;
		XmlDocument_t2837193595 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(65 /* System.Void System.Xml.XmlDocument::LoadXml(System.String) */, L_2, _stringLiteral1330964347);
		XmlDocument_t2837193595 * L_3 = V_0;
		NullCheck(L_3);
		XmlNodeList_t2551693786 * L_4 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_3);
		__this->set_xpath_3(L_4);
	}

IL_0028:
	{
		XmlNodeList_t2551693786 * L_5 = __this->get_xpath_3();
		return L_5;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigXPathTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigXPathTransform_LoadInnerXml_m703395937 (XmlDsigXPathTransform_t1962434658 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigXPathTransform_LoadInnerXml_m703395937_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeList_t2551693786 * L_0 = ___nodeList0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral3779497061, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlDsigXPathTransform_LoadInnerXml_m703395937_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlNodeList_t2551693786 * L_2 = ___nodeList0;
		__this->set_xpath_3(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Security.Cryptography.Xml.XmlDsigXsltTransform::.ctor()
extern "C"  void XmlDsigXsltTransform__ctor_m1284152114 (XmlDsigXsltTransform_t2973394665 * __this, const RuntimeMethod* method)
{
	{
		XmlDsigXsltTransform__ctor_m3403610689(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigXsltTransform::.ctor(System.Boolean)
extern "C"  void XmlDsigXsltTransform__ctor_m3403610689 (XmlDsigXsltTransform_t2973394665 * __this, bool ___includeComments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigXsltTransform__ctor_m3403610689_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform__ctor_m426598508(__this, /*hidden argument*/NULL);
		bool L_0 = ___includeComments0;
		__this->set_comments_3(L_0);
		Transform_set_Algorithm_m2662008040(__this, _stringLiteral1340937441, /*hidden argument*/NULL);
		return;
	}
}
// System.Xml.XmlNodeList System.Security.Cryptography.Xml.XmlDsigXsltTransform::GetInnerXml()
extern "C"  XmlNodeList_t2551693786 * XmlDsigXsltTransform_GetInnerXml_m3039568383 (XmlDsigXsltTransform_t2973394665 * __this, const RuntimeMethod* method)
{
	{
		XmlNodeList_t2551693786 * L_0 = __this->get_xnl_4();
		return L_0;
	}
}
// System.Void System.Security.Cryptography.Xml.XmlDsigXsltTransform::LoadInnerXml(System.Xml.XmlNodeList)
extern "C"  void XmlDsigXsltTransform_LoadInnerXml_m2954929238 (XmlDsigXsltTransform_t2973394665 * __this, XmlNodeList_t2551693786 * ___nodeList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlDsigXsltTransform_LoadInnerXml_m2954929238_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlNodeList_t2551693786 * L_0 = ___nodeList0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CryptographicException_t248831461 * L_1 = (CryptographicException_t248831461 *)il2cpp_codegen_object_new(CryptographicException_t248831461_il2cpp_TypeInfo_var);
		CryptographicException__ctor_m503735289(L_1, _stringLiteral3779497061, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, XmlDsigXsltTransform_LoadInnerXml_m2954929238_RuntimeMethod_var);
	}

IL_0011:
	{
		XmlNodeList_t2551693786 * L_2 = ___nodeList0;
		__this->set_xnl_4(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Xml.XmlElement System.Security.Cryptography.Xml.XmlSignature::GetChildElement(System.Xml.XmlElement,System.String,System.String)
extern "C"  XmlElement_t561603118 * XmlSignature_GetChildElement_m690326908 (RuntimeObject * __this /* static, unused */, XmlElement_t561603118 * ___xel0, String_t* ___element1, String_t* ___ns2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignature_GetChildElement_m690326908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	XmlNode_t3767805227 * V_1 = NULL;
	{
		V_0 = 0;
		goto IL_004d;
	}

IL_0007:
	{
		XmlElement_t561603118 * L_0 = ___xel0;
		NullCheck(L_0);
		XmlNodeList_t2551693786 * L_1 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_0);
		int32_t L_2 = V_0;
		NullCheck(L_1);
		XmlNode_t3767805227 * L_3 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_1, L_2);
		V_1 = L_3;
		XmlNode_t3767805227 * L_4 = V_1;
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_4);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0049;
		}
	}
	{
		XmlNode_t3767805227 * L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_6);
		String_t* L_8 = ___element1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_9 = String_op_Equality_m920492651(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0049;
		}
	}
	{
		XmlNode_t3767805227 * L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_10);
		String_t* L_12 = ___ns2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0049;
		}
	}
	{
		XmlNode_t3767805227 * L_14 = V_1;
		return ((XmlElement_t561603118 *)IsInstClass((RuntimeObject*)L_14, XmlElement_t561603118_il2cpp_TypeInfo_var));
	}

IL_0049:
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_004d:
	{
		int32_t L_16 = V_0;
		XmlElement_t561603118 * L_17 = ___xel0;
		NullCheck(L_17);
		XmlNodeList_t2551693786 * L_18 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_17);
		NullCheck(L_18);
		int32_t L_19 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_18);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0007;
		}
	}
	{
		return (XmlElement_t561603118 *)NULL;
	}
}
// System.Xml.XmlElement[] System.Security.Cryptography.Xml.XmlSignature::GetChildElements(System.Xml.XmlElement,System.String)
extern "C"  XmlElementU5BU5D_t1541675355* XmlSignature_GetChildElements_m123056127 (RuntimeObject * __this /* static, unused */, XmlElement_t561603118 * ___xel0, String_t* ___element1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XmlSignature_GetChildElements_m123056127_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ArrayList_t2718874744 * V_0 = NULL;
	int32_t V_1 = 0;
	XmlNode_t3767805227 * V_2 = NULL;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0058;
	}

IL_000d:
	{
		XmlElement_t561603118 * L_1 = ___xel0;
		NullCheck(L_1);
		XmlNodeList_t2551693786 * L_2 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_1);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		XmlNode_t3767805227 * L_4 = VirtFuncInvoker1< XmlNode_t3767805227 *, int32_t >::Invoke(6 /* System.Xml.XmlNode System.Xml.XmlNodeList::get_ItemOf(System.Int32) */, L_2, L_3);
		V_2 = L_4;
		XmlNode_t3767805227 * L_5 = V_2;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0054;
		}
	}
	{
		XmlNode_t3767805227 * L_7 = V_2;
		NullCheck(L_7);
		String_t* L_8 = VirtFuncInvoker0< String_t* >::Invoke(18 /* System.String System.Xml.XmlNode::get_LocalName() */, L_7);
		String_t* L_9 = ___element1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_10 = String_op_Equality_m920492651(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		XmlNode_t3767805227 * L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(20 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_13 = String_op_Equality_m920492651(NULL /*static, unused*/, L_12, _stringLiteral3726462450, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		ArrayList_t2718874744 * L_14 = V_0;
		XmlNode_t3767805227 * L_15 = V_2;
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_15);
	}

IL_0054:
	{
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0058:
	{
		int32_t L_17 = V_1;
		XmlElement_t561603118 * L_18 = ___xel0;
		NullCheck(L_18);
		XmlNodeList_t2551693786 * L_19 = VirtFuncInvoker0< XmlNodeList_t2551693786 * >::Invoke(9 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_18);
		NullCheck(L_19);
		int32_t L_20 = VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_19);
		if ((((int32_t)L_17) < ((int32_t)L_20)))
		{
			goto IL_000d;
		}
	}
	{
		ArrayList_t2718874744 * L_21 = V_0;
		RuntimeTypeHandle_t3027515415  L_22 = { reinterpret_cast<intptr_t> (XmlElement_t561603118_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_23 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		RuntimeArray * L_24 = VirtFuncInvoker1< RuntimeArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_21, L_23);
		return ((XmlElementU5BU5D_t1541675355*)IsInst((RuntimeObject*)L_24, XmlElementU5BU5D_t1541675355_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
