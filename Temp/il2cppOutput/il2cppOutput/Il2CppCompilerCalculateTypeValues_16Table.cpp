﻿#include "il2cpp-config.h"

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


// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t2114160833;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1542168550;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// Mono.Security.X509.X509Stores
struct X509Stores_t1373936238;
// Mono.Security.X509.X509Store
struct X509Store_t2777415284;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.IO.Stream
struct Stream_t1273022909;
// Mono.Security.Protocol.Tls.Context
struct Context_t3971234707;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Exception
struct Exception_t;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3696583168;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Security.Cryptography.RSA
struct RSA_t2385438082;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3218159896;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1432317219;
// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t2702294159;
// System.Void
struct Void_t1185182177;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3759049701;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// Mono.Math.BigInteger
struct BigInteger_t2902905090;
// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t3064139578;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t489243025;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t4144396432;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2486039503;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2199972650;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t1129639304;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t2365453965;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t2733259762;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t112861511;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t4091668218;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3743405224;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3240194217;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t1842476440;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1669436515;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3914624661;
// System.EventArgs
struct EventArgs_t3591816995;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t609554709;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t932037087;
// System.Security.Cryptography.DSA
struct DSA_t2386879874;




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
#ifndef PKCS7_T1860834339_H
#define PKCS7_T1860834339_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7
struct  PKCS7_t1860834339  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS7_T1860834339_H
#ifndef X509EXTENSION_T3173393653_H
#define X509EXTENSION_T3173393653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Extension
struct  X509Extension_t3173393653  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Extension::extnOid
	String_t* ___extnOid_0;
	// System.Boolean Mono.Security.X509.X509Extension::extnCritical
	bool ___extnCritical_1;
	// Mono.Security.ASN1 Mono.Security.X509.X509Extension::extnValue
	ASN1_t2114160833 * ___extnValue_2;

public:
	inline static int32_t get_offset_of_extnOid_0() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnOid_0)); }
	inline String_t* get_extnOid_0() const { return ___extnOid_0; }
	inline String_t** get_address_of_extnOid_0() { return &___extnOid_0; }
	inline void set_extnOid_0(String_t* value)
	{
		___extnOid_0 = value;
		Il2CppCodeGenWriteBarrier((&___extnOid_0), value);
	}

	inline static int32_t get_offset_of_extnCritical_1() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnCritical_1)); }
	inline bool get_extnCritical_1() const { return ___extnCritical_1; }
	inline bool* get_address_of_extnCritical_1() { return &___extnCritical_1; }
	inline void set_extnCritical_1(bool value)
	{
		___extnCritical_1 = value;
	}

	inline static int32_t get_offset_of_extnValue_2() { return static_cast<int32_t>(offsetof(X509Extension_t3173393653, ___extnValue_2)); }
	inline ASN1_t2114160833 * get_extnValue_2() const { return ___extnValue_2; }
	inline ASN1_t2114160833 ** get_address_of_extnValue_2() { return &___extnValue_2; }
	inline void set_extnValue_2(ASN1_t2114160833 * value)
	{
		___extnValue_2 = value;
		Il2CppCodeGenWriteBarrier((&___extnValue_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSION_T3173393653_H
#ifndef X509STORE_T2777415284_H
#define X509STORE_T2777415284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Store
struct  X509Store_t2777415284  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Store::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Store::_certificates
	X509CertificateCollection_t1542168550 * ____certificates_1;
	// System.Collections.ArrayList Mono.Security.X509.X509Store::_crls
	ArrayList_t2718874744 * ____crls_2;
	// System.Boolean Mono.Security.X509.X509Store::_crl
	bool ____crl_3;
	// System.String Mono.Security.X509.X509Store::_name
	String_t* ____name_4;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__certificates_1() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____certificates_1)); }
	inline X509CertificateCollection_t1542168550 * get__certificates_1() const { return ____certificates_1; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__certificates_1() { return &____certificates_1; }
	inline void set__certificates_1(X509CertificateCollection_t1542168550 * value)
	{
		____certificates_1 = value;
		Il2CppCodeGenWriteBarrier((&____certificates_1), value);
	}

	inline static int32_t get_offset_of__crls_2() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____crls_2)); }
	inline ArrayList_t2718874744 * get__crls_2() const { return ____crls_2; }
	inline ArrayList_t2718874744 ** get_address_of__crls_2() { return &____crls_2; }
	inline void set__crls_2(ArrayList_t2718874744 * value)
	{
		____crls_2 = value;
		Il2CppCodeGenWriteBarrier((&____crls_2), value);
	}

	inline static int32_t get_offset_of__crl_3() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____crl_3)); }
	inline bool get__crl_3() const { return ____crl_3; }
	inline bool* get_address_of__crl_3() { return &____crl_3; }
	inline void set__crl_3(bool value)
	{
		____crl_3 = value;
	}

	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(X509Store_t2777415284, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier((&____name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORE_T2777415284_H
#ifndef X509STOREMANAGER_T1046782376_H
#define X509STOREMANAGER_T1046782376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509StoreManager
struct  X509StoreManager_t1046782376  : public RuntimeObject
{
public:

public:
};

struct X509StoreManager_t1046782376_StaticFields
{
public:
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_userStore
	X509Stores_t1373936238 * ____userStore_0;
	// Mono.Security.X509.X509Stores Mono.Security.X509.X509StoreManager::_machineStore
	X509Stores_t1373936238 * ____machineStore_1;

public:
	inline static int32_t get_offset_of__userStore_0() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782376_StaticFields, ____userStore_0)); }
	inline X509Stores_t1373936238 * get__userStore_0() const { return ____userStore_0; }
	inline X509Stores_t1373936238 ** get_address_of__userStore_0() { return &____userStore_0; }
	inline void set__userStore_0(X509Stores_t1373936238 * value)
	{
		____userStore_0 = value;
		Il2CppCodeGenWriteBarrier((&____userStore_0), value);
	}

	inline static int32_t get_offset_of__machineStore_1() { return static_cast<int32_t>(offsetof(X509StoreManager_t1046782376_StaticFields, ____machineStore_1)); }
	inline X509Stores_t1373936238 * get__machineStore_1() const { return ____machineStore_1; }
	inline X509Stores_t1373936238 ** get_address_of__machineStore_1() { return &____machineStore_1; }
	inline void set__machineStore_1(X509Stores_t1373936238 * value)
	{
		____machineStore_1 = value;
		Il2CppCodeGenWriteBarrier((&____machineStore_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STOREMANAGER_T1046782376_H
#ifndef X509STORES_T1373936238_H
#define X509STORES_T1373936238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores
struct  X509Stores_t1373936238  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Stores::_storePath
	String_t* ____storePath_0;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_personal
	X509Store_t2777415284 * ____personal_1;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_other
	X509Store_t2777415284 * ____other_2;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_intermediate
	X509Store_t2777415284 * ____intermediate_3;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_trusted
	X509Store_t2777415284 * ____trusted_4;
	// Mono.Security.X509.X509Store Mono.Security.X509.X509Stores::_untrusted
	X509Store_t2777415284 * ____untrusted_5;

public:
	inline static int32_t get_offset_of__storePath_0() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____storePath_0)); }
	inline String_t* get__storePath_0() const { return ____storePath_0; }
	inline String_t** get_address_of__storePath_0() { return &____storePath_0; }
	inline void set__storePath_0(String_t* value)
	{
		____storePath_0 = value;
		Il2CppCodeGenWriteBarrier((&____storePath_0), value);
	}

	inline static int32_t get_offset_of__personal_1() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____personal_1)); }
	inline X509Store_t2777415284 * get__personal_1() const { return ____personal_1; }
	inline X509Store_t2777415284 ** get_address_of__personal_1() { return &____personal_1; }
	inline void set__personal_1(X509Store_t2777415284 * value)
	{
		____personal_1 = value;
		Il2CppCodeGenWriteBarrier((&____personal_1), value);
	}

	inline static int32_t get_offset_of__other_2() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____other_2)); }
	inline X509Store_t2777415284 * get__other_2() const { return ____other_2; }
	inline X509Store_t2777415284 ** get_address_of__other_2() { return &____other_2; }
	inline void set__other_2(X509Store_t2777415284 * value)
	{
		____other_2 = value;
		Il2CppCodeGenWriteBarrier((&____other_2), value);
	}

	inline static int32_t get_offset_of__intermediate_3() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____intermediate_3)); }
	inline X509Store_t2777415284 * get__intermediate_3() const { return ____intermediate_3; }
	inline X509Store_t2777415284 ** get_address_of__intermediate_3() { return &____intermediate_3; }
	inline void set__intermediate_3(X509Store_t2777415284 * value)
	{
		____intermediate_3 = value;
		Il2CppCodeGenWriteBarrier((&____intermediate_3), value);
	}

	inline static int32_t get_offset_of__trusted_4() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____trusted_4)); }
	inline X509Store_t2777415284 * get__trusted_4() const { return ____trusted_4; }
	inline X509Store_t2777415284 ** get_address_of__trusted_4() { return &____trusted_4; }
	inline void set__trusted_4(X509Store_t2777415284 * value)
	{
		____trusted_4 = value;
		Il2CppCodeGenWriteBarrier((&____trusted_4), value);
	}

	inline static int32_t get_offset_of__untrusted_5() { return static_cast<int32_t>(offsetof(X509Stores_t1373936238, ____untrusted_5)); }
	inline X509Store_t2777415284 * get__untrusted_5() const { return ____untrusted_5; }
	inline X509Store_t2777415284 ** get_address_of__untrusted_5() { return &____untrusted_5; }
	inline void set__untrusted_5(X509Store_t2777415284 * value)
	{
		____untrusted_5 = value;
		Il2CppCodeGenWriteBarrier((&____untrusted_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509STORES_T1373936238_H
#ifndef NAMES_T1325641082_H
#define NAMES_T1325641082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Stores/Names
struct  Names_t1325641082  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMES_T1325641082_H
#ifndef X520_T3325039438_H
#define X520_T3325039438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520
struct  X520_t3325039438  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X520_T3325039438_H
#ifndef ATTRIBUTETYPEANDVALUE_T3245693428_H
#define ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/AttributeTypeAndValue
struct  AttributeTypeAndValue_t3245693428  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((&___oid_0), value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___attrValue_1), value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_t3245693428, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETYPEANDVALUE_T3245693428_H
#ifndef GENERALNAMES_T2702294159_H
#define GENERALNAMES_T2702294159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t2702294159  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t2718874744 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t2718874744 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t2718874744 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t2718874744 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t2718874744 * ___ipAddr_4;

public:
	inline static int32_t get_offset_of_rfc822Name_0() { return static_cast<int32_t>(offsetof(GeneralNames_t2702294159, ___rfc822Name_0)); }
	inline ArrayList_t2718874744 * get_rfc822Name_0() const { return ___rfc822Name_0; }
	inline ArrayList_t2718874744 ** get_address_of_rfc822Name_0() { return &___rfc822Name_0; }
	inline void set_rfc822Name_0(ArrayList_t2718874744 * value)
	{
		___rfc822Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___rfc822Name_0), value);
	}

	inline static int32_t get_offset_of_dnsName_1() { return static_cast<int32_t>(offsetof(GeneralNames_t2702294159, ___dnsName_1)); }
	inline ArrayList_t2718874744 * get_dnsName_1() const { return ___dnsName_1; }
	inline ArrayList_t2718874744 ** get_address_of_dnsName_1() { return &___dnsName_1; }
	inline void set_dnsName_1(ArrayList_t2718874744 * value)
	{
		___dnsName_1 = value;
		Il2CppCodeGenWriteBarrier((&___dnsName_1), value);
	}

	inline static int32_t get_offset_of_directoryNames_2() { return static_cast<int32_t>(offsetof(GeneralNames_t2702294159, ___directoryNames_2)); }
	inline ArrayList_t2718874744 * get_directoryNames_2() const { return ___directoryNames_2; }
	inline ArrayList_t2718874744 ** get_address_of_directoryNames_2() { return &___directoryNames_2; }
	inline void set_directoryNames_2(ArrayList_t2718874744 * value)
	{
		___directoryNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___directoryNames_2), value);
	}

	inline static int32_t get_offset_of_uris_3() { return static_cast<int32_t>(offsetof(GeneralNames_t2702294159, ___uris_3)); }
	inline ArrayList_t2718874744 * get_uris_3() const { return ___uris_3; }
	inline ArrayList_t2718874744 ** get_address_of_uris_3() { return &___uris_3; }
	inline void set_uris_3(ArrayList_t2718874744 * value)
	{
		___uris_3 = value;
		Il2CppCodeGenWriteBarrier((&___uris_3), value);
	}

	inline static int32_t get_offset_of_ipAddr_4() { return static_cast<int32_t>(offsetof(GeneralNames_t2702294159, ___ipAddr_4)); }
	inline ArrayList_t2718874744 * get_ipAddr_4() const { return ___ipAddr_4; }
	inline ArrayList_t2718874744 ** get_address_of_ipAddr_4() { return &___ipAddr_4; }
	inline void set_ipAddr_4(ArrayList_t2718874744 * value)
	{
		___ipAddr_4 = value;
		Il2CppCodeGenWriteBarrier((&___ipAddr_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERALNAMES_T2702294159_H
#ifndef CHALLENGERESPONSE_T399452983_H
#define CHALLENGERESPONSE_T399452983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.ChallengeResponse
struct  ChallengeResponse_t399452983  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Ntlm.ChallengeResponse::_disposed
	bool ____disposed_2;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_challenge
	ByteU5BU5D_t4116647657* ____challenge_3;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_lmpwd
	ByteU5BU5D_t4116647657* ____lmpwd_4;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::_ntpwd
	ByteU5BU5D_t4116647657* ____ntpwd_5;

public:
	inline static int32_t get_offset_of__disposed_2() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983, ____disposed_2)); }
	inline bool get__disposed_2() const { return ____disposed_2; }
	inline bool* get_address_of__disposed_2() { return &____disposed_2; }
	inline void set__disposed_2(bool value)
	{
		____disposed_2 = value;
	}

	inline static int32_t get_offset_of__challenge_3() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983, ____challenge_3)); }
	inline ByteU5BU5D_t4116647657* get__challenge_3() const { return ____challenge_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__challenge_3() { return &____challenge_3; }
	inline void set__challenge_3(ByteU5BU5D_t4116647657* value)
	{
		____challenge_3 = value;
		Il2CppCodeGenWriteBarrier((&____challenge_3), value);
	}

	inline static int32_t get_offset_of__lmpwd_4() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983, ____lmpwd_4)); }
	inline ByteU5BU5D_t4116647657* get__lmpwd_4() const { return ____lmpwd_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__lmpwd_4() { return &____lmpwd_4; }
	inline void set__lmpwd_4(ByteU5BU5D_t4116647657* value)
	{
		____lmpwd_4 = value;
		Il2CppCodeGenWriteBarrier((&____lmpwd_4), value);
	}

	inline static int32_t get_offset_of__ntpwd_5() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983, ____ntpwd_5)); }
	inline ByteU5BU5D_t4116647657* get__ntpwd_5() const { return ____ntpwd_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__ntpwd_5() { return &____ntpwd_5; }
	inline void set__ntpwd_5(ByteU5BU5D_t4116647657* value)
	{
		____ntpwd_5 = value;
		Il2CppCodeGenWriteBarrier((&____ntpwd_5), value);
	}
};

struct ChallengeResponse_t399452983_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::magic
	ByteU5BU5D_t4116647657* ___magic_0;
	// System.Byte[] Mono.Security.Protocol.Ntlm.ChallengeResponse::nullEncMagic
	ByteU5BU5D_t4116647657* ___nullEncMagic_1;

public:
	inline static int32_t get_offset_of_magic_0() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983_StaticFields, ___magic_0)); }
	inline ByteU5BU5D_t4116647657* get_magic_0() const { return ___magic_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_magic_0() { return &___magic_0; }
	inline void set_magic_0(ByteU5BU5D_t4116647657* value)
	{
		___magic_0 = value;
		Il2CppCodeGenWriteBarrier((&___magic_0), value);
	}

	inline static int32_t get_offset_of_nullEncMagic_1() { return static_cast<int32_t>(offsetof(ChallengeResponse_t399452983_StaticFields, ___nullEncMagic_1)); }
	inline ByteU5BU5D_t4116647657* get_nullEncMagic_1() const { return ___nullEncMagic_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_nullEncMagic_1() { return &___nullEncMagic_1; }
	inline void set_nullEncMagic_1(ByteU5BU5D_t4116647657* value)
	{
		___nullEncMagic_1 = value;
		Il2CppCodeGenWriteBarrier((&___nullEncMagic_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHALLENGERESPONSE_T399452983_H
#ifndef CIPHERSUITEFACTORY_T3316559455_H
#define CIPHERSUITEFACTORY_T3316559455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteFactory
struct  CipherSuiteFactory_t3316559455  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITEFACTORY_T3316559455_H
#ifndef CLIENTSESSIONCACHE_T2353595803_H
#define CLIENTSESSIONCACHE_T2353595803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionCache
struct  ClientSessionCache_t2353595803  : public RuntimeObject
{
public:

public:
};

struct ClientSessionCache_t2353595803_StaticFields
{
public:
	// System.Collections.Hashtable Mono.Security.Protocol.Tls.ClientSessionCache::cache
	Hashtable_t1853889766 * ___cache_0;
	// System.Object Mono.Security.Protocol.Tls.ClientSessionCache::locker
	RuntimeObject * ___locker_1;

public:
	inline static int32_t get_offset_of_cache_0() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2353595803_StaticFields, ___cache_0)); }
	inline Hashtable_t1853889766 * get_cache_0() const { return ___cache_0; }
	inline Hashtable_t1853889766 ** get_address_of_cache_0() { return &___cache_0; }
	inline void set_cache_0(Hashtable_t1853889766 * value)
	{
		___cache_0 = value;
		Il2CppCodeGenWriteBarrier((&___cache_0), value);
	}

	inline static int32_t get_offset_of_locker_1() { return static_cast<int32_t>(offsetof(ClientSessionCache_t2353595803_StaticFields, ___locker_1)); }
	inline RuntimeObject * get_locker_1() const { return ___locker_1; }
	inline RuntimeObject ** get_address_of_locker_1() { return &___locker_1; }
	inline void set_locker_1(RuntimeObject * value)
	{
		___locker_1 = value;
		Il2CppCodeGenWriteBarrier((&___locker_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONCACHE_T2353595803_H
#ifndef DEBUGHELPER_T1397895286_H
#define DEBUGHELPER_T1397895286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.DebugHelper
struct  DebugHelper_t1397895286  : public RuntimeObject
{
public:

public:
};

struct DebugHelper_t1397895286_StaticFields
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.DebugHelper::isInitialized
	bool ___isInitialized_0;

public:
	inline static int32_t get_offset_of_isInitialized_0() { return static_cast<int32_t>(offsetof(DebugHelper_t1397895286_StaticFields, ___isInitialized_0)); }
	inline bool get_isInitialized_0() const { return ___isInitialized_0; }
	inline bool* get_address_of_isInitialized_0() { return &___isInitialized_0; }
	inline void set_isInitialized_0(bool value)
	{
		___isInitialized_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEBUGHELPER_T1397895286_H
#ifndef RECORDPROTOCOL_T3759049701_H
#define RECORDPROTOCOL_T3759049701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t3759049701  : public RuntimeObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t1273022909 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t3971234707 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t3759049701, ___innerStream_1)); }
	inline Stream_t1273022909 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t1273022909 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t1273022909 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t3759049701, ___context_2)); }
	inline Context_t3971234707 * get_context_2() const { return ___context_2; }
	inline Context_t3971234707 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t3971234707 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier((&___context_2), value);
	}
};

struct RecordProtocol_t3759049701_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t451242010 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t3759049701_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t451242010 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t451242010 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t451242010 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECORDPROTOCOL_T3759049701_H
#ifndef RECEIVERECORDASYNCRESULT_T3680907657_H
#define RECEIVERECORDASYNCRESULT_T3680907657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct  ReceiveRecordAsyncResult_t3680907657  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userCallback
	AsyncCallback_t3962456242 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_asyncException
	Exception_t * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::handle
	ManualResetEvent_t451242010 * ___handle_4;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_resultingBuffer
	ByteU5BU5D_t4116647657* ____resultingBuffer_5;
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_record
	Stream_t1273022909 * ____record_6;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::completed
	bool ___completed_7;
	// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::_initialBuffer
	ByteU5BU5D_t4116647657* ____initialBuffer_8;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____userCallback_1)); }
	inline AsyncCallback_t3962456242 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t3962456242 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t3962456242 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____asyncException_3)); }
	inline Exception_t * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ___handle_4)); }
	inline ManualResetEvent_t451242010 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t451242010 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t451242010 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__resultingBuffer_5() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____resultingBuffer_5)); }
	inline ByteU5BU5D_t4116647657* get__resultingBuffer_5() const { return ____resultingBuffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__resultingBuffer_5() { return &____resultingBuffer_5; }
	inline void set__resultingBuffer_5(ByteU5BU5D_t4116647657* value)
	{
		____resultingBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&____resultingBuffer_5), value);
	}

	inline static int32_t get_offset_of__record_6() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____record_6)); }
	inline Stream_t1273022909 * get__record_6() const { return ____record_6; }
	inline Stream_t1273022909 ** get_address_of__record_6() { return &____record_6; }
	inline void set__record_6(Stream_t1273022909 * value)
	{
		____record_6 = value;
		Il2CppCodeGenWriteBarrier((&____record_6), value);
	}

	inline static int32_t get_offset_of_completed_7() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ___completed_7)); }
	inline bool get_completed_7() const { return ___completed_7; }
	inline bool* get_address_of_completed_7() { return &___completed_7; }
	inline void set_completed_7(bool value)
	{
		___completed_7 = value;
	}

	inline static int32_t get_offset_of__initialBuffer_8() { return static_cast<int32_t>(offsetof(ReceiveRecordAsyncResult_t3680907657, ____initialBuffer_8)); }
	inline ByteU5BU5D_t4116647657* get__initialBuffer_8() const { return ____initialBuffer_8; }
	inline ByteU5BU5D_t4116647657** get_address_of__initialBuffer_8() { return &____initialBuffer_8; }
	inline void set__initialBuffer_8(ByteU5BU5D_t4116647657* value)
	{
		____initialBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((&____initialBuffer_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECEIVERECORDASYNCRESULT_T3680907657_H
#ifndef SENDRECORDASYNCRESULT_T3718352467_H
#define SENDRECORDASYNCRESULT_T3718352467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult
struct  SendRecordAsyncResult_t3718352467  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userCallback
	AsyncCallback_t3962456242 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_asyncException
	Exception_t * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::handle
	ManualResetEvent_t451242010 * ___handle_4;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::_message
	HandshakeMessage_t3696583168 * ____message_5;
	// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/SendRecordAsyncResult::completed
	bool ___completed_6;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((&___locker_0), value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ____userCallback_1)); }
	inline AsyncCallback_t3962456242 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t3962456242 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t3962456242 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&____userCallback_1), value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((&____userState_2), value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ____asyncException_3)); }
	inline Exception_t * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncException_3), value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ___handle_4)); }
	inline ManualResetEvent_t451242010 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t451242010 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t451242010 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((&___handle_4), value);
	}

	inline static int32_t get_offset_of__message_5() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ____message_5)); }
	inline HandshakeMessage_t3696583168 * get__message_5() const { return ____message_5; }
	inline HandshakeMessage_t3696583168 ** get_address_of__message_5() { return &____message_5; }
	inline void set__message_5(HandshakeMessage_t3696583168 * value)
	{
		____message_5 = value;
		Il2CppCodeGenWriteBarrier((&____message_5), value);
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(SendRecordAsyncResult_t3718352467, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDRECORDASYNCRESULT_T3718352467_H
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
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
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
#endif // COLLECTIONBASE_T2727926298_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t2681190756  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T2681190756_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#define ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t3486936014  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T3486936014_H
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
#ifndef X509CERTIFICATEENUMERATOR_T3515934698_H
#define X509CERTIFICATEENUMERATOR_T3515934698_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct  X509CertificateEnumerator_t3515934698  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_t3515934698, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEENUMERATOR_T3515934698_H
#ifndef X509BUILDER_T1341539432_H
#define X509BUILDER_T1341539432_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Builder
struct  X509Builder_t1341539432  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Builder::hashName
	String_t* ___hashName_1;

public:
	inline static int32_t get_offset_of_hashName_1() { return static_cast<int32_t>(offsetof(X509Builder_t1341539432, ___hashName_1)); }
	inline String_t* get_hashName_1() const { return ___hashName_1; }
	inline String_t** get_address_of_hashName_1() { return &___hashName_1; }
	inline void set_hashName_1(String_t* value)
	{
		___hashName_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashName_1), value);
	}
};

struct X509Builder_t1341539432_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Builder::<>f__switch$mapE
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapE_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_2() { return static_cast<int32_t>(offsetof(X509Builder_t1341539432_StaticFields, ___U3CU3Ef__switchU24mapE_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapE_2() const { return ___U3CU3Ef__switchU24mapE_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapE_2() { return &___U3CU3Ef__switchU24mapE_2; }
	inline void set_U3CU3Ef__switchU24mapE_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapE_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapE_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509BUILDER_T1341539432_H
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
#ifndef PKCS1_T1505584677_H
#define PKCS1_T1505584677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS1
struct  PKCS1_t1505584677  : public RuntimeObject
{
public:

public:
};

struct PKCS1_t1505584677_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA1
	ByteU5BU5D_t4116647657* ___emptySHA1_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA256
	ByteU5BU5D_t4116647657* ___emptySHA256_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA384
	ByteU5BU5D_t4116647657* ___emptySHA384_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS1::emptySHA512
	ByteU5BU5D_t4116647657* ___emptySHA512_3;

public:
	inline static int32_t get_offset_of_emptySHA1_0() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA1_0)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA1_0() const { return ___emptySHA1_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA1_0() { return &___emptySHA1_0; }
	inline void set_emptySHA1_0(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA1_0 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA1_0), value);
	}

	inline static int32_t get_offset_of_emptySHA256_1() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA256_1)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA256_1() const { return ___emptySHA256_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA256_1() { return &___emptySHA256_1; }
	inline void set_emptySHA256_1(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA256_1 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA256_1), value);
	}

	inline static int32_t get_offset_of_emptySHA384_2() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA384_2)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA384_2() const { return ___emptySHA384_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA384_2() { return &___emptySHA384_2; }
	inline void set_emptySHA384_2(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA384_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA384_2), value);
	}

	inline static int32_t get_offset_of_emptySHA512_3() { return static_cast<int32_t>(offsetof(PKCS1_t1505584677_StaticFields, ___emptySHA512_3)); }
	inline ByteU5BU5D_t4116647657* get_emptySHA512_3() const { return ___emptySHA512_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_emptySHA512_3() { return &___emptySHA512_3; }
	inline void set_emptySHA512_3(ByteU5BU5D_t4116647657* value)
	{
		___emptySHA512_3 = value;
		Il2CppCodeGenWriteBarrier((&___emptySHA512_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS1_T1505584677_H
#ifndef KEYBUILDER_T2049230355_H
#define KEYBUILDER_T2049230355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.KeyBuilder
struct  KeyBuilder_t2049230355  : public RuntimeObject
{
public:

public:
};

struct KeyBuilder_t2049230355_StaticFields
{
public:
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.KeyBuilder::rng
	RandomNumberGenerator_t386037858 * ___rng_0;

public:
	inline static int32_t get_offset_of_rng_0() { return static_cast<int32_t>(offsetof(KeyBuilder_t2049230355_StaticFields, ___rng_0)); }
	inline RandomNumberGenerator_t386037858 * get_rng_0() const { return ___rng_0; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_rng_0() { return &___rng_0; }
	inline void set_rng_0(RandomNumberGenerator_t386037858 * value)
	{
		___rng_0 = value;
		Il2CppCodeGenWriteBarrier((&___rng_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYBUILDER_T2049230355_H
#ifndef ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#define ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
struct  EncryptedPrivateKeyInfo_t862116836  : public RuntimeObject
{
public:
	// System.String Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_algorithm
	String_t* ____algorithm_0;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_salt
	ByteU5BU5D_t4116647657* ____salt_1;
	// System.Int32 Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_iterations
	int32_t ____iterations_2;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo::_data
	ByteU5BU5D_t4116647657* ____data_3;

public:
	inline static int32_t get_offset_of__algorithm_0() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____algorithm_0)); }
	inline String_t* get__algorithm_0() const { return ____algorithm_0; }
	inline String_t** get_address_of__algorithm_0() { return &____algorithm_0; }
	inline void set__algorithm_0(String_t* value)
	{
		____algorithm_0 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_0), value);
	}

	inline static int32_t get_offset_of__salt_1() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____salt_1)); }
	inline ByteU5BU5D_t4116647657* get__salt_1() const { return ____salt_1; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_1() { return &____salt_1; }
	inline void set__salt_1(ByteU5BU5D_t4116647657* value)
	{
		____salt_1 = value;
		Il2CppCodeGenWriteBarrier((&____salt_1), value);
	}

	inline static int32_t get_offset_of__iterations_2() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____iterations_2)); }
	inline int32_t get__iterations_2() const { return ____iterations_2; }
	inline int32_t* get_address_of__iterations_2() { return &____iterations_2; }
	inline void set__iterations_2(int32_t value)
	{
		____iterations_2 = value;
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(EncryptedPrivateKeyInfo_t862116836, ____data_3)); }
	inline ByteU5BU5D_t4116647657* get__data_3() const { return ____data_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(ByteU5BU5D_t4116647657* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDPRIVATEKEYINFO_T862116836_H
#ifndef CRYPTOCONVERT_T610933157_H
#define CRYPTOCONVERT_T610933157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.CryptoConvert
struct  CryptoConvert_t610933157  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONVERT_T610933157_H
#ifndef PKCS5_T784850245_H
#define PKCS5_T784850245_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS5
struct  PKCS5_t784850245  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS5_T784850245_H
#ifndef PKCS9_T2785795397_H
#define PKCS9_T2785795397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS9
struct  PKCS9_t2785795397  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS9_T2785795397_H
#ifndef SAFEBAG_T3961248200_H
#define SAFEBAG_T3961248200_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.SafeBag
struct  SafeBag_t3961248200  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.SafeBag::_bagOID
	String_t* ____bagOID_0;
	// Mono.Security.ASN1 Mono.Security.X509.SafeBag::_asn1
	ASN1_t2114160833 * ____asn1_1;

public:
	inline static int32_t get_offset_of__bagOID_0() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____bagOID_0)); }
	inline String_t* get__bagOID_0() const { return ____bagOID_0; }
	inline String_t** get_address_of__bagOID_0() { return &____bagOID_0; }
	inline void set__bagOID_0(String_t* value)
	{
		____bagOID_0 = value;
		Il2CppCodeGenWriteBarrier((&____bagOID_0), value);
	}

	inline static int32_t get_offset_of__asn1_1() { return static_cast<int32_t>(offsetof(SafeBag_t3961248200, ____asn1_1)); }
	inline ASN1_t2114160833 * get__asn1_1() const { return ____asn1_1; }
	inline ASN1_t2114160833 ** get_address_of__asn1_1() { return &____asn1_1; }
	inline void set__asn1_1(ASN1_t2114160833 * value)
	{
		____asn1_1 = value;
		Il2CppCodeGenWriteBarrier((&____asn1_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAFEBAG_T3961248200_H
#ifndef PKCS12_T4101533061_H
#define PKCS12_T4101533061_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12
struct  PKCS12_t4101533061  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12::_password
	ByteU5BU5D_t4116647657* ____password_17;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_keyBags
	ArrayList_t2718874744 * ____keyBags_18;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_secretBags
	ArrayList_t2718874744 * ____secretBags_19;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::_certs
	X509CertificateCollection_t1542168550 * ____certs_20;
	// System.Boolean Mono.Security.X509.PKCS12::_keyBagsChanged
	bool ____keyBagsChanged_21;
	// System.Boolean Mono.Security.X509.PKCS12::_secretBagsChanged
	bool ____secretBagsChanged_22;
	// System.Boolean Mono.Security.X509.PKCS12::_certsChanged
	bool ____certsChanged_23;
	// System.Int32 Mono.Security.X509.PKCS12::_iterations
	int32_t ____iterations_24;
	// System.Collections.ArrayList Mono.Security.X509.PKCS12::_safeBags
	ArrayList_t2718874744 * ____safeBags_25;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::_rng
	RandomNumberGenerator_t386037858 * ____rng_26;

public:
	inline static int32_t get_offset_of__password_17() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____password_17)); }
	inline ByteU5BU5D_t4116647657* get__password_17() const { return ____password_17; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_17() { return &____password_17; }
	inline void set__password_17(ByteU5BU5D_t4116647657* value)
	{
		____password_17 = value;
		Il2CppCodeGenWriteBarrier((&____password_17), value);
	}

	inline static int32_t get_offset_of__keyBags_18() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBags_18)); }
	inline ArrayList_t2718874744 * get__keyBags_18() const { return ____keyBags_18; }
	inline ArrayList_t2718874744 ** get_address_of__keyBags_18() { return &____keyBags_18; }
	inline void set__keyBags_18(ArrayList_t2718874744 * value)
	{
		____keyBags_18 = value;
		Il2CppCodeGenWriteBarrier((&____keyBags_18), value);
	}

	inline static int32_t get_offset_of__secretBags_19() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBags_19)); }
	inline ArrayList_t2718874744 * get__secretBags_19() const { return ____secretBags_19; }
	inline ArrayList_t2718874744 ** get_address_of__secretBags_19() { return &____secretBags_19; }
	inline void set__secretBags_19(ArrayList_t2718874744 * value)
	{
		____secretBags_19 = value;
		Il2CppCodeGenWriteBarrier((&____secretBags_19), value);
	}

	inline static int32_t get_offset_of__certs_20() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certs_20)); }
	inline X509CertificateCollection_t1542168550 * get__certs_20() const { return ____certs_20; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__certs_20() { return &____certs_20; }
	inline void set__certs_20(X509CertificateCollection_t1542168550 * value)
	{
		____certs_20 = value;
		Il2CppCodeGenWriteBarrier((&____certs_20), value);
	}

	inline static int32_t get_offset_of__keyBagsChanged_21() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____keyBagsChanged_21)); }
	inline bool get__keyBagsChanged_21() const { return ____keyBagsChanged_21; }
	inline bool* get_address_of__keyBagsChanged_21() { return &____keyBagsChanged_21; }
	inline void set__keyBagsChanged_21(bool value)
	{
		____keyBagsChanged_21 = value;
	}

	inline static int32_t get_offset_of__secretBagsChanged_22() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____secretBagsChanged_22)); }
	inline bool get__secretBagsChanged_22() const { return ____secretBagsChanged_22; }
	inline bool* get_address_of__secretBagsChanged_22() { return &____secretBagsChanged_22; }
	inline void set__secretBagsChanged_22(bool value)
	{
		____secretBagsChanged_22 = value;
	}

	inline static int32_t get_offset_of__certsChanged_23() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____certsChanged_23)); }
	inline bool get__certsChanged_23() const { return ____certsChanged_23; }
	inline bool* get_address_of__certsChanged_23() { return &____certsChanged_23; }
	inline void set__certsChanged_23(bool value)
	{
		____certsChanged_23 = value;
	}

	inline static int32_t get_offset_of__iterations_24() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____iterations_24)); }
	inline int32_t get__iterations_24() const { return ____iterations_24; }
	inline int32_t* get_address_of__iterations_24() { return &____iterations_24; }
	inline void set__iterations_24(int32_t value)
	{
		____iterations_24 = value;
	}

	inline static int32_t get_offset_of__safeBags_25() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____safeBags_25)); }
	inline ArrayList_t2718874744 * get__safeBags_25() const { return ____safeBags_25; }
	inline ArrayList_t2718874744 ** get_address_of__safeBags_25() { return &____safeBags_25; }
	inline void set__safeBags_25(ArrayList_t2718874744 * value)
	{
		____safeBags_25 = value;
		Il2CppCodeGenWriteBarrier((&____safeBags_25), value);
	}

	inline static int32_t get_offset_of__rng_26() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061, ____rng_26)); }
	inline RandomNumberGenerator_t386037858 * get__rng_26() const { return ____rng_26; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_26() { return &____rng_26; }
	inline void set__rng_26(RandomNumberGenerator_t386037858 * value)
	{
		____rng_26 = value;
		Il2CppCodeGenWriteBarrier((&____rng_26), value);
	}
};

struct PKCS12_t4101533061_StaticFields
{
public:
	// System.Int32 Mono.Security.X509.PKCS12::recommendedIterationCount
	int32_t ___recommendedIterationCount_16;
	// System.Int32 Mono.Security.X509.PKCS12::password_max_length
	int32_t ___password_max_length_27;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map5
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map5_28;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map6
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map6_29;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map7
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map7_30;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map8
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map8_31;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$map9
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map9_32;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapA
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapA_33;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapB
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapB_34;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.PKCS12::<>f__switch$mapC
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapC_35;

public:
	inline static int32_t get_offset_of_recommendedIterationCount_16() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___recommendedIterationCount_16)); }
	inline int32_t get_recommendedIterationCount_16() const { return ___recommendedIterationCount_16; }
	inline int32_t* get_address_of_recommendedIterationCount_16() { return &___recommendedIterationCount_16; }
	inline void set_recommendedIterationCount_16(int32_t value)
	{
		___recommendedIterationCount_16 = value;
	}

	inline static int32_t get_offset_of_password_max_length_27() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___password_max_length_27)); }
	inline int32_t get_password_max_length_27() const { return ___password_max_length_27; }
	inline int32_t* get_address_of_password_max_length_27() { return &___password_max_length_27; }
	inline void set_password_max_length_27(int32_t value)
	{
		___password_max_length_27 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map5_28() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24map5_28)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map5_28() const { return ___U3CU3Ef__switchU24map5_28; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map5_28() { return &___U3CU3Ef__switchU24map5_28; }
	inline void set_U3CU3Ef__switchU24map5_28(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map5_28 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map5_28), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map6_29() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24map6_29)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map6_29() const { return ___U3CU3Ef__switchU24map6_29; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map6_29() { return &___U3CU3Ef__switchU24map6_29; }
	inline void set_U3CU3Ef__switchU24map6_29(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map6_29 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map6_29), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map7_30() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24map7_30)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map7_30() const { return ___U3CU3Ef__switchU24map7_30; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map7_30() { return &___U3CU3Ef__switchU24map7_30; }
	inline void set_U3CU3Ef__switchU24map7_30(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map7_30 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map7_30), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map8_31() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24map8_31)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map8_31() const { return ___U3CU3Ef__switchU24map8_31; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map8_31() { return &___U3CU3Ef__switchU24map8_31; }
	inline void set_U3CU3Ef__switchU24map8_31(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map8_31 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map8_31), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map9_32() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24map9_32)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map9_32() const { return ___U3CU3Ef__switchU24map9_32; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map9_32() { return &___U3CU3Ef__switchU24map9_32; }
	inline void set_U3CU3Ef__switchU24map9_32(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map9_32 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map9_32), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapA_33() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24mapA_33)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapA_33() const { return ___U3CU3Ef__switchU24mapA_33; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapA_33() { return &___U3CU3Ef__switchU24mapA_33; }
	inline void set_U3CU3Ef__switchU24mapA_33(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapA_33 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapA_33), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_34() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24mapB_34)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapB_34() const { return ___U3CU3Ef__switchU24mapB_34; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapB_34() { return &___U3CU3Ef__switchU24mapB_34; }
	inline void set_U3CU3Ef__switchU24mapB_34(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapB_34 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapB_34), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_35() { return static_cast<int32_t>(offsetof(PKCS12_t4101533061_StaticFields, ___U3CU3Ef__switchU24mapC_35)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapC_35() const { return ___U3CU3Ef__switchU24mapC_35; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapC_35() { return &___U3CU3Ef__switchU24mapC_35; }
	inline void set_U3CU3Ef__switchU24mapC_35(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapC_35 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapC_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS12_T4101533061_H
#ifndef CONTENTINFO_T3218159896_H
#define CONTENTINFO_T3218159896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/ContentInfo
struct  ContentInfo_t3218159896  : public RuntimeObject
{
public:
	// System.String Mono.Security.PKCS7/ContentInfo::contentType
	String_t* ___contentType_0;
	// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::content
	ASN1_t2114160833 * ___content_1;

public:
	inline static int32_t get_offset_of_contentType_0() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___contentType_0)); }
	inline String_t* get_contentType_0() const { return ___contentType_0; }
	inline String_t** get_address_of_contentType_0() { return &___contentType_0; }
	inline void set_contentType_0(String_t* value)
	{
		___contentType_0 = value;
		Il2CppCodeGenWriteBarrier((&___contentType_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(ContentInfo_t3218159896, ___content_1)); }
	inline ASN1_t2114160833 * get_content_1() const { return ___content_1; }
	inline ASN1_t2114160833 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(ASN1_t2114160833 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTINFO_T3218159896_H
#ifndef PKCS8_T696280613_H
#define PKCS8_T696280613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8
struct  PKCS8_t696280613  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PKCS8_T696280613_H
#ifndef X501_T1758824426_H
#define X501_T1758824426_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X501
struct  X501_t1758824426  : public RuntimeObject
{
public:

public:
};

struct X501_t1758824426_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.X501::countryName
	ByteU5BU5D_t4116647657* ___countryName_0;
	// System.Byte[] Mono.Security.X509.X501::organizationName
	ByteU5BU5D_t4116647657* ___organizationName_1;
	// System.Byte[] Mono.Security.X509.X501::organizationalUnitName
	ByteU5BU5D_t4116647657* ___organizationalUnitName_2;
	// System.Byte[] Mono.Security.X509.X501::commonName
	ByteU5BU5D_t4116647657* ___commonName_3;
	// System.Byte[] Mono.Security.X509.X501::localityName
	ByteU5BU5D_t4116647657* ___localityName_4;
	// System.Byte[] Mono.Security.X509.X501::stateOrProvinceName
	ByteU5BU5D_t4116647657* ___stateOrProvinceName_5;
	// System.Byte[] Mono.Security.X509.X501::streetAddress
	ByteU5BU5D_t4116647657* ___streetAddress_6;
	// System.Byte[] Mono.Security.X509.X501::domainComponent
	ByteU5BU5D_t4116647657* ___domainComponent_7;
	// System.Byte[] Mono.Security.X509.X501::userid
	ByteU5BU5D_t4116647657* ___userid_8;
	// System.Byte[] Mono.Security.X509.X501::email
	ByteU5BU5D_t4116647657* ___email_9;
	// System.Byte[] Mono.Security.X509.X501::dnQualifier
	ByteU5BU5D_t4116647657* ___dnQualifier_10;
	// System.Byte[] Mono.Security.X509.X501::title
	ByteU5BU5D_t4116647657* ___title_11;
	// System.Byte[] Mono.Security.X509.X501::surname
	ByteU5BU5D_t4116647657* ___surname_12;
	// System.Byte[] Mono.Security.X509.X501::givenName
	ByteU5BU5D_t4116647657* ___givenName_13;
	// System.Byte[] Mono.Security.X509.X501::initial
	ByteU5BU5D_t4116647657* ___initial_14;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X501::<>f__switch$mapD
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapD_15;

public:
	inline static int32_t get_offset_of_countryName_0() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___countryName_0)); }
	inline ByteU5BU5D_t4116647657* get_countryName_0() const { return ___countryName_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_countryName_0() { return &___countryName_0; }
	inline void set_countryName_0(ByteU5BU5D_t4116647657* value)
	{
		___countryName_0 = value;
		Il2CppCodeGenWriteBarrier((&___countryName_0), value);
	}

	inline static int32_t get_offset_of_organizationName_1() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationName_1)); }
	inline ByteU5BU5D_t4116647657* get_organizationName_1() const { return ___organizationName_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationName_1() { return &___organizationName_1; }
	inline void set_organizationName_1(ByteU5BU5D_t4116647657* value)
	{
		___organizationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___organizationName_1), value);
	}

	inline static int32_t get_offset_of_organizationalUnitName_2() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___organizationalUnitName_2)); }
	inline ByteU5BU5D_t4116647657* get_organizationalUnitName_2() const { return ___organizationalUnitName_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_organizationalUnitName_2() { return &___organizationalUnitName_2; }
	inline void set_organizationalUnitName_2(ByteU5BU5D_t4116647657* value)
	{
		___organizationalUnitName_2 = value;
		Il2CppCodeGenWriteBarrier((&___organizationalUnitName_2), value);
	}

	inline static int32_t get_offset_of_commonName_3() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___commonName_3)); }
	inline ByteU5BU5D_t4116647657* get_commonName_3() const { return ___commonName_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_commonName_3() { return &___commonName_3; }
	inline void set_commonName_3(ByteU5BU5D_t4116647657* value)
	{
		___commonName_3 = value;
		Il2CppCodeGenWriteBarrier((&___commonName_3), value);
	}

	inline static int32_t get_offset_of_localityName_4() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___localityName_4)); }
	inline ByteU5BU5D_t4116647657* get_localityName_4() const { return ___localityName_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_localityName_4() { return &___localityName_4; }
	inline void set_localityName_4(ByteU5BU5D_t4116647657* value)
	{
		___localityName_4 = value;
		Il2CppCodeGenWriteBarrier((&___localityName_4), value);
	}

	inline static int32_t get_offset_of_stateOrProvinceName_5() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___stateOrProvinceName_5)); }
	inline ByteU5BU5D_t4116647657* get_stateOrProvinceName_5() const { return ___stateOrProvinceName_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_stateOrProvinceName_5() { return &___stateOrProvinceName_5; }
	inline void set_stateOrProvinceName_5(ByteU5BU5D_t4116647657* value)
	{
		___stateOrProvinceName_5 = value;
		Il2CppCodeGenWriteBarrier((&___stateOrProvinceName_5), value);
	}

	inline static int32_t get_offset_of_streetAddress_6() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___streetAddress_6)); }
	inline ByteU5BU5D_t4116647657* get_streetAddress_6() const { return ___streetAddress_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_streetAddress_6() { return &___streetAddress_6; }
	inline void set_streetAddress_6(ByteU5BU5D_t4116647657* value)
	{
		___streetAddress_6 = value;
		Il2CppCodeGenWriteBarrier((&___streetAddress_6), value);
	}

	inline static int32_t get_offset_of_domainComponent_7() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___domainComponent_7)); }
	inline ByteU5BU5D_t4116647657* get_domainComponent_7() const { return ___domainComponent_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_domainComponent_7() { return &___domainComponent_7; }
	inline void set_domainComponent_7(ByteU5BU5D_t4116647657* value)
	{
		___domainComponent_7 = value;
		Il2CppCodeGenWriteBarrier((&___domainComponent_7), value);
	}

	inline static int32_t get_offset_of_userid_8() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___userid_8)); }
	inline ByteU5BU5D_t4116647657* get_userid_8() const { return ___userid_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_userid_8() { return &___userid_8; }
	inline void set_userid_8(ByteU5BU5D_t4116647657* value)
	{
		___userid_8 = value;
		Il2CppCodeGenWriteBarrier((&___userid_8), value);
	}

	inline static int32_t get_offset_of_email_9() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___email_9)); }
	inline ByteU5BU5D_t4116647657* get_email_9() const { return ___email_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_email_9() { return &___email_9; }
	inline void set_email_9(ByteU5BU5D_t4116647657* value)
	{
		___email_9 = value;
		Il2CppCodeGenWriteBarrier((&___email_9), value);
	}

	inline static int32_t get_offset_of_dnQualifier_10() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___dnQualifier_10)); }
	inline ByteU5BU5D_t4116647657* get_dnQualifier_10() const { return ___dnQualifier_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_dnQualifier_10() { return &___dnQualifier_10; }
	inline void set_dnQualifier_10(ByteU5BU5D_t4116647657* value)
	{
		___dnQualifier_10 = value;
		Il2CppCodeGenWriteBarrier((&___dnQualifier_10), value);
	}

	inline static int32_t get_offset_of_title_11() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___title_11)); }
	inline ByteU5BU5D_t4116647657* get_title_11() const { return ___title_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_title_11() { return &___title_11; }
	inline void set_title_11(ByteU5BU5D_t4116647657* value)
	{
		___title_11 = value;
		Il2CppCodeGenWriteBarrier((&___title_11), value);
	}

	inline static int32_t get_offset_of_surname_12() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___surname_12)); }
	inline ByteU5BU5D_t4116647657* get_surname_12() const { return ___surname_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_surname_12() { return &___surname_12; }
	inline void set_surname_12(ByteU5BU5D_t4116647657* value)
	{
		___surname_12 = value;
		Il2CppCodeGenWriteBarrier((&___surname_12), value);
	}

	inline static int32_t get_offset_of_givenName_13() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___givenName_13)); }
	inline ByteU5BU5D_t4116647657* get_givenName_13() const { return ___givenName_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_givenName_13() { return &___givenName_13; }
	inline void set_givenName_13(ByteU5BU5D_t4116647657* value)
	{
		___givenName_13 = value;
		Il2CppCodeGenWriteBarrier((&___givenName_13), value);
	}

	inline static int32_t get_offset_of_initial_14() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___initial_14)); }
	inline ByteU5BU5D_t4116647657* get_initial_14() const { return ___initial_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_initial_14() { return &___initial_14; }
	inline void set_initial_14(ByteU5BU5D_t4116647657* value)
	{
		___initial_14 = value;
		Il2CppCodeGenWriteBarrier((&___initial_14), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_15() { return static_cast<int32_t>(offsetof(X501_t1758824426_StaticFields, ___U3CU3Ef__switchU24mapD_15)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapD_15() const { return ___U3CU3Ef__switchU24mapD_15; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapD_15() { return &___U3CU3Ef__switchU24mapD_15; }
	inline void set_U3CU3Ef__switchU24mapD_15(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapD_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapD_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X501_T1758824426_H
#ifndef PRIVATEKEY_T523210967_H
#define PRIVATEKEY_T523210967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Authenticode.PrivateKey
struct  PrivateKey_t523210967  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Authenticode.PrivateKey::encrypted
	bool ___encrypted_0;
	// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::rsa
	RSA_t2385438082 * ___rsa_1;
	// System.Boolean Mono.Security.Authenticode.PrivateKey::weak
	bool ___weak_2;
	// System.Int32 Mono.Security.Authenticode.PrivateKey::keyType
	int32_t ___keyType_3;

public:
	inline static int32_t get_offset_of_encrypted_0() { return static_cast<int32_t>(offsetof(PrivateKey_t523210967, ___encrypted_0)); }
	inline bool get_encrypted_0() const { return ___encrypted_0; }
	inline bool* get_address_of_encrypted_0() { return &___encrypted_0; }
	inline void set_encrypted_0(bool value)
	{
		___encrypted_0 = value;
	}

	inline static int32_t get_offset_of_rsa_1() { return static_cast<int32_t>(offsetof(PrivateKey_t523210967, ___rsa_1)); }
	inline RSA_t2385438082 * get_rsa_1() const { return ___rsa_1; }
	inline RSA_t2385438082 ** get_address_of_rsa_1() { return &___rsa_1; }
	inline void set_rsa_1(RSA_t2385438082 * value)
	{
		___rsa_1 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_1), value);
	}

	inline static int32_t get_offset_of_weak_2() { return static_cast<int32_t>(offsetof(PrivateKey_t523210967, ___weak_2)); }
	inline bool get_weak_2() const { return ___weak_2; }
	inline bool* get_address_of_weak_2() { return &___weak_2; }
	inline void set_weak_2(bool value)
	{
		___weak_2 = value;
	}

	inline static int32_t get_offset_of_keyType_3() { return static_cast<int32_t>(offsetof(PrivateKey_t523210967, ___keyType_3)); }
	inline int32_t get_keyType_3() const { return ___keyType_3; }
	inline int32_t* get_address_of_keyType_3() { return &___keyType_3; }
	inline void set_keyType_3(int32_t value)
	{
		___keyType_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEY_T523210967_H
#ifndef PRIVATEKEYINFO_T668027993_H
#define PRIVATEKEYINFO_T668027993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct  PrivateKeyInfo_t668027993  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_version
	int32_t ____version_0;
	// System.String Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_algorithm
	String_t* ____algorithm_1;
	// System.Byte[] Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_key
	ByteU5BU5D_t4116647657* ____key_2;
	// System.Collections.ArrayList Mono.Security.Cryptography.PKCS8/PrivateKeyInfo::_list
	ArrayList_t2718874744 * ____list_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____version_0)); }
	inline int32_t get__version_0() const { return ____version_0; }
	inline int32_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(int32_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__algorithm_1() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____algorithm_1)); }
	inline String_t* get__algorithm_1() const { return ____algorithm_1; }
	inline String_t** get_address_of__algorithm_1() { return &____algorithm_1; }
	inline void set__algorithm_1(String_t* value)
	{
		____algorithm_1 = value;
		Il2CppCodeGenWriteBarrier((&____algorithm_1), value);
	}

	inline static int32_t get_offset_of__key_2() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____key_2)); }
	inline ByteU5BU5D_t4116647657* get__key_2() const { return ____key_2; }
	inline ByteU5BU5D_t4116647657** get_address_of__key_2() { return &____key_2; }
	inline void set__key_2(ByteU5BU5D_t4116647657* value)
	{
		____key_2 = value;
		Il2CppCodeGenWriteBarrier((&____key_2), value);
	}

	inline static int32_t get_offset_of__list_3() { return static_cast<int32_t>(offsetof(PrivateKeyInfo_t668027993, ____list_3)); }
	inline ArrayList_t2718874744 * get__list_3() const { return ____list_3; }
	inline ArrayList_t2718874744 ** get_address_of__list_3() { return &____list_3; }
	inline void set__list_3(ArrayList_t2718874744 * value)
	{
		____list_3 = value;
		Il2CppCodeGenWriteBarrier((&____list_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVATEKEYINFO_T668027993_H
#ifndef ENCRYPTEDDATA_T3577548733_H
#define ENCRYPTEDDATA_T3577548733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.PKCS7/EncryptedData
struct  EncryptedData_t3577548733  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.PKCS7/EncryptedData::_version
	uint8_t ____version_0;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_content
	ContentInfo_t3218159896 * ____content_1;
	// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::_encryptionAlgorithm
	ContentInfo_t3218159896 * ____encryptionAlgorithm_2;
	// System.Byte[] Mono.Security.PKCS7/EncryptedData::_encrypted
	ByteU5BU5D_t4116647657* ____encrypted_3;

public:
	inline static int32_t get_offset_of__version_0() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____version_0)); }
	inline uint8_t get__version_0() const { return ____version_0; }
	inline uint8_t* get_address_of__version_0() { return &____version_0; }
	inline void set__version_0(uint8_t value)
	{
		____version_0 = value;
	}

	inline static int32_t get_offset_of__content_1() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____content_1)); }
	inline ContentInfo_t3218159896 * get__content_1() const { return ____content_1; }
	inline ContentInfo_t3218159896 ** get_address_of__content_1() { return &____content_1; }
	inline void set__content_1(ContentInfo_t3218159896 * value)
	{
		____content_1 = value;
		Il2CppCodeGenWriteBarrier((&____content_1), value);
	}

	inline static int32_t get_offset_of__encryptionAlgorithm_2() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encryptionAlgorithm_2)); }
	inline ContentInfo_t3218159896 * get__encryptionAlgorithm_2() const { return ____encryptionAlgorithm_2; }
	inline ContentInfo_t3218159896 ** get_address_of__encryptionAlgorithm_2() { return &____encryptionAlgorithm_2; }
	inline void set__encryptionAlgorithm_2(ContentInfo_t3218159896 * value)
	{
		____encryptionAlgorithm_2 = value;
		Il2CppCodeGenWriteBarrier((&____encryptionAlgorithm_2), value);
	}

	inline static int32_t get_offset_of__encrypted_3() { return static_cast<int32_t>(offsetof(EncryptedData_t3577548733, ____encrypted_3)); }
	inline ByteU5BU5D_t4116647657* get__encrypted_3() const { return ____encrypted_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__encrypted_3() { return &____encrypted_3; }
	inline void set__encrypted_3(ByteU5BU5D_t4116647657* value)
	{
		____encrypted_3 = value;
		Il2CppCodeGenWriteBarrier((&____encrypted_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENCRYPTEDDATA_T3577548733_H
#ifndef DERIVEBYTES_T1492915136_H
#define DERIVEBYTES_T1492915136_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes
struct  DeriveBytes_t1492915136  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.PKCS12/DeriveBytes::_hashName
	String_t* ____hashName_3;
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes::_iterations
	int32_t ____iterations_4;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_password
	ByteU5BU5D_t4116647657* ____password_5;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::_salt
	ByteU5BU5D_t4116647657* ____salt_6;

public:
	inline static int32_t get_offset_of__hashName_3() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____hashName_3)); }
	inline String_t* get__hashName_3() const { return ____hashName_3; }
	inline String_t** get_address_of__hashName_3() { return &____hashName_3; }
	inline void set__hashName_3(String_t* value)
	{
		____hashName_3 = value;
		Il2CppCodeGenWriteBarrier((&____hashName_3), value);
	}

	inline static int32_t get_offset_of__iterations_4() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____iterations_4)); }
	inline int32_t get__iterations_4() const { return ____iterations_4; }
	inline int32_t* get_address_of__iterations_4() { return &____iterations_4; }
	inline void set__iterations_4(int32_t value)
	{
		____iterations_4 = value;
	}

	inline static int32_t get_offset_of__password_5() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____password_5)); }
	inline ByteU5BU5D_t4116647657* get__password_5() const { return ____password_5; }
	inline ByteU5BU5D_t4116647657** get_address_of__password_5() { return &____password_5; }
	inline void set__password_5(ByteU5BU5D_t4116647657* value)
	{
		____password_5 = value;
		Il2CppCodeGenWriteBarrier((&____password_5), value);
	}

	inline static int32_t get_offset_of__salt_6() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136, ____salt_6)); }
	inline ByteU5BU5D_t4116647657* get__salt_6() const { return ____salt_6; }
	inline ByteU5BU5D_t4116647657** get_address_of__salt_6() { return &____salt_6; }
	inline void set__salt_6(ByteU5BU5D_t4116647657* value)
	{
		____salt_6 = value;
		Il2CppCodeGenWriteBarrier((&____salt_6), value);
	}
};

struct DeriveBytes_t1492915136_StaticFields
{
public:
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::keyDiversifier
	ByteU5BU5D_t4116647657* ___keyDiversifier_0;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::ivDiversifier
	ByteU5BU5D_t4116647657* ___ivDiversifier_1;
	// System.Byte[] Mono.Security.X509.PKCS12/DeriveBytes::macDiversifier
	ByteU5BU5D_t4116647657* ___macDiversifier_2;

public:
	inline static int32_t get_offset_of_keyDiversifier_0() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___keyDiversifier_0)); }
	inline ByteU5BU5D_t4116647657* get_keyDiversifier_0() const { return ___keyDiversifier_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_keyDiversifier_0() { return &___keyDiversifier_0; }
	inline void set_keyDiversifier_0(ByteU5BU5D_t4116647657* value)
	{
		___keyDiversifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyDiversifier_0), value);
	}

	inline static int32_t get_offset_of_ivDiversifier_1() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___ivDiversifier_1)); }
	inline ByteU5BU5D_t4116647657* get_ivDiversifier_1() const { return ___ivDiversifier_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_ivDiversifier_1() { return &___ivDiversifier_1; }
	inline void set_ivDiversifier_1(ByteU5BU5D_t4116647657* value)
	{
		___ivDiversifier_1 = value;
		Il2CppCodeGenWriteBarrier((&___ivDiversifier_1), value);
	}

	inline static int32_t get_offset_of_macDiversifier_2() { return static_cast<int32_t>(offsetof(DeriveBytes_t1492915136_StaticFields, ___macDiversifier_2)); }
	inline ByteU5BU5D_t4116647657* get_macDiversifier_2() const { return ___macDiversifier_2; }
	inline ByteU5BU5D_t4116647657** get_address_of_macDiversifier_2() { return &___macDiversifier_2; }
	inline void set_macDiversifier_2(ByteU5BU5D_t4116647657* value)
	{
		___macDiversifier_2 = value;
		Il2CppCodeGenWriteBarrier((&___macDiversifier_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DERIVEBYTES_T1492915136_H
#ifndef RSASSLSIGNATUREDEFORMATTER_T3558097625_H
#define RSASSLSIGNATUREDEFORMATTER_T3558097625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureDeformatter
struct  RSASslSignatureDeformatter_t3558097625  : public AsymmetricSignatureDeformatter_t2681190756
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::key
	RSA_t2385438082 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::hash
	HashAlgorithm_t1432317219 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3558097625, ___key_0)); }
	inline RSA_t2385438082 * get_key_0() const { return ___key_0; }
	inline RSA_t2385438082 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t2385438082 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3558097625, ___hash_1)); }
	inline HashAlgorithm_t1432317219 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1432317219 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureDeformatter_t3558097625_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::<>f__switch$map15
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map15_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map15_2() { return static_cast<int32_t>(offsetof(RSASslSignatureDeformatter_t3558097625_StaticFields, ___U3CU3Ef__switchU24map15_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map15_2() const { return ___U3CU3Ef__switchU24map15_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map15_2() { return &___U3CU3Ef__switchU24map15_2; }
	inline void set_U3CU3Ef__switchU24map15_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map15_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map15_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREDEFORMATTER_T3558097625_H
#ifndef AUTHORITYKEYIDENTIFIEREXTENSION_T1122691429_H
#define AUTHORITYKEYIDENTIFIEREXTENSION_T1122691429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
struct  AuthorityKeyIdentifierExtension_t1122691429  : public X509Extension_t3173393653
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension::aki
	ByteU5BU5D_t4116647657* ___aki_3;

public:
	inline static int32_t get_offset_of_aki_3() { return static_cast<int32_t>(offsetof(AuthorityKeyIdentifierExtension_t1122691429, ___aki_3)); }
	inline ByteU5BU5D_t4116647657* get_aki_3() const { return ___aki_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_aki_3() { return &___aki_3; }
	inline void set_aki_3(ByteU5BU5D_t4116647657* value)
	{
		___aki_3 = value;
		Il2CppCodeGenWriteBarrier((&___aki_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHORITYKEYIDENTIFIEREXTENSION_T1122691429_H
#ifndef BASICCONSTRAINTSEXTENSION_T2462195279_H
#define BASICCONSTRAINTSEXTENSION_T2462195279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct  BasicConstraintsExtension_t2462195279  : public X509Extension_t3173393653
{
public:
	// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::cA
	bool ___cA_3;
	// System.Int32 Mono.Security.X509.Extensions.BasicConstraintsExtension::pathLenConstraint
	int32_t ___pathLenConstraint_4;

public:
	inline static int32_t get_offset_of_cA_3() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195279, ___cA_3)); }
	inline bool get_cA_3() const { return ___cA_3; }
	inline bool* get_address_of_cA_3() { return &___cA_3; }
	inline void set_cA_3(bool value)
	{
		___cA_3 = value;
	}

	inline static int32_t get_offset_of_pathLenConstraint_4() { return static_cast<int32_t>(offsetof(BasicConstraintsExtension_t2462195279, ___pathLenConstraint_4)); }
	inline int32_t get_pathLenConstraint_4() const { return ___pathLenConstraint_4; }
	inline int32_t* get_address_of_pathLenConstraint_4() { return &___pathLenConstraint_4; }
	inline void set_pathLenConstraint_4(int32_t value)
	{
		___pathLenConstraint_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASICCONSTRAINTSEXTENSION_T2462195279_H
#ifndef EXTENDEDKEYUSAGEEXTENSION_T3929363080_H
#define EXTENDEDKEYUSAGEEXTENSION_T3929363080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.ExtendedKeyUsageExtension
struct  ExtendedKeyUsageExtension_t3929363080  : public X509Extension_t3173393653
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::keyPurpose
	ArrayList_t2718874744 * ___keyPurpose_3;

public:
	inline static int32_t get_offset_of_keyPurpose_3() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t3929363080, ___keyPurpose_3)); }
	inline ArrayList_t2718874744 * get_keyPurpose_3() const { return ___keyPurpose_3; }
	inline ArrayList_t2718874744 ** get_address_of_keyPurpose_3() { return &___keyPurpose_3; }
	inline void set_keyPurpose_3(ArrayList_t2718874744 * value)
	{
		___keyPurpose_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyPurpose_3), value);
	}
};

struct ExtendedKeyUsageExtension_t3929363080_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.Extensions.ExtendedKeyUsageExtension::<>f__switch$map14
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map14_4;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map14_4() { return static_cast<int32_t>(offsetof(ExtendedKeyUsageExtension_t3929363080_StaticFields, ___U3CU3Ef__switchU24map14_4)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map14_4() const { return ___U3CU3Ef__switchU24map14_4; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map14_4() { return &___U3CU3Ef__switchU24map14_4; }
	inline void set_U3CU3Ef__switchU24map14_4(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map14_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map14_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDEDKEYUSAGEEXTENSION_T3929363080_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
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
#ifndef KEYUSAGEEXTENSION_T1795615912_H
#define KEYUSAGEEXTENSION_T1795615912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsageExtension
struct  KeyUsageExtension_t1795615912  : public X509Extension_t3173393653
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsageExtension::kubits
	int32_t ___kubits_3;

public:
	inline static int32_t get_offset_of_kubits_3() { return static_cast<int32_t>(offsetof(KeyUsageExtension_t1795615912, ___kubits_3)); }
	inline int32_t get_kubits_3() const { return ___kubits_3; }
	inline int32_t* get_address_of_kubits_3() { return &___kubits_3; }
	inline void set_kubits_3(int32_t value)
	{
		___kubits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYUSAGEEXTENSION_T1795615912_H
#ifndef NETSCAPECERTTYPEEXTENSION_T1524296876_H
#define NETSCAPECERTTYPEEXTENSION_T1524296876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension
struct  NetscapeCertTypeExtension_t1524296876  : public X509Extension_t3173393653
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension::ctbits
	int32_t ___ctbits_3;

public:
	inline static int32_t get_offset_of_ctbits_3() { return static_cast<int32_t>(offsetof(NetscapeCertTypeExtension_t1524296876, ___ctbits_3)); }
	inline int32_t get_ctbits_3() const { return ___ctbits_3; }
	inline int32_t* get_address_of_ctbits_3() { return &___ctbits_3; }
	inline void set_ctbits_3(int32_t value)
	{
		___ctbits_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSCAPECERTTYPEEXTENSION_T1524296876_H
#ifndef SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#define SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct  SubjectKeyIdentifierExtension_t2404375272  : public X509Extension_t3173393653
{
public:
	// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ski
	ByteU5BU5D_t4116647657* ___ski_3;

public:
	inline static int32_t get_offset_of_ski_3() { return static_cast<int32_t>(offsetof(SubjectKeyIdentifierExtension_t2404375272, ___ski_3)); }
	inline ByteU5BU5D_t4116647657* get_ski_3() const { return ___ski_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_ski_3() { return &___ski_3; }
	inline void set_ski_3(ByteU5BU5D_t4116647657* value)
	{
		___ski_3 = value;
		Il2CppCodeGenWriteBarrier((&___ski_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTKEYIDENTIFIEREXTENSION_T2404375272_H
#ifndef SUBJECTALTNAMEEXTENSION_T1536937677_H
#define SUBJECTALTNAMEEXTENSION_T1536937677_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.SubjectAltNameExtension
struct  SubjectAltNameExtension_t1536937677  : public X509Extension_t3173393653
{
public:
	// Mono.Security.X509.Extensions.GeneralNames Mono.Security.X509.Extensions.SubjectAltNameExtension::_names
	GeneralNames_t2702294159 * ____names_3;

public:
	inline static int32_t get_offset_of__names_3() { return static_cast<int32_t>(offsetof(SubjectAltNameExtension_t1536937677, ____names_3)); }
	inline GeneralNames_t2702294159 * get__names_3() const { return ____names_3; }
	inline GeneralNames_t2702294159 ** get_address_of__names_3() { return &____names_3; }
	inline void set__names_3(GeneralNames_t2702294159 * value)
	{
		____names_3 = value;
		Il2CppCodeGenWriteBarrier((&____names_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBJECTALTNAMEEXTENSION_T1536937677_H
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
#ifndef CLIENTRECORDPROTOCOL_T2031137796_H
#define CLIENTRECORDPROTOCOL_T2031137796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct  ClientRecordProtocol_t2031137796  : public RecordProtocol_t3759049701
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTRECORDPROTOCOL_T2031137796_H
#ifndef MD2_T1561046427_H
#define MD2_T1561046427_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2
struct  MD2_t1561046427  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2_T1561046427_H
#ifndef INITIAL_T2745963796_H
#define INITIAL_T2745963796_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Initial
struct  Initial_t2745963796  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITIAL_T2745963796_H
#ifndef MD4_T1560915355_H
#define MD4_T1560915355_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4
struct  MD4_t1560915355  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4_T1560915355_H
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
#ifndef RSASSLSIGNATUREFORMATTER_T2709678514_H
#define RSASSLSIGNATUREFORMATTER_T2709678514_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RSASslSignatureFormatter
struct  RSASslSignatureFormatter_t2709678514  : public AsymmetricSignatureFormatter_t3486936014
{
public:
	// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.RSASslSignatureFormatter::key
	RSA_t2385438082 * ___key_0;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.RSASslSignatureFormatter::hash
	HashAlgorithm_t1432317219 * ___hash_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514, ___key_0)); }
	inline RSA_t2385438082 * get_key_0() const { return ___key_0; }
	inline RSA_t2385438082 ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RSA_t2385438082 * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514, ___hash_1)); }
	inline HashAlgorithm_t1432317219 * get_hash_1() const { return ___hash_1; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(HashAlgorithm_t1432317219 * value)
	{
		___hash_1 = value;
		Il2CppCodeGenWriteBarrier((&___hash_1), value);
	}
};

struct RSASslSignatureFormatter_t2709678514_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.Protocol.Tls.RSASslSignatureFormatter::<>f__switch$map16
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map16_2;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map16_2() { return static_cast<int32_t>(offsetof(RSASslSignatureFormatter_t2709678514_StaticFields, ___U3CU3Ef__switchU24map16_2)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map16_2() const { return ___U3CU3Ef__switchU24map16_2; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map16_2() { return &___U3CU3Ef__switchU24map16_2; }
	inline void set_U3CU3Ef__switchU24map16_2(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map16_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map16_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSASSLSIGNATUREFORMATTER_T2709678514_H
#ifndef GIVENNAME_T3114888956_H
#define GIVENNAME_T3114888956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/GivenName
struct  GivenName_t3114888956  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GIVENNAME_T3114888956_H
#ifndef DNQUALIFIER_T2746394302_H
#define DNQUALIFIER_T2746394302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DnQualifier
struct  DnQualifier_t2746394302  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DNQUALIFIER_T2746394302_H
#ifndef X509CERTIFICATECOLLECTION_T1542168550_H
#define X509CERTIFICATECOLLECTION_T1542168550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateCollection
struct  X509CertificateCollection_t1542168550  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATECOLLECTION_T1542168550_H
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
#ifndef KEYEDHASHALGORITHM_T112861511_H
#define KEYEDHASHALGORITHM_T112861511_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.KeyedHashAlgorithm
struct  KeyedHashAlgorithm_t112861511  : public HashAlgorithm_t1432317219
{
public:
	// System.Byte[] System.Security.Cryptography.KeyedHashAlgorithm::KeyValue
	ByteU5BU5D_t4116647657* ___KeyValue_4;

public:
	inline static int32_t get_offset_of_KeyValue_4() { return static_cast<int32_t>(offsetof(KeyedHashAlgorithm_t112861511, ___KeyValue_4)); }
	inline ByteU5BU5D_t4116647657* get_KeyValue_4() const { return ___KeyValue_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_KeyValue_4() { return &___KeyValue_4; }
	inline void set_KeyValue_4(ByteU5BU5D_t4116647657* value)
	{
		___KeyValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYEDHASHALGORITHM_T112861511_H
#ifndef X509EXTENSIONCOLLECTION_T609554709_H
#define X509EXTENSIONCOLLECTION_T609554709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ExtensionCollection
struct  X509ExtensionCollection_t609554709  : public CollectionBase_t2727926298
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t609554709, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509EXTENSIONCOLLECTION_T609554709_H
#ifndef SURNAME_T4221813936_H
#define SURNAME_T4221813936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Surname
struct  Surname_t4221813936  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SURNAME_T4221813936_H
#ifndef NAME_T3626842933_H
#define NAME_T3626842933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Name
struct  Name_t3626842933  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAME_T3626842933_H
#ifndef COMMONNAME_T2882805359_H
#define COMMONNAME_T2882805359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CommonName
struct  CommonName_t2882805359  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMONNAME_T2882805359_H
#ifndef SERIALNUMBER_T3812427306_H
#define SERIALNUMBER_T3812427306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/SerialNumber
struct  SerialNumber_t3812427306  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALNUMBER_T3812427306_H
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
#ifndef STATEORPROVINCENAME_T1916702996_H
#define STATEORPROVINCENAME_T1916702996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/StateOrProvinceName
struct  StateOrProvinceName_t1916702996  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATEORPROVINCENAME_T1916702996_H
#ifndef COUNTRYNAME_T4165042092_H
#define COUNTRYNAME_T4165042092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/CountryName
struct  CountryName_t4165042092  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COUNTRYNAME_T4165042092_H
#ifndef TITLE_T2026585634_H
#define TITLE_T2026585634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Title
struct  Title_t2026585634  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TITLE_T2026585634_H
#ifndef LOCALITYNAME_T1511149830_H
#define LOCALITYNAME_T1511149830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/LocalityName
struct  LocalityName_t1511149830  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALITYNAME_T1511149830_H
#ifndef OID_T2014794921_H
#define OID_T2014794921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/Oid
struct  Oid_t2014794921  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OID_T2014794921_H
#ifndef MD5SHA1_T723838944_H
#define MD5SHA1_T723838944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD5SHA1
struct  MD5SHA1_t723838944  : public HashAlgorithm_t1432317219
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::md5
	HashAlgorithm_t1432317219 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.MD5SHA1::sha
	HashAlgorithm_t1432317219 * ___sha_5;
	// System.Boolean Mono.Security.Cryptography.MD5SHA1::hashing
	bool ___hashing_6;

public:
	inline static int32_t get_offset_of_md5_4() { return static_cast<int32_t>(offsetof(MD5SHA1_t723838944, ___md5_4)); }
	inline HashAlgorithm_t1432317219 * get_md5_4() const { return ___md5_4; }
	inline HashAlgorithm_t1432317219 ** get_address_of_md5_4() { return &___md5_4; }
	inline void set_md5_4(HashAlgorithm_t1432317219 * value)
	{
		___md5_4 = value;
		Il2CppCodeGenWriteBarrier((&___md5_4), value);
	}

	inline static int32_t get_offset_of_sha_5() { return static_cast<int32_t>(offsetof(MD5SHA1_t723838944, ___sha_5)); }
	inline HashAlgorithm_t1432317219 * get_sha_5() const { return ___sha_5; }
	inline HashAlgorithm_t1432317219 ** get_address_of_sha_5() { return &___sha_5; }
	inline void set_sha_5(HashAlgorithm_t1432317219 * value)
	{
		___sha_5 = value;
		Il2CppCodeGenWriteBarrier((&___sha_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(MD5SHA1_t723838944, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5SHA1_T723838944_H
#ifndef DOMAINCOMPONENT_T1597975113_H
#define DOMAINCOMPONENT_T1597975113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/DomainComponent
struct  DomainComponent_t1597975113  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOMAINCOMPONENT_T1597975113_H
#ifndef EMAILADDRESS_T484866411_H
#define EMAILADDRESS_T484866411_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/EmailAddress
struct  EmailAddress_t484866411  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMAILADDRESS_T484866411_H
#ifndef ORGANIZATIONALUNITNAME_T1968218587_H
#define ORGANIZATIONALUNITNAME_T1968218587_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationalUnitName
struct  OrganizationalUnitName_t1968218587  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONALUNITNAME_T1968218587_H
#ifndef ORGANIZATIONNAME_T857038441_H
#define ORGANIZATIONNAME_T857038441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/OrganizationName
struct  OrganizationName_t857038441  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORGANIZATIONNAME_T857038441_H
#ifndef USERID_T70549454_H
#define USERID_T70549454_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X520/UserId
struct  UserId_t70549454  : public AttributeTypeAndValue_t3245693428
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERID_T70549454_H
#ifndef MD2MANAGED_T1377101535_H
#define MD2MANAGED_T1377101535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD2Managed
struct  MD2Managed_t1377101535  : public MD2_t1561046427
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::state
	ByteU5BU5D_t4116647657* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::checksum
	ByteU5BU5D_t4116647657* ___checksum_5;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::buffer
	ByteU5BU5D_t4116647657* ___buffer_6;
	// System.Int32 Mono.Security.Cryptography.MD2Managed::count
	int32_t ___count_7;
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::x
	ByteU5BU5D_t4116647657* ___x_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535, ___state_4)); }
	inline ByteU5BU5D_t4116647657* get_state_4() const { return ___state_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(ByteU5BU5D_t4116647657* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_checksum_5() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535, ___checksum_5)); }
	inline ByteU5BU5D_t4116647657* get_checksum_5() const { return ___checksum_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_checksum_5() { return &___checksum_5; }
	inline void set_checksum_5(ByteU5BU5D_t4116647657* value)
	{
		___checksum_5 = value;
		Il2CppCodeGenWriteBarrier((&___checksum_5), value);
	}

	inline static int32_t get_offset_of_buffer_6() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535, ___buffer_6)); }
	inline ByteU5BU5D_t4116647657* get_buffer_6() const { return ___buffer_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_6() { return &___buffer_6; }
	inline void set_buffer_6(ByteU5BU5D_t4116647657* value)
	{
		___buffer_6 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_6), value);
	}

	inline static int32_t get_offset_of_count_7() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535, ___count_7)); }
	inline int32_t get_count_7() const { return ___count_7; }
	inline int32_t* get_address_of_count_7() { return &___count_7; }
	inline void set_count_7(int32_t value)
	{
		___count_7 = value;
	}

	inline static int32_t get_offset_of_x_8() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535, ___x_8)); }
	inline ByteU5BU5D_t4116647657* get_x_8() const { return ___x_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_x_8() { return &___x_8; }
	inline void set_x_8(ByteU5BU5D_t4116647657* value)
	{
		___x_8 = value;
		Il2CppCodeGenWriteBarrier((&___x_8), value);
	}
};

struct MD2Managed_t1377101535_StaticFields
{
public:
	// System.Byte[] Mono.Security.Cryptography.MD2Managed::PI_SUBST
	ByteU5BU5D_t4116647657* ___PI_SUBST_9;

public:
	inline static int32_t get_offset_of_PI_SUBST_9() { return static_cast<int32_t>(offsetof(MD2Managed_t1377101535_StaticFields, ___PI_SUBST_9)); }
	inline ByteU5BU5D_t4116647657* get_PI_SUBST_9() const { return ___PI_SUBST_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_PI_SUBST_9() { return &___PI_SUBST_9; }
	inline void set_PI_SUBST_9(ByteU5BU5D_t4116647657* value)
	{
		___PI_SUBST_9 = value;
		Il2CppCodeGenWriteBarrier((&___PI_SUBST_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD2MANAGED_T1377101535_H
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
#ifndef SECURITYPROTOCOLTYPE_T1513093309_H
#define SECURITYPROTOCOLTYPE_T1513093309_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityProtocolType
struct  SecurityProtocolType_t1513093309 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityProtocolType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityProtocolType_t1513093309, ___value___1)); }
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
#endif // SECURITYPROTOCOLTYPE_T1513093309_H
#ifndef HASHALGORITHMTYPE_T2376832258_H
#define HASHALGORITHMTYPE_T2376832258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HashAlgorithmType
struct  HashAlgorithmType_t2376832258 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HashAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HashAlgorithmType_t2376832258, ___value___1)); }
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
#endif // HASHALGORITHMTYPE_T2376832258_H
#ifndef HANDSHAKESTATE_T756684113_H
#define HANDSHAKESTATE_T756684113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HandshakeState
struct  HandshakeState_t756684113 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.HandshakeState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeState_t756684113, ___value___1)); }
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
#endif // HANDSHAKESTATE_T756684113_H
#ifndef SECURITYCOMPRESSIONTYPE_T4242483129_H
#define SECURITYCOMPRESSIONTYPE_T4242483129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SecurityCompressionType
struct  SecurityCompressionType_t4242483129 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SecurityCompressionType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SecurityCompressionType_t4242483129, ___value___1)); }
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
#endif // SECURITYCOMPRESSIONTYPE_T4242483129_H
#ifndef EXCHANGEALGORITHMTYPE_T1320888206_H
#define EXCHANGEALGORITHMTYPE_T1320888206_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ExchangeAlgorithmType
struct  ExchangeAlgorithmType_t1320888206 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ExchangeAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ExchangeAlgorithmType_t1320888206, ___value___1)); }
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
#endif // EXCHANGEALGORITHMTYPE_T1320888206_H
#ifndef MD4MANAGED_T957540063_H
#define MD4MANAGED_T957540063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.MD4Managed
struct  MD4Managed_t957540063  : public MD4_t1560915355
{
public:
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::state
	UInt32U5BU5D_t2770800703* ___state_4;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::buffer
	ByteU5BU5D_t4116647657* ___buffer_5;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::count
	UInt32U5BU5D_t2770800703* ___count_6;
	// System.UInt32[] Mono.Security.Cryptography.MD4Managed::x
	UInt32U5BU5D_t2770800703* ___x_7;
	// System.Byte[] Mono.Security.Cryptography.MD4Managed::digest
	ByteU5BU5D_t4116647657* ___digest_8;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(MD4Managed_t957540063, ___state_4)); }
	inline UInt32U5BU5D_t2770800703* get_state_4() const { return ___state_4; }
	inline UInt32U5BU5D_t2770800703** get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(UInt32U5BU5D_t2770800703* value)
	{
		___state_4 = value;
		Il2CppCodeGenWriteBarrier((&___state_4), value);
	}

	inline static int32_t get_offset_of_buffer_5() { return static_cast<int32_t>(offsetof(MD4Managed_t957540063, ___buffer_5)); }
	inline ByteU5BU5D_t4116647657* get_buffer_5() const { return ___buffer_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_5() { return &___buffer_5; }
	inline void set_buffer_5(ByteU5BU5D_t4116647657* value)
	{
		___buffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_5), value);
	}

	inline static int32_t get_offset_of_count_6() { return static_cast<int32_t>(offsetof(MD4Managed_t957540063, ___count_6)); }
	inline UInt32U5BU5D_t2770800703* get_count_6() const { return ___count_6; }
	inline UInt32U5BU5D_t2770800703** get_address_of_count_6() { return &___count_6; }
	inline void set_count_6(UInt32U5BU5D_t2770800703* value)
	{
		___count_6 = value;
		Il2CppCodeGenWriteBarrier((&___count_6), value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(MD4Managed_t957540063, ___x_7)); }
	inline UInt32U5BU5D_t2770800703* get_x_7() const { return ___x_7; }
	inline UInt32U5BU5D_t2770800703** get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(UInt32U5BU5D_t2770800703* value)
	{
		___x_7 = value;
		Il2CppCodeGenWriteBarrier((&___x_7), value);
	}

	inline static int32_t get_offset_of_digest_8() { return static_cast<int32_t>(offsetof(MD4Managed_t957540063, ___digest_8)); }
	inline ByteU5BU5D_t4116647657* get_digest_8() const { return ___digest_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_digest_8() { return &___digest_8; }
	inline void set_digest_8(ByteU5BU5D_t4116647657* value)
	{
		___digest_8 = value;
		Il2CppCodeGenWriteBarrier((&___digest_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD4MANAGED_T957540063_H
#ifndef KEYUSAGES_T820456313_H
#define KEYUSAGES_T820456313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.KeyUsages
struct  KeyUsages_t820456313 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.KeyUsages::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyUsages_t820456313, ___value___1)); }
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
#endif // KEYUSAGES_T820456313_H
#ifndef CONTENTTYPE_T2602934270_H
#define CONTENTTYPE_T2602934270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ContentType
struct  ContentType_t2602934270 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.ContentType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ContentType_t2602934270, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTENTTYPE_T2602934270_H
#ifndef HMAC_T3689525210_H
#define HMAC_T3689525210_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.HMAC
struct  HMAC_t3689525210  : public KeyedHashAlgorithm_t112861511
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Cryptography.HMAC::hash
	HashAlgorithm_t1432317219 * ___hash_5;
	// System.Boolean Mono.Security.Cryptography.HMAC::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Cryptography.HMAC::innerPad
	ByteU5BU5D_t4116647657* ___innerPad_7;
	// System.Byte[] Mono.Security.Cryptography.HMAC::outerPad
	ByteU5BU5D_t4116647657* ___outerPad_8;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(HMAC_t3689525210, ___hash_5)); }
	inline HashAlgorithm_t1432317219 * get_hash_5() const { return ___hash_5; }
	inline HashAlgorithm_t1432317219 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(HashAlgorithm_t1432317219 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(HMAC_t3689525210, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_innerPad_7() { return static_cast<int32_t>(offsetof(HMAC_t3689525210, ___innerPad_7)); }
	inline ByteU5BU5D_t4116647657* get_innerPad_7() const { return ___innerPad_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_innerPad_7() { return &___innerPad_7; }
	inline void set_innerPad_7(ByteU5BU5D_t4116647657* value)
	{
		___innerPad_7 = value;
		Il2CppCodeGenWriteBarrier((&___innerPad_7), value);
	}

	inline static int32_t get_offset_of_outerPad_8() { return static_cast<int32_t>(offsetof(HMAC_t3689525210, ___outerPad_8)); }
	inline ByteU5BU5D_t4116647657* get_outerPad_8() const { return ___outerPad_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_outerPad_8() { return &___outerPad_8; }
	inline void set_outerPad_8(ByteU5BU5D_t4116647657* value)
	{
		___outerPad_8 = value;
		Il2CppCodeGenWriteBarrier((&___outerPad_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HMAC_T3689525210_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef HANDSHAKETYPE_T3062346172_H
#define HANDSHAKETYPE_T3062346172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.HandshakeType
struct  HandshakeType_t3062346172 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.Handshake.HandshakeType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(HandshakeType_t3062346172, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDSHAKETYPE_T3062346172_H
#ifndef SSLSTREAMBASE_T1667413407_H
#define SSLSTREAMBASE_T1667413407_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t1667413407  : public Stream_t1273022909
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t1273022909 * ___innerStream_4;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t94973147 * ___inputBuffer_5;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t3971234707 * ___context_6;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t3759049701 * ___protocol_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_8;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_9;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	RuntimeObject * ___negotiate_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	RuntimeObject * ___read_12;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	RuntimeObject * ___write_13;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t451242010 * ___negotiationComplete_14;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t4116647657* ___recbuf_15;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t94973147 * ___recordStream_16;

public:
	inline static int32_t get_offset_of_innerStream_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___innerStream_4)); }
	inline Stream_t1273022909 * get_innerStream_4() const { return ___innerStream_4; }
	inline Stream_t1273022909 ** get_address_of_innerStream_4() { return &___innerStream_4; }
	inline void set_innerStream_4(Stream_t1273022909 * value)
	{
		___innerStream_4 = value;
		Il2CppCodeGenWriteBarrier((&___innerStream_4), value);
	}

	inline static int32_t get_offset_of_inputBuffer_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___inputBuffer_5)); }
	inline MemoryStream_t94973147 * get_inputBuffer_5() const { return ___inputBuffer_5; }
	inline MemoryStream_t94973147 ** get_address_of_inputBuffer_5() { return &___inputBuffer_5; }
	inline void set_inputBuffer_5(MemoryStream_t94973147 * value)
	{
		___inputBuffer_5 = value;
		Il2CppCodeGenWriteBarrier((&___inputBuffer_5), value);
	}

	inline static int32_t get_offset_of_context_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___context_6)); }
	inline Context_t3971234707 * get_context_6() const { return ___context_6; }
	inline Context_t3971234707 ** get_address_of_context_6() { return &___context_6; }
	inline void set_context_6(Context_t3971234707 * value)
	{
		___context_6 = value;
		Il2CppCodeGenWriteBarrier((&___context_6), value);
	}

	inline static int32_t get_offset_of_protocol_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___protocol_7)); }
	inline RecordProtocol_t3759049701 * get_protocol_7() const { return ___protocol_7; }
	inline RecordProtocol_t3759049701 ** get_address_of_protocol_7() { return &___protocol_7; }
	inline void set_protocol_7(RecordProtocol_t3759049701 * value)
	{
		___protocol_7 = value;
		Il2CppCodeGenWriteBarrier((&___protocol_7), value);
	}

	inline static int32_t get_offset_of_ownsStream_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___ownsStream_8)); }
	inline bool get_ownsStream_8() const { return ___ownsStream_8; }
	inline bool* get_address_of_ownsStream_8() { return &___ownsStream_8; }
	inline void set_ownsStream_8(bool value)
	{
		___ownsStream_8 = value;
	}

	inline static int32_t get_offset_of_disposed_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___disposed_9)); }
	inline bool get_disposed_9() const { return ___disposed_9; }
	inline bool* get_address_of_disposed_9() { return &___disposed_9; }
	inline void set_disposed_9(bool value)
	{
		___disposed_9 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___checkCertRevocationStatus_10)); }
	inline bool get_checkCertRevocationStatus_10() const { return ___checkCertRevocationStatus_10; }
	inline bool* get_address_of_checkCertRevocationStatus_10() { return &___checkCertRevocationStatus_10; }
	inline void set_checkCertRevocationStatus_10(bool value)
	{
		___checkCertRevocationStatus_10 = value;
	}

	inline static int32_t get_offset_of_negotiate_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___negotiate_11)); }
	inline RuntimeObject * get_negotiate_11() const { return ___negotiate_11; }
	inline RuntimeObject ** get_address_of_negotiate_11() { return &___negotiate_11; }
	inline void set_negotiate_11(RuntimeObject * value)
	{
		___negotiate_11 = value;
		Il2CppCodeGenWriteBarrier((&___negotiate_11), value);
	}

	inline static int32_t get_offset_of_read_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___read_12)); }
	inline RuntimeObject * get_read_12() const { return ___read_12; }
	inline RuntimeObject ** get_address_of_read_12() { return &___read_12; }
	inline void set_read_12(RuntimeObject * value)
	{
		___read_12 = value;
		Il2CppCodeGenWriteBarrier((&___read_12), value);
	}

	inline static int32_t get_offset_of_write_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___write_13)); }
	inline RuntimeObject * get_write_13() const { return ___write_13; }
	inline RuntimeObject ** get_address_of_write_13() { return &___write_13; }
	inline void set_write_13(RuntimeObject * value)
	{
		___write_13 = value;
		Il2CppCodeGenWriteBarrier((&___write_13), value);
	}

	inline static int32_t get_offset_of_negotiationComplete_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___negotiationComplete_14)); }
	inline ManualResetEvent_t451242010 * get_negotiationComplete_14() const { return ___negotiationComplete_14; }
	inline ManualResetEvent_t451242010 ** get_address_of_negotiationComplete_14() { return &___negotiationComplete_14; }
	inline void set_negotiationComplete_14(ManualResetEvent_t451242010 * value)
	{
		___negotiationComplete_14 = value;
		Il2CppCodeGenWriteBarrier((&___negotiationComplete_14), value);
	}

	inline static int32_t get_offset_of_recbuf_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___recbuf_15)); }
	inline ByteU5BU5D_t4116647657* get_recbuf_15() const { return ___recbuf_15; }
	inline ByteU5BU5D_t4116647657** get_address_of_recbuf_15() { return &___recbuf_15; }
	inline void set_recbuf_15(ByteU5BU5D_t4116647657* value)
	{
		___recbuf_15 = value;
		Il2CppCodeGenWriteBarrier((&___recbuf_15), value);
	}

	inline static int32_t get_offset_of_recordStream_16() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407, ___recordStream_16)); }
	inline MemoryStream_t94973147 * get_recordStream_16() const { return ___recordStream_16; }
	inline MemoryStream_t94973147 ** get_address_of_recordStream_16() { return &___recordStream_16; }
	inline void set_recordStream_16(MemoryStream_t94973147 * value)
	{
		___recordStream_16 = value;
		Il2CppCodeGenWriteBarrier((&___recordStream_16), value);
	}
};

struct SslStreamBase_t1667413407_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t451242010 * ___record_processing_3;

public:
	inline static int32_t get_offset_of_record_processing_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t1667413407_StaticFields, ___record_processing_3)); }
	inline ManualResetEvent_t451242010 * get_record_processing_3() const { return ___record_processing_3; }
	inline ManualResetEvent_t451242010 ** get_address_of_record_processing_3() { return &___record_processing_3; }
	inline void set_record_processing_3(ManualResetEvent_t451242010 * value)
	{
		___record_processing_3 = value;
		Il2CppCodeGenWriteBarrier((&___record_processing_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLSTREAMBASE_T1667413407_H
#ifndef NTLMFLAGS_T822829952_H
#define NTLMFLAGS_T822829952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.NtlmFlags
struct  NtlmFlags_t822829952 
{
public:
	// System.Int32 Mono.Security.Protocol.Ntlm.NtlmFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NtlmFlags_t822829952, ___value___1)); }
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
#endif // NTLMFLAGS_T822829952_H
#ifndef CERTTYPES_T3317701015_H
#define CERTTYPES_T3317701015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes
struct  CertTypes_t3317701015 
{
public:
	// System.Int32 Mono.Security.X509.Extensions.NetscapeCertTypeExtension/CertTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CertTypes_t3317701015, ___value___1)); }
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
#endif // CERTTYPES_T3317701015_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef ALERTDESCRIPTION_T1549755611_H
#define ALERTDESCRIPTION_T1549755611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertDescription
struct  AlertDescription_t1549755611 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertDescription::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertDescription_t1549755611, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTDESCRIPTION_T1549755611_H
#ifndef X509CHAINSTATUSFLAGS_T1831553603_H
#define X509CHAINSTATUSFLAGS_T1831553603_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509ChainStatusFlags
struct  X509ChainStatusFlags_t1831553603 
{
public:
	// System.Int32 Mono.Security.X509.X509ChainStatusFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t1831553603, ___value___1)); }
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
#endif // X509CHAINSTATUSFLAGS_T1831553603_H
#ifndef CIPHERALGORITHMTYPE_T1174400495_H
#define CIPHERALGORITHMTYPE_T1174400495_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherAlgorithmType
struct  CipherAlgorithmType_t1174400495 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.CipherAlgorithmType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherAlgorithmType_t1174400495, ___value___1)); }
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
#endif // CIPHERALGORITHMTYPE_T1174400495_H
#ifndef PURPOSE_T1676893114_H
#define PURPOSE_T1676893114_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.PKCS12/DeriveBytes/Purpose
struct  Purpose_t1676893114 
{
public:
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes/Purpose::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Purpose_t1676893114, ___value___1)); }
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
#endif // PURPOSE_T1676893114_H
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
#ifndef ALERTLEVEL_T2246417555_H
#define ALERTLEVEL_T2246417555_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.AlertLevel
struct  AlertLevel_t2246417555 
{
public:
	// System.Byte Mono.Security.Protocol.Tls.AlertLevel::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AlertLevel_t2246417555, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERTLEVEL_T2246417555_H
#ifndef RSAMANAGED_T1757093820_H
#define RSAMANAGED_T1757093820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged
struct  RSAManaged_t1757093820  : public RSA_t2385438082
{
public:
	// System.Boolean Mono.Security.Cryptography.RSAManaged::isCRTpossible
	bool ___isCRTpossible_2;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keyBlinding
	bool ___keyBlinding_3;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::keypairGenerated
	bool ___keypairGenerated_4;
	// System.Boolean Mono.Security.Cryptography.RSAManaged::m_disposed
	bool ___m_disposed_5;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::d
	BigInteger_t2902905090 * ___d_6;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::p
	BigInteger_t2902905090 * ___p_7;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::q
	BigInteger_t2902905090 * ___q_8;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dp
	BigInteger_t2902905090 * ___dp_9;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::dq
	BigInteger_t2902905090 * ___dq_10;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::qInv
	BigInteger_t2902905090 * ___qInv_11;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::n
	BigInteger_t2902905090 * ___n_12;
	// Mono.Math.BigInteger Mono.Security.Cryptography.RSAManaged::e
	BigInteger_t2902905090 * ___e_13;
	// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler Mono.Security.Cryptography.RSAManaged::KeyGenerated
	KeyGeneratedEventHandler_t3064139578 * ___KeyGenerated_14;

public:
	inline static int32_t get_offset_of_isCRTpossible_2() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___isCRTpossible_2)); }
	inline bool get_isCRTpossible_2() const { return ___isCRTpossible_2; }
	inline bool* get_address_of_isCRTpossible_2() { return &___isCRTpossible_2; }
	inline void set_isCRTpossible_2(bool value)
	{
		___isCRTpossible_2 = value;
	}

	inline static int32_t get_offset_of_keyBlinding_3() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___keyBlinding_3)); }
	inline bool get_keyBlinding_3() const { return ___keyBlinding_3; }
	inline bool* get_address_of_keyBlinding_3() { return &___keyBlinding_3; }
	inline void set_keyBlinding_3(bool value)
	{
		___keyBlinding_3 = value;
	}

	inline static int32_t get_offset_of_keypairGenerated_4() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___keypairGenerated_4)); }
	inline bool get_keypairGenerated_4() const { return ___keypairGenerated_4; }
	inline bool* get_address_of_keypairGenerated_4() { return &___keypairGenerated_4; }
	inline void set_keypairGenerated_4(bool value)
	{
		___keypairGenerated_4 = value;
	}

	inline static int32_t get_offset_of_m_disposed_5() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___m_disposed_5)); }
	inline bool get_m_disposed_5() const { return ___m_disposed_5; }
	inline bool* get_address_of_m_disposed_5() { return &___m_disposed_5; }
	inline void set_m_disposed_5(bool value)
	{
		___m_disposed_5 = value;
	}

	inline static int32_t get_offset_of_d_6() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___d_6)); }
	inline BigInteger_t2902905090 * get_d_6() const { return ___d_6; }
	inline BigInteger_t2902905090 ** get_address_of_d_6() { return &___d_6; }
	inline void set_d_6(BigInteger_t2902905090 * value)
	{
		___d_6 = value;
		Il2CppCodeGenWriteBarrier((&___d_6), value);
	}

	inline static int32_t get_offset_of_p_7() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___p_7)); }
	inline BigInteger_t2902905090 * get_p_7() const { return ___p_7; }
	inline BigInteger_t2902905090 ** get_address_of_p_7() { return &___p_7; }
	inline void set_p_7(BigInteger_t2902905090 * value)
	{
		___p_7 = value;
		Il2CppCodeGenWriteBarrier((&___p_7), value);
	}

	inline static int32_t get_offset_of_q_8() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___q_8)); }
	inline BigInteger_t2902905090 * get_q_8() const { return ___q_8; }
	inline BigInteger_t2902905090 ** get_address_of_q_8() { return &___q_8; }
	inline void set_q_8(BigInteger_t2902905090 * value)
	{
		___q_8 = value;
		Il2CppCodeGenWriteBarrier((&___q_8), value);
	}

	inline static int32_t get_offset_of_dp_9() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dp_9)); }
	inline BigInteger_t2902905090 * get_dp_9() const { return ___dp_9; }
	inline BigInteger_t2902905090 ** get_address_of_dp_9() { return &___dp_9; }
	inline void set_dp_9(BigInteger_t2902905090 * value)
	{
		___dp_9 = value;
		Il2CppCodeGenWriteBarrier((&___dp_9), value);
	}

	inline static int32_t get_offset_of_dq_10() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___dq_10)); }
	inline BigInteger_t2902905090 * get_dq_10() const { return ___dq_10; }
	inline BigInteger_t2902905090 ** get_address_of_dq_10() { return &___dq_10; }
	inline void set_dq_10(BigInteger_t2902905090 * value)
	{
		___dq_10 = value;
		Il2CppCodeGenWriteBarrier((&___dq_10), value);
	}

	inline static int32_t get_offset_of_qInv_11() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___qInv_11)); }
	inline BigInteger_t2902905090 * get_qInv_11() const { return ___qInv_11; }
	inline BigInteger_t2902905090 ** get_address_of_qInv_11() { return &___qInv_11; }
	inline void set_qInv_11(BigInteger_t2902905090 * value)
	{
		___qInv_11 = value;
		Il2CppCodeGenWriteBarrier((&___qInv_11), value);
	}

	inline static int32_t get_offset_of_n_12() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___n_12)); }
	inline BigInteger_t2902905090 * get_n_12() const { return ___n_12; }
	inline BigInteger_t2902905090 ** get_address_of_n_12() { return &___n_12; }
	inline void set_n_12(BigInteger_t2902905090 * value)
	{
		___n_12 = value;
		Il2CppCodeGenWriteBarrier((&___n_12), value);
	}

	inline static int32_t get_offset_of_e_13() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___e_13)); }
	inline BigInteger_t2902905090 * get_e_13() const { return ___e_13; }
	inline BigInteger_t2902905090 ** get_address_of_e_13() { return &___e_13; }
	inline void set_e_13(BigInteger_t2902905090 * value)
	{
		___e_13 = value;
		Il2CppCodeGenWriteBarrier((&___e_13), value);
	}

	inline static int32_t get_offset_of_KeyGenerated_14() { return static_cast<int32_t>(offsetof(RSAManaged_t1757093820, ___KeyGenerated_14)); }
	inline KeyGeneratedEventHandler_t3064139578 * get_KeyGenerated_14() const { return ___KeyGenerated_14; }
	inline KeyGeneratedEventHandler_t3064139578 ** get_address_of_KeyGenerated_14() { return &___KeyGenerated_14; }
	inline void set_KeyGenerated_14(KeyGeneratedEventHandler_t3064139578 * value)
	{
		___KeyGenerated_14 = value;
		Il2CppCodeGenWriteBarrier((&___KeyGenerated_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RSAMANAGED_T1757093820_H
#ifndef X509CHAIN_T863783601_H
#define X509CHAIN_T863783601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Chain
struct  X509Chain_t863783601  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::roots
	X509CertificateCollection_t1542168550 * ___roots_0;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::certs
	X509CertificateCollection_t1542168550 * ___certs_1;
	// Mono.Security.X509.X509Certificate Mono.Security.X509.X509Chain::_root
	X509Certificate_t489243025 * ____root_2;
	// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.X509Chain::_chain
	X509CertificateCollection_t1542168550 * ____chain_3;
	// Mono.Security.X509.X509ChainStatusFlags Mono.Security.X509.X509Chain::_status
	int32_t ____status_4;

public:
	inline static int32_t get_offset_of_roots_0() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ___roots_0)); }
	inline X509CertificateCollection_t1542168550 * get_roots_0() const { return ___roots_0; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_roots_0() { return &___roots_0; }
	inline void set_roots_0(X509CertificateCollection_t1542168550 * value)
	{
		___roots_0 = value;
		Il2CppCodeGenWriteBarrier((&___roots_0), value);
	}

	inline static int32_t get_offset_of_certs_1() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ___certs_1)); }
	inline X509CertificateCollection_t1542168550 * get_certs_1() const { return ___certs_1; }
	inline X509CertificateCollection_t1542168550 ** get_address_of_certs_1() { return &___certs_1; }
	inline void set_certs_1(X509CertificateCollection_t1542168550 * value)
	{
		___certs_1 = value;
		Il2CppCodeGenWriteBarrier((&___certs_1), value);
	}

	inline static int32_t get_offset_of__root_2() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____root_2)); }
	inline X509Certificate_t489243025 * get__root_2() const { return ____root_2; }
	inline X509Certificate_t489243025 ** get_address_of__root_2() { return &____root_2; }
	inline void set__root_2(X509Certificate_t489243025 * value)
	{
		____root_2 = value;
		Il2CppCodeGenWriteBarrier((&____root_2), value);
	}

	inline static int32_t get_offset_of__chain_3() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____chain_3)); }
	inline X509CertificateCollection_t1542168550 * get__chain_3() const { return ____chain_3; }
	inline X509CertificateCollection_t1542168550 ** get_address_of__chain_3() { return &____chain_3; }
	inline void set__chain_3(X509CertificateCollection_t1542168550 * value)
	{
		____chain_3 = value;
		Il2CppCodeGenWriteBarrier((&____chain_3), value);
	}

	inline static int32_t get_offset_of__status_4() { return static_cast<int32_t>(offsetof(X509Chain_t863783601, ____status_4)); }
	inline int32_t get__status_4() const { return ____status_4; }
	inline int32_t* get_address_of__status_4() { return &____status_4; }
	inline void set__status_4(int32_t value)
	{
		____status_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CHAIN_T863783601_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
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
#ifndef CONTEXT_T3971234707_H
#define CONTEXT_T3971234707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t3971234707  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_4;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t4116647657* ___sessionId_5;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_6;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t4144396432 * ___serverSettings_7;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t2486039503 * ___clientSettings_8;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t2199972650 * ___current_9;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t2199972650 * ___negotiating_10;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t2199972650 * ___read_11;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t2199972650 * ___write_12;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t1129639304 * ___supportedCiphers_13;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::lastHandshakeMsg
	uint8_t ___lastHandshakeMsg_14;
	// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::handshakeState
	int32_t ___handshakeState_15;
	// System.Boolean Mono.Security.Protocol.Tls.Context::abbreviatedHandshake
	bool ___abbreviatedHandshake_16;
	// System.Boolean Mono.Security.Protocol.Tls.Context::receivedConnectionEnd
	bool ___receivedConnectionEnd_17;
	// System.Boolean Mono.Security.Protocol.Tls.Context::sentConnectionEnd
	bool ___sentConnectionEnd_18;
	// System.Boolean Mono.Security.Protocol.Tls.Context::protocolNegotiated
	bool ___protocolNegotiated_19;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::writeSequenceNumber
	uint64_t ___writeSequenceNumber_20;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::readSequenceNumber
	uint64_t ___readSequenceNumber_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientRandom
	ByteU5BU5D_t4116647657* ___clientRandom_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t4116647657* ___serverRandom_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t4116647657* ___randomCS_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t4116647657* ___randomSC_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t4116647657* ___masterSecret_26;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t4116647657* ___clientWriteKey_27;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t4116647657* ___serverWriteKey_28;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t4116647657* ___clientWriteIV_29;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t4116647657* ___serverWriteIV_30;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t2365453965 * ___handshakeMessages_31;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t386037858 * ___random_32;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t3759049701 * ___recordProtocol_33;

public:
	inline static int32_t get_offset_of_securityProtocol_4() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___securityProtocol_4)); }
	inline int32_t get_securityProtocol_4() const { return ___securityProtocol_4; }
	inline int32_t* get_address_of_securityProtocol_4() { return &___securityProtocol_4; }
	inline void set_securityProtocol_4(int32_t value)
	{
		___securityProtocol_4 = value;
	}

	inline static int32_t get_offset_of_sessionId_5() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___sessionId_5)); }
	inline ByteU5BU5D_t4116647657* get_sessionId_5() const { return ___sessionId_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_sessionId_5() { return &___sessionId_5; }
	inline void set_sessionId_5(ByteU5BU5D_t4116647657* value)
	{
		___sessionId_5 = value;
		Il2CppCodeGenWriteBarrier((&___sessionId_5), value);
	}

	inline static int32_t get_offset_of_compressionMethod_6() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___compressionMethod_6)); }
	inline int32_t get_compressionMethod_6() const { return ___compressionMethod_6; }
	inline int32_t* get_address_of_compressionMethod_6() { return &___compressionMethod_6; }
	inline void set_compressionMethod_6(int32_t value)
	{
		___compressionMethod_6 = value;
	}

	inline static int32_t get_offset_of_serverSettings_7() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___serverSettings_7)); }
	inline TlsServerSettings_t4144396432 * get_serverSettings_7() const { return ___serverSettings_7; }
	inline TlsServerSettings_t4144396432 ** get_address_of_serverSettings_7() { return &___serverSettings_7; }
	inline void set_serverSettings_7(TlsServerSettings_t4144396432 * value)
	{
		___serverSettings_7 = value;
		Il2CppCodeGenWriteBarrier((&___serverSettings_7), value);
	}

	inline static int32_t get_offset_of_clientSettings_8() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___clientSettings_8)); }
	inline TlsClientSettings_t2486039503 * get_clientSettings_8() const { return ___clientSettings_8; }
	inline TlsClientSettings_t2486039503 ** get_address_of_clientSettings_8() { return &___clientSettings_8; }
	inline void set_clientSettings_8(TlsClientSettings_t2486039503 * value)
	{
		___clientSettings_8 = value;
		Il2CppCodeGenWriteBarrier((&___clientSettings_8), value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___current_9)); }
	inline SecurityParameters_t2199972650 * get_current_9() const { return ___current_9; }
	inline SecurityParameters_t2199972650 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(SecurityParameters_t2199972650 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier((&___current_9), value);
	}

	inline static int32_t get_offset_of_negotiating_10() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___negotiating_10)); }
	inline SecurityParameters_t2199972650 * get_negotiating_10() const { return ___negotiating_10; }
	inline SecurityParameters_t2199972650 ** get_address_of_negotiating_10() { return &___negotiating_10; }
	inline void set_negotiating_10(SecurityParameters_t2199972650 * value)
	{
		___negotiating_10 = value;
		Il2CppCodeGenWriteBarrier((&___negotiating_10), value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___read_11)); }
	inline SecurityParameters_t2199972650 * get_read_11() const { return ___read_11; }
	inline SecurityParameters_t2199972650 ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(SecurityParameters_t2199972650 * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier((&___read_11), value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___write_12)); }
	inline SecurityParameters_t2199972650 * get_write_12() const { return ___write_12; }
	inline SecurityParameters_t2199972650 ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(SecurityParameters_t2199972650 * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier((&___write_12), value);
	}

	inline static int32_t get_offset_of_supportedCiphers_13() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___supportedCiphers_13)); }
	inline CipherSuiteCollection_t1129639304 * get_supportedCiphers_13() const { return ___supportedCiphers_13; }
	inline CipherSuiteCollection_t1129639304 ** get_address_of_supportedCiphers_13() { return &___supportedCiphers_13; }
	inline void set_supportedCiphers_13(CipherSuiteCollection_t1129639304 * value)
	{
		___supportedCiphers_13 = value;
		Il2CppCodeGenWriteBarrier((&___supportedCiphers_13), value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_14() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___lastHandshakeMsg_14)); }
	inline uint8_t get_lastHandshakeMsg_14() const { return ___lastHandshakeMsg_14; }
	inline uint8_t* get_address_of_lastHandshakeMsg_14() { return &___lastHandshakeMsg_14; }
	inline void set_lastHandshakeMsg_14(uint8_t value)
	{
		___lastHandshakeMsg_14 = value;
	}

	inline static int32_t get_offset_of_handshakeState_15() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___handshakeState_15)); }
	inline int32_t get_handshakeState_15() const { return ___handshakeState_15; }
	inline int32_t* get_address_of_handshakeState_15() { return &___handshakeState_15; }
	inline void set_handshakeState_15(int32_t value)
	{
		___handshakeState_15 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_16() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___abbreviatedHandshake_16)); }
	inline bool get_abbreviatedHandshake_16() const { return ___abbreviatedHandshake_16; }
	inline bool* get_address_of_abbreviatedHandshake_16() { return &___abbreviatedHandshake_16; }
	inline void set_abbreviatedHandshake_16(bool value)
	{
		___abbreviatedHandshake_16 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_17() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___receivedConnectionEnd_17)); }
	inline bool get_receivedConnectionEnd_17() const { return ___receivedConnectionEnd_17; }
	inline bool* get_address_of_receivedConnectionEnd_17() { return &___receivedConnectionEnd_17; }
	inline void set_receivedConnectionEnd_17(bool value)
	{
		___receivedConnectionEnd_17 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_18() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___sentConnectionEnd_18)); }
	inline bool get_sentConnectionEnd_18() const { return ___sentConnectionEnd_18; }
	inline bool* get_address_of_sentConnectionEnd_18() { return &___sentConnectionEnd_18; }
	inline void set_sentConnectionEnd_18(bool value)
	{
		___sentConnectionEnd_18 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_19() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___protocolNegotiated_19)); }
	inline bool get_protocolNegotiated_19() const { return ___protocolNegotiated_19; }
	inline bool* get_address_of_protocolNegotiated_19() { return &___protocolNegotiated_19; }
	inline void set_protocolNegotiated_19(bool value)
	{
		___protocolNegotiated_19 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_20() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___writeSequenceNumber_20)); }
	inline uint64_t get_writeSequenceNumber_20() const { return ___writeSequenceNumber_20; }
	inline uint64_t* get_address_of_writeSequenceNumber_20() { return &___writeSequenceNumber_20; }
	inline void set_writeSequenceNumber_20(uint64_t value)
	{
		___writeSequenceNumber_20 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_21() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___readSequenceNumber_21)); }
	inline uint64_t get_readSequenceNumber_21() const { return ___readSequenceNumber_21; }
	inline uint64_t* get_address_of_readSequenceNumber_21() { return &___readSequenceNumber_21; }
	inline void set_readSequenceNumber_21(uint64_t value)
	{
		___readSequenceNumber_21 = value;
	}

	inline static int32_t get_offset_of_clientRandom_22() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___clientRandom_22)); }
	inline ByteU5BU5D_t4116647657* get_clientRandom_22() const { return ___clientRandom_22; }
	inline ByteU5BU5D_t4116647657** get_address_of_clientRandom_22() { return &___clientRandom_22; }
	inline void set_clientRandom_22(ByteU5BU5D_t4116647657* value)
	{
		___clientRandom_22 = value;
		Il2CppCodeGenWriteBarrier((&___clientRandom_22), value);
	}

	inline static int32_t get_offset_of_serverRandom_23() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___serverRandom_23)); }
	inline ByteU5BU5D_t4116647657* get_serverRandom_23() const { return ___serverRandom_23; }
	inline ByteU5BU5D_t4116647657** get_address_of_serverRandom_23() { return &___serverRandom_23; }
	inline void set_serverRandom_23(ByteU5BU5D_t4116647657* value)
	{
		___serverRandom_23 = value;
		Il2CppCodeGenWriteBarrier((&___serverRandom_23), value);
	}

	inline static int32_t get_offset_of_randomCS_24() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___randomCS_24)); }
	inline ByteU5BU5D_t4116647657* get_randomCS_24() const { return ___randomCS_24; }
	inline ByteU5BU5D_t4116647657** get_address_of_randomCS_24() { return &___randomCS_24; }
	inline void set_randomCS_24(ByteU5BU5D_t4116647657* value)
	{
		___randomCS_24 = value;
		Il2CppCodeGenWriteBarrier((&___randomCS_24), value);
	}

	inline static int32_t get_offset_of_randomSC_25() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___randomSC_25)); }
	inline ByteU5BU5D_t4116647657* get_randomSC_25() const { return ___randomSC_25; }
	inline ByteU5BU5D_t4116647657** get_address_of_randomSC_25() { return &___randomSC_25; }
	inline void set_randomSC_25(ByteU5BU5D_t4116647657* value)
	{
		___randomSC_25 = value;
		Il2CppCodeGenWriteBarrier((&___randomSC_25), value);
	}

	inline static int32_t get_offset_of_masterSecret_26() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___masterSecret_26)); }
	inline ByteU5BU5D_t4116647657* get_masterSecret_26() const { return ___masterSecret_26; }
	inline ByteU5BU5D_t4116647657** get_address_of_masterSecret_26() { return &___masterSecret_26; }
	inline void set_masterSecret_26(ByteU5BU5D_t4116647657* value)
	{
		___masterSecret_26 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_26), value);
	}

	inline static int32_t get_offset_of_clientWriteKey_27() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___clientWriteKey_27)); }
	inline ByteU5BU5D_t4116647657* get_clientWriteKey_27() const { return ___clientWriteKey_27; }
	inline ByteU5BU5D_t4116647657** get_address_of_clientWriteKey_27() { return &___clientWriteKey_27; }
	inline void set_clientWriteKey_27(ByteU5BU5D_t4116647657* value)
	{
		___clientWriteKey_27 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteKey_27), value);
	}

	inline static int32_t get_offset_of_serverWriteKey_28() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___serverWriteKey_28)); }
	inline ByteU5BU5D_t4116647657* get_serverWriteKey_28() const { return ___serverWriteKey_28; }
	inline ByteU5BU5D_t4116647657** get_address_of_serverWriteKey_28() { return &___serverWriteKey_28; }
	inline void set_serverWriteKey_28(ByteU5BU5D_t4116647657* value)
	{
		___serverWriteKey_28 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteKey_28), value);
	}

	inline static int32_t get_offset_of_clientWriteIV_29() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___clientWriteIV_29)); }
	inline ByteU5BU5D_t4116647657* get_clientWriteIV_29() const { return ___clientWriteIV_29; }
	inline ByteU5BU5D_t4116647657** get_address_of_clientWriteIV_29() { return &___clientWriteIV_29; }
	inline void set_clientWriteIV_29(ByteU5BU5D_t4116647657* value)
	{
		___clientWriteIV_29 = value;
		Il2CppCodeGenWriteBarrier((&___clientWriteIV_29), value);
	}

	inline static int32_t get_offset_of_serverWriteIV_30() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___serverWriteIV_30)); }
	inline ByteU5BU5D_t4116647657* get_serverWriteIV_30() const { return ___serverWriteIV_30; }
	inline ByteU5BU5D_t4116647657** get_address_of_serverWriteIV_30() { return &___serverWriteIV_30; }
	inline void set_serverWriteIV_30(ByteU5BU5D_t4116647657* value)
	{
		___serverWriteIV_30 = value;
		Il2CppCodeGenWriteBarrier((&___serverWriteIV_30), value);
	}

	inline static int32_t get_offset_of_handshakeMessages_31() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___handshakeMessages_31)); }
	inline TlsStream_t2365453965 * get_handshakeMessages_31() const { return ___handshakeMessages_31; }
	inline TlsStream_t2365453965 ** get_address_of_handshakeMessages_31() { return &___handshakeMessages_31; }
	inline void set_handshakeMessages_31(TlsStream_t2365453965 * value)
	{
		___handshakeMessages_31 = value;
		Il2CppCodeGenWriteBarrier((&___handshakeMessages_31), value);
	}

	inline static int32_t get_offset_of_random_32() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___random_32)); }
	inline RandomNumberGenerator_t386037858 * get_random_32() const { return ___random_32; }
	inline RandomNumberGenerator_t386037858 ** get_address_of_random_32() { return &___random_32; }
	inline void set_random_32(RandomNumberGenerator_t386037858 * value)
	{
		___random_32 = value;
		Il2CppCodeGenWriteBarrier((&___random_32), value);
	}

	inline static int32_t get_offset_of_recordProtocol_33() { return static_cast<int32_t>(offsetof(Context_t3971234707, ___recordProtocol_33)); }
	inline RecordProtocol_t3759049701 * get_recordProtocol_33() const { return ___recordProtocol_33; }
	inline RecordProtocol_t3759049701 ** get_address_of_recordProtocol_33() { return &___recordProtocol_33; }
	inline void set_recordProtocol_33(RecordProtocol_t3759049701 * value)
	{
		___recordProtocol_33 = value;
		Il2CppCodeGenWriteBarrier((&___recordProtocol_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXT_T3971234707_H
#ifndef MESSAGEBASE_T422981883_H
#define MESSAGEBASE_T422981883_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.MessageBase
struct  MessageBase_t422981883  : public RuntimeObject
{
public:
	// System.Int32 Mono.Security.Protocol.Ntlm.MessageBase::_type
	int32_t ____type_1;
	// Mono.Security.Protocol.Ntlm.NtlmFlags Mono.Security.Protocol.Ntlm.MessageBase::_flags
	int32_t ____flags_2;

public:
	inline static int32_t get_offset_of__type_1() { return static_cast<int32_t>(offsetof(MessageBase_t422981883, ____type_1)); }
	inline int32_t get__type_1() const { return ____type_1; }
	inline int32_t* get_address_of__type_1() { return &____type_1; }
	inline void set__type_1(int32_t value)
	{
		____type_1 = value;
	}

	inline static int32_t get_offset_of__flags_2() { return static_cast<int32_t>(offsetof(MessageBase_t422981883, ____flags_2)); }
	inline int32_t get__flags_2() const { return ____flags_2; }
	inline int32_t* get_address_of__flags_2() { return &____flags_2; }
	inline void set__flags_2(int32_t value)
	{
		____flags_2 = value;
	}
};

struct MessageBase_t422981883_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.MessageBase::header
	ByteU5BU5D_t4116647657* ___header_0;

public:
	inline static int32_t get_offset_of_header_0() { return static_cast<int32_t>(offsetof(MessageBase_t422981883_StaticFields, ___header_0)); }
	inline ByteU5BU5D_t4116647657* get_header_0() const { return ___header_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_header_0() { return &___header_0; }
	inline void set_header_0(ByteU5BU5D_t4116647657* value)
	{
		___header_0 = value;
		Il2CppCodeGenWriteBarrier((&___header_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEBASE_T422981883_H
#ifndef ALERT_T4059934885_H
#define ALERT_T4059934885_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Alert
struct  Alert_t4059934885  : public RuntimeObject
{
public:
	// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t4059934885, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t4059934885, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALERT_T4059934885_H
#ifndef CIPHERSUITE_T3414744575_H
#define CIPHERSUITE_T3414744575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuite
struct  CipherSuite_t3414744575  : public RuntimeObject
{
public:
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::code
	int16_t ___code_1;
	// System.String Mono.Security.Protocol.Tls.CipherSuite::name
	String_t* ___name_2;
	// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::cipherAlgorithmType
	int32_t ___cipherAlgorithmType_3;
	// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::hashAlgorithmType
	int32_t ___hashAlgorithmType_4;
	// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::exchangeAlgorithmType
	int32_t ___exchangeAlgorithmType_5;
	// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::isExportable
	bool ___isExportable_6;
	// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::cipherMode
	int32_t ___cipherMode_7;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::keyMaterialSize
	uint8_t ___keyMaterialSize_8;
	// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::keyBlockSize
	int32_t ___keyBlockSize_9;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::expandedKeyMaterialSize
	uint8_t ___expandedKeyMaterialSize_10;
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::effectiveKeyBits
	int16_t ___effectiveKeyBits_11;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::ivSize
	uint8_t ___ivSize_12;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::blockSize
	uint8_t ___blockSize_13;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::context
	Context_t3971234707 * ___context_14;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::encryptionAlgorithm
	SymmetricAlgorithm_t4254223087 * ___encryptionAlgorithm_15;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::encryptionCipher
	RuntimeObject* ___encryptionCipher_16;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::decryptionAlgorithm
	SymmetricAlgorithm_t4254223087 * ___decryptionAlgorithm_17;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::decryptionCipher
	RuntimeObject* ___decryptionCipher_18;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::clientHMAC
	KeyedHashAlgorithm_t112861511 * ___clientHMAC_19;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::serverHMAC
	KeyedHashAlgorithm_t112861511 * ___serverHMAC_20;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_cipherAlgorithmType_3() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___cipherAlgorithmType_3)); }
	inline int32_t get_cipherAlgorithmType_3() const { return ___cipherAlgorithmType_3; }
	inline int32_t* get_address_of_cipherAlgorithmType_3() { return &___cipherAlgorithmType_3; }
	inline void set_cipherAlgorithmType_3(int32_t value)
	{
		___cipherAlgorithmType_3 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithmType_4() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___hashAlgorithmType_4)); }
	inline int32_t get_hashAlgorithmType_4() const { return ___hashAlgorithmType_4; }
	inline int32_t* get_address_of_hashAlgorithmType_4() { return &___hashAlgorithmType_4; }
	inline void set_hashAlgorithmType_4(int32_t value)
	{
		___hashAlgorithmType_4 = value;
	}

	inline static int32_t get_offset_of_exchangeAlgorithmType_5() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___exchangeAlgorithmType_5)); }
	inline int32_t get_exchangeAlgorithmType_5() const { return ___exchangeAlgorithmType_5; }
	inline int32_t* get_address_of_exchangeAlgorithmType_5() { return &___exchangeAlgorithmType_5; }
	inline void set_exchangeAlgorithmType_5(int32_t value)
	{
		___exchangeAlgorithmType_5 = value;
	}

	inline static int32_t get_offset_of_isExportable_6() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___isExportable_6)); }
	inline bool get_isExportable_6() const { return ___isExportable_6; }
	inline bool* get_address_of_isExportable_6() { return &___isExportable_6; }
	inline void set_isExportable_6(bool value)
	{
		___isExportable_6 = value;
	}

	inline static int32_t get_offset_of_cipherMode_7() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___cipherMode_7)); }
	inline int32_t get_cipherMode_7() const { return ___cipherMode_7; }
	inline int32_t* get_address_of_cipherMode_7() { return &___cipherMode_7; }
	inline void set_cipherMode_7(int32_t value)
	{
		___cipherMode_7 = value;
	}

	inline static int32_t get_offset_of_keyMaterialSize_8() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___keyMaterialSize_8)); }
	inline uint8_t get_keyMaterialSize_8() const { return ___keyMaterialSize_8; }
	inline uint8_t* get_address_of_keyMaterialSize_8() { return &___keyMaterialSize_8; }
	inline void set_keyMaterialSize_8(uint8_t value)
	{
		___keyMaterialSize_8 = value;
	}

	inline static int32_t get_offset_of_keyBlockSize_9() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___keyBlockSize_9)); }
	inline int32_t get_keyBlockSize_9() const { return ___keyBlockSize_9; }
	inline int32_t* get_address_of_keyBlockSize_9() { return &___keyBlockSize_9; }
	inline void set_keyBlockSize_9(int32_t value)
	{
		___keyBlockSize_9 = value;
	}

	inline static int32_t get_offset_of_expandedKeyMaterialSize_10() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___expandedKeyMaterialSize_10)); }
	inline uint8_t get_expandedKeyMaterialSize_10() const { return ___expandedKeyMaterialSize_10; }
	inline uint8_t* get_address_of_expandedKeyMaterialSize_10() { return &___expandedKeyMaterialSize_10; }
	inline void set_expandedKeyMaterialSize_10(uint8_t value)
	{
		___expandedKeyMaterialSize_10 = value;
	}

	inline static int32_t get_offset_of_effectiveKeyBits_11() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___effectiveKeyBits_11)); }
	inline int16_t get_effectiveKeyBits_11() const { return ___effectiveKeyBits_11; }
	inline int16_t* get_address_of_effectiveKeyBits_11() { return &___effectiveKeyBits_11; }
	inline void set_effectiveKeyBits_11(int16_t value)
	{
		___effectiveKeyBits_11 = value;
	}

	inline static int32_t get_offset_of_ivSize_12() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___ivSize_12)); }
	inline uint8_t get_ivSize_12() const { return ___ivSize_12; }
	inline uint8_t* get_address_of_ivSize_12() { return &___ivSize_12; }
	inline void set_ivSize_12(uint8_t value)
	{
		___ivSize_12 = value;
	}

	inline static int32_t get_offset_of_blockSize_13() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___blockSize_13)); }
	inline uint8_t get_blockSize_13() const { return ___blockSize_13; }
	inline uint8_t* get_address_of_blockSize_13() { return &___blockSize_13; }
	inline void set_blockSize_13(uint8_t value)
	{
		___blockSize_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___context_14)); }
	inline Context_t3971234707 * get_context_14() const { return ___context_14; }
	inline Context_t3971234707 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(Context_t3971234707 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier((&___context_14), value);
	}

	inline static int32_t get_offset_of_encryptionAlgorithm_15() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___encryptionAlgorithm_15)); }
	inline SymmetricAlgorithm_t4254223087 * get_encryptionAlgorithm_15() const { return ___encryptionAlgorithm_15; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_encryptionAlgorithm_15() { return &___encryptionAlgorithm_15; }
	inline void set_encryptionAlgorithm_15(SymmetricAlgorithm_t4254223087 * value)
	{
		___encryptionAlgorithm_15 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionAlgorithm_15), value);
	}

	inline static int32_t get_offset_of_encryptionCipher_16() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___encryptionCipher_16)); }
	inline RuntimeObject* get_encryptionCipher_16() const { return ___encryptionCipher_16; }
	inline RuntimeObject** get_address_of_encryptionCipher_16() { return &___encryptionCipher_16; }
	inline void set_encryptionCipher_16(RuntimeObject* value)
	{
		___encryptionCipher_16 = value;
		Il2CppCodeGenWriteBarrier((&___encryptionCipher_16), value);
	}

	inline static int32_t get_offset_of_decryptionAlgorithm_17() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___decryptionAlgorithm_17)); }
	inline SymmetricAlgorithm_t4254223087 * get_decryptionAlgorithm_17() const { return ___decryptionAlgorithm_17; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_decryptionAlgorithm_17() { return &___decryptionAlgorithm_17; }
	inline void set_decryptionAlgorithm_17(SymmetricAlgorithm_t4254223087 * value)
	{
		___decryptionAlgorithm_17 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionAlgorithm_17), value);
	}

	inline static int32_t get_offset_of_decryptionCipher_18() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___decryptionCipher_18)); }
	inline RuntimeObject* get_decryptionCipher_18() const { return ___decryptionCipher_18; }
	inline RuntimeObject** get_address_of_decryptionCipher_18() { return &___decryptionCipher_18; }
	inline void set_decryptionCipher_18(RuntimeObject* value)
	{
		___decryptionCipher_18 = value;
		Il2CppCodeGenWriteBarrier((&___decryptionCipher_18), value);
	}

	inline static int32_t get_offset_of_clientHMAC_19() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___clientHMAC_19)); }
	inline KeyedHashAlgorithm_t112861511 * get_clientHMAC_19() const { return ___clientHMAC_19; }
	inline KeyedHashAlgorithm_t112861511 ** get_address_of_clientHMAC_19() { return &___clientHMAC_19; }
	inline void set_clientHMAC_19(KeyedHashAlgorithm_t112861511 * value)
	{
		___clientHMAC_19 = value;
		Il2CppCodeGenWriteBarrier((&___clientHMAC_19), value);
	}

	inline static int32_t get_offset_of_serverHMAC_20() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575, ___serverHMAC_20)); }
	inline KeyedHashAlgorithm_t112861511 * get_serverHMAC_20() const { return ___serverHMAC_20; }
	inline KeyedHashAlgorithm_t112861511 ** get_address_of_serverHMAC_20() { return &___serverHMAC_20; }
	inline void set_serverHMAC_20(KeyedHashAlgorithm_t112861511 * value)
	{
		___serverHMAC_20 = value;
		Il2CppCodeGenWriteBarrier((&___serverHMAC_20), value);
	}
};

struct CipherSuite_t3414744575_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EmptyArray
	ByteU5BU5D_t4116647657* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(CipherSuite_t3414744575_StaticFields, ___EmptyArray_0)); }
	inline ByteU5BU5D_t4116647657* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(ByteU5BU5D_t4116647657* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITE_T3414744575_H
#ifndef CIPHERSUITECOLLECTION_T1129639304_H
#define CIPHERSUITECOLLECTION_T1129639304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct  CipherSuiteCollection_t1129639304  : public RuntimeObject
{
public:
	// System.Collections.ArrayList Mono.Security.Protocol.Tls.CipherSuiteCollection::cipherSuites
	ArrayList_t2718874744 * ___cipherSuites_0;
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.CipherSuiteCollection::protocol
	int32_t ___protocol_1;

public:
	inline static int32_t get_offset_of_cipherSuites_0() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t1129639304, ___cipherSuites_0)); }
	inline ArrayList_t2718874744 * get_cipherSuites_0() const { return ___cipherSuites_0; }
	inline ArrayList_t2718874744 ** get_address_of_cipherSuites_0() { return &___cipherSuites_0; }
	inline void set_cipherSuites_0(ArrayList_t2718874744 * value)
	{
		___cipherSuites_0 = value;
		Il2CppCodeGenWriteBarrier((&___cipherSuites_0), value);
	}

	inline static int32_t get_offset_of_protocol_1() { return static_cast<int32_t>(offsetof(CipherSuiteCollection_t1129639304, ___protocol_1)); }
	inline int32_t get_protocol_1() const { return ___protocol_1; }
	inline int32_t* get_address_of_protocol_1() { return &___protocol_1; }
	inline void set_protocol_1(int32_t value)
	{
		___protocol_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERSUITECOLLECTION_T1129639304_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef SSLCLIENTSTREAM_T3914624661_H
#define SSLCLIENTSTREAM_T3914624661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslClientStream
struct  SslClientStream_t3914624661  : public SslStreamBase_t1667413407
{
public:
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation
	CertificateValidationCallback_t4091668218 * ___ServerCertValidation_17;
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::ClientCertSelection
	CertificateSelectionCallback_t3743405224 * ___ClientCertSelection_18;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::PrivateKeySelection
	PrivateKeySelectionCallback_t3240194217 * ___PrivateKeySelection_19;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslClientStream::ServerCertValidation2
	CertificateValidationCallback2_t1842476440 * ___ServerCertValidation2_20;

public:
	inline static int32_t get_offset_of_ServerCertValidation_17() { return static_cast<int32_t>(offsetof(SslClientStream_t3914624661, ___ServerCertValidation_17)); }
	inline CertificateValidationCallback_t4091668218 * get_ServerCertValidation_17() const { return ___ServerCertValidation_17; }
	inline CertificateValidationCallback_t4091668218 ** get_address_of_ServerCertValidation_17() { return &___ServerCertValidation_17; }
	inline void set_ServerCertValidation_17(CertificateValidationCallback_t4091668218 * value)
	{
		___ServerCertValidation_17 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation_17), value);
	}

	inline static int32_t get_offset_of_ClientCertSelection_18() { return static_cast<int32_t>(offsetof(SslClientStream_t3914624661, ___ClientCertSelection_18)); }
	inline CertificateSelectionCallback_t3743405224 * get_ClientCertSelection_18() const { return ___ClientCertSelection_18; }
	inline CertificateSelectionCallback_t3743405224 ** get_address_of_ClientCertSelection_18() { return &___ClientCertSelection_18; }
	inline void set_ClientCertSelection_18(CertificateSelectionCallback_t3743405224 * value)
	{
		___ClientCertSelection_18 = value;
		Il2CppCodeGenWriteBarrier((&___ClientCertSelection_18), value);
	}

	inline static int32_t get_offset_of_PrivateKeySelection_19() { return static_cast<int32_t>(offsetof(SslClientStream_t3914624661, ___PrivateKeySelection_19)); }
	inline PrivateKeySelectionCallback_t3240194217 * get_PrivateKeySelection_19() const { return ___PrivateKeySelection_19; }
	inline PrivateKeySelectionCallback_t3240194217 ** get_address_of_PrivateKeySelection_19() { return &___PrivateKeySelection_19; }
	inline void set_PrivateKeySelection_19(PrivateKeySelectionCallback_t3240194217 * value)
	{
		___PrivateKeySelection_19 = value;
		Il2CppCodeGenWriteBarrier((&___PrivateKeySelection_19), value);
	}

	inline static int32_t get_offset_of_ServerCertValidation2_20() { return static_cast<int32_t>(offsetof(SslClientStream_t3914624661, ___ServerCertValidation2_20)); }
	inline CertificateValidationCallback2_t1842476440 * get_ServerCertValidation2_20() const { return ___ServerCertValidation2_20; }
	inline CertificateValidationCallback2_t1842476440 ** get_address_of_ServerCertValidation2_20() { return &___ServerCertValidation2_20; }
	inline void set_ServerCertValidation2_20(CertificateValidationCallback2_t1842476440 * value)
	{
		___ServerCertValidation2_20 = value;
		Il2CppCodeGenWriteBarrier((&___ServerCertValidation2_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SSLCLIENTSTREAM_T3914624661_H
#ifndef TYPE3MESSAGE_T2139513857_H
#define TYPE3MESSAGE_T2139513857_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type3Message
struct  Type3Message_t2139513857  : public MessageBase_t422981883
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_challenge
	ByteU5BU5D_t4116647657* ____challenge_3;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_host
	String_t* ____host_4;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_domain
	String_t* ____domain_5;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_username
	String_t* ____username_6;
	// System.String Mono.Security.Protocol.Ntlm.Type3Message::_password
	String_t* ____password_7;
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_lm
	ByteU5BU5D_t4116647657* ____lm_8;
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type3Message::_nt
	ByteU5BU5D_t4116647657* ____nt_9;

public:
	inline static int32_t get_offset_of__challenge_3() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____challenge_3)); }
	inline ByteU5BU5D_t4116647657* get__challenge_3() const { return ____challenge_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__challenge_3() { return &____challenge_3; }
	inline void set__challenge_3(ByteU5BU5D_t4116647657* value)
	{
		____challenge_3 = value;
		Il2CppCodeGenWriteBarrier((&____challenge_3), value);
	}

	inline static int32_t get_offset_of__host_4() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____host_4)); }
	inline String_t* get__host_4() const { return ____host_4; }
	inline String_t** get_address_of__host_4() { return &____host_4; }
	inline void set__host_4(String_t* value)
	{
		____host_4 = value;
		Il2CppCodeGenWriteBarrier((&____host_4), value);
	}

	inline static int32_t get_offset_of__domain_5() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____domain_5)); }
	inline String_t* get__domain_5() const { return ____domain_5; }
	inline String_t** get_address_of__domain_5() { return &____domain_5; }
	inline void set__domain_5(String_t* value)
	{
		____domain_5 = value;
		Il2CppCodeGenWriteBarrier((&____domain_5), value);
	}

	inline static int32_t get_offset_of__username_6() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____username_6)); }
	inline String_t* get__username_6() const { return ____username_6; }
	inline String_t** get_address_of__username_6() { return &____username_6; }
	inline void set__username_6(String_t* value)
	{
		____username_6 = value;
		Il2CppCodeGenWriteBarrier((&____username_6), value);
	}

	inline static int32_t get_offset_of__password_7() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____password_7)); }
	inline String_t* get__password_7() const { return ____password_7; }
	inline String_t** get_address_of__password_7() { return &____password_7; }
	inline void set__password_7(String_t* value)
	{
		____password_7 = value;
		Il2CppCodeGenWriteBarrier((&____password_7), value);
	}

	inline static int32_t get_offset_of__lm_8() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____lm_8)); }
	inline ByteU5BU5D_t4116647657* get__lm_8() const { return ____lm_8; }
	inline ByteU5BU5D_t4116647657** get_address_of__lm_8() { return &____lm_8; }
	inline void set__lm_8(ByteU5BU5D_t4116647657* value)
	{
		____lm_8 = value;
		Il2CppCodeGenWriteBarrier((&____lm_8), value);
	}

	inline static int32_t get_offset_of__nt_9() { return static_cast<int32_t>(offsetof(Type3Message_t2139513857, ____nt_9)); }
	inline ByteU5BU5D_t4116647657* get__nt_9() const { return ____nt_9; }
	inline ByteU5BU5D_t4116647657** get_address_of__nt_9() { return &____nt_9; }
	inline void set__nt_9(ByteU5BU5D_t4116647657* value)
	{
		____nt_9 = value;
		Il2CppCodeGenWriteBarrier((&____nt_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE3MESSAGE_T2139513857_H
#ifndef HTTPSCLIENTSTREAM_T1160552561_H
#define HTTPSCLIENTSTREAM_T1160552561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.HttpsClientStream
struct  HttpsClientStream_t1160552561  : public SslClientStream_t3914624661
{
public:
	// System.Net.HttpWebRequest Mono.Security.Protocol.Tls.HttpsClientStream::_request
	HttpWebRequest_t1669436515 * ____request_21;
	// System.Int32 Mono.Security.Protocol.Tls.HttpsClientStream::_status
	int32_t ____status_22;

public:
	inline static int32_t get_offset_of__request_21() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561, ____request_21)); }
	inline HttpWebRequest_t1669436515 * get__request_21() const { return ____request_21; }
	inline HttpWebRequest_t1669436515 ** get_address_of__request_21() { return &____request_21; }
	inline void set__request_21(HttpWebRequest_t1669436515 * value)
	{
		____request_21 = value;
		Il2CppCodeGenWriteBarrier((&____request_21), value);
	}

	inline static int32_t get_offset_of__status_22() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561, ____status_22)); }
	inline int32_t get__status_22() const { return ____status_22; }
	inline int32_t* get_address_of__status_22() { return &____status_22; }
	inline void set__status_22(int32_t value)
	{
		____status_22 = value;
	}
};

struct HttpsClientStream_t1160552561_StaticFields
{
public:
	// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache2
	CertificateSelectionCallback_t3743405224 * ___U3CU3Ef__amU24cache2_23;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.HttpsClientStream::<>f__am$cache3
	PrivateKeySelectionCallback_t3240194217 * ___U3CU3Ef__amU24cache3_24;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_23() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561_StaticFields, ___U3CU3Ef__amU24cache2_23)); }
	inline CertificateSelectionCallback_t3743405224 * get_U3CU3Ef__amU24cache2_23() const { return ___U3CU3Ef__amU24cache2_23; }
	inline CertificateSelectionCallback_t3743405224 ** get_address_of_U3CU3Ef__amU24cache2_23() { return &___U3CU3Ef__amU24cache2_23; }
	inline void set_U3CU3Ef__amU24cache2_23(CertificateSelectionCallback_t3743405224 * value)
	{
		___U3CU3Ef__amU24cache2_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_24() { return static_cast<int32_t>(offsetof(HttpsClientStream_t1160552561_StaticFields, ___U3CU3Ef__amU24cache3_24)); }
	inline PrivateKeySelectionCallback_t3240194217 * get_U3CU3Ef__amU24cache3_24() const { return ___U3CU3Ef__amU24cache3_24; }
	inline PrivateKeySelectionCallback_t3240194217 ** get_address_of_U3CU3Ef__amU24cache3_24() { return &___U3CU3Ef__amU24cache3_24; }
	inline void set_U3CU3Ef__amU24cache3_24(PrivateKeySelectionCallback_t3240194217 * value)
	{
		___U3CU3Ef__amU24cache3_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPSCLIENTSTREAM_T1160552561_H
#ifndef CLIENTSESSIONINFO_T1775821398_H
#define CLIENTSESSIONINFO_T1775821398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientSessionInfo
struct  ClientSessionInfo_t1775821398  : public RuntimeObject
{
public:
	// System.Boolean Mono.Security.Protocol.Tls.ClientSessionInfo::disposed
	bool ___disposed_2;
	// System.DateTime Mono.Security.Protocol.Tls.ClientSessionInfo::validuntil
	DateTime_t3738529785  ___validuntil_3;
	// System.String Mono.Security.Protocol.Tls.ClientSessionInfo::host
	String_t* ___host_4;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::sid
	ByteU5BU5D_t4116647657* ___sid_5;
	// System.Byte[] Mono.Security.Protocol.Tls.ClientSessionInfo::masterSecret
	ByteU5BU5D_t4116647657* ___masterSecret_6;

public:
	inline static int32_t get_offset_of_disposed_2() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398, ___disposed_2)); }
	inline bool get_disposed_2() const { return ___disposed_2; }
	inline bool* get_address_of_disposed_2() { return &___disposed_2; }
	inline void set_disposed_2(bool value)
	{
		___disposed_2 = value;
	}

	inline static int32_t get_offset_of_validuntil_3() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398, ___validuntil_3)); }
	inline DateTime_t3738529785  get_validuntil_3() const { return ___validuntil_3; }
	inline DateTime_t3738529785 * get_address_of_validuntil_3() { return &___validuntil_3; }
	inline void set_validuntil_3(DateTime_t3738529785  value)
	{
		___validuntil_3 = value;
	}

	inline static int32_t get_offset_of_host_4() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398, ___host_4)); }
	inline String_t* get_host_4() const { return ___host_4; }
	inline String_t** get_address_of_host_4() { return &___host_4; }
	inline void set_host_4(String_t* value)
	{
		___host_4 = value;
		Il2CppCodeGenWriteBarrier((&___host_4), value);
	}

	inline static int32_t get_offset_of_sid_5() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398, ___sid_5)); }
	inline ByteU5BU5D_t4116647657* get_sid_5() const { return ___sid_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_sid_5() { return &___sid_5; }
	inline void set_sid_5(ByteU5BU5D_t4116647657* value)
	{
		___sid_5 = value;
		Il2CppCodeGenWriteBarrier((&___sid_5), value);
	}

	inline static int32_t get_offset_of_masterSecret_6() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398, ___masterSecret_6)); }
	inline ByteU5BU5D_t4116647657* get_masterSecret_6() const { return ___masterSecret_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_masterSecret_6() { return &___masterSecret_6; }
	inline void set_masterSecret_6(ByteU5BU5D_t4116647657* value)
	{
		___masterSecret_6 = value;
		Il2CppCodeGenWriteBarrier((&___masterSecret_6), value);
	}
};

struct ClientSessionInfo_t1775821398_StaticFields
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.ClientSessionInfo::ValidityInterval
	int32_t ___ValidityInterval_1;

public:
	inline static int32_t get_offset_of_ValidityInterval_1() { return static_cast<int32_t>(offsetof(ClientSessionInfo_t1775821398_StaticFields, ___ValidityInterval_1)); }
	inline int32_t get_ValidityInterval_1() const { return ___ValidityInterval_1; }
	inline int32_t* get_address_of_ValidityInterval_1() { return &___ValidityInterval_1; }
	inline void set_ValidityInterval_1(int32_t value)
	{
		___ValidityInterval_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTSESSIONINFO_T1775821398_H
#ifndef CLIENTCONTEXT_T2797401965_H
#define CLIENTCONTEXT_T2797401965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t2797401965  : public Context_t3971234707
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t3914624661 * ___sslStream_34;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_35;

public:
	inline static int32_t get_offset_of_sslStream_34() { return static_cast<int32_t>(offsetof(ClientContext_t2797401965, ___sslStream_34)); }
	inline SslClientStream_t3914624661 * get_sslStream_34() const { return ___sslStream_34; }
	inline SslClientStream_t3914624661 ** get_address_of_sslStream_34() { return &___sslStream_34; }
	inline void set_sslStream_34(SslClientStream_t3914624661 * value)
	{
		___sslStream_34 = value;
		Il2CppCodeGenWriteBarrier((&___sslStream_34), value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_35() { return static_cast<int32_t>(offsetof(ClientContext_t2797401965, ___clientHelloProtocol_35)); }
	inline int16_t get_clientHelloProtocol_35() const { return ___clientHelloProtocol_35; }
	inline int16_t* get_address_of_clientHelloProtocol_35() { return &___clientHelloProtocol_35; }
	inline void set_clientHelloProtocol_35(int16_t value)
	{
		___clientHelloProtocol_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTCONTEXT_T2797401965_H
#ifndef TYPE2MESSAGE_T2139513824_H
#define TYPE2MESSAGE_T2139513824_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type2Message
struct  Type2Message_t2139513824  : public MessageBase_t422981883
{
public:
	// System.Byte[] Mono.Security.Protocol.Ntlm.Type2Message::_nonce
	ByteU5BU5D_t4116647657* ____nonce_3;

public:
	inline static int32_t get_offset_of__nonce_3() { return static_cast<int32_t>(offsetof(Type2Message_t2139513824, ____nonce_3)); }
	inline ByteU5BU5D_t4116647657* get__nonce_3() const { return ____nonce_3; }
	inline ByteU5BU5D_t4116647657** get_address_of__nonce_3() { return &____nonce_3; }
	inline void set__nonce_3(ByteU5BU5D_t4116647657* value)
	{
		____nonce_3 = value;
		Il2CppCodeGenWriteBarrier((&____nonce_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE2MESSAGE_T2139513824_H
#ifndef TYPE1MESSAGE_T2139513923_H
#define TYPE1MESSAGE_T2139513923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Ntlm.Type1Message
struct  Type1Message_t2139513923  : public MessageBase_t422981883
{
public:
	// System.String Mono.Security.Protocol.Ntlm.Type1Message::_host
	String_t* ____host_3;
	// System.String Mono.Security.Protocol.Ntlm.Type1Message::_domain
	String_t* ____domain_4;

public:
	inline static int32_t get_offset_of__host_3() { return static_cast<int32_t>(offsetof(Type1Message_t2139513923, ____host_3)); }
	inline String_t* get__host_3() const { return ____host_3; }
	inline String_t** get_address_of__host_3() { return &____host_3; }
	inline void set__host_3(String_t* value)
	{
		____host_3 = value;
		Il2CppCodeGenWriteBarrier((&____host_3), value);
	}

	inline static int32_t get_offset_of__domain_4() { return static_cast<int32_t>(offsetof(Type1Message_t2139513923, ____domain_4)); }
	inline String_t* get__domain_4() const { return ____domain_4; }
	inline String_t** get_address_of__domain_4() { return &____domain_4; }
	inline void set__domain_4(String_t* value)
	{
		____domain_4 = value;
		Il2CppCodeGenWriteBarrier((&____domain_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE1MESSAGE_T2139513923_H
#ifndef RC4_T2752556436_H
#define RC4_T2752556436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RC4
struct  RC4_t2752556436  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

struct RC4_t2752556436_StaticFields
{
public:
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalBlockSizes
	KeySizesU5BU5D_t722666473* ___s_legalBlockSizes_10;
	// System.Security.Cryptography.KeySizes[] Mono.Security.Cryptography.RC4::s_legalKeySizes
	KeySizesU5BU5D_t722666473* ___s_legalKeySizes_11;

public:
	inline static int32_t get_offset_of_s_legalBlockSizes_10() { return static_cast<int32_t>(offsetof(RC4_t2752556436_StaticFields, ___s_legalBlockSizes_10)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalBlockSizes_10() const { return ___s_legalBlockSizes_10; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalBlockSizes_10() { return &___s_legalBlockSizes_10; }
	inline void set_s_legalBlockSizes_10(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalBlockSizes_10 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalBlockSizes_10), value);
	}

	inline static int32_t get_offset_of_s_legalKeySizes_11() { return static_cast<int32_t>(offsetof(RC4_t2752556436_StaticFields, ___s_legalKeySizes_11)); }
	inline KeySizesU5BU5D_t722666473* get_s_legalKeySizes_11() const { return ___s_legalKeySizes_11; }
	inline KeySizesU5BU5D_t722666473** get_address_of_s_legalKeySizes_11() { return &___s_legalKeySizes_11; }
	inline void set_s_legalKeySizes_11(KeySizesU5BU5D_t722666473* value)
	{
		___s_legalKeySizes_11 = value;
		Il2CppCodeGenWriteBarrier((&___s_legalKeySizes_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RC4_T2752556436_H
#ifndef KEYGENERATEDEVENTHANDLER_T3064139578_H
#define KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.RSAManaged/KeyGeneratedEventHandler
struct  KeyGeneratedEventHandler_t3064139578  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYGENERATEDEVENTHANDLER_T3064139578_H
#ifndef X509CRLENTRY_T645568789_H
#define X509CRLENTRY_T645568789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl/X509CrlEntry
struct  X509CrlEntry_t645568789  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_t4116647657* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_t3738529785  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t609554709 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___sn_0)); }
	inline ByteU5BU5D_t4116647657* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_t4116647657** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_t4116647657* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((&___sn_0), value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___revocationDate_1)); }
	inline DateTime_t3738529785  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_t3738529785 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_t3738529785  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_t645568789, ___extensions_2)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRLENTRY_T645568789_H
#ifndef X509CRL_T1148767388_H
#define X509CRL_T1148767388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Crl
struct  X509Crl_t1148767388  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X509Crl::issuer
	String_t* ___issuer_0;
	// System.Byte Mono.Security.X509.X509Crl::version
	uint8_t ___version_1;
	// System.DateTime Mono.Security.X509.X509Crl::thisUpdate
	DateTime_t3738529785  ___thisUpdate_2;
	// System.DateTime Mono.Security.X509.X509Crl::nextUpdate
	DateTime_t3738529785  ___nextUpdate_3;
	// System.Collections.ArrayList Mono.Security.X509.X509Crl::entries
	ArrayList_t2718874744 * ___entries_4;
	// System.String Mono.Security.X509.X509Crl::signatureOID
	String_t* ___signatureOID_5;
	// System.Byte[] Mono.Security.X509.X509Crl::signature
	ByteU5BU5D_t4116647657* ___signature_6;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::extensions
	X509ExtensionCollection_t609554709 * ___extensions_7;
	// System.Byte[] Mono.Security.X509.X509Crl::encoded
	ByteU5BU5D_t4116647657* ___encoded_8;
	// System.Byte[] Mono.Security.X509.X509Crl::hash_value
	ByteU5BU5D_t4116647657* ___hash_value_9;

public:
	inline static int32_t get_offset_of_issuer_0() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___issuer_0)); }
	inline String_t* get_issuer_0() const { return ___issuer_0; }
	inline String_t** get_address_of_issuer_0() { return &___issuer_0; }
	inline void set_issuer_0(String_t* value)
	{
		___issuer_0 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___version_1)); }
	inline uint8_t get_version_1() const { return ___version_1; }
	inline uint8_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(uint8_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_thisUpdate_2() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___thisUpdate_2)); }
	inline DateTime_t3738529785  get_thisUpdate_2() const { return ___thisUpdate_2; }
	inline DateTime_t3738529785 * get_address_of_thisUpdate_2() { return &___thisUpdate_2; }
	inline void set_thisUpdate_2(DateTime_t3738529785  value)
	{
		___thisUpdate_2 = value;
	}

	inline static int32_t get_offset_of_nextUpdate_3() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___nextUpdate_3)); }
	inline DateTime_t3738529785  get_nextUpdate_3() const { return ___nextUpdate_3; }
	inline DateTime_t3738529785 * get_address_of_nextUpdate_3() { return &___nextUpdate_3; }
	inline void set_nextUpdate_3(DateTime_t3738529785  value)
	{
		___nextUpdate_3 = value;
	}

	inline static int32_t get_offset_of_entries_4() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___entries_4)); }
	inline ArrayList_t2718874744 * get_entries_4() const { return ___entries_4; }
	inline ArrayList_t2718874744 ** get_address_of_entries_4() { return &___entries_4; }
	inline void set_entries_4(ArrayList_t2718874744 * value)
	{
		___entries_4 = value;
		Il2CppCodeGenWriteBarrier((&___entries_4), value);
	}

	inline static int32_t get_offset_of_signatureOID_5() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signatureOID_5)); }
	inline String_t* get_signatureOID_5() const { return ___signatureOID_5; }
	inline String_t** get_address_of_signatureOID_5() { return &___signatureOID_5; }
	inline void set_signatureOID_5(String_t* value)
	{
		___signatureOID_5 = value;
		Il2CppCodeGenWriteBarrier((&___signatureOID_5), value);
	}

	inline static int32_t get_offset_of_signature_6() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___signature_6)); }
	inline ByteU5BU5D_t4116647657* get_signature_6() const { return ___signature_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_6() { return &___signature_6; }
	inline void set_signature_6(ByteU5BU5D_t4116647657* value)
	{
		___signature_6 = value;
		Il2CppCodeGenWriteBarrier((&___signature_6), value);
	}

	inline static int32_t get_offset_of_extensions_7() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___extensions_7)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_7() const { return ___extensions_7; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_7() { return &___extensions_7; }
	inline void set_extensions_7(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_7 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_7), value);
	}

	inline static int32_t get_offset_of_encoded_8() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___encoded_8)); }
	inline ByteU5BU5D_t4116647657* get_encoded_8() const { return ___encoded_8; }
	inline ByteU5BU5D_t4116647657** get_address_of_encoded_8() { return &___encoded_8; }
	inline void set_encoded_8(ByteU5BU5D_t4116647657* value)
	{
		___encoded_8 = value;
		Il2CppCodeGenWriteBarrier((&___encoded_8), value);
	}

	inline static int32_t get_offset_of_hash_value_9() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388, ___hash_value_9)); }
	inline ByteU5BU5D_t4116647657* get_hash_value_9() const { return ___hash_value_9; }
	inline ByteU5BU5D_t4116647657** get_address_of_hash_value_9() { return &___hash_value_9; }
	inline void set_hash_value_9(ByteU5BU5D_t4116647657* value)
	{
		___hash_value_9 = value;
		Il2CppCodeGenWriteBarrier((&___hash_value_9), value);
	}
};

struct X509Crl_t1148767388_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map12
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map12_10;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Crl::<>f__switch$map13
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map13_11;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map12_10() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map12_10)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map12_10() const { return ___U3CU3Ef__switchU24map12_10; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map12_10() { return &___U3CU3Ef__switchU24map12_10; }
	inline void set_U3CU3Ef__switchU24map12_10(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map12_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map12_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map13_11() { return static_cast<int32_t>(offsetof(X509Crl_t1148767388_StaticFields, ___U3CU3Ef__switchU24map13_11)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map13_11() const { return ___U3CU3Ef__switchU24map13_11; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map13_11() { return &___U3CU3Ef__switchU24map13_11; }
	inline void set_U3CU3Ef__switchU24map13_11(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map13_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map13_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CRL_T1148767388_H
#ifndef X509CERTIFICATEBUILDER_T3506341729_H
#define X509CERTIFICATEBUILDER_T3506341729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509CertificateBuilder
struct  X509CertificateBuilder_t3506341729  : public X509Builder_t1341539432
{
public:
	// System.Byte Mono.Security.X509.X509CertificateBuilder::version
	uint8_t ___version_3;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::sn
	ByteU5BU5D_t4116647657* ___sn_4;
	// System.String Mono.Security.X509.X509CertificateBuilder::issuer
	String_t* ___issuer_5;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notBefore
	DateTime_t3738529785  ___notBefore_6;
	// System.DateTime Mono.Security.X509.X509CertificateBuilder::notAfter
	DateTime_t3738529785  ___notAfter_7;
	// System.String Mono.Security.X509.X509CertificateBuilder::subject
	String_t* ___subject_8;
	// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.X509.X509CertificateBuilder::aa
	AsymmetricAlgorithm_t932037087 * ___aa_9;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_10;
	// System.Byte[] Mono.Security.X509.X509CertificateBuilder::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_11;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509CertificateBuilder::extensions
	X509ExtensionCollection_t609554709 * ___extensions_12;

public:
	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___version_3)); }
	inline uint8_t get_version_3() const { return ___version_3; }
	inline uint8_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(uint8_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_sn_4() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___sn_4)); }
	inline ByteU5BU5D_t4116647657* get_sn_4() const { return ___sn_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_sn_4() { return &___sn_4; }
	inline void set_sn_4(ByteU5BU5D_t4116647657* value)
	{
		___sn_4 = value;
		Il2CppCodeGenWriteBarrier((&___sn_4), value);
	}

	inline static int32_t get_offset_of_issuer_5() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___issuer_5)); }
	inline String_t* get_issuer_5() const { return ___issuer_5; }
	inline String_t** get_address_of_issuer_5() { return &___issuer_5; }
	inline void set_issuer_5(String_t* value)
	{
		___issuer_5 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_5), value);
	}

	inline static int32_t get_offset_of_notBefore_6() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___notBefore_6)); }
	inline DateTime_t3738529785  get_notBefore_6() const { return ___notBefore_6; }
	inline DateTime_t3738529785 * get_address_of_notBefore_6() { return &___notBefore_6; }
	inline void set_notBefore_6(DateTime_t3738529785  value)
	{
		___notBefore_6 = value;
	}

	inline static int32_t get_offset_of_notAfter_7() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___notAfter_7)); }
	inline DateTime_t3738529785  get_notAfter_7() const { return ___notAfter_7; }
	inline DateTime_t3738529785 * get_address_of_notAfter_7() { return &___notAfter_7; }
	inline void set_notAfter_7(DateTime_t3738529785  value)
	{
		___notAfter_7 = value;
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___subject_8)); }
	inline String_t* get_subject_8() const { return ___subject_8; }
	inline String_t** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(String_t* value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_aa_9() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___aa_9)); }
	inline AsymmetricAlgorithm_t932037087 * get_aa_9() const { return ___aa_9; }
	inline AsymmetricAlgorithm_t932037087 ** get_address_of_aa_9() { return &___aa_9; }
	inline void set_aa_9(AsymmetricAlgorithm_t932037087 * value)
	{
		___aa_9 = value;
		Il2CppCodeGenWriteBarrier((&___aa_9), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_10() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___issuerUniqueID_10)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_10() const { return ___issuerUniqueID_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_10() { return &___issuerUniqueID_10; }
	inline void set_issuerUniqueID_10(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_10 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_10), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_11() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___subjectUniqueID_11)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_11() const { return ___subjectUniqueID_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_11() { return &___subjectUniqueID_11; }
	inline void set_subjectUniqueID_11(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_11 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_11), value);
	}

	inline static int32_t get_offset_of_extensions_12() { return static_cast<int32_t>(offsetof(X509CertificateBuilder_t3506341729, ___extensions_12)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_12() const { return ___extensions_12; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_12() { return &___extensions_12; }
	inline void set_extensions_12(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_12 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATEBUILDER_T3506341729_H
#ifndef X509CERTIFICATE_T489243025_H
#define X509CERTIFICATE_T489243025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t489243025  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t2114160833 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t4116647657* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t3738529785  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t3738529785  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t2114160833 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t4116647657* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t2114160833 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t4116647657* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t4116647657* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t4116647657* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_t4116647657* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t2385438082 * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t2386879874 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t4116647657* ___serialnumber_18;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t4116647657* ___issuerUniqueID_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t4116647657* ___subjectUniqueID_20;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t609554709 * ___extensions_21;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___decoder_0)); }
	inline ASN1_t2114160833 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t2114160833 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t2114160833 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((&___decoder_0), value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t4116647657* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t4116647657* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_encodedcert_1), value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_from_2)); }
	inline DateTime_t3738529785  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t3738529785 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t3738529785  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_until_3)); }
	inline DateTime_t3738529785  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t3738529785 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t3738529785  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuer_4)); }
	inline ASN1_t2114160833 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t2114160833 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t2114160833 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_4), value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_issuername_5), value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgo_6), value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t4116647657* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t4116647657* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_keyalgoparams_7), value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subject_8)); }
	inline ASN1_t2114160833 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t2114160833 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t2114160833 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((&___subject_8), value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_subject_9), value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_publickey_10)); }
	inline ByteU5BU5D_t4116647657* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t4116647657* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_publickey_10), value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___signature_11)); }
	inline ByteU5BU5D_t4116647657* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t4116647657** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t4116647657* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((&___signature_11), value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgo_12), value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t4116647657* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t4116647657* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_signaturealgoparams_13), value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___certhash_14)); }
	inline ByteU5BU5D_t4116647657* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_t4116647657** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_t4116647657* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((&___certhash_14), value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____rsa_15)); }
	inline RSA_t2385438082 * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t2385438082 ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t2385438082 * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((&____rsa_15), value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ____dsa_16)); }
	inline DSA_t2386879874 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t2386879874 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t2386879874 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((&____dsa_16), value);
	}

	inline static int32_t get_offset_of_version_17() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___version_17)); }
	inline int32_t get_version_17() const { return ___version_17; }
	inline int32_t* get_address_of_version_17() { return &___version_17; }
	inline void set_version_17(int32_t value)
	{
		___version_17 = value;
	}

	inline static int32_t get_offset_of_serialnumber_18() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___serialnumber_18)); }
	inline ByteU5BU5D_t4116647657* get_serialnumber_18() const { return ___serialnumber_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_serialnumber_18() { return &___serialnumber_18; }
	inline void set_serialnumber_18(ByteU5BU5D_t4116647657* value)
	{
		___serialnumber_18 = value;
		Il2CppCodeGenWriteBarrier((&___serialnumber_18), value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_19() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___issuerUniqueID_19)); }
	inline ByteU5BU5D_t4116647657* get_issuerUniqueID_19() const { return ___issuerUniqueID_19; }
	inline ByteU5BU5D_t4116647657** get_address_of_issuerUniqueID_19() { return &___issuerUniqueID_19; }
	inline void set_issuerUniqueID_19(ByteU5BU5D_t4116647657* value)
	{
		___issuerUniqueID_19 = value;
		Il2CppCodeGenWriteBarrier((&___issuerUniqueID_19), value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_20() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___subjectUniqueID_20)); }
	inline ByteU5BU5D_t4116647657* get_subjectUniqueID_20() const { return ___subjectUniqueID_20; }
	inline ByteU5BU5D_t4116647657** get_address_of_subjectUniqueID_20() { return &___subjectUniqueID_20; }
	inline void set_subjectUniqueID_20(ByteU5BU5D_t4116647657* value)
	{
		___subjectUniqueID_20 = value;
		Il2CppCodeGenWriteBarrier((&___subjectUniqueID_20), value);
	}

	inline static int32_t get_offset_of_extensions_21() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025, ___extensions_21)); }
	inline X509ExtensionCollection_t609554709 * get_extensions_21() const { return ___extensions_21; }
	inline X509ExtensionCollection_t609554709 ** get_address_of_extensions_21() { return &___extensions_21; }
	inline void set_extensions_21(X509ExtensionCollection_t609554709 * value)
	{
		___extensions_21 = value;
		Il2CppCodeGenWriteBarrier((&___extensions_21), value);
	}
};

struct X509Certificate_t489243025_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_22;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$mapF
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24mapF_23;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map10
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map10_24;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> Mono.Security.X509.X509Certificate::<>f__switch$map11
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map11_25;

public:
	inline static int32_t get_offset_of_encoding_error_22() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___encoding_error_22)); }
	inline String_t* get_encoding_error_22() const { return ___encoding_error_22; }
	inline String_t** get_address_of_encoding_error_22() { return &___encoding_error_22; }
	inline void set_encoding_error_22(String_t* value)
	{
		___encoding_error_22 = value;
		Il2CppCodeGenWriteBarrier((&___encoding_error_22), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapF_23() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24mapF_23)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24mapF_23() const { return ___U3CU3Ef__switchU24mapF_23; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24mapF_23() { return &___U3CU3Ef__switchU24mapF_23; }
	inline void set_U3CU3Ef__switchU24mapF_23(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24mapF_23 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24mapF_23), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map10_24() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24map10_24)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map10_24() const { return ___U3CU3Ef__switchU24map10_24; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map10_24() { return &___U3CU3Ef__switchU24map10_24; }
	inline void set_U3CU3Ef__switchU24map10_24(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map10_24 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map10_24), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map11_25() { return static_cast<int32_t>(offsetof(X509Certificate_t489243025_StaticFields, ___U3CU3Ef__switchU24map11_25)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map11_25() const { return ___U3CU3Ef__switchU24map11_25; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map11_25() { return &___U3CU3Ef__switchU24map11_25; }
	inline void set_U3CU3Ef__switchU24map11_25(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map11_25 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map11_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T489243025_H
#ifndef ARC4MANAGED_T2641858452_H
#define ARC4MANAGED_T2641858452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.ARC4Managed
struct  ARC4Managed_t2641858452  : public RC4_t2752556436
{
public:
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::key
	ByteU5BU5D_t4116647657* ___key_12;
	// System.Byte[] Mono.Security.Cryptography.ARC4Managed::state
	ByteU5BU5D_t4116647657* ___state_13;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::x
	uint8_t ___x_14;
	// System.Byte Mono.Security.Cryptography.ARC4Managed::y
	uint8_t ___y_15;
	// System.Boolean Mono.Security.Cryptography.ARC4Managed::m_disposed
	bool ___m_disposed_16;

public:
	inline static int32_t get_offset_of_key_12() { return static_cast<int32_t>(offsetof(ARC4Managed_t2641858452, ___key_12)); }
	inline ByteU5BU5D_t4116647657* get_key_12() const { return ___key_12; }
	inline ByteU5BU5D_t4116647657** get_address_of_key_12() { return &___key_12; }
	inline void set_key_12(ByteU5BU5D_t4116647657* value)
	{
		___key_12 = value;
		Il2CppCodeGenWriteBarrier((&___key_12), value);
	}

	inline static int32_t get_offset_of_state_13() { return static_cast<int32_t>(offsetof(ARC4Managed_t2641858452, ___state_13)); }
	inline ByteU5BU5D_t4116647657* get_state_13() const { return ___state_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_state_13() { return &___state_13; }
	inline void set_state_13(ByteU5BU5D_t4116647657* value)
	{
		___state_13 = value;
		Il2CppCodeGenWriteBarrier((&___state_13), value);
	}

	inline static int32_t get_offset_of_x_14() { return static_cast<int32_t>(offsetof(ARC4Managed_t2641858452, ___x_14)); }
	inline uint8_t get_x_14() const { return ___x_14; }
	inline uint8_t* get_address_of_x_14() { return &___x_14; }
	inline void set_x_14(uint8_t value)
	{
		___x_14 = value;
	}

	inline static int32_t get_offset_of_y_15() { return static_cast<int32_t>(offsetof(ARC4Managed_t2641858452, ___y_15)); }
	inline uint8_t get_y_15() const { return ___y_15; }
	inline uint8_t* get_address_of_y_15() { return &___y_15; }
	inline void set_y_15(uint8_t value)
	{
		___y_15 = value;
	}

	inline static int32_t get_offset_of_m_disposed_16() { return static_cast<int32_t>(offsetof(ARC4Managed_t2641858452, ___m_disposed_16)); }
	inline bool get_m_disposed_16() const { return ___m_disposed_16; }
	inline bool* get_address_of_m_disposed_16() { return &___m_disposed_16; }
	inline void set_m_disposed_16(bool value)
	{
		___m_disposed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARC4MANAGED_T2641858452_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1600 = { sizeof (PKCS7_t1860834339), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1601 = { sizeof (ContentInfo_t3218159896), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1601[2] = 
{
	ContentInfo_t3218159896::get_offset_of_contentType_0(),
	ContentInfo_t3218159896::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1602 = { sizeof (EncryptedData_t3577548733), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1602[4] = 
{
	EncryptedData_t3577548733::get_offset_of__version_0(),
	EncryptedData_t3577548733::get_offset_of__content_1(),
	EncryptedData_t3577548733::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t3577548733::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1603 = { sizeof (PrivateKey_t523210967), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1603[4] = 
{
	PrivateKey_t523210967::get_offset_of_encrypted_0(),
	PrivateKey_t523210967::get_offset_of_rsa_1(),
	PrivateKey_t523210967::get_offset_of_weak_2(),
	PrivateKey_t523210967::get_offset_of_keyType_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1604 = { sizeof (ARC4Managed_t2641858452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1604[5] = 
{
	ARC4Managed_t2641858452::get_offset_of_key_12(),
	ARC4Managed_t2641858452::get_offset_of_state_13(),
	ARC4Managed_t2641858452::get_offset_of_x_14(),
	ARC4Managed_t2641858452::get_offset_of_y_15(),
	ARC4Managed_t2641858452::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1605 = { sizeof (CryptoConvert_t610933157), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1606 = { sizeof (KeyBuilder_t2049230355), -1, sizeof(KeyBuilder_t2049230355_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1606[1] = 
{
	KeyBuilder_t2049230355_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1607 = { sizeof (MD2_t1561046427), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1608 = { sizeof (MD2Managed_t1377101535), -1, sizeof(MD2Managed_t1377101535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1608[6] = 
{
	MD2Managed_t1377101535::get_offset_of_state_4(),
	MD2Managed_t1377101535::get_offset_of_checksum_5(),
	MD2Managed_t1377101535::get_offset_of_buffer_6(),
	MD2Managed_t1377101535::get_offset_of_count_7(),
	MD2Managed_t1377101535::get_offset_of_x_8(),
	MD2Managed_t1377101535_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1609 = { sizeof (MD4_t1560915355), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1610 = { sizeof (MD4Managed_t957540063), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1610[5] = 
{
	MD4Managed_t957540063::get_offset_of_state_4(),
	MD4Managed_t957540063::get_offset_of_buffer_5(),
	MD4Managed_t957540063::get_offset_of_count_6(),
	MD4Managed_t957540063::get_offset_of_x_7(),
	MD4Managed_t957540063::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1611 = { sizeof (PKCS1_t1505584677), -1, sizeof(PKCS1_t1505584677_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1611[4] = 
{
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t1505584677_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1612 = { sizeof (PKCS8_t696280613), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1613 = { sizeof (PrivateKeyInfo_t668027993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1613[4] = 
{
	PrivateKeyInfo_t668027993::get_offset_of__version_0(),
	PrivateKeyInfo_t668027993::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t668027993::get_offset_of__key_2(),
	PrivateKeyInfo_t668027993::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1614 = { sizeof (EncryptedPrivateKeyInfo_t862116836), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1614[4] = 
{
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t862116836::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1615 = { sizeof (RC4_t2752556436), -1, sizeof(RC4_t2752556436_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1615[2] = 
{
	RC4_t2752556436_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t2752556436_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1616 = { sizeof (RSAManaged_t1757093820), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1616[13] = 
{
	RSAManaged_t1757093820::get_offset_of_isCRTpossible_2(),
	RSAManaged_t1757093820::get_offset_of_keyBlinding_3(),
	RSAManaged_t1757093820::get_offset_of_keypairGenerated_4(),
	RSAManaged_t1757093820::get_offset_of_m_disposed_5(),
	RSAManaged_t1757093820::get_offset_of_d_6(),
	RSAManaged_t1757093820::get_offset_of_p_7(),
	RSAManaged_t1757093820::get_offset_of_q_8(),
	RSAManaged_t1757093820::get_offset_of_dp_9(),
	RSAManaged_t1757093820::get_offset_of_dq_10(),
	RSAManaged_t1757093820::get_offset_of_qInv_11(),
	RSAManaged_t1757093820::get_offset_of_n_12(),
	RSAManaged_t1757093820::get_offset_of_e_13(),
	RSAManaged_t1757093820::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1617 = { sizeof (KeyGeneratedEventHandler_t3064139578), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1618 = { sizeof (PKCS5_t784850245), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1618[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1619 = { sizeof (PKCS9_t2785795397), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1619[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1620 = { sizeof (SafeBag_t3961248200), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1620[2] = 
{
	SafeBag_t3961248200::get_offset_of__bagOID_0(),
	SafeBag_t3961248200::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1621 = { sizeof (PKCS12_t4101533061), -1, sizeof(PKCS12_t4101533061_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1621[36] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	PKCS12_t4101533061_StaticFields::get_offset_of_recommendedIterationCount_16(),
	PKCS12_t4101533061::get_offset_of__password_17(),
	PKCS12_t4101533061::get_offset_of__keyBags_18(),
	PKCS12_t4101533061::get_offset_of__secretBags_19(),
	PKCS12_t4101533061::get_offset_of__certs_20(),
	PKCS12_t4101533061::get_offset_of__keyBagsChanged_21(),
	PKCS12_t4101533061::get_offset_of__secretBagsChanged_22(),
	PKCS12_t4101533061::get_offset_of__certsChanged_23(),
	PKCS12_t4101533061::get_offset_of__iterations_24(),
	PKCS12_t4101533061::get_offset_of__safeBags_25(),
	PKCS12_t4101533061::get_offset_of__rng_26(),
	PKCS12_t4101533061_StaticFields::get_offset_of_password_max_length_27(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_28(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_29(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_30(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_31(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24map9_32(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24mapA_33(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24mapB_34(),
	PKCS12_t4101533061_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1622 = { sizeof (DeriveBytes_t1492915136), -1, sizeof(DeriveBytes_t1492915136_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1622[7] = 
{
	DeriveBytes_t1492915136_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1492915136_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1492915136::get_offset_of__hashName_3(),
	DeriveBytes_t1492915136::get_offset_of__iterations_4(),
	DeriveBytes_t1492915136::get_offset_of__password_5(),
	DeriveBytes_t1492915136::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1623 = { sizeof (Purpose_t1676893114)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1623[4] = 
{
	Purpose_t1676893114::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1624 = { sizeof (X501_t1758824426), -1, sizeof(X501_t1758824426_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1624[16] = 
{
	X501_t1758824426_StaticFields::get_offset_of_countryName_0(),
	X501_t1758824426_StaticFields::get_offset_of_organizationName_1(),
	X501_t1758824426_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t1758824426_StaticFields::get_offset_of_commonName_3(),
	X501_t1758824426_StaticFields::get_offset_of_localityName_4(),
	X501_t1758824426_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t1758824426_StaticFields::get_offset_of_streetAddress_6(),
	X501_t1758824426_StaticFields::get_offset_of_domainComponent_7(),
	X501_t1758824426_StaticFields::get_offset_of_userid_8(),
	X501_t1758824426_StaticFields::get_offset_of_email_9(),
	X501_t1758824426_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t1758824426_StaticFields::get_offset_of_title_11(),
	X501_t1758824426_StaticFields::get_offset_of_surname_12(),
	X501_t1758824426_StaticFields::get_offset_of_givenName_13(),
	X501_t1758824426_StaticFields::get_offset_of_initial_14(),
	X501_t1758824426_StaticFields::get_offset_of_U3CU3Ef__switchU24mapD_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1625 = { sizeof (X509Builder_t1341539432), -1, sizeof(X509Builder_t1341539432_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1625[3] = 
{
	0,
	X509Builder_t1341539432::get_offset_of_hashName_1(),
	X509Builder_t1341539432_StaticFields::get_offset_of_U3CU3Ef__switchU24mapE_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1626 = { sizeof (X509Certificate_t489243025), -1, sizeof(X509Certificate_t489243025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1626[26] = 
{
	X509Certificate_t489243025::get_offset_of_decoder_0(),
	X509Certificate_t489243025::get_offset_of_m_encodedcert_1(),
	X509Certificate_t489243025::get_offset_of_m_from_2(),
	X509Certificate_t489243025::get_offset_of_m_until_3(),
	X509Certificate_t489243025::get_offset_of_issuer_4(),
	X509Certificate_t489243025::get_offset_of_m_issuername_5(),
	X509Certificate_t489243025::get_offset_of_m_keyalgo_6(),
	X509Certificate_t489243025::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t489243025::get_offset_of_subject_8(),
	X509Certificate_t489243025::get_offset_of_m_subject_9(),
	X509Certificate_t489243025::get_offset_of_m_publickey_10(),
	X509Certificate_t489243025::get_offset_of_signature_11(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t489243025::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t489243025::get_offset_of_certhash_14(),
	X509Certificate_t489243025::get_offset_of__rsa_15(),
	X509Certificate_t489243025::get_offset_of__dsa_16(),
	X509Certificate_t489243025::get_offset_of_version_17(),
	X509Certificate_t489243025::get_offset_of_serialnumber_18(),
	X509Certificate_t489243025::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t489243025::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t489243025::get_offset_of_extensions_21(),
	X509Certificate_t489243025_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t489243025_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t489243025_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t489243025_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1627 = { sizeof (X509CertificateCollection_t1542168550), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1628 = { sizeof (X509CertificateEnumerator_t3515934698), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1628[1] = 
{
	X509CertificateEnumerator_t3515934698::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1629 = { sizeof (X509CertificateBuilder_t3506341729), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1629[10] = 
{
	X509CertificateBuilder_t3506341729::get_offset_of_version_3(),
	X509CertificateBuilder_t3506341729::get_offset_of_sn_4(),
	X509CertificateBuilder_t3506341729::get_offset_of_issuer_5(),
	X509CertificateBuilder_t3506341729::get_offset_of_notBefore_6(),
	X509CertificateBuilder_t3506341729::get_offset_of_notAfter_7(),
	X509CertificateBuilder_t3506341729::get_offset_of_subject_8(),
	X509CertificateBuilder_t3506341729::get_offset_of_aa_9(),
	X509CertificateBuilder_t3506341729::get_offset_of_issuerUniqueID_10(),
	X509CertificateBuilder_t3506341729::get_offset_of_subjectUniqueID_11(),
	X509CertificateBuilder_t3506341729::get_offset_of_extensions_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1630 = { sizeof (X509Chain_t863783601), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1630[5] = 
{
	X509Chain_t863783601::get_offset_of_roots_0(),
	X509Chain_t863783601::get_offset_of_certs_1(),
	X509Chain_t863783601::get_offset_of__root_2(),
	X509Chain_t863783601::get_offset_of__chain_3(),
	X509Chain_t863783601::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1631 = { sizeof (X509ChainStatusFlags_t1831553603)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1631[8] = 
{
	X509ChainStatusFlags_t1831553603::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1632 = { sizeof (X509Crl_t1148767388), -1, sizeof(X509Crl_t1148767388_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1632[12] = 
{
	X509Crl_t1148767388::get_offset_of_issuer_0(),
	X509Crl_t1148767388::get_offset_of_version_1(),
	X509Crl_t1148767388::get_offset_of_thisUpdate_2(),
	X509Crl_t1148767388::get_offset_of_nextUpdate_3(),
	X509Crl_t1148767388::get_offset_of_entries_4(),
	X509Crl_t1148767388::get_offset_of_signatureOID_5(),
	X509Crl_t1148767388::get_offset_of_signature_6(),
	X509Crl_t1148767388::get_offset_of_extensions_7(),
	X509Crl_t1148767388::get_offset_of_encoded_8(),
	X509Crl_t1148767388::get_offset_of_hash_value_9(),
	X509Crl_t1148767388_StaticFields::get_offset_of_U3CU3Ef__switchU24map12_10(),
	X509Crl_t1148767388_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1633 = { sizeof (X509CrlEntry_t645568789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1633[3] = 
{
	X509CrlEntry_t645568789::get_offset_of_sn_0(),
	X509CrlEntry_t645568789::get_offset_of_revocationDate_1(),
	X509CrlEntry_t645568789::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1634 = { sizeof (X509Extension_t3173393653), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1634[3] = 
{
	X509Extension_t3173393653::get_offset_of_extnOid_0(),
	X509Extension_t3173393653::get_offset_of_extnCritical_1(),
	X509Extension_t3173393653::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1635 = { sizeof (X509ExtensionCollection_t609554709), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1635[1] = 
{
	X509ExtensionCollection_t609554709::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1636 = { sizeof (X509Store_t2777415284), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1636[5] = 
{
	X509Store_t2777415284::get_offset_of__storePath_0(),
	X509Store_t2777415284::get_offset_of__certificates_1(),
	X509Store_t2777415284::get_offset_of__crls_2(),
	X509Store_t2777415284::get_offset_of__crl_3(),
	X509Store_t2777415284::get_offset_of__name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1637 = { sizeof (X509StoreManager_t1046782376), -1, sizeof(X509StoreManager_t1046782376_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1637[2] = 
{
	X509StoreManager_t1046782376_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t1046782376_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1638 = { sizeof (X509Stores_t1373936238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1638[6] = 
{
	X509Stores_t1373936238::get_offset_of__storePath_0(),
	X509Stores_t1373936238::get_offset_of__personal_1(),
	X509Stores_t1373936238::get_offset_of__other_2(),
	X509Stores_t1373936238::get_offset_of__intermediate_3(),
	X509Stores_t1373936238::get_offset_of__trusted_4(),
	X509Stores_t1373936238::get_offset_of__untrusted_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1639 = { sizeof (Names_t1325641082), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1639[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1640 = { sizeof (X520_t3325039438), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1641 = { sizeof (AttributeTypeAndValue_t3245693428), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1641[4] = 
{
	AttributeTypeAndValue_t3245693428::get_offset_of_oid_0(),
	AttributeTypeAndValue_t3245693428::get_offset_of_attrValue_1(),
	AttributeTypeAndValue_t3245693428::get_offset_of_upperBound_2(),
	AttributeTypeAndValue_t3245693428::get_offset_of_encoding_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1642 = { sizeof (Name_t3626842933), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1643 = { sizeof (CommonName_t2882805359), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1644 = { sizeof (SerialNumber_t3812427306), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1645 = { sizeof (LocalityName_t1511149830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1646 = { sizeof (StateOrProvinceName_t1916702996), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1647 = { sizeof (OrganizationName_t857038441), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1648 = { sizeof (OrganizationalUnitName_t1968218587), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1649 = { sizeof (EmailAddress_t484866411), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1650 = { sizeof (DomainComponent_t1597975113), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1651 = { sizeof (UserId_t70549454), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1652 = { sizeof (Oid_t2014794921), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1653 = { sizeof (Title_t2026585634), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1654 = { sizeof (CountryName_t4165042092), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1655 = { sizeof (DnQualifier_t2746394302), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1656 = { sizeof (Surname_t4221813936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1657 = { sizeof (GivenName_t3114888956), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1658 = { sizeof (Initial_t2745963796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1659 = { sizeof (AuthorityKeyIdentifierExtension_t1122691429), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1659[1] = 
{
	AuthorityKeyIdentifierExtension_t1122691429::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1660 = { sizeof (BasicConstraintsExtension_t2462195279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1660[2] = 
{
	BasicConstraintsExtension_t2462195279::get_offset_of_cA_3(),
	BasicConstraintsExtension_t2462195279::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1661 = { sizeof (ExtendedKeyUsageExtension_t3929363080), -1, sizeof(ExtendedKeyUsageExtension_t3929363080_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1661[2] = 
{
	ExtendedKeyUsageExtension_t3929363080::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t3929363080_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1662 = { sizeof (GeneralNames_t2702294159), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1662[5] = 
{
	GeneralNames_t2702294159::get_offset_of_rfc822Name_0(),
	GeneralNames_t2702294159::get_offset_of_dnsName_1(),
	GeneralNames_t2702294159::get_offset_of_directoryNames_2(),
	GeneralNames_t2702294159::get_offset_of_uris_3(),
	GeneralNames_t2702294159::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1663 = { sizeof (KeyUsages_t820456313)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1663[11] = 
{
	KeyUsages_t820456313::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1664 = { sizeof (KeyUsageExtension_t1795615912), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1664[1] = 
{
	KeyUsageExtension_t1795615912::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1665 = { sizeof (NetscapeCertTypeExtension_t1524296876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1665[1] = 
{
	NetscapeCertTypeExtension_t1524296876::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1666 = { sizeof (CertTypes_t3317701015)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1666[8] = 
{
	CertTypes_t3317701015::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1667 = { sizeof (SubjectAltNameExtension_t1536937677), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1667[1] = 
{
	SubjectAltNameExtension_t1536937677::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1668 = { sizeof (SubjectKeyIdentifierExtension_t2404375272), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1668[1] = 
{
	SubjectKeyIdentifierExtension_t2404375272::get_offset_of_ski_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1669 = { sizeof (HMAC_t3689525210), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1669[4] = 
{
	HMAC_t3689525210::get_offset_of_hash_5(),
	HMAC_t3689525210::get_offset_of_hashing_6(),
	HMAC_t3689525210::get_offset_of_innerPad_7(),
	HMAC_t3689525210::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1670 = { sizeof (MD5SHA1_t723838944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1670[3] = 
{
	MD5SHA1_t723838944::get_offset_of_md5_4(),
	MD5SHA1_t723838944::get_offset_of_sha_5(),
	MD5SHA1_t723838944::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1671 = { sizeof (ChallengeResponse_t399452983), -1, sizeof(ChallengeResponse_t399452983_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1671[6] = 
{
	ChallengeResponse_t399452983_StaticFields::get_offset_of_magic_0(),
	ChallengeResponse_t399452983_StaticFields::get_offset_of_nullEncMagic_1(),
	ChallengeResponse_t399452983::get_offset_of__disposed_2(),
	ChallengeResponse_t399452983::get_offset_of__challenge_3(),
	ChallengeResponse_t399452983::get_offset_of__lmpwd_4(),
	ChallengeResponse_t399452983::get_offset_of__ntpwd_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1672 = { sizeof (MessageBase_t422981883), -1, sizeof(MessageBase_t422981883_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1672[3] = 
{
	MessageBase_t422981883_StaticFields::get_offset_of_header_0(),
	MessageBase_t422981883::get_offset_of__type_1(),
	MessageBase_t422981883::get_offset_of__flags_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1673 = { sizeof (NtlmFlags_t822829952)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1673[11] = 
{
	NtlmFlags_t822829952::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1674 = { sizeof (Type1Message_t2139513923), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1674[2] = 
{
	Type1Message_t2139513923::get_offset_of__host_3(),
	Type1Message_t2139513923::get_offset_of__domain_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1675 = { sizeof (Type2Message_t2139513824), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1675[1] = 
{
	Type2Message_t2139513824::get_offset_of__nonce_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1676 = { sizeof (Type3Message_t2139513857), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1676[7] = 
{
	Type3Message_t2139513857::get_offset_of__challenge_3(),
	Type3Message_t2139513857::get_offset_of__host_4(),
	Type3Message_t2139513857::get_offset_of__domain_5(),
	Type3Message_t2139513857::get_offset_of__username_6(),
	Type3Message_t2139513857::get_offset_of__password_7(),
	Type3Message_t2139513857::get_offset_of__lm_8(),
	Type3Message_t2139513857::get_offset_of__nt_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1677 = { sizeof (AlertLevel_t2246417555)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1677[3] = 
{
	AlertLevel_t2246417555::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1678 = { sizeof (AlertDescription_t1549755611)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1678[25] = 
{
	AlertDescription_t1549755611::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1679 = { sizeof (Alert_t4059934885), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1679[2] = 
{
	Alert_t4059934885::get_offset_of_level_0(),
	Alert_t4059934885::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1680 = { sizeof (CipherAlgorithmType_t1174400495)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1680[8] = 
{
	CipherAlgorithmType_t1174400495::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1681 = { sizeof (CipherSuite_t3414744575), -1, sizeof(CipherSuite_t3414744575_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1681[21] = 
{
	CipherSuite_t3414744575_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t3414744575::get_offset_of_code_1(),
	CipherSuite_t3414744575::get_offset_of_name_2(),
	CipherSuite_t3414744575::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t3414744575::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t3414744575::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t3414744575::get_offset_of_isExportable_6(),
	CipherSuite_t3414744575::get_offset_of_cipherMode_7(),
	CipherSuite_t3414744575::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t3414744575::get_offset_of_keyBlockSize_9(),
	CipherSuite_t3414744575::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t3414744575::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t3414744575::get_offset_of_ivSize_12(),
	CipherSuite_t3414744575::get_offset_of_blockSize_13(),
	CipherSuite_t3414744575::get_offset_of_context_14(),
	CipherSuite_t3414744575::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t3414744575::get_offset_of_encryptionCipher_16(),
	CipherSuite_t3414744575::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t3414744575::get_offset_of_decryptionCipher_18(),
	CipherSuite_t3414744575::get_offset_of_clientHMAC_19(),
	CipherSuite_t3414744575::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1682 = { sizeof (CipherSuiteCollection_t1129639304), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1682[2] = 
{
	CipherSuiteCollection_t1129639304::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t1129639304::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1683 = { sizeof (CipherSuiteFactory_t3316559455), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1684 = { sizeof (ClientContext_t2797401965), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1684[2] = 
{
	ClientContext_t2797401965::get_offset_of_sslStream_34(),
	ClientContext_t2797401965::get_offset_of_clientHelloProtocol_35(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1685 = { sizeof (ClientRecordProtocol_t2031137796), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1686 = { sizeof (ClientSessionInfo_t1775821398), -1, sizeof(ClientSessionInfo_t1775821398_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1686[7] = 
{
	0,
	ClientSessionInfo_t1775821398_StaticFields::get_offset_of_ValidityInterval_1(),
	ClientSessionInfo_t1775821398::get_offset_of_disposed_2(),
	ClientSessionInfo_t1775821398::get_offset_of_validuntil_3(),
	ClientSessionInfo_t1775821398::get_offset_of_host_4(),
	ClientSessionInfo_t1775821398::get_offset_of_sid_5(),
	ClientSessionInfo_t1775821398::get_offset_of_masterSecret_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1687 = { sizeof (ClientSessionCache_t2353595803), -1, sizeof(ClientSessionCache_t2353595803_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1687[2] = 
{
	ClientSessionCache_t2353595803_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t2353595803_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1688 = { sizeof (ContentType_t2602934270)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1688[5] = 
{
	ContentType_t2602934270::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1689 = { sizeof (Context_t3971234707), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1689[34] = 
{
	0,
	0,
	0,
	0,
	Context_t3971234707::get_offset_of_securityProtocol_4(),
	Context_t3971234707::get_offset_of_sessionId_5(),
	Context_t3971234707::get_offset_of_compressionMethod_6(),
	Context_t3971234707::get_offset_of_serverSettings_7(),
	Context_t3971234707::get_offset_of_clientSettings_8(),
	Context_t3971234707::get_offset_of_current_9(),
	Context_t3971234707::get_offset_of_negotiating_10(),
	Context_t3971234707::get_offset_of_read_11(),
	Context_t3971234707::get_offset_of_write_12(),
	Context_t3971234707::get_offset_of_supportedCiphers_13(),
	Context_t3971234707::get_offset_of_lastHandshakeMsg_14(),
	Context_t3971234707::get_offset_of_handshakeState_15(),
	Context_t3971234707::get_offset_of_abbreviatedHandshake_16(),
	Context_t3971234707::get_offset_of_receivedConnectionEnd_17(),
	Context_t3971234707::get_offset_of_sentConnectionEnd_18(),
	Context_t3971234707::get_offset_of_protocolNegotiated_19(),
	Context_t3971234707::get_offset_of_writeSequenceNumber_20(),
	Context_t3971234707::get_offset_of_readSequenceNumber_21(),
	Context_t3971234707::get_offset_of_clientRandom_22(),
	Context_t3971234707::get_offset_of_serverRandom_23(),
	Context_t3971234707::get_offset_of_randomCS_24(),
	Context_t3971234707::get_offset_of_randomSC_25(),
	Context_t3971234707::get_offset_of_masterSecret_26(),
	Context_t3971234707::get_offset_of_clientWriteKey_27(),
	Context_t3971234707::get_offset_of_serverWriteKey_28(),
	Context_t3971234707::get_offset_of_clientWriteIV_29(),
	Context_t3971234707::get_offset_of_serverWriteIV_30(),
	Context_t3971234707::get_offset_of_handshakeMessages_31(),
	Context_t3971234707::get_offset_of_random_32(),
	Context_t3971234707::get_offset_of_recordProtocol_33(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1690 = { sizeof (DebugHelper_t1397895286), -1, sizeof(DebugHelper_t1397895286_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1690[1] = 
{
	DebugHelper_t1397895286_StaticFields::get_offset_of_isInitialized_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1691 = { sizeof (ExchangeAlgorithmType_t1320888206)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1691[6] = 
{
	ExchangeAlgorithmType_t1320888206::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1692 = { sizeof (HandshakeState_t756684113)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1692[4] = 
{
	HandshakeState_t756684113::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1693 = { sizeof (HashAlgorithmType_t2376832258)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1693[4] = 
{
	HashAlgorithmType_t2376832258::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1694 = { sizeof (HttpsClientStream_t1160552561), -1, sizeof(HttpsClientStream_t1160552561_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1694[4] = 
{
	HttpsClientStream_t1160552561::get_offset_of__request_21(),
	HttpsClientStream_t1160552561::get_offset_of__status_22(),
	HttpsClientStream_t1160552561_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_23(),
	HttpsClientStream_t1160552561_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1695 = { sizeof (RecordProtocol_t3759049701), -1, sizeof(RecordProtocol_t3759049701_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1695[3] = 
{
	RecordProtocol_t3759049701_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t3759049701::get_offset_of_innerStream_1(),
	RecordProtocol_t3759049701::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1696 = { sizeof (ReceiveRecordAsyncResult_t3680907657), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1696[9] = 
{
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t3680907657::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1697 = { sizeof (SendRecordAsyncResult_t3718352467), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1697[7] = 
{
	SendRecordAsyncResult_t3718352467::get_offset_of_locker_0(),
	SendRecordAsyncResult_t3718352467::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t3718352467::get_offset_of__userState_2(),
	SendRecordAsyncResult_t3718352467::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t3718352467::get_offset_of_handle_4(),
	SendRecordAsyncResult_t3718352467::get_offset_of__message_5(),
	SendRecordAsyncResult_t3718352467::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1698 = { sizeof (RSASslSignatureDeformatter_t3558097625), -1, sizeof(RSASslSignatureDeformatter_t3558097625_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1698[3] = 
{
	RSASslSignatureDeformatter_t3558097625::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t3558097625::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t3558097625_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1699 = { sizeof (RSASslSignatureFormatter_t2709678514), -1, sizeof(RSASslSignatureFormatter_t2709678514_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1699[3] = 
{
	RSASslSignatureFormatter_t2709678514::get_offset_of_key_0(),
	RSASslSignatureFormatter_t2709678514::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t2709678514_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
