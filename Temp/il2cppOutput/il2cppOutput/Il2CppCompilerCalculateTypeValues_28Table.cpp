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


// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t4254223087;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// UnityEngine.Gyroscope
struct Gyroscope_t3288342876;
// System.String
struct String_t;
// UnityEngine.Application/LowMemoryCallback
struct LowMemoryCallback_t4104246196;
// UnityEngine.Application/LogCallback
struct LogCallback_t3588208630;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Action
struct Action_t1264377477;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Void
struct Void_t1185182177;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t827303578;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Security.Cryptography.SHA512
struct SHA512_t1346946930;
// System.Security.Cryptography.SHA384
struct SHA384_t540967702;
// System.Security.Cryptography.SHA256
struct SHA256_t3672283617;
// UnityEngine.CullingGroup/StateChanged
struct StateChanged_t2136737110;
// System.Security.Cryptography.SHA1
struct SHA1_t1803193667;
// System.Security.Cryptography.MD5
struct MD5_t3177620429;
// UnityEngine.Display[]
struct DisplayU5BU5D_t103034768;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t51287044;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t722666473;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;




#ifndef U3CMODULEU3E_T692745532_H
#define U3CMODULEU3E_T692745532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745532 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745532_H
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
#ifndef U3CMODULEU3E_T692745533_H
#define U3CMODULEU3E_T692745533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745533 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745533_H
#ifndef SYMMETRICTRANSFORM_T3802591843_H
#define SYMMETRICTRANSFORM_T3802591843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t3802591843  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t4254223087 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t4116647657* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t4116647657* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t4116647657* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t4116647657* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t386037858 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___algo_0)); }
	inline SymmetricAlgorithm_t4254223087 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t4254223087 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t4254223087 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp_3)); }
	inline ByteU5BU5D_t4116647657* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t4116647657* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___temp2_4)); }
	inline ByteU5BU5D_t4116647657* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t4116647657* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workBuff_5)); }
	inline ByteU5BU5D_t4116647657* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t4116647657** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t4116647657* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___workout_6)); }
	inline ByteU5BU5D_t4116647657* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t4116647657* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t3802591843, ____rng_11)); }
	inline RandomNumberGenerator_t386037858 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t386037858 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T3802591843_H
#ifndef UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#define UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnhandledExceptionHandler
struct  UnhandledExceptionHandler_t1162846485  : public RuntimeObject
{
public:

public:
};

struct UnhandledExceptionHandler_t1162846485_StaticFields
{
public:
	// System.UnhandledExceptionEventHandler UnityEngine.UnhandledExceptionHandler::<>f__mg$cache0
	UnhandledExceptionEventHandler_t3101989324 * ___U3CU3Ef__mgU24cache0_0;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_0() { return static_cast<int32_t>(offsetof(UnhandledExceptionHandler_t1162846485_StaticFields, ___U3CU3Ef__mgU24cache0_0)); }
	inline UnhandledExceptionEventHandler_t3101989324 * get_U3CU3Ef__mgU24cache0_0() const { return ___U3CU3Ef__mgU24cache0_0; }
	inline UnhandledExceptionEventHandler_t3101989324 ** get_address_of_U3CU3Ef__mgU24cache0_0() { return &___U3CU3Ef__mgU24cache0_0; }
	inline void set_U3CU3Ef__mgU24cache0_0(UnhandledExceptionEventHandler_t3101989324 * value)
	{
		___U3CU3Ef__mgU24cache0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONHANDLER_T1162846485_H
#ifndef INPUT_T1431474628_H
#define INPUT_T1431474628_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Input
struct  Input_t1431474628  : public RuntimeObject
{
public:

public:
};

struct Input_t1431474628_StaticFields
{
public:
	// UnityEngine.Gyroscope UnityEngine.Input::m_MainGyro
	Gyroscope_t3288342876 * ___m_MainGyro_0;

public:
	inline static int32_t get_offset_of_m_MainGyro_0() { return static_cast<int32_t>(offsetof(Input_t1431474628_StaticFields, ___m_MainGyro_0)); }
	inline Gyroscope_t3288342876 * get_m_MainGyro_0() const { return ___m_MainGyro_0; }
	inline Gyroscope_t3288342876 ** get_address_of_m_MainGyro_0() { return &___m_MainGyro_0; }
	inline void set_m_MainGyro_0(Gyroscope_t3288342876 * value)
	{
		___m_MainGyro_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_MainGyro_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUT_T1431474628_H
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
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef UNITYSTRING_T1423233093_H
#define UNITYSTRING_T1423233093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t1423233093  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T1423233093_H
#ifndef CNGALGORITHMGROUP_T2242971942_H
#define CNGALGORITHMGROUP_T2242971942_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CngAlgorithmGroup
struct  CngAlgorithmGroup_t2242971942  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.CngAlgorithmGroup::group
	String_t* ___group_0;

public:
	inline static int32_t get_offset_of_group_0() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942, ___group_0)); }
	inline String_t* get_group_0() const { return ___group_0; }
	inline String_t** get_address_of_group_0() { return &___group_0; }
	inline void set_group_0(String_t* value)
	{
		___group_0 = value;
		Il2CppCodeGenWriteBarrier((&___group_0), value);
	}
};

struct CngAlgorithmGroup_t2242971942_StaticFields
{
public:
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::dh
	CngAlgorithmGroup_t2242971942 * ___dh_1;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::dsa
	CngAlgorithmGroup_t2242971942 * ___dsa_2;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::ecdh
	CngAlgorithmGroup_t2242971942 * ___ecdh_3;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::ecdsa
	CngAlgorithmGroup_t2242971942 * ___ecdsa_4;
	// System.Security.Cryptography.CngAlgorithmGroup System.Security.Cryptography.CngAlgorithmGroup::rsa
	CngAlgorithmGroup_t2242971942 * ___rsa_5;

public:
	inline static int32_t get_offset_of_dh_1() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942_StaticFields, ___dh_1)); }
	inline CngAlgorithmGroup_t2242971942 * get_dh_1() const { return ___dh_1; }
	inline CngAlgorithmGroup_t2242971942 ** get_address_of_dh_1() { return &___dh_1; }
	inline void set_dh_1(CngAlgorithmGroup_t2242971942 * value)
	{
		___dh_1 = value;
		Il2CppCodeGenWriteBarrier((&___dh_1), value);
	}

	inline static int32_t get_offset_of_dsa_2() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942_StaticFields, ___dsa_2)); }
	inline CngAlgorithmGroup_t2242971942 * get_dsa_2() const { return ___dsa_2; }
	inline CngAlgorithmGroup_t2242971942 ** get_address_of_dsa_2() { return &___dsa_2; }
	inline void set_dsa_2(CngAlgorithmGroup_t2242971942 * value)
	{
		___dsa_2 = value;
		Il2CppCodeGenWriteBarrier((&___dsa_2), value);
	}

	inline static int32_t get_offset_of_ecdh_3() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942_StaticFields, ___ecdh_3)); }
	inline CngAlgorithmGroup_t2242971942 * get_ecdh_3() const { return ___ecdh_3; }
	inline CngAlgorithmGroup_t2242971942 ** get_address_of_ecdh_3() { return &___ecdh_3; }
	inline void set_ecdh_3(CngAlgorithmGroup_t2242971942 * value)
	{
		___ecdh_3 = value;
		Il2CppCodeGenWriteBarrier((&___ecdh_3), value);
	}

	inline static int32_t get_offset_of_ecdsa_4() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942_StaticFields, ___ecdsa_4)); }
	inline CngAlgorithmGroup_t2242971942 * get_ecdsa_4() const { return ___ecdsa_4; }
	inline CngAlgorithmGroup_t2242971942 ** get_address_of_ecdsa_4() { return &___ecdsa_4; }
	inline void set_ecdsa_4(CngAlgorithmGroup_t2242971942 * value)
	{
		___ecdsa_4 = value;
		Il2CppCodeGenWriteBarrier((&___ecdsa_4), value);
	}

	inline static int32_t get_offset_of_rsa_5() { return static_cast<int32_t>(offsetof(CngAlgorithmGroup_t2242971942_StaticFields, ___rsa_5)); }
	inline CngAlgorithmGroup_t2242971942 * get_rsa_5() const { return ___rsa_5; }
	inline CngAlgorithmGroup_t2242971942 ** get_address_of_rsa_5() { return &___rsa_5; }
	inline void set_rsa_5(CngAlgorithmGroup_t2242971942 * value)
	{
		___rsa_5 = value;
		Il2CppCodeGenWriteBarrier((&___rsa_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CNGALGORITHMGROUP_T2242971942_H
#ifndef CNGALGORITHM_T3464946980_H
#define CNGALGORITHM_T3464946980_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CngAlgorithm
struct  CngAlgorithm_t3464946980  : public RuntimeObject
{
public:
	// System.String System.Security.Cryptography.CngAlgorithm::algo
	String_t* ___algo_0;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980, ___algo_0)); }
	inline String_t* get_algo_0() const { return ___algo_0; }
	inline String_t** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(String_t* value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}
};

struct CngAlgorithm_t3464946980_StaticFields
{
public:
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dh256
	CngAlgorithm_t3464946980 * ___dh256_1;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dh384
	CngAlgorithm_t3464946980 * ___dh384_2;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dh521
	CngAlgorithm_t3464946980 * ___dh521_3;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dsa256
	CngAlgorithm_t3464946980 * ___dsa256_4;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dsa384
	CngAlgorithm_t3464946980 * ___dsa384_5;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::dsa521
	CngAlgorithm_t3464946980 * ___dsa521_6;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::md5
	CngAlgorithm_t3464946980 * ___md5_7;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::sha1
	CngAlgorithm_t3464946980 * ___sha1_8;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::sha256
	CngAlgorithm_t3464946980 * ___sha256_9;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::sha384
	CngAlgorithm_t3464946980 * ___sha384_10;
	// System.Security.Cryptography.CngAlgorithm System.Security.Cryptography.CngAlgorithm::sha512
	CngAlgorithm_t3464946980 * ___sha512_11;

public:
	inline static int32_t get_offset_of_dh256_1() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dh256_1)); }
	inline CngAlgorithm_t3464946980 * get_dh256_1() const { return ___dh256_1; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dh256_1() { return &___dh256_1; }
	inline void set_dh256_1(CngAlgorithm_t3464946980 * value)
	{
		___dh256_1 = value;
		Il2CppCodeGenWriteBarrier((&___dh256_1), value);
	}

	inline static int32_t get_offset_of_dh384_2() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dh384_2)); }
	inline CngAlgorithm_t3464946980 * get_dh384_2() const { return ___dh384_2; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dh384_2() { return &___dh384_2; }
	inline void set_dh384_2(CngAlgorithm_t3464946980 * value)
	{
		___dh384_2 = value;
		Il2CppCodeGenWriteBarrier((&___dh384_2), value);
	}

	inline static int32_t get_offset_of_dh521_3() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dh521_3)); }
	inline CngAlgorithm_t3464946980 * get_dh521_3() const { return ___dh521_3; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dh521_3() { return &___dh521_3; }
	inline void set_dh521_3(CngAlgorithm_t3464946980 * value)
	{
		___dh521_3 = value;
		Il2CppCodeGenWriteBarrier((&___dh521_3), value);
	}

	inline static int32_t get_offset_of_dsa256_4() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dsa256_4)); }
	inline CngAlgorithm_t3464946980 * get_dsa256_4() const { return ___dsa256_4; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dsa256_4() { return &___dsa256_4; }
	inline void set_dsa256_4(CngAlgorithm_t3464946980 * value)
	{
		___dsa256_4 = value;
		Il2CppCodeGenWriteBarrier((&___dsa256_4), value);
	}

	inline static int32_t get_offset_of_dsa384_5() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dsa384_5)); }
	inline CngAlgorithm_t3464946980 * get_dsa384_5() const { return ___dsa384_5; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dsa384_5() { return &___dsa384_5; }
	inline void set_dsa384_5(CngAlgorithm_t3464946980 * value)
	{
		___dsa384_5 = value;
		Il2CppCodeGenWriteBarrier((&___dsa384_5), value);
	}

	inline static int32_t get_offset_of_dsa521_6() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___dsa521_6)); }
	inline CngAlgorithm_t3464946980 * get_dsa521_6() const { return ___dsa521_6; }
	inline CngAlgorithm_t3464946980 ** get_address_of_dsa521_6() { return &___dsa521_6; }
	inline void set_dsa521_6(CngAlgorithm_t3464946980 * value)
	{
		___dsa521_6 = value;
		Il2CppCodeGenWriteBarrier((&___dsa521_6), value);
	}

	inline static int32_t get_offset_of_md5_7() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___md5_7)); }
	inline CngAlgorithm_t3464946980 * get_md5_7() const { return ___md5_7; }
	inline CngAlgorithm_t3464946980 ** get_address_of_md5_7() { return &___md5_7; }
	inline void set_md5_7(CngAlgorithm_t3464946980 * value)
	{
		___md5_7 = value;
		Il2CppCodeGenWriteBarrier((&___md5_7), value);
	}

	inline static int32_t get_offset_of_sha1_8() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___sha1_8)); }
	inline CngAlgorithm_t3464946980 * get_sha1_8() const { return ___sha1_8; }
	inline CngAlgorithm_t3464946980 ** get_address_of_sha1_8() { return &___sha1_8; }
	inline void set_sha1_8(CngAlgorithm_t3464946980 * value)
	{
		___sha1_8 = value;
		Il2CppCodeGenWriteBarrier((&___sha1_8), value);
	}

	inline static int32_t get_offset_of_sha256_9() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___sha256_9)); }
	inline CngAlgorithm_t3464946980 * get_sha256_9() const { return ___sha256_9; }
	inline CngAlgorithm_t3464946980 ** get_address_of_sha256_9() { return &___sha256_9; }
	inline void set_sha256_9(CngAlgorithm_t3464946980 * value)
	{
		___sha256_9 = value;
		Il2CppCodeGenWriteBarrier((&___sha256_9), value);
	}

	inline static int32_t get_offset_of_sha384_10() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___sha384_10)); }
	inline CngAlgorithm_t3464946980 * get_sha384_10() const { return ___sha384_10; }
	inline CngAlgorithm_t3464946980 ** get_address_of_sha384_10() { return &___sha384_10; }
	inline void set_sha384_10(CngAlgorithm_t3464946980 * value)
	{
		___sha384_10 = value;
		Il2CppCodeGenWriteBarrier((&___sha384_10), value);
	}

	inline static int32_t get_offset_of_sha512_11() { return static_cast<int32_t>(offsetof(CngAlgorithm_t3464946980_StaticFields, ___sha512_11)); }
	inline CngAlgorithm_t3464946980 * get_sha512_11() const { return ___sha512_11; }
	inline CngAlgorithm_t3464946980 ** get_address_of_sha512_11() { return &___sha512_11; }
	inline void set_sha512_11(CngAlgorithm_t3464946980 * value)
	{
		___sha512_11 = value;
		Il2CppCodeGenWriteBarrier((&___sha512_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CNGALGORITHM_T3464946980_H
#ifndef GYROSCOPE_T3288342876_H
#define GYROSCOPE_T3288342876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gyroscope
struct  Gyroscope_t3288342876  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GYROSCOPE_T3288342876_H
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
#ifndef CURSOR_T1422555833_H
#define CURSOR_T1422555833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Cursor
struct  Cursor_t1422555833  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURSOR_T1422555833_H
#ifndef APPLICATION_T1852185770_H
#define APPLICATION_T1852185770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application
struct  Application_t1852185770  : public RuntimeObject
{
public:

public:
};

struct Application_t1852185770_StaticFields
{
public:
	// UnityEngine.Application/LowMemoryCallback UnityEngine.Application::lowMemory
	LowMemoryCallback_t4104246196 * ___lowMemory_0;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandler
	LogCallback_t3588208630 * ___s_LogCallbackHandler_1;
	// UnityEngine.Application/LogCallback UnityEngine.Application::s_LogCallbackHandlerThreaded
	LogCallback_t3588208630 * ___s_LogCallbackHandlerThreaded_2;
	// System.Func`1<System.Boolean> UnityEngine.Application::wantsToQuit
	Func_1_t3822001908 * ___wantsToQuit_3;
	// System.Action UnityEngine.Application::quitting
	Action_t1264377477 * ___quitting_4;

public:
	inline static int32_t get_offset_of_lowMemory_0() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___lowMemory_0)); }
	inline LowMemoryCallback_t4104246196 * get_lowMemory_0() const { return ___lowMemory_0; }
	inline LowMemoryCallback_t4104246196 ** get_address_of_lowMemory_0() { return &___lowMemory_0; }
	inline void set_lowMemory_0(LowMemoryCallback_t4104246196 * value)
	{
		___lowMemory_0 = value;
		Il2CppCodeGenWriteBarrier((&___lowMemory_0), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandler_1() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandler_1)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandler_1() const { return ___s_LogCallbackHandler_1; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandler_1() { return &___s_LogCallbackHandler_1; }
	inline void set_s_LogCallbackHandler_1(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandler_1), value);
	}

	inline static int32_t get_offset_of_s_LogCallbackHandlerThreaded_2() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___s_LogCallbackHandlerThreaded_2)); }
	inline LogCallback_t3588208630 * get_s_LogCallbackHandlerThreaded_2() const { return ___s_LogCallbackHandlerThreaded_2; }
	inline LogCallback_t3588208630 ** get_address_of_s_LogCallbackHandlerThreaded_2() { return &___s_LogCallbackHandlerThreaded_2; }
	inline void set_s_LogCallbackHandlerThreaded_2(LogCallback_t3588208630 * value)
	{
		___s_LogCallbackHandlerThreaded_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_LogCallbackHandlerThreaded_2), value);
	}

	inline static int32_t get_offset_of_wantsToQuit_3() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___wantsToQuit_3)); }
	inline Func_1_t3822001908 * get_wantsToQuit_3() const { return ___wantsToQuit_3; }
	inline Func_1_t3822001908 ** get_address_of_wantsToQuit_3() { return &___wantsToQuit_3; }
	inline void set_wantsToQuit_3(Func_1_t3822001908 * value)
	{
		___wantsToQuit_3 = value;
		Il2CppCodeGenWriteBarrier((&___wantsToQuit_3), value);
	}

	inline static int32_t get_offset_of_quitting_4() { return static_cast<int32_t>(offsetof(Application_t1852185770_StaticFields, ___quitting_4)); }
	inline Action_t1264377477 * get_quitting_4() const { return ___quitting_4; }
	inline Action_t1264377477 ** get_address_of_quitting_4() { return &___quitting_4; }
	inline void set_quitting_4(Action_t1264377477 * value)
	{
		___quitting_4 = value;
		Il2CppCodeGenWriteBarrier((&___quitting_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATION_T1852185770_H
#ifndef NOALLOCHELPERS_T1437076930_H
#define NOALLOCHELPERS_T1437076930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NoAllocHelpers
struct  NoAllocHelpers_t1437076930  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOALLOCHELPERS_T1437076930_H
#ifndef NATIVEHEADERATTRIBUTE_T5261382_H
#define NATIVEHEADERATTRIBUTE_T5261382_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativeHeaderAttribute
struct  NativeHeaderAttribute_t5261382  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.NativeHeaderAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeHeaderAttribute_t5261382, ___U3CHeaderU3Ek__BackingField_0)); }
	inline String_t* get_U3CHeaderU3Ek__BackingField_0() const { return ___U3CHeaderU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CHeaderU3Ek__BackingField_0() { return &___U3CHeaderU3Ek__BackingField_0; }
	inline void set_U3CHeaderU3Ek__BackingField_0(String_t* value)
	{
		___U3CHeaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHeaderU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEHEADERATTRIBUTE_T5261382_H
#ifndef NATIVENAMEATTRIBUTE_T3268151526_H
#define NATIVENAMEATTRIBUTE_T3268151526_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativeNameAttribute
struct  NativeNameAttribute_t3268151526  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.NativeNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeNameAttribute_t3268151526, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVENAMEATTRIBUTE_T3268151526_H
#ifndef NATIVEMETHODATTRIBUTE_T4187428193_H
#define NATIVEMETHODATTRIBUTE_T4187428193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativeMethodAttribute
struct  NativeMethodAttribute_t4187428193  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.NativeMethodAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsThreadSafe>k__BackingField
	bool ___U3CIsThreadSafeU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<IsFreeFunction>k__BackingField
	bool ___U3CIsFreeFunctionU3Ek__BackingField_2;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<ThrowsException>k__BackingField
	bool ___U3CThrowsExceptionU3Ek__BackingField_3;
	// System.Boolean UnityEngine.Bindings.NativeMethodAttribute::<HasExplicitThis>k__BackingField
	bool ___U3CHasExplicitThisU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t4187428193, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIsThreadSafeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t4187428193, ___U3CIsThreadSafeU3Ek__BackingField_1)); }
	inline bool get_U3CIsThreadSafeU3Ek__BackingField_1() const { return ___U3CIsThreadSafeU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsThreadSafeU3Ek__BackingField_1() { return &___U3CIsThreadSafeU3Ek__BackingField_1; }
	inline void set_U3CIsThreadSafeU3Ek__BackingField_1(bool value)
	{
		___U3CIsThreadSafeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CIsFreeFunctionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t4187428193, ___U3CIsFreeFunctionU3Ek__BackingField_2)); }
	inline bool get_U3CIsFreeFunctionU3Ek__BackingField_2() const { return ___U3CIsFreeFunctionU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CIsFreeFunctionU3Ek__BackingField_2() { return &___U3CIsFreeFunctionU3Ek__BackingField_2; }
	inline void set_U3CIsFreeFunctionU3Ek__BackingField_2(bool value)
	{
		___U3CIsFreeFunctionU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CThrowsExceptionU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t4187428193, ___U3CThrowsExceptionU3Ek__BackingField_3)); }
	inline bool get_U3CThrowsExceptionU3Ek__BackingField_3() const { return ___U3CThrowsExceptionU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CThrowsExceptionU3Ek__BackingField_3() { return &___U3CThrowsExceptionU3Ek__BackingField_3; }
	inline void set_U3CThrowsExceptionU3Ek__BackingField_3(bool value)
	{
		___U3CThrowsExceptionU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CHasExplicitThisU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(NativeMethodAttribute_t4187428193, ___U3CHasExplicitThisU3Ek__BackingField_4)); }
	inline bool get_U3CHasExplicitThisU3Ek__BackingField_4() const { return ___U3CHasExplicitThisU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasExplicitThisU3Ek__BackingField_4() { return &___U3CHasExplicitThisU3Ek__BackingField_4; }
	inline void set_U3CHasExplicitThisU3Ek__BackingField_4(bool value)
	{
		___U3CHasExplicitThisU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEMETHODATTRIBUTE_T4187428193_H
#ifndef SHA1_T1803193667_H
#define SHA1_T1803193667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1
struct  SHA1_t1803193667  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1_T1803193667_H
#ifndef LAYERMASK_T3493934918_H
#define LAYERMASK_T3493934918_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LayerMask
struct  LayerMask_t3493934918 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t3493934918, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LAYERMASK_T3493934918_H
#ifndef NOTNULLATTRIBUTE_T1114947401_H
#define NOTNULLATTRIBUTE_T1114947401_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NotNullAttribute
struct  NotNullAttribute_t1114947401  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTNULLATTRIBUTE_T1114947401_H
#ifndef UNMARSHALLEDATTRIBUTE_T1517743549_H
#define UNMARSHALLEDATTRIBUTE_T1517743549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.UnmarshalledAttribute
struct  UnmarshalledAttribute_t1517743549  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNMARSHALLEDATTRIBUTE_T1517743549_H
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
#ifndef NATIVECONDITIONALATTRIBUTE_T2439539374_H
#define NATIVECONDITIONALATTRIBUTE_T2439539374_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativeConditionalAttribute
struct  NativeConditionalAttribute_t2439539374  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.NativeConditionalAttribute::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
	// System.Boolean UnityEngine.Bindings.NativeConditionalAttribute::<Enabled>k__BackingField
	bool ___U3CEnabledU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CConditionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t2439539374, ___U3CConditionU3Ek__BackingField_0)); }
	inline String_t* get_U3CConditionU3Ek__BackingField_0() const { return ___U3CConditionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConditionU3Ek__BackingField_0() { return &___U3CConditionU3Ek__BackingField_0; }
	inline void set_U3CConditionU3Ek__BackingField_0(String_t* value)
	{
		___U3CConditionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConditionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CEnabledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeConditionalAttribute_t2439539374, ___U3CEnabledU3Ek__BackingField_1)); }
	inline bool get_U3CEnabledU3Ek__BackingField_1() const { return ___U3CEnabledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CEnabledU3Ek__BackingField_1() { return &___U3CEnabledU3Ek__BackingField_1; }
	inline void set_U3CEnabledU3Ek__BackingField_1(bool value)
	{
		___U3CEnabledU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONDITIONALATTRIBUTE_T2439539374_H
#ifndef CULLINGGROUPEVENT_T1722745023_H
#define CULLINGGROUPEVENT_T1722745023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroupEvent
struct  CullingGroupEvent_t1722745023 
{
public:
	// System.Int32 UnityEngine.CullingGroupEvent::m_Index
	int32_t ___m_Index_0;
	// System.Byte UnityEngine.CullingGroupEvent::m_PrevState
	uint8_t ___m_PrevState_1;
	// System.Byte UnityEngine.CullingGroupEvent::m_ThisState
	uint8_t ___m_ThisState_2;

public:
	inline static int32_t get_offset_of_m_Index_0() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_Index_0)); }
	inline int32_t get_m_Index_0() const { return ___m_Index_0; }
	inline int32_t* get_address_of_m_Index_0() { return &___m_Index_0; }
	inline void set_m_Index_0(int32_t value)
	{
		___m_Index_0 = value;
	}

	inline static int32_t get_offset_of_m_PrevState_1() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_PrevState_1)); }
	inline uint8_t get_m_PrevState_1() const { return ___m_PrevState_1; }
	inline uint8_t* get_address_of_m_PrevState_1() { return &___m_PrevState_1; }
	inline void set_m_PrevState_1(uint8_t value)
	{
		___m_PrevState_1 = value;
	}

	inline static int32_t get_offset_of_m_ThisState_2() { return static_cast<int32_t>(offsetof(CullingGroupEvent_t1722745023, ___m_ThisState_2)); }
	inline uint8_t get_m_ThisState_2() const { return ___m_ThisState_2; }
	inline uint8_t* get_address_of_m_ThisState_2() { return &___m_ThisState_2; }
	inline void set_m_ThisState_2(uint8_t value)
	{
		___m_ThisState_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULLINGGROUPEVENT_T1722745023_H
#ifndef MD5_T3177620429_H
#define MD5_T3177620429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5
struct  MD5_t3177620429  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5_T3177620429_H
#ifndef VISIBLETOOTHERMODULESATTRIBUTE_T1429630568_H
#define VISIBLETOOTHERMODULESATTRIBUTE_T1429630568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.VisibleToOtherModulesAttribute
struct  VisibleToOtherModulesAttribute_t1429630568  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VISIBLETOOTHERMODULESATTRIBUTE_T1429630568_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t433318409  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#ifndef WRITABLEATTRIBUTE_T812406054_H
#define WRITABLEATTRIBUTE_T812406054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t812406054  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T812406054_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef AESTRANSFORM_T2957123611_H
#define AESTRANSFORM_T2957123611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t2957123611  : public SymmetricTransform_t3802591843
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t2770800703* ___expandedKey_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_13() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___expandedKey_13)); }
	inline UInt32U5BU5D_t2770800703* get_expandedKey_13() const { return ___expandedKey_13; }
	inline UInt32U5BU5D_t2770800703** get_address_of_expandedKey_13() { return &___expandedKey_13; }
	inline void set_expandedKey_13(UInt32U5BU5D_t2770800703* value)
	{
		___expandedKey_13 = value;
		Il2CppCodeGenWriteBarrier((&___expandedKey_13), value);
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct AesTransform_t2957123611_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t2770800703* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t4116647657* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t4116647657* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t2770800703* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t2770800703* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t2770800703* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t2770800703* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t2770800703* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t2770800703* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t2770800703* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t2770800703* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t2770800703* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t2770800703** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t2770800703* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier((&___Rcon_16), value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t4116647657* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t4116647657** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t4116647657* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier((&___SBox_17), value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t4116647657* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t4116647657** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t4116647657* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier((&___iSBox_18), value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t2770800703* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t2770800703* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier((&___T0_19), value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t2770800703* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t2770800703* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier((&___T1_20), value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t2770800703* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t2770800703* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier((&___T2_21), value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t2770800703* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t2770800703** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t2770800703* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier((&___T3_22), value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t2770800703* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t2770800703* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier((&___iT0_23), value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t2770800703* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t2770800703* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier((&___iT1_24), value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t2770800703* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t2770800703* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier((&___iT2_25), value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(AesTransform_t2957123611_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t2770800703* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t2770800703** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t2770800703* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier((&___iT3_26), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESTRANSFORM_T2957123611_H
#ifndef TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
#define TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments
struct  TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 
{
public:
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::keyboardType
	uint32_t ___keyboardType_0;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::autocorrection
	uint32_t ___autocorrection_1;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::multiline
	uint32_t ___multiline_2;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::secure
	uint32_t ___secure_3;
	// System.UInt32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::alert
	uint32_t ___alert_4;
	// System.Int32 UnityEngine.TouchScreenKeyboard_InternalConstructorHelperArguments::characterLimit
	int32_t ___characterLimit_5;

public:
	inline static int32_t get_offset_of_keyboardType_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___keyboardType_0)); }
	inline uint32_t get_keyboardType_0() const { return ___keyboardType_0; }
	inline uint32_t* get_address_of_keyboardType_0() { return &___keyboardType_0; }
	inline void set_keyboardType_0(uint32_t value)
	{
		___keyboardType_0 = value;
	}

	inline static int32_t get_offset_of_autocorrection_1() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___autocorrection_1)); }
	inline uint32_t get_autocorrection_1() const { return ___autocorrection_1; }
	inline uint32_t* get_address_of_autocorrection_1() { return &___autocorrection_1; }
	inline void set_autocorrection_1(uint32_t value)
	{
		___autocorrection_1 = value;
	}

	inline static int32_t get_offset_of_multiline_2() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___multiline_2)); }
	inline uint32_t get_multiline_2() const { return ___multiline_2; }
	inline uint32_t* get_address_of_multiline_2() { return &___multiline_2; }
	inline void set_multiline_2(uint32_t value)
	{
		___multiline_2 = value;
	}

	inline static int32_t get_offset_of_secure_3() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___secure_3)); }
	inline uint32_t get_secure_3() const { return ___secure_3; }
	inline uint32_t* get_address_of_secure_3() { return &___secure_3; }
	inline void set_secure_3(uint32_t value)
	{
		___secure_3 = value;
	}

	inline static int32_t get_offset_of_alert_4() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___alert_4)); }
	inline uint32_t get_alert_4() const { return ___alert_4; }
	inline uint32_t* get_address_of_alert_4() { return &___alert_4; }
	inline void set_alert_4(uint32_t value)
	{
		___alert_4 = value;
	}

	inline static int32_t get_offset_of_characterLimit_5() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236, ___characterLimit_5)); }
	inline int32_t get_characterLimit_5() const { return ___characterLimit_5; }
	inline int32_t* get_address_of_characterLimit_5() { return &___characterLimit_5; }
	inline void set_characterLimit_5(int32_t value)
	{
		___characterLimit_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_INTERNALCONSTRUCTORHELPERARGUMENTS_T1462448236_H
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
#ifndef SHA512_T1346946930_H
#define SHA512_T1346946930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512
struct  SHA512_t1346946930  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512_T1346946930_H
#ifndef SHA384_T540967702_H
#define SHA384_T540967702_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384
struct  SHA384_t540967702  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384_T540967702_H
#ifndef UNITYENGINEMODULEASSEMBLY_T2421846737_H
#define UNITYENGINEMODULEASSEMBLY_T2421846737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityEngineModuleAssembly
struct  UnityEngineModuleAssembly_t2421846737  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYENGINEMODULEASSEMBLY_T2421846737_H
#ifndef SHA256_T3672283617_H
#define SHA256_T3672283617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256
struct  SHA256_t3672283617  : public HashAlgorithm_t1432317219
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256_T3672283617_H
#ifndef U24ARRAYTYPEU24120_T4289081652_H
#define U24ARRAYTYPEU24120_T4289081652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$120
struct  U24ArrayTypeU24120_t4289081652 
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
		uint8_t U24ArrayTypeU24120_t4289081652__padding[120];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24120_T4289081652_H
#ifndef U24ARRAYTYPEU24256_T1929481985_H
#define U24ARRAYTYPEU24256_T1929481985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$256
struct  U24ArrayTypeU24256_t1929481985 
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
		uint8_t U24ArrayTypeU24256_t1929481985__padding[256];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24256_T1929481985_H
#ifndef U24ARRAYTYPEU241024_T3907531058_H
#define U24ARRAYTYPEU241024_T3907531058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$1024
struct  U24ArrayTypeU241024_t3907531058 
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
		uint8_t U24ArrayTypeU241024_t3907531058__padding[1024];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU241024_T3907531058_H
#ifndef USEDBYNATIVECODEATTRIBUTE_T1703770351_H
#define USEDBYNATIVECODEATTRIBUTE_T1703770351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.UsedByNativeCodeAttribute
struct  UsedByNativeCodeAttribute_t1703770351  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDBYNATIVECODEATTRIBUTE_T1703770351_H
#ifndef REQUIREDBYNATIVECODEATTRIBUTE_T4130846357_H
#define REQUIREDBYNATIVECODEATTRIBUTE_T4130846357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.RequiredByNativeCodeAttribute
struct  RequiredByNativeCodeAttribute_t4130846357  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIREDBYNATIVECODEATTRIBUTE_T4130846357_H
#ifndef GENERATEMANAGEDPROXYATTRIBUTE_T2394178854_H
#define GENERATEMANAGEDPROXYATTRIBUTE_T2394178854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GenerateManagedProxyAttribute
struct  GenerateManagedProxyAttribute_t2394178854  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Scripting.GenerateManagedProxyAttribute::<NativeType>k__BackingField
	String_t* ___U3CNativeTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNativeTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GenerateManagedProxyAttribute_t2394178854, ___U3CNativeTypeU3Ek__BackingField_0)); }
	inline String_t* get_U3CNativeTypeU3Ek__BackingField_0() const { return ___U3CNativeTypeU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNativeTypeU3Ek__BackingField_0() { return &___U3CNativeTypeU3Ek__BackingField_0; }
	inline void set_U3CNativeTypeU3Ek__BackingField_0(String_t* value)
	{
		___U3CNativeTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNativeTypeU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEMANAGEDPROXYATTRIBUTE_T2394178854_H
#ifndef ASSETFILENAMEEXTENSIONATTRIBUTE_T1361241164_H
#define ASSETFILENAMEEXTENSIONATTRIBUTE_T1361241164_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssetFileNameExtensionAttribute
struct  AssetFileNameExtensionAttribute_t1361241164  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.AssetFileNameExtensionAttribute::<preferredExtension>k__BackingField
	String_t* ___U3CpreferredExtensionU3Ek__BackingField_0;
	// System.Collections.Generic.IEnumerable`1<System.String> UnityEngine.AssetFileNameExtensionAttribute::<otherExtensions>k__BackingField
	RuntimeObject* ___U3CotherExtensionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CpreferredExtensionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssetFileNameExtensionAttribute_t1361241164, ___U3CpreferredExtensionU3Ek__BackingField_0)); }
	inline String_t* get_U3CpreferredExtensionU3Ek__BackingField_0() const { return ___U3CpreferredExtensionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CpreferredExtensionU3Ek__BackingField_0() { return &___U3CpreferredExtensionU3Ek__BackingField_0; }
	inline void set_U3CpreferredExtensionU3Ek__BackingField_0(String_t* value)
	{
		___U3CpreferredExtensionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpreferredExtensionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CotherExtensionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AssetFileNameExtensionAttribute_t1361241164, ___U3CotherExtensionsU3Ek__BackingField_1)); }
	inline RuntimeObject* get_U3CotherExtensionsU3Ek__BackingField_1() const { return ___U3CotherExtensionsU3Ek__BackingField_1; }
	inline RuntimeObject** get_address_of_U3CotherExtensionsU3Ek__BackingField_1() { return &___U3CotherExtensionsU3Ek__BackingField_1; }
	inline void set_U3CotherExtensionsU3Ek__BackingField_1(RuntimeObject* value)
	{
		___U3CotherExtensionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CotherExtensionsU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETFILENAMEEXTENSIONATTRIBUTE_T1361241164_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t363116225  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#ifndef U24ARRAYTYPEU24136_T1950429486_H
#define U24ARRAYTYPEU24136_T1950429486_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>/$ArrayType$136
struct  U24ArrayTypeU24136_t1950429486 
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
		uint8_t U24ArrayTypeU24136_t1950429486__padding[136];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24ARRAYTYPEU24136_T1950429486_H
#ifndef TOUCHSCREENKEYBOARD_T731888065_H
#define TOUCHSCREENKEYBOARD_T731888065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard
struct  TouchScreenKeyboard_t731888065  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.TouchScreenKeyboard::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(TouchScreenKeyboard_t731888065, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCHSCREENKEYBOARD_T731888065_H
#ifndef RECTOFFSET_T1369453676_H
#define RECTOFFSET_T1369453676_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectOffset
struct  RectOffset_t1369453676  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.RectOffset::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Object UnityEngine.RectOffset::m_SourceStyle
	RuntimeObject * ___m_SourceStyle_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(RectOffset_t1369453676, ___m_SourceStyle_1)); }
	inline RuntimeObject * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline RuntimeObject ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(RuntimeObject * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_SourceStyle_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
// Native definition for COM marshalling of UnityEngine.RectOffset
struct RectOffset_t1369453676_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppIUnknown* ___m_SourceStyle_1;
};
#endif // RECTOFFSET_T1369453676_H
#ifndef STATUS_T785886969_H
#define STATUS_T785886969_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchScreenKeyboard/Status
struct  Status_t785886969 
{
public:
	// System.Int32 UnityEngine.TouchScreenKeyboard/Status::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Status_t785886969, ___value___1)); }
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
#endif // STATUS_T785886969_H
#ifndef SORTDIRECTION_T3222219096_H
#define SORTDIRECTION_T3222219096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.SortDirection
struct  SortDirection_t3222219096 
{
public:
	// System.Int32 System.Linq.SortDirection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SortDirection_t3222219096, ___value___1)); }
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
#endif // SORTDIRECTION_T3222219096_H
#ifndef IMECOMPOSITIONMODE_T2677948540_H
#define IMECOMPOSITIONMODE_T2677948540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.IMECompositionMode
struct  IMECompositionMode_t2677948540 
{
public:
	// System.Int32 UnityEngine.IMECompositionMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(IMECompositionMode_t2677948540, ___value___1)); }
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
#endif // IMECOMPOSITIONMODE_T2677948540_H
#ifndef TOUCHTYPE_T2034578258_H
#define TOUCHTYPE_T2034578258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchType
struct  TouchType_t2034578258 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchType_t2034578258, ___value___1)); }
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
#endif // TOUCHTYPE_T2034578258_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
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
#endif // LOGTYPE_T73765434_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
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
#ifndef TOUCHPHASE_T72348083_H
#define TOUCHPHASE_T72348083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TouchPhase
struct  TouchPhase_t72348083 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TouchPhase_t72348083, ___value___1)); }
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
#endif // TOUCHPHASE_T72348083_H
#ifndef GRADIENT_T3067099924_H
#define GRADIENT_T3067099924_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Gradient
struct  Gradient_t3067099924  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t3067099924, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t3067099924_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // GRADIENT_T3067099924_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
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
#ifndef FREEFUNCTIONATTRIBUTE_T2020741617_H
#define FREEFUNCTIONATTRIBUTE_T2020741617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.FreeFunctionAttribute
struct  FreeFunctionAttribute_t2020741617  : public NativeMethodAttribute_t4187428193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FREEFUNCTIONATTRIBUTE_T2020741617_H
#ifndef U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#define U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t3057255366  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields
{
public:
	// <PrivateImplementationDetails>/$ArrayType$136 <PrivateImplementationDetails>::$$field-0
	U24ArrayTypeU24136_t1950429486  ___U24U24fieldU2D0_0;
	// <PrivateImplementationDetails>/$ArrayType$120 <PrivateImplementationDetails>::$$field-1
	U24ArrayTypeU24120_t4289081652  ___U24U24fieldU2D1_1;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-2
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D2_2;
	// <PrivateImplementationDetails>/$ArrayType$256 <PrivateImplementationDetails>::$$field-3
	U24ArrayTypeU24256_t1929481985  ___U24U24fieldU2D3_3;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-4
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D4_4;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-5
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D5_5;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-6
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D6_6;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-7
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D7_7;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-8
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D8_8;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-9
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D9_9;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-10
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D10_10;
	// <PrivateImplementationDetails>/$ArrayType$1024 <PrivateImplementationDetails>::$$field-11
	U24ArrayTypeU241024_t3907531058  ___U24U24fieldU2D11_11;

public:
	inline static int32_t get_offset_of_U24U24fieldU2D0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D0_0)); }
	inline U24ArrayTypeU24136_t1950429486  get_U24U24fieldU2D0_0() const { return ___U24U24fieldU2D0_0; }
	inline U24ArrayTypeU24136_t1950429486 * get_address_of_U24U24fieldU2D0_0() { return &___U24U24fieldU2D0_0; }
	inline void set_U24U24fieldU2D0_0(U24ArrayTypeU24136_t1950429486  value)
	{
		___U24U24fieldU2D0_0 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D1_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D1_1)); }
	inline U24ArrayTypeU24120_t4289081652  get_U24U24fieldU2D1_1() const { return ___U24U24fieldU2D1_1; }
	inline U24ArrayTypeU24120_t4289081652 * get_address_of_U24U24fieldU2D1_1() { return &___U24U24fieldU2D1_1; }
	inline void set_U24U24fieldU2D1_1(U24ArrayTypeU24120_t4289081652  value)
	{
		___U24U24fieldU2D1_1 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D2_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D2_2)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D2_2() const { return ___U24U24fieldU2D2_2; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D2_2() { return &___U24U24fieldU2D2_2; }
	inline void set_U24U24fieldU2D2_2(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D2_2 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D3_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D3_3)); }
	inline U24ArrayTypeU24256_t1929481985  get_U24U24fieldU2D3_3() const { return ___U24U24fieldU2D3_3; }
	inline U24ArrayTypeU24256_t1929481985 * get_address_of_U24U24fieldU2D3_3() { return &___U24U24fieldU2D3_3; }
	inline void set_U24U24fieldU2D3_3(U24ArrayTypeU24256_t1929481985  value)
	{
		___U24U24fieldU2D3_3 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D4_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D4_4)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D4_4() const { return ___U24U24fieldU2D4_4; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D4_4() { return &___U24U24fieldU2D4_4; }
	inline void set_U24U24fieldU2D4_4(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D4_4 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D5_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D5_5)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D5_5() const { return ___U24U24fieldU2D5_5; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D5_5() { return &___U24U24fieldU2D5_5; }
	inline void set_U24U24fieldU2D5_5(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D5_5 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D6_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D6_6)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D6_6() const { return ___U24U24fieldU2D6_6; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D6_6() { return &___U24U24fieldU2D6_6; }
	inline void set_U24U24fieldU2D6_6(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D6_6 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D7_7() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D7_7)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D7_7() const { return ___U24U24fieldU2D7_7; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D7_7() { return &___U24U24fieldU2D7_7; }
	inline void set_U24U24fieldU2D7_7(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D7_7 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D8_8() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D8_8)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D8_8() const { return ___U24U24fieldU2D8_8; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D8_8() { return &___U24U24fieldU2D8_8; }
	inline void set_U24U24fieldU2D8_8(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D8_8 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D9_9() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D9_9)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D9_9() const { return ___U24U24fieldU2D9_9; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D9_9() { return &___U24U24fieldU2D9_9; }
	inline void set_U24U24fieldU2D9_9(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D9_9 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D10_10() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D10_10)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D10_10() const { return ___U24U24fieldU2D10_10; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D10_10() { return &___U24U24fieldU2D10_10; }
	inline void set_U24U24fieldU2D10_10(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D10_10 = value;
	}

	inline static int32_t get_offset_of_U24U24fieldU2D11_11() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields, ___U24U24fieldU2D11_11)); }
	inline U24ArrayTypeU241024_t3907531058  get_U24U24fieldU2D11_11() const { return ___U24U24fieldU2D11_11; }
	inline U24ArrayTypeU241024_t3907531058 * get_address_of_U24U24fieldU2D11_11() { return &___U24U24fieldU2D11_11; }
	inline void set_U24U24fieldU2D11_11(U24ArrayTypeU241024_t3907531058  value)
	{
		___U24U24fieldU2D11_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CPRIVATEIMPLEMENTATIONDETAILSU3E_T3057255366_H
#ifndef THREADSAFEATTRIBUTE_T3376653515_H
#define THREADSAFEATTRIBUTE_T3376653515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.ThreadSafeAttribute
struct  ThreadSafeAttribute_t3376653515  : public NativeMethodAttribute_t4187428193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSAFEATTRIBUTE_T3376653515_H
#ifndef STATICACCESSORTYPE_T186341701_H
#define STATICACCESSORTYPE_T186341701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.StaticAccessorType
struct  StaticAccessorType_t186341701 
{
public:
	// System.Int32 UnityEngine.Bindings.StaticAccessorType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StaticAccessorType_t186341701, ___value___1)); }
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
#endif // STATICACCESSORTYPE_T186341701_H
#ifndef SHA512CRYPTOSERVICEPROVIDER_T3225838620_H
#define SHA512CRYPTOSERVICEPROVIDER_T3225838620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512CryptoServiceProvider
struct  SHA512CryptoServiceProvider_t3225838620  : public SHA512_t1346946930
{
public:
	// System.Security.Cryptography.SHA512 System.Security.Cryptography.SHA512CryptoServiceProvider::hash
	SHA512_t1346946930 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA512CryptoServiceProvider_t3225838620, ___hash_5)); }
	inline SHA512_t1346946930 * get_hash_5() const { return ___hash_5; }
	inline SHA512_t1346946930 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA512_t1346946930 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA512CryptoServiceProvider_t3225838620_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512CryptoServiceProvider::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA512CryptoServiceProvider_t3225838620_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512CRYPTOSERVICEPROVIDER_T3225838620_H
#ifndef SHA512CNG_T2349874765_H
#define SHA512CNG_T2349874765_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA512Cng
struct  SHA512Cng_t2349874765  : public SHA512_t1346946930
{
public:
	// System.Security.Cryptography.SHA512 System.Security.Cryptography.SHA512Cng::hash
	SHA512_t1346946930 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA512Cng_t2349874765, ___hash_5)); }
	inline SHA512_t1346946930 * get_hash_5() const { return ___hash_5; }
	inline SHA512_t1346946930 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA512_t1346946930 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA512Cng_t2349874765_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA512Cng::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA512Cng_t2349874765_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA512CNG_T2349874765_H
#ifndef SHA384CRYPTOSERVICEPROVIDER_T396845666_H
#define SHA384CRYPTOSERVICEPROVIDER_T396845666_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384CryptoServiceProvider
struct  SHA384CryptoServiceProvider_t396845666  : public SHA384_t540967702
{
public:
	// System.Security.Cryptography.SHA384 System.Security.Cryptography.SHA384CryptoServiceProvider::hash
	SHA384_t540967702 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA384CryptoServiceProvider_t396845666, ___hash_5)); }
	inline SHA384_t540967702 * get_hash_5() const { return ___hash_5; }
	inline SHA384_t540967702 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA384_t540967702 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA384CryptoServiceProvider_t396845666_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384CryptoServiceProvider::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA384CryptoServiceProvider_t396845666_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384CRYPTOSERVICEPROVIDER_T396845666_H
#ifndef NATIVEPROPERTYATTRIBUTE_T1305929258_H
#define NATIVEPROPERTYATTRIBUTE_T1305929258_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativePropertyAttribute
struct  NativePropertyAttribute_t1305929258  : public NativeMethodAttribute_t4187428193
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEPROPERTYATTRIBUTE_T1305929258_H
#ifndef SHA384CNG_T1558444717_H
#define SHA384CNG_T1558444717_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA384Cng
struct  SHA384Cng_t1558444717  : public SHA384_t540967702
{
public:
	// System.Security.Cryptography.SHA384 System.Security.Cryptography.SHA384Cng::hash
	SHA384_t540967702 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA384Cng_t1558444717, ___hash_5)); }
	inline SHA384_t540967702 * get_hash_5() const { return ___hash_5; }
	inline SHA384_t540967702 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA384_t540967702 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA384Cng_t1558444717_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA384Cng::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA384Cng_t1558444717_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA384CNG_T1558444717_H
#ifndef SHA256CNG_T371331412_H
#define SHA256CNG_T371331412_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256Cng
struct  SHA256Cng_t371331412  : public SHA256_t3672283617
{
public:
	// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256Cng::hash
	SHA256_t3672283617 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA256Cng_t371331412, ___hash_5)); }
	inline SHA256_t3672283617 * get_hash_5() const { return ___hash_5; }
	inline SHA256_t3672283617 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA256_t3672283617 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA256Cng_t371331412_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256Cng::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA256Cng_t371331412_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256CNG_T371331412_H
#ifndef CULLINGGROUP_T2096318768_H
#define CULLINGGROUP_T2096318768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup
struct  CullingGroup_t2096318768  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.CullingGroup::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.CullingGroup/StateChanged UnityEngine.CullingGroup::m_OnStateChanged
	StateChanged_t2136737110 * ___m_OnStateChanged_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_OnStateChanged_1() { return static_cast<int32_t>(offsetof(CullingGroup_t2096318768, ___m_OnStateChanged_1)); }
	inline StateChanged_t2136737110 * get_m_OnStateChanged_1() const { return ___m_OnStateChanged_1; }
	inline StateChanged_t2136737110 ** get_address_of_m_OnStateChanged_1() { return &___m_OnStateChanged_1; }
	inline void set_m_OnStateChanged_1(StateChanged_t2136737110 * value)
	{
		___m_OnStateChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnStateChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
// Native definition for COM marshalling of UnityEngine.CullingGroup
struct CullingGroup_t2096318768_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_OnStateChanged_1;
};
#endif // CULLINGGROUP_T2096318768_H
#ifndef SHA1CNG_T2325991962_H
#define SHA1CNG_T2325991962_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Cng
struct  SHA1Cng_t2325991962  : public SHA1_t1803193667
{
public:
	// System.Security.Cryptography.SHA1 System.Security.Cryptography.SHA1Cng::hash
	SHA1_t1803193667 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA1Cng_t2325991962, ___hash_5)); }
	inline SHA1_t1803193667 * get_hash_5() const { return ___hash_5; }
	inline SHA1_t1803193667 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA1_t1803193667 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA1Cng_t2325991962_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA1Cng::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA1Cng_t2325991962_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA1CNG_T2325991962_H
#ifndef MD5CNG_T3796024657_H
#define MD5CNG_T3796024657_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.MD5Cng
struct  MD5Cng_t3796024657  : public MD5_t3177620429
{
public:
	// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5Cng::hash
	MD5_t3177620429 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(MD5Cng_t3796024657, ___hash_5)); }
	inline MD5_t3177620429 * get_hash_5() const { return ___hash_5; }
	inline MD5_t3177620429 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(MD5_t3177620429 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct MD5Cng_t3796024657_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.MD5Cng::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(MD5Cng_t3796024657_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MD5CNG_T3796024657_H
#ifndef CURSORLOCKMODE_T2840764040_H
#define CURSORLOCKMODE_T2840764040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CursorLockMode
struct  CursorLockMode_t2840764040 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CursorLockMode_t2840764040, ___value___1)); }
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
#endif // CURSORLOCKMODE_T2840764040_H
#ifndef DISPLAY_T1387065949_H
#define DISPLAY_T1387065949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display
struct  Display_t1387065949  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Display::nativeDisplay
	intptr_t ___nativeDisplay_0;

public:
	inline static int32_t get_offset_of_nativeDisplay_0() { return static_cast<int32_t>(offsetof(Display_t1387065949, ___nativeDisplay_0)); }
	inline intptr_t get_nativeDisplay_0() const { return ___nativeDisplay_0; }
	inline intptr_t* get_address_of_nativeDisplay_0() { return &___nativeDisplay_0; }
	inline void set_nativeDisplay_0(intptr_t value)
	{
		___nativeDisplay_0 = value;
	}
};

struct Display_t1387065949_StaticFields
{
public:
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t103034768* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1387065949 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t51287044 * ___onDisplaysUpdated_3;

public:
	inline static int32_t get_offset_of_displays_1() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___displays_1)); }
	inline DisplayU5BU5D_t103034768* get_displays_1() const { return ___displays_1; }
	inline DisplayU5BU5D_t103034768** get_address_of_displays_1() { return &___displays_1; }
	inline void set_displays_1(DisplayU5BU5D_t103034768* value)
	{
		___displays_1 = value;
		Il2CppCodeGenWriteBarrier((&___displays_1), value);
	}

	inline static int32_t get_offset_of__mainDisplay_2() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ____mainDisplay_2)); }
	inline Display_t1387065949 * get__mainDisplay_2() const { return ____mainDisplay_2; }
	inline Display_t1387065949 ** get_address_of__mainDisplay_2() { return &____mainDisplay_2; }
	inline void set__mainDisplay_2(Display_t1387065949 * value)
	{
		____mainDisplay_2 = value;
		Il2CppCodeGenWriteBarrier((&____mainDisplay_2), value);
	}

	inline static int32_t get_offset_of_onDisplaysUpdated_3() { return static_cast<int32_t>(offsetof(Display_t1387065949_StaticFields, ___onDisplaysUpdated_3)); }
	inline DisplaysUpdatedDelegate_t51287044 * get_onDisplaysUpdated_3() const { return ___onDisplaysUpdated_3; }
	inline DisplaysUpdatedDelegate_t51287044 ** get_address_of_onDisplaysUpdated_3() { return &___onDisplaysUpdated_3; }
	inline void set_onDisplaysUpdated_3(DisplaysUpdatedDelegate_t51287044 * value)
	{
		___onDisplaysUpdated_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDisplaysUpdated_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAY_T1387065949_H
#ifndef SHA256CRYPTOSERVICEPROVIDER_T3653730571_H
#define SHA256CRYPTOSERVICEPROVIDER_T3653730571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA256CryptoServiceProvider
struct  SHA256CryptoServiceProvider_t3653730571  : public SHA256_t3672283617
{
public:
	// System.Security.Cryptography.SHA256 System.Security.Cryptography.SHA256CryptoServiceProvider::hash
	SHA256_t3672283617 * ___hash_5;

public:
	inline static int32_t get_offset_of_hash_5() { return static_cast<int32_t>(offsetof(SHA256CryptoServiceProvider_t3653730571, ___hash_5)); }
	inline SHA256_t3672283617 * get_hash_5() const { return ___hash_5; }
	inline SHA256_t3672283617 ** get_address_of_hash_5() { return &___hash_5; }
	inline void set_hash_5(SHA256_t3672283617 * value)
	{
		___hash_5 = value;
		Il2CppCodeGenWriteBarrier((&___hash_5), value);
	}
};

struct SHA256CryptoServiceProvider_t3653730571_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.SHA256CryptoServiceProvider::Empty
	ByteU5BU5D_t4116647657* ___Empty_4;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(SHA256CryptoServiceProvider_t3653730571_StaticFields, ___Empty_4)); }
	inline ByteU5BU5D_t4116647657* get_Empty_4() const { return ___Empty_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(ByteU5BU5D_t4116647657* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHA256CRYPTOSERVICEPROVIDER_T3653730571_H
#ifndef CODEGENOPTIONS_T498890944_H
#define CODEGENOPTIONS_T498890944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.CodegenOptions
struct  CodegenOptions_t498890944 
{
public:
	// System.Int32 UnityEngine.Bindings.CodegenOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CodegenOptions_t498890944, ___value___1)); }
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
#endif // CODEGENOPTIONS_T498890944_H
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
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef NATIVETYPEATTRIBUTE_T2250406315_H
#define NATIVETYPEATTRIBUTE_T2250406315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.NativeTypeAttribute
struct  NativeTypeAttribute_t2250406315  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<Header>k__BackingField
	String_t* ___U3CHeaderU3Ek__BackingField_0;
	// System.String UnityEngine.Bindings.NativeTypeAttribute::<IntermediateScriptingStructName>k__BackingField
	String_t* ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1;
	// UnityEngine.Bindings.CodegenOptions UnityEngine.Bindings.NativeTypeAttribute::<CodegenOptions>k__BackingField
	int32_t ___U3CCodegenOptionsU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CHeaderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t2250406315, ___U3CHeaderU3Ek__BackingField_0)); }
	inline String_t* get_U3CHeaderU3Ek__BackingField_0() const { return ___U3CHeaderU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CHeaderU3Ek__BackingField_0() { return &___U3CHeaderU3Ek__BackingField_0; }
	inline void set_U3CHeaderU3Ek__BackingField_0(String_t* value)
	{
		___U3CHeaderU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CHeaderU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t2250406315, ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() const { return ___U3CIntermediateScriptingStructNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CIntermediateScriptingStructNameU3Ek__BackingField_1() { return &___U3CIntermediateScriptingStructNameU3Ek__BackingField_1; }
	inline void set_U3CIntermediateScriptingStructNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CIntermediateScriptingStructNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CIntermediateScriptingStructNameU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CCodegenOptionsU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(NativeTypeAttribute_t2250406315, ___U3CCodegenOptionsU3Ek__BackingField_2)); }
	inline int32_t get_U3CCodegenOptionsU3Ek__BackingField_2() const { return ___U3CCodegenOptionsU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CCodegenOptionsU3Ek__BackingField_2() { return &___U3CCodegenOptionsU3Ek__BackingField_2; }
	inline void set_U3CCodegenOptionsU3Ek__BackingField_2(int32_t value)
	{
		___U3CCodegenOptionsU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVETYPEATTRIBUTE_T2250406315_H
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
#ifndef STATICACCESSORATTRIBUTE_T2432663902_H
#define STATICACCESSORATTRIBUTE_T2432663902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bindings.StaticAccessorAttribute
struct  StaticAccessorAttribute_t2432663902  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.Bindings.StaticAccessorAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// UnityEngine.Bindings.StaticAccessorType UnityEngine.Bindings.StaticAccessorAttribute::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StaticAccessorAttribute_t2432663902, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CNameU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StaticAccessorAttribute_t2432663902, ___U3CTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_1() const { return ___U3CTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_1() { return &___U3CTypeU3Ek__BackingField_1; }
	inline void set_U3CTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATICACCESSORATTRIBUTE_T2432663902_H
#ifndef TOUCH_T1921856868_H
#define TOUCH_T1921856868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Touch
struct  Touch_t1921856868 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t2156229523  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t2156229523  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t2156229523  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Position_1)); }
	inline Vector2_t2156229523  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_t2156229523 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_t2156229523  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RawPosition_2)); }
	inline Vector2_t2156229523  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_t2156229523 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_t2156229523  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_PositionDelta_3)); }
	inline Vector2_t2156229523  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_t2156229523 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_t2156229523  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_t1921856868, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TOUCH_T1921856868_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef AES_T1218282760_H
#define AES_T1218282760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Aes
struct  Aes_t1218282760  : public SymmetricAlgorithm_t4254223087
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AES_T1218282760_H
#ifndef STATECHANGED_T2136737110_H
#define STATECHANGED_T2136737110_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CullingGroup/StateChanged
struct  StateChanged_t2136737110  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STATECHANGED_T2136737110_H
#ifndef CAMERACALLBACK_T190067161_H
#define CAMERACALLBACK_T190067161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera/CameraCallback
struct  CameraCallback_t190067161  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACALLBACK_T190067161_H
#ifndef LOGCALLBACK_T3588208630_H
#define LOGCALLBACK_T3588208630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LogCallback
struct  LogCallback_t3588208630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGCALLBACK_T3588208630_H
#ifndef LOWMEMORYCALLBACK_T4104246196_H
#define LOWMEMORYCALLBACK_T4104246196_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Application/LowMemoryCallback
struct  LowMemoryCallback_t4104246196  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOWMEMORYCALLBACK_T4104246196_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef DISPLAYSUPDATEDDELEGATE_T51287044_H
#define DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Display/DisplaysUpdatedDelegate
struct  DisplaysUpdatedDelegate_t51287044  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPLAYSUPDATEDDELEGATE_T51287044_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef GUILAYER_T2783472903_H
#define GUILAYER_T2783472903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayer
struct  GUILayer_t2783472903  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUILAYER_T2783472903_H
#ifndef GUIELEMENT_T3567083079_H
#define GUIELEMENT_T3567083079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIElement
struct  GUIElement_t3567083079  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIELEMENT_T3567083079_H
#ifndef AESCRYPTOSERVICEPROVIDER_T345478893_H
#define AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesCryptoServiceProvider
struct  AesCryptoServiceProvider_t345478893  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESCRYPTOSERVICEPROVIDER_T345478893_H
#ifndef AESMANAGED_T1129950597_H
#define AESMANAGED_T1129950597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesManaged
struct  AesManaged_t1129950597  : public Aes_t1218282760
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AESMANAGED_T1129950597_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2800 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2801 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2801[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2802 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2802[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2803 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2803[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2804 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2804[8] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2805 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2805[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2806 = { sizeof (SortDirection_t3222219096)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2806[3] = 
{
	SortDirection_t3222219096::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2807 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2807[3] = 
{
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2808 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2808[14] = 
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2809 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2809[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2810 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2810[4] = 
{
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2811 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2811[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2812 = { sizeof (Aes_t1218282760), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2813 = { sizeof (AesManaged_t1129950597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2814 = { sizeof (AesCryptoServiceProvider_t345478893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2815 = { sizeof (AesTransform_t2957123611), -1, sizeof(AesTransform_t2957123611_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2815[15] = 
{
	0,
	AesTransform_t2957123611::get_offset_of_expandedKey_13(),
	AesTransform_t2957123611::get_offset_of_Nk_14(),
	AesTransform_t2957123611::get_offset_of_Nr_15(),
	AesTransform_t2957123611_StaticFields::get_offset_of_Rcon_16(),
	AesTransform_t2957123611_StaticFields::get_offset_of_SBox_17(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iSBox_18(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T0_19(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T1_20(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T2_21(),
	AesTransform_t2957123611_StaticFields::get_offset_of_T3_22(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT0_23(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT1_24(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT2_25(),
	AesTransform_t2957123611_StaticFields::get_offset_of_iT3_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2816 = { sizeof (CngAlgorithm_t3464946980), -1, sizeof(CngAlgorithm_t3464946980_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2816[12] = 
{
	CngAlgorithm_t3464946980::get_offset_of_algo_0(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dh256_1(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dh384_2(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dh521_3(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dsa256_4(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dsa384_5(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_dsa521_6(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_md5_7(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_sha1_8(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_sha256_9(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_sha384_10(),
	CngAlgorithm_t3464946980_StaticFields::get_offset_of_sha512_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2817 = { sizeof (CngAlgorithmGroup_t2242971942), -1, sizeof(CngAlgorithmGroup_t2242971942_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2817[6] = 
{
	CngAlgorithmGroup_t2242971942::get_offset_of_group_0(),
	CngAlgorithmGroup_t2242971942_StaticFields::get_offset_of_dh_1(),
	CngAlgorithmGroup_t2242971942_StaticFields::get_offset_of_dsa_2(),
	CngAlgorithmGroup_t2242971942_StaticFields::get_offset_of_ecdh_3(),
	CngAlgorithmGroup_t2242971942_StaticFields::get_offset_of_ecdsa_4(),
	CngAlgorithmGroup_t2242971942_StaticFields::get_offset_of_rsa_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2818 = { sizeof (MD5Cng_t3796024657), -1, sizeof(MD5Cng_t3796024657_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2818[2] = 
{
	MD5Cng_t3796024657_StaticFields::get_offset_of_Empty_4(),
	MD5Cng_t3796024657::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2819 = { sizeof (SHA1Cng_t2325991962), -1, sizeof(SHA1Cng_t2325991962_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2819[2] = 
{
	SHA1Cng_t2325991962_StaticFields::get_offset_of_Empty_4(),
	SHA1Cng_t2325991962::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2820 = { sizeof (SHA256Cng_t371331412), -1, sizeof(SHA256Cng_t371331412_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2820[2] = 
{
	SHA256Cng_t371331412_StaticFields::get_offset_of_Empty_4(),
	SHA256Cng_t371331412::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2821 = { sizeof (SHA256CryptoServiceProvider_t3653730571), -1, sizeof(SHA256CryptoServiceProvider_t3653730571_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2821[2] = 
{
	SHA256CryptoServiceProvider_t3653730571_StaticFields::get_offset_of_Empty_4(),
	SHA256CryptoServiceProvider_t3653730571::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2822 = { sizeof (SHA384Cng_t1558444717), -1, sizeof(SHA384Cng_t1558444717_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2822[2] = 
{
	SHA384Cng_t1558444717_StaticFields::get_offset_of_Empty_4(),
	SHA384Cng_t1558444717::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2823 = { sizeof (SHA384CryptoServiceProvider_t396845666), -1, sizeof(SHA384CryptoServiceProvider_t396845666_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2823[2] = 
{
	SHA384CryptoServiceProvider_t396845666_StaticFields::get_offset_of_Empty_4(),
	SHA384CryptoServiceProvider_t396845666::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2824 = { sizeof (SHA512Cng_t2349874765), -1, sizeof(SHA512Cng_t2349874765_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2824[2] = 
{
	SHA512Cng_t2349874765_StaticFields::get_offset_of_Empty_4(),
	SHA512Cng_t2349874765::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2825 = { sizeof (SHA512CryptoServiceProvider_t3225838620), -1, sizeof(SHA512CryptoServiceProvider_t3225838620_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2825[2] = 
{
	SHA512CryptoServiceProvider_t3225838620_StaticFields::get_offset_of_Empty_4(),
	SHA512CryptoServiceProvider_t3225838620::get_offset_of_hash_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2826 = { sizeof (Action_t1264377477), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2827 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2828 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2829 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2830 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2831 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2832 = { sizeof (U3CPrivateImplementationDetailsU3E_t3057255366), -1, sizeof(U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2832[12] = 
{
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D0_0(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D1_1(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D2_2(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D3_3(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D4_4(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D5_5(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D6_6(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D7_7(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D8_8(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D9_9(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D10_10(),
	U3CPrivateImplementationDetailsU3E_t3057255366_StaticFields::get_offset_of_U24U24fieldU2D11_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2833 = { sizeof (U24ArrayTypeU24136_t1950429486)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24136_t1950429486 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2834 = { sizeof (U24ArrayTypeU24120_t4289081652)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24120_t4289081652 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2835 = { sizeof (U24ArrayTypeU24256_t1929481985)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU24256_t1929481985 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2836 = { sizeof (U24ArrayTypeU241024_t3907531058)+ sizeof (RuntimeObject), sizeof(U24ArrayTypeU241024_t3907531058 ), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2837 = { sizeof (U3CModuleU3E_t692745532), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2838 = { sizeof (UsedByNativeCodeAttribute_t1703770351), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2839 = { sizeof (RequiredByNativeCodeAttribute_t4130846357), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2840 = { sizeof (GenerateManagedProxyAttribute_t2394178854), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2840[1] = 
{
	GenerateManagedProxyAttribute_t2394178854::get_offset_of_U3CNativeTypeU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2841 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t433318409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2842 = { sizeof (AssetFileNameExtensionAttribute_t1361241164), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2842[2] = 
{
	AssetFileNameExtensionAttribute_t1361241164::get_offset_of_U3CpreferredExtensionU3Ek__BackingField_0(),
	AssetFileNameExtensionAttribute_t1361241164::get_offset_of_U3CotherExtensionsU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2843 = { sizeof (ThreadAndSerializationSafeAttribute_t363116225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2844 = { sizeof (WritableAttribute_t812406054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2845 = { sizeof (UnityEngineModuleAssembly_t2421846737), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2846 = { sizeof (VisibleToOtherModulesAttribute_t1429630568), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2847 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2848 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2849 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2850 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2851 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2852 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2853 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2854 = { sizeof (NativeConditionalAttribute_t2439539374), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2854[2] = 
{
	NativeConditionalAttribute_t2439539374::get_offset_of_U3CConditionU3Ek__BackingField_0(),
	NativeConditionalAttribute_t2439539374::get_offset_of_U3CEnabledU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2855 = { sizeof (NativeHeaderAttribute_t5261382), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2855[1] = 
{
	NativeHeaderAttribute_t5261382::get_offset_of_U3CHeaderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2856 = { sizeof (NativeNameAttribute_t3268151526), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2856[1] = 
{
	NativeNameAttribute_t3268151526::get_offset_of_U3CNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2857 = { sizeof (NativeMethodAttribute_t4187428193), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2857[5] = 
{
	NativeMethodAttribute_t4187428193::get_offset_of_U3CNameU3Ek__BackingField_0(),
	NativeMethodAttribute_t4187428193::get_offset_of_U3CIsThreadSafeU3Ek__BackingField_1(),
	NativeMethodAttribute_t4187428193::get_offset_of_U3CIsFreeFunctionU3Ek__BackingField_2(),
	NativeMethodAttribute_t4187428193::get_offset_of_U3CThrowsExceptionU3Ek__BackingField_3(),
	NativeMethodAttribute_t4187428193::get_offset_of_U3CHasExplicitThisU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2858 = { sizeof (NativePropertyAttribute_t1305929258), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2859 = { sizeof (CodegenOptions_t498890944)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2859[4] = 
{
	CodegenOptions_t498890944::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2860 = { sizeof (NativeTypeAttribute_t2250406315), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2860[3] = 
{
	NativeTypeAttribute_t2250406315::get_offset_of_U3CHeaderU3Ek__BackingField_0(),
	NativeTypeAttribute_t2250406315::get_offset_of_U3CIntermediateScriptingStructNameU3Ek__BackingField_1(),
	NativeTypeAttribute_t2250406315::get_offset_of_U3CCodegenOptionsU3Ek__BackingField_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2861 = { sizeof (NotNullAttribute_t1114947401), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2862 = { sizeof (UnmarshalledAttribute_t1517743549), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2863 = { sizeof (FreeFunctionAttribute_t2020741617), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2864 = { sizeof (ThreadSafeAttribute_t3376653515), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2865 = { sizeof (StaticAccessorType_t186341701)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2865[4] = 
{
	StaticAccessorType_t186341701::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2866 = { sizeof (StaticAccessorAttribute_t2432663902), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2866[2] = 
{
	StaticAccessorAttribute_t2432663902::get_offset_of_U3CNameU3Ek__BackingField_0(),
	StaticAccessorAttribute_t2432663902::get_offset_of_U3CTypeU3Ek__BackingField_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2867 = { sizeof (UnityString_t1423233093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2868 = { sizeof (U3CModuleU3E_t692745533), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2869 = { sizeof (Application_t1852185770), -1, sizeof(Application_t1852185770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2869[5] = 
{
	Application_t1852185770_StaticFields::get_offset_of_lowMemory_0(),
	Application_t1852185770_StaticFields::get_offset_of_s_LogCallbackHandler_1(),
	Application_t1852185770_StaticFields::get_offset_of_s_LogCallbackHandlerThreaded_2(),
	Application_t1852185770_StaticFields::get_offset_of_wantsToQuit_3(),
	Application_t1852185770_StaticFields::get_offset_of_quitting_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2870 = { sizeof (LowMemoryCallback_t4104246196), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2871 = { sizeof (LogCallback_t3588208630), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2872 = { sizeof (AsyncOperation_t1445031843), sizeof(AsyncOperation_t1445031843_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2872[2] = 
{
	AsyncOperation_t1445031843::get_offset_of_m_Ptr_0(),
	AsyncOperation_t1445031843::get_offset_of_m_completeCallback_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2873 = { sizeof (Behaviour_t1437897464), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2874 = { sizeof (Camera_t4157153871), -1, sizeof(Camera_t4157153871_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2874[3] = 
{
	Camera_t4157153871_StaticFields::get_offset_of_onPreCull_2(),
	Camera_t4157153871_StaticFields::get_offset_of_onPreRender_3(),
	Camera_t4157153871_StaticFields::get_offset_of_onPostRender_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2875 = { sizeof (CameraCallback_t190067161), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2876 = { sizeof (UnhandledExceptionHandler_t1162846485), -1, sizeof(UnhandledExceptionHandler_t1162846485_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2876[1] = 
{
	UnhandledExceptionHandler_t1162846485_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2877 = { sizeof (CullingGroupEvent_t1722745023)+ sizeof (RuntimeObject), sizeof(CullingGroupEvent_t1722745023 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2877[3] = 
{
	CullingGroupEvent_t1722745023::get_offset_of_m_Index_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t1722745023::get_offset_of_m_PrevState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	CullingGroupEvent_t1722745023::get_offset_of_m_ThisState_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2878 = { sizeof (CullingGroup_t2096318768), sizeof(CullingGroup_t2096318768_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2878[2] = 
{
	CullingGroup_t2096318768::get_offset_of_m_Ptr_0(),
	CullingGroup_t2096318768::get_offset_of_m_OnStateChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2879 = { sizeof (StateChanged_t2136737110), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2880 = { sizeof (CursorLockMode_t2840764040)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2880[4] = 
{
	CursorLockMode_t2840764040::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2881 = { sizeof (Cursor_t1422555833), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2882 = { sizeof (Display_t1387065949), -1, sizeof(Display_t1387065949_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2882[4] = 
{
	Display_t1387065949::get_offset_of_nativeDisplay_0(),
	Display_t1387065949_StaticFields::get_offset_of_displays_1(),
	Display_t1387065949_StaticFields::get_offset_of__mainDisplay_2(),
	Display_t1387065949_StaticFields::get_offset_of_onDisplaysUpdated_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2883 = { sizeof (DisplaysUpdatedDelegate_t51287044), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2884 = { sizeof (GameObject_t1113636619), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2885 = { sizeof (Gradient_t3067099924), sizeof(Gradient_t3067099924_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2885[1] = 
{
	Gradient_t3067099924::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2886 = { sizeof (NoAllocHelpers_t1437076930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2887 = { sizeof (RectOffset_t1369453676), sizeof(RectOffset_t1369453676_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2887[2] = 
{
	RectOffset_t1369453676::get_offset_of_m_Ptr_0(),
	RectOffset_t1369453676::get_offset_of_m_SourceStyle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2888 = { sizeof (GUIElement_t3567083079), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2889 = { sizeof (GUILayer_t2783472903), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2890 = { sizeof (TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236)+ sizeof (RuntimeObject), sizeof(TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2890[6] = 
{
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_keyboardType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_autocorrection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_multiline_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_secure_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_alert_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	TouchScreenKeyboard_InternalConstructorHelperArguments_t1462448236::get_offset_of_characterLimit_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2891 = { sizeof (TouchScreenKeyboard_t731888065), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2891[1] = 
{
	TouchScreenKeyboard_t731888065::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2892 = { sizeof (Status_t785886969)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2892[5] = 
{
	Status_t785886969::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2893 = { sizeof (TouchPhase_t72348083)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2893[6] = 
{
	TouchPhase_t72348083::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2894 = { sizeof (IMECompositionMode_t2677948540)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2894[4] = 
{
	IMECompositionMode_t2677948540::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2895 = { sizeof (TouchType_t2034578258)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2895[4] = 
{
	TouchType_t2034578258::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2896 = { sizeof (Touch_t1921856868)+ sizeof (RuntimeObject), sizeof(Touch_t1921856868 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2896[14] = 
{
	Touch_t1921856868::get_offset_of_m_FingerId_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Position_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_RawPosition_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_PositionDelta_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_TimeDelta_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_TapCount_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Phase_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Type_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Pressure_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_maximumPossiblePressure_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_Radius_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_RadiusVariance_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_AltitudeAngle_12() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Touch_t1921856868::get_offset_of_m_AzimuthAngle_13() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2897 = { sizeof (Gyroscope_t3288342876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2898 = { sizeof (Input_t1431474628), -1, sizeof(Input_t1431474628_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2898[1] = 
{
	Input_t1431474628_StaticFields::get_offset_of_m_MainGyro_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2899 = { sizeof (LayerMask_t3493934918)+ sizeof (RuntimeObject), sizeof(LayerMask_t3493934918 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2899[1] = 
{
	LayerMask_t3493934918::get_offset_of_m_Mask_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
