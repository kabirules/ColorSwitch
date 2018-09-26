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
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct VirtFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtFuncInvoker6
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.TimeSpan/Parser
struct Parser_t2112344768;
// System.String
struct String_t;
// System.OverflowException
struct OverflowException_t2020128637;
// System.FormatException
struct FormatException_t154580423;
// System.TimeZone
struct TimeZone_t2038656743;
// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t3998352255;
// System.Globalization.DaylightTime
struct DaylightTime_t2582425773;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.TypeLoadException
struct TypeLoadException_t3707937253;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1073948154;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t3237081491;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.Binder
struct Binder_t2999457153;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.SerializableAttribute
struct SerializableAttribute_t1992588303;
// System.Runtime.InteropServices.ComImportAttribute
struct ComImportAttribute_t1295173782;
// System.TypeInitializationException
struct TypeInitializationException_t2973684290;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.SystemException
struct SystemException_t176217640;
// System.Exception
struct Exception_t;
// System.IFormatProvider
struct IFormatProvider_t2518567562;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.UnauthorizedAccessException
struct UnauthorizedAccessException_t490705335;
// System.UnhandledExceptionEventArgs
struct UnhandledExceptionEventArgs_t2886101344;
// System.EventArgs
struct EventArgs_t3591816995;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t3101989324;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.UnitySerializationHolder
struct UnitySerializationHolder_t431912834;
// System.DBNull
struct DBNull_t3725197148;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.Module
struct Module_t2987026101;
// System.ValueType
struct ValueType_t3640485471;
// System.Version
struct Version_t3456873960;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.WeakReference
struct WeakReference_t1334886716;
// System.WindowsConsoleDriver
struct WindowsConsoleDriver_t3991887195;
// System.InputRecord
struct InputRecord_t2660212290;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2405853701;
// System.Globalization.TextInfo
struct TextInfo_t3810425522;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.Calendar[]
struct CalendarU5BU5D_t3985046076;
// System.Globalization.Calendar
struct Calendar_t1661121569;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Int32
struct Int32_t2950945753;
// System.Void
struct Void_t1185182177;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2171992254;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_t1787725097;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_t2120639521;
// System.Security.Policy.Evidence
struct Evidence_t2008144148;
// System.Security.PermissionSet
struct PermissionSet_t223948603;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Reflection.TypeFilter
struct TypeFilter_t2356120900;
// System.Threading.ExecutionContext
struct ExecutionContext_t1748372627;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Security.Principal.IPrincipal
struct IPrincipal_t2343618843;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t3705301900;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t3223009221;
// System.Reflection.Emit.PropertyBuilder[]
struct PropertyBuilderU5BU5D_t4023329206;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t138311604;
// System.Reflection.Emit.EventBuilder[]
struct EventBuilderU5BU5D_t3902749141;
// System.Reflection.Emit.CustomAttributeBuilder[]
struct CustomAttributeBuilderU5BU5D_t2951373564;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t786280671;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t731887691;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t3780444109;
// System.Reflection.Emit.RefEmitPermissionSet[]
struct RefEmitPermissionSetU5BU5D_t567451178;

extern RuntimeClass* Char_t3634460470_il2cpp_TypeInfo_var;
extern const uint32_t Parser_ParseWhiteSpace_m4032762092_MetadataUsageId;
extern const RuntimeMethod* Parser_ParseInt_m1211400632_RuntimeMethod_var;
extern const uint32_t Parser_ParseInt_m1211400632_MetadataUsageId;
extern const uint32_t Parser_ParseTicks_m4001393185_MetadataUsageId;
extern RuntimeClass* OverflowException_t2020128637_il2cpp_TypeInfo_var;
extern RuntimeClass* FormatException_t154580423_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Parser_Execute_m1541457260_RuntimeMethod_var;
extern String_t* _stringLiteral3945920318;
extern String_t* _stringLiteral3464778576;
extern const uint32_t Parser_Execute_m1541457260_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeZone_t2038656743_il2cpp_TypeInfo_var;
extern const uint32_t TimeZone__cctor_m798292265_MetadataUsageId;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* CurrentSystemTimeZone_t3998352255_il2cpp_TypeInfo_var;
extern const uint32_t TimeZone_get_CurrentTimeZone_m2520313554_MetadataUsageId;
extern const uint32_t TimeZone_IsDaylightSavingTime_m2508743323_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeZone_IsDaylightSavingTime_m3100698649_RuntimeMethod_var;
extern String_t* _stringLiteral751483925;
extern const uint32_t TimeZone_IsDaylightSavingTime_m3100698649_MetadataUsageId;
extern const uint32_t TimeZone_ToLocalTime_m3563701919_MetadataUsageId;
extern const uint32_t TimeZone_ToUniversalTime_m2789507578_MetadataUsageId;
extern const uint32_t TimeZone_GetLocalTimeDiff_m1937927810_MetadataUsageId;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberFilter_t426314064_il2cpp_TypeInfo_var;
extern RuntimeClass* Missing_t508514592_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Type_FilterAttribute_impl_m2354619618_RuntimeMethod_var;
extern const RuntimeMethod* Type_FilterName_impl_m2651733559_RuntimeMethod_var;
extern const RuntimeMethod* Type_FilterNameIgnoreCase_impl_m626688405_RuntimeMethod_var;
extern const uint32_t Type__cctor_m2371893800_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* CultureInfo_t4157843068_il2cpp_TypeInfo_var;
extern const uint32_t Type_FilterName_impl_m2651733559_MetadataUsageId;
extern const uint32_t Type_FilterNameIgnoreCase_impl_m626688405_MetadataUsageId;
extern RuntimeClass* IConvertible_t2977365677_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
extern RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
extern const uint32_t Type_FilterAttribute_impl_m2354619618_MetadataUsageId;
extern const RuntimeType* Enum_t4135868527_0_0_0_var;
extern const uint32_t Type_get_IsEnum_m208091508_MetadataUsageId;
extern const RuntimeType* Delegate_t1188392813_0_0_0_var;
extern const uint32_t Type_get_IsSerializable_m1040556850_MetadataUsageId;
extern const uint32_t Type_Equals_m1673304139_MetadataUsageId;
extern const RuntimeMethod* Type_GetType_m1693760368_RuntimeMethod_var;
extern String_t* _stringLiteral472199111;
extern const uint32_t Type_GetType_m1693760368_MetadataUsageId;
extern RuntimeClass* TypeLoadException_t3707937253_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Type_GetType_m3605423543_RuntimeMethod_var;
extern String_t* _stringLiteral762456888;
extern String_t* _stringLiteral3452614521;
extern const uint32_t Type_GetType_m3605423543_MetadataUsageId;
extern RuntimeClass* MonoType_t_il2cpp_TypeInfo_var;
extern const uint32_t Type_GetTypeCode_m480753082_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t Type_GetTypeFromHandle_m1620074514_MetadataUsageId;
extern const RuntimeMethod* Type_GetTypeHandle_m1526957577_RuntimeMethod_var;
extern const uint32_t Type_GetTypeHandle_m1526957577_MetadataUsageId;
extern const uint32_t Type_IsSubclassOf_m527829736_MetadataUsageId;
extern RuntimeClass* TypeBuilder_t1073948154_il2cpp_TypeInfo_var;
extern const uint32_t Type_IsAssignableFrom_m3195021585_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Type_GetArrayRank_m276452511_RuntimeMethod_var;
extern const uint32_t Type_GetArrayRank_m276452511_MetadataUsageId;
extern const RuntimeMethod* Type_GetMember_m3585848834_RuntimeMethod_var;
extern String_t* _stringLiteral62725243;
extern const uint32_t Type_GetMember_m3585848834_MetadataUsageId;
extern const RuntimeMethod* Type_GetMethod_m2019726356_RuntimeMethod_var;
extern const uint32_t Type_GetMethod_m2019726356_MetadataUsageId;
extern const RuntimeMethod* Type_GetMethod_m1197120913_RuntimeMethod_var;
extern const uint32_t Type_GetMethod_m1197120913_MetadataUsageId;
extern const RuntimeMethod* Type_GetMethod_m1512604930_RuntimeMethod_var;
extern String_t* _stringLiteral2099964717;
extern const uint32_t Type_GetMethod_m1512604930_MetadataUsageId;
extern const RuntimeMethod* Type_GetProperty_m3414567179_RuntimeMethod_var;
extern const uint32_t Type_GetProperty_m3414567179_MetadataUsageId;
extern const RuntimeMethod* Type_GetProperty_m4206634422_RuntimeMethod_var;
extern const uint32_t Type_GetProperty_m4206634422_MetadataUsageId;
extern const RuntimeMethod* Type_GetProperty_m2732503739_RuntimeMethod_var;
extern const uint32_t Type_GetProperty_m2732503739_MetadataUsageId;
extern const RuntimeMethod* Type_GetProperty_m3294104835_RuntimeMethod_var;
extern const uint32_t Type_GetProperty_m3294104835_MetadataUsageId;
extern const RuntimeType* ValueType_t3640485471_0_0_0_var;
extern const uint32_t Type_IsValueTypeImpl_m3263052508_MetadataUsageId;
extern const RuntimeType* ContextBoundObject_t1394786030_0_0_0_var;
extern const uint32_t Type_IsContextfulImpl_m3693603908_MetadataUsageId;
extern const RuntimeType* MarshalByRefObject_t2760389100_0_0_0_var;
extern const uint32_t Type_IsMarshalByRefImpl_m914778231_MetadataUsageId;
extern const RuntimeMethod* Type_GetConstructor_m1195697116_RuntimeMethod_var;
extern const uint32_t Type_GetConstructor_m1195697116_MetadataUsageId;
extern RuntimeClass* ArrayList_t2718874744_il2cpp_TypeInfo_var;
extern RuntimeClass* ConstructorInfoU5BU5D_t881249896_il2cpp_TypeInfo_var;
extern RuntimeClass* EventInfoU5BU5D_t3237081491_il2cpp_TypeInfo_var;
extern RuntimeClass* FieldInfoU5BU5D_t846150980_il2cpp_TypeInfo_var;
extern RuntimeClass* MethodInfoU5BU5D_t2572182361_il2cpp_TypeInfo_var;
extern RuntimeClass* PropertyInfoU5BU5D_t1461822886_il2cpp_TypeInfo_var;
extern RuntimeClass* MemberInfoU5BU5D_t1302094432_il2cpp_TypeInfo_var;
extern const uint32_t Type_FindMembers_m337949280_MetadataUsageId;
extern const uint32_t Type_get_IsSystemType_m624798880_MetadataUsageId;
extern const RuntimeMethod* Type_GetGenericArguments_m3500465462_RuntimeMethod_var;
extern const uint32_t Type_GetGenericArguments_m3500465462_MetadataUsageId;
extern const RuntimeMethod* Type_GetGenericTypeDefinition_m639345035_RuntimeMethod_var;
extern String_t* _stringLiteral2898917524;
extern const uint32_t Type_GetGenericTypeDefinition_m639345035_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern RuntimeClass* EnumBuilder_t2400448213_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Type_MakeGenericType_m2479309691_RuntimeMethod_var;
extern String_t* _stringLiteral2824465119;
extern String_t* _stringLiteral2011460800;
extern String_t* _stringLiteral682666061;
extern const uint32_t Type_MakeGenericType_m2479309691_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* SerializableAttribute_t1992588303_il2cpp_TypeInfo_var;
extern RuntimeClass* ComImportAttribute_t1295173782_il2cpp_TypeInfo_var;
extern const uint32_t Type_GetPseudoCustomAttributes_m1069564574_MetadataUsageId;
extern const RuntimeType* Type_t_0_0_0_var;
extern const RuntimeType* TypeDelegator_t3617470028_0_0_0_var;
extern const uint32_t Type_get_IsUserType_m555861786_MetadataUsageId;
extern const RuntimeMethod* TypedReference_Equals_m2034077850_RuntimeMethod_var;
extern String_t* _stringLiteral2303281224;
extern const uint32_t TypedReference_Equals_m2034077850_MetadataUsageId;
extern const uint32_t TypedReference_GetHashCode_m2046447331_MetadataUsageId;
extern const uint32_t TypeInitializationException__ctor_m3546444694_MetadataUsageId;
extern const uint32_t TypeInitializationException_GetObjectData_m583196803_MetadataUsageId;
extern String_t* _stringLiteral1191444812;
extern const uint32_t TypeLoadException__ctor_m1802671078_MetadataUsageId;
extern const RuntimeMethod* TypeLoadException__ctor_m3040414142_RuntimeMethod_var;
extern String_t* _stringLiteral79347;
extern String_t* _stringLiteral1447332123;
extern String_t* _stringLiteral1596726042;
extern const uint32_t TypeLoadException__ctor_m3040414142_MetadataUsageId;
extern String_t* _stringLiteral3913841465;
extern String_t* _stringLiteral3968575618;
extern const uint32_t TypeLoadException_get_Message_m2440738252_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern const RuntimeType* Int32_t2950945753_0_0_0_var;
extern const RuntimeMethod* TypeLoadException_GetObjectData_m2127700107_RuntimeMethod_var;
extern String_t* _stringLiteral2099428946;
extern String_t* _stringLiteral2742360254;
extern const uint32_t TypeLoadException_GetObjectData_m2127700107_MetadataUsageId;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern const uint32_t UInt16_System_IConvertible_ToBoolean_m3911119012_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToByte_m3185614807_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToChar_m2096055221_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDateTime_m2594768090_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDecimal_m1320731319_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToDouble_m333121300_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt16_m2337134904_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt32_m1950778303_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToInt64_m3635199533_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSByte_m2219828332_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToSingle_m2654722405_MetadataUsageId;
extern RuntimeClass* UInt16_t2177724958_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UInt16_System_IConvertible_ToType_m1028622578_RuntimeMethod_var;
extern String_t* _stringLiteral3252615044;
extern const uint32_t UInt16_System_IConvertible_ToType_m1028622578_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139_MetadataUsageId;
extern const uint32_t UInt16_System_IConvertible_ToUInt64_m424720762_MetadataUsageId;
extern const RuntimeMethod* UInt16_CompareTo_m2664746316_RuntimeMethod_var;
extern String_t* _stringLiteral2608892266;
extern const uint32_t UInt16_CompareTo_m2664746316_MetadataUsageId;
extern const uint32_t UInt16_Equals_m642257745_MetadataUsageId;
extern const RuntimeMethod* UInt16_Parse_m3476925403_RuntimeMethod_var;
extern String_t* _stringLiteral2517860609;
extern const uint32_t UInt16_Parse_m3476925403_MetadataUsageId;
extern RuntimeClass* NumberFormatter_t1182924621_il2cpp_TypeInfo_var;
extern const uint32_t UInt16_ToString_m355311020_MetadataUsageId;
extern const uint32_t UInt16_ToString_m3020002356_MetadataUsageId;
extern const uint32_t UInt16_ToString_m760649087_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UInt32_System_IConvertible_ToType_m922356584_RuntimeMethod_var;
extern const uint32_t UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId;
extern const uint32_t UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId;
extern const RuntimeMethod* UInt32_CompareTo_m362578384_RuntimeMethod_var;
extern String_t* _stringLiteral3007017632;
extern const uint32_t UInt32_CompareTo_m362578384_MetadataUsageId;
extern const uint32_t UInt32_Equals_m351935437_MetadataUsageId;
extern String_t* _stringLiteral3452614605;
extern String_t* _stringLiteral724221676;
extern String_t* _stringLiteral2024505948;
extern const uint32_t UInt32_Parse_m197815874_MetadataUsageId;
extern const RuntimeType* NumberFormatInfo_t435877138_0_0_0_var;
extern RuntimeClass* IFormatProvider_t2518567562_il2cpp_TypeInfo_var;
extern RuntimeClass* NumberFormatInfo_t435877138_il2cpp_TypeInfo_var;
extern RuntimeClass* Thread_t2300836069_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UInt32_Parse_m2778221109_RuntimeMethod_var;
extern String_t* _stringLiteral1489265497;
extern const uint32_t UInt32_Parse_m2778221109_MetadataUsageId;
extern const RuntimeMethod* UInt32_Parse_m3270868885_RuntimeMethod_var;
extern const uint32_t UInt32_Parse_m3270868885_MetadataUsageId;
extern const RuntimeMethod* UInt32_Parse_m3755665066_RuntimeMethod_var;
extern const uint32_t UInt32_Parse_m3755665066_MetadataUsageId;
extern const uint32_t UInt32_ToString_m2574561716_MetadataUsageId;
extern const uint32_t UInt32_ToString_m4293943134_MetadataUsageId;
extern const uint32_t UInt32_ToString_m2420423038_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId;
extern RuntimeClass* UInt64_t4134040092_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UInt64_System_IConvertible_ToType_m4049257834_RuntimeMethod_var;
extern const uint32_t UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId;
extern const uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId;
extern const RuntimeMethod* UInt64_CompareTo_m3619843473_RuntimeMethod_var;
extern String_t* _stringLiteral3792639183;
extern const uint32_t UInt64_CompareTo_m3619843473_MetadataUsageId;
extern const uint32_t UInt64_Equals_m1879425698_MetadataUsageId;
extern const RuntimeMethod* UInt64_Parse_m2329819578_RuntimeMethod_var;
extern const uint32_t UInt64_Parse_m2329819578_MetadataUsageId;
extern const RuntimeMethod* UInt64_Parse_m1485858293_RuntimeMethod_var;
extern const uint32_t UInt64_Parse_m1485858293_MetadataUsageId;
extern const uint32_t UInt64_ToString_m1529093114_MetadataUsageId;
extern const uint32_t UInt64_ToString_m2623377370_MetadataUsageId;
extern const uint32_t UInt64_ToString_m1695188334_MetadataUsageId;
extern RuntimeClass* UIntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t UIntPtr__cctor_m3513964473_MetadataUsageId;
extern const RuntimeMethod* UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var;
extern String_t* _stringLiteral1363226343;
extern const uint32_t UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId;
extern const uint32_t UIntPtr_Equals_m1316671746_MetadataUsageId;
extern String_t* _stringLiteral563158065;
extern const uint32_t UnauthorizedAccessException__ctor_m246605039_MetadataUsageId;
extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId;
extern String_t* _stringLiteral2037252898;
extern String_t* _stringLiteral3283586028;
extern String_t* _stringLiteral209558951;
extern const uint32_t UnitySerializationHolder__ctor_m3869442095_MetadataUsageId;
extern const RuntimeType* UnitySerializationHolder_t431912834_0_0_0_var;
extern const uint32_t UnitySerializationHolder_GetTypeData_m2453779479_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetDBNullData_m714211970_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetAssemblyData_m2482115665_MetadataUsageId;
extern const uint32_t UnitySerializationHolder_GetModuleData_m1550266881_MetadataUsageId;
extern const RuntimeMethod* UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var;
extern const uint32_t UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId;
extern RuntimeClass* DBNull_t3725197148_il2cpp_TypeInfo_var;
extern const RuntimeMethod* UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var;
extern String_t* _stringLiteral553700296;
extern const uint32_t UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId;
extern RuntimeClass* CharU5BU5D_t3528271667_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Version__ctor_m1394137037_RuntimeMethod_var;
extern String_t* _stringLiteral1902401671;
extern String_t* _stringLiteral1532400954;
extern const uint32_t Version__ctor_m1394137037_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Version_CheckedSet_m654078179_RuntimeMethod_var;
extern String_t* _stringLiteral419133523;
extern String_t* _stringLiteral2762033855;
extern String_t* _stringLiteral437191301;
extern String_t* _stringLiteral3187820736;
extern const uint32_t Version_CheckedSet_m654078179_MetadataUsageId;
extern RuntimeClass* Version_t3456873960_il2cpp_TypeInfo_var;
extern const uint32_t Version_Clone_m1749041863_MetadataUsageId;
extern const RuntimeMethod* Version_CompareTo_m1662919407_RuntimeMethod_var;
extern String_t* _stringLiteral3512823065;
extern const uint32_t Version_CompareTo_m1662919407_MetadataUsageId;
extern const uint32_t Version_Equals_m3073813696_MetadataUsageId;
extern String_t* _stringLiteral3452614530;
extern const uint32_t Version_ToString_m2279867705_MetadataUsageId;
extern const uint32_t Version_CreateFromString_m719054818_MetadataUsageId;
extern const RuntimeType* RuntimeObject_0_0_0_var;
extern const RuntimeMethod* WeakReference__ctor_m1244067698_RuntimeMethod_var;
extern String_t* _stringLiteral3234942771;
extern String_t* _stringLiteral2922588279;
extern const uint32_t WeakReference__ctor_m1244067698_MetadataUsageId;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WeakReference_GetObjectData_m2192383095_RuntimeMethod_var;
extern const uint32_t WeakReference_GetObjectData_m2192383095_MetadataUsageId;
extern RuntimeClass* Marshal_t1757017490_il2cpp_TypeInfo_var;
extern const RuntimeMethod* WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var;
extern String_t* _stringLiteral1071424308;
extern const uint32_t WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId;
struct InputRecord_t2660212290_marshaled_pinvoke;
struct InputRecord_t2660212290;;
struct InputRecord_t2660212290_marshaled_pinvoke;;

struct TypeU5BU5D_t3940880105;
struct EventInfoU5BU5D_t3237081491;
struct MemberInfoU5BU5D_t1302094432;
struct ParameterModifierU5BU5D_t2943407543;
struct PropertyInfoU5BU5D_t1461822886;
struct MethodInfoU5BU5D_t2572182361;
struct ConstructorInfoU5BU5D_t881249896;
struct FieldInfoU5BU5D_t846150980;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct CharU5BU5D_t3528271667;


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
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
#ifndef BINDER_T2999457153_H
#define BINDER_T2999457153_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Binder
struct  Binder_t2999457153  : public RuntimeObject
{
public:

public:
};

struct Binder_t2999457153_StaticFields
{
public:
	// System.Reflection.Binder System.Reflection.Binder::default_binder
	Binder_t2999457153 * ___default_binder_0;

public:
	inline static int32_t get_offset_of_default_binder_0() { return static_cast<int32_t>(offsetof(Binder_t2999457153_StaticFields, ___default_binder_0)); }
	inline Binder_t2999457153 * get_default_binder_0() const { return ___default_binder_0; }
	inline Binder_t2999457153 ** get_address_of_default_binder_0() { return &___default_binder_0; }
	inline void set_default_binder_0(Binder_t2999457153 * value)
	{
		___default_binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___default_binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDER_T2999457153_H
#ifndef CULTUREINFO_T4157843068_H
#define CULTUREINFO_T4157843068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CultureInfo
struct  CultureInfo_t4157843068  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_7;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_8;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_9;
	// System.Int32 System.Globalization.CultureInfo::specific_lcid
	int32_t ___specific_lcid_10;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_11;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_12;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_13;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t435877138 * ___numInfo_14;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t2405853701 * ___dateTimeInfo_15;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_t3810425522 * ___textInfo_16;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_17;
	// System.String System.Globalization.CultureInfo::displayname
	String_t* ___displayname_18;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_19;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_20;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_21;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_22;
	// System.String System.Globalization.CultureInfo::icu_name
	String_t* ___icu_name_23;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_24;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_25;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1092934962 * ___compareInfo_26;
	// System.Int32* System.Globalization.CultureInfo::calendar_data
	int32_t* ___calendar_data_27;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_28;
	// System.Globalization.Calendar[] System.Globalization.CultureInfo::optional_calendars
	CalendarU5BU5D_t3985046076* ___optional_calendars_29;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t4157843068 * ___parent_culture_30;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_31;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t1661121569 * ___calendar_32;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_33;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_t4116647657* ___cached_serialized_form_34;

public:
	inline static int32_t get_offset_of_m_isReadOnly_7() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_isReadOnly_7)); }
	inline bool get_m_isReadOnly_7() const { return ___m_isReadOnly_7; }
	inline bool* get_address_of_m_isReadOnly_7() { return &___m_isReadOnly_7; }
	inline void set_m_isReadOnly_7(bool value)
	{
		___m_isReadOnly_7 = value;
	}

	inline static int32_t get_offset_of_cultureID_8() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cultureID_8)); }
	inline int32_t get_cultureID_8() const { return ___cultureID_8; }
	inline int32_t* get_address_of_cultureID_8() { return &___cultureID_8; }
	inline void set_cultureID_8(int32_t value)
	{
		___cultureID_8 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_9() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_lcid_9)); }
	inline int32_t get_parent_lcid_9() const { return ___parent_lcid_9; }
	inline int32_t* get_address_of_parent_lcid_9() { return &___parent_lcid_9; }
	inline void set_parent_lcid_9(int32_t value)
	{
		___parent_lcid_9 = value;
	}

	inline static int32_t get_offset_of_specific_lcid_10() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___specific_lcid_10)); }
	inline int32_t get_specific_lcid_10() const { return ___specific_lcid_10; }
	inline int32_t* get_address_of_specific_lcid_10() { return &___specific_lcid_10; }
	inline void set_specific_lcid_10(int32_t value)
	{
		___specific_lcid_10 = value;
	}

	inline static int32_t get_offset_of_datetime_index_11() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___datetime_index_11)); }
	inline int32_t get_datetime_index_11() const { return ___datetime_index_11; }
	inline int32_t* get_address_of_datetime_index_11() { return &___datetime_index_11; }
	inline void set_datetime_index_11(int32_t value)
	{
		___datetime_index_11 = value;
	}

	inline static int32_t get_offset_of_number_index_12() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___number_index_12)); }
	inline int32_t get_number_index_12() const { return ___number_index_12; }
	inline int32_t* get_address_of_number_index_12() { return &___number_index_12; }
	inline void set_number_index_12(int32_t value)
	{
		___number_index_12 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_13() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_useUserOverride_13)); }
	inline bool get_m_useUserOverride_13() const { return ___m_useUserOverride_13; }
	inline bool* get_address_of_m_useUserOverride_13() { return &___m_useUserOverride_13; }
	inline void set_m_useUserOverride_13(bool value)
	{
		___m_useUserOverride_13 = value;
	}

	inline static int32_t get_offset_of_numInfo_14() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___numInfo_14)); }
	inline NumberFormatInfo_t435877138 * get_numInfo_14() const { return ___numInfo_14; }
	inline NumberFormatInfo_t435877138 ** get_address_of_numInfo_14() { return &___numInfo_14; }
	inline void set_numInfo_14(NumberFormatInfo_t435877138 * value)
	{
		___numInfo_14 = value;
		Il2CppCodeGenWriteBarrier((&___numInfo_14), value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_15() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___dateTimeInfo_15)); }
	inline DateTimeFormatInfo_t2405853701 * get_dateTimeInfo_15() const { return ___dateTimeInfo_15; }
	inline DateTimeFormatInfo_t2405853701 ** get_address_of_dateTimeInfo_15() { return &___dateTimeInfo_15; }
	inline void set_dateTimeInfo_15(DateTimeFormatInfo_t2405853701 * value)
	{
		___dateTimeInfo_15 = value;
		Il2CppCodeGenWriteBarrier((&___dateTimeInfo_15), value);
	}

	inline static int32_t get_offset_of_textInfo_16() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textInfo_16)); }
	inline TextInfo_t3810425522 * get_textInfo_16() const { return ___textInfo_16; }
	inline TextInfo_t3810425522 ** get_address_of_textInfo_16() { return &___textInfo_16; }
	inline void set_textInfo_16(TextInfo_t3810425522 * value)
	{
		___textInfo_16 = value;
		Il2CppCodeGenWriteBarrier((&___textInfo_16), value);
	}

	inline static int32_t get_offset_of_m_name_17() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_name_17)); }
	inline String_t* get_m_name_17() const { return ___m_name_17; }
	inline String_t** get_address_of_m_name_17() { return &___m_name_17; }
	inline void set_m_name_17(String_t* value)
	{
		___m_name_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_name_17), value);
	}

	inline static int32_t get_offset_of_displayname_18() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___displayname_18)); }
	inline String_t* get_displayname_18() const { return ___displayname_18; }
	inline String_t** get_address_of_displayname_18() { return &___displayname_18; }
	inline void set_displayname_18(String_t* value)
	{
		___displayname_18 = value;
		Il2CppCodeGenWriteBarrier((&___displayname_18), value);
	}

	inline static int32_t get_offset_of_englishname_19() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___englishname_19)); }
	inline String_t* get_englishname_19() const { return ___englishname_19; }
	inline String_t** get_address_of_englishname_19() { return &___englishname_19; }
	inline void set_englishname_19(String_t* value)
	{
		___englishname_19 = value;
		Il2CppCodeGenWriteBarrier((&___englishname_19), value);
	}

	inline static int32_t get_offset_of_nativename_20() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___nativename_20)); }
	inline String_t* get_nativename_20() const { return ___nativename_20; }
	inline String_t** get_address_of_nativename_20() { return &___nativename_20; }
	inline void set_nativename_20(String_t* value)
	{
		___nativename_20 = value;
		Il2CppCodeGenWriteBarrier((&___nativename_20), value);
	}

	inline static int32_t get_offset_of_iso3lang_21() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso3lang_21)); }
	inline String_t* get_iso3lang_21() const { return ___iso3lang_21; }
	inline String_t** get_address_of_iso3lang_21() { return &___iso3lang_21; }
	inline void set_iso3lang_21(String_t* value)
	{
		___iso3lang_21 = value;
		Il2CppCodeGenWriteBarrier((&___iso3lang_21), value);
	}

	inline static int32_t get_offset_of_iso2lang_22() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___iso2lang_22)); }
	inline String_t* get_iso2lang_22() const { return ___iso2lang_22; }
	inline String_t** get_address_of_iso2lang_22() { return &___iso2lang_22; }
	inline void set_iso2lang_22(String_t* value)
	{
		___iso2lang_22 = value;
		Il2CppCodeGenWriteBarrier((&___iso2lang_22), value);
	}

	inline static int32_t get_offset_of_icu_name_23() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___icu_name_23)); }
	inline String_t* get_icu_name_23() const { return ___icu_name_23; }
	inline String_t** get_address_of_icu_name_23() { return &___icu_name_23; }
	inline void set_icu_name_23(String_t* value)
	{
		___icu_name_23 = value;
		Il2CppCodeGenWriteBarrier((&___icu_name_23), value);
	}

	inline static int32_t get_offset_of_win3lang_24() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___win3lang_24)); }
	inline String_t* get_win3lang_24() const { return ___win3lang_24; }
	inline String_t** get_address_of_win3lang_24() { return &___win3lang_24; }
	inline void set_win3lang_24(String_t* value)
	{
		___win3lang_24 = value;
		Il2CppCodeGenWriteBarrier((&___win3lang_24), value);
	}

	inline static int32_t get_offset_of_territory_25() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___territory_25)); }
	inline String_t* get_territory_25() const { return ___territory_25; }
	inline String_t** get_address_of_territory_25() { return &___territory_25; }
	inline void set_territory_25(String_t* value)
	{
		___territory_25 = value;
		Il2CppCodeGenWriteBarrier((&___territory_25), value);
	}

	inline static int32_t get_offset_of_compareInfo_26() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___compareInfo_26)); }
	inline CompareInfo_t1092934962 * get_compareInfo_26() const { return ___compareInfo_26; }
	inline CompareInfo_t1092934962 ** get_address_of_compareInfo_26() { return &___compareInfo_26; }
	inline void set_compareInfo_26(CompareInfo_t1092934962 * value)
	{
		___compareInfo_26 = value;
		Il2CppCodeGenWriteBarrier((&___compareInfo_26), value);
	}

	inline static int32_t get_offset_of_calendar_data_27() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_data_27)); }
	inline int32_t* get_calendar_data_27() const { return ___calendar_data_27; }
	inline int32_t** get_address_of_calendar_data_27() { return &___calendar_data_27; }
	inline void set_calendar_data_27(int32_t* value)
	{
		___calendar_data_27 = value;
	}

	inline static int32_t get_offset_of_textinfo_data_28() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___textinfo_data_28)); }
	inline void* get_textinfo_data_28() const { return ___textinfo_data_28; }
	inline void** get_address_of_textinfo_data_28() { return &___textinfo_data_28; }
	inline void set_textinfo_data_28(void* value)
	{
		___textinfo_data_28 = value;
	}

	inline static int32_t get_offset_of_optional_calendars_29() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___optional_calendars_29)); }
	inline CalendarU5BU5D_t3985046076* get_optional_calendars_29() const { return ___optional_calendars_29; }
	inline CalendarU5BU5D_t3985046076** get_address_of_optional_calendars_29() { return &___optional_calendars_29; }
	inline void set_optional_calendars_29(CalendarU5BU5D_t3985046076* value)
	{
		___optional_calendars_29 = value;
		Il2CppCodeGenWriteBarrier((&___optional_calendars_29), value);
	}

	inline static int32_t get_offset_of_parent_culture_30() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___parent_culture_30)); }
	inline CultureInfo_t4157843068 * get_parent_culture_30() const { return ___parent_culture_30; }
	inline CultureInfo_t4157843068 ** get_address_of_parent_culture_30() { return &___parent_culture_30; }
	inline void set_parent_culture_30(CultureInfo_t4157843068 * value)
	{
		___parent_culture_30 = value;
		Il2CppCodeGenWriteBarrier((&___parent_culture_30), value);
	}

	inline static int32_t get_offset_of_m_dataItem_31() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___m_dataItem_31)); }
	inline int32_t get_m_dataItem_31() const { return ___m_dataItem_31; }
	inline int32_t* get_address_of_m_dataItem_31() { return &___m_dataItem_31; }
	inline void set_m_dataItem_31(int32_t value)
	{
		___m_dataItem_31 = value;
	}

	inline static int32_t get_offset_of_calendar_32() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___calendar_32)); }
	inline Calendar_t1661121569 * get_calendar_32() const { return ___calendar_32; }
	inline Calendar_t1661121569 ** get_address_of_calendar_32() { return &___calendar_32; }
	inline void set_calendar_32(Calendar_t1661121569 * value)
	{
		___calendar_32 = value;
		Il2CppCodeGenWriteBarrier((&___calendar_32), value);
	}

	inline static int32_t get_offset_of_constructed_33() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___constructed_33)); }
	inline bool get_constructed_33() const { return ___constructed_33; }
	inline bool* get_address_of_constructed_33() { return &___constructed_33; }
	inline void set_constructed_33(bool value)
	{
		___constructed_33 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_34() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068, ___cached_serialized_form_34)); }
	inline ByteU5BU5D_t4116647657* get_cached_serialized_form_34() const { return ___cached_serialized_form_34; }
	inline ByteU5BU5D_t4116647657** get_address_of_cached_serialized_form_34() { return &___cached_serialized_form_34; }
	inline void set_cached_serialized_form_34(ByteU5BU5D_t4116647657* value)
	{
		___cached_serialized_form_34 = value;
		Il2CppCodeGenWriteBarrier((&___cached_serialized_form_34), value);
	}
};

struct CultureInfo_t4157843068_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t4157843068 * ___invariant_culture_info_4;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_5;
	// System.Int32 System.Globalization.CultureInfo::BootstrapCultureID
	int32_t ___BootstrapCultureID_6;
	// System.String System.Globalization.CultureInfo::MSG_READONLY
	String_t* ___MSG_READONLY_35;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_number
	Hashtable_t1853889766 * ___shared_by_number_36;
	// System.Collections.Hashtable System.Globalization.CultureInfo::shared_by_name
	Hashtable_t1853889766 * ___shared_by_name_37;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map19
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map19_38;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1A
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1A_39;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1B
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1B_40;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Globalization.CultureInfo::<>f__switch$map1C
	Dictionary_2_t2736202052 * ___U3CU3Ef__switchU24map1C_41;

public:
	inline static int32_t get_offset_of_invariant_culture_info_4() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___invariant_culture_info_4)); }
	inline CultureInfo_t4157843068 * get_invariant_culture_info_4() const { return ___invariant_culture_info_4; }
	inline CultureInfo_t4157843068 ** get_address_of_invariant_culture_info_4() { return &___invariant_culture_info_4; }
	inline void set_invariant_culture_info_4(CultureInfo_t4157843068 * value)
	{
		___invariant_culture_info_4 = value;
		Il2CppCodeGenWriteBarrier((&___invariant_culture_info_4), value);
	}

	inline static int32_t get_offset_of_shared_table_lock_5() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_table_lock_5)); }
	inline RuntimeObject * get_shared_table_lock_5() const { return ___shared_table_lock_5; }
	inline RuntimeObject ** get_address_of_shared_table_lock_5() { return &___shared_table_lock_5; }
	inline void set_shared_table_lock_5(RuntimeObject * value)
	{
		___shared_table_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___shared_table_lock_5), value);
	}

	inline static int32_t get_offset_of_BootstrapCultureID_6() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___BootstrapCultureID_6)); }
	inline int32_t get_BootstrapCultureID_6() const { return ___BootstrapCultureID_6; }
	inline int32_t* get_address_of_BootstrapCultureID_6() { return &___BootstrapCultureID_6; }
	inline void set_BootstrapCultureID_6(int32_t value)
	{
		___BootstrapCultureID_6 = value;
	}

	inline static int32_t get_offset_of_MSG_READONLY_35() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___MSG_READONLY_35)); }
	inline String_t* get_MSG_READONLY_35() const { return ___MSG_READONLY_35; }
	inline String_t** get_address_of_MSG_READONLY_35() { return &___MSG_READONLY_35; }
	inline void set_MSG_READONLY_35(String_t* value)
	{
		___MSG_READONLY_35 = value;
		Il2CppCodeGenWriteBarrier((&___MSG_READONLY_35), value);
	}

	inline static int32_t get_offset_of_shared_by_number_36() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_number_36)); }
	inline Hashtable_t1853889766 * get_shared_by_number_36() const { return ___shared_by_number_36; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_number_36() { return &___shared_by_number_36; }
	inline void set_shared_by_number_36(Hashtable_t1853889766 * value)
	{
		___shared_by_number_36 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_number_36), value);
	}

	inline static int32_t get_offset_of_shared_by_name_37() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___shared_by_name_37)); }
	inline Hashtable_t1853889766 * get_shared_by_name_37() const { return ___shared_by_name_37; }
	inline Hashtable_t1853889766 ** get_address_of_shared_by_name_37() { return &___shared_by_name_37; }
	inline void set_shared_by_name_37(Hashtable_t1853889766 * value)
	{
		___shared_by_name_37 = value;
		Il2CppCodeGenWriteBarrier((&___shared_by_name_37), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map19_38() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map19_38)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map19_38() const { return ___U3CU3Ef__switchU24map19_38; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map19_38() { return &___U3CU3Ef__switchU24map19_38; }
	inline void set_U3CU3Ef__switchU24map19_38(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map19_38 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map19_38), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1A_39() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1A_39)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1A_39() const { return ___U3CU3Ef__switchU24map1A_39; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1A_39() { return &___U3CU3Ef__switchU24map1A_39; }
	inline void set_U3CU3Ef__switchU24map1A_39(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1A_39 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1A_39), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1B_40() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1B_40)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1B_40() const { return ___U3CU3Ef__switchU24map1B_40; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1B_40() { return &___U3CU3Ef__switchU24map1B_40; }
	inline void set_U3CU3Ef__switchU24map1B_40(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1B_40 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1B_40), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1C_41() { return static_cast<int32_t>(offsetof(CultureInfo_t4157843068_StaticFields, ___U3CU3Ef__switchU24map1C_41)); }
	inline Dictionary_2_t2736202052 * get_U3CU3Ef__switchU24map1C_41() const { return ___U3CU3Ef__switchU24map1C_41; }
	inline Dictionary_2_t2736202052 ** get_address_of_U3CU3Ef__switchU24map1C_41() { return &___U3CU3Ef__switchU24map1C_41; }
	inline void set_U3CU3Ef__switchU24map1C_41(Dictionary_2_t2736202052 * value)
	{
		___U3CU3Ef__switchU24map1C_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map1C_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFO_T4157843068_H
#ifndef MISSING_T508514592_H
#define MISSING_T508514592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Missing
struct  Missing_t508514592  : public RuntimeObject
{
public:

public:
};

struct Missing_t508514592_StaticFields
{
public:
	// System.Reflection.Missing System.Reflection.Missing::Value
	Missing_t508514592 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Missing_t508514592_StaticFields, ___Value_0)); }
	inline Missing_t508514592 * get_Value_0() const { return ___Value_0; }
	inline Missing_t508514592 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(Missing_t508514592 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSING_T508514592_H
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
#ifndef NUMBERFORMATINFO_T435877138_H
#define NUMBERFORMATINFO_T435877138_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t435877138  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_0;
	// System.String System.Globalization.NumberFormatInfo::decimalFormats
	String_t* ___decimalFormats_1;
	// System.String System.Globalization.NumberFormatInfo::currencyFormats
	String_t* ___currencyFormats_2;
	// System.String System.Globalization.NumberFormatInfo::percentFormats
	String_t* ___percentFormats_3;
	// System.String System.Globalization.NumberFormatInfo::digitPattern
	String_t* ___digitPattern_4;
	// System.String System.Globalization.NumberFormatInfo::zeroPattern
	String_t* ___zeroPattern_5;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_6;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t385246372* ___currencyGroupSizes_9;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_10;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_11;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_12;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_15;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_16;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_17;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_18;
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t385246372* ___numberGroupSizes_19;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_20;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_21;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_22;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_23;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t385246372* ___percentGroupSizes_24;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_27;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_28;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_29;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_30;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_31;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_32;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_34;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_35;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_t1281789340* ___nativeDigits_36;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_37;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_decimalFormats_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___decimalFormats_1)); }
	inline String_t* get_decimalFormats_1() const { return ___decimalFormats_1; }
	inline String_t** get_address_of_decimalFormats_1() { return &___decimalFormats_1; }
	inline void set_decimalFormats_1(String_t* value)
	{
		___decimalFormats_1 = value;
		Il2CppCodeGenWriteBarrier((&___decimalFormats_1), value);
	}

	inline static int32_t get_offset_of_currencyFormats_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyFormats_2)); }
	inline String_t* get_currencyFormats_2() const { return ___currencyFormats_2; }
	inline String_t** get_address_of_currencyFormats_2() { return &___currencyFormats_2; }
	inline void set_currencyFormats_2(String_t* value)
	{
		___currencyFormats_2 = value;
		Il2CppCodeGenWriteBarrier((&___currencyFormats_2), value);
	}

	inline static int32_t get_offset_of_percentFormats_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentFormats_3)); }
	inline String_t* get_percentFormats_3() const { return ___percentFormats_3; }
	inline String_t** get_address_of_percentFormats_3() { return &___percentFormats_3; }
	inline void set_percentFormats_3(String_t* value)
	{
		___percentFormats_3 = value;
		Il2CppCodeGenWriteBarrier((&___percentFormats_3), value);
	}

	inline static int32_t get_offset_of_digitPattern_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitPattern_4)); }
	inline String_t* get_digitPattern_4() const { return ___digitPattern_4; }
	inline String_t** get_address_of_digitPattern_4() { return &___digitPattern_4; }
	inline void set_digitPattern_4(String_t* value)
	{
		___digitPattern_4 = value;
		Il2CppCodeGenWriteBarrier((&___digitPattern_4), value);
	}

	inline static int32_t get_offset_of_zeroPattern_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___zeroPattern_5)); }
	inline String_t* get_zeroPattern_5() const { return ___zeroPattern_5; }
	inline String_t** get_address_of_zeroPattern_5() { return &___zeroPattern_5; }
	inline void set_zeroPattern_5(String_t* value)
	{
		___zeroPattern_5 = value;
		Il2CppCodeGenWriteBarrier((&___zeroPattern_5), value);
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalDigits_6)); }
	inline int32_t get_currencyDecimalDigits_6() const { return ___currencyDecimalDigits_6; }
	inline int32_t* get_address_of_currencyDecimalDigits_6() { return &___currencyDecimalDigits_6; }
	inline void set_currencyDecimalDigits_6(int32_t value)
	{
		___currencyDecimalDigits_6 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyDecimalSeparator_7)); }
	inline String_t* get_currencyDecimalSeparator_7() const { return ___currencyDecimalSeparator_7; }
	inline String_t** get_address_of_currencyDecimalSeparator_7() { return &___currencyDecimalSeparator_7; }
	inline void set_currencyDecimalSeparator_7(String_t* value)
	{
		___currencyDecimalSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((&___currencyDecimalSeparator_7), value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSeparator_8), value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyGroupSizes_9)); }
	inline Int32U5BU5D_t385246372* get_currencyGroupSizes_9() const { return ___currencyGroupSizes_9; }
	inline Int32U5BU5D_t385246372** get_address_of_currencyGroupSizes_9() { return &___currencyGroupSizes_9; }
	inline void set_currencyGroupSizes_9(Int32U5BU5D_t385246372* value)
	{
		___currencyGroupSizes_9 = value;
		Il2CppCodeGenWriteBarrier((&___currencyGroupSizes_9), value);
	}

	inline static int32_t get_offset_of_currencyNegativePattern_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyNegativePattern_10)); }
	inline int32_t get_currencyNegativePattern_10() const { return ___currencyNegativePattern_10; }
	inline int32_t* get_address_of_currencyNegativePattern_10() { return &___currencyNegativePattern_10; }
	inline void set_currencyNegativePattern_10(int32_t value)
	{
		___currencyNegativePattern_10 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencyPositivePattern_11)); }
	inline int32_t get_currencyPositivePattern_11() const { return ___currencyPositivePattern_11; }
	inline int32_t* get_address_of_currencyPositivePattern_11() { return &___currencyPositivePattern_11; }
	inline void set_currencyPositivePattern_11(int32_t value)
	{
		___currencyPositivePattern_11 = value;
	}

	inline static int32_t get_offset_of_currencySymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___currencySymbol_12)); }
	inline String_t* get_currencySymbol_12() const { return ___currencySymbol_12; }
	inline String_t** get_address_of_currencySymbol_12() { return &___currencySymbol_12; }
	inline void set_currencySymbol_12(String_t* value)
	{
		___currencySymbol_12 = value;
		Il2CppCodeGenWriteBarrier((&___currencySymbol_12), value);
	}

	inline static int32_t get_offset_of_nanSymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nanSymbol_13)); }
	inline String_t* get_nanSymbol_13() const { return ___nanSymbol_13; }
	inline String_t** get_address_of_nanSymbol_13() { return &___nanSymbol_13; }
	inline void set_nanSymbol_13(String_t* value)
	{
		___nanSymbol_13 = value;
		Il2CppCodeGenWriteBarrier((&___nanSymbol_13), value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((&___negativeInfinitySymbol_14), value);
	}

	inline static int32_t get_offset_of_negativeSign_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___negativeSign_15)); }
	inline String_t* get_negativeSign_15() const { return ___negativeSign_15; }
	inline String_t** get_address_of_negativeSign_15() { return &___negativeSign_15; }
	inline void set_negativeSign_15(String_t* value)
	{
		___negativeSign_15 = value;
		Il2CppCodeGenWriteBarrier((&___negativeSign_15), value);
	}

	inline static int32_t get_offset_of_numberDecimalDigits_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalDigits_16)); }
	inline int32_t get_numberDecimalDigits_16() const { return ___numberDecimalDigits_16; }
	inline int32_t* get_address_of_numberDecimalDigits_16() { return &___numberDecimalDigits_16; }
	inline void set_numberDecimalDigits_16(int32_t value)
	{
		___numberDecimalDigits_16 = value;
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberDecimalSeparator_17)); }
	inline String_t* get_numberDecimalSeparator_17() const { return ___numberDecimalSeparator_17; }
	inline String_t** get_address_of_numberDecimalSeparator_17() { return &___numberDecimalSeparator_17; }
	inline void set_numberDecimalSeparator_17(String_t* value)
	{
		___numberDecimalSeparator_17 = value;
		Il2CppCodeGenWriteBarrier((&___numberDecimalSeparator_17), value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSeparator_18)); }
	inline String_t* get_numberGroupSeparator_18() const { return ___numberGroupSeparator_18; }
	inline String_t** get_address_of_numberGroupSeparator_18() { return &___numberGroupSeparator_18; }
	inline void set_numberGroupSeparator_18(String_t* value)
	{
		___numberGroupSeparator_18 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSeparator_18), value);
	}

	inline static int32_t get_offset_of_numberGroupSizes_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberGroupSizes_19)); }
	inline Int32U5BU5D_t385246372* get_numberGroupSizes_19() const { return ___numberGroupSizes_19; }
	inline Int32U5BU5D_t385246372** get_address_of_numberGroupSizes_19() { return &___numberGroupSizes_19; }
	inline void set_numberGroupSizes_19(Int32U5BU5D_t385246372* value)
	{
		___numberGroupSizes_19 = value;
		Il2CppCodeGenWriteBarrier((&___numberGroupSizes_19), value);
	}

	inline static int32_t get_offset_of_numberNegativePattern_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___numberNegativePattern_20)); }
	inline int32_t get_numberNegativePattern_20() const { return ___numberNegativePattern_20; }
	inline int32_t* get_address_of_numberNegativePattern_20() { return &___numberNegativePattern_20; }
	inline void set_numberNegativePattern_20(int32_t value)
	{
		___numberNegativePattern_20 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalDigits_21)); }
	inline int32_t get_percentDecimalDigits_21() const { return ___percentDecimalDigits_21; }
	inline int32_t* get_address_of_percentDecimalDigits_21() { return &___percentDecimalDigits_21; }
	inline void set_percentDecimalDigits_21(int32_t value)
	{
		___percentDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentDecimalSeparator_22)); }
	inline String_t* get_percentDecimalSeparator_22() const { return ___percentDecimalSeparator_22; }
	inline String_t** get_address_of_percentDecimalSeparator_22() { return &___percentDecimalSeparator_22; }
	inline void set_percentDecimalSeparator_22(String_t* value)
	{
		___percentDecimalSeparator_22 = value;
		Il2CppCodeGenWriteBarrier((&___percentDecimalSeparator_22), value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSeparator_23)); }
	inline String_t* get_percentGroupSeparator_23() const { return ___percentGroupSeparator_23; }
	inline String_t** get_address_of_percentGroupSeparator_23() { return &___percentGroupSeparator_23; }
	inline void set_percentGroupSeparator_23(String_t* value)
	{
		___percentGroupSeparator_23 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSeparator_23), value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentGroupSizes_24)); }
	inline Int32U5BU5D_t385246372* get_percentGroupSizes_24() const { return ___percentGroupSizes_24; }
	inline Int32U5BU5D_t385246372** get_address_of_percentGroupSizes_24() { return &___percentGroupSizes_24; }
	inline void set_percentGroupSizes_24(Int32U5BU5D_t385246372* value)
	{
		___percentGroupSizes_24 = value;
		Il2CppCodeGenWriteBarrier((&___percentGroupSizes_24), value);
	}

	inline static int32_t get_offset_of_percentNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentNegativePattern_25)); }
	inline int32_t get_percentNegativePattern_25() const { return ___percentNegativePattern_25; }
	inline int32_t* get_address_of_percentNegativePattern_25() { return &___percentNegativePattern_25; }
	inline void set_percentNegativePattern_25(int32_t value)
	{
		___percentNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentSymbol_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___percentSymbol_27)); }
	inline String_t* get_percentSymbol_27() const { return ___percentSymbol_27; }
	inline String_t** get_address_of_percentSymbol_27() { return &___percentSymbol_27; }
	inline void set_percentSymbol_27(String_t* value)
	{
		___percentSymbol_27 = value;
		Il2CppCodeGenWriteBarrier((&___percentSymbol_27), value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___perMilleSymbol_28)); }
	inline String_t* get_perMilleSymbol_28() const { return ___perMilleSymbol_28; }
	inline String_t** get_address_of_perMilleSymbol_28() { return &___perMilleSymbol_28; }
	inline void set_perMilleSymbol_28(String_t* value)
	{
		___perMilleSymbol_28 = value;
		Il2CppCodeGenWriteBarrier((&___perMilleSymbol_28), value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveInfinitySymbol_29)); }
	inline String_t* get_positiveInfinitySymbol_29() const { return ___positiveInfinitySymbol_29; }
	inline String_t** get_address_of_positiveInfinitySymbol_29() { return &___positiveInfinitySymbol_29; }
	inline void set_positiveInfinitySymbol_29(String_t* value)
	{
		___positiveInfinitySymbol_29 = value;
		Il2CppCodeGenWriteBarrier((&___positiveInfinitySymbol_29), value);
	}

	inline static int32_t get_offset_of_positiveSign_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___positiveSign_30)); }
	inline String_t* get_positiveSign_30() const { return ___positiveSign_30; }
	inline String_t** get_address_of_positiveSign_30() { return &___positiveSign_30; }
	inline void set_positiveSign_30(String_t* value)
	{
		___positiveSign_30 = value;
		Il2CppCodeGenWriteBarrier((&___positiveSign_30), value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___ansiCurrencySymbol_31)); }
	inline String_t* get_ansiCurrencySymbol_31() const { return ___ansiCurrencySymbol_31; }
	inline String_t** get_address_of_ansiCurrencySymbol_31() { return &___ansiCurrencySymbol_31; }
	inline void set_ansiCurrencySymbol_31(String_t* value)
	{
		___ansiCurrencySymbol_31 = value;
		Il2CppCodeGenWriteBarrier((&___ansiCurrencySymbol_31), value);
	}

	inline static int32_t get_offset_of_m_dataItem_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_dataItem_32)); }
	inline int32_t get_m_dataItem_32() const { return ___m_dataItem_32; }
	inline int32_t* get_address_of_m_dataItem_32() { return &___m_dataItem_32; }
	inline void set_m_dataItem_32(int32_t value)
	{
		___m_dataItem_32 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___m_useUserOverride_33)); }
	inline bool get_m_useUserOverride_33() const { return ___m_useUserOverride_33; }
	inline bool* get_address_of_m_useUserOverride_33() { return &___m_useUserOverride_33; }
	inline void set_m_useUserOverride_33(bool value)
	{
		___m_useUserOverride_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsNumber_34)); }
	inline bool get_validForParseAsNumber_34() const { return ___validForParseAsNumber_34; }
	inline bool* get_address_of_validForParseAsNumber_34() { return &___validForParseAsNumber_34; }
	inline void set_validForParseAsNumber_34(bool value)
	{
		___validForParseAsNumber_34 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_35() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___validForParseAsCurrency_35)); }
	inline bool get_validForParseAsCurrency_35() const { return ___validForParseAsCurrency_35; }
	inline bool* get_address_of_validForParseAsCurrency_35() { return &___validForParseAsCurrency_35; }
	inline void set_validForParseAsCurrency_35(bool value)
	{
		___validForParseAsCurrency_35 = value;
	}

	inline static int32_t get_offset_of_nativeDigits_36() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___nativeDigits_36)); }
	inline StringU5BU5D_t1281789340* get_nativeDigits_36() const { return ___nativeDigits_36; }
	inline StringU5BU5D_t1281789340** get_address_of_nativeDigits_36() { return &___nativeDigits_36; }
	inline void set_nativeDigits_36(StringU5BU5D_t1281789340* value)
	{
		___nativeDigits_36 = value;
		Il2CppCodeGenWriteBarrier((&___nativeDigits_36), value);
	}

	inline static int32_t get_offset_of_digitSubstitution_37() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138, ___digitSubstitution_37)); }
	inline int32_t get_digitSubstitution_37() const { return ___digitSubstitution_37; }
	inline int32_t* get_address_of_digitSubstitution_37() { return &___digitSubstitution_37; }
	inline void set_digitSubstitution_37(int32_t value)
	{
		___digitSubstitution_37 = value;
	}
};

struct NumberFormatInfo_t435877138_StaticFields
{
public:
	// System.String[] System.Globalization.NumberFormatInfo::invariantNativeDigits
	StringU5BU5D_t1281789340* ___invariantNativeDigits_38;

public:
	inline static int32_t get_offset_of_invariantNativeDigits_38() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t435877138_StaticFields, ___invariantNativeDigits_38)); }
	inline StringU5BU5D_t1281789340* get_invariantNativeDigits_38() const { return ___invariantNativeDigits_38; }
	inline StringU5BU5D_t1281789340** get_address_of_invariantNativeDigits_38() { return &___invariantNativeDigits_38; }
	inline void set_invariantNativeDigits_38(StringU5BU5D_t1281789340* value)
	{
		___invariantNativeDigits_38 = value;
		Il2CppCodeGenWriteBarrier((&___invariantNativeDigits_38), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATINFO_T435877138_H
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
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef CRITICALFINALIZEROBJECT_T701527852_H
#define CRITICALFINALIZEROBJECT_T701527852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct  CriticalFinalizerObject_t701527852  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRITICALFINALIZEROBJECT_T701527852_H
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
#ifndef TIMEZONE_T2038656743_H
#define TIMEZONE_T2038656743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2038656743  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2038656743_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2038656743 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2038656743 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2038656743 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2038656743 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2038656743_H
#ifndef PARSER_T2112344768_H
#define PARSER_T2112344768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t2112344768  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T2112344768_H
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
#ifndef SERIALIZATIONINFO_T950877179_H
#define SERIALIZATIONINFO_T950877179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t950877179  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t1853889766 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t2718874744 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___serialized_0)); }
	inline Hashtable_t1853889766 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t1853889766 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t1853889766 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___values_1)); }
	inline ArrayList_t2718874744 * get_values_1() const { return ___values_1; }
	inline ArrayList_t2718874744 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t2718874744 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t950877179, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T950877179_H
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
#ifndef SBYTE_T1669577662_H
#define SBYTE_T1669577662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SByte
struct  SByte_t1669577662 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t1669577662, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTE_T1669577662_H
#ifndef SERIALIZABLEATTRIBUTE_T1992588303_H
#define SERIALIZABLEATTRIBUTE_T1992588303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SerializableAttribute
struct  SerializableAttribute_t1992588303  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZABLEATTRIBUTE_T1992588303_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
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
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef UINTPTR_T_H
#define UINTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UIntPtr
struct  UIntPtr_t 
{
public:
	// System.Void* System.UIntPtr::_pointer
	void* ____pointer_1;

public:
	inline static int32_t get_offset_of__pointer_1() { return static_cast<int32_t>(offsetof(UIntPtr_t, ____pointer_1)); }
	inline void* get__pointer_1() const { return ____pointer_1; }
	inline void** get_address_of__pointer_1() { return &____pointer_1; }
	inline void set__pointer_1(void* value)
	{
		____pointer_1 = value;
	}
};

struct UIntPtr_t_StaticFields
{
public:
	// System.UIntPtr System.UIntPtr::Zero
	uintptr_t ___Zero_0;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(UIntPtr_t_StaticFields, ___Zero_0)); }
	inline uintptr_t get_Zero_0() const { return ___Zero_0; }
	inline uintptr_t* get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(uintptr_t value)
	{
		___Zero_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINTPTR_T_H
#ifndef PARAMETERMODIFIER_T1461694466_H
#define PARAMETERMODIFIER_T1461694466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ParameterModifier
struct  ParameterModifier_t1461694466 
{
public:
	// System.Boolean[] System.Reflection.ParameterModifier::_byref
	BooleanU5BU5D_t2897418192* ____byref_0;

public:
	inline static int32_t get_offset_of__byref_0() { return static_cast<int32_t>(offsetof(ParameterModifier_t1461694466, ____byref_0)); }
	inline BooleanU5BU5D_t2897418192* get__byref_0() const { return ____byref_0; }
	inline BooleanU5BU5D_t2897418192** get_address_of__byref_0() { return &____byref_0; }
	inline void set__byref_0(BooleanU5BU5D_t2897418192* value)
	{
		____byref_0 = value;
		Il2CppCodeGenWriteBarrier((&____byref_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_pinvoke
{
	int32_t* ____byref_0;
};
// Native definition for COM marshalling of System.Reflection.ParameterModifier
struct ParameterModifier_t1461694466_marshaled_com
{
	int32_t* ____byref_0;
};
#endif // PARAMETERMODIFIER_T1461694466_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
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
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef COMIMPORTATTRIBUTE_T1295173782_H
#define COMIMPORTATTRIBUTE_T1295173782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ComImportAttribute
struct  ComImportAttribute_t1295173782  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMIMPORTATTRIBUTE_T1295173782_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef EVENTINFO_T_H
#define EVENTINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventInfo
struct  EventInfo_t  : public MemberInfo_t
{
public:
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_t1787725097 * ___cached_add_event_0;

public:
	inline static int32_t get_offset_of_cached_add_event_0() { return static_cast<int32_t>(offsetof(EventInfo_t, ___cached_add_event_0)); }
	inline AddEventAdapter_t1787725097 * get_cached_add_event_0() const { return ___cached_add_event_0; }
	inline AddEventAdapter_t1787725097 ** get_address_of_cached_add_event_0() { return &___cached_add_event_0; }
	inline void set_cached_add_event_0(AddEventAdapter_t1787725097 * value)
	{
		___cached_add_event_0 = value;
		Il2CppCodeGenWriteBarrier((&___cached_add_event_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTINFO_T_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
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
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
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
#ifndef METHODBASE_T_H
#define METHODBASE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODBASE_T_H
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
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_2)); }
	inline Il2CppChar get_m_value_2() const { return ___m_value_2; }
	inline Il2CppChar* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(Il2CppChar value)
	{
		___m_value_2 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte* System.Char::category_data
	uint8_t* ___category_data_3;
	// System.Byte* System.Char::numeric_data
	uint8_t* ___numeric_data_4;
	// System.Double* System.Char::numeric_data_values
	double* ___numeric_data_values_5;
	// System.UInt16* System.Char::to_lower_data_low
	uint16_t* ___to_lower_data_low_6;
	// System.UInt16* System.Char::to_lower_data_high
	uint16_t* ___to_lower_data_high_7;
	// System.UInt16* System.Char::to_upper_data_low
	uint16_t* ___to_upper_data_low_8;
	// System.UInt16* System.Char::to_upper_data_high
	uint16_t* ___to_upper_data_high_9;

public:
	inline static int32_t get_offset_of_category_data_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___category_data_3)); }
	inline uint8_t* get_category_data_3() const { return ___category_data_3; }
	inline uint8_t** get_address_of_category_data_3() { return &___category_data_3; }
	inline void set_category_data_3(uint8_t* value)
	{
		___category_data_3 = value;
	}

	inline static int32_t get_offset_of_numeric_data_4() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_4)); }
	inline uint8_t* get_numeric_data_4() const { return ___numeric_data_4; }
	inline uint8_t** get_address_of_numeric_data_4() { return &___numeric_data_4; }
	inline void set_numeric_data_4(uint8_t* value)
	{
		___numeric_data_4 = value;
	}

	inline static int32_t get_offset_of_numeric_data_values_5() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___numeric_data_values_5)); }
	inline double* get_numeric_data_values_5() const { return ___numeric_data_values_5; }
	inline double** get_address_of_numeric_data_values_5() { return &___numeric_data_values_5; }
	inline void set_numeric_data_values_5(double* value)
	{
		___numeric_data_values_5 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_low_6() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_low_6)); }
	inline uint16_t* get_to_lower_data_low_6() const { return ___to_lower_data_low_6; }
	inline uint16_t** get_address_of_to_lower_data_low_6() { return &___to_lower_data_low_6; }
	inline void set_to_lower_data_low_6(uint16_t* value)
	{
		___to_lower_data_low_6 = value;
	}

	inline static int32_t get_offset_of_to_lower_data_high_7() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_lower_data_high_7)); }
	inline uint16_t* get_to_lower_data_high_7() const { return ___to_lower_data_high_7; }
	inline uint16_t** get_address_of_to_lower_data_high_7() { return &___to_lower_data_high_7; }
	inline void set_to_lower_data_high_7(uint16_t* value)
	{
		___to_lower_data_high_7 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_low_8() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_low_8)); }
	inline uint16_t* get_to_upper_data_low_8() const { return ___to_upper_data_low_8; }
	inline uint16_t** get_address_of_to_upper_data_low_8() { return &___to_upper_data_low_8; }
	inline void set_to_upper_data_low_8(uint16_t* value)
	{
		___to_upper_data_low_8 = value;
	}

	inline static int32_t get_offset_of_to_upper_data_high_9() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___to_upper_data_high_9)); }
	inline uint16_t* get_to_upper_data_high_9() const { return ___to_upper_data_high_9; }
	inline uint16_t** get_address_of_to_upper_data_high_9() { return &___to_upper_data_high_9; }
	inline void set_to_upper_data_high_9(uint16_t* value)
	{
		___to_upper_data_high_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
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
#ifndef PROPERTYINFO_T_H
#define PROPERTYINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYINFO_T_H
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
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
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
#ifndef FIELDINFO_T_H
#define FIELDINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDINFO_T_H
#ifndef THREADSTATE_T2533302383_H
#define THREADSTATE_T2533302383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.ThreadState
struct  ThreadState_t2533302383 
{
public:
	// System.Int32 System.Threading.ThreadState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ThreadState_t2533302383, ___value___1)); }
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
#endif // THREADSTATE_T2533302383_H
#ifndef NUMBERSTYLES_T617258130_H
#define NUMBERSTYLES_T617258130_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.NumberStyles
struct  NumberStyles_t617258130 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NumberStyles_t617258130, ___value___1)); }
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
#endif // NUMBERSTYLES_T617258130_H
#ifndef PACKINGSIZE_T2976435189_H
#define PACKINGSIZE_T2976435189_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.PackingSize
struct  PackingSize_t2976435189 
{
public:
	// System.Int32 System.Reflection.Emit.PackingSize::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PackingSize_t2976435189, ___value___1)); }
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
#endif // PACKINGSIZE_T2976435189_H
#ifndef GCHANDLETYPE_T3432586689_H
#define GCHANDLETYPE_T3432586689_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t3432586689 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GCHandleType_t3432586689, ___value___1)); }
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
#endif // GCHANDLETYPE_T3432586689_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef CONSOLEKEY_T4097401472_H
#define CONSOLEKEY_T4097401472_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKey
struct  ConsoleKey_t4097401472 
{
public:
	// System.Int32 System.ConsoleKey::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConsoleKey_t4097401472, ___value___1)); }
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
#endif // CONSOLEKEY_T4097401472_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef UNITYTYPE_T3666003507_H
#define UNITYTYPE_T3666003507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t3666003507 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t3666003507, ___value___1)); }
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
#endif // UNITYTYPE_T3666003507_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___1)); }
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
#endif // HANDLES_T3280152003_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef STREAMINGCONTEXTSTATES_T3580100459_H
#define STREAMINGCONTEXTSTATES_T3580100459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t3580100459 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t3580100459, ___value___1)); }
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
#endif // STREAMINGCONTEXTSTATES_T3580100459_H
#ifndef WINDOWSCONSOLEDRIVER_T3991887195_H
#define WINDOWSCONSOLEDRIVER_T3991887195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WindowsConsoleDriver
struct  WindowsConsoleDriver_t3991887195  : public RuntimeObject
{
public:
	// System.IntPtr System.WindowsConsoleDriver::inputHandle
	intptr_t ___inputHandle_0;
	// System.IntPtr System.WindowsConsoleDriver::outputHandle
	intptr_t ___outputHandle_1;
	// System.Int16 System.WindowsConsoleDriver::defaultAttribute
	int16_t ___defaultAttribute_2;

public:
	inline static int32_t get_offset_of_inputHandle_0() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___inputHandle_0)); }
	inline intptr_t get_inputHandle_0() const { return ___inputHandle_0; }
	inline intptr_t* get_address_of_inputHandle_0() { return &___inputHandle_0; }
	inline void set_inputHandle_0(intptr_t value)
	{
		___inputHandle_0 = value;
	}

	inline static int32_t get_offset_of_outputHandle_1() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___outputHandle_1)); }
	inline intptr_t get_outputHandle_1() const { return ___outputHandle_1; }
	inline intptr_t* get_address_of_outputHandle_1() { return &___outputHandle_1; }
	inline void set_outputHandle_1(intptr_t value)
	{
		___outputHandle_1 = value;
	}

	inline static int32_t get_offset_of_defaultAttribute_2() { return static_cast<int32_t>(offsetof(WindowsConsoleDriver_t3991887195, ___defaultAttribute_2)); }
	inline int16_t get_defaultAttribute_2() const { return ___defaultAttribute_2; }
	inline int16_t* get_address_of_defaultAttribute_2() { return &___defaultAttribute_2; }
	inline void set_defaultAttribute_2(int16_t value)
	{
		___defaultAttribute_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WINDOWSCONSOLEDRIVER_T3991887195_H
#ifndef ASSEMBLY_T_H
#define ASSEMBLY_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Assembly
struct  Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_t2120639521 * ___resolve_event_holder_1;
	// System.Security.Policy.Evidence System.Reflection.Assembly::_evidence
	Evidence_t2008144148 * ____evidence_2;
	// System.Security.PermissionSet System.Reflection.Assembly::_minimum
	PermissionSet_t223948603 * ____minimum_3;
	// System.Security.PermissionSet System.Reflection.Assembly::_optional
	PermissionSet_t223948603 * ____optional_4;
	// System.Security.PermissionSet System.Reflection.Assembly::_refuse
	PermissionSet_t223948603 * ____refuse_5;
	// System.Security.PermissionSet System.Reflection.Assembly::_granted
	PermissionSet_t223948603 * ____granted_6;
	// System.Security.PermissionSet System.Reflection.Assembly::_denied
	PermissionSet_t223948603 * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_t2120639521 * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_t2120639521 ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_t2120639521 * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((&___resolve_event_holder_1), value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline Evidence_t2008144148 * get__evidence_2() const { return ____evidence_2; }
	inline Evidence_t2008144148 ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(Evidence_t2008144148 * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((&____evidence_2), value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline PermissionSet_t223948603 * get__minimum_3() const { return ____minimum_3; }
	inline PermissionSet_t223948603 ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(PermissionSet_t223948603 * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((&____minimum_3), value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline PermissionSet_t223948603 * get__optional_4() const { return ____optional_4; }
	inline PermissionSet_t223948603 ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(PermissionSet_t223948603 * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((&____optional_4), value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline PermissionSet_t223948603 * get__refuse_5() const { return ____refuse_5; }
	inline PermissionSet_t223948603 ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(PermissionSet_t223948603 * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((&____refuse_5), value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline PermissionSet_t223948603 * get__granted_6() const { return ____granted_6; }
	inline PermissionSet_t223948603 ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(PermissionSet_t223948603 * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((&____granted_6), value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline PermissionSet_t223948603 * get__denied_7() const { return ____denied_7; }
	inline PermissionSet_t223948603 ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(PermissionSet_t223948603 * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((&____denied_7), value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLY_T_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#define TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2973684290  : public SystemException_t176217640
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2973684290, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef CURRENTSYSTEMTIMEZONE_T3998352255_H
#define CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3998352255  : public TimeZone_t2038656743
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1853889766 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t881159249  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t881159249  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1853889766 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1853889766 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1853889766 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t881159249  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t881159249  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t881159249  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t881159249  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3998352255_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2582425773 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2582425773 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2582425773 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2582425773 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3998352255_H
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
#ifndef METHODINFO_T_H
#define METHODINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODINFO_T_H
#ifndef METHODATTRIBUTES_T2366443849_H
#define METHODATTRIBUTES_T2366443849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MethodAttributes
struct  MethodAttributes_t2366443849 
{
public:
	// System.Int32 System.Reflection.MethodAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodAttributes_t2366443849, ___value___1)); }
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
#endif // METHODATTRIBUTES_T2366443849_H
#ifndef FIELDATTRIBUTES_T400321159_H
#define FIELDATTRIBUTES_T400321159_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.FieldAttributes
struct  FieldAttributes_t400321159 
{
public:
	// System.Int32 System.Reflection.FieldAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FieldAttributes_t400321159, ___value___1)); }
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
#endif // FIELDATTRIBUTES_T400321159_H
#ifndef PROPERTYATTRIBUTES_T3388002996_H
#define PROPERTYATTRIBUTES_T3388002996_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.PropertyAttributes
struct  PropertyAttributes_t3388002996 
{
public:
	// System.Int32 System.Reflection.PropertyAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PropertyAttributes_t3388002996, ___value___1)); }
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
#endif // PROPERTYATTRIBUTES_T3388002996_H
#ifndef EVENTATTRIBUTES_T1153671773_H
#define EVENTATTRIBUTES_T1153671773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.EventAttributes
struct  EventAttributes_t1153671773 
{
public:
	// System.Int32 System.Reflection.EventAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventAttributes_t1153671773, ___value___1)); }
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
#endif // EVENTATTRIBUTES_T1153671773_H
#ifndef TYPEATTRIBUTES_T113483779_H
#define TYPEATTRIBUTES_T113483779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.TypeAttributes
struct  TypeAttributes_t113483779 
{
public:
	// System.Int32 System.Reflection.TypeAttributes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeAttributes_t113483779, ___value___1)); }
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
#endif // TYPEATTRIBUTES_T113483779_H
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
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef MEMBERTYPES_T3790569052_H
#define MEMBERTYPES_T3790569052_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberTypes
struct  MemberTypes_t3790569052 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MemberTypes_t3790569052, ___value___1)); }
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
#endif // MEMBERTYPES_T3790569052_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef CONSOLEMODIFIERS_T1471011467_H
#define CONSOLEMODIFIERS_T1471011467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleModifiers
struct  ConsoleModifiers_t1471011467 
{
public:
	// System.Int32 System.ConsoleModifiers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConsoleModifiers_t1471011467, ___value___1)); }
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
#endif // CONSOLEMODIFIERS_T1471011467_H
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
#ifndef CONSTRUCTORINFO_T5769829_H
#define CONSTRUCTORINFO_T5769829_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t5769829  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t5769829_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((&___ConstructorName_0), value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t5769829_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((&___TypeConstructorName_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTRUCTORINFO_T5769829_H
#ifndef CALLINGCONVENTIONS_T2253234531_H
#define CALLINGCONVENTIONS_T2253234531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.CallingConventions
struct  CallingConventions_t2253234531 
{
public:
	// System.Int32 System.Reflection.CallingConventions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CallingConventions_t2253234531, ___value___1)); }
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
#endif // CALLINGCONVENTIONS_T2253234531_H
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
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
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
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef TYPEDREFERENCE_T1491108119_H
#define TYPEDREFERENCE_T1491108119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypedReference
struct  TypedReference_t1491108119 
{
public:
	// System.RuntimeTypeHandle System.TypedReference::type
	RuntimeTypeHandle_t3027515415  ___type_0;
	// System.IntPtr System.TypedReference::value
	intptr_t ___value_1;
	// System.IntPtr System.TypedReference::klass
	intptr_t ___klass_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___type_0)); }
	inline RuntimeTypeHandle_t3027515415  get_type_0() const { return ___type_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(RuntimeTypeHandle_t3027515415  value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___value_1)); }
	inline intptr_t get_value_1() const { return ___value_1; }
	inline intptr_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(intptr_t value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_klass_2() { return static_cast<int32_t>(offsetof(TypedReference_t1491108119, ___klass_2)); }
	inline intptr_t get_klass_2() const { return ___klass_2; }
	inline intptr_t* get_address_of_klass_2() { return &___klass_2; }
	inline void set_klass_2(intptr_t value)
	{
		___klass_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDREFERENCE_T1491108119_H
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
#ifndef STREAMINGCONTEXT_T3711869237_H
#define STREAMINGCONTEXT_T3711869237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t3711869237 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t3711869237, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t3711869237_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T3711869237_H
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
#ifndef MODULE_T2987026101_H
#define MODULE_T2987026101_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Module
struct  Module_t2987026101  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Module::_impl
	intptr_t ____impl_3;
	// System.Reflection.Assembly System.Reflection.Module::assembly
	Assembly_t * ___assembly_4;
	// System.String System.Reflection.Module::fqname
	String_t* ___fqname_5;
	// System.String System.Reflection.Module::name
	String_t* ___name_6;
	// System.String System.Reflection.Module::scopename
	String_t* ___scopename_7;
	// System.Boolean System.Reflection.Module::is_resource
	bool ___is_resource_8;
	// System.Int32 System.Reflection.Module::token
	int32_t ___token_9;

public:
	inline static int32_t get_offset_of__impl_3() { return static_cast<int32_t>(offsetof(Module_t2987026101, ____impl_3)); }
	inline intptr_t get__impl_3() const { return ____impl_3; }
	inline intptr_t* get_address_of__impl_3() { return &____impl_3; }
	inline void set__impl_3(intptr_t value)
	{
		____impl_3 = value;
	}

	inline static int32_t get_offset_of_assembly_4() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___assembly_4)); }
	inline Assembly_t * get_assembly_4() const { return ___assembly_4; }
	inline Assembly_t ** get_address_of_assembly_4() { return &___assembly_4; }
	inline void set_assembly_4(Assembly_t * value)
	{
		___assembly_4 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_4), value);
	}

	inline static int32_t get_offset_of_fqname_5() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___fqname_5)); }
	inline String_t* get_fqname_5() const { return ___fqname_5; }
	inline String_t** get_address_of_fqname_5() { return &___fqname_5; }
	inline void set_fqname_5(String_t* value)
	{
		___fqname_5 = value;
		Il2CppCodeGenWriteBarrier((&___fqname_5), value);
	}

	inline static int32_t get_offset_of_name_6() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___name_6)); }
	inline String_t* get_name_6() const { return ___name_6; }
	inline String_t** get_address_of_name_6() { return &___name_6; }
	inline void set_name_6(String_t* value)
	{
		___name_6 = value;
		Il2CppCodeGenWriteBarrier((&___name_6), value);
	}

	inline static int32_t get_offset_of_scopename_7() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___scopename_7)); }
	inline String_t* get_scopename_7() const { return ___scopename_7; }
	inline String_t** get_address_of_scopename_7() { return &___scopename_7; }
	inline void set_scopename_7(String_t* value)
	{
		___scopename_7 = value;
		Il2CppCodeGenWriteBarrier((&___scopename_7), value);
	}

	inline static int32_t get_offset_of_is_resource_8() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___is_resource_8)); }
	inline bool get_is_resource_8() const { return ___is_resource_8; }
	inline bool* get_address_of_is_resource_8() { return &___is_resource_8; }
	inline void set_is_resource_8(bool value)
	{
		___is_resource_8 = value;
	}

	inline static int32_t get_offset_of_token_9() { return static_cast<int32_t>(offsetof(Module_t2987026101, ___token_9)); }
	inline int32_t get_token_9() const { return ___token_9; }
	inline int32_t* get_address_of_token_9() { return &___token_9; }
	inline void set_token_9(int32_t value)
	{
		___token_9 = value;
	}
};

struct Module_t2987026101_StaticFields
{
public:
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_t2356120900 * ___FilterTypeName_1;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_t2356120900 * ___FilterTypeNameIgnoreCase_2;

public:
	inline static int32_t get_offset_of_FilterTypeName_1() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeName_1)); }
	inline TypeFilter_t2356120900 * get_FilterTypeName_1() const { return ___FilterTypeName_1; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeName_1() { return &___FilterTypeName_1; }
	inline void set_FilterTypeName_1(TypeFilter_t2356120900 * value)
	{
		___FilterTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeName_1), value);
	}

	inline static int32_t get_offset_of_FilterTypeNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Module_t2987026101_StaticFields, ___FilterTypeNameIgnoreCase_2)); }
	inline TypeFilter_t2356120900 * get_FilterTypeNameIgnoreCase_2() const { return ___FilterTypeNameIgnoreCase_2; }
	inline TypeFilter_t2356120900 ** get_address_of_FilterTypeNameIgnoreCase_2() { return &___FilterTypeNameIgnoreCase_2; }
	inline void set_FilterTypeNameIgnoreCase_2(TypeFilter_t2356120900 * value)
	{
		___FilterTypeNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterTypeNameIgnoreCase_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULE_T2987026101_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
#ifndef CONSOLEKEYINFO_T1802691652_H
#define CONSOLEKEYINFO_T1802691652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleKeyInfo
struct  ConsoleKeyInfo_t1802691652 
{
public:
	// System.ConsoleKey System.ConsoleKeyInfo::key
	int32_t ___key_1;
	// System.Char System.ConsoleKeyInfo::keychar
	Il2CppChar ___keychar_2;
	// System.ConsoleModifiers System.ConsoleKeyInfo::modifiers
	int32_t ___modifiers_3;

public:
	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ___key_1)); }
	inline int32_t get_key_1() const { return ___key_1; }
	inline int32_t* get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(int32_t value)
	{
		___key_1 = value;
	}

	inline static int32_t get_offset_of_keychar_2() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ___keychar_2)); }
	inline Il2CppChar get_keychar_2() const { return ___keychar_2; }
	inline Il2CppChar* get_address_of_keychar_2() { return &___keychar_2; }
	inline void set_keychar_2(Il2CppChar value)
	{
		___keychar_2 = value;
	}

	inline static int32_t get_offset_of_modifiers_3() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652, ___modifiers_3)); }
	inline int32_t get_modifiers_3() const { return ___modifiers_3; }
	inline int32_t* get_address_of_modifiers_3() { return &___modifiers_3; }
	inline void set_modifiers_3(int32_t value)
	{
		___modifiers_3 = value;
	}
};

struct ConsoleKeyInfo_t1802691652_StaticFields
{
public:
	// System.ConsoleKeyInfo System.ConsoleKeyInfo::Empty
	ConsoleKeyInfo_t1802691652  ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(ConsoleKeyInfo_t1802691652_StaticFields, ___Empty_0)); }
	inline ConsoleKeyInfo_t1802691652  get_Empty_0() const { return ___Empty_0; }
	inline ConsoleKeyInfo_t1802691652 * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(ConsoleKeyInfo_t1802691652  value)
	{
		___Empty_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_pinvoke
{
	int32_t ___key_1;
	uint8_t ___keychar_2;
	int32_t ___modifiers_3;
};
// Native definition for COM marshalling of System.ConsoleKeyInfo
struct ConsoleKeyInfo_t1802691652_marshaled_com
{
	int32_t ___key_1;
	uint8_t ___keychar_2;
	int32_t ___modifiers_3;
};
#endif // CONSOLEKEYINFO_T1802691652_H
#ifndef THREAD_T2300836069_H
#define THREAD_T2300836069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Thread
struct  Thread_t2300836069  : public CriticalFinalizerObject_t701527852
{
public:
	// System.Int32 System.Threading.Thread::lock_thread_id
	int32_t ___lock_thread_id_0;
	// System.IntPtr System.Threading.Thread::system_thread_handle
	intptr_t ___system_thread_handle_1;
	// System.Object System.Threading.Thread::cached_culture_info
	RuntimeObject * ___cached_culture_info_2;
	// System.IntPtr System.Threading.Thread::unused0
	intptr_t ___unused0_3;
	// System.Boolean System.Threading.Thread::threadpool_thread
	bool ___threadpool_thread_4;
	// System.IntPtr System.Threading.Thread::name
	intptr_t ___name_5;
	// System.Int32 System.Threading.Thread::name_len
	int32_t ___name_len_6;
	// System.Threading.ThreadState System.Threading.Thread::state
	int32_t ___state_7;
	// System.Object System.Threading.Thread::abort_exc
	RuntimeObject * ___abort_exc_8;
	// System.Int32 System.Threading.Thread::abort_state_handle
	int32_t ___abort_state_handle_9;
	// System.Int64 System.Threading.Thread::thread_id
	int64_t ___thread_id_10;
	// System.IntPtr System.Threading.Thread::start_notify
	intptr_t ___start_notify_11;
	// System.IntPtr System.Threading.Thread::stack_ptr
	intptr_t ___stack_ptr_12;
	// System.UIntPtr System.Threading.Thread::static_data
	uintptr_t ___static_data_13;
	// System.IntPtr System.Threading.Thread::jit_data
	intptr_t ___jit_data_14;
	// System.IntPtr System.Threading.Thread::lock_data
	intptr_t ___lock_data_15;
	// System.Object System.Threading.Thread::current_appcontext
	RuntimeObject * ___current_appcontext_16;
	// System.Int32 System.Threading.Thread::stack_size
	int32_t ___stack_size_17;
	// System.Object System.Threading.Thread::start_obj
	RuntimeObject * ___start_obj_18;
	// System.IntPtr System.Threading.Thread::appdomain_refs
	intptr_t ___appdomain_refs_19;
	// System.Int32 System.Threading.Thread::interruption_requested
	int32_t ___interruption_requested_20;
	// System.IntPtr System.Threading.Thread::suspend_event
	intptr_t ___suspend_event_21;
	// System.IntPtr System.Threading.Thread::suspended_event
	intptr_t ___suspended_event_22;
	// System.IntPtr System.Threading.Thread::resume_event
	intptr_t ___resume_event_23;
	// System.IntPtr System.Threading.Thread::synch_cs
	intptr_t ___synch_cs_24;
	// System.IntPtr System.Threading.Thread::serialized_culture_info
	intptr_t ___serialized_culture_info_25;
	// System.Int32 System.Threading.Thread::serialized_culture_info_len
	int32_t ___serialized_culture_info_len_26;
	// System.IntPtr System.Threading.Thread::serialized_ui_culture_info
	intptr_t ___serialized_ui_culture_info_27;
	// System.Int32 System.Threading.Thread::serialized_ui_culture_info_len
	int32_t ___serialized_ui_culture_info_len_28;
	// System.Boolean System.Threading.Thread::thread_dump_requested
	bool ___thread_dump_requested_29;
	// System.IntPtr System.Threading.Thread::end_stack
	intptr_t ___end_stack_30;
	// System.Boolean System.Threading.Thread::thread_interrupt_requested
	bool ___thread_interrupt_requested_31;
	// System.Byte System.Threading.Thread::apartment_state
	uint8_t ___apartment_state_32;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Thread::critical_region_level
	int32_t ___critical_region_level_33;
	// System.Int32 System.Threading.Thread::small_id
	int32_t ___small_id_34;
	// System.IntPtr System.Threading.Thread::manage_callback
	intptr_t ___manage_callback_35;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject * ___pending_exception_36;
	// System.Threading.ExecutionContext System.Threading.Thread::ec_to_set
	ExecutionContext_t1748372627 * ___ec_to_set_37;
	// System.IntPtr System.Threading.Thread::interrupt_on_stop
	intptr_t ___interrupt_on_stop_38;
	// System.IntPtr System.Threading.Thread::unused3
	intptr_t ___unused3_39;
	// System.IntPtr System.Threading.Thread::unused4
	intptr_t ___unused4_40;
	// System.IntPtr System.Threading.Thread::unused5
	intptr_t ___unused5_41;
	// System.IntPtr System.Threading.Thread::unused6
	intptr_t ___unused6_42;
	// System.MulticastDelegate System.Threading.Thread::threadstart
	MulticastDelegate_t * ___threadstart_45;
	// System.Int32 System.Threading.Thread::managed_id
	int32_t ___managed_id_46;
	// System.Security.Principal.IPrincipal System.Threading.Thread::_principal
	RuntimeObject* ____principal_47;
	// System.Boolean System.Threading.Thread::in_currentculture
	bool ___in_currentculture_50;

public:
	inline static int32_t get_offset_of_lock_thread_id_0() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_thread_id_0)); }
	inline int32_t get_lock_thread_id_0() const { return ___lock_thread_id_0; }
	inline int32_t* get_address_of_lock_thread_id_0() { return &___lock_thread_id_0; }
	inline void set_lock_thread_id_0(int32_t value)
	{
		___lock_thread_id_0 = value;
	}

	inline static int32_t get_offset_of_system_thread_handle_1() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___system_thread_handle_1)); }
	inline intptr_t get_system_thread_handle_1() const { return ___system_thread_handle_1; }
	inline intptr_t* get_address_of_system_thread_handle_1() { return &___system_thread_handle_1; }
	inline void set_system_thread_handle_1(intptr_t value)
	{
		___system_thread_handle_1 = value;
	}

	inline static int32_t get_offset_of_cached_culture_info_2() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___cached_culture_info_2)); }
	inline RuntimeObject * get_cached_culture_info_2() const { return ___cached_culture_info_2; }
	inline RuntimeObject ** get_address_of_cached_culture_info_2() { return &___cached_culture_info_2; }
	inline void set_cached_culture_info_2(RuntimeObject * value)
	{
		___cached_culture_info_2 = value;
		Il2CppCodeGenWriteBarrier((&___cached_culture_info_2), value);
	}

	inline static int32_t get_offset_of_unused0_3() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused0_3)); }
	inline intptr_t get_unused0_3() const { return ___unused0_3; }
	inline intptr_t* get_address_of_unused0_3() { return &___unused0_3; }
	inline void set_unused0_3(intptr_t value)
	{
		___unused0_3 = value;
	}

	inline static int32_t get_offset_of_threadpool_thread_4() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadpool_thread_4)); }
	inline bool get_threadpool_thread_4() const { return ___threadpool_thread_4; }
	inline bool* get_address_of_threadpool_thread_4() { return &___threadpool_thread_4; }
	inline void set_threadpool_thread_4(bool value)
	{
		___threadpool_thread_4 = value;
	}

	inline static int32_t get_offset_of_name_5() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_5)); }
	inline intptr_t get_name_5() const { return ___name_5; }
	inline intptr_t* get_address_of_name_5() { return &___name_5; }
	inline void set_name_5(intptr_t value)
	{
		___name_5 = value;
	}

	inline static int32_t get_offset_of_name_len_6() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___name_len_6)); }
	inline int32_t get_name_len_6() const { return ___name_len_6; }
	inline int32_t* get_address_of_name_len_6() { return &___name_len_6; }
	inline void set_name_len_6(int32_t value)
	{
		___name_len_6 = value;
	}

	inline static int32_t get_offset_of_state_7() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___state_7)); }
	inline int32_t get_state_7() const { return ___state_7; }
	inline int32_t* get_address_of_state_7() { return &___state_7; }
	inline void set_state_7(int32_t value)
	{
		___state_7 = value;
	}

	inline static int32_t get_offset_of_abort_exc_8() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_exc_8)); }
	inline RuntimeObject * get_abort_exc_8() const { return ___abort_exc_8; }
	inline RuntimeObject ** get_address_of_abort_exc_8() { return &___abort_exc_8; }
	inline void set_abort_exc_8(RuntimeObject * value)
	{
		___abort_exc_8 = value;
		Il2CppCodeGenWriteBarrier((&___abort_exc_8), value);
	}

	inline static int32_t get_offset_of_abort_state_handle_9() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___abort_state_handle_9)); }
	inline int32_t get_abort_state_handle_9() const { return ___abort_state_handle_9; }
	inline int32_t* get_address_of_abort_state_handle_9() { return &___abort_state_handle_9; }
	inline void set_abort_state_handle_9(int32_t value)
	{
		___abort_state_handle_9 = value;
	}

	inline static int32_t get_offset_of_thread_id_10() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_id_10)); }
	inline int64_t get_thread_id_10() const { return ___thread_id_10; }
	inline int64_t* get_address_of_thread_id_10() { return &___thread_id_10; }
	inline void set_thread_id_10(int64_t value)
	{
		___thread_id_10 = value;
	}

	inline static int32_t get_offset_of_start_notify_11() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_notify_11)); }
	inline intptr_t get_start_notify_11() const { return ___start_notify_11; }
	inline intptr_t* get_address_of_start_notify_11() { return &___start_notify_11; }
	inline void set_start_notify_11(intptr_t value)
	{
		___start_notify_11 = value;
	}

	inline static int32_t get_offset_of_stack_ptr_12() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_ptr_12)); }
	inline intptr_t get_stack_ptr_12() const { return ___stack_ptr_12; }
	inline intptr_t* get_address_of_stack_ptr_12() { return &___stack_ptr_12; }
	inline void set_stack_ptr_12(intptr_t value)
	{
		___stack_ptr_12 = value;
	}

	inline static int32_t get_offset_of_static_data_13() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___static_data_13)); }
	inline uintptr_t get_static_data_13() const { return ___static_data_13; }
	inline uintptr_t* get_address_of_static_data_13() { return &___static_data_13; }
	inline void set_static_data_13(uintptr_t value)
	{
		___static_data_13 = value;
	}

	inline static int32_t get_offset_of_jit_data_14() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___jit_data_14)); }
	inline intptr_t get_jit_data_14() const { return ___jit_data_14; }
	inline intptr_t* get_address_of_jit_data_14() { return &___jit_data_14; }
	inline void set_jit_data_14(intptr_t value)
	{
		___jit_data_14 = value;
	}

	inline static int32_t get_offset_of_lock_data_15() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___lock_data_15)); }
	inline intptr_t get_lock_data_15() const { return ___lock_data_15; }
	inline intptr_t* get_address_of_lock_data_15() { return &___lock_data_15; }
	inline void set_lock_data_15(intptr_t value)
	{
		___lock_data_15 = value;
	}

	inline static int32_t get_offset_of_current_appcontext_16() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___current_appcontext_16)); }
	inline RuntimeObject * get_current_appcontext_16() const { return ___current_appcontext_16; }
	inline RuntimeObject ** get_address_of_current_appcontext_16() { return &___current_appcontext_16; }
	inline void set_current_appcontext_16(RuntimeObject * value)
	{
		___current_appcontext_16 = value;
		Il2CppCodeGenWriteBarrier((&___current_appcontext_16), value);
	}

	inline static int32_t get_offset_of_stack_size_17() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___stack_size_17)); }
	inline int32_t get_stack_size_17() const { return ___stack_size_17; }
	inline int32_t* get_address_of_stack_size_17() { return &___stack_size_17; }
	inline void set_stack_size_17(int32_t value)
	{
		___stack_size_17 = value;
	}

	inline static int32_t get_offset_of_start_obj_18() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___start_obj_18)); }
	inline RuntimeObject * get_start_obj_18() const { return ___start_obj_18; }
	inline RuntimeObject ** get_address_of_start_obj_18() { return &___start_obj_18; }
	inline void set_start_obj_18(RuntimeObject * value)
	{
		___start_obj_18 = value;
		Il2CppCodeGenWriteBarrier((&___start_obj_18), value);
	}

	inline static int32_t get_offset_of_appdomain_refs_19() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___appdomain_refs_19)); }
	inline intptr_t get_appdomain_refs_19() const { return ___appdomain_refs_19; }
	inline intptr_t* get_address_of_appdomain_refs_19() { return &___appdomain_refs_19; }
	inline void set_appdomain_refs_19(intptr_t value)
	{
		___appdomain_refs_19 = value;
	}

	inline static int32_t get_offset_of_interruption_requested_20() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interruption_requested_20)); }
	inline int32_t get_interruption_requested_20() const { return ___interruption_requested_20; }
	inline int32_t* get_address_of_interruption_requested_20() { return &___interruption_requested_20; }
	inline void set_interruption_requested_20(int32_t value)
	{
		___interruption_requested_20 = value;
	}

	inline static int32_t get_offset_of_suspend_event_21() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspend_event_21)); }
	inline intptr_t get_suspend_event_21() const { return ___suspend_event_21; }
	inline intptr_t* get_address_of_suspend_event_21() { return &___suspend_event_21; }
	inline void set_suspend_event_21(intptr_t value)
	{
		___suspend_event_21 = value;
	}

	inline static int32_t get_offset_of_suspended_event_22() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___suspended_event_22)); }
	inline intptr_t get_suspended_event_22() const { return ___suspended_event_22; }
	inline intptr_t* get_address_of_suspended_event_22() { return &___suspended_event_22; }
	inline void set_suspended_event_22(intptr_t value)
	{
		___suspended_event_22 = value;
	}

	inline static int32_t get_offset_of_resume_event_23() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___resume_event_23)); }
	inline intptr_t get_resume_event_23() const { return ___resume_event_23; }
	inline intptr_t* get_address_of_resume_event_23() { return &___resume_event_23; }
	inline void set_resume_event_23(intptr_t value)
	{
		___resume_event_23 = value;
	}

	inline static int32_t get_offset_of_synch_cs_24() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___synch_cs_24)); }
	inline intptr_t get_synch_cs_24() const { return ___synch_cs_24; }
	inline intptr_t* get_address_of_synch_cs_24() { return &___synch_cs_24; }
	inline void set_synch_cs_24(intptr_t value)
	{
		___synch_cs_24 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_25() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_25)); }
	inline intptr_t get_serialized_culture_info_25() const { return ___serialized_culture_info_25; }
	inline intptr_t* get_address_of_serialized_culture_info_25() { return &___serialized_culture_info_25; }
	inline void set_serialized_culture_info_25(intptr_t value)
	{
		___serialized_culture_info_25 = value;
	}

	inline static int32_t get_offset_of_serialized_culture_info_len_26() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_culture_info_len_26)); }
	inline int32_t get_serialized_culture_info_len_26() const { return ___serialized_culture_info_len_26; }
	inline int32_t* get_address_of_serialized_culture_info_len_26() { return &___serialized_culture_info_len_26; }
	inline void set_serialized_culture_info_len_26(int32_t value)
	{
		___serialized_culture_info_len_26 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_27() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_27)); }
	inline intptr_t get_serialized_ui_culture_info_27() const { return ___serialized_ui_culture_info_27; }
	inline intptr_t* get_address_of_serialized_ui_culture_info_27() { return &___serialized_ui_culture_info_27; }
	inline void set_serialized_ui_culture_info_27(intptr_t value)
	{
		___serialized_ui_culture_info_27 = value;
	}

	inline static int32_t get_offset_of_serialized_ui_culture_info_len_28() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___serialized_ui_culture_info_len_28)); }
	inline int32_t get_serialized_ui_culture_info_len_28() const { return ___serialized_ui_culture_info_len_28; }
	inline int32_t* get_address_of_serialized_ui_culture_info_len_28() { return &___serialized_ui_culture_info_len_28; }
	inline void set_serialized_ui_culture_info_len_28(int32_t value)
	{
		___serialized_ui_culture_info_len_28 = value;
	}

	inline static int32_t get_offset_of_thread_dump_requested_29() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_dump_requested_29)); }
	inline bool get_thread_dump_requested_29() const { return ___thread_dump_requested_29; }
	inline bool* get_address_of_thread_dump_requested_29() { return &___thread_dump_requested_29; }
	inline void set_thread_dump_requested_29(bool value)
	{
		___thread_dump_requested_29 = value;
	}

	inline static int32_t get_offset_of_end_stack_30() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___end_stack_30)); }
	inline intptr_t get_end_stack_30() const { return ___end_stack_30; }
	inline intptr_t* get_address_of_end_stack_30() { return &___end_stack_30; }
	inline void set_end_stack_30(intptr_t value)
	{
		___end_stack_30 = value;
	}

	inline static int32_t get_offset_of_thread_interrupt_requested_31() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___thread_interrupt_requested_31)); }
	inline bool get_thread_interrupt_requested_31() const { return ___thread_interrupt_requested_31; }
	inline bool* get_address_of_thread_interrupt_requested_31() { return &___thread_interrupt_requested_31; }
	inline void set_thread_interrupt_requested_31(bool value)
	{
		___thread_interrupt_requested_31 = value;
	}

	inline static int32_t get_offset_of_apartment_state_32() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___apartment_state_32)); }
	inline uint8_t get_apartment_state_32() const { return ___apartment_state_32; }
	inline uint8_t* get_address_of_apartment_state_32() { return &___apartment_state_32; }
	inline void set_apartment_state_32(uint8_t value)
	{
		___apartment_state_32 = value;
	}

	inline static int32_t get_offset_of_critical_region_level_33() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___critical_region_level_33)); }
	inline int32_t get_critical_region_level_33() const { return ___critical_region_level_33; }
	inline int32_t* get_address_of_critical_region_level_33() { return &___critical_region_level_33; }
	inline void set_critical_region_level_33(int32_t value)
	{
		___critical_region_level_33 = value;
	}

	inline static int32_t get_offset_of_small_id_34() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___small_id_34)); }
	inline int32_t get_small_id_34() const { return ___small_id_34; }
	inline int32_t* get_address_of_small_id_34() { return &___small_id_34; }
	inline void set_small_id_34(int32_t value)
	{
		___small_id_34 = value;
	}

	inline static int32_t get_offset_of_manage_callback_35() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___manage_callback_35)); }
	inline intptr_t get_manage_callback_35() const { return ___manage_callback_35; }
	inline intptr_t* get_address_of_manage_callback_35() { return &___manage_callback_35; }
	inline void set_manage_callback_35(intptr_t value)
	{
		___manage_callback_35 = value;
	}

	inline static int32_t get_offset_of_pending_exception_36() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___pending_exception_36)); }
	inline RuntimeObject * get_pending_exception_36() const { return ___pending_exception_36; }
	inline RuntimeObject ** get_address_of_pending_exception_36() { return &___pending_exception_36; }
	inline void set_pending_exception_36(RuntimeObject * value)
	{
		___pending_exception_36 = value;
		Il2CppCodeGenWriteBarrier((&___pending_exception_36), value);
	}

	inline static int32_t get_offset_of_ec_to_set_37() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___ec_to_set_37)); }
	inline ExecutionContext_t1748372627 * get_ec_to_set_37() const { return ___ec_to_set_37; }
	inline ExecutionContext_t1748372627 ** get_address_of_ec_to_set_37() { return &___ec_to_set_37; }
	inline void set_ec_to_set_37(ExecutionContext_t1748372627 * value)
	{
		___ec_to_set_37 = value;
		Il2CppCodeGenWriteBarrier((&___ec_to_set_37), value);
	}

	inline static int32_t get_offset_of_interrupt_on_stop_38() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___interrupt_on_stop_38)); }
	inline intptr_t get_interrupt_on_stop_38() const { return ___interrupt_on_stop_38; }
	inline intptr_t* get_address_of_interrupt_on_stop_38() { return &___interrupt_on_stop_38; }
	inline void set_interrupt_on_stop_38(intptr_t value)
	{
		___interrupt_on_stop_38 = value;
	}

	inline static int32_t get_offset_of_unused3_39() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused3_39)); }
	inline intptr_t get_unused3_39() const { return ___unused3_39; }
	inline intptr_t* get_address_of_unused3_39() { return &___unused3_39; }
	inline void set_unused3_39(intptr_t value)
	{
		___unused3_39 = value;
	}

	inline static int32_t get_offset_of_unused4_40() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused4_40)); }
	inline intptr_t get_unused4_40() const { return ___unused4_40; }
	inline intptr_t* get_address_of_unused4_40() { return &___unused4_40; }
	inline void set_unused4_40(intptr_t value)
	{
		___unused4_40 = value;
	}

	inline static int32_t get_offset_of_unused5_41() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused5_41)); }
	inline intptr_t get_unused5_41() const { return ___unused5_41; }
	inline intptr_t* get_address_of_unused5_41() { return &___unused5_41; }
	inline void set_unused5_41(intptr_t value)
	{
		___unused5_41 = value;
	}

	inline static int32_t get_offset_of_unused6_42() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___unused6_42)); }
	inline intptr_t get_unused6_42() const { return ___unused6_42; }
	inline intptr_t* get_address_of_unused6_42() { return &___unused6_42; }
	inline void set_unused6_42(intptr_t value)
	{
		___unused6_42 = value;
	}

	inline static int32_t get_offset_of_threadstart_45() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___threadstart_45)); }
	inline MulticastDelegate_t * get_threadstart_45() const { return ___threadstart_45; }
	inline MulticastDelegate_t ** get_address_of_threadstart_45() { return &___threadstart_45; }
	inline void set_threadstart_45(MulticastDelegate_t * value)
	{
		___threadstart_45 = value;
		Il2CppCodeGenWriteBarrier((&___threadstart_45), value);
	}

	inline static int32_t get_offset_of_managed_id_46() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___managed_id_46)); }
	inline int32_t get_managed_id_46() const { return ___managed_id_46; }
	inline int32_t* get_address_of_managed_id_46() { return &___managed_id_46; }
	inline void set_managed_id_46(int32_t value)
	{
		___managed_id_46 = value;
	}

	inline static int32_t get_offset_of__principal_47() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ____principal_47)); }
	inline RuntimeObject* get__principal_47() const { return ____principal_47; }
	inline RuntimeObject** get_address_of__principal_47() { return &____principal_47; }
	inline void set__principal_47(RuntimeObject* value)
	{
		____principal_47 = value;
		Il2CppCodeGenWriteBarrier((&____principal_47), value);
	}

	inline static int32_t get_offset_of_in_currentculture_50() { return static_cast<int32_t>(offsetof(Thread_t2300836069, ___in_currentculture_50)); }
	inline bool get_in_currentculture_50() const { return ___in_currentculture_50; }
	inline bool* get_address_of_in_currentculture_50() { return &___in_currentculture_50; }
	inline void set_in_currentculture_50(bool value)
	{
		___in_currentculture_50 = value;
	}
};

struct Thread_t2300836069_StaticFields
{
public:
	// System.Collections.Hashtable System.Threading.Thread::datastorehash
	Hashtable_t1853889766 * ___datastorehash_48;
	// System.Object System.Threading.Thread::datastore_lock
	RuntimeObject * ___datastore_lock_49;
	// System.Object System.Threading.Thread::culture_lock
	RuntimeObject * ___culture_lock_51;

public:
	inline static int32_t get_offset_of_datastorehash_48() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastorehash_48)); }
	inline Hashtable_t1853889766 * get_datastorehash_48() const { return ___datastorehash_48; }
	inline Hashtable_t1853889766 ** get_address_of_datastorehash_48() { return &___datastorehash_48; }
	inline void set_datastorehash_48(Hashtable_t1853889766 * value)
	{
		___datastorehash_48 = value;
		Il2CppCodeGenWriteBarrier((&___datastorehash_48), value);
	}

	inline static int32_t get_offset_of_datastore_lock_49() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___datastore_lock_49)); }
	inline RuntimeObject * get_datastore_lock_49() const { return ___datastore_lock_49; }
	inline RuntimeObject ** get_address_of_datastore_lock_49() { return &___datastore_lock_49; }
	inline void set_datastore_lock_49(RuntimeObject * value)
	{
		___datastore_lock_49 = value;
		Il2CppCodeGenWriteBarrier((&___datastore_lock_49), value);
	}

	inline static int32_t get_offset_of_culture_lock_51() { return static_cast<int32_t>(offsetof(Thread_t2300836069_StaticFields, ___culture_lock_51)); }
	inline RuntimeObject * get_culture_lock_51() const { return ___culture_lock_51; }
	inline RuntimeObject ** get_address_of_culture_lock_51() { return &___culture_lock_51; }
	inline void set_culture_lock_51(RuntimeObject * value)
	{
		___culture_lock_51 = value;
		Il2CppCodeGenWriteBarrier((&___culture_lock_51), value);
	}
};

struct Thread_t2300836069_ThreadStaticFields
{
public:
	// System.Object[] System.Threading.Thread::local_slots
	ObjectU5BU5D_t2843939325* ___local_slots_43;
	// System.Threading.ExecutionContext System.Threading.Thread::_ec
	ExecutionContext_t1748372627 * ____ec_44;

public:
	inline static int32_t get_offset_of_local_slots_43() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ___local_slots_43)); }
	inline ObjectU5BU5D_t2843939325* get_local_slots_43() const { return ___local_slots_43; }
	inline ObjectU5BU5D_t2843939325** get_address_of_local_slots_43() { return &___local_slots_43; }
	inline void set_local_slots_43(ObjectU5BU5D_t2843939325* value)
	{
		___local_slots_43 = value;
		Il2CppCodeGenWriteBarrier((&___local_slots_43), value);
	}

	inline static int32_t get_offset_of__ec_44() { return static_cast<int32_t>(offsetof(Thread_t2300836069_ThreadStaticFields, ____ec_44)); }
	inline ExecutionContext_t1748372627 * get__ec_44() const { return ____ec_44; }
	inline ExecutionContext_t1748372627 ** get_address_of__ec_44() { return &____ec_44; }
	inline void set__ec_44(ExecutionContext_t1748372627 * value)
	{
		____ec_44 = value;
		Il2CppCodeGenWriteBarrier((&____ec_44), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREAD_T2300836069_H
#ifndef ENUMBUILDER_T2400448213_H
#define ENUMBUILDER_T2400448213_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.EnumBuilder
struct  EnumBuilder_t2400448213  : public Type_t
{
public:
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.EnumBuilder::_tb
	TypeBuilder_t1073948154 * ____tb_8;
	// System.Type System.Reflection.Emit.EnumBuilder::_underlyingType
	Type_t * ____underlyingType_9;

public:
	inline static int32_t get_offset_of__tb_8() { return static_cast<int32_t>(offsetof(EnumBuilder_t2400448213, ____tb_8)); }
	inline TypeBuilder_t1073948154 * get__tb_8() const { return ____tb_8; }
	inline TypeBuilder_t1073948154 ** get_address_of__tb_8() { return &____tb_8; }
	inline void set__tb_8(TypeBuilder_t1073948154 * value)
	{
		____tb_8 = value;
		Il2CppCodeGenWriteBarrier((&____tb_8), value);
	}

	inline static int32_t get_offset_of__underlyingType_9() { return static_cast<int32_t>(offsetof(EnumBuilder_t2400448213, ____underlyingType_9)); }
	inline Type_t * get__underlyingType_9() const { return ____underlyingType_9; }
	inline Type_t ** get_address_of__underlyingType_9() { return &____underlyingType_9; }
	inline void set__underlyingType_9(Type_t * value)
	{
		____underlyingType_9 = value;
		Il2CppCodeGenWriteBarrier((&____underlyingType_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMBUILDER_T2400448213_H
#ifndef DAYLIGHTTIME_T2582425773_H
#define DAYLIGHTTIME_T2582425773_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.DaylightTime
struct  DaylightTime_t2582425773  : public RuntimeObject
{
public:
	// System.DateTime System.Globalization.DaylightTime::m_start
	DateTime_t3738529785  ___m_start_0;
	// System.DateTime System.Globalization.DaylightTime::m_end
	DateTime_t3738529785  ___m_end_1;
	// System.TimeSpan System.Globalization.DaylightTime::m_delta
	TimeSpan_t881159249  ___m_delta_2;

public:
	inline static int32_t get_offset_of_m_start_0() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_start_0)); }
	inline DateTime_t3738529785  get_m_start_0() const { return ___m_start_0; }
	inline DateTime_t3738529785 * get_address_of_m_start_0() { return &___m_start_0; }
	inline void set_m_start_0(DateTime_t3738529785  value)
	{
		___m_start_0 = value;
	}

	inline static int32_t get_offset_of_m_end_1() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_end_1)); }
	inline DateTime_t3738529785  get_m_end_1() const { return ___m_end_1; }
	inline DateTime_t3738529785 * get_address_of_m_end_1() { return &___m_end_1; }
	inline void set_m_end_1(DateTime_t3738529785  value)
	{
		___m_end_1 = value;
	}

	inline static int32_t get_offset_of_m_delta_2() { return static_cast<int32_t>(offsetof(DaylightTime_t2582425773, ___m_delta_2)); }
	inline TimeSpan_t881159249  get_m_delta_2() const { return ___m_delta_2; }
	inline TimeSpan_t881159249 * get_address_of_m_delta_2() { return &___m_delta_2; }
	inline void set_m_delta_2(TimeSpan_t881159249  value)
	{
		___m_delta_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DAYLIGHTTIME_T2582425773_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H
#ifndef ASYNCCALLBACK_T3962456242_H
#define ASYNCCALLBACK_T3962456242_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t3962456242  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T3962456242_H
#ifndef UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#define UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventHandler
struct  UnhandledExceptionEventHandler_t3101989324  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTHANDLER_T3101989324_H
#ifndef MEMBERFILTER_T426314064_H
#define MEMBERFILTER_T426314064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberFilter
struct  MemberFilter_t426314064  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERFILTER_T426314064_H
#ifndef TYPEBUILDER_T1073948154_H
#define TYPEBUILDER_T1073948154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1073948154  : public Type_t
{
public:
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t3940880105* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t3705301900* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t3223009221* ___ctors_15;
	// System.Reflection.Emit.PropertyBuilder[] System.Reflection.Emit.TypeBuilder::properties
	PropertyBuilderU5BU5D_t4023329206* ___properties_16;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_fields
	int32_t ___num_fields_17;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t138311604* ___fields_18;
	// System.Reflection.Emit.EventBuilder[] System.Reflection.Emit.TypeBuilder::events
	EventBuilderU5BU5D_t3902749141* ___events_19;
	// System.Reflection.Emit.CustomAttributeBuilder[] System.Reflection.Emit.TypeBuilder::cattrs
	CustomAttributeBuilderU5BU5D_t2951373564* ___cattrs_20;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t786280671* ___subtypes_21;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_22;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_23;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t731887691 * ___pmodule_24;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_25;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_26;
	// System.IntPtr System.Reflection.Emit.TypeBuilder::generic_container
	intptr_t ___generic_container_27;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t3780444109* ___generic_params_28;
	// System.Reflection.Emit.RefEmitPermissionSet[] System.Reflection.Emit.TypeBuilder::permissions
	RefEmitPermissionSetU5BU5D_t567451178* ___permissions_29;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_30;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_31;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_32;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_33;

public:
	inline static int32_t get_offset_of_tname_8() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___tname_8)); }
	inline String_t* get_tname_8() const { return ___tname_8; }
	inline String_t** get_address_of_tname_8() { return &___tname_8; }
	inline void set_tname_8(String_t* value)
	{
		___tname_8 = value;
		Il2CppCodeGenWriteBarrier((&___tname_8), value);
	}

	inline static int32_t get_offset_of_nspace_9() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___nspace_9)); }
	inline String_t* get_nspace_9() const { return ___nspace_9; }
	inline String_t** get_address_of_nspace_9() { return &___nspace_9; }
	inline void set_nspace_9(String_t* value)
	{
		___nspace_9 = value;
		Il2CppCodeGenWriteBarrier((&___nspace_9), value);
	}

	inline static int32_t get_offset_of_parent_10() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___parent_10)); }
	inline Type_t * get_parent_10() const { return ___parent_10; }
	inline Type_t ** get_address_of_parent_10() { return &___parent_10; }
	inline void set_parent_10(Type_t * value)
	{
		___parent_10 = value;
		Il2CppCodeGenWriteBarrier((&___parent_10), value);
	}

	inline static int32_t get_offset_of_nesting_type_11() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___nesting_type_11)); }
	inline Type_t * get_nesting_type_11() const { return ___nesting_type_11; }
	inline Type_t ** get_address_of_nesting_type_11() { return &___nesting_type_11; }
	inline void set_nesting_type_11(Type_t * value)
	{
		___nesting_type_11 = value;
		Il2CppCodeGenWriteBarrier((&___nesting_type_11), value);
	}

	inline static int32_t get_offset_of_interfaces_12() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___interfaces_12)); }
	inline TypeU5BU5D_t3940880105* get_interfaces_12() const { return ___interfaces_12; }
	inline TypeU5BU5D_t3940880105** get_address_of_interfaces_12() { return &___interfaces_12; }
	inline void set_interfaces_12(TypeU5BU5D_t3940880105* value)
	{
		___interfaces_12 = value;
		Il2CppCodeGenWriteBarrier((&___interfaces_12), value);
	}

	inline static int32_t get_offset_of_num_methods_13() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___num_methods_13)); }
	inline int32_t get_num_methods_13() const { return ___num_methods_13; }
	inline int32_t* get_address_of_num_methods_13() { return &___num_methods_13; }
	inline void set_num_methods_13(int32_t value)
	{
		___num_methods_13 = value;
	}

	inline static int32_t get_offset_of_methods_14() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___methods_14)); }
	inline MethodBuilderU5BU5D_t3705301900* get_methods_14() const { return ___methods_14; }
	inline MethodBuilderU5BU5D_t3705301900** get_address_of_methods_14() { return &___methods_14; }
	inline void set_methods_14(MethodBuilderU5BU5D_t3705301900* value)
	{
		___methods_14 = value;
		Il2CppCodeGenWriteBarrier((&___methods_14), value);
	}

	inline static int32_t get_offset_of_ctors_15() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___ctors_15)); }
	inline ConstructorBuilderU5BU5D_t3223009221* get_ctors_15() const { return ___ctors_15; }
	inline ConstructorBuilderU5BU5D_t3223009221** get_address_of_ctors_15() { return &___ctors_15; }
	inline void set_ctors_15(ConstructorBuilderU5BU5D_t3223009221* value)
	{
		___ctors_15 = value;
		Il2CppCodeGenWriteBarrier((&___ctors_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___properties_16)); }
	inline PropertyBuilderU5BU5D_t4023329206* get_properties_16() const { return ___properties_16; }
	inline PropertyBuilderU5BU5D_t4023329206** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(PropertyBuilderU5BU5D_t4023329206* value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}

	inline static int32_t get_offset_of_num_fields_17() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___num_fields_17)); }
	inline int32_t get_num_fields_17() const { return ___num_fields_17; }
	inline int32_t* get_address_of_num_fields_17() { return &___num_fields_17; }
	inline void set_num_fields_17(int32_t value)
	{
		___num_fields_17 = value;
	}

	inline static int32_t get_offset_of_fields_18() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___fields_18)); }
	inline FieldBuilderU5BU5D_t138311604* get_fields_18() const { return ___fields_18; }
	inline FieldBuilderU5BU5D_t138311604** get_address_of_fields_18() { return &___fields_18; }
	inline void set_fields_18(FieldBuilderU5BU5D_t138311604* value)
	{
		___fields_18 = value;
		Il2CppCodeGenWriteBarrier((&___fields_18), value);
	}

	inline static int32_t get_offset_of_events_19() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___events_19)); }
	inline EventBuilderU5BU5D_t3902749141* get_events_19() const { return ___events_19; }
	inline EventBuilderU5BU5D_t3902749141** get_address_of_events_19() { return &___events_19; }
	inline void set_events_19(EventBuilderU5BU5D_t3902749141* value)
	{
		___events_19 = value;
		Il2CppCodeGenWriteBarrier((&___events_19), value);
	}

	inline static int32_t get_offset_of_cattrs_20() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___cattrs_20)); }
	inline CustomAttributeBuilderU5BU5D_t2951373564* get_cattrs_20() const { return ___cattrs_20; }
	inline CustomAttributeBuilderU5BU5D_t2951373564** get_address_of_cattrs_20() { return &___cattrs_20; }
	inline void set_cattrs_20(CustomAttributeBuilderU5BU5D_t2951373564* value)
	{
		___cattrs_20 = value;
		Il2CppCodeGenWriteBarrier((&___cattrs_20), value);
	}

	inline static int32_t get_offset_of_subtypes_21() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___subtypes_21)); }
	inline TypeBuilderU5BU5D_t786280671* get_subtypes_21() const { return ___subtypes_21; }
	inline TypeBuilderU5BU5D_t786280671** get_address_of_subtypes_21() { return &___subtypes_21; }
	inline void set_subtypes_21(TypeBuilderU5BU5D_t786280671* value)
	{
		___subtypes_21 = value;
		Il2CppCodeGenWriteBarrier((&___subtypes_21), value);
	}

	inline static int32_t get_offset_of_attrs_22() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___attrs_22)); }
	inline int32_t get_attrs_22() const { return ___attrs_22; }
	inline int32_t* get_address_of_attrs_22() { return &___attrs_22; }
	inline void set_attrs_22(int32_t value)
	{
		___attrs_22 = value;
	}

	inline static int32_t get_offset_of_table_idx_23() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___table_idx_23)); }
	inline int32_t get_table_idx_23() const { return ___table_idx_23; }
	inline int32_t* get_address_of_table_idx_23() { return &___table_idx_23; }
	inline void set_table_idx_23(int32_t value)
	{
		___table_idx_23 = value;
	}

	inline static int32_t get_offset_of_pmodule_24() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___pmodule_24)); }
	inline ModuleBuilder_t731887691 * get_pmodule_24() const { return ___pmodule_24; }
	inline ModuleBuilder_t731887691 ** get_address_of_pmodule_24() { return &___pmodule_24; }
	inline void set_pmodule_24(ModuleBuilder_t731887691 * value)
	{
		___pmodule_24 = value;
		Il2CppCodeGenWriteBarrier((&___pmodule_24), value);
	}

	inline static int32_t get_offset_of_class_size_25() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___class_size_25)); }
	inline int32_t get_class_size_25() const { return ___class_size_25; }
	inline int32_t* get_address_of_class_size_25() { return &___class_size_25; }
	inline void set_class_size_25(int32_t value)
	{
		___class_size_25 = value;
	}

	inline static int32_t get_offset_of_packing_size_26() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___packing_size_26)); }
	inline int32_t get_packing_size_26() const { return ___packing_size_26; }
	inline int32_t* get_address_of_packing_size_26() { return &___packing_size_26; }
	inline void set_packing_size_26(int32_t value)
	{
		___packing_size_26 = value;
	}

	inline static int32_t get_offset_of_generic_container_27() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___generic_container_27)); }
	inline intptr_t get_generic_container_27() const { return ___generic_container_27; }
	inline intptr_t* get_address_of_generic_container_27() { return &___generic_container_27; }
	inline void set_generic_container_27(intptr_t value)
	{
		___generic_container_27 = value;
	}

	inline static int32_t get_offset_of_generic_params_28() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___generic_params_28)); }
	inline GenericTypeParameterBuilderU5BU5D_t3780444109* get_generic_params_28() const { return ___generic_params_28; }
	inline GenericTypeParameterBuilderU5BU5D_t3780444109** get_address_of_generic_params_28() { return &___generic_params_28; }
	inline void set_generic_params_28(GenericTypeParameterBuilderU5BU5D_t3780444109* value)
	{
		___generic_params_28 = value;
		Il2CppCodeGenWriteBarrier((&___generic_params_28), value);
	}

	inline static int32_t get_offset_of_permissions_29() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___permissions_29)); }
	inline RefEmitPermissionSetU5BU5D_t567451178* get_permissions_29() const { return ___permissions_29; }
	inline RefEmitPermissionSetU5BU5D_t567451178** get_address_of_permissions_29() { return &___permissions_29; }
	inline void set_permissions_29(RefEmitPermissionSetU5BU5D_t567451178* value)
	{
		___permissions_29 = value;
		Il2CppCodeGenWriteBarrier((&___permissions_29), value);
	}

	inline static int32_t get_offset_of_created_30() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___created_30)); }
	inline Type_t * get_created_30() const { return ___created_30; }
	inline Type_t ** get_address_of_created_30() { return &___created_30; }
	inline void set_created_30(Type_t * value)
	{
		___created_30 = value;
		Il2CppCodeGenWriteBarrier((&___created_30), value);
	}

	inline static int32_t get_offset_of_fullname_31() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___fullname_31)); }
	inline String_t* get_fullname_31() const { return ___fullname_31; }
	inline String_t** get_address_of_fullname_31() { return &___fullname_31; }
	inline void set_fullname_31(String_t* value)
	{
		___fullname_31 = value;
		Il2CppCodeGenWriteBarrier((&___fullname_31), value);
	}

	inline static int32_t get_offset_of_createTypeCalled_32() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___createTypeCalled_32)); }
	inline bool get_createTypeCalled_32() const { return ___createTypeCalled_32; }
	inline bool* get_address_of_createTypeCalled_32() { return &___createTypeCalled_32; }
	inline void set_createTypeCalled_32(bool value)
	{
		___createTypeCalled_32 = value;
	}

	inline static int32_t get_offset_of_underlying_type_33() { return static_cast<int32_t>(offsetof(TypeBuilder_t1073948154, ___underlying_type_33)); }
	inline Type_t * get_underlying_type_33() const { return ___underlying_type_33; }
	inline Type_t ** get_address_of_underlying_type_33() { return &___underlying_type_33; }
	inline void set_underlying_type_33(Type_t * value)
	{
		___underlying_type_33 = value;
		Il2CppCodeGenWriteBarrier((&___underlying_type_33), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEBUILDER_T1073948154_H
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.EventInfo[]
struct EventInfoU5BU5D_t3237081491  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventInfo_t * m_Items[1];

public:
	inline EventInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline EventInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1302094432  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MemberInfo_t * m_Items[1];

public:
	inline MemberInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MemberInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t2943407543  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterModifier_t1461694466  m_Items[1];

public:
	inline ParameterModifier_t1461694466  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ParameterModifier_t1461694466  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterModifier_t1461694466 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterModifier_t1461694466  value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_t1461822886  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t2572182361  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t881249896  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ConstructorInfo_t5769829 * m_Items[1];

public:
	inline ConstructorInfo_t5769829 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ConstructorInfo_t5769829 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ConstructorInfo_t5769829 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ConstructorInfo_t5769829 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t846150980  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Char[]
struct CharU5BU5D_t3528271667  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};

extern "C" void InputRecord_t2660212290_marshal_pinvoke(const InputRecord_t2660212290& unmarshaled, InputRecord_t2660212290_marshaled_pinvoke& marshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_back(const InputRecord_t2660212290_marshaled_pinvoke& marshaled, InputRecord_t2660212290& unmarshaled);
extern "C" void InputRecord_t2660212290_marshal_pinvoke_cleanup(InputRecord_t2660212290_marshaled_pinvoke& marshaled);


// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C"  bool Parser_get_AtEnd_m1379314162 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
extern "C"  bool Char_IsWhiteSpace_m3213701995 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___index1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.String::get_Chars(System.Int32)
extern "C"  Il2CppChar String_get_Chars_m2986988803 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.String,System.Int32)
extern "C"  bool Char_IsDigit_m891258618 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___index1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C"  void Parser_ParseWhiteSpace_m4032762092 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C"  bool Parser_ParseSign_m2321989493 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C"  int32_t Parser_ParseInt_m1211400632 (Parser_t2112344768 * __this, bool ___optional0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C"  bool Parser_ParseOptDot_m3502077493 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C"  void Parser_ParseOptColon_m2583432228 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C"  int64_t Parser_ParseTicks_m4001393185 (Parser_t2112344768 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Locale::GetText(System.String)
extern "C"  String_t* Locale_GetText_m3374010885 (RuntimeObject * __this /* static, unused */, String_t* ___msg0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String)
extern "C"  void OverflowException__ctor_m694321376 (OverflowException_t2020128637 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.FormatException::.ctor(System.String)
extern "C"  void FormatException__ctor_m4049685996 (FormatException_t154580423 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::CalculateTicks(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  int64_t TimeSpan_CalculateTicks_m1336746319 (RuntimeObject * __this /* static, unused */, int32_t ___days0, int32_t ___hours1, int32_t ___minutes2, int32_t ___seconds3, int32_t ___milliseconds4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeSpan::.ctor(System.Int64)
extern "C"  void TimeSpan__ctor_m1896986612 (TimeSpan_t881159249 * __this, int64_t ___ticks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::GetNow()
extern "C"  int64_t DateTime_GetNow_m1268643815 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C"  void CurrentSystemTimeZone__ctor_m4224169966 (CurrentSystemTimeZone_t3998352255 * __this, int64_t ___lnow0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTime::get_Year()
extern "C"  int32_t DateTime_get_Year_m1184003812 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m3100698649 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___time0, DaylightTime_t2582425773 * ___daylightTimes1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_Start()
extern "C"  DateTime_t3738529785  DaylightTime_get_Start_m2228394704 (DaylightTime_t2582425773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTime::get_Ticks()
extern "C"  int64_t DateTime_get_Ticks_m1550640881 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Globalization.DaylightTime::get_End()
extern "C"  DateTime_t3738529785  DaylightTime_get_End_m724819253 (DaylightTime_t2582425773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeKind System.DateTime::get_Kind()
extern "C"  int32_t DateTime_get_Kind_m2154871796 (DateTime_t3738529785 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Subtraction(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_op_Subtraction_m529926081 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___d0, TimeSpan_t881159249  ___t1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThan_m2497205152 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___t10, DateTime_t3738529785  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::SpecifyKind(System.DateTime,System.DateTimeKind)
extern "C"  DateTime_t3738529785  DateTime_SpecifyKind_m3332658812 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___value0, int32_t ___kind1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Add(System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_Add_m2995894549 (DateTime_t3738529785 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Globalization.DaylightTime::get_Delta()
extern "C"  TimeSpan_t881159249  DaylightTime_get_Delta_m2355462786 (DaylightTime_t2582425773 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::Subtract(System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_Subtract_m3522513701 (DateTime_t3738529785 * __this, TimeSpan_t881159249  ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_LessThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_LessThanOrEqual_m2360948759 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___t10, DateTime_t3738529785  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTime::op_Addition(System.DateTime,System.TimeSpan)
extern "C"  DateTime_t3738529785  DateTime_op_Addition_m1857121695 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___d0, TimeSpan_t881159249  ___t1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThan(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThan_m3768590082 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___t10, DateTime_t3738529785  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTime::.ctor(System.Int64)
extern "C"  void DateTime__ctor_m516789325 (DateTime_t3738529785 * __this, int64_t ___ticks0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeZone_GetLocalTimeDiff_m1937927810 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, TimeSpan_t881159249  ___utc_offset1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTime::op_GreaterThanOrEqual(System.DateTime,System.DateTime)
extern "C"  bool DateTime_op_GreaterThanOrEqual_m674703316 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___t10, DateTime_t3738529785  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::op_Subtraction(System.TimeSpan,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeSpan_op_Subtraction_m3592306516 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  ___t10, TimeSpan_t881159249  ___t21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberInfo::.ctor()
extern "C"  void MemberInfo__ctor_m3258770133 (MemberInfo_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MemberFilter::.ctor(System.Object,System.IntPtr)
extern "C"  void MemberFilter__ctor_m1555764023 (MemberFilter_t426314064 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
extern "C"  CultureInfo_t4157843068 * CultureInfo_get_InvariantCulture_m3532445182 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.Int32,System.String,System.Int32,System.Int32,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m945110377 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, bool ___ignoreCase5, CultureInfo_t4157843068 * ___culture6, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean,System.Globalization.CultureInfo)
extern "C"  int32_t String_Compare_m1293271421 (RuntimeObject * __this /* static, unused */, String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, CultureInfo_t4157843068 * ___culture3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C"  int32_t Type_get_Attributes_m58528356 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3284996719 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsSystemType()
extern "C"  bool Type_get_IsSystemType_m624798880 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C"  bool Type_type_is_subtype_of_m1406623598 (RuntimeObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, bool ___check_interfaces2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::Equals(System.Type)
extern "C"  bool Type_Equals_m709225487 (Type_t * __this, Type_t * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C"  bool Type_EqualsInternal_m3027143100 (Type_t * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Type_internal_from_name_m1721940673 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___throwOnError1, bool ___ignoreCase2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C"  void TypeLoadException__ctor_m2362330792 (TypeLoadException_t3707937253 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C"  int32_t Type_GetTypeCodeInternal_m1968182887 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeTypeHandle::get_Value()
extern "C"  intptr_t RuntimeTypeHandle_get_Value_m1525396455 (RuntimeTypeHandle_t3027515415 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C"  Type_t * Type_internal_from_handle_m3156085815 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor()
extern "C"  void ArgumentNullException__ctor_m2751210921 (ArgumentNullException_t1615371798 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C"  bool TypeBuilder_IsAssignableTo_m547961029 (TypeBuilder_t1073948154 * __this, Type_t * ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C"  bool Type_type_is_assignable_from_m76737532 (RuntimeObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IntPtr::op_Explicit(System.IntPtr)
extern "C"  int32_t IntPtr_op_Explicit_m4220076518 (RuntimeObject * __this /* static, unused */, intptr_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m1512604930 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m3294104835 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m1195697116 (Type_t * __this, int32_t ___bindingAttr0, Binder_t2999457153 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3940880105* ___types3, ParameterModifierU5BU5D_t2943407543* ___modifiers4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor()
extern "C"  void ArrayList__ctor_m4254721275 (ArrayList_t2718874744 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MemberFilter::Invoke(System.Reflection.MemberInfo,System.Object)
extern "C"  bool MemberFilter_Invoke_m2890658112 (MemberFilter_t426314064 * __this, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor(System.String)
extern "C"  void NotSupportedException__ctor_m2494070935 (NotSupportedException_t1314879016 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
extern "C"  void ArgumentException__ctor_m1216717135 (ArgumentException_t132251570 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m1462451309 (RuntimeObject * __this /* static, unused */, Type_t * ___gt0, TypeU5BU5D_t3940880105* ___types1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.TypeLoadException::.ctor()
extern "C"  void TypeLoadException__ctor_m1802671078 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::make_byref_type()
extern "C"  Type_t * Type_make_byref_type_m1062593813 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SerializableAttribute::.ctor()
extern "C"  void SerializableAttribute__ctor_m3782985861 (SerializableAttribute_t1992588303 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.ComImportAttribute::.ctor()
extern "C"  void ComImportAttribute__ctor_m3468592294 (ComImportAttribute_t1295173782 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType()
extern "C"  Type_t * Type_GetType_m1766533001 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2034077850 (TypedReference_t1491108119 * __this, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m2046447331 (TypedReference_t1491108119 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void SystemException__ctor_m1515048899 (SystemException_t176217640 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Serialization.SerializationInfo::GetString(System.String)
extern "C"  String_t* SerializationInfo_GetString_m3155282843 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Exception_GetObjectData_m1103241326 (Exception_t * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object)
extern "C"  void SerializationInfo_AddValue_m2872281893 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String)
extern "C"  void SystemException__ctor_m3298527747 (SystemException_t176217640 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Exception::get_Message()
extern "C"  String_t* Exception_get_Message_m3320461627 (Exception_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Object,System.Type)
extern "C"  void SerializationInfo_AddValue_m3906743584 (SerializationInfo_t950877179 * __this, String_t* ___name0, RuntimeObject * ___value1, Type_t * ___type2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt16)
extern "C"  bool Convert_ToBoolean_m481380807 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt16)
extern "C"  uint8_t Convert_ToByte_m2375887898 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt16)
extern "C"  Il2CppChar Convert_ToChar_m3178343373 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt16)
extern "C"  DateTime_t3738529785  Convert_ToDateTime_m649137482 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt16)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m2858622624 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt16)
extern "C"  double Convert_ToDouble_m1840199900 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt16)
extern "C"  int16_t Convert_ToInt16_m2896657713 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt16)
extern "C"  int32_t Convert_ToInt32_m1987758323 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt16)
extern "C"  int64_t Convert_ToInt64_m1422776160 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt16)
extern "C"  int8_t Convert_ToSByte_m516918950 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt16)
extern "C"  float Convert_ToSingle_m3600812843 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Convert::ToType(System.Object,System.Type,System.IFormatProvider,System.Boolean)
extern "C"  RuntimeObject * Convert_ToType_m2406080310 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, Type_t * ___conversionType1, RuntimeObject* ___provider2, bool ___try_target_to_type3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578 (uint16_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt16)
extern "C"  uint32_t Convert_ToUInt32_m193615797 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt16)
extern "C"  uint64_t Convert_ToUInt64_m1362719450 (RuntimeObject * __this /* static, unused */, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C"  int32_t UInt16_CompareTo_m2664746316 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::Equals(System.Object)
extern "C"  bool UInt16_Equals_m642257745 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::GetHashCode()
extern "C"  int32_t UInt16_GetHashCode_m329858256 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C"  int32_t UInt16_CompareTo_m243264328 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C"  bool UInt16_Equals_m3755275785 (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint16_t UInt16_Parse_m3476925403 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint32_t UInt32_Parse_m3755665066 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt16&)
extern "C"  bool UInt16_TryParse_m3193697465 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint16_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C"  bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.Int32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1790947760 (RuntimeObject * __this /* static, unused */, int32_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m355311020 (uint16_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m3020002356 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m760649087 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt16::ToString(System.String)
extern "C"  String_t* UInt16_ToString_m3056878594 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt16,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m2529982306 (RuntimeObject * __this /* static, unused */, String_t* ___format0, uint16_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt32)
extern "C"  bool Convert_ToBoolean_m2807110707 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt32)
extern "C"  uint8_t Convert_ToByte_m1993550870 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt32)
extern "C"  Il2CppChar Convert_ToChar_m2796006345 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt32)
extern "C"  DateTime_t3738529785  Convert_ToDateTime_m1031474510 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt32)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m889385228 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt32)
extern "C"  double Convert_ToDouble_m2222536920 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt32)
extern "C"  int16_t Convert_ToInt16_m571189957 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt32)
extern "C"  int32_t Convert_ToInt32_m3956995719 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt32)
extern "C"  int64_t Convert_ToInt64_m3392013556 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt32)
extern "C"  int8_t Convert_ToSByte_m2486156346 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt32)
extern "C"  float Convert_ToSingle_m3983149863 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt32)
extern "C"  uint16_t Convert_ToUInt16_m1480956416 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
extern "C"  uint64_t Convert_ToUInt64_m1745056470 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C"  int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.Object)
extern "C"  bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::GetHashCode()
extern "C"  int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C"  int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C"  bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C"  bool Char_IsWhiteSpace_m2148390798 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Int32::GetFormatException()
extern "C"  Exception_t * Int32_GetFormatException_m519586683 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ProcessTrailingWhitespace(System.Boolean,System.String,System.Int32,System.Exception&)
extern "C"  bool Int32_ProcessTrailingWhitespace_m220059206 (RuntimeObject * __this /* static, unused */, bool ___tryParse0, String_t* ___s1, int32_t ___position2, Exception_t ** ___exc3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C"  Thread_t2300836069 * Thread_get_CurrentThread_m4142136012 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C"  CultureInfo_t4157843068 * Thread_get_CurrentCulture_m349116646 (Thread_t2300836069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::CheckStyle(System.Globalization.NumberStyles,System.Boolean,System.Exception&)
extern "C"  bool Int32_CheckStyle_m3421319992 (RuntimeObject * __this /* static, unused */, int32_t ___style0, bool ___tryParse1, Exception_t ** ___exc2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::JumpOverWhite(System.Int32&,System.String,System.Boolean,System.Boolean,System.Exception&)
extern "C"  bool Int32_JumpOverWhite_m208298144 (RuntimeObject * __this /* static, unused */, int32_t* ___pos0, String_t* ___s1, bool ___reportError2, bool ___tryParse3, Exception_t ** ___exc4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NegativeSign()
extern "C"  String_t* NumberFormatInfo_get_NegativeSign_m2757109362 (NumberFormatInfo_t435877138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_PositiveSign()
extern "C"  String_t* NumberFormatInfo_get_PositiveSign_m240350949 (NumberFormatInfo_t435877138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindSign(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&,System.Boolean&)
extern "C"  void Int32_FindSign_m3975667272 (RuntimeObject * __this /* static, unused */, int32_t* ___pos0, String_t* ___s1, NumberFormatInfo_t435877138 * ___nfi2, bool* ___foundSign3, bool* ___negative4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Int32::FindCurrency(System.Int32&,System.String,System.Globalization.NumberFormatInfo,System.Boolean&)
extern "C"  void Int32_FindCurrency_m3541026887 (RuntimeObject * __this /* static, unused */, int32_t* ___pos0, String_t* ___s1, NumberFormatInfo_t435877138 * ___nfi2, bool* ___foundCurrency3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::ValidDigit(System.Char,System.Boolean)
extern "C"  bool Int32_ValidDigit_m1059003769 (RuntimeObject * __this /* static, unused */, Il2CppChar ___e0, bool ___allowHex1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberGroupSeparator()
extern "C"  String_t* NumberFormatInfo_get_NumberGroupSeparator_m3292795925 (NumberFormatInfo_t435877138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int32::FindOther(System.Int32&,System.String,System.String)
extern "C"  bool Int32_FindOther_m3593812441 (RuntimeObject * __this /* static, unused */, int32_t* ___pos0, String_t* ___s1, String_t* ___other2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Globalization.NumberFormatInfo::get_NumberDecimalSeparator()
extern "C"  String_t* NumberFormatInfo_get_NumberDecimalSeparator_m33502788 (NumberFormatInfo_t435877138 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C"  bool Char_IsDigit_m3646673943 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
extern "C"  bool Char_IsLower_m3108076820 (RuntimeObject * __this /* static, unused */, Il2CppChar ___c0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C"  bool UInt32_Parse_m197815874 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___tryParse1, uint32_t* ___result2, Exception_t ** ___exc3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C"  bool UInt32_Parse_m2778221109 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint32_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m400339820 (RuntimeObject * __this /* static, unused */, uint32_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String)
extern "C"  String_t* UInt32_ToString_m2066897296 (uint32_t* __this, String_t* ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt32,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m264078176 (RuntimeObject * __this /* static, unused */, String_t* ___format0, uint32_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Convert::ToBoolean(System.UInt64)
extern "C"  bool Convert_ToBoolean_m3613483153 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Convert::ToByte(System.UInt64)
extern "C"  uint8_t Convert_ToByte_m3567528984 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.Convert::ToChar(System.UInt64)
extern "C"  Il2CppChar Convert_ToChar_m1604365259 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Convert::ToDateTime(System.UInt64)
extern "C"  DateTime_t3738529785  Convert_ToDateTime_m3752463692 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Convert::ToDecimal(System.UInt64)
extern "C"  Decimal_t2948259380  Convert_ToDecimal_m1695757674 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.Convert::ToDouble(System.UInt64)
extern "C"  double Convert_ToDouble_m1030895834 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Convert::ToInt16(System.UInt64)
extern "C"  int16_t Convert_ToInt16_m1733792763 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Convert::ToInt32(System.UInt64)
extern "C"  int32_t Convert_ToInt32_m825155517 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Convert::ToInt64(System.UInt64)
extern "C"  int64_t Convert_ToInt64_m260173354 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Convert::ToSByte(System.UInt64)
extern "C"  int8_t Convert_ToSByte_m1679390684 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.Convert::ToSingle(System.UInt64)
extern "C"  float Convert_ToSingle_m2791508777 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Convert::ToUInt16(System.UInt64)
extern "C"  uint16_t Convert_ToUInt16_m2672597498 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Convert::ToUInt32(System.UInt64)
extern "C"  uint32_t Convert_ToUInt32_m1767593911 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C"  int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.Object)
extern "C"  bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C"  int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C"  bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint64_t UInt64_Parse_m1485858293 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C"  bool UInt64_Parse_m2329819578 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint64_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m3906556024 (RuntimeObject * __this /* static, unused */, uint64_t ___value0, RuntimeObject* ___fp1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString()
extern "C"  String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt64::ToString(System.String)
extern "C"  String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.NumberFormatter::NumberToString(System.String,System.UInt64,System.IFormatProvider)
extern "C"  String_t* NumberFormatter_NumberToString_m1906030517 (RuntimeObject * __this /* static, unused */, String_t* ___format0, uint64_t ___value1, RuntimeObject* ___fp2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.UInt64)
extern "C"  void SerializationInfo_AddValue_m2020653395 (SerializationInfo_t950877179 * __this, String_t* ___name0, uint64_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Serialization.SerializationInfo::GetInt32(System.String)
extern "C"  int32_t SerializationInfo_GetInt32_m2640574809 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Int32)
extern "C"  void SerializationInfo_AddValue_m412754688 (SerializationInfo_t950877179 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::SetType(System.Type)
extern "C"  void SerializationInfo_SetType_m3923964808 (SerializationInfo_t950877179 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Module::get_ScopeName()
extern "C"  String_t* Module_get_ScopeName_m4152486041 (Module_t2987026101 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Module::get_Assembly()
extern "C"  Assembly_t * Module_get_Assembly_m2485063752 (Module_t2987026101 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.String)
extern "C"  Assembly_t * Assembly_Load_m3487507613 (RuntimeObject * __this /* static, unused */, String_t* ___assemblyString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Assembly::GetModule(System.String)
extern "C"  Module_t2987026101 * Assembly_GetModule_m3867448062 (Assembly_t * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m654078179 (Version_t3456873960 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String[] System.String::Split(System.Char[])
extern "C"  StringU5BU5D_t1281789340* String_Split_m3646115398 (String_t* __this, CharU5BU5D_t3528271667* ___separator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int32::Parse(System.String)
extern "C"  int32_t Int32_Parse_m1033611559 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Object::Equals(System.Object,System.Object)
extern "C"  bool Object_Equals_m1397037629 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objA0, RuntimeObject * ___objB1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationInfo::GetBoolean(System.String)
extern "C"  bool SerializationInfo_GetBoolean_m1756153320 (SerializationInfo_t950877179 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.SerializationInfo::GetValue(System.String,System.Type)
extern "C"  RuntimeObject * SerializationInfo_GetValue_m42271953 (SerializationInfo_t950877179 * __this, String_t* ___name0, Type_t * ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
extern "C"  GCHandle_t3351438187  GCHandle_Alloc_m3823409740 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
extern "C"  RuntimeObject * GCHandle_get_Target_m1824973883 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::set_Target(System.Object)
extern "C"  void GCHandle_set_Target_m1341806952 (GCHandle_t3351438187 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
extern "C"  void GCHandle_Free_m1457699368 (GCHandle_t3351438187 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationInfo::AddValue(System.String,System.Boolean)
extern "C"  void SerializationInfo_AddValue_m3427199315 (SerializationInfo_t950877179 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.InteropServices.Marshal::GetLastWin32Error()
extern "C"  int32_t Marshal_GetLastWin32Error_m1272610344 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ConsoleKeyInfo::.ctor(System.Char,System.ConsoleKey,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void ConsoleKeyInfo__ctor_m535940175 (ConsoleKeyInfo_t1802691652 * __this, Il2CppChar ___keyChar0, int32_t ___key1, bool ___shift2, bool ___alt3, bool ___control4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.TimeSpan/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m1521915657 (Parser_t2112344768 * __this, String_t* ___src0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___src0;
		__this->set__src_0(L_0);
		String_t* L_1 = __this->get__src_0();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m3847582255(L_1, /*hidden argument*/NULL);
		__this->set__length_2(L_2);
		return;
	}
}
// System.Boolean System.TimeSpan/Parser::get_AtEnd()
extern "C"  bool Parser_get_AtEnd_m1379314162 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__cur_1();
		int32_t L_1 = __this->get__length_2();
		return (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.TimeSpan/Parser::ParseWhiteSpace()
extern "C"  void Parser_ParseWhiteSpace_m4032762092 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseWhiteSpace_m4032762092_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0013;
	}

IL_0005:
	{
		int32_t L_0 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
	}

IL_0013:
	{
		bool L_1 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_2 = __this->get__src_0();
		int32_t L_3 = __this->get__cur_1();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsWhiteSpace_m3213701995(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0005;
		}
	}

IL_0034:
	{
		return;
	}
}
// System.Boolean System.TimeSpan/Parser::ParseSign()
extern "C"  bool Parser_ParseSign_m2321989493 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		V_0 = (bool)0;
		bool L_0 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		String_t* L_1 = __this->get__src_0();
		int32_t L_2 = __this->get__cur_1();
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0035;
		}
	}
	{
		V_0 = (bool)1;
		int32_t L_4 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0035:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Int32 System.TimeSpan/Parser::ParseInt(System.Boolean)
extern "C"  int32_t Parser_ParseInt_m1211400632 (Parser_t2112344768 * __this, bool ___optional0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseInt_m1211400632_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		bool L_0 = ___optional0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		bool L_1 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0048;
	}

IL_001c:
	{
		int32_t L_2 = V_0;
		if (((int64_t)L_2 * (int64_t)((int32_t)10) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_2 * (int64_t)((int32_t)10) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_ParseInt_m1211400632_RuntimeMethod_var);
		String_t* L_3 = __this->get__src_0();
		int32_t L_4 = __this->get__cur_1();
		NullCheck(L_3);
		Il2CppChar L_5 = String_get_Chars_m2986988803(L_3, L_4, /*hidden argument*/NULL);
		if (((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)10))) + (int64_t)L_5 < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)10))) + (int64_t)L_5 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_ParseInt_m1211400632_RuntimeMethod_var);
		if (((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)10))), (int32_t)L_5)) - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)10))), (int32_t)L_5)) - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_ParseInt_m1211400632_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)((int32_t)10))), (int32_t)L_5)), (int32_t)((int32_t)48)));
		int32_t L_6 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0048:
	{
		bool L_8 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		String_t* L_9 = __this->get__src_0();
		int32_t L_10 = __this->get__cur_1();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsDigit_m891258618(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_001c;
		}
	}

IL_0069:
	{
		bool L_12 = ___optional0;
		if (L_12)
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_13 = V_1;
		if (L_13)
		{
			goto IL_007c;
		}
	}
	{
		__this->set_formatError_3((bool)1);
	}

IL_007c:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Boolean System.TimeSpan/Parser::ParseOptDot()
extern "C"  bool Parser_ParseOptDot_m3502077493 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		String_t* L_1 = __this->get__src_0();
		int32_t L_2 = __this->get__cur_1();
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_4 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		return (bool)1;
	}

IL_0035:
	{
		return (bool)0;
	}
}
// System.Void System.TimeSpan/Parser::ParseOptColon()
extern "C"  void Parser_ParseOptColon_m2583432228 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_003d;
		}
	}
	{
		String_t* L_1 = __this->get__src_0();
		int32_t L_2 = __this->get__cur_1();
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_4 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		goto IL_003d;
	}

IL_0036:
	{
		__this->set_formatError_3((bool)1);
	}

IL_003d:
	{
		return;
	}
}
// System.Int64 System.TimeSpan/Parser::ParseTicks()
extern "C"  int64_t Parser_ParseTicks_m4001393185 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_ParseTicks_m4001393185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	int64_t V_1 = 0;
	bool V_2 = false;
	{
		V_0 = (((int64_t)((int64_t)((int32_t)1000000))));
		V_1 = (((int64_t)((int64_t)0)));
		V_2 = (bool)0;
		goto IL_0041;
	}

IL_0011:
	{
		int64_t L_0 = V_1;
		String_t* L_1 = __this->get__src_0();
		int32_t L_2 = __this->get__cur_1();
		NullCheck(L_1);
		Il2CppChar L_3 = String_get_Chars_m2986988803(L_1, L_2, /*hidden argument*/NULL);
		int64_t L_4 = V_0;
		V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)((int32_t)48)))))), (int64_t)L_4))));
		int32_t L_5 = __this->get__cur_1();
		__this->set__cur_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int64_t L_6 = V_0;
		V_0 = ((int64_t)((int64_t)L_6/(int64_t)(((int64_t)((int64_t)((int32_t)10))))));
		V_2 = (bool)1;
	}

IL_0041:
	{
		int64_t L_7 = V_0;
		if ((((int64_t)L_7) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_006a;
		}
	}
	{
		bool L_8 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_006a;
		}
	}
	{
		String_t* L_9 = __this->get__src_0();
		int32_t L_10 = __this->get__cur_1();
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_11 = Char_IsDigit_m891258618(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_0011;
		}
	}

IL_006a:
	{
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_0077;
		}
	}
	{
		__this->set_formatError_3((bool)1);
	}

IL_0077:
	{
		int64_t L_13 = V_1;
		return L_13;
	}
}
// System.TimeSpan System.TimeSpan/Parser::Execute()
extern "C"  TimeSpan_t881159249  Parser_Execute_m1541457260 (Parser_t2112344768 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Parser_Execute_m1541457260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int64_t V_6 = 0;
	int64_t G_B18_0 = 0;
	{
		V_2 = 0;
		Parser_ParseWhiteSpace_m4032762092(__this, /*hidden argument*/NULL);
		bool L_0 = Parser_ParseSign_m2321989493(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Parser_ParseInt_m1211400632(__this, (bool)0, /*hidden argument*/NULL);
		V_1 = L_1;
		bool L_2 = Parser_ParseOptDot_m3502077493(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_3 = Parser_ParseInt_m1211400632(__this, (bool)1, /*hidden argument*/NULL);
		V_2 = L_3;
		goto IL_003e;
	}

IL_002f:
	{
		bool L_4 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_5 = V_1;
		V_2 = L_5;
		V_1 = 0;
	}

IL_003e:
	{
		Parser_ParseOptColon_m2583432228(__this, /*hidden argument*/NULL);
		int32_t L_6 = Parser_ParseInt_m1211400632(__this, (bool)1, /*hidden argument*/NULL);
		V_3 = L_6;
		Parser_ParseOptColon_m2583432228(__this, /*hidden argument*/NULL);
		int32_t L_7 = Parser_ParseInt_m1211400632(__this, (bool)1, /*hidden argument*/NULL);
		V_4 = L_7;
		bool L_8 = Parser_ParseOptDot_m3502077493(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0073;
		}
	}
	{
		int64_t L_9 = Parser_ParseTicks_m4001393185(__this, /*hidden argument*/NULL);
		V_5 = L_9;
		goto IL_0077;
	}

IL_0073:
	{
		V_5 = (((int64_t)((int64_t)0)));
	}

IL_0077:
	{
		Parser_ParseWhiteSpace_m4032762092(__this, /*hidden argument*/NULL);
		bool L_10 = Parser_get_AtEnd_m1379314162(__this, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_008f;
		}
	}
	{
		__this->set_formatError_3((bool)1);
	}

IL_008f:
	{
		int32_t L_11 = V_2;
		if ((((int32_t)L_11) > ((int32_t)((int32_t)23))))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_12 = V_3;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)59))))
		{
			goto IL_00a8;
		}
	}
	{
		int32_t L_13 = V_4;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)59))))
		{
			goto IL_00b8;
		}
	}

IL_00a8:
	{
		String_t* L_14 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3945920318, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_15 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, Parser_Execute_m1541457260_RuntimeMethod_var);
	}

IL_00b8:
	{
		bool L_16 = __this->get_formatError_3();
		if (!L_16)
		{
			goto IL_00d3;
		}
	}
	{
		String_t* L_17 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3464778576, /*hidden argument*/NULL);
		FormatException_t154580423 * L_18 = (FormatException_t154580423 *)il2cpp_codegen_object_new(FormatException_t154580423_il2cpp_TypeInfo_var);
		FormatException__ctor_m4049685996(L_18, L_17, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, Parser_Execute_m1541457260_RuntimeMethod_var);
	}

IL_00d3:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		int32_t L_21 = V_3;
		int32_t L_22 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		int64_t L_23 = TimeSpan_CalculateTicks_m1336746319(NULL /*static, unused*/, L_19, L_20, L_21, L_22, 0, /*hidden argument*/NULL);
		V_6 = L_23;
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00f3;
		}
	}
	{
		int64_t L_25 = V_6;
		if (il2cpp_codegen_check_sub_overflow((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)0)))))), (int64_t)L_25))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_Execute_m1541457260_RuntimeMethod_var);
		int64_t L_26 = V_5;
		if (il2cpp_codegen_check_sub_overflow((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)0)))))), (int64_t)L_25)), (int64_t)L_26))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_Execute_m1541457260_RuntimeMethod_var);
		G_B18_0 = ((int64_t)il2cpp_codegen_subtract((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)0)))))), (int64_t)L_25)), (int64_t)L_26));
		goto IL_00f8;
	}

IL_00f3:
	{
		int64_t L_27 = V_6;
		int64_t L_28 = V_5;
		if (il2cpp_codegen_check_add_overflow((int64_t)L_27, (int64_t)L_28))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, Parser_Execute_m1541457260_RuntimeMethod_var);
		G_B18_0 = ((int64_t)il2cpp_codegen_add((int64_t)L_27, (int64_t)L_28));
	}

IL_00f8:
	{
		V_6 = G_B18_0;
		int64_t L_29 = V_6;
		TimeSpan_t881159249  L_30;
		memset(&L_30, 0, sizeof(L_30));
		TimeSpan__ctor_m1896986612((&L_30), L_29, /*hidden argument*/NULL);
		return L_30;
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
// System.Void System.TimeZone::.ctor()
extern "C"  void TimeZone__ctor_m1831364098 (TimeZone_t2038656743 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TimeZone::.cctor()
extern "C"  void TimeZone__cctor_m798292265 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone__cctor_m798292265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->set_tz_lock_1(L_0);
		return;
	}
}
// System.TimeZone System.TimeZone::get_CurrentTimeZone()
extern "C"  TimeZone_t2038656743 * TimeZone_get_CurrentTimeZone_m2520313554 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_get_CurrentTimeZone_m2520313554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	TimeZone_t2038656743 * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		int64_t L_0 = DateTime_GetNow_m1268643815(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->get_tz_lock_1();
		V_2 = L_1;
		RuntimeObject * L_2 = V_2;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
			TimeZone_t2038656743 * L_3 = ((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->get_currentTimeZone_0();
			if (!L_3)
			{
				goto IL_002e;
			}
		}

IL_001c:
		{
			int64_t L_4 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
			int64_t L_5 = ((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->get_timezone_check_2();
			if ((((int64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_4, (int64_t)L_5))) <= ((int64_t)(((int64_t)((int64_t)((int32_t)600000000)))))))
			{
				goto IL_003f;
			}
		}

IL_002e:
		{
			int64_t L_6 = V_0;
			CurrentSystemTimeZone_t3998352255 * L_7 = (CurrentSystemTimeZone_t3998352255 *)il2cpp_codegen_object_new(CurrentSystemTimeZone_t3998352255_il2cpp_TypeInfo_var);
			CurrentSystemTimeZone__ctor_m4224169966(L_7, L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
			((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->set_currentTimeZone_0(L_7);
			int64_t L_8 = V_0;
			((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->set_timezone_check_2(L_8);
		}

IL_003f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
			TimeZone_t2038656743 * L_9 = ((TimeZone_t2038656743_StaticFields*)il2cpp_codegen_static_fields_for(TimeZone_t2038656743_il2cpp_TypeInfo_var))->get_currentTimeZone_0();
			V_1 = L_9;
			IL2CPP_LEAVE(0x51, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_2;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0051:
	{
		TimeZone_t2038656743 * L_11 = V_1;
		return L_11;
	}
}
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m2508743323 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_IsDaylightSavingTime_m2508743323_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t3738529785  L_0 = ___time0;
		int32_t L_1 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_2 = VirtFuncInvoker1< DaylightTime_t2582425773 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(TimeZone_t2038656743_il2cpp_TypeInfo_var);
		bool L_3 = TimeZone_IsDaylightSavingTime_m3100698649(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean System.TimeZone::IsDaylightSavingTime(System.DateTime,System.Globalization.DaylightTime)
extern "C"  bool TimeZone_IsDaylightSavingTime_m3100698649 (RuntimeObject * __this /* static, unused */, DateTime_t3738529785  ___time0, DaylightTime_t2582425773 * ___daylightTimes1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_IsDaylightSavingTime_m3100698649_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	DateTime_t3738529785  V_7;
	memset(&V_7, 0, sizeof(V_7));
	DateTime_t3738529785  V_8;
	memset(&V_8, 0, sizeof(V_8));
	DateTime_t3738529785  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		DaylightTime_t2582425773 * L_0 = ___daylightTimes1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral751483925, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TimeZone_IsDaylightSavingTime_m3100698649_RuntimeMethod_var);
	}

IL_0011:
	{
		DaylightTime_t2582425773 * L_2 = ___daylightTimes1;
		NullCheck(L_2);
		DateTime_t3738529785  L_3 = DaylightTime_get_Start_m2228394704(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int64_t L_4 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_5 = ___daylightTimes1;
		NullCheck(L_5);
		DateTime_t3738529785  L_6 = DaylightTime_get_End_m724819253(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		int64_t L_7 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_1), /*hidden argument*/NULL);
		if ((!(((uint64_t)L_4) == ((uint64_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)0;
	}

IL_0034:
	{
		DaylightTime_t2582425773 * L_8 = ___daylightTimes1;
		NullCheck(L_8);
		DateTime_t3738529785  L_9 = DaylightTime_get_Start_m2228394704(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		int64_t L_10 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_2), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_11 = ___daylightTimes1;
		NullCheck(L_11);
		DateTime_t3738529785  L_12 = DaylightTime_get_End_m724819253(L_11, /*hidden argument*/NULL);
		V_3 = L_12;
		int64_t L_13 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_3), /*hidden argument*/NULL);
		if ((((int64_t)L_10) >= ((int64_t)L_13)))
		{
			goto IL_0092;
		}
	}
	{
		DaylightTime_t2582425773 * L_14 = ___daylightTimes1;
		NullCheck(L_14);
		DateTime_t3738529785  L_15 = DaylightTime_get_Start_m2228394704(L_14, /*hidden argument*/NULL);
		V_4 = L_15;
		int64_t L_16 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_4), /*hidden argument*/NULL);
		int64_t L_17 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		if ((((int64_t)L_16) >= ((int64_t)L_17)))
		{
			goto IL_008d;
		}
	}
	{
		DaylightTime_t2582425773 * L_18 = ___daylightTimes1;
		NullCheck(L_18);
		DateTime_t3738529785  L_19 = DaylightTime_get_End_m724819253(L_18, /*hidden argument*/NULL);
		V_5 = L_19;
		int64_t L_20 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_5), /*hidden argument*/NULL);
		int64_t L_21 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		if ((((int64_t)L_20) <= ((int64_t)L_21)))
		{
			goto IL_008d;
		}
	}
	{
		return (bool)1;
	}

IL_008d:
	{
		goto IL_0100;
	}

IL_0092:
	{
		int32_t L_22 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_23 = ___daylightTimes1;
		NullCheck(L_23);
		DateTime_t3738529785  L_24 = DaylightTime_get_Start_m2228394704(L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		int32_t L_25 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_6), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)L_25))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_26 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_27 = ___daylightTimes1;
		NullCheck(L_27);
		DateTime_t3738529785  L_28 = DaylightTime_get_End_m724819253(L_27, /*hidden argument*/NULL);
		V_7 = L_28;
		int32_t L_29 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&V_7), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)L_29))))
		{
			goto IL_0100;
		}
	}
	{
		int64_t L_30 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_31 = ___daylightTimes1;
		NullCheck(L_31);
		DateTime_t3738529785  L_32 = DaylightTime_get_End_m724819253(L_31, /*hidden argument*/NULL);
		V_8 = L_32;
		int64_t L_33 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_8), /*hidden argument*/NULL);
		if ((((int64_t)L_30) < ((int64_t)L_33)))
		{
			goto IL_00fe;
		}
	}
	{
		int64_t L_34 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_35 = ___daylightTimes1;
		NullCheck(L_35);
		DateTime_t3738529785  L_36 = DaylightTime_get_Start_m2228394704(L_35, /*hidden argument*/NULL);
		V_9 = L_36;
		int64_t L_37 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_9), /*hidden argument*/NULL);
		if ((((int64_t)L_34) <= ((int64_t)L_37)))
		{
			goto IL_0100;
		}
	}

IL_00fe:
	{
		return (bool)1;
	}

IL_0100:
	{
		return (bool)0;
	}
}
// System.DateTime System.TimeZone::ToLocalTime(System.DateTime)
extern "C"  DateTime_t3738529785  TimeZone_ToLocalTime_m3563701919 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_ToLocalTime_m3563701919_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	DaylightTime_t2582425773 * V_2 = NULL;
	TimeSpan_t881159249  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	TimeSpan_t881159249  V_5;
	memset(&V_5, 0, sizeof(V_5));
	DateTime_t3738529785  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_000f;
		}
	}
	{
		DateTime_t3738529785  L_1 = ___time0;
		return L_1;
	}

IL_000f:
	{
		DateTime_t3738529785  L_2 = ___time0;
		TimeSpan_t881159249  L_3 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_4) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		TimeSpan_t881159249  L_6 = V_0;
		DateTime_t3738529785  L_7 = DateTime_op_Subtraction_m529926081(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		DateTime_t3738529785  L_8 = ___time0;
		bool L_9 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_10 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		DateTime_t3738529785  L_11 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_10, 2, /*hidden argument*/NULL);
		return L_11;
	}

IL_0047:
	{
		goto IL_0088;
	}

IL_004c:
	{
		int64_t L_12 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_12) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_0088;
		}
	}
	{
		int64_t L_13 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		int64_t L_14 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_15 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		V_4 = L_15;
		int64_t L_16 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&V_4), /*hidden argument*/NULL);
		if ((((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)L_14))) >= ((int64_t)L_16)))
		{
			goto IL_0088;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_17 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		DateTime_t3738529785  L_18 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_17, 2, /*hidden argument*/NULL);
		return L_18;
	}

IL_0088:
	{
		TimeSpan_t881159249  L_19 = V_0;
		DateTime_t3738529785  L_20 = DateTime_Add_m2995894549((DateTime_t3738529785 *)(&___time0), L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_22 = VirtFuncInvoker1< DaylightTime_t2582425773 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_21);
		V_2 = L_22;
		DaylightTime_t2582425773 * L_23 = V_2;
		NullCheck(L_23);
		TimeSpan_t881159249  L_24 = DaylightTime_get_Delta_m2355462786(L_23, /*hidden argument*/NULL);
		V_5 = L_24;
		int64_t L_25 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_5), /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_00bb;
		}
	}
	{
		DateTime_t3738529785  L_26 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_27 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_26, 2, /*hidden argument*/NULL);
		return L_27;
	}

IL_00bb:
	{
		DateTime_t3738529785  L_28 = V_1;
		DaylightTime_t2582425773 * L_29 = V_2;
		NullCheck(L_29);
		DateTime_t3738529785  L_30 = DaylightTime_get_End_m724819253(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_31 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_28, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00f4;
		}
	}
	{
		DaylightTime_t2582425773 * L_32 = V_2;
		NullCheck(L_32);
		DateTime_t3738529785  L_33 = DaylightTime_get_End_m724819253(L_32, /*hidden argument*/NULL);
		V_6 = L_33;
		DaylightTime_t2582425773 * L_34 = V_2;
		NullCheck(L_34);
		TimeSpan_t881159249  L_35 = DaylightTime_get_Delta_m2355462786(L_34, /*hidden argument*/NULL);
		DateTime_t3738529785  L_36 = DateTime_Subtract_m3522513701((DateTime_t3738529785 *)(&V_6), L_35, /*hidden argument*/NULL);
		DateTime_t3738529785  L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_38 = DateTime_op_LessThanOrEqual_m2360948759(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_00f4;
		}
	}
	{
		DateTime_t3738529785  L_39 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_40 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_39, 2, /*hidden argument*/NULL);
		return L_40;
	}

IL_00f4:
	{
		DateTime_t3738529785  L_41 = V_1;
		TimeSpan_t881159249  L_42 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_41);
		V_3 = L_42;
		TimeSpan_t881159249  L_43 = V_3;
		DateTime_t3738529785  L_44 = DateTime_Add_m2995894549((DateTime_t3738529785 *)(&___time0), L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_45 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_44, 2, /*hidden argument*/NULL);
		return L_45;
	}
}
// System.DateTime System.TimeZone::ToUniversalTime(System.DateTime)
extern "C"  DateTime_t3738529785  TimeZone_ToUniversalTime_m2789507578 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_ToUniversalTime_m2789507578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = DateTime_get_Kind_m2154871796((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_000f;
		}
	}
	{
		DateTime_t3738529785  L_1 = ___time0;
		return L_1;
	}

IL_000f:
	{
		DateTime_t3738529785  L_2 = ___time0;
		TimeSpan_t881159249  L_3 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_2);
		V_0 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_4) >= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_5 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		TimeSpan_t881159249  L_6 = V_0;
		DateTime_t3738529785  L_7 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		DateTime_t3738529785  L_8 = ___time0;
		bool L_9 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_10 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MaxValue_2();
		DateTime_t3738529785  L_11 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_10, 1, /*hidden argument*/NULL);
		return L_11;
	}

IL_0047:
	{
		goto IL_007c;
	}

IL_004c:
	{
		int64_t L_12 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		if ((((int64_t)L_12) <= ((int64_t)(((int64_t)((int64_t)0))))))
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_13 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		TimeSpan_t881159249  L_14 = V_0;
		DateTime_t3738529785  L_15 = DateTime_op_Addition_m1857121695(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		DateTime_t3738529785  L_16 = ___time0;
		bool L_17 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_18 = ((DateTime_t3738529785_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t3738529785_il2cpp_TypeInfo_var))->get_MinValue_3();
		DateTime_t3738529785  L_19 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_18, 1, /*hidden argument*/NULL);
		return L_19;
	}

IL_007c:
	{
		int64_t L_20 = DateTime_get_Ticks_m1550640881((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		int64_t L_21 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		DateTime_t3738529785  L_22;
		memset(&L_22, 0, sizeof(L_22));
		DateTime__ctor_m516789325((&L_22), ((int64_t)il2cpp_codegen_subtract((int64_t)L_20, (int64_t)L_21)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_23 = DateTime_SpecifyKind_m3332658812(NULL /*static, unused*/, L_22, 1, /*hidden argument*/NULL);
		return L_23;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime)
extern "C"  TimeSpan_t881159249  TimeZone_GetLocalTimeDiff_m4276408377 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, const RuntimeMethod* method)
{
	{
		DateTime_t3738529785  L_0 = ___time0;
		DateTime_t3738529785  L_1 = ___time0;
		TimeSpan_t881159249  L_2 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_1);
		TimeSpan_t881159249  L_3 = TimeZone_GetLocalTimeDiff_m1937927810(__this, L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.TimeSpan System.TimeZone::GetLocalTimeDiff(System.DateTime,System.TimeSpan)
extern "C"  TimeSpan_t881159249  TimeZone_GetLocalTimeDiff_m1937927810 (TimeZone_t2038656743 * __this, DateTime_t3738529785  ___time0, TimeSpan_t881159249  ___utc_offset1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeZone_GetLocalTimeDiff_m1937927810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DaylightTime_t2582425773 * V_0 = NULL;
	DateTime_t3738529785  V_1;
	memset(&V_1, 0, sizeof(V_1));
	TimeSpan_t881159249  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		int32_t L_0 = DateTime_get_Year_m1184003812((DateTime_t3738529785 *)(&___time0), /*hidden argument*/NULL);
		DaylightTime_t2582425773 * L_1 = VirtFuncInvoker1< DaylightTime_t2582425773 *, int32_t >::Invoke(4 /* System.Globalization.DaylightTime System.TimeZone::GetDaylightChanges(System.Int32) */, __this, L_0);
		V_0 = L_1;
		DaylightTime_t2582425773 * L_2 = V_0;
		NullCheck(L_2);
		TimeSpan_t881159249  L_3 = DaylightTime_get_Delta_m2355462786(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int64_t L_4 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_2), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		TimeSpan_t881159249  L_5 = ___utc_offset1;
		return L_5;
	}

IL_0023:
	{
		TimeSpan_t881159249  L_6 = ___utc_offset1;
		DateTime_t3738529785  L_7 = DateTime_Add_m2995894549((DateTime_t3738529785 *)(&___time0), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		DateTime_t3738529785  L_8 = V_1;
		DaylightTime_t2582425773 * L_9 = V_0;
		NullCheck(L_9);
		DateTime_t3738529785  L_10 = DaylightTime_get_End_m724819253(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_11 = DateTime_op_LessThan_m2497205152(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		DaylightTime_t2582425773 * L_12 = V_0;
		NullCheck(L_12);
		DateTime_t3738529785  L_13 = DaylightTime_get_End_m724819253(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		DaylightTime_t2582425773 * L_14 = V_0;
		NullCheck(L_14);
		TimeSpan_t881159249  L_15 = DaylightTime_get_Delta_m2355462786(L_14, /*hidden argument*/NULL);
		DateTime_t3738529785  L_16 = DateTime_Subtract_m3522513701((DateTime_t3738529785 *)(&V_3), L_15, /*hidden argument*/NULL);
		DateTime_t3738529785  L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_18 = DateTime_op_LessThanOrEqual_m2360948759(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_005e;
		}
	}
	{
		TimeSpan_t881159249  L_19 = ___utc_offset1;
		return L_19;
	}

IL_005e:
	{
		DateTime_t3738529785  L_20 = V_1;
		DaylightTime_t2582425773 * L_21 = V_0;
		NullCheck(L_21);
		DateTime_t3738529785  L_22 = DaylightTime_get_Start_m2228394704(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_23 = DateTime_op_GreaterThanOrEqual_m674703316(NULL /*static, unused*/, L_20, L_22, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_009c;
		}
	}
	{
		DaylightTime_t2582425773 * L_24 = V_0;
		NullCheck(L_24);
		DateTime_t3738529785  L_25 = DaylightTime_get_Start_m2228394704(L_24, /*hidden argument*/NULL);
		V_4 = L_25;
		DaylightTime_t2582425773 * L_26 = V_0;
		NullCheck(L_26);
		TimeSpan_t881159249  L_27 = DaylightTime_get_Delta_m2355462786(L_26, /*hidden argument*/NULL);
		DateTime_t3738529785  L_28 = DateTime_Add_m2995894549((DateTime_t3738529785 *)(&V_4), L_27, /*hidden argument*/NULL);
		DateTime_t3738529785  L_29 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		bool L_30 = DateTime_op_GreaterThan_m3768590082(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_009c;
		}
	}
	{
		TimeSpan_t881159249  L_31 = ___utc_offset1;
		DaylightTime_t2582425773 * L_32 = V_0;
		NullCheck(L_32);
		TimeSpan_t881159249  L_33 = DaylightTime_get_Delta_m2355462786(L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_34 = TimeSpan_op_Subtraction_m3592306516(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_009c:
	{
		DateTime_t3738529785  L_35 = V_1;
		TimeSpan_t881159249  L_36 = VirtFuncInvoker1< TimeSpan_t881159249 , DateTime_t3738529785  >::Invoke(5 /* System.TimeSpan System.TimeZone::GetUtcOffset(System.DateTime) */, __this, L_35);
		return L_36;
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
// System.Void System.Type::.ctor()
extern "C"  void Type__ctor_m3795799013 (Type_t * __this, const RuntimeMethod* method)
{
	{
		MemberInfo__ctor_m3258770133(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Type::.cctor()
extern "C"  void Type__cctor_m2371893800 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type__cctor_m2371893800_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_Delimiter_2(((int32_t)46));
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_EmptyTypes_3(((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)0)));
		intptr_t L_0 = (intptr_t)Type_FilterAttribute_impl_m2354619618_RuntimeMethod_var;
		MemberFilter_t426314064 * L_1 = (MemberFilter_t426314064 *)il2cpp_codegen_object_new(MemberFilter_t426314064_il2cpp_TypeInfo_var);
		MemberFilter__ctor_m1555764023(L_1, NULL, L_0, /*hidden argument*/NULL);
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_FilterAttribute_4(L_1);
		intptr_t L_2 = (intptr_t)Type_FilterName_impl_m2651733559_RuntimeMethod_var;
		MemberFilter_t426314064 * L_3 = (MemberFilter_t426314064 *)il2cpp_codegen_object_new(MemberFilter_t426314064_il2cpp_TypeInfo_var);
		MemberFilter__ctor_m1555764023(L_3, NULL, L_2, /*hidden argument*/NULL);
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_FilterName_5(L_3);
		intptr_t L_4 = (intptr_t)Type_FilterNameIgnoreCase_impl_m626688405_RuntimeMethod_var;
		MemberFilter_t426314064 * L_5 = (MemberFilter_t426314064 *)il2cpp_codegen_object_new(MemberFilter_t426314064_il2cpp_TypeInfo_var);
		MemberFilter__ctor_m1555764023(L_5, NULL, L_4, /*hidden argument*/NULL);
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_FilterNameIgnoreCase_6(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Missing_t508514592_il2cpp_TypeInfo_var);
		Missing_t508514592 * L_6 = ((Missing_t508514592_StaticFields*)il2cpp_codegen_static_fields_for(Missing_t508514592_il2cpp_TypeInfo_var))->get_Value_0();
		((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->set_Missing_7(L_6);
		return;
	}
}
// System.Boolean System.Type::FilterName_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterName_impl_m2651733559 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_FilterName_impl_m2651733559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_8 = V_0;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_14 = String_Compare_m945110377(NULL /*static, unused*/, L_8, 0, L_10, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), (bool)0, L_13, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		String_t* L_15 = V_0;
		MemberInfo_t * L_16 = ___m0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		NullCheck(L_15);
		bool L_18 = String_Equals_m2270643605(L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Boolean System.Type::FilterNameIgnoreCase_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterNameIgnoreCase_impl_m626688405 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_FilterNameIgnoreCase_impl_m626688405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var));
		String_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = String_get_Length_m3847582255(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001a;
		}
	}

IL_0018:
	{
		return (bool)0;
	}

IL_001a:
	{
		String_t* L_4 = V_0;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Il2CppChar L_7 = String_get_Chars_m2986988803(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_004f;
		}
	}
	{
		String_t* L_8 = V_0;
		MemberInfo_t * L_9 = ___m0;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		String_t* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = String_get_Length_m3847582255(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_13 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_14 = String_Compare_m945110377(NULL /*static, unused*/, L_8, 0, L_10, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)), (bool)1, L_13, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_14) == ((int32_t)0))? 1 : 0);
	}

IL_004f:
	{
		String_t* L_15 = V_0;
		MemberInfo_t * L_16 = ___m0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t4157843068_il2cpp_TypeInfo_var);
		CultureInfo_t4157843068 * L_18 = CultureInfo_get_InvariantCulture_m3532445182(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_19 = String_Compare_m1293271421(NULL /*static, unused*/, L_15, L_17, (bool)1, L_18, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Type::FilterAttribute_impl(System.Reflection.MemberInfo,System.Object)
extern "C"  bool Type_FilterAttribute_impl_m2354619618 (RuntimeObject * __this /* static, unused */, MemberInfo_t * ___m0, RuntimeObject * ___filterCriteria1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_FilterAttribute_impl_m2354619618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___filterCriteria1;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, IConvertible_t2977365677_il2cpp_TypeInfo_var)));
		int32_t L_1 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.IConvertible::ToInt32(System.IFormatProvider) */, IConvertible_t2977365677_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IConvertible_t2977365677_il2cpp_TypeInfo_var)), (RuntimeObject*)NULL);
		V_0 = L_1;
		MemberInfo_t * L_2 = ___m0;
		if (!((MethodInfo_t *)IsInstClass((RuntimeObject*)L_2, MethodInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_002c;
		}
	}
	{
		MemberInfo_t * L_3 = ___m0;
		NullCheck(((MethodInfo_t *)CastclassClass((RuntimeObject*)L_3, MethodInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(21 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_3, MethodInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_5 = V_0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_4&(int32_t)L_5))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_002c:
	{
		MemberInfo_t * L_6 = ___m0;
		if (!((FieldInfo_t *)IsInstClass((RuntimeObject*)L_6, FieldInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_004b;
		}
	}
	{
		MemberInfo_t * L_7 = ___m0;
		NullCheck(((FieldInfo_t *)CastclassClass((RuntimeObject*)L_7, FieldInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_8 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, ((FieldInfo_t *)CastclassClass((RuntimeObject*)L_7, FieldInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_9 = V_0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_8&(int32_t)L_9))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_004b:
	{
		MemberInfo_t * L_10 = ___m0;
		if (!((PropertyInfo_t *)IsInstClass((RuntimeObject*)L_10, PropertyInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_006a;
		}
	}
	{
		MemberInfo_t * L_11 = ___m0;
		NullCheck(((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_11, PropertyInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_12 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes() */, ((PropertyInfo_t *)CastclassClass((RuntimeObject*)L_11, PropertyInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_13 = V_0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_12&(int32_t)L_13))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_006a:
	{
		MemberInfo_t * L_14 = ___m0;
		if (!((EventInfo_t *)IsInstClass((RuntimeObject*)L_14, EventInfo_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0089;
		}
	}
	{
		MemberInfo_t * L_15 = ___m0;
		NullCheck(((EventInfo_t *)CastclassClass((RuntimeObject*)L_15, EventInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(15 /* System.Reflection.EventAttributes System.Reflection.EventInfo::get_Attributes() */, ((EventInfo_t *)CastclassClass((RuntimeObject*)L_15, EventInfo_t_il2cpp_TypeInfo_var)));
		int32_t L_17 = V_0;
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_16&(int32_t)L_17))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0089:
	{
		return (bool)0;
	}
}
// System.Reflection.TypeAttributes System.Type::get_Attributes()
extern "C"  int32_t Type_get_Attributes_m58528356 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = VirtFuncInvoker0< int32_t >::Invoke(74 /* System.Reflection.TypeAttributes System.Type::GetAttributeFlagsImpl() */, __this);
		return L_0;
	}
}
// System.Type System.Type::get_DeclaringType()
extern "C"  Type_t * Type_get_DeclaringType_m1898067526 (Type_t * __this, const RuntimeMethod* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.Boolean System.Type::get_HasElementType()
extern "C"  bool Type_get_HasElementType_m710151977 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(75 /* System.Boolean System.Type::HasElementTypeImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsAbstract()
extern "C"  bool Type_get_IsAbstract_m1120089130 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)128)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(76 /* System.Boolean System.Type::IsArrayImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsByRef()
extern "C"  bool Type_get_IsByRef_m1262524108 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(77 /* System.Boolean System.Type::IsByRefImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsClass()
extern "C"  bool Type_get_IsClass_m589177581 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Type_get_IsInterface_m3284996719(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		bool L_1 = Type_get_IsValueType_m3108065642(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsContextful()
extern "C"  bool Type_get_IsContextful_m1494289047 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(81 /* System.Boolean System.Type::IsContextfulImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsEnum()
extern "C"  bool Type_get_IsEnum_m208091508 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_get_IsEnum_m208091508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Enum_t4135868527_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, __this, L_1);
		return L_2;
	}
}
// System.Boolean System.Type::get_IsExplicitLayout()
extern "C"  bool Type_get_IsExplicitLayout_m1182254884 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)24)))) == ((int32_t)((int32_t)16)))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsInterface()
extern "C"  bool Type_get_IsInterface_m3284996719 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)((int32_t)32)))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsMarshalByRef()
extern "C"  bool Type_get_IsMarshalByRef_m1681525688 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::IsMarshalByRefImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsNestedPublic()
extern "C"  bool Type_get_IsNestedPublic_m1869841221 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsPointer()
extern "C"  bool Type_get_IsPointer_m4067542339 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::IsPointerImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsPrimitive()
extern "C"  bool Type_get_IsPrimitive_m1114712797 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::IsPrimitiveImpl() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsPublic()
extern "C"  bool Type_get_IsPublic_m3753422318 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)7))) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsSealed()
extern "C"  bool Type_get_IsSealed_m3543837727 (Type_t * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Type::get_IsSerializable()
extern "C"  bool Type_get_IsSerializable_m1040556850 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_get_IsSerializable_m1040556850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)8192))))
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, __this);
		V_0 = L_1;
		Type_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Type_get_IsSystemType_m624798880(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0058;
		}
	}
	{
		Type_t * L_5 = V_0;
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (Enum_t4135868527_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		bool L_8 = Type_type_is_subtype_of_m1406623598(NULL /*static, unused*/, L_5, L_7, (bool)0, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0056;
		}
	}
	{
		Type_t * L_9 = V_0;
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (Delegate_t1188392813_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		bool L_12 = Type_type_is_subtype_of_m1406623598(NULL /*static, unused*/, L_9, L_11, (bool)0, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_12));
		goto IL_0057;
	}

IL_0056:
	{
		G_B8_0 = 1;
	}

IL_0057:
	{
		return (bool)G_B8_0;
	}

IL_0058:
	{
		Type_t * L_13 = V_0;
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (Enum_t4135868527_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_13) == ((RuntimeObject*)(Type_t *)L_15)))
		{
			goto IL_0078;
		}
	}
	{
		Type_t * L_16 = V_0;
		RuntimeTypeHandle_t3027515415  L_17 = { reinterpret_cast<intptr_t> (Delegate_t1188392813_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_17, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)L_16) == ((RuntimeObject*)(Type_t *)L_18))))
		{
			goto IL_007a;
		}
	}

IL_0078:
	{
		return (bool)1;
	}

IL_007a:
	{
		Type_t * L_19 = V_0;
		NullCheck(L_19);
		Type_t * L_20 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_19);
		V_0 = L_20;
		Type_t * L_21 = V_0;
		if (L_21)
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(80 /* System.Boolean System.Type::IsValueTypeImpl() */, __this);
		return L_0;
	}
}
// System.Reflection.MemberTypes System.Type::get_MemberType()
extern "C"  int32_t Type_get_MemberType_m1631050582 (Type_t * __this, const RuntimeMethod* method)
{
	{
		return (int32_t)(((int32_t)32));
	}
}
// System.Type System.Type::get_ReflectedType()
extern "C"  Type_t * Type_get_ReflectedType_m825170767 (Type_t * __this, const RuntimeMethod* method)
{
	{
		return (Type_t *)NULL;
	}
}
// System.RuntimeTypeHandle System.Type::get_TypeHandle()
extern "C"  RuntimeTypeHandle_t3027515415  Type_get_TypeHandle_m160082026 (Type_t * __this, const RuntimeMethod* method)
{
	RuntimeTypeHandle_t3027515415  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeTypeHandle_t3027515415 ));
		RuntimeTypeHandle_t3027515415  L_0 = V_0;
		return L_0;
	}
}
// System.Boolean System.Type::Equals(System.Object)
extern "C"  bool Type_Equals_m1673304139 (Type_t * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_Equals_m1673304139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___o0;
		V_0 = ((Type_t *)IsInstClass((RuntimeObject*)L_1, Type_t_il2cpp_TypeInfo_var));
		Type_t * L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		Type_t * L_3 = V_0;
		bool L_4 = Type_Equals_m709225487(__this, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Type::Equals(System.Type)
extern "C"  bool Type_Equals_m709225487 (Type_t * __this, Type_t * ___o0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___o0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, __this);
		Type_t * L_2 = ___o0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, L_2);
		NullCheck(L_1);
		bool L_4 = Type_EqualsInternal_m3027143100(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean System.Type::EqualsInternal(System.Type)
extern "C"  bool Type_EqualsInternal_m3027143100 (Type_t * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef bool (*Type_EqualsInternal_m3027143100_ftn) (Type_t *, Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_EqualsInternal_m3027143100_ftn)mscorlib::System::Type::EqualsInternal) (__this, ___type0);
}
// System.Type System.Type::internal_from_handle(System.IntPtr)
extern "C"  Type_t * Type_internal_from_handle_m3156085815 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, const RuntimeMethod* method)
{
	typedef Type_t * (*Type_internal_from_handle_m3156085815_ftn) (intptr_t);
	using namespace il2cpp::icalls;
	return  ((Type_internal_from_handle_m3156085815_ftn)mscorlib::System::Type::internal_from_handle) (___handle0);
}
// System.Type System.Type::internal_from_name(System.String,System.Boolean,System.Boolean)
extern "C"  Type_t * Type_internal_from_name_m1721940673 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___throwOnError1, bool ___ignoreCase2, const RuntimeMethod* method)
{
	typedef Type_t * (*Type_internal_from_name_m1721940673_ftn) (String_t*, bool, bool);
	using namespace il2cpp::icalls;
	return  ((Type_internal_from_name_m1721940673_ftn)mscorlib::System::Type::internal_from_name) (___name0, ___throwOnError1, ___ignoreCase2);
}
// System.Type System.Type::GetType(System.String)
extern "C"  Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetType_m1693760368_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___typeName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral472199111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetType_m1693760368_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_internal_from_name_m1721940673(NULL /*static, unused*/, L_2, (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Type System.Type::GetType(System.String,System.Boolean)
extern "C"  Type_t * Type_GetType_m3605423543 (RuntimeObject * __this /* static, unused */, String_t* ___typeName0, bool ___throwOnError1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetType_m3605423543_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		String_t* L_0 = ___typeName0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral472199111, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetType_m3605423543_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___typeName0;
		bool L_3 = ___throwOnError1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_internal_from_name_m1721940673(NULL /*static, unused*/, L_2, L_3, (bool)0, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = ___throwOnError1;
		if (!L_5)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_6 = V_0;
		if (L_6)
		{
			goto IL_003c;
		}
	}
	{
		String_t* L_7 = ___typeName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral762456888, L_7, _stringLiteral3452614521, /*hidden argument*/NULL);
		TypeLoadException_t3707937253 * L_9 = (TypeLoadException_t3707937253 *)il2cpp_codegen_object_new(TypeLoadException_t3707937253_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m2362330792(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Type_GetType_m3605423543_RuntimeMethod_var);
	}

IL_003c:
	{
		Type_t * L_10 = V_0;
		return L_10;
	}
}
// System.TypeCode System.Type::GetTypeCodeInternal(System.Type)
extern "C"  int32_t Type_GetTypeCodeInternal_m1968182887 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*Type_GetTypeCodeInternal_m1968182887_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_GetTypeCodeInternal_m1968182887_ftn)mscorlib::System::Type::GetTypeCodeInternal) (___type0);
}
// System.TypeCode System.Type::GetTypeCode(System.Type)
extern "C"  int32_t Type_GetTypeCode_m480753082 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetTypeCode_m480753082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		if (!((MonoType_t *)IsInstClass((RuntimeObject*)L_0, MonoType_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0012;
		}
	}
	{
		Type_t * L_1 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_2 = Type_GetTypeCodeInternal_m1968182887(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0012:
	{
		Type_t * L_3 = ___type0;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001a:
	{
		Type_t * L_4 = ___type0;
		NullCheck(L_4);
		Type_t * L_5 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, L_4);
		___type0 = L_5;
		Type_t * L_6 = ___type0;
		NullCheck(L_6);
		bool L_7 = Type_get_IsSystemType_m624798880(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		return (int32_t)(1);
	}

IL_002f:
	{
		Type_t * L_8 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		int32_t L_9 = Type_GetTypeCodeInternal_m1968182887(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetTypeFromHandle_m1620074514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)(&___handle0), /*hidden argument*/NULL);
		bool L_1 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0018:
	{
		intptr_t L_2 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)(&___handle0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_internal_from_handle_m3156085815(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.RuntimeTypeHandle System.Type::GetTypeHandle(System.Object)
extern "C"  RuntimeTypeHandle_t3027515415  Type_GetTypeHandle_m1526957577 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetTypeHandle_m1526957577_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___o0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2751210921(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetTypeHandle_m1526957577_RuntimeMethod_var);
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m88164663(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeTypeHandle_t3027515415  L_4 = VirtFuncInvoker0< RuntimeTypeHandle_t3027515415  >::Invoke(38 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_3);
		return L_4;
	}
}
// System.Boolean System.Type::type_is_subtype_of(System.Type,System.Type,System.Boolean)
extern "C"  bool Type_type_is_subtype_of_m1406623598 (RuntimeObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, bool ___check_interfaces2, const RuntimeMethod* method)
{
	typedef bool (*Type_type_is_subtype_of_m1406623598_ftn) (Type_t *, Type_t *, bool);
	using namespace il2cpp::icalls;
	return  ((Type_type_is_subtype_of_m1406623598_ftn)mscorlib::System::Type::type_is_subtype_of) (___a0, ___b1, ___check_interfaces2);
}
// System.Boolean System.Type::type_is_assignable_from(System.Type,System.Type)
extern "C"  bool Type_type_is_assignable_from_m76737532 (RuntimeObject * __this /* static, unused */, Type_t * ___a0, Type_t * ___b1, const RuntimeMethod* method)
{
	typedef bool (*Type_type_is_assignable_from_m76737532_ftn) (Type_t *, Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_type_is_assignable_from_m76737532_ftn)mscorlib::System::Type::type_is_assignable_from) (___a0, ___b1);
}
// System.Type System.Type::GetType()
extern "C"  Type_t * Type_GetType_m1766533001 (Type_t * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean System.Type::IsSubclassOf(System.Type)
extern "C"  bool Type_IsSubclassOf_m527829736 (Type_t * __this, Type_t * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_IsSubclassOf_m527829736_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	int32_t G_B7_0 = 0;
	{
		Type_t * L_0 = ___c0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		Type_t * L_1 = ___c0;
		if ((!(((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)__this))))
		{
			goto IL_000f;
		}
	}

IL_000d:
	{
		return (bool)0;
	}

IL_000f:
	{
		bool L_2 = Type_get_IsSystemType_m624798880(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Type_t * L_3 = ___c0;
		NullCheck(L_3);
		bool L_4 = Type_get_IsSystemType_m624798880(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		Type_t * L_5 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_6 = Type_type_is_subtype_of_m1406623598(NULL /*static, unused*/, __this, L_5, (bool)0, /*hidden argument*/NULL);
		G_B7_0 = ((int32_t)(L_6));
		goto IL_0030;
	}

IL_002f:
	{
		G_B7_0 = 0;
	}

IL_0030:
	{
		return (bool)G_B7_0;
	}

IL_0031:
	{
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, __this);
		V_0 = L_7;
		goto IL_004d;
	}

IL_003d:
	{
		Type_t * L_8 = V_0;
		Type_t * L_9 = ___c0;
		if ((!(((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_9))))
		{
			goto IL_0046;
		}
	}
	{
		return (bool)1;
	}

IL_0046:
	{
		Type_t * L_10 = V_0;
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_10);
		V_0 = L_11;
	}

IL_004d:
	{
		Type_t * L_12 = V_0;
		if (L_12)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean System.Type::IsAssignableFrom(System.Type)
extern "C"  bool Type_IsAssignableFrom_m3195021585 (Type_t * __this, Type_t * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_IsAssignableFrom_m3195021585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		Type_t * L_0 = ___c0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		Type_t * L_1 = ___c0;
		bool L_2 = Type_Equals_m709225487(__this, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		return (bool)1;
	}

IL_0016:
	{
		Type_t * L_3 = ___c0;
		if (!((TypeBuilder_t1073948154 *)IsInstSealed((RuntimeObject*)L_3, TypeBuilder_t1073948154_il2cpp_TypeInfo_var)))
		{
			goto IL_002e;
		}
	}
	{
		Type_t * L_4 = ___c0;
		NullCheck(((TypeBuilder_t1073948154 *)CastclassSealed((RuntimeObject*)L_4, TypeBuilder_t1073948154_il2cpp_TypeInfo_var)));
		bool L_5 = TypeBuilder_IsAssignableTo_m547961029(((TypeBuilder_t1073948154 *)CastclassSealed((RuntimeObject*)L_4, TypeBuilder_t1073948154_il2cpp_TypeInfo_var)), __this, /*hidden argument*/NULL);
		return L_5;
	}

IL_002e:
	{
		bool L_6 = Type_get_IsSystemType_m624798880(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0055;
		}
	}
	{
		Type_t * L_7 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, __this);
		V_0 = L_7;
		Type_t * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = Type_get_IsSystemType_m624798880(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		Type_t * L_10 = V_0;
		Type_t * L_11 = ___c0;
		NullCheck(L_10);
		bool L_12 = VirtFuncInvoker1< bool, Type_t * >::Invoke(44 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_10, L_11);
		return L_12;
	}

IL_0055:
	{
		Type_t * L_13 = ___c0;
		NullCheck(L_13);
		bool L_14 = Type_get_IsSystemType_m624798880(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_007c;
		}
	}
	{
		Type_t * L_15 = ___c0;
		NullCheck(L_15);
		Type_t * L_16 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, L_15);
		V_1 = L_16;
		Type_t * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = Type_get_IsSystemType_m624798880(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0074;
		}
	}
	{
		return (bool)0;
	}

IL_0074:
	{
		Type_t * L_19 = V_1;
		bool L_20 = VirtFuncInvoker1< bool, Type_t * >::Invoke(44 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, __this, L_19);
		return L_20;
	}

IL_007c:
	{
		Type_t * L_21 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_22 = Type_type_is_assignable_from_m76737532(NULL /*static, unused*/, __this, L_21, /*hidden argument*/NULL);
		return L_22;
	}
}
// System.Boolean System.Type::IsInstanceOfType(System.Object)
extern "C"  bool Type_IsInstanceOfType_m2427069822 (Type_t * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	typedef bool (*Type_IsInstanceOfType_m2427069822_ftn) (Type_t *, RuntimeObject *);
	using namespace il2cpp::icalls;
	return  ((Type_IsInstanceOfType_m2427069822_ftn)mscorlib::System::Type::IsInstanceOfType) (__this, ___o0);
}
// System.Int32 System.Type::GetArrayRank()
extern "C"  int32_t Type_GetArrayRank_m276452511 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetArrayRank_m276452511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Type_GetArrayRank_m276452511_RuntimeMethod_var);
	}
}
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
extern "C"  EventInfo_t * Type_GetEvent_m1076785471 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		EventInfo_t * L_1 = VirtFuncInvoker2< EventInfo_t *, String_t*, int32_t >::Invoke(49 /* System.Reflection.EventInfo System.Type::GetEvent(System.String,System.Reflection.BindingFlags) */, __this, L_0, ((int32_t)28));
		return L_1;
	}
}
// System.Reflection.EventInfo[] System.Type::GetEvents()
extern "C"  EventInfoU5BU5D_t3237081491* Type_GetEvents_m3699430246 (Type_t * __this, const RuntimeMethod* method)
{
	{
		EventInfoU5BU5D_t3237081491* L_0 = VirtFuncInvoker1< EventInfoU5BU5D_t3237081491*, int32_t >::Invoke(51 /* System.Reflection.EventInfo[] System.Type::GetEvents(System.Reflection.BindingFlags) */, __this, ((int32_t)28));
		return L_0;
	}
}
// System.Reflection.FieldInfo System.Type::GetField(System.String)
extern "C"  FieldInfo_t * Type_GetField_m2961003358 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		FieldInfo_t * L_1 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(53 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, __this, L_0, ((int32_t)28));
		return L_1;
	}
}
// System.Int32 System.Type::GetHashCode()
extern "C"  int32_t Type_GetHashCode_m1947148725 (Type_t * __this, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, __this);
		V_0 = L_0;
		Type_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_2 = V_0;
		if ((((RuntimeObject*)(Type_t *)L_2) == ((RuntimeObject*)(Type_t *)__this)))
		{
			goto IL_001b;
		}
	}
	{
		Type_t * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_3);
		return L_4;
	}

IL_001b:
	{
		RuntimeTypeHandle_t3027515415 * L_5 = __this->get_address_of__impl_1();
		intptr_t L_6 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)L_5, /*hidden argument*/NULL);
		int32_t L_7 = IntPtr_op_Explicit_m4220076518(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.BindingFlags)
extern "C"  MemberInfoU5BU5D_t1302094432* Type_GetMember_m4146349950 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___bindingAttr1;
		MemberInfoU5BU5D_t1302094432* L_2 = VirtFuncInvoker3< MemberInfoU5BU5D_t1302094432*, String_t*, int32_t, int32_t >::Invoke(56 /* System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags) */, __this, L_0, ((int32_t)191), L_1);
		return L_2;
	}
}
// System.Reflection.MemberInfo[] System.Type::GetMember(System.String,System.Reflection.MemberTypes,System.Reflection.BindingFlags)
extern "C"  MemberInfoU5BU5D_t1302094432* Type_GetMember_m3585848834 (Type_t * __this, String_t* ___name0, int32_t ___type1, int32_t ___bindingAttr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetMember_m3585848834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetMember_m3585848834_RuntimeMethod_var);
	}

IL_0011:
	{
		int32_t L_2 = ___bindingAttr2;
		if (!((int32_t)((int32_t)L_2&(int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_3 = ___type1;
		int32_t L_4 = ___bindingAttr2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		MemberFilter_t426314064 * L_5 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_FilterNameIgnoreCase_6();
		String_t* L_6 = ___name0;
		MemberInfoU5BU5D_t1302094432* L_7 = VirtFuncInvoker4< MemberInfoU5BU5D_t1302094432*, int32_t, int32_t, MemberFilter_t426314064 *, RuntimeObject * >::Invoke(87 /* System.Reflection.MemberInfo[] System.Type::FindMembers(System.Reflection.MemberTypes,System.Reflection.BindingFlags,System.Reflection.MemberFilter,System.Object) */, __this, L_3, L_4, L_5, L_6);
		return L_7;
	}

IL_0028:
	{
		int32_t L_8 = ___type1;
		int32_t L_9 = ___bindingAttr2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		MemberFilter_t426314064 * L_10 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_FilterName_5();
		String_t* L_11 = ___name0;
		MemberInfoU5BU5D_t1302094432* L_12 = VirtFuncInvoker4< MemberInfoU5BU5D_t1302094432*, int32_t, int32_t, MemberFilter_t426314064 *, RuntimeObject * >::Invoke(87 /* System.Reflection.MemberInfo[] System.Type::FindMembers(System.Reflection.MemberTypes,System.Reflection.BindingFlags,System.Reflection.MemberFilter,System.Object) */, __this, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
extern "C"  MethodInfo_t * Type_GetMethod_m2019726356 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetMethod_m2019726356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetMethod_m2019726356_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		MethodInfo_t * L_3 = VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t2999457153 *, int32_t, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(62 /* System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_2, ((int32_t)28), (Binder_t2999457153 *)NULL, 3, (TypeU5BU5D_t3940880105*)(TypeU5BU5D_t3940880105*)NULL, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL);
		return L_3;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
extern "C"  MethodInfo_t * Type_GetMethod_m1197120913 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetMethod_m1197120913_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetMethod_m1197120913_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		int32_t L_3 = ___bindingAttr1;
		MethodInfo_t * L_4 = VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t2999457153 *, int32_t, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(62 /* System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_2, L_3, (Binder_t2999457153 *)NULL, 3, (TypeU5BU5D_t3940880105*)(TypeU5BU5D_t3940880105*)NULL, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL);
		return L_4;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Type[])
extern "C"  MethodInfo_t * Type_GetMethod_m1479779718 (Type_t * __this, String_t* ___name0, TypeU5BU5D_t3940880105* ___types1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		TypeU5BU5D_t3940880105* L_1 = ___types1;
		MethodInfo_t * L_2 = Type_GetMethod_m1512604930(__this, L_0, ((int32_t)28), (Binder_t2999457153 *)NULL, 3, L_1, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m637078096 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, TypeU5BU5D_t3940880105* ___types3, ParameterModifierU5BU5D_t2943407543* ___modifiers4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___bindingAttr1;
		Binder_t2999457153 * L_2 = ___binder2;
		TypeU5BU5D_t3940880105* L_3 = ___types3;
		ParameterModifierU5BU5D_t2943407543* L_4 = ___modifiers4;
		MethodInfo_t * L_5 = Type_GetMethod_m1512604930(__this, L_0, L_1, L_2, 3, L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethod_m1512604930 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetMethod_m1512604930_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetMethod_m1512604930_RuntimeMethod_var);
	}

IL_0011:
	{
		TypeU5BU5D_t3940880105* L_2 = ___types4;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Type_GetMethod_m1512604930_RuntimeMethod_var);
	}

IL_0023:
	{
		V_0 = 0;
		goto IL_0042;
	}

IL_002a:
	{
		TypeU5BU5D_t3940880105* L_4 = ___types4;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Type_t * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_8 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_8, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Type_GetMethod_m1512604930_RuntimeMethod_var);
	}

IL_003e:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0042:
	{
		int32_t L_10 = V_0;
		TypeU5BU5D_t3940880105* L_11 = ___types4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_12 = ___name0;
		int32_t L_13 = ___bindingAttr1;
		Binder_t2999457153 * L_14 = ___binder2;
		int32_t L_15 = ___callConvention3;
		TypeU5BU5D_t3940880105* L_16 = ___types4;
		ParameterModifierU5BU5D_t2943407543* L_17 = ___modifiers5;
		MethodInfo_t * L_18 = VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t2999457153 *, int32_t, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(62 /* System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_12, L_13, L_14, L_15, L_16, L_17);
		return L_18;
	}
}
// System.Reflection.MethodInfo System.Type::GetMethodImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  MethodInfo_t * Type_GetMethodImplInternal_m2670548906 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, int32_t ___callConvention3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___bindingAttr1;
		Binder_t2999457153 * L_2 = ___binder2;
		int32_t L_3 = ___callConvention3;
		TypeU5BU5D_t3940880105* L_4 = ___types4;
		ParameterModifierU5BU5D_t2943407543* L_5 = ___modifiers5;
		MethodInfo_t * L_6 = VirtFuncInvoker6< MethodInfo_t *, String_t*, int32_t, Binder_t2999457153 *, int32_t, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(62 /* System.Reflection.MethodInfo System.Type::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Reflection.PropertyInfo[] System.Type::GetProperties()
extern "C"  PropertyInfoU5BU5D_t1461822886* Type_GetProperties_m1538559489 (Type_t * __this, const RuntimeMethod* method)
{
	{
		PropertyInfoU5BU5D_t1461822886* L_0 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(66 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, __this, ((int32_t)28));
		return L_0;
	}
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
extern "C"  PropertyInfo_t * Type_GetProperty_m3414567179 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetProperty_m3414567179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetProperty_m3414567179_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		PropertyInfo_t * L_3 = VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t2999457153 *, Type_t *, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(72 /* System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_2, ((int32_t)28), (Binder_t2999457153 *)NULL, (Type_t *)NULL, (TypeU5BU5D_t3940880105*)(TypeU5BU5D_t3940880105*)NULL, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL);
		return L_3;
	}
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags)
extern "C"  PropertyInfo_t * Type_GetProperty_m4206634422 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetProperty_m4206634422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetProperty_m4206634422_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		int32_t L_3 = ___bindingAttr1;
		PropertyInfo_t * L_4 = VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t2999457153 *, Type_t *, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(72 /* System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_2, L_3, (Binder_t2999457153 *)NULL, (Type_t *)NULL, (TypeU5BU5D_t3940880105*)(TypeU5BU5D_t3940880105*)NULL, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL);
		return L_4;
	}
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type)
extern "C"  PropertyInfo_t * Type_GetProperty_m2732503739 (Type_t * __this, String_t* ___name0, Type_t * ___returnType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetProperty_m2732503739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetProperty_m2732503739_RuntimeMethod_var);
	}

IL_0011:
	{
		String_t* L_2 = ___name0;
		Type_t * L_3 = ___returnType1;
		PropertyInfo_t * L_4 = VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t2999457153 *, Type_t *, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(72 /* System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_2, ((int32_t)28), (Binder_t2999457153 *)NULL, L_3, (TypeU5BU5D_t3940880105*)(TypeU5BU5D_t3940880105*)NULL, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL);
		return L_4;
	}
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Type,System.Type[])
extern "C"  PropertyInfo_t * Type_GetProperty_m2258969843 (Type_t * __this, String_t* ___name0, Type_t * ___returnType1, TypeU5BU5D_t3940880105* ___types2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		Type_t * L_1 = ___returnType1;
		TypeU5BU5D_t3940880105* L_2 = ___types2;
		PropertyInfo_t * L_3 = Type_GetProperty_m3294104835(__this, L_0, ((int32_t)28), (Binder_t2999457153 *)NULL, L_1, L_2, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetProperty_m3294104835 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetProperty_m3294104835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___name0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral62725243, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetProperty_m3294104835_RuntimeMethod_var);
	}

IL_0011:
	{
		TypeU5BU5D_t3940880105* L_2 = ___types4;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Type_GetProperty_m3294104835_RuntimeMethod_var);
	}

IL_0023:
	{
		TypeU5BU5D_t3940880105* L_4 = ___types4;
		V_1 = L_4;
		V_2 = 0;
		goto IL_0046;
	}

IL_002d:
	{
		TypeU5BU5D_t3940880105* L_5 = V_1;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Type_t * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		Type_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0042;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_10 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_10, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, NULL, Type_GetProperty_m3294104835_RuntimeMethod_var);
	}

IL_0042:
	{
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_12 = V_2;
		TypeU5BU5D_t3940880105* L_13 = V_1;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_14 = ___name0;
		int32_t L_15 = ___bindingAttr1;
		Binder_t2999457153 * L_16 = ___binder2;
		Type_t * L_17 = ___returnType3;
		TypeU5BU5D_t3940880105* L_18 = ___types4;
		ParameterModifierU5BU5D_t2943407543* L_19 = ___modifiers5;
		PropertyInfo_t * L_20 = VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t2999457153 *, Type_t *, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(72 /* System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}
}
// System.Reflection.PropertyInfo System.Type::GetPropertyImplInternal(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  PropertyInfo_t * Type_GetPropertyImplInternal_m2444270063 (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, Binder_t2999457153 * ___binder2, Type_t * ___returnType3, TypeU5BU5D_t3940880105* ___types4, ParameterModifierU5BU5D_t2943407543* ___modifiers5, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		int32_t L_1 = ___bindingAttr1;
		Binder_t2999457153 * L_2 = ___binder2;
		Type_t * L_3 = ___returnType3;
		TypeU5BU5D_t3940880105* L_4 = ___types4;
		ParameterModifierU5BU5D_t2943407543* L_5 = ___modifiers5;
		PropertyInfo_t * L_6 = VirtFuncInvoker6< PropertyInfo_t *, String_t*, int32_t, Binder_t2999457153 *, Type_t *, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(72 /* System.Reflection.PropertyInfo System.Type::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean System.Type::IsArrayImpl(System.Type)
extern "C"  bool Type_IsArrayImpl_m2757480859 (RuntimeObject * __this /* static, unused */, Type_t * ___type0, const RuntimeMethod* method)
{
	typedef bool (*Type_IsArrayImpl_m2757480859_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_IsArrayImpl_m2757480859_ftn)mscorlib::System::Type::IsArrayImpl) (___type0);
}
// System.Boolean System.Type::IsValueTypeImpl()
extern "C"  bool Type_IsValueTypeImpl_m3263052508 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_IsValueTypeImpl_m3263052508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ValueType_t3640485471_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)__this) == ((RuntimeObject*)(Type_t *)L_1)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (Enum_t4135868527_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Type_t *)__this) == ((RuntimeObject*)(Type_t *)L_3))))
		{
			goto IL_0022;
		}
	}

IL_0020:
	{
		return (bool)0;
	}

IL_0022:
	{
		RuntimeTypeHandle_t3027515415  L_4 = { reinterpret_cast<intptr_t> (ValueType_t3640485471_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_5 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		bool L_6 = VirtFuncInvoker1< bool, Type_t * >::Invoke(42 /* System.Boolean System.Type::IsSubclassOf(System.Type) */, __this, L_5);
		return L_6;
	}
}
// System.Boolean System.Type::IsContextfulImpl()
extern "C"  bool Type_IsContextfulImpl_m3693603908 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_IsContextfulImpl_m3693603908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (ContextBoundObject_t1394786030_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(44 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, __this);
		return L_2;
	}
}
// System.Boolean System.Type::IsMarshalByRefImpl()
extern "C"  bool Type_IsMarshalByRefImpl_m914778231 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_IsMarshalByRefImpl_m914778231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (MarshalByRefObject_t2760389100_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker1< bool, Type_t * >::Invoke(44 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, __this);
		return L_2;
	}
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m2219014380 (Type_t * __this, TypeU5BU5D_t3940880105* ___types0, const RuntimeMethod* method)
{
	{
		TypeU5BU5D_t3940880105* L_0 = ___types0;
		ConstructorInfo_t5769829 * L_1 = Type_GetConstructor_m1195697116(__this, ((int32_t)20), (Binder_t2999457153 *)NULL, 3, L_0, (ParameterModifierU5BU5D_t2943407543*)(ParameterModifierU5BU5D_t2943407543*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m950313272 (Type_t * __this, int32_t ___bindingAttr0, Binder_t2999457153 * ___binder1, TypeU5BU5D_t3940880105* ___types2, ParameterModifierU5BU5D_t2943407543* ___modifiers3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bindingAttr0;
		Binder_t2999457153 * L_1 = ___binder1;
		TypeU5BU5D_t3940880105* L_2 = ___types2;
		ParameterModifierU5BU5D_t2943407543* L_3 = ___modifiers3;
		ConstructorInfo_t5769829 * L_4 = Type_GetConstructor_m1195697116(__this, L_0, L_1, 3, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C"  ConstructorInfo_t5769829 * Type_GetConstructor_m1195697116 (Type_t * __this, int32_t ___bindingAttr0, Binder_t2999457153 * ___binder1, int32_t ___callConvention2, TypeU5BU5D_t3940880105* ___types3, ParameterModifierU5BU5D_t2943407543* ___modifiers4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetConstructor_m1195697116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	TypeU5BU5D_t3940880105* V_1 = NULL;
	int32_t V_2 = 0;
	{
		TypeU5BU5D_t3940880105* L_0 = ___types3;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_GetConstructor_m1195697116_RuntimeMethod_var);
	}

IL_0012:
	{
		TypeU5BU5D_t3940880105* L_2 = ___types3;
		V_1 = L_2;
		V_2 = 0;
		goto IL_0035;
	}

IL_001c:
	{
		TypeU5BU5D_t3940880105* L_3 = V_1;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Type_t * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = L_6;
		Type_t * L_7 = V_0;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_8 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_8, _stringLiteral2099964717, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Type_GetConstructor_m1195697116_RuntimeMethod_var);
	}

IL_0031:
	{
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0035:
	{
		int32_t L_10 = V_2;
		TypeU5BU5D_t3940880105* L_11 = V_1;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_12 = ___bindingAttr0;
		Binder_t2999457153 * L_13 = ___binder1;
		int32_t L_14 = ___callConvention2;
		TypeU5BU5D_t3940880105* L_15 = ___types3;
		ParameterModifierU5BU5D_t2943407543* L_16 = ___modifiers4;
		ConstructorInfo_t5769829 * L_17 = VirtFuncInvoker5< ConstructorInfo_t5769829 *, int32_t, Binder_t2999457153 *, int32_t, TypeU5BU5D_t3940880105*, ParameterModifierU5BU5D_t2943407543* >::Invoke(73 /* System.Reflection.ConstructorInfo System.Type::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[]) */, __this, L_12, L_13, L_14, L_15, L_16);
		return L_17;
	}
}
// System.Reflection.MemberInfo[] System.Type::FindMembers(System.Reflection.MemberTypes,System.Reflection.BindingFlags,System.Reflection.MemberFilter,System.Object)
extern "C"  MemberInfoU5BU5D_t1302094432* Type_FindMembers_m337949280 (Type_t * __this, int32_t ___memberType0, int32_t ___bindingAttr1, MemberFilter_t426314064 * ___filter2, RuntimeObject * ___filterCriteria3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_FindMembers_m337949280_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MemberInfoU5BU5D_t1302094432* V_0 = NULL;
	ArrayList_t2718874744 * V_1 = NULL;
	MethodInfoU5BU5D_t2572182361* V_2 = NULL;
	MemberInfo_t * V_3 = NULL;
	MethodInfoU5BU5D_t2572182361* V_4 = NULL;
	int32_t V_5 = 0;
	ConstructorInfoU5BU5D_t881249896* V_6 = NULL;
	MemberInfo_t * V_7 = NULL;
	ConstructorInfoU5BU5D_t881249896* V_8 = NULL;
	int32_t V_9 = 0;
	PropertyInfoU5BU5D_t1461822886* V_10 = NULL;
	int32_t V_11 = 0;
	Type_t * V_12 = NULL;
	MemberInfo_t * V_13 = NULL;
	PropertyInfoU5BU5D_t1461822886* V_14 = NULL;
	int32_t V_15 = 0;
	EventInfoU5BU5D_t3237081491* V_16 = NULL;
	MemberInfo_t * V_17 = NULL;
	EventInfoU5BU5D_t3237081491* V_18 = NULL;
	int32_t V_19 = 0;
	FieldInfoU5BU5D_t846150980* V_20 = NULL;
	MemberInfo_t * V_21 = NULL;
	FieldInfoU5BU5D_t846150980* V_22 = NULL;
	int32_t V_23 = 0;
	TypeU5BU5D_t3940880105* V_24 = NULL;
	MemberInfo_t * V_25 = NULL;
	TypeU5BU5D_t3940880105* V_26 = NULL;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	{
		ArrayList_t2718874744 * L_0 = (ArrayList_t2718874744 *)il2cpp_codegen_object_new(ArrayList_t2718874744_il2cpp_TypeInfo_var);
		ArrayList__ctor_m4254721275(L_0, /*hidden argument*/NULL);
		V_1 = L_0;
		int32_t L_1 = ___memberType0;
		if (!((int32_t)((int32_t)L_1&(int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_2 = ___bindingAttr1;
		MethodInfoU5BU5D_t2572182361* L_3 = VirtFuncInvoker1< MethodInfoU5BU5D_t2572182361*, int32_t >::Invoke(63 /* System.Reflection.MethodInfo[] System.Type::GetMethods(System.Reflection.BindingFlags) */, __this, L_2);
		V_2 = L_3;
		MemberFilter_t426314064 * L_4 = ___filter2;
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		MethodInfoU5BU5D_t2572182361* L_5 = V_2;
		V_4 = L_5;
		V_5 = 0;
		goto IL_0049;
	}

IL_0027:
	{
		MethodInfoU5BU5D_t2572182361* L_6 = V_4;
		int32_t L_7 = V_5;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MethodInfo_t * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		MemberFilter_t426314064 * L_10 = ___filter2;
		MemberInfo_t * L_11 = V_3;
		RuntimeObject * L_12 = ___filterCriteria3;
		NullCheck(L_10);
		bool L_13 = MemberFilter_Invoke_m2890658112(L_10, L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0043;
		}
	}
	{
		ArrayList_t2718874744 * L_14 = V_1;
		MemberInfo_t * L_15 = V_3;
		NullCheck(L_14);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_14, L_15);
	}

IL_0043:
	{
		int32_t L_16 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_17 = V_5;
		MethodInfoU5BU5D_t2572182361* L_18 = V_4;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_18)->max_length)))))))
		{
			goto IL_0027;
		}
	}
	{
		goto IL_0060;
	}

IL_0059:
	{
		ArrayList_t2718874744 * L_19 = V_1;
		MethodInfoU5BU5D_t2572182361* L_20 = V_2;
		NullCheck(L_19);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_19, (RuntimeObject*)(RuntimeObject*)L_20);
	}

IL_0060:
	{
		int32_t L_21 = ___memberType0;
		if (!((int32_t)((int32_t)L_21&(int32_t)1)))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_22 = ___bindingAttr1;
		ConstructorInfoU5BU5D_t881249896* L_23 = VirtFuncInvoker1< ConstructorInfoU5BU5D_t881249896*, int32_t >::Invoke(86 /* System.Reflection.ConstructorInfo[] System.Type::GetConstructors(System.Reflection.BindingFlags) */, __this, L_22);
		V_6 = L_23;
		MemberFilter_t426314064 * L_24 = ___filter2;
		if (!L_24)
		{
			goto IL_00b8;
		}
	}
	{
		ConstructorInfoU5BU5D_t881249896* L_25 = V_6;
		V_8 = L_25;
		V_9 = 0;
		goto IL_00a8;
	}

IL_0083:
	{
		ConstructorInfoU5BU5D_t881249896* L_26 = V_8;
		int32_t L_27 = V_9;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		ConstructorInfo_t5769829 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_7 = L_29;
		MemberFilter_t426314064 * L_30 = ___filter2;
		MemberInfo_t * L_31 = V_7;
		RuntimeObject * L_32 = ___filterCriteria3;
		NullCheck(L_30);
		bool L_33 = MemberFilter_Invoke_m2890658112(L_30, L_31, L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00a2;
		}
	}
	{
		ArrayList_t2718874744 * L_34 = V_1;
		MemberInfo_t * L_35 = V_7;
		NullCheck(L_34);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_34, L_35);
	}

IL_00a2:
	{
		int32_t L_36 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00a8:
	{
		int32_t L_37 = V_9;
		ConstructorInfoU5BU5D_t881249896* L_38 = V_8;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_0083;
		}
	}
	{
		goto IL_00c0;
	}

IL_00b8:
	{
		ArrayList_t2718874744 * L_39 = V_1;
		ConstructorInfoU5BU5D_t881249896* L_40 = V_6;
		NullCheck(L_39);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_39, (RuntimeObject*)(RuntimeObject*)L_40);
	}

IL_00c0:
	{
		int32_t L_41 = ___memberType0;
		if (!((int32_t)((int32_t)L_41&(int32_t)((int32_t)16))))
		{
			goto IL_0158;
		}
	}
	{
		ArrayList_t2718874744 * L_42 = V_1;
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_42);
		V_11 = L_43;
		MemberFilter_t426314064 * L_44 = ___filter2;
		if (!L_44)
		{
			goto IL_0147;
		}
	}
	{
		V_12 = __this;
		goto IL_012e;
	}

IL_00df:
	{
		Type_t * L_45 = V_12;
		int32_t L_46 = ___bindingAttr1;
		NullCheck(L_45);
		PropertyInfoU5BU5D_t1461822886* L_47 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(66 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_45, L_46);
		V_10 = L_47;
		PropertyInfoU5BU5D_t1461822886* L_48 = V_10;
		V_14 = L_48;
		V_15 = 0;
		goto IL_011a;
	}

IL_00f5:
	{
		PropertyInfoU5BU5D_t1461822886* L_49 = V_14;
		int32_t L_50 = V_15;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		PropertyInfo_t * L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		V_13 = L_52;
		MemberFilter_t426314064 * L_53 = ___filter2;
		MemberInfo_t * L_54 = V_13;
		RuntimeObject * L_55 = ___filterCriteria3;
		NullCheck(L_53);
		bool L_56 = MemberFilter_Invoke_m2890658112(L_53, L_54, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0114;
		}
	}
	{
		ArrayList_t2718874744 * L_57 = V_1;
		MemberInfo_t * L_58 = V_13;
		NullCheck(L_57);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_57, L_58);
	}

IL_0114:
	{
		int32_t L_59 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)1));
	}

IL_011a:
	{
		int32_t L_60 = V_15;
		PropertyInfoU5BU5D_t1461822886* L_61 = V_14;
		NullCheck(L_61);
		if ((((int32_t)L_60) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_61)->max_length)))))))
		{
			goto IL_00f5;
		}
	}
	{
		Type_t * L_62 = V_12;
		NullCheck(L_62);
		Type_t * L_63 = VirtFuncInvoker0< Type_t * >::Invoke(18 /* System.Type System.Type::get_BaseType() */, L_62);
		V_12 = L_63;
	}

IL_012e:
	{
		ArrayList_t2718874744 * L_64 = V_1;
		NullCheck(L_64);
		int32_t L_65 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_64);
		int32_t L_66 = V_11;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0142;
		}
	}
	{
		Type_t * L_67 = V_12;
		if (L_67)
		{
			goto IL_00df;
		}
	}

IL_0142:
	{
		goto IL_0158;
	}

IL_0147:
	{
		int32_t L_68 = ___bindingAttr1;
		PropertyInfoU5BU5D_t1461822886* L_69 = VirtFuncInvoker1< PropertyInfoU5BU5D_t1461822886*, int32_t >::Invoke(66 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, __this, L_68);
		V_10 = L_69;
		ArrayList_t2718874744 * L_70 = V_1;
		PropertyInfoU5BU5D_t1461822886* L_71 = V_10;
		NullCheck(L_70);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_70, (RuntimeObject*)(RuntimeObject*)L_71);
	}

IL_0158:
	{
		int32_t L_72 = ___memberType0;
		if (!((int32_t)((int32_t)L_72&(int32_t)2)))
		{
			goto IL_01b8;
		}
	}
	{
		int32_t L_73 = ___bindingAttr1;
		EventInfoU5BU5D_t3237081491* L_74 = VirtFuncInvoker1< EventInfoU5BU5D_t3237081491*, int32_t >::Invoke(51 /* System.Reflection.EventInfo[] System.Type::GetEvents(System.Reflection.BindingFlags) */, __this, L_73);
		V_16 = L_74;
		MemberFilter_t426314064 * L_75 = ___filter2;
		if (!L_75)
		{
			goto IL_01b0;
		}
	}
	{
		EventInfoU5BU5D_t3237081491* L_76 = V_16;
		V_18 = L_76;
		V_19 = 0;
		goto IL_01a0;
	}

IL_017b:
	{
		EventInfoU5BU5D_t3237081491* L_77 = V_18;
		int32_t L_78 = V_19;
		NullCheck(L_77);
		int32_t L_79 = L_78;
		EventInfo_t * L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		V_17 = L_80;
		MemberFilter_t426314064 * L_81 = ___filter2;
		MemberInfo_t * L_82 = V_17;
		RuntimeObject * L_83 = ___filterCriteria3;
		NullCheck(L_81);
		bool L_84 = MemberFilter_Invoke_m2890658112(L_81, L_82, L_83, /*hidden argument*/NULL);
		if (!L_84)
		{
			goto IL_019a;
		}
	}
	{
		ArrayList_t2718874744 * L_85 = V_1;
		MemberInfo_t * L_86 = V_17;
		NullCheck(L_85);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_85, L_86);
	}

IL_019a:
	{
		int32_t L_87 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01a0:
	{
		int32_t L_88 = V_19;
		EventInfoU5BU5D_t3237081491* L_89 = V_18;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_89)->max_length)))))))
		{
			goto IL_017b;
		}
	}
	{
		goto IL_01b8;
	}

IL_01b0:
	{
		ArrayList_t2718874744 * L_90 = V_1;
		EventInfoU5BU5D_t3237081491* L_91 = V_16;
		NullCheck(L_90);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_90, (RuntimeObject*)(RuntimeObject*)L_91);
	}

IL_01b8:
	{
		int32_t L_92 = ___memberType0;
		if (!((int32_t)((int32_t)L_92&(int32_t)4)))
		{
			goto IL_0218;
		}
	}
	{
		int32_t L_93 = ___bindingAttr1;
		FieldInfoU5BU5D_t846150980* L_94 = VirtFuncInvoker1< FieldInfoU5BU5D_t846150980*, int32_t >::Invoke(54 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, __this, L_93);
		V_20 = L_94;
		MemberFilter_t426314064 * L_95 = ___filter2;
		if (!L_95)
		{
			goto IL_0210;
		}
	}
	{
		FieldInfoU5BU5D_t846150980* L_96 = V_20;
		V_22 = L_96;
		V_23 = 0;
		goto IL_0200;
	}

IL_01db:
	{
		FieldInfoU5BU5D_t846150980* L_97 = V_22;
		int32_t L_98 = V_23;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		FieldInfo_t * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		V_21 = L_100;
		MemberFilter_t426314064 * L_101 = ___filter2;
		MemberInfo_t * L_102 = V_21;
		RuntimeObject * L_103 = ___filterCriteria3;
		NullCheck(L_101);
		bool L_104 = MemberFilter_Invoke_m2890658112(L_101, L_102, L_103, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_01fa;
		}
	}
	{
		ArrayList_t2718874744 * L_105 = V_1;
		MemberInfo_t * L_106 = V_21;
		NullCheck(L_105);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_105, L_106);
	}

IL_01fa:
	{
		int32_t L_107 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)L_107, (int32_t)1));
	}

IL_0200:
	{
		int32_t L_108 = V_23;
		FieldInfoU5BU5D_t846150980* L_109 = V_22;
		NullCheck(L_109);
		if ((((int32_t)L_108) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_109)->max_length)))))))
		{
			goto IL_01db;
		}
	}
	{
		goto IL_0218;
	}

IL_0210:
	{
		ArrayList_t2718874744 * L_110 = V_1;
		FieldInfoU5BU5D_t846150980* L_111 = V_20;
		NullCheck(L_110);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_110, (RuntimeObject*)(RuntimeObject*)L_111);
	}

IL_0218:
	{
		int32_t L_112 = ___memberType0;
		if (!((int32_t)((int32_t)L_112&(int32_t)((int32_t)128))))
		{
			goto IL_027c;
		}
	}
	{
		int32_t L_113 = ___bindingAttr1;
		TypeU5BU5D_t3940880105* L_114 = VirtFuncInvoker1< TypeU5BU5D_t3940880105*, int32_t >::Invoke(64 /* System.Type[] System.Type::GetNestedTypes(System.Reflection.BindingFlags) */, __this, L_113);
		V_24 = L_114;
		MemberFilter_t426314064 * L_115 = ___filter2;
		if (!L_115)
		{
			goto IL_0274;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_116 = V_24;
		V_26 = L_116;
		V_27 = 0;
		goto IL_0264;
	}

IL_023f:
	{
		TypeU5BU5D_t3940880105* L_117 = V_26;
		int32_t L_118 = V_27;
		NullCheck(L_117);
		int32_t L_119 = L_118;
		Type_t * L_120 = (L_117)->GetAt(static_cast<il2cpp_array_size_t>(L_119));
		V_25 = L_120;
		MemberFilter_t426314064 * L_121 = ___filter2;
		MemberInfo_t * L_122 = V_25;
		RuntimeObject * L_123 = ___filterCriteria3;
		NullCheck(L_121);
		bool L_124 = MemberFilter_Invoke_m2890658112(L_121, L_122, L_123, /*hidden argument*/NULL);
		if (!L_124)
		{
			goto IL_025e;
		}
	}
	{
		ArrayList_t2718874744 * L_125 = V_1;
		MemberInfo_t * L_126 = V_25;
		NullCheck(L_125);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_125, L_126);
	}

IL_025e:
	{
		int32_t L_127 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add((int32_t)L_127, (int32_t)1));
	}

IL_0264:
	{
		int32_t L_128 = V_27;
		TypeU5BU5D_t3940880105* L_129 = V_26;
		NullCheck(L_129);
		if ((((int32_t)L_128) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_129)->max_length)))))))
		{
			goto IL_023f;
		}
	}
	{
		goto IL_027c;
	}

IL_0274:
	{
		ArrayList_t2718874744 * L_130 = V_1;
		TypeU5BU5D_t3940880105* L_131 = V_24;
		NullCheck(L_130);
		VirtActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection) */, L_130, (RuntimeObject*)(RuntimeObject*)L_131);
	}

IL_027c:
	{
		int32_t L_132 = ___memberType0;
		V_28 = L_132;
		int32_t L_133 = V_28;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_133, (int32_t)1)))
		{
			case 0:
			{
				goto IL_02cb;
			}
			case 1:
			{
				goto IL_02dc;
			}
			case 2:
			{
				goto IL_02a8;
			}
			case 3:
			{
				goto IL_02ed;
			}
			case 4:
			{
				goto IL_02a8;
			}
			case 5:
			{
				goto IL_02a8;
			}
			case 6:
			{
				goto IL_02a8;
			}
			case 7:
			{
				goto IL_02fe;
			}
		}
	}

IL_02a8:
	{
		int32_t L_134 = V_28;
		if ((((int32_t)L_134) == ((int32_t)((int32_t)16))))
		{
			goto IL_0320;
		}
	}
	{
		int32_t L_135 = V_28;
		if ((((int32_t)L_135) == ((int32_t)((int32_t)32))))
		{
			goto IL_030f;
		}
	}
	{
		int32_t L_136 = V_28;
		if ((((int32_t)L_136) == ((int32_t)((int32_t)128))))
		{
			goto IL_030f;
		}
	}
	{
		goto IL_0331;
	}

IL_02cb:
	{
		ArrayList_t2718874744 * L_137 = V_1;
		NullCheck(L_137);
		int32_t L_138 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_137);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((ConstructorInfoU5BU5D_t881249896*)SZArrayNew(ConstructorInfoU5BU5D_t881249896_il2cpp_TypeInfo_var, (uint32_t)L_138));
		goto IL_0342;
	}

IL_02dc:
	{
		ArrayList_t2718874744 * L_139 = V_1;
		NullCheck(L_139);
		int32_t L_140 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_139);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((EventInfoU5BU5D_t3237081491*)SZArrayNew(EventInfoU5BU5D_t3237081491_il2cpp_TypeInfo_var, (uint32_t)L_140));
		goto IL_0342;
	}

IL_02ed:
	{
		ArrayList_t2718874744 * L_141 = V_1;
		NullCheck(L_141);
		int32_t L_142 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_141);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((FieldInfoU5BU5D_t846150980*)SZArrayNew(FieldInfoU5BU5D_t846150980_il2cpp_TypeInfo_var, (uint32_t)L_142));
		goto IL_0342;
	}

IL_02fe:
	{
		ArrayList_t2718874744 * L_143 = V_1;
		NullCheck(L_143);
		int32_t L_144 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_143);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((MethodInfoU5BU5D_t2572182361*)SZArrayNew(MethodInfoU5BU5D_t2572182361_il2cpp_TypeInfo_var, (uint32_t)L_144));
		goto IL_0342;
	}

IL_030f:
	{
		ArrayList_t2718874744 * L_145 = V_1;
		NullCheck(L_145);
		int32_t L_146 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_145);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)L_146));
		goto IL_0342;
	}

IL_0320:
	{
		ArrayList_t2718874744 * L_147 = V_1;
		NullCheck(L_147);
		int32_t L_148 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_147);
		V_0 = (MemberInfoU5BU5D_t1302094432*)((PropertyInfoU5BU5D_t1461822886*)SZArrayNew(PropertyInfoU5BU5D_t1461822886_il2cpp_TypeInfo_var, (uint32_t)L_148));
		goto IL_0342;
	}

IL_0331:
	{
		ArrayList_t2718874744 * L_149 = V_1;
		NullCheck(L_149);
		int32_t L_150 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_149);
		V_0 = ((MemberInfoU5BU5D_t1302094432*)SZArrayNew(MemberInfoU5BU5D_t1302094432_il2cpp_TypeInfo_var, (uint32_t)L_150));
		goto IL_0342;
	}

IL_0342:
	{
		ArrayList_t2718874744 * L_151 = V_1;
		MemberInfoU5BU5D_t1302094432* L_152 = V_0;
		NullCheck(L_151);
		VirtActionInvoker1< RuntimeArray * >::Invoke(40 /* System.Void System.Collections.ArrayList::CopyTo(System.Array) */, L_151, (RuntimeArray *)(RuntimeArray *)L_152);
		MemberInfoU5BU5D_t1302094432* L_153 = V_0;
		return L_153;
	}
}
// System.String System.Type::ToString()
extern "C"  String_t* Type_ToString_m3975981286 (Type_t * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, __this);
		return L_0;
	}
}
// System.Boolean System.Type::get_IsSystemType()
extern "C"  bool Type_get_IsSystemType_m624798880 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_get_IsSystemType_m624798880_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415 * L_0 = __this->get_address_of__impl_1();
		intptr_t L_1 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Type[] System.Type::GetGenericArguments()
extern "C"  TypeU5BU5D_t3940880105* Type_GetGenericArguments_m3500465462 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetGenericArguments_m3500465462_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Type_GetGenericArguments_m3500465462_RuntimeMethod_var);
	}
}
// System.Boolean System.Type::get_ContainsGenericParameters()
extern "C"  bool Type_get_ContainsGenericParameters_m3456799426 (Type_t * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Type::get_IsGenericTypeDefinition()
extern "C"  bool Type_get_IsGenericTypeDefinition_m1202066969 (Type_t * __this, const RuntimeMethod* method)
{
	typedef bool (*Type_get_IsGenericTypeDefinition_m1202066969_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_get_IsGenericTypeDefinition_m1202066969_ftn)mscorlib::System::Type::get_IsGenericTypeDefinition) (__this);
}
// System.Type System.Type::GetGenericTypeDefinition_impl()
extern "C"  Type_t * Type_GetGenericTypeDefinition_impl_m1429894432 (Type_t * __this, const RuntimeMethod* method)
{
	typedef Type_t * (*Type_GetGenericTypeDefinition_impl_m1429894432_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_GetGenericTypeDefinition_impl_m1429894432_ftn)mscorlib::System::Type::GetGenericTypeDefinition_impl) (__this);
}
// System.Type System.Type::GetGenericTypeDefinition()
extern "C"  Type_t * Type_GetGenericTypeDefinition_m639345035 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetGenericTypeDefinition_m639345035_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_0, _stringLiteral2898917524, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, Type_GetGenericTypeDefinition_m639345035_RuntimeMethod_var);
	}
}
// System.Boolean System.Type::get_IsGenericType()
extern "C"  bool Type_get_IsGenericType_m3396650057 (Type_t * __this, const RuntimeMethod* method)
{
	typedef bool (*Type_get_IsGenericType_m3396650057_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_get_IsGenericType_m3396650057_ftn)mscorlib::System::Type::get_IsGenericType) (__this);
}
// System.Type System.Type::MakeGenericType(System.Type,System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m1462451309 (RuntimeObject * __this /* static, unused */, Type_t * ___gt0, TypeU5BU5D_t3940880105* ___types1, const RuntimeMethod* method)
{
	typedef Type_t * (*Type_MakeGenericType_m1462451309_ftn) (Type_t *, TypeU5BU5D_t3940880105*);
	using namespace il2cpp::icalls;
	return  ((Type_MakeGenericType_m1462451309_ftn)mscorlib::System::Type::MakeGenericType) (___gt0, ___types1);
}
// System.Type System.Type::MakeGenericType(System.Type[])
extern "C"  Type_t * Type_MakeGenericType_m2479309691 (Type_t * __this, TypeU5BU5D_t3940880105* ___typeArguments0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_MakeGenericType_m2479309691_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t3940880105* V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	Type_t * V_3 = NULL;
	{
		bool L_0 = VirtFuncInvoker0< bool >::Invoke(91 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, __this);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral2824465119, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_0016:
	{
		TypeU5BU5D_t3940880105* L_2 = ___typeArguments0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral2011460800, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_0027:
	{
		TypeU5BU5D_t3940880105* L_4 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(89 /* System.Type[] System.Type::GetGenericArguments() */, __this);
		NullCheck(L_4);
		TypeU5BU5D_t3940880105* L_5 = ___typeArguments0;
		NullCheck(L_5);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0061;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_6 = VirtFuncInvoker0< TypeU5BU5D_t3940880105* >::Invoke(89 /* System.Type[] System.Type::GetGenericArguments() */, __this);
		NullCheck(L_6);
		int32_t L_7 = (((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length))));
		RuntimeObject * L_8 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_7);
		TypeU5BU5D_t3940880105* L_9 = ___typeArguments0;
		NullCheck(L_9);
		int32_t L_10 = (((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length))));
		RuntimeObject * L_11 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral682666061, L_8, L_11, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_13 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1216717135(L_13, L_12, _stringLiteral2011460800, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_0061:
	{
		TypeU5BU5D_t3940880105* L_14 = ___typeArguments0;
		NullCheck(L_14);
		V_0 = ((TypeU5BU5D_t3940880105*)SZArrayNew(TypeU5BU5D_t3940880105_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length))))));
		V_1 = 0;
		goto IL_00c7;
	}

IL_0071:
	{
		TypeU5BU5D_t3940880105* L_15 = ___typeArguments0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Type_t * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		Type_t * L_19 = V_2;
		if (L_19)
		{
			goto IL_0086;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_20 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_20, _stringLiteral2011460800, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_0086:
	{
		Type_t * L_21 = V_2;
		if (((EnumBuilder_t2400448213 *)IsInstSealed((RuntimeObject*)L_21, EnumBuilder_t2400448213_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		Type_t * L_22 = V_2;
		if (((TypeBuilder_t1073948154 *)IsInstSealed((RuntimeObject*)L_22, TypeBuilder_t1073948154_il2cpp_TypeInfo_var)))
		{
			goto IL_00a3;
		}
	}
	{
		Type_t * L_23 = V_2;
		NullCheck(L_23);
		Type_t * L_24 = VirtFuncInvoker0< Type_t * >::Invoke(39 /* System.Type System.Type::get_UnderlyingSystemType() */, L_23);
		V_2 = L_24;
	}

IL_00a3:
	{
		Type_t * L_25 = V_2;
		if (!L_25)
		{
			goto IL_00b4;
		}
	}
	{
		Type_t * L_26 = V_2;
		NullCheck(L_26);
		bool L_27 = Type_get_IsSystemType_m624798880(L_26, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_00bf;
		}
	}

IL_00b4:
	{
		ArgumentNullException_t1615371798 * L_28 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_28, _stringLiteral2011460800, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_00bf:
	{
		TypeU5BU5D_t3940880105* L_29 = V_0;
		int32_t L_30 = V_1;
		Type_t * L_31 = V_2;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Type_t *)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00c7:
	{
		int32_t L_33 = V_1;
		TypeU5BU5D_t3940880105* L_34 = ___typeArguments0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_0071;
		}
	}
	{
		TypeU5BU5D_t3940880105* L_35 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_MakeGenericType_m1462451309(NULL /*static, unused*/, __this, L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		Type_t * L_37 = V_3;
		if (L_37)
		{
			goto IL_00e4;
		}
	}
	{
		TypeLoadException_t3707937253 * L_38 = (TypeLoadException_t3707937253 *)il2cpp_codegen_object_new(TypeLoadException_t3707937253_il2cpp_TypeInfo_var);
		TypeLoadException__ctor_m1802671078(L_38, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_38, NULL, Type_MakeGenericType_m2479309691_RuntimeMethod_var);
	}

IL_00e4:
	{
		Type_t * L_39 = V_3;
		return L_39;
	}
}
// System.Boolean System.Type::get_IsGenericParameter()
extern "C"  bool Type_get_IsGenericParameter_m2240142090 (Type_t * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean System.Type::get_IsNested()
extern "C"  bool Type_get_IsNested_m3546087448 (Type_t * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type System.Type::get_DeclaringType() */, __this);
		return (bool)((((int32_t)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Type System.Type::make_byref_type()
extern "C"  Type_t * Type_make_byref_type_m1062593813 (Type_t * __this, const RuntimeMethod* method)
{
	typedef Type_t * (*Type_make_byref_type_m1062593813_ftn) (Type_t *);
	using namespace il2cpp::icalls;
	return  ((Type_make_byref_type_m1062593813_ftn)mscorlib::System::Type::make_byref_type) (__this);
}
// System.Type System.Type::MakeByRefType()
extern "C"  Type_t * Type_MakeByRefType_m2842224785 (Type_t * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Type_make_byref_type_m1062593813(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object[] System.Type::GetPseudoCustomAttributes()
extern "C"  ObjectU5BU5D_t2843939325* Type_GetPseudoCustomAttributes_m1069564574 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_GetPseudoCustomAttributes_m1069564574_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ObjectU5BU5D_t2843939325* V_1 = NULL;
	{
		V_0 = 0;
		int32_t L_0 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_0&(int32_t)((int32_t)8192))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1));
	}

IL_0017:
	{
		int32_t L_2 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_2&(int32_t)((int32_t)4096))))
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_4 = V_0;
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		return (ObjectU5BU5D_t2843939325*)NULL;
	}

IL_0034:
	{
		int32_t L_5 = V_0;
		V_1 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)L_5));
		V_0 = 0;
		int32_t L_6 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_6&(int32_t)((int32_t)8192))))
		{
			goto IL_005a;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_7 = V_1;
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		SerializableAttribute_t1992588303 * L_10 = (SerializableAttribute_t1992588303 *)il2cpp_codegen_object_new(SerializableAttribute_t1992588303_il2cpp_TypeInfo_var);
		SerializableAttribute__ctor_m3782985861(L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (RuntimeObject *)L_10);
	}

IL_005a:
	{
		int32_t L_11 = Type_get_Attributes_m58528356(__this, /*hidden argument*/NULL);
		if (!((int32_t)((int32_t)L_11&(int32_t)((int32_t)4096))))
		{
			goto IL_0077;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14 = L_13;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		ComImportAttribute_t1295173782 * L_15 = (ComImportAttribute_t1295173782 *)il2cpp_codegen_object_new(ComImportAttribute_t1295173782_il2cpp_TypeInfo_var);
		ComImportAttribute__ctor_m3468592294(L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject *)L_15);
	}

IL_0077:
	{
		ObjectU5BU5D_t2843939325* L_16 = V_1;
		return L_16;
	}
}
// System.Boolean System.Type::get_IsUserType()
extern "C"  bool Type_get_IsUserType_m555861786 (Type_t * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Type_get_IsUserType_m555861786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		RuntimeTypeHandle_t3027515415 * L_0 = __this->get_address_of__impl_1();
		intptr_t L_1 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		Type_t * L_3 = Type_GetType_m1766533001(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Assembly_t * L_4 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Assembly_t * L_7 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_6);
		if ((!(((RuntimeObject*)(Assembly_t *)L_4) == ((RuntimeObject*)(Assembly_t *)L_7))))
		{
			goto IL_004d;
		}
	}
	{
		Type_t * L_8 = Type_GetType_m1766533001(__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (TypeDelegator_t3617470028_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		G_B4_0 = ((((RuntimeObject*)(Type_t *)L_8) == ((RuntimeObject*)(Type_t *)L_10))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B4_0 = 1;
	}

IL_004e:
	{
		G_B6_0 = G_B4_0;
		goto IL_0051;
	}

IL_0050:
	{
		G_B6_0 = 0;
	}

IL_0051:
	{
		return (bool)G_B6_0;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.TypedReference::Equals(System.Object)
extern "C"  bool TypedReference_Equals_m2034077850 (TypedReference_t1491108119 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_Equals_m2034077850_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2303281224, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_1 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TypedReference_Equals_m2034077850_RuntimeMethod_var);
	}
}
extern "C"  bool TypedReference_Equals_m2034077850_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	TypedReference_t1491108119 * _thisAdjusted = reinterpret_cast<TypedReference_t1491108119 *>(__this + 1);
	return TypedReference_Equals_m2034077850(_thisAdjusted, ___o0, method);
}
// System.Int32 System.TypedReference::GetHashCode()
extern "C"  int32_t TypedReference_GetHashCode_m2046447331 (TypedReference_t1491108119 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedReference_GetHashCode_m2046447331_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t3027515415 * L_0 = __this->get_address_of_type_0();
		intptr_t L_1 = RuntimeTypeHandle_get_Value_m1525396455((RuntimeTypeHandle_t3027515415 *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		return 0;
	}

IL_001c:
	{
		RuntimeTypeHandle_t3027515415  L_3 = __this->get_type_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Type::GetHashCode() */, L_4);
		return L_5;
	}
}
extern "C"  int32_t TypedReference_GetHashCode_m2046447331_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	TypedReference_t1491108119 * _thisAdjusted = reinterpret_cast<TypedReference_t1491108119 *>(__this + 1);
	return TypedReference_GetHashCode_m2046447331(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.TypeInitializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeInitializationException__ctor_m3546444694 (TypeInitializationException_t2973684290 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException__ctor_m3546444694_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		String_t* L_3 = SerializationInfo_GetString_m3155282843(L_2, _stringLiteral472199111, /*hidden argument*/NULL);
		__this->set_type_name_11(L_3);
		return;
	}
}
// System.Void System.TypeInitializationException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeInitializationException_GetObjectData_m583196803 (TypeInitializationException_t2973684290 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeInitializationException_GetObjectData_m583196803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		Exception_GetObjectData_m1103241326(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		String_t* L_3 = __this->get_type_name_11();
		NullCheck(L_2);
		SerializationInfo_AddValue_m2872281893(L_2, _stringLiteral472199111, L_3, /*hidden argument*/NULL);
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
// System.Void System.TypeLoadException::.ctor()
extern "C"  void TypeLoadException__ctor_m1802671078 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m1802671078_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1191444812, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String)
extern "C"  void TypeLoadException__ctor_m2362330792 (TypeLoadException_t3707937253 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233054), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.String,System.String)
extern "C"  void TypeLoadException__ctor_m1154572625 (TypeLoadException_t3707937253 * __this, String_t* ___className0, String_t* ___assemblyName1, const RuntimeMethod* method)
{
	{
		TypeLoadException__ctor_m1802671078(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___className0;
		__this->set_className_12(L_0);
		String_t* L_1 = ___assemblyName1;
		__this->set_assemblyName_13(L_1);
		return;
	}
}
// System.Void System.TypeLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeLoadException__ctor_m3040414142 (TypeLoadException_t3707937253 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException__ctor_m3040414142_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info0;
		if (L_2)
		{
			goto IL_0019;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_3 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_3, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, TypeLoadException__ctor_m3040414142_RuntimeMethod_var);
	}

IL_0019:
	{
		SerializationInfo_t950877179 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m3155282843(L_4, _stringLiteral1447332123, /*hidden argument*/NULL);
		__this->set_className_12(L_5);
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		String_t* L_7 = SerializationInfo_GetString_m3155282843(L_6, _stringLiteral1596726042, /*hidden argument*/NULL);
		__this->set_assemblyName_13(L_7);
		return;
	}
}
// System.String System.TypeLoadException::get_Message()
extern "C"  String_t* TypeLoadException_get_Message_m2440738252 (TypeLoadException_t3707937253 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_get_Message_m2440738252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_className_12();
		if (!L_0)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_1 = __this->get_assemblyName_13();
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_2 = __this->get_assemblyName_13();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_4 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_5 = __this->get_className_12();
		String_t* L_6 = __this->get_assemblyName_13();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3913841465, L_5, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0042:
	{
		String_t* L_8 = __this->get_className_12();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3968575618, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0053:
	{
		String_t* L_10 = Exception_get_Message_m3320461627(__this, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Void System.TypeLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void TypeLoadException_GetObjectData_m2127700107 (TypeLoadException_t3707937253 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeLoadException_GetObjectData_m2127700107_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TypeLoadException_GetObjectData_m2127700107_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		StreamingContext_t3711869237  L_3 = ___context1;
		Exception_GetObjectData_m1103241326(__this, L_2, L_3, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info0;
		String_t* L_5 = __this->get_className_12();
		RuntimeTypeHandle_t3027515415  L_6 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		SerializationInfo_AddValue_m3906743584(L_4, _stringLiteral1447332123, L_5, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info0;
		String_t* L_9 = __this->get_assemblyName_13();
		RuntimeTypeHandle_t3027515415  L_10 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_11 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_AddValue_m3906743584(L_8, _stringLiteral1596726042, L_9, L_11, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_12 = ___info0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		RuntimeTypeHandle_t3027515415  L_14 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		Type_t * L_15 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		SerializationInfo_AddValue_m3906743584(L_12, _stringLiteral2099428946, L_13, L_15, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_16 = ___info0;
		int32_t L_17 = 0;
		RuntimeObject * L_18 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_17);
		RuntimeTypeHandle_t3027515415  L_19 = { reinterpret_cast<intptr_t> (Int32_t2950945753_0_0_0_var) };
		Type_t * L_20 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		NullCheck(L_16);
		SerializationInfo_AddValue_m3906743584(L_16, _stringLiteral2742360254, L_18, L_20, /*hidden argument*/NULL);
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
// System.Boolean System.UInt16::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToBoolean_m3911119012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m481380807(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt16_System_IConvertible_ToBoolean_m3911119012_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToBoolean_m3911119012(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt16::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToByte_m3185614807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m2375887898(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt16_System_IConvertible_ToByte_m3185614807_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToByte_m3185614807(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt16::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToChar_m2096055221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m3178343373(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt16_System_IConvertible_ToChar_m2096055221_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToChar_m2096055221(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt16::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDateTime_m2594768090_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = Convert_ToDateTime_m649137482(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  DateTime_t3738529785  UInt16_System_IConvertible_ToDateTime_m2594768090_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDateTime_m2594768090(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt16::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDecimal_m1320731319_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m2858622624(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt16_System_IConvertible_ToDecimal_m1320731319_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDecimal_m1320731319(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt16::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToDouble_m333121300_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m1840199900(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt16_System_IConvertible_ToDouble_m333121300_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToDouble_m333121300(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt16::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt16_m2337134904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m2896657713(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt16_System_IConvertible_ToInt16_m2337134904_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt16_m2337134904(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt32_m1950778303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m1987758323(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt16_System_IConvertible_ToInt32_m1950778303_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt32_m1950778303(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt16::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToInt64_m3635199533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m1422776160(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt16_System_IConvertible_ToInt64_m3635199533_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToInt64_m3635199533(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt16::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSByte_m2219828332_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m516918950(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt16_System_IConvertible_ToSByte_m2219828332_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSByte_m2219828332(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt16::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToSingle_m2654722405_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m3600812843(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt16_System_IConvertible_ToSingle_m2654722405_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToSingle_m2654722405(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt16::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578 (uint16_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToType_m1028622578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3252615044, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt16_System_IConvertible_ToType_m1028622578_RuntimeMethod_var);
	}

IL_0011:
	{
		uint16_t L_2 = ((uint16_t)(*((uint16_t*)__this)));
		RuntimeObject * L_3 = Box(UInt16_t2177724958_il2cpp_TypeInfo_var, &L_2);
		Type_t * L_4 = ___targetType0;
		RuntimeObject* L_5 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Convert_ToType_m2406080310(NULL /*static, unused*/, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  RuntimeObject * UInt16_System_IConvertible_ToType_m1028622578_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToType_m1028622578(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt16::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (uint16_t)(*((uint16_t*)__this));
	}
}
extern "C"  uint16_t UInt16_System_IConvertible_ToUInt16_m2455419819_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt16_m2455419819(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt16::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt32_m1074326139_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_0 = Convert_ToUInt32_m193615797(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint32_t UInt16_System_IConvertible_ToUInt32_m1074326139_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt32_m1074326139(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt16::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_System_IConvertible_ToUInt64_m424720762_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_0 = Convert_ToUInt64_m1362719450(NULL /*static, unused*/, (uint16_t)(*((uint16_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint64_t UInt16_System_IConvertible_ToUInt64_m424720762_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_System_IConvertible_ToUInt64_m424720762(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt16::CompareTo(System.Object)
extern "C"  int32_t UInt16_CompareTo_m2664746316 (uint16_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_CompareTo_m2664746316_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2608892266, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt16_CompareTo_m2664746316_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(*((uint16_t*)__this)), (int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_4, UInt16_t2177724958_il2cpp_TypeInfo_var))))));
	}
}
extern "C"  int32_t UInt16_CompareTo_m2664746316_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_m2664746316(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.Object)
extern "C"  bool UInt16_Equals_m642257745 (uint16_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Equals_m642257745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt16_t2177724958_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t2177724958_il2cpp_TypeInfo_var))))) == ((int32_t)(*((uint16_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_m642257745_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_m642257745(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt16::GetHashCode()
extern "C"  int32_t UInt16_GetHashCode_m329858256 (uint16_t* __this, const RuntimeMethod* method)
{
	{
		return (*((uint16_t*)__this));
	}
}
extern "C"  int32_t UInt16_GetHashCode_m329858256_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_GetHashCode_m329858256(_thisAdjusted, method);
}
// System.Int32 System.UInt16::CompareTo(System.UInt16)
extern "C"  int32_t UInt16_CompareTo_m243264328 (uint16_t* __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___value0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(*((uint16_t*)__this)), (int32_t)L_0));
	}
}
extern "C"  int32_t UInt16_CompareTo_m243264328_AdjustorThunk (RuntimeObject * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_CompareTo_m243264328(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt16::Equals(System.UInt16)
extern "C"  bool UInt16_Equals_m3755275785 (uint16_t* __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	{
		uint16_t L_0 = ___obj0;
		return (bool)((((int32_t)L_0) == ((int32_t)(*((uint16_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt16_Equals_m3755275785_AdjustorThunk (RuntimeObject * __this, uint16_t ___obj0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_Equals_m3755275785(_thisAdjusted, ___obj0, method);
}
// System.UInt16 System.UInt16::Parse(System.String,System.IFormatProvider)
extern "C"  uint16_t UInt16_Parse_m1613088384 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint16_t L_2 = UInt16_Parse_m3476925403(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt16 System.UInt16::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint16_t UInt16_Parse_m3476925403 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_Parse_m3476925403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		uint32_t L_3 = UInt32_Parse_m3755665066(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0024;
		}
	}
	{
		String_t* L_5 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2517860609, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_6 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, UInt16_Parse_m3476925403_RuntimeMethod_var);
	}

IL_0024:
	{
		uint32_t L_7 = V_0;
		return (uint16_t)(((int32_t)((uint16_t)L_7)));
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.UInt16&)
extern "C"  bool UInt16_TryParse_m4139137016 (RuntimeObject * __this /* static, unused */, String_t* ___s0, uint16_t* ___result1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		uint16_t* L_1 = ___result1;
		bool L_2 = UInt16_TryParse_m3193697465(NULL /*static, unused*/, L_0, 7, (RuntimeObject*)NULL, (uint16_t*)L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt16::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt16&)
extern "C"  bool UInt16_TryParse_m3193697465 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint16_t* ___result3, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint16_t* L_0 = ___result3;
		*((int16_t*)(L_0)) = (int16_t)0;
		String_t* L_1 = ___s0;
		int32_t L_2 = ___style1;
		RuntimeObject* L_3 = ___provider2;
		bool L_4 = UInt32_TryParse_m535404612(NULL /*static, unused*/, L_1, L_2, L_3, (uint32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0014;
		}
	}
	{
		return (bool)0;
	}

IL_0014:
	{
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)L_5) > ((uint32_t)((int32_t)65535)))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)0;
	}

IL_0021:
	{
		uint16_t* L_6 = ___result3;
		uint32_t L_7 = V_0;
		*((int16_t*)(L_6)) = (int16_t)(((int32_t)((uint16_t)L_7)));
		return (bool)1;
	}
}
// System.String System.UInt16::ToString()
extern "C"  String_t* UInt16_ToString_m355311020 (uint16_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_m355311020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_0 = NumberFormatter_NumberToString_m1790947760(NULL /*static, unused*/, (*((uint16_t*)__this)), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* UInt16_ToString_m355311020_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m355311020(_thisAdjusted, method);
}
// System.String System.UInt16::ToString(System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m3020002356 (uint16_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_m3020002356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m1790947760(NULL /*static, unused*/, (*((uint16_t*)__this)), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt16_ToString_m3020002356_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m3020002356(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt16::ToString(System.String)
extern "C"  String_t* UInt16_ToString_m3056878594 (uint16_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt16_ToString_m760649087((uint16_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt16_ToString_m3056878594_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m3056878594(_thisAdjusted, ___format0, method);
}
// System.String System.UInt16::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt16_ToString_m760649087 (uint16_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt16_ToString_m760649087_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m2529982306(NULL /*static, unused*/, L_0, (uint16_t)(*((uint16_t*)__this)), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt16_ToString_m760649087_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint16_t* _thisAdjusted = reinterpret_cast<uint16_t*>(__this + 1);
	return UInt16_ToString_m760649087(_thisAdjusted, ___format0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToBoolean_m1763673183_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m2807110707(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt32_System_IConvertible_ToBoolean_m1763673183_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToBoolean_m1763673183(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToByte_m4072781199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m1993550870(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt32_System_IConvertible_ToByte_m4072781199_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToByte_m4072781199(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToChar_m1873050533_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m2796006345(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt32_System_IConvertible_ToChar_m1873050533_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToChar_m1873050533(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDateTime_m2767723441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = Convert_ToDateTime_m1031474510(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  DateTime_t3738529785  UInt32_System_IConvertible_ToDateTime_m2767723441_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDateTime_m2767723441(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDecimal_m675004071_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m889385228(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt32_System_IConvertible_ToDecimal_m675004071_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDecimal_m675004071(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToDouble_m940039456_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m2222536920(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt32_System_IConvertible_ToDouble_m940039456_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToDouble_m940039456(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt16_m1659441601_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m571189957(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt32_System_IConvertible_ToInt16_m1659441601_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt16_m1659441601(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt32_m220754611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m3956995719(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt32_System_IConvertible_ToInt32_m220754611_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt32_m220754611(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToInt64_m2261037378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m3392013556(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt32_System_IConvertible_ToInt64_m2261037378_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToInt64_m2261037378(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSByte_m1061556466_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m2486156346(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt32_System_IConvertible_ToSByte_m1061556466_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSByte_m1061556466(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToSingle_m1272823424_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m3983149863(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt32_System_IConvertible_ToSingle_m1272823424_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToSingle_m1272823424(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584 (uint32_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToType_m922356584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3252615044, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt32_System_IConvertible_ToType_m922356584_RuntimeMethod_var);
	}

IL_0011:
	{
		uint32_t L_2 = ((uint32_t)(*((uint32_t*)__this)));
		RuntimeObject * L_3 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_2);
		Type_t * L_4 = ___targetType0;
		RuntimeObject* L_5 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Convert_ToType_m2406080310(NULL /*static, unused*/, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  RuntimeObject * UInt32_System_IConvertible_ToType_m922356584_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToType_m922356584(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt16_m3125657960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m1480956416(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt32_System_IConvertible_ToUInt16_m3125657960_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt16_m3125657960(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  uint32_t UInt32_System_IConvertible_ToUInt32_m1744564280_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt32_m1744564280(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_System_IConvertible_ToUInt64_m1094958903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint64_t L_0 = Convert_ToUInt64_m1745056470(NULL /*static, unused*/, (*((uint32_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint64_t UInt32_System_IConvertible_ToUInt64_m1094958903_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_System_IConvertible_ToUInt64_m1094958903(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C"  int32_t UInt32_CompareTo_m362578384 (uint32_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_CompareTo_m362578384_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3007017632, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt32_CompareTo_m362578384_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___value0;
		V_0 = ((*(uint32_t*)((uint32_t*)UnBox(L_4, UInt32_t2560061978_il2cpp_TypeInfo_var))));
		uint32_t L_5 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) == ((uint32_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		uint32_t L_6 = V_0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) < ((uint32_t)L_6))))
		{
			goto IL_0042;
		}
	}
	{
		G_B9_0 = (-1);
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
	}

IL_0043:
	{
		return G_B9_0;
	}
}
extern "C"  int32_t UInt32_CompareTo_m362578384_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m362578384(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.Object)
extern "C"  bool UInt32_Equals_m351935437 (uint32_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Equals_m351935437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt32_t2560061978_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_t2560061978_il2cpp_TypeInfo_var))))) == ((int32_t)(*((uint32_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m351935437_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m351935437(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt32::GetHashCode()
extern "C"  int32_t UInt32_GetHashCode_m3722548385 (uint32_t* __this, const RuntimeMethod* method)
{
	{
		return (*((uint32_t*)__this));
	}
}
extern "C"  int32_t UInt32_GetHashCode_m3722548385_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_GetHashCode_m3722548385(_thisAdjusted, method);
}
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C"  int32_t UInt32_CompareTo_m2218823230 (uint32_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) == ((uint32_t)L_0))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		uint32_t L_1 = ___value0;
		if ((!(((uint32_t)(*((uint32_t*)__this))) > ((uint32_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  int32_t UInt32_CompareTo_m2218823230_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_CompareTo_m2218823230(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C"  bool UInt32_Equals_m4250336581 (uint32_t* __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___obj0;
		return (bool)((((int32_t)L_0) == ((int32_t)(*((uint32_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt32_Equals_m4250336581_AdjustorThunk (RuntimeObject * __this, uint32_t ___obj0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_Equals_m4250336581(_thisAdjusted, ___obj0, method);
}
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C"  bool UInt32_Parse_m197815874 (RuntimeObject * __this /* static, unused */, String_t* ___s0, bool ___tryParse1, uint32_t* ___result2, Exception_t ** ___exc3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_m197815874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	Il2CppChar V_5 = 0x0;
	uint32_t V_6 = 0;
	{
		V_0 = 0;
		V_3 = (bool)0;
		V_4 = (bool)0;
		uint32_t* L_0 = ___result2;
		*((int32_t*)(L_0)) = (int32_t)0;
		Exception_t ** L_1 = ___exc3;
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		bool L_3 = ___tryParse1;
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Exception_t ** L_4 = ___exc3;
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3452614605, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)L_5);
	}

IL_0025:
	{
		return (bool)0;
	}

IL_0027:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		V_2 = 0;
		goto IL_0053;
	}

IL_0035:
	{
		String_t* L_8 = ___s0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m2986988803(L_8, L_9, /*hidden argument*/NULL);
		V_5 = L_10;
		Il2CppChar L_11 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_12 = Char_IsWhiteSpace_m2148390798(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_004f;
		}
	}
	{
		goto IL_005a;
	}

IL_004f:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_1;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0035;
		}
	}

IL_005a:
	{
		int32_t L_16 = V_2;
		int32_t L_17 = V_1;
		if ((!(((uint32_t)L_16) == ((uint32_t)L_17))))
		{
			goto IL_0070;
		}
	}
	{
		bool L_18 = ___tryParse1;
		if (L_18)
		{
			goto IL_006e;
		}
	}
	{
		Exception_t ** L_19 = ___exc3;
		Exception_t * L_20 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_19)) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_19), (RuntimeObject *)L_20);
	}

IL_006e:
	{
		return (bool)0;
	}

IL_0070:
	{
		String_t* L_21 = ___s0;
		int32_t L_22 = V_2;
		NullCheck(L_21);
		Il2CppChar L_23 = String_get_Chars_m2986988803(L_21, L_22, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_24 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		goto IL_009c;
	}

IL_0087:
	{
		String_t* L_25 = ___s0;
		int32_t L_26 = V_2;
		NullCheck(L_25);
		Il2CppChar L_27 = String_get_Chars_m2986988803(L_25, L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
		V_4 = (bool)1;
	}

IL_009c:
	{
		goto IL_011d;
	}

IL_00a1:
	{
		String_t* L_29 = ___s0;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		Il2CppChar L_31 = String_get_Chars_m2986988803(L_29, L_30, /*hidden argument*/NULL);
		V_5 = L_31;
		Il2CppChar L_32 = V_5;
		if ((((int32_t)L_32) < ((int32_t)((int32_t)48))))
		{
			goto IL_0109;
		}
	}
	{
		Il2CppChar L_33 = V_5;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)57))))
		{
			goto IL_0109;
		}
	}
	{
		Il2CppChar L_34 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_34, (int32_t)((int32_t)48)));
		uint32_t L_35 = V_0;
		if ((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00e1;
		}
	}
	{
		uint32_t L_36 = V_0;
		if ((!(((uint32_t)L_36) == ((uint32_t)((int32_t)429496729)))))
		{
			goto IL_00fa;
		}
	}
	{
		uint32_t L_37 = V_6;
		if ((!(((uint32_t)L_37) > ((uint32_t)5))))
		{
			goto IL_00fa;
		}
	}

IL_00e1:
	{
		bool L_38 = ___tryParse1;
		if (L_38)
		{
			goto IL_00f8;
		}
	}
	{
		Exception_t ** L_39 = ___exc3;
		String_t* L_40 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral724221676, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_41 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_41, L_40, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_39)) = (RuntimeObject *)L_41;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_39), (RuntimeObject *)L_41);
	}

IL_00f8:
	{
		return (bool)0;
	}

IL_00fa:
	{
		uint32_t L_42 = V_0;
		uint32_t L_43 = V_6;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_42, (int32_t)((int32_t)10))), (int32_t)L_43));
		V_3 = (bool)1;
		goto IL_0119;
	}

IL_0109:
	{
		bool L_44 = ___tryParse1;
		String_t* L_45 = ___s0;
		int32_t L_46 = V_2;
		Exception_t ** L_47 = ___exc3;
		bool L_48 = Int32_ProcessTrailingWhitespace_m220059206(NULL /*static, unused*/, L_44, L_45, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0119;
		}
	}
	{
		return (bool)0;
	}

IL_0119:
	{
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_011d:
	{
		int32_t L_50 = V_2;
		int32_t L_51 = V_1;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00a1;
		}
	}
	{
		bool L_52 = V_3;
		if (L_52)
		{
			goto IL_0139;
		}
	}
	{
		bool L_53 = ___tryParse1;
		if (L_53)
		{
			goto IL_0137;
		}
	}
	{
		Exception_t ** L_54 = ___exc3;
		Exception_t * L_55 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_54)) = (RuntimeObject *)L_55;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_54), (RuntimeObject *)L_55);
	}

IL_0137:
	{
		return (bool)0;
	}

IL_0139:
	{
		bool L_56 = V_4;
		if (!L_56)
		{
			goto IL_0160;
		}
	}
	{
		uint32_t L_57 = V_0;
		if ((!(((uint32_t)L_57) > ((uint32_t)0))))
		{
			goto IL_0160;
		}
	}
	{
		bool L_58 = ___tryParse1;
		if (L_58)
		{
			goto IL_015e;
		}
	}
	{
		Exception_t ** L_59 = ___exc3;
		String_t* L_60 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2024505948, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_61 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_61, L_60, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_59)) = (RuntimeObject *)L_61;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_59), (RuntimeObject *)L_61);
	}

IL_015e:
	{
		return (bool)0;
	}

IL_0160:
	{
		uint32_t* L_62 = ___result2;
		uint32_t L_63 = V_0;
		*((int32_t*)(L_62)) = (int32_t)L_63;
		return (bool)1;
	}
}
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C"  bool UInt32_Parse_m2778221109 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint32_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_m2778221109_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatInfo_t435877138 * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	uint32_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	uint32_t V_19 = 0;
	Il2CppChar V_20 = 0x0;
	uint64_t V_21 = 0;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		uint32_t* L_0 = ___result4;
		*((int32_t*)(L_0)) = (int32_t)0;
		Exception_t ** L_1 = ___exc5;
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		bool L_3 = ___tryParse3;
		if (L_3)
		{
			goto IL_0021;
		}
	}
	{
		Exception_t ** L_4 = ___exc5;
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3452614605, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)L_5);
	}

IL_0021:
	{
		return (bool)0;
	}

IL_0023:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		bool L_8 = ___tryParse3;
		if (L_8)
		{
			goto IL_003c;
		}
	}
	{
		Exception_t ** L_9 = ___exc5;
		Exception_t * L_10 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_9)) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_9), (RuntimeObject *)L_10);
	}

IL_003c:
	{
		return (bool)0;
	}

IL_003e:
	{
		V_0 = (NumberFormatInfo_t435877138 *)NULL;
		RuntimeObject* L_11 = ___provider2;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (NumberFormatInfo_t435877138_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = ___provider2;
		Type_t * L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IFormatProvider::GetFormat(System.Type) */, IFormatProvider_t2518567562_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = ((NumberFormatInfo_t435877138 *)CastclassSealed((RuntimeObject*)L_16, NumberFormatInfo_t435877138_il2cpp_TypeInfo_var));
	}

IL_005e:
	{
		NumberFormatInfo_t435877138 * L_17 = V_0;
		if (L_17)
		{
			goto IL_0074;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_18 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		CultureInfo_t4157843068 * L_19 = Thread_get_CurrentCulture_m349116646(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		NumberFormatInfo_t435877138 * L_20 = VirtFuncInvoker0< NumberFormatInfo_t435877138 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_19);
		V_0 = L_20;
	}

IL_0074:
	{
		int32_t L_21 = ___style1;
		bool L_22 = ___tryParse3;
		Exception_t ** L_23 = ___exc5;
		bool L_24 = Int32_CheckStyle_m3421319992(NULL /*static, unused*/, L_21, L_22, (Exception_t **)L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0084:
	{
		int32_t L_25 = ___style1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_26 = ___style1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)512)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_27 = ___style1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_28 = ___style1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_29 = ___style1;
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_30 = ___style1;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_31 = ___style1;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = ___style1;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_32&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_33 = ___style1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_11 = 0;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_010d;
		}
	}
	{
		String_t* L_35 = ___s0;
		bool L_36 = ___tryParse3;
		Exception_t ** L_37 = ___exc5;
		bool L_38 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_35, (bool)1, L_36, (Exception_t **)L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_010d;
		}
	}
	{
		return (bool)0;
	}

IL_010d:
	{
		V_12 = (bool)0;
		V_13 = (bool)0;
		V_14 = (bool)0;
		V_15 = (bool)0;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_01be;
		}
	}
	{
		String_t* L_40 = ___s0;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		Il2CppChar L_42 = String_get_Chars_m2986988803(L_40, L_41, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01be;
		}
	}
	{
		V_12 = (bool)1;
		V_14 = (bool)1;
		V_13 = (bool)1;
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_0158;
		}
	}
	{
		String_t* L_45 = ___s0;
		bool L_46 = ___tryParse3;
		Exception_t ** L_47 = ___exc5;
		bool L_48 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_45, (bool)1, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0158;
		}
	}
	{
		return (bool)0;
	}

IL_0158:
	{
		String_t* L_49 = ___s0;
		int32_t L_50 = V_11;
		NumberFormatInfo_t435877138 * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52 = NumberFormatInfo_get_NegativeSign_m2757109362(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m3847582255(L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_54 = String_Substring_m1610150815(L_49, L_50, L_53, /*hidden argument*/NULL);
		NumberFormatInfo_t435877138 * L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56 = NumberFormatInfo_get_NegativeSign_m2757109362(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018b;
		}
	}
	{
		bool L_58 = ___tryParse3;
		if (L_58)
		{
			goto IL_0189;
		}
	}
	{
		Exception_t ** L_59 = ___exc5;
		Exception_t * L_60 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_59)) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_59), (RuntimeObject *)L_60);
	}

IL_0189:
	{
		return (bool)0;
	}

IL_018b:
	{
		String_t* L_61 = ___s0;
		int32_t L_62 = V_11;
		NumberFormatInfo_t435877138 * L_63 = V_0;
		NullCheck(L_63);
		String_t* L_64 = NumberFormatInfo_get_PositiveSign_m240350949(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m3847582255(L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_66 = String_Substring_m1610150815(L_61, L_62, L_65, /*hidden argument*/NULL);
		NumberFormatInfo_t435877138 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = NumberFormatInfo_get_PositiveSign_m240350949(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m920492651(NULL /*static, unused*/, L_66, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01be;
		}
	}
	{
		bool L_70 = ___tryParse3;
		if (L_70)
		{
			goto IL_01bc;
		}
	}
	{
		Exception_t ** L_71 = ___exc5;
		Exception_t * L_72 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_71)) = (RuntimeObject *)L_72;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_71), (RuntimeObject *)L_72);
	}

IL_01bc:
	{
		return (bool)0;
	}

IL_01be:
	{
		bool L_73 = V_8;
		if (!L_73)
		{
			goto IL_022c;
		}
	}
	{
		bool L_74 = V_14;
		if (L_74)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_75 = ___s0;
		NumberFormatInfo_t435877138 * L_76 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_75, L_76, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_77 = V_14;
		if (!L_77)
		{
			goto IL_022c;
		}
	}
	{
		bool L_78 = V_10;
		if (!L_78)
		{
			goto IL_01fa;
		}
	}
	{
		String_t* L_79 = ___s0;
		bool L_80 = ___tryParse3;
		Exception_t ** L_81 = ___exc5;
		bool L_82 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_79, (bool)1, L_80, (Exception_t **)L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_01fa;
		}
	}
	{
		return (bool)0;
	}

IL_01fa:
	{
		bool L_83 = V_2;
		if (!L_83)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_84 = ___s0;
		NumberFormatInfo_t435877138 * L_85 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_84, L_85, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_86 = V_15;
		if (!L_86)
		{
			goto IL_022c;
		}
	}
	{
		bool L_87 = V_10;
		if (!L_87)
		{
			goto IL_022c;
		}
	}
	{
		String_t* L_88 = ___s0;
		bool L_89 = ___tryParse3;
		Exception_t ** L_90 = ___exc5;
		bool L_91 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_88, (bool)1, L_89, (Exception_t **)L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_022c;
		}
	}
	{
		return (bool)0;
	}

IL_022c:
	{
		bool L_92 = V_2;
		if (!L_92)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_93 = V_15;
		if (L_93)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_94 = ___s0;
		NumberFormatInfo_t435877138 * L_95 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_94, L_95, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_96 = V_15;
		if (!L_96)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_97 = V_10;
		if (!L_97)
		{
			goto IL_0265;
		}
	}
	{
		String_t* L_98 = ___s0;
		bool L_99 = ___tryParse3;
		Exception_t ** L_100 = ___exc5;
		bool L_101 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_98, (bool)1, L_99, (Exception_t **)L_100, /*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_0265;
		}
	}
	{
		return (bool)0;
	}

IL_0265:
	{
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_103 = V_14;
		if (L_103)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_104 = V_8;
		if (!L_104)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_105 = ___s0;
		NumberFormatInfo_t435877138 * L_106 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_105, L_106, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_107 = V_14;
		if (!L_107)
		{
			goto IL_02a8;
		}
	}
	{
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a8;
		}
	}
	{
		String_t* L_109 = ___s0;
		bool L_110 = ___tryParse3;
		Exception_t ** L_111 = ___exc5;
		bool L_112 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_109, (bool)1, L_110, (Exception_t **)L_111, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_02a8;
		}
	}
	{
		return (bool)0;
	}

IL_02a8:
	{
		V_16 = 0;
		V_17 = 0;
		V_18 = (bool)0;
	}

IL_02b1:
	{
		String_t* L_113 = ___s0;
		int32_t L_114 = V_11;
		NullCheck(L_113);
		Il2CppChar L_115 = String_get_Chars_m2986988803(L_113, L_114, /*hidden argument*/NULL);
		bool L_116 = V_3;
		bool L_117 = Int32_ValidDigit_m1059003769(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (L_117)
		{
			goto IL_0311;
		}
	}
	{
		bool L_118 = V_4;
		if (!L_118)
		{
			goto IL_02e3;
		}
	}
	{
		String_t* L_119 = ___s0;
		NumberFormatInfo_t435877138 * L_120 = V_0;
		NullCheck(L_120);
		String_t* L_121 = NumberFormatInfo_get_NumberGroupSeparator_m3292795925(L_120, /*hidden argument*/NULL);
		bool L_122 = Int32_FindOther_m3593812441(NULL /*static, unused*/, (int32_t*)(&V_11), L_119, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_02e3;
		}
	}
	{
		goto IL_0428;
	}

IL_02e3:
	{
		bool L_123 = V_18;
		if (L_123)
		{
			goto IL_030c;
		}
	}
	{
		bool L_124 = V_5;
		if (!L_124)
		{
			goto IL_030c;
		}
	}
	{
		String_t* L_125 = ___s0;
		NumberFormatInfo_t435877138 * L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127 = NumberFormatInfo_get_NumberDecimalSeparator_m33502788(L_126, /*hidden argument*/NULL);
		bool L_128 = Int32_FindOther_m3593812441(NULL /*static, unused*/, (int32_t*)(&V_11), L_125, L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_030c;
		}
	}
	{
		V_18 = (bool)1;
		goto IL_0428;
	}

IL_030c:
	{
		goto IL_0435;
	}

IL_0311:
	{
		bool L_129 = V_3;
		if (!L_129)
		{
			goto IL_039e;
		}
	}
	{
		int32_t L_130 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		String_t* L_131 = ___s0;
		int32_t L_132 = V_11;
		int32_t L_133 = L_132;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		NullCheck(L_131);
		Il2CppChar L_134 = String_get_Chars_m2986988803(L_131, L_133, /*hidden argument*/NULL);
		V_20 = L_134;
		Il2CppChar L_135 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_136 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0344;
		}
	}
	{
		Il2CppChar L_137 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)48)));
		goto IL_0369;
	}

IL_0344:
	{
		Il2CppChar L_138 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_139 = Char_IsLower_m3108076820(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_035f;
		}
	}
	{
		Il2CppChar L_140 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)97))), (int32_t)((int32_t)10)));
		goto IL_0369;
	}

IL_035f:
	{
		Il2CppChar L_141 = V_20;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)((int32_t)65))), (int32_t)((int32_t)10)));
	}

IL_0369:
	{
		bool L_142 = ___tryParse3;
		if (!L_142)
		{
			goto IL_038f;
		}
	}
	{
		uint32_t L_143 = V_16;
		uint32_t L_144 = V_19;
		V_21 = (((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_143, (int32_t)((int32_t)16))), (int32_t)L_144))))))));
		uint64_t L_145 = V_21;
		if ((!(((uint64_t)L_145) > ((uint64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1)))))))))))
		{
			goto IL_0385;
		}
	}
	{
		return (bool)0;
	}

IL_0385:
	{
		uint64_t L_146 = V_21;
		V_16 = (((int32_t)((uint32_t)L_146)));
		goto IL_0399;
	}

IL_038f:
	{
		uint32_t L_147 = V_16;
		if ((uint64_t)(uint32_t)L_147 * (uint64_t)(uint32_t)((int32_t)16) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		uint32_t L_148 = V_19;
		if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_147, (int32_t)((int32_t)16))) + (uint64_t)(uint32_t)L_148 > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_147, (int32_t)((int32_t)16))), (int32_t)L_148));
	}

IL_0399:
	{
		goto IL_0428;
	}

IL_039e:
	{
		bool L_149 = V_18;
		if (!L_149)
		{
			goto IL_03de;
		}
	}
	{
		int32_t L_150 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_150, (int32_t)1));
		String_t* L_151 = ___s0;
		int32_t L_152 = V_11;
		int32_t L_153 = L_152;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_153, (int32_t)1));
		NullCheck(L_151);
		Il2CppChar L_154 = String_get_Chars_m2986988803(L_151, L_153, /*hidden argument*/NULL);
		if ((((int32_t)L_154) == ((int32_t)((int32_t)48))))
		{
			goto IL_03d9;
		}
	}
	{
		bool L_155 = ___tryParse3;
		if (L_155)
		{
			goto IL_03d7;
		}
	}
	{
		Exception_t ** L_156 = ___exc5;
		String_t* L_157 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1489265497, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_158 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_158, L_157, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_156)) = (RuntimeObject *)L_158;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_156), (RuntimeObject *)L_158);
	}

IL_03d7:
	{
		return (bool)0;
	}

IL_03d9:
	{
		goto IL_0428;
	}

IL_03de:
	{
		int32_t L_159 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_159, (int32_t)1));
	}

IL_03e4:
	try
	{ // begin try (depth: 1)
		uint32_t L_160 = V_16;
		if ((uint64_t)(uint32_t)L_160 * (uint64_t)(uint32_t)((int32_t)10) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		String_t* L_161 = ___s0;
		int32_t L_162 = V_11;
		int32_t L_163 = L_162;
		if (((int64_t)L_163 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_163 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_163, (int32_t)1));
		NullCheck(L_161);
		Il2CppChar L_164 = String_get_Chars_m2986988803(L_161, L_163, /*hidden argument*/NULL);
		if (((int64_t)L_164 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_164 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		if ((int64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48)))) > 4294967295LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		if ((uint64_t)(uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_160, (int32_t)((int32_t)10))) + (uint64_t)(uint32_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48)))))) > (uint64_t)(uint32_t)kIl2CppUInt32Max)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt32_Parse_m2778221109_RuntimeMethod_var);
		V_16 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_160, (int32_t)((int32_t)10))), (int32_t)(((uint32_t)((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)((int32_t)48))))))));
		goto IL_0428;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t2020128637_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0402;
		throw e;
	}

CATCH_0402:
	{ // begin catch(System.OverflowException)
		{
			bool L_165 = ___tryParse3;
			if (L_165)
			{
				goto IL_041b;
			}
		}

IL_0409:
		{
			Exception_t ** L_166 = ___exc5;
			String_t* L_167 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1489265497, /*hidden argument*/NULL);
			OverflowException_t2020128637 * L_168 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
			OverflowException__ctor_m694321376(L_168, L_167, /*hidden argument*/NULL);
			*((RuntimeObject **)(L_166)) = (RuntimeObject *)L_168;
			Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_166), (RuntimeObject *)L_168);
		}

IL_041b:
		{
			V_22 = (bool)0;
			goto IL_05cd;
		}

IL_0423:
		{
			; // IL_0423: leave IL_0428
		}
	} // end catch (depth: 1)

IL_0428:
	{
		int32_t L_169 = V_11;
		String_t* L_170 = ___s0;
		NullCheck(L_170);
		int32_t L_171 = String_get_Length_m3847582255(L_170, /*hidden argument*/NULL);
		if ((((int32_t)L_169) < ((int32_t)L_171)))
		{
			goto IL_02b1;
		}
	}

IL_0435:
	{
		int32_t L_172 = V_17;
		if (L_172)
		{
			goto IL_044c;
		}
	}
	{
		bool L_173 = ___tryParse3;
		if (L_173)
		{
			goto IL_044a;
		}
	}
	{
		Exception_t ** L_174 = ___exc5;
		Exception_t * L_175 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_174)) = (RuntimeObject *)L_175;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_174), (RuntimeObject *)L_175);
	}

IL_044a:
	{
		return (bool)0;
	}

IL_044c:
	{
		bool L_176 = V_7;
		if (!L_176)
		{
			goto IL_0499;
		}
	}
	{
		bool L_177 = V_14;
		if (L_177)
		{
			goto IL_0499;
		}
	}
	{
		String_t* L_178 = ___s0;
		NumberFormatInfo_t435877138 * L_179 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_178, L_179, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_180 = V_14;
		if (!L_180)
		{
			goto IL_0499;
		}
	}
	{
		bool L_181 = V_9;
		if (!L_181)
		{
			goto IL_0488;
		}
	}
	{
		String_t* L_182 = ___s0;
		bool L_183 = ___tryParse3;
		Exception_t ** L_184 = ___exc5;
		bool L_185 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_182, (bool)1, L_183, (Exception_t **)L_184, /*hidden argument*/NULL);
		if (L_185)
		{
			goto IL_0488;
		}
	}
	{
		return (bool)0;
	}

IL_0488:
	{
		bool L_186 = V_2;
		if (!L_186)
		{
			goto IL_0499;
		}
	}
	{
		String_t* L_187 = ___s0;
		NumberFormatInfo_t435877138 * L_188 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_187, L_188, (bool*)(&V_15), /*hidden argument*/NULL);
	}

IL_0499:
	{
		bool L_189 = V_2;
		if (!L_189)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_190 = V_15;
		if (L_190)
		{
			goto IL_04ed;
		}
	}
	{
		String_t* L_191 = ___s0;
		NumberFormatInfo_t435877138 * L_192 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_191, L_192, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_193 = V_15;
		if (!L_193)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_194 = V_9;
		if (!L_194)
		{
			goto IL_04d2;
		}
	}
	{
		String_t* L_195 = ___s0;
		bool L_196 = ___tryParse3;
		Exception_t ** L_197 = ___exc5;
		bool L_198 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_195, (bool)1, L_196, (Exception_t **)L_197, /*hidden argument*/NULL);
		if (L_198)
		{
			goto IL_04d2;
		}
	}
	{
		return (bool)0;
	}

IL_04d2:
	{
		bool L_199 = V_14;
		if (L_199)
		{
			goto IL_04ed;
		}
	}
	{
		bool L_200 = V_7;
		if (!L_200)
		{
			goto IL_04ed;
		}
	}
	{
		String_t* L_201 = ___s0;
		NumberFormatInfo_t435877138 * L_202 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_201, L_202, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
	}

IL_04ed:
	{
		bool L_203 = V_9;
		if (!L_203)
		{
			goto IL_0514;
		}
	}
	{
		int32_t L_204 = V_11;
		String_t* L_205 = ___s0;
		NullCheck(L_205);
		int32_t L_206 = String_get_Length_m3847582255(L_205, /*hidden argument*/NULL);
		if ((((int32_t)L_204) >= ((int32_t)L_206)))
		{
			goto IL_0514;
		}
	}
	{
		String_t* L_207 = ___s0;
		bool L_208 = ___tryParse3;
		Exception_t ** L_209 = ___exc5;
		bool L_210 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_207, (bool)0, L_208, (Exception_t **)L_209, /*hidden argument*/NULL);
		if (L_210)
		{
			goto IL_0514;
		}
	}
	{
		return (bool)0;
	}

IL_0514:
	{
		bool L_211 = V_12;
		if (!L_211)
		{
			goto IL_0573;
		}
	}
	{
		int32_t L_212 = V_11;
		String_t* L_213 = ___s0;
		NullCheck(L_213);
		int32_t L_214 = String_get_Length_m3847582255(L_213, /*hidden argument*/NULL);
		if ((((int32_t)L_212) >= ((int32_t)L_214)))
		{
			goto IL_053c;
		}
	}
	{
		String_t* L_215 = ___s0;
		int32_t L_216 = V_11;
		int32_t L_217 = L_216;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_217, (int32_t)1));
		NullCheck(L_215);
		Il2CppChar L_218 = String_get_Chars_m2986988803(L_215, L_217, /*hidden argument*/NULL);
		if ((((int32_t)L_218) == ((int32_t)((int32_t)41))))
		{
			goto IL_054c;
		}
	}

IL_053c:
	{
		bool L_219 = ___tryParse3;
		if (L_219)
		{
			goto IL_054a;
		}
	}
	{
		Exception_t ** L_220 = ___exc5;
		Exception_t * L_221 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_220)) = (RuntimeObject *)L_221;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_220), (RuntimeObject *)L_221);
	}

IL_054a:
	{
		return (bool)0;
	}

IL_054c:
	{
		bool L_222 = V_9;
		if (!L_222)
		{
			goto IL_0573;
		}
	}
	{
		int32_t L_223 = V_11;
		String_t* L_224 = ___s0;
		NullCheck(L_224);
		int32_t L_225 = String_get_Length_m3847582255(L_224, /*hidden argument*/NULL);
		if ((((int32_t)L_223) >= ((int32_t)L_225)))
		{
			goto IL_0573;
		}
	}
	{
		String_t* L_226 = ___s0;
		bool L_227 = ___tryParse3;
		Exception_t ** L_228 = ___exc5;
		bool L_229 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_226, (bool)0, L_227, (Exception_t **)L_228, /*hidden argument*/NULL);
		if (L_229)
		{
			goto IL_0573;
		}
	}
	{
		return (bool)0;
	}

IL_0573:
	{
		int32_t L_230 = V_11;
		String_t* L_231 = ___s0;
		NullCheck(L_231);
		int32_t L_232 = String_get_Length_m3847582255(L_231, /*hidden argument*/NULL);
		if ((((int32_t)L_230) >= ((int32_t)L_232)))
		{
			goto IL_059d;
		}
	}
	{
		String_t* L_233 = ___s0;
		int32_t L_234 = V_11;
		NullCheck(L_233);
		Il2CppChar L_235 = String_get_Chars_m2986988803(L_233, L_234, /*hidden argument*/NULL);
		if (!L_235)
		{
			goto IL_059d;
		}
	}
	{
		bool L_236 = ___tryParse3;
		if (L_236)
		{
			goto IL_059b;
		}
	}
	{
		Exception_t ** L_237 = ___exc5;
		Exception_t * L_238 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_237)) = (RuntimeObject *)L_238;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_237), (RuntimeObject *)L_238);
	}

IL_059b:
	{
		return (bool)0;
	}

IL_059d:
	{
		bool L_239 = V_13;
		if (!L_239)
		{
			goto IL_05c6;
		}
	}
	{
		uint32_t L_240 = V_16;
		if ((!(((uint32_t)L_240) > ((uint32_t)0))))
		{
			goto IL_05c6;
		}
	}
	{
		bool L_241 = ___tryParse3;
		if (L_241)
		{
			goto IL_05c4;
		}
	}
	{
		Exception_t ** L_242 = ___exc5;
		String_t* L_243 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2024505948, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_244 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_244, L_243, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_242)) = (RuntimeObject *)L_244;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_242), (RuntimeObject *)L_244);
	}

IL_05c4:
	{
		return (bool)0;
	}

IL_05c6:
	{
		uint32_t* L_245 = ___result4;
		uint32_t L_246 = V_16;
		*((int32_t*)(L_245)) = (int32_t)L_246;
		return (bool)1;
	}

IL_05cd:
	{
		bool L_247 = V_22;
		return L_247;
	}
}
// System.UInt32 System.UInt32::Parse(System.String)
extern "C"  uint32_t UInt32_Parse_m3270868885 (RuntimeObject * __this /* static, unused */, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_m3270868885_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	uint32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		bool L_1 = UInt32_Parse_m197815874(NULL /*static, unused*/, L_0, (bool)0, (uint32_t*)(&V_1), (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Exception_t * L_2 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, UInt32_Parse_m3270868885_RuntimeMethod_var);
	}

IL_0012:
	{
		uint32_t L_3 = V_1;
		return L_3;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint32_t UInt32_Parse_m3755665066 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_Parse_m3755665066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	uint32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		bool L_3 = UInt32_Parse_m2778221109(NULL /*static, unused*/, L_0, L_1, L_2, (bool)0, (uint32_t*)(&V_1), (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt32_Parse_m3755665066_RuntimeMethod_var);
	}

IL_0014:
	{
		uint32_t L_5 = V_1;
		return L_5;
	}
}
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C"  uint32_t UInt32_Parse_m1373460382 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint32_t L_2 = UInt32_Parse_m3755665066(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C"  bool UInt32_TryParse_m2819179361 (RuntimeObject * __this /* static, unused */, String_t* ___s0, uint32_t* ___result1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		uint32_t* L_1 = ___result1;
		bool L_2 = UInt32_Parse_m197815874(NULL /*static, unused*/, L_0, (bool)1, (uint32_t*)L_1, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		uint32_t* L_3 = ___result1;
		*((int32_t*)(L_3)) = (int32_t)0;
		return (bool)0;
	}

IL_0014:
	{
		return (bool)1;
	}
}
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C"  bool UInt32_TryParse_m535404612 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint32_t* ___result3, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		uint32_t* L_3 = ___result3;
		bool L_4 = UInt32_Parse_m2778221109(NULL /*static, unused*/, L_0, L_1, L_2, (bool)1, (uint32_t*)L_3, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}
	{
		uint32_t* L_5 = ___result3;
		*((int32_t*)(L_5)) = (int32_t)0;
		return (bool)0;
	}

IL_0016:
	{
		return (bool)1;
	}
}
// System.String System.UInt32::ToString()
extern "C"  String_t* UInt32_ToString_m2574561716 (uint32_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_m2574561716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_0 = NumberFormatter_NumberToString_m400339820(NULL /*static, unused*/, (*((uint32_t*)__this)), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* UInt32_ToString_m2574561716_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2574561716(_thisAdjusted, method);
}
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m4293943134 (uint32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_m4293943134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m400339820(NULL /*static, unused*/, (*((uint32_t*)__this)), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_m4293943134_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m4293943134(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt32::ToString(System.String)
extern "C"  String_t* UInt32_ToString_m2066897296 (uint32_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt32_ToString_m2420423038((uint32_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt32_ToString_m2066897296_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2066897296(_thisAdjusted, ___format0, method);
}
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt32_ToString_m2420423038 (uint32_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt32_ToString_m2420423038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m264078176(NULL /*static, unused*/, L_0, (*((uint32_t*)__this)), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt32_ToString_m2420423038_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint32_t* _thisAdjusted = reinterpret_cast<uint32_t*>(__this + 1);
	return UInt32_ToString_m2420423038(_thisAdjusted, ___format0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.UInt64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToBoolean_m3071416000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		bool L_0 = Convert_ToBoolean_m3613483153(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  bool UInt64_System_IConvertible_ToBoolean_m3071416000_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToBoolean_m3071416000(_thisAdjusted, ___provider0, method);
}
// System.Byte System.UInt64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToByte_m1501504925_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint8_t L_0 = Convert_ToByte_m3567528984(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint8_t UInt64_System_IConvertible_ToByte_m1501504925_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToByte_m1501504925(_thisAdjusted, ___provider0, method);
}
// System.Char System.UInt64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToChar_m2074245892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Il2CppChar L_0 = Convert_ToChar_m1604365259(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Il2CppChar UInt64_System_IConvertible_ToChar_m2074245892_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToChar_m2074245892(_thisAdjusted, ___provider0, method);
}
// System.DateTime System.UInt64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDateTime_m3434604642_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_0 = Convert_ToDateTime_m3752463692(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  DateTime_t3738529785  UInt64_System_IConvertible_ToDateTime_m3434604642_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDateTime_m3434604642(_thisAdjusted, ___provider0, method);
}
// System.Decimal System.UInt64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDecimal_m806594027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		Decimal_t2948259380  L_0 = Convert_ToDecimal_m1695757674(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  Decimal_t2948259380  UInt64_System_IConvertible_ToDecimal_m806594027_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDecimal_m806594027(_thisAdjusted, ___provider0, method);
}
// System.Double System.UInt64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToDouble_m602078108_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		double L_0 = Convert_ToDouble_m1030895834(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  double UInt64_System_IConvertible_ToDouble_m602078108_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToDouble_m602078108(_thisAdjusted, ___provider0, method);
}
// System.Int16 System.UInt64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt16_m3895479143_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int16_t L_0 = Convert_ToInt16_m1733792763(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int16_t UInt64_System_IConvertible_ToInt16_m3895479143_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt16_m3895479143(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt32_m949522652_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int32_t L_0 = Convert_ToInt32_m825155517(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int32_t UInt64_System_IConvertible_ToInt32_m949522652_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt32_m949522652(_thisAdjusted, ___provider0, method);
}
// System.Int64 System.UInt64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToInt64_m4241475606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int64_t L_0 = Convert_ToInt64_m260173354(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int64_t UInt64_System_IConvertible_ToInt64_m4241475606_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToInt64_m4241475606(_thisAdjusted, ___provider0, method);
}
// System.SByte System.UInt64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSByte_m30962591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		int8_t L_0 = Convert_ToSByte_m1679390684(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  int8_t UInt64_System_IConvertible_ToSByte_m30962591_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSByte_m30962591(_thisAdjusted, ___provider0, method);
}
// System.Single System.UInt64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToSingle_m925613075_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		float L_0 = Convert_ToSingle_m2791508777(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  float UInt64_System_IConvertible_ToSingle_m925613075_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToSingle_m925613075(_thisAdjusted, ___provider0, method);
}
// System.Object System.UInt64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834 (uint64_t* __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToType_m4049257834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___targetType0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3252615044, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UInt64_System_IConvertible_ToType_m4049257834_RuntimeMethod_var);
	}

IL_0011:
	{
		uint64_t L_2 = ((uint64_t)(*((int64_t*)__this)));
		RuntimeObject * L_3 = Box(UInt64_t4134040092_il2cpp_TypeInfo_var, &L_2);
		Type_t * L_4 = ___targetType0;
		RuntimeObject* L_5 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		RuntimeObject * L_6 = Convert_ToType_m2406080310(NULL /*static, unused*/, L_3, L_4, L_5, (bool)0, /*hidden argument*/NULL);
		return L_6;
	}
}
extern "C"  RuntimeObject * UInt64_System_IConvertible_ToType_m4049257834_AdjustorThunk (RuntimeObject * __this, Type_t * ___targetType0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToType_m4049257834(_thisAdjusted, ___targetType0, ___provider1, method);
}
// System.UInt16 System.UInt64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt16_m4165747038_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint16_t L_0 = Convert_ToUInt16_m2672597498(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint16_t UInt64_System_IConvertible_ToUInt16_m4165747038_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt16_m4165747038(_thisAdjusted, ___provider0, method);
}
// System.UInt32 System.UInt64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_System_IConvertible_ToUInt32_m2784653358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		uint32_t L_0 = Convert_ToUInt32_m1767593911(NULL /*static, unused*/, (*((int64_t*)__this)), /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  uint32_t UInt64_System_IConvertible_ToUInt32_m2784653358_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt32_m2784653358(_thisAdjusted, ___provider0, method);
}
// System.UInt64 System.UInt64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	{
		return (*((int64_t*)__this));
	}
}
extern "C"  uint64_t UInt64_System_IConvertible_ToUInt64_m2135047981_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_System_IConvertible_ToUInt64_m2135047981(_thisAdjusted, ___provider0, method);
}
// System.Int32 System.UInt64::CompareTo(System.Object)
extern "C"  int32_t UInt64_CompareTo_m3619843473 (uint64_t* __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_CompareTo_m3619843473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	int32_t G_B9_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_1, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3792639183, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, UInt64_CompareTo_m3619843473_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___value0;
		V_0 = ((*(uint64_t*)((uint64_t*)UnBox(L_4, UInt64_t4134040092_il2cpp_TypeInfo_var))));
		uint64_t L_5 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) == ((uint64_t)L_5))))
		{
			goto IL_0034;
		}
	}
	{
		return 0;
	}

IL_0034:
	{
		uint64_t L_6 = V_0;
		if ((!(((uint64_t)(*((int64_t*)__this))) < ((uint64_t)L_6))))
		{
			goto IL_0042;
		}
	}
	{
		G_B9_0 = (-1);
		goto IL_0043;
	}

IL_0042:
	{
		G_B9_0 = 1;
	}

IL_0043:
	{
		return G_B9_0;
	}
}
extern "C"  int32_t UInt64_CompareTo_m3619843473_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m3619843473(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.Object)
extern "C"  bool UInt64_Equals_m1879425698 (uint64_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Equals_m1879425698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UInt64_t4134040092_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___obj0;
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_t4134040092_il2cpp_TypeInfo_var))))) == ((int64_t)(*((int64_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m1879425698_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m1879425698(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UInt64::GetHashCode()
extern "C"  int32_t UInt64_GetHashCode_m4209760355 (uint64_t* __this, const RuntimeMethod* method)
{
	{
		return ((int32_t)((int32_t)(((int32_t)((int32_t)((int64_t)((int64_t)(*((int64_t*)__this))&(int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)(-1))))))))))))^(int32_t)(((int32_t)((int32_t)((int64_t)((uint64_t)(*((int64_t*)__this))>>((int32_t)32))))))));
	}
}
extern "C"  int32_t UInt64_GetHashCode_m4209760355_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_GetHashCode_m4209760355(_thisAdjusted, method);
}
// System.Int32 System.UInt64::CompareTo(System.UInt64)
extern "C"  int32_t UInt64_CompareTo_m1614517204 (uint64_t* __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) == ((uint64_t)L_0))))
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		uint64_t L_1 = ___value0;
		if ((!(((uint64_t)(*((int64_t*)__this))) > ((uint64_t)L_1))))
		{
			goto IL_0014;
		}
	}
	{
		return 1;
	}

IL_0014:
	{
		return (-1);
	}
}
extern "C"  int32_t UInt64_CompareTo_m1614517204_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_CompareTo_m1614517204(_thisAdjusted, ___value0, method);
}
// System.Boolean System.UInt64::Equals(System.UInt64)
extern "C"  bool UInt64_Equals_m367573732 (uint64_t* __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___obj0;
		return (bool)((((int64_t)L_0) == ((int64_t)(*((int64_t*)__this))))? 1 : 0);
	}
}
extern "C"  bool UInt64_Equals_m367573732_AdjustorThunk (RuntimeObject * __this, uint64_t ___obj0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_Equals_m367573732(_thisAdjusted, ___obj0, method);
}
// System.UInt64 System.UInt64::Parse(System.String,System.IFormatProvider)
extern "C"  uint64_t UInt64_Parse_m819899889 (RuntimeObject * __this /* static, unused */, String_t* ___s0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		RuntimeObject* L_1 = ___provider1;
		uint64_t L_2 = UInt64_Parse_m1485858293(NULL /*static, unused*/, L_0, 7, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles)
extern "C"  uint64_t UInt64_Parse_m3772275740 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		uint64_t L_2 = UInt64_Parse_m1485858293(NULL /*static, unused*/, L_0, L_1, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt64&,System.Exception&)
extern "C"  bool UInt64_Parse_m2329819578 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, bool ___tryParse3, uint64_t* ___result4, Exception_t ** ___exc5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Parse_m2329819578_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NumberFormatInfo_t435877138 * V_0 = NULL;
	Type_t * V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	uint64_t V_16 = 0;
	int32_t V_17 = 0;
	bool V_18 = false;
	uint64_t V_19 = 0;
	Il2CppChar V_20 = 0x0;
	bool V_21 = false;
	bool V_22 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		uint64_t* L_0 = ___result4;
		*((int64_t*)(L_0)) = (int64_t)(((int64_t)((int64_t)0)));
		Exception_t ** L_1 = ___exc5;
		*((RuntimeObject **)(L_1)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_1), (RuntimeObject *)NULL);
		String_t* L_2 = ___s0;
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		bool L_3 = ___tryParse3;
		if (L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t ** L_4 = ___exc5;
		ArgumentNullException_t1615371798 * L_5 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_5, _stringLiteral3452614605, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_4)) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_4), (RuntimeObject *)L_5);
	}

IL_0022:
	{
		return (bool)0;
	}

IL_0024:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_003f;
		}
	}
	{
		bool L_8 = ___tryParse3;
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		Exception_t ** L_9 = ___exc5;
		Exception_t * L_10 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_9)) = (RuntimeObject *)L_10;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_9), (RuntimeObject *)L_10);
	}

IL_003d:
	{
		return (bool)0;
	}

IL_003f:
	{
		V_0 = (NumberFormatInfo_t435877138 *)NULL;
		RuntimeObject* L_11 = ___provider2;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (NumberFormatInfo_t435877138_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		RuntimeObject* L_14 = ___provider2;
		Type_t * L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = InterfaceFuncInvoker1< RuntimeObject *, Type_t * >::Invoke(0 /* System.Object System.IFormatProvider::GetFormat(System.Type) */, IFormatProvider_t2518567562_il2cpp_TypeInfo_var, L_14, L_15);
		V_0 = ((NumberFormatInfo_t435877138 *)CastclassSealed((RuntimeObject*)L_16, NumberFormatInfo_t435877138_il2cpp_TypeInfo_var));
	}

IL_005f:
	{
		NumberFormatInfo_t435877138 * L_17 = V_0;
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Thread_t2300836069_il2cpp_TypeInfo_var);
		Thread_t2300836069 * L_18 = Thread_get_CurrentThread_m4142136012(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_18);
		CultureInfo_t4157843068 * L_19 = Thread_get_CurrentCulture_m349116646(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		NumberFormatInfo_t435877138 * L_20 = VirtFuncInvoker0< NumberFormatInfo_t435877138 * >::Invoke(13 /* System.Globalization.NumberFormatInfo System.Globalization.CultureInfo::get_NumberFormat() */, L_19);
		V_0 = L_20;
	}

IL_0075:
	{
		int32_t L_21 = ___style1;
		bool L_22 = ___tryParse3;
		Exception_t ** L_23 = ___exc5;
		bool L_24 = Int32_CheckStyle_m3421319992(NULL /*static, unused*/, L_21, L_22, (Exception_t **)L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0085:
	{
		int32_t L_25 = ___style1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_25&(int32_t)((int32_t)256)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_26 = ___style1;
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_26&(int32_t)((int32_t)512)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_27 = ___style1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_27&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_28 = ___style1;
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_28&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_29 = ___style1;
		V_6 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_29&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_30 = ___style1;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_30&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_31 = ___style1;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_31&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_32 = ___style1;
		V_9 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_32&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_33 = ___style1;
		V_10 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_33&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		V_11 = 0;
		bool L_34 = V_10;
		if (!L_34)
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_35 = ___s0;
		bool L_36 = ___tryParse3;
		Exception_t ** L_37 = ___exc5;
		bool L_38 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_35, (bool)1, L_36, (Exception_t **)L_37, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_010e;
		}
	}
	{
		return (bool)0;
	}

IL_010e:
	{
		V_12 = (bool)0;
		V_13 = (bool)0;
		V_14 = (bool)0;
		V_15 = (bool)0;
		bool L_39 = V_6;
		if (!L_39)
		{
			goto IL_01bf;
		}
	}
	{
		String_t* L_40 = ___s0;
		int32_t L_41 = V_11;
		NullCheck(L_40);
		Il2CppChar L_42 = String_get_Chars_m2986988803(L_40, L_41, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_42) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_01bf;
		}
	}
	{
		V_12 = (bool)1;
		V_14 = (bool)1;
		V_13 = (bool)1;
		int32_t L_43 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
		bool L_44 = V_10;
		if (!L_44)
		{
			goto IL_0159;
		}
	}
	{
		String_t* L_45 = ___s0;
		bool L_46 = ___tryParse3;
		Exception_t ** L_47 = ___exc5;
		bool L_48 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_45, (bool)1, L_46, (Exception_t **)L_47, /*hidden argument*/NULL);
		if (L_48)
		{
			goto IL_0159;
		}
	}
	{
		return (bool)0;
	}

IL_0159:
	{
		String_t* L_49 = ___s0;
		int32_t L_50 = V_11;
		NumberFormatInfo_t435877138 * L_51 = V_0;
		NullCheck(L_51);
		String_t* L_52 = NumberFormatInfo_get_NegativeSign_m2757109362(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		int32_t L_53 = String_get_Length_m3847582255(L_52, /*hidden argument*/NULL);
		NullCheck(L_49);
		String_t* L_54 = String_Substring_m1610150815(L_49, L_50, L_53, /*hidden argument*/NULL);
		NumberFormatInfo_t435877138 * L_55 = V_0;
		NullCheck(L_55);
		String_t* L_56 = NumberFormatInfo_get_NegativeSign_m2757109362(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_57 = String_op_Equality_m920492651(NULL /*static, unused*/, L_54, L_56, /*hidden argument*/NULL);
		if (!L_57)
		{
			goto IL_018c;
		}
	}
	{
		bool L_58 = ___tryParse3;
		if (L_58)
		{
			goto IL_018a;
		}
	}
	{
		Exception_t ** L_59 = ___exc5;
		Exception_t * L_60 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_59)) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_59), (RuntimeObject *)L_60);
	}

IL_018a:
	{
		return (bool)0;
	}

IL_018c:
	{
		String_t* L_61 = ___s0;
		int32_t L_62 = V_11;
		NumberFormatInfo_t435877138 * L_63 = V_0;
		NullCheck(L_63);
		String_t* L_64 = NumberFormatInfo_get_PositiveSign_m240350949(L_63, /*hidden argument*/NULL);
		NullCheck(L_64);
		int32_t L_65 = String_get_Length_m3847582255(L_64, /*hidden argument*/NULL);
		NullCheck(L_61);
		String_t* L_66 = String_Substring_m1610150815(L_61, L_62, L_65, /*hidden argument*/NULL);
		NumberFormatInfo_t435877138 * L_67 = V_0;
		NullCheck(L_67);
		String_t* L_68 = NumberFormatInfo_get_PositiveSign_m240350949(L_67, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_69 = String_op_Equality_m920492651(NULL /*static, unused*/, L_66, L_68, /*hidden argument*/NULL);
		if (!L_69)
		{
			goto IL_01bf;
		}
	}
	{
		bool L_70 = ___tryParse3;
		if (L_70)
		{
			goto IL_01bd;
		}
	}
	{
		Exception_t ** L_71 = ___exc5;
		Exception_t * L_72 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_71)) = (RuntimeObject *)L_72;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_71), (RuntimeObject *)L_72);
	}

IL_01bd:
	{
		return (bool)0;
	}

IL_01bf:
	{
		bool L_73 = V_8;
		if (!L_73)
		{
			goto IL_022d;
		}
	}
	{
		bool L_74 = V_14;
		if (L_74)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_75 = ___s0;
		NumberFormatInfo_t435877138 * L_76 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_75, L_76, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_77 = V_14;
		if (!L_77)
		{
			goto IL_022d;
		}
	}
	{
		bool L_78 = V_10;
		if (!L_78)
		{
			goto IL_01fb;
		}
	}
	{
		String_t* L_79 = ___s0;
		bool L_80 = ___tryParse3;
		Exception_t ** L_81 = ___exc5;
		bool L_82 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_79, (bool)1, L_80, (Exception_t **)L_81, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_01fb;
		}
	}
	{
		return (bool)0;
	}

IL_01fb:
	{
		bool L_83 = V_2;
		if (!L_83)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_84 = ___s0;
		NumberFormatInfo_t435877138 * L_85 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_84, L_85, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_86 = V_15;
		if (!L_86)
		{
			goto IL_022d;
		}
	}
	{
		bool L_87 = V_10;
		if (!L_87)
		{
			goto IL_022d;
		}
	}
	{
		String_t* L_88 = ___s0;
		bool L_89 = ___tryParse3;
		Exception_t ** L_90 = ___exc5;
		bool L_91 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_88, (bool)1, L_89, (Exception_t **)L_90, /*hidden argument*/NULL);
		if (L_91)
		{
			goto IL_022d;
		}
	}
	{
		return (bool)0;
	}

IL_022d:
	{
		bool L_92 = V_2;
		if (!L_92)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_93 = V_15;
		if (L_93)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_94 = ___s0;
		NumberFormatInfo_t435877138 * L_95 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_94, L_95, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_96 = V_15;
		if (!L_96)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_97 = V_10;
		if (!L_97)
		{
			goto IL_0266;
		}
	}
	{
		String_t* L_98 = ___s0;
		bool L_99 = ___tryParse3;
		Exception_t ** L_100 = ___exc5;
		bool L_101 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_98, (bool)1, L_99, (Exception_t **)L_100, /*hidden argument*/NULL);
		if (L_101)
		{
			goto IL_0266;
		}
	}
	{
		return (bool)0;
	}

IL_0266:
	{
		bool L_102 = V_15;
		if (!L_102)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_103 = V_14;
		if (L_103)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_104 = V_8;
		if (!L_104)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_105 = ___s0;
		NumberFormatInfo_t435877138 * L_106 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_105, L_106, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_107 = V_14;
		if (!L_107)
		{
			goto IL_02a9;
		}
	}
	{
		bool L_108 = V_10;
		if (!L_108)
		{
			goto IL_02a9;
		}
	}
	{
		String_t* L_109 = ___s0;
		bool L_110 = ___tryParse3;
		Exception_t ** L_111 = ___exc5;
		bool L_112 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_109, (bool)1, L_110, (Exception_t **)L_111, /*hidden argument*/NULL);
		if (L_112)
		{
			goto IL_02a9;
		}
	}
	{
		return (bool)0;
	}

IL_02a9:
	{
		V_16 = (((int64_t)((int64_t)0)));
		V_17 = 0;
		V_18 = (bool)0;
	}

IL_02b3:
	{
		String_t* L_113 = ___s0;
		int32_t L_114 = V_11;
		NullCheck(L_113);
		Il2CppChar L_115 = String_get_Chars_m2986988803(L_113, L_114, /*hidden argument*/NULL);
		bool L_116 = V_3;
		bool L_117 = Int32_ValidDigit_m1059003769(NULL /*static, unused*/, L_115, L_116, /*hidden argument*/NULL);
		if (L_117)
		{
			goto IL_0313;
		}
	}
	{
		bool L_118 = V_4;
		if (!L_118)
		{
			goto IL_02e5;
		}
	}
	{
		String_t* L_119 = ___s0;
		NumberFormatInfo_t435877138 * L_120 = V_0;
		NullCheck(L_120);
		String_t* L_121 = NumberFormatInfo_get_NumberGroupSeparator_m3292795925(L_120, /*hidden argument*/NULL);
		bool L_122 = Int32_FindOther_m3593812441(NULL /*static, unused*/, (int32_t*)(&V_11), L_119, L_121, /*hidden argument*/NULL);
		if (!L_122)
		{
			goto IL_02e5;
		}
	}
	{
		goto IL_043e;
	}

IL_02e5:
	{
		bool L_123 = V_18;
		if (L_123)
		{
			goto IL_030e;
		}
	}
	{
		bool L_124 = V_5;
		if (!L_124)
		{
			goto IL_030e;
		}
	}
	{
		String_t* L_125 = ___s0;
		NumberFormatInfo_t435877138 * L_126 = V_0;
		NullCheck(L_126);
		String_t* L_127 = NumberFormatInfo_get_NumberDecimalSeparator_m33502788(L_126, /*hidden argument*/NULL);
		bool L_128 = Int32_FindOther_m3593812441(NULL /*static, unused*/, (int32_t*)(&V_11), L_125, L_127, /*hidden argument*/NULL);
		if (!L_128)
		{
			goto IL_030e;
		}
	}
	{
		V_18 = (bool)1;
		goto IL_043e;
	}

IL_030e:
	{
		goto IL_044b;
	}

IL_0313:
	{
		bool L_129 = V_3;
		if (!L_129)
		{
			goto IL_03b3;
		}
	}
	{
		int32_t L_130 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_130, (int32_t)1));
		String_t* L_131 = ___s0;
		int32_t L_132 = V_11;
		int32_t L_133 = L_132;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
		NullCheck(L_131);
		Il2CppChar L_134 = String_get_Chars_m2986988803(L_131, L_133, /*hidden argument*/NULL);
		V_20 = L_134;
		Il2CppChar L_135 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_136 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_135, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0347;
		}
	}
	{
		Il2CppChar L_137 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)((int32_t)48))))));
		goto IL_036e;
	}

IL_0347:
	{
		Il2CppChar L_138 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_139 = Char_IsLower_m3108076820(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		if (!L_139)
		{
			goto IL_0363;
		}
	}
	{
		Il2CppChar L_140 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_140, (int32_t)((int32_t)97))), (int32_t)((int32_t)10))))));
		goto IL_036e;
	}

IL_0363:
	{
		Il2CppChar L_141 = V_20;
		V_19 = (((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)((int32_t)65))), (int32_t)((int32_t)10))))));
	}

IL_036e:
	{
		bool L_142 = ___tryParse3;
		if (!L_142)
		{
			goto IL_03a3;
		}
	}
	{
		uint64_t L_143 = V_16;
		V_21 = (bool)((!(((uint64_t)L_143) <= ((uint64_t)(((int64_t)((int64_t)((int32_t)65535)))))))? 1 : 0);
		uint64_t L_144 = V_16;
		uint64_t L_145 = V_19;
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_144, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))), (int64_t)L_145));
		bool L_146 = V_21;
		if (!L_146)
		{
			goto IL_039e;
		}
	}
	{
		uint64_t L_147 = V_16;
		if ((!(((uint64_t)L_147) < ((uint64_t)(((int64_t)((int64_t)((int32_t)16))))))))
		{
			goto IL_039e;
		}
	}
	{
		return (bool)0;
	}

IL_039e:
	{
		goto IL_03ae;
	}

IL_03a3:
	{
		uint64_t L_148 = V_16;
		if (il2cpp_codegen_check_mul_oveflow_u64(L_148, (((int64_t)((int64_t)((int32_t)16))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		uint64_t L_149 = V_19;
		if ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))) > kIl2CppUInt64Max - (uint64_t)L_149)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_148, (int64_t)(((int64_t)((int64_t)((int32_t)16)))))), (int64_t)L_149));
	}

IL_03ae:
	{
		goto IL_043e;
	}

IL_03b3:
	{
		bool L_150 = V_18;
		if (!L_150)
		{
			goto IL_03f3;
		}
	}
	{
		int32_t L_151 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_151, (int32_t)1));
		String_t* L_152 = ___s0;
		int32_t L_153 = V_11;
		int32_t L_154 = L_153;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
		NullCheck(L_152);
		Il2CppChar L_155 = String_get_Chars_m2986988803(L_152, L_154, /*hidden argument*/NULL);
		if ((((int32_t)L_155) == ((int32_t)((int32_t)48))))
		{
			goto IL_03ee;
		}
	}
	{
		bool L_156 = ___tryParse3;
		if (L_156)
		{
			goto IL_03ec;
		}
	}
	{
		Exception_t ** L_157 = ___exc5;
		String_t* L_158 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1489265497, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_159 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_159, L_158, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_157)) = (RuntimeObject *)L_159;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_157), (RuntimeObject *)L_159);
	}

IL_03ec:
	{
		return (bool)0;
	}

IL_03ee:
	{
		goto IL_043e;
	}

IL_03f3:
	{
		int32_t L_160 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)1));
	}

IL_03f9:
	try
	{ // begin try (depth: 1)
		uint64_t L_161 = V_16;
		if (il2cpp_codegen_check_mul_oveflow_u64(L_161, (((int64_t)((int64_t)((int32_t)10))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		String_t* L_162 = ___s0;
		int32_t L_163 = V_11;
		int32_t L_164 = L_163;
		if (((int64_t)L_164 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_164 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_164, (int32_t)1));
		NullCheck(L_162);
		Il2CppChar L_165 = String_get_Chars_m2986988803(L_162, L_164, /*hidden argument*/NULL);
		if (((int64_t)L_165 - (int64_t)((int32_t)48) < (int64_t)kIl2CppInt32Min) || ((int64_t)L_165 - (int64_t)((int32_t)48) > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		if ((uint64_t)(((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48)))) > std::numeric_limits<uint64_t>::max()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		if ((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)(((int64_t)((int64_t)((int32_t)10)))))) > kIl2CppUInt64Max - (uint64_t)(((uint64_t)((uint64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48)))))))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, UInt64_Parse_m2329819578_RuntimeMethod_var);
		V_16 = ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_161, (int64_t)(((int64_t)((int64_t)((int32_t)10)))))), (int64_t)(((uint64_t)((uint64_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_165, (int32_t)((int32_t)48))))))));
		goto IL_043e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (OverflowException_t2020128637_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0418;
		throw e;
	}

CATCH_0418:
	{ // begin catch(System.OverflowException)
		{
			bool L_166 = ___tryParse3;
			if (L_166)
			{
				goto IL_0431;
			}
		}

IL_041f:
		{
			Exception_t ** L_167 = ___exc5;
			String_t* L_168 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1489265497, /*hidden argument*/NULL);
			OverflowException_t2020128637 * L_169 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
			OverflowException__ctor_m694321376(L_169, L_168, /*hidden argument*/NULL);
			*((RuntimeObject **)(L_167)) = (RuntimeObject *)L_169;
			Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_167), (RuntimeObject *)L_169);
		}

IL_0431:
		{
			V_22 = (bool)0;
			goto IL_05e4;
		}

IL_0439:
		{
			; // IL_0439: leave IL_043e
		}
	} // end catch (depth: 1)

IL_043e:
	{
		int32_t L_170 = V_11;
		String_t* L_171 = ___s0;
		NullCheck(L_171);
		int32_t L_172 = String_get_Length_m3847582255(L_171, /*hidden argument*/NULL);
		if ((((int32_t)L_170) < ((int32_t)L_172)))
		{
			goto IL_02b3;
		}
	}

IL_044b:
	{
		int32_t L_173 = V_17;
		if (L_173)
		{
			goto IL_0462;
		}
	}
	{
		bool L_174 = ___tryParse3;
		if (L_174)
		{
			goto IL_0460;
		}
	}
	{
		Exception_t ** L_175 = ___exc5;
		Exception_t * L_176 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_175)) = (RuntimeObject *)L_176;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_175), (RuntimeObject *)L_176);
	}

IL_0460:
	{
		return (bool)0;
	}

IL_0462:
	{
		bool L_177 = V_7;
		if (!L_177)
		{
			goto IL_04af;
		}
	}
	{
		bool L_178 = V_14;
		if (L_178)
		{
			goto IL_04af;
		}
	}
	{
		String_t* L_179 = ___s0;
		NumberFormatInfo_t435877138 * L_180 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_179, L_180, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
		bool L_181 = V_14;
		if (!L_181)
		{
			goto IL_04af;
		}
	}
	{
		bool L_182 = V_9;
		if (!L_182)
		{
			goto IL_049e;
		}
	}
	{
		String_t* L_183 = ___s0;
		bool L_184 = ___tryParse3;
		Exception_t ** L_185 = ___exc5;
		bool L_186 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_183, (bool)1, L_184, (Exception_t **)L_185, /*hidden argument*/NULL);
		if (L_186)
		{
			goto IL_049e;
		}
	}
	{
		return (bool)0;
	}

IL_049e:
	{
		bool L_187 = V_2;
		if (!L_187)
		{
			goto IL_04af;
		}
	}
	{
		String_t* L_188 = ___s0;
		NumberFormatInfo_t435877138 * L_189 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_188, L_189, (bool*)(&V_15), /*hidden argument*/NULL);
	}

IL_04af:
	{
		bool L_190 = V_2;
		if (!L_190)
		{
			goto IL_0503;
		}
	}
	{
		bool L_191 = V_15;
		if (L_191)
		{
			goto IL_0503;
		}
	}
	{
		String_t* L_192 = ___s0;
		NumberFormatInfo_t435877138 * L_193 = V_0;
		Int32_FindCurrency_m3541026887(NULL /*static, unused*/, (int32_t*)(&V_11), L_192, L_193, (bool*)(&V_15), /*hidden argument*/NULL);
		bool L_194 = V_15;
		if (!L_194)
		{
			goto IL_0503;
		}
	}
	{
		bool L_195 = V_9;
		if (!L_195)
		{
			goto IL_04e8;
		}
	}
	{
		String_t* L_196 = ___s0;
		bool L_197 = ___tryParse3;
		Exception_t ** L_198 = ___exc5;
		bool L_199 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_196, (bool)1, L_197, (Exception_t **)L_198, /*hidden argument*/NULL);
		if (L_199)
		{
			goto IL_04e8;
		}
	}
	{
		return (bool)0;
	}

IL_04e8:
	{
		bool L_200 = V_14;
		if (L_200)
		{
			goto IL_0503;
		}
	}
	{
		bool L_201 = V_7;
		if (!L_201)
		{
			goto IL_0503;
		}
	}
	{
		String_t* L_202 = ___s0;
		NumberFormatInfo_t435877138 * L_203 = V_0;
		Int32_FindSign_m3975667272(NULL /*static, unused*/, (int32_t*)(&V_11), L_202, L_203, (bool*)(&V_14), (bool*)(&V_13), /*hidden argument*/NULL);
	}

IL_0503:
	{
		bool L_204 = V_9;
		if (!L_204)
		{
			goto IL_052a;
		}
	}
	{
		int32_t L_205 = V_11;
		String_t* L_206 = ___s0;
		NullCheck(L_206);
		int32_t L_207 = String_get_Length_m3847582255(L_206, /*hidden argument*/NULL);
		if ((((int32_t)L_205) >= ((int32_t)L_207)))
		{
			goto IL_052a;
		}
	}
	{
		String_t* L_208 = ___s0;
		bool L_209 = ___tryParse3;
		Exception_t ** L_210 = ___exc5;
		bool L_211 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_208, (bool)0, L_209, (Exception_t **)L_210, /*hidden argument*/NULL);
		if (L_211)
		{
			goto IL_052a;
		}
	}
	{
		return (bool)0;
	}

IL_052a:
	{
		bool L_212 = V_12;
		if (!L_212)
		{
			goto IL_0589;
		}
	}
	{
		int32_t L_213 = V_11;
		String_t* L_214 = ___s0;
		NullCheck(L_214);
		int32_t L_215 = String_get_Length_m3847582255(L_214, /*hidden argument*/NULL);
		if ((((int32_t)L_213) >= ((int32_t)L_215)))
		{
			goto IL_0552;
		}
	}
	{
		String_t* L_216 = ___s0;
		int32_t L_217 = V_11;
		int32_t L_218 = L_217;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_218, (int32_t)1));
		NullCheck(L_216);
		Il2CppChar L_219 = String_get_Chars_m2986988803(L_216, L_218, /*hidden argument*/NULL);
		if ((((int32_t)L_219) == ((int32_t)((int32_t)41))))
		{
			goto IL_0562;
		}
	}

IL_0552:
	{
		bool L_220 = ___tryParse3;
		if (L_220)
		{
			goto IL_0560;
		}
	}
	{
		Exception_t ** L_221 = ___exc5;
		Exception_t * L_222 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_221)) = (RuntimeObject *)L_222;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_221), (RuntimeObject *)L_222);
	}

IL_0560:
	{
		return (bool)0;
	}

IL_0562:
	{
		bool L_223 = V_9;
		if (!L_223)
		{
			goto IL_0589;
		}
	}
	{
		int32_t L_224 = V_11;
		String_t* L_225 = ___s0;
		NullCheck(L_225);
		int32_t L_226 = String_get_Length_m3847582255(L_225, /*hidden argument*/NULL);
		if ((((int32_t)L_224) >= ((int32_t)L_226)))
		{
			goto IL_0589;
		}
	}
	{
		String_t* L_227 = ___s0;
		bool L_228 = ___tryParse3;
		Exception_t ** L_229 = ___exc5;
		bool L_230 = Int32_JumpOverWhite_m208298144(NULL /*static, unused*/, (int32_t*)(&V_11), L_227, (bool)0, L_228, (Exception_t **)L_229, /*hidden argument*/NULL);
		if (L_230)
		{
			goto IL_0589;
		}
	}
	{
		return (bool)0;
	}

IL_0589:
	{
		int32_t L_231 = V_11;
		String_t* L_232 = ___s0;
		NullCheck(L_232);
		int32_t L_233 = String_get_Length_m3847582255(L_232, /*hidden argument*/NULL);
		if ((((int32_t)L_231) >= ((int32_t)L_233)))
		{
			goto IL_05b3;
		}
	}
	{
		String_t* L_234 = ___s0;
		int32_t L_235 = V_11;
		NullCheck(L_234);
		Il2CppChar L_236 = String_get_Chars_m2986988803(L_234, L_235, /*hidden argument*/NULL);
		if (!L_236)
		{
			goto IL_05b3;
		}
	}
	{
		bool L_237 = ___tryParse3;
		if (L_237)
		{
			goto IL_05b1;
		}
	}
	{
		Exception_t ** L_238 = ___exc5;
		Exception_t * L_239 = Int32_GetFormatException_m519586683(NULL /*static, unused*/, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_238)) = (RuntimeObject *)L_239;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_238), (RuntimeObject *)L_239);
	}

IL_05b1:
	{
		return (bool)0;
	}

IL_05b3:
	{
		bool L_240 = V_13;
		if (!L_240)
		{
			goto IL_05dd;
		}
	}
	{
		uint64_t L_241 = V_16;
		if ((!(((uint64_t)L_241) > ((uint64_t)(((int64_t)((int64_t)0)))))))
		{
			goto IL_05dd;
		}
	}
	{
		bool L_242 = ___tryParse3;
		if (L_242)
		{
			goto IL_05db;
		}
	}
	{
		Exception_t ** L_243 = ___exc5;
		String_t* L_244 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral2024505948, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_245 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m694321376(L_245, L_244, /*hidden argument*/NULL);
		*((RuntimeObject **)(L_243)) = (RuntimeObject *)L_245;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_243), (RuntimeObject *)L_245);
	}

IL_05db:
	{
		return (bool)0;
	}

IL_05dd:
	{
		uint64_t* L_246 = ___result4;
		uint64_t L_247 = V_16;
		*((int64_t*)(L_246)) = (int64_t)L_247;
		return (bool)1;
	}

IL_05e4:
	{
		bool L_248 = V_22;
		return L_248;
	}
}
// System.UInt64 System.UInt64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C"  uint64_t UInt64_Parse_m1485858293 (RuntimeObject * __this /* static, unused */, String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_Parse_m1485858293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	uint64_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___style1;
		RuntimeObject* L_2 = ___provider2;
		bool L_3 = UInt64_Parse_m2329819578(NULL /*static, unused*/, L_0, L_1, L_2, (bool)0, (uint64_t*)(&V_1), (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0014;
		}
	}
	{
		Exception_t * L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, UInt64_Parse_m1485858293_RuntimeMethod_var);
	}

IL_0014:
	{
		uint64_t L_5 = V_1;
		return L_5;
	}
}
// System.Boolean System.UInt64::TryParse(System.String,System.UInt64&)
extern "C"  bool UInt64_TryParse_m2263420204 (RuntimeObject * __this /* static, unused */, String_t* ___s0, uint64_t* ___result1, const RuntimeMethod* method)
{
	Exception_t * V_0 = NULL;
	{
		String_t* L_0 = ___s0;
		uint64_t* L_1 = ___result1;
		bool L_2 = UInt64_Parse_m2329819578(NULL /*static, unused*/, L_0, 7, (RuntimeObject*)NULL, (bool)1, (uint64_t*)L_1, (Exception_t **)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		uint64_t* L_3 = ___result1;
		*((int64_t*)(L_3)) = (int64_t)(((int64_t)((int64_t)0)));
		return (bool)0;
	}

IL_0017:
	{
		return (bool)1;
	}
}
// System.String System.UInt64::ToString()
extern "C"  String_t* UInt64_ToString_m1529093114 (uint64_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_m1529093114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_0 = NumberFormatter_NumberToString_m3906556024(NULL /*static, unused*/, (*((int64_t*)__this)), (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_0;
	}
}
extern "C"  String_t* UInt64_ToString_m1529093114_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1529093114(_thisAdjusted, method);
}
// System.String System.UInt64::ToString(System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m2623377370 (uint64_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_m2623377370_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___provider0;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_1 = NumberFormatter_NumberToString_m3906556024(NULL /*static, unused*/, (*((int64_t*)__this)), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_m2623377370_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___provider0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m2623377370(_thisAdjusted, ___provider0, method);
}
// System.String System.UInt64::ToString(System.String)
extern "C"  String_t* UInt64_ToString_m2177233542 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___format0;
		String_t* L_1 = UInt64_ToString_m1695188334((uint64_t*)__this, L_0, (RuntimeObject*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UInt64_ToString_m2177233542_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m2177233542(_thisAdjusted, ___format0, method);
}
// System.String System.UInt64::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* UInt64_ToString_m1695188334 (uint64_t* __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UInt64_ToString_m1695188334_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		IL2CPP_RUNTIME_CLASS_INIT(NumberFormatter_t1182924621_il2cpp_TypeInfo_var);
		String_t* L_2 = NumberFormatter_NumberToString_m1906030517(NULL /*static, unused*/, L_0, (*((int64_t*)__this)), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
extern "C"  String_t* UInt64_ToString_m1695188334_AdjustorThunk (RuntimeObject * __this, String_t* ___format0, RuntimeObject* ___provider1, const RuntimeMethod* method)
{
	uint64_t* _thisAdjusted = reinterpret_cast<uint64_t*>(__this + 1);
	return UInt64_ToString_m1695188334(_thisAdjusted, ___format0, ___provider1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C"  void UIntPtr__ctor_m4250165422 (uintptr_t* __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___value0;
		*__this = ((((uintptr_t)L_0)));
		return;
	}
}
extern "C"  void UIntPtr__ctor_m4250165422_AdjustorThunk (RuntimeObject * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr__ctor_m4250165422(_thisAdjusted, ___value0, method);
}
// System.Void System.UIntPtr::.cctor()
extern "C"  void UIntPtr__cctor_m3513964473 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr__cctor_m3513964473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		uintptr_t L_0;
		memset(&L_0, 0, sizeof(L_0));
		UIntPtr__ctor_m4250165422((&L_0), 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151 (uintptr_t* __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		uintptr_t L_3 = *__this;
		NullCheck(L_2);
		SerializationInfo_AddValue_m2020653395(L_2, _stringLiteral1363226343, (((int64_t)((uint64_t)L_3))), /*hidden argument*/NULL);
		return;
	}
}
extern "C"  void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151_AdjustorThunk (RuntimeObject * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m1767630151(_thisAdjusted, ___info0, ___context1, method);
}
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C"  bool UIntPtr_Equals_m1316671746 (uintptr_t* __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIntPtr_Equals_m1316671746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uintptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, UIntPtr_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(uintptr_t*)((uintptr_t*)UnBox(L_1, UIntPtr_t_il2cpp_TypeInfo_var))));
		uintptr_t L_2 = *__this;
		uintptr_t L_3 = V_0;
		return (bool)((((intptr_t)L_2) == ((intptr_t)L_3))? 1 : 0);
	}

IL_0022:
	{
		return (bool)0;
	}
}
extern "C"  bool UIntPtr_Equals_m1316671746_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_Equals_m1316671746(_thisAdjusted, ___obj0, method);
}
// System.Int32 System.UIntPtr::GetHashCode()
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298 (uintptr_t* __this, const RuntimeMethod* method)
{
	{
		uintptr_t L_0 = *__this;
		return (((int32_t)((int32_t)L_0)));
	}
}
extern "C"  int32_t UIntPtr_GetHashCode_m3482152298_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_GetHashCode_m3482152298(_thisAdjusted, method);
}
// System.String System.UIntPtr::ToString()
extern "C"  String_t* UIntPtr_ToString_m984583492 (uintptr_t* __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uintptr_t L_0 = *__this;
		V_0 = (((int32_t)((uint32_t)L_0)));
		String_t* L_1 = UInt32_ToString_m2574561716((uint32_t*)(&V_0), /*hidden argument*/NULL);
		return L_1;
	}
}
extern "C"  String_t* UIntPtr_ToString_m984583492_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	uintptr_t* _thisAdjusted = reinterpret_cast<uintptr_t*>(__this + 1);
	return UIntPtr_ToString_m984583492(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnauthorizedAccessException::.ctor()
extern "C"  void UnauthorizedAccessException__ctor_m246605039 (UnauthorizedAccessException_t490705335 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnauthorizedAccessException__ctor_m246605039_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral563158065, /*hidden argument*/NULL);
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.String)
extern "C"  void UnauthorizedAccessException__ctor_m40101894 (UnauthorizedAccessException_t490705335 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		SystemException__ctor_m3298527747(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_m3489164646(__this, ((int32_t)-2146233088), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnauthorizedAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnauthorizedAccessException__ctor_m1652256089 (UnauthorizedAccessException_t490705335 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		StreamingContext_t3711869237  L_1 = ___context1;
		SystemException__ctor_m1515048899(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void System.UnhandledExceptionEventArgs::.ctor(System.Object,System.Boolean)
extern "C"  void UnhandledExceptionEventArgs__ctor_m224348470 (UnhandledExceptionEventArgs_t2886101344 * __this, RuntimeObject * ___exception0, bool ___isTerminating1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnhandledExceptionEventArgs__ctor_m224348470_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___exception0;
		__this->set_exception_1(L_0);
		bool L_1 = ___isTerminating1;
		__this->set_m_isTerminating_2(L_1);
		return;
	}
}
// System.Object System.UnhandledExceptionEventArgs::get_ExceptionObject()
extern "C"  RuntimeObject * UnhandledExceptionEventArgs_get_ExceptionObject_m862578480 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_exception_1();
		return L_0;
	}
}
// System.Boolean System.UnhandledExceptionEventArgs::get_IsTerminating()
extern "C"  bool UnhandledExceptionEventArgs_get_IsTerminating_m4073714616 (UnhandledExceptionEventArgs_t2886101344 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_m_isTerminating_2();
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
// System.Void System.UnhandledExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void UnhandledExceptionEventHandler__ctor_m626016213 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.UnhandledExceptionEventHandler::Invoke(System.Object,System.UnhandledExceptionEventArgs)
extern "C"  void UnhandledExceptionEventHandler_Invoke_m1545705626 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		UnhandledExceptionEventHandler_Invoke_m1545705626((UnhandledExceptionEventHandler_t3101989324 *)__this->get_prev_9(), ___sender0, ___e1, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___e1, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, targetThis, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___e1);
					else
						VirtActionInvoker2< RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___e1, targetMethod);
			}
		}
		else
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
					else
						GenericVirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(targetMethod, ___sender0, ___e1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___e1);
					else
						VirtActionInvoker1< UnhandledExceptionEventArgs_t2886101344 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___e1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, UnhandledExceptionEventArgs_t2886101344 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___sender0, ___e1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.UnhandledExceptionEventHandler::BeginInvoke(System.Object,System.UnhandledExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* UnhandledExceptionEventHandler_BeginInvoke_m1761611550 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject * ___sender0, UnhandledExceptionEventArgs_t2886101344 * ___e1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = ___e1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void System.UnhandledExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void UnhandledExceptionEventHandler_EndInvoke_m2316153791 (UnhandledExceptionEventHandler_t3101989324 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder__ctor_m3869442095 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___ctx1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder__ctor_m3869442095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1 = SerializationInfo_GetString_m3155282843(L_0, _stringLiteral2037252898, /*hidden argument*/NULL);
		__this->set__data_0(L_1);
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		int32_t L_3 = SerializationInfo_GetInt32_m2640574809(L_2, _stringLiteral3283586028, /*hidden argument*/NULL);
		__this->set__unityType_1((((int32_t)((uint8_t)L_3))));
		SerializationInfo_t950877179 * L_4 = ___info0;
		NullCheck(L_4);
		String_t* L_5 = SerializationInfo_GetString_m3155282843(L_4, _stringLiteral209558951, /*hidden argument*/NULL);
		__this->set__assemblyName_2(L_5);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetTypeData_m2453779479 (RuntimeObject * __this /* static, unused */, Type_t * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetTypeData_m2453779479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		Type_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 4, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info1;
		Type_t * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral209558951, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info1;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m3923964808(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetDBNullData_m714211970 (RuntimeObject * __this /* static, unused */, DBNull_t3725197148 * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetDBNullData_m714211970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, NULL, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_1 = ___info1;
		NullCheck(L_1);
		SerializationInfo_AddValue_m412754688(L_1, _stringLiteral3283586028, 2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_2 = ___info1;
		DBNull_t3725197148 * L_3 = ___instance0;
		NullCheck(L_3);
		Type_t * L_4 = Object_GetType_m88164663(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Assembly_t * L_5 = VirtFuncInvoker0< Assembly_t * >::Invoke(15 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_2);
		SerializationInfo_AddValue_m2872281893(L_2, _stringLiteral209558951, L_6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_7 = ___info1;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m3923964808(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetAssemblyData(System.Reflection.Assembly,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetAssemblyData_m2482115665 (RuntimeObject * __this /* static, unused */, Assembly_t * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetAssemblyData_m2482115665_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		Assembly_t * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_FullName() */, L_1);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info1;
		Assembly_t * L_5 = ___instance0;
		NullCheck(L_5);
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_FullName() */, L_5);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral209558951, L_6, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_7 = ___info1;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		SerializationInfo_SetType_m3923964808(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetModuleData_m1550266881 (RuntimeObject * __this /* static, unused */, Module_t2987026101 * ___instance0, SerializationInfo_t950877179 * ___info1, StreamingContext_t3711869237  ___ctx2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetModuleData_m1550266881_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t950877179 * L_0 = ___info1;
		Module_t2987026101 * L_1 = ___instance0;
		NullCheck(L_1);
		String_t* L_2 = Module_get_ScopeName_m4152486041(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		SerializationInfo_AddValue_m2872281893(L_0, _stringLiteral2037252898, L_2, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_3 = ___info1;
		NullCheck(L_3);
		SerializationInfo_AddValue_m412754688(L_3, _stringLiteral3283586028, 5, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_4 = ___info1;
		Module_t2987026101 * L_5 = ___instance0;
		NullCheck(L_5);
		Assembly_t * L_6 = Module_get_Assembly_m2485063752(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Reflection.Assembly::get_FullName() */, L_6);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral209558951, L_7, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_8 = ___info1;
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (UnitySerializationHolder_t431912834_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		SerializationInfo_SetType_m3923964808(L_8, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void UnitySerializationHolder_GetObjectData_m3377455907 (UnitySerializationHolder_t431912834 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetObjectData_m3377455907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, UnitySerializationHolder_GetObjectData_m3377455907_RuntimeMethod_var);
	}
}
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C"  RuntimeObject * UnitySerializationHolder_GetRealObject_m1624354633 (UnitySerializationHolder_t431912834 * __this, StreamingContext_t3711869237  ___context0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnitySerializationHolder_GetRealObject_m1624354633_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	Assembly_t * V_1 = NULL;
	uint8_t V_2 = 0;
	{
		uint8_t L_0 = __this->get__unityType_1();
		V_2 = L_0;
		uint8_t L_1 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)2)))
		{
			case 0:
			{
				goto IL_0041;
			}
			case 1:
			{
				goto IL_006c;
			}
			case 2:
			{
				goto IL_0028;
			}
			case 3:
			{
				goto IL_0047;
			}
			case 4:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_006c;
	}

IL_0028:
	{
		String_t* L_2 = __this->get__assemblyName_2();
		Assembly_t * L_3 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Assembly_t * L_4 = V_0;
		String_t* L_5 = __this->get__data_0();
		NullCheck(L_4);
		Type_t * L_6 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(25 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, L_5);
		return L_6;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DBNull_t3725197148_il2cpp_TypeInfo_var);
		DBNull_t3725197148 * L_7 = ((DBNull_t3725197148_StaticFields*)il2cpp_codegen_static_fields_for(DBNull_t3725197148_il2cpp_TypeInfo_var))->get_Value_0();
		return L_7;
	}

IL_0047:
	{
		String_t* L_8 = __this->get__assemblyName_2();
		Assembly_t * L_9 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		Assembly_t * L_10 = V_1;
		String_t* L_11 = __this->get__data_0();
		NullCheck(L_10);
		Module_t2987026101 * L_12 = Assembly_GetModule_m3867448062(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0060:
	{
		String_t* L_13 = __this->get__data_0();
		Assembly_t * L_14 = Assembly_Load_m3487507613(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_006c:
	{
		String_t* L_15 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral553700296, /*hidden argument*/NULL);
		NotSupportedException_t1314879016 * L_16 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2494070935(L_16, L_15, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, NULL, UnitySerializationHolder_GetRealObject_m1624354633_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_pinvoke_back(const ValueType_t3640485471_marshaled_pinvoke& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_pinvoke_cleanup(ValueType_t3640485471_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com(const ValueType_t3640485471& unmarshaled, ValueType_t3640485471_marshaled_com& marshaled)
{
}
extern "C" void ValueType_t3640485471_marshal_com_back(const ValueType_t3640485471_marshaled_com& marshaled, ValueType_t3640485471& unmarshaled)
{
}
// Conversion method for clean up from marshalling of: System.ValueType
extern "C" void ValueType_t3640485471_marshal_com_cleanup(ValueType_t3640485471_marshaled_com& marshaled)
{
}
// System.Void System.ValueType::.ctor()
extern "C"  void ValueType__ctor_m2036258423 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.ValueType::InternalEquals(System.Object,System.Object,System.Object[]&)
extern "C"  bool ValueType_InternalEquals_m1384040357 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, ObjectU5BU5D_t2843939325** ___fields2, const RuntimeMethod* method)
{
	typedef bool (*ValueType_InternalEquals_m1384040357_ftn) (RuntimeObject *, RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalEquals_m1384040357_ftn)mscorlib::System::ValueType::InternalEquals) (___o10, ___o21, ___fields2);
}
// System.Boolean System.ValueType::DefaultEquals(System.Object,System.Object)
extern "C"  bool ValueType_DefaultEquals_m2927252100 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o10, RuntimeObject * ___o21, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	{
		RuntimeObject * L_0 = ___o21;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___o10;
		RuntimeObject * L_2 = ___o21;
		bool L_3 = ValueType_InternalEquals_m1384040357(NULL /*static, unused*/, L_1, L_2, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_3;
		ObjectU5BU5D_t2843939325* L_4 = V_0;
		if (L_4)
		{
			goto IL_001a;
		}
	}
	{
		bool L_5 = V_1;
		return L_5;
	}

IL_001a:
	{
		V_2 = 0;
		goto IL_0053;
	}

IL_0021:
	{
		ObjectU5BU5D_t2843939325* L_6 = V_0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_3 = L_9;
		ObjectU5BU5D_t2843939325* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		int32_t L_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		RuntimeObject * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_4 = L_13;
		RuntimeObject * L_14 = V_3;
		if (L_14)
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject * L_15 = V_4;
		if (L_15)
		{
			goto IL_003e;
		}
	}
	{
		goto IL_004f;
	}

IL_003e:
	{
		return (bool)0;
	}

IL_0040:
	{
		RuntimeObject * L_16 = V_3;
		RuntimeObject * L_17 = V_4;
		NullCheck(L_16);
		bool L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_17);
		if (L_18)
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)2));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		ObjectU5BU5D_t2843939325* L_21 = V_0;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_21)->max_length)))))))
		{
			goto IL_0021;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean System.ValueType::Equals(System.Object)
extern "C"  bool ValueType_Equals_m1524437845 (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = ValueType_DefaultEquals_m2927252100(NULL /*static, unused*/, __this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.ValueType::InternalGetHashCode(System.Object,System.Object[]&)
extern "C"  int32_t ValueType_InternalGetHashCode_m58786863 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___o0, ObjectU5BU5D_t2843939325** ___fields1, const RuntimeMethod* method)
{
	typedef int32_t (*ValueType_InternalGetHashCode_m58786863_ftn) (RuntimeObject *, ObjectU5BU5D_t2843939325**);
	using namespace il2cpp::icalls;
	return  ((ValueType_InternalGetHashCode_m58786863_ftn)mscorlib::System::ValueType::InternalGetHashCode) (___o0, ___fields1);
}
// System.Int32 System.ValueType::GetHashCode()
extern "C"  int32_t ValueType_GetHashCode_m715362416 (RuntimeObject * __this, const RuntimeMethod* method)
{
	ObjectU5BU5D_t2843939325* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ValueType_InternalGetHashCode_m58786863(NULL /*static, unused*/, __this, (ObjectU5BU5D_t2843939325**)(&V_0), /*hidden argument*/NULL);
		V_1 = L_0;
		ObjectU5BU5D_t2843939325* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		V_2 = 0;
		goto IL_002d;
	}

IL_0016:
	{
		ObjectU5BU5D_t2843939325* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		int32_t L_6 = V_1;
		ObjectU5BU5D_t2843939325* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		int32_t L_11 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_10);
		V_1 = ((int32_t)((int32_t)L_6^(int32_t)L_11));
	}

IL_0029:
	{
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t2843939325* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_0016;
		}
	}

IL_0036:
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.String System.ValueType::ToString()
extern "C"  String_t* ValueType_ToString_m2292123621 (RuntimeObject * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(19 /* System.String System.Type::get_FullName() */, L_0);
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
// System.Void System.Version::.ctor()
extern "C"  void Version__ctor_m872301635 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Version_CheckedSet_m654078179(__this, 2, 0, 0, (-1), (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.String)
extern "C"  void Version__ctor_m1394137037 (Version_t3456873960 * __this, String_t* ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version__ctor_m1394137037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t1281789340* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		V_2 = (-1);
		V_3 = (-1);
		V_4 = (-1);
		V_5 = (-1);
		String_t* L_0 = ___version0;
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral1902401671, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version__ctor_m1394137037_RuntimeMethod_var);
	}

IL_0021:
	{
		String_t* L_2 = ___version0;
		CharU5BU5D_t3528271667* L_3 = ((CharU5BU5D_t3528271667*)SZArrayNew(CharU5BU5D_t3528271667_il2cpp_TypeInfo_var, (uint32_t)1));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_2);
		StringU5BU5D_t1281789340* L_4 = String_Split_m3646115398(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		StringU5BU5D_t1281789340* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length))));
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) < ((int32_t)2)))
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) <= ((int32_t)4)))
		{
			goto IL_0055;
		}
	}

IL_0045:
	{
		String_t* L_8 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral1532400954, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_9 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, Version__ctor_m1394137037_RuntimeMethod_var);
	}

IL_0055:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t1281789340* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12 = 0;
		String_t* L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		int32_t L_14 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_0065:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) <= ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		StringU5BU5D_t1281789340* L_16 = V_1;
		NullCheck(L_16);
		int32_t L_17 = 1;
		String_t* L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		int32_t L_19 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_0075:
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) <= ((int32_t)2)))
		{
			goto IL_0086;
		}
	}
	{
		StringU5BU5D_t1281789340* L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = 2;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		int32_t L_24 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
	}

IL_0086:
	{
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) <= ((int32_t)3)))
		{
			goto IL_0097;
		}
	}
	{
		StringU5BU5D_t1281789340* L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = 3;
		String_t* L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = Int32_Parse_m1033611559(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		V_5 = L_29;
	}

IL_0097:
	{
		int32_t L_30 = V_0;
		int32_t L_31 = V_2;
		int32_t L_32 = V_3;
		int32_t L_33 = V_4;
		int32_t L_34 = V_5;
		Version_CheckedSet_m654078179(__this, L_30, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32)
extern "C"  void Version__ctor_m3537335798 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		Version_CheckedSet_m654078179(__this, 2, L_0, L_1, 0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m1550720073 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		Version_CheckedSet_m654078179(__this, 3, L_0, L_1, L_2, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version__ctor_m417728625 (Version_t3456873960 * __this, int32_t ___major0, int32_t ___minor1, int32_t ___build2, int32_t ___revision3, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___major0;
		int32_t L_1 = ___minor1;
		int32_t L_2 = ___build2;
		int32_t L_3 = ___revision3;
		Version_CheckedSet_m654078179(__this, 4, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C"  void Version_CheckedSet_m654078179 (Version_t3456873960 * __this, int32_t ___defined0, int32_t ___major1, int32_t ___minor2, int32_t ___build3, int32_t ___revision4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CheckedSet_m654078179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___major1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_1 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_1, _stringLiteral419133523, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_0012:
	{
		int32_t L_2 = ___major1;
		__this->set__Major_1(L_2);
		int32_t L_3 = ___minor2;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_002b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_4 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_4, _stringLiteral2762033855, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_002b:
	{
		int32_t L_5 = ___minor2;
		__this->set__Minor_2(L_5);
		int32_t L_6 = ___defined0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0048;
		}
	}
	{
		__this->set__Build_3((-1));
		__this->set__Revision_4((-1));
		return;
	}

IL_0048:
	{
		int32_t L_7 = ___build3;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_8, _stringLiteral437191301, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_005b:
	{
		int32_t L_9 = ___build3;
		__this->set__Build_3(L_9);
		int32_t L_10 = ___defined0;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0072;
		}
	}
	{
		__this->set__Revision_4((-1));
		return;
	}

IL_0072:
	{
		int32_t L_11 = ___revision4;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0085;
		}
	}
	{
		ArgumentOutOfRangeException_t777629997 * L_12 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m3628145864(L_12, _stringLiteral3187820736, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, NULL, Version_CheckedSet_m654078179_RuntimeMethod_var);
	}

IL_0085:
	{
		int32_t L_13 = ___revision4;
		__this->set__Revision_4(L_13);
		return;
	}
}
// System.Int32 System.Version::get_Build()
extern "C"  int32_t Version_get_Build_m3667751407 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Build_3();
		return L_0;
	}
}
// System.Int32 System.Version::get_Major()
extern "C"  int32_t Version_get_Major_m2457928275 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Major_1();
		return L_0;
	}
}
// System.Int32 System.Version::get_Minor()
extern "C"  int32_t Version_get_Minor_m150536655 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Minor_2();
		return L_0;
	}
}
// System.Int32 System.Version::get_Revision()
extern "C"  int32_t Version_get_Revision_m3982234017 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		return L_0;
	}
}
// System.Object System.Version::Clone()
extern "C"  RuntimeObject * Version_Clone_m1749041863 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Clone_m1749041863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__Build_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_1 = __this->get__Major_1();
		int32_t L_2 = __this->get__Minor_2();
		Version_t3456873960 * L_3 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m3537335798(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001e:
	{
		int32_t L_4 = __this->get__Revision_4();
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = __this->get__Major_1();
		int32_t L_6 = __this->get__Minor_2();
		int32_t L_7 = __this->get__Build_3();
		Version_t3456873960 * L_8 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m1550720073(L_8, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0042:
	{
		int32_t L_9 = __this->get__Major_1();
		int32_t L_10 = __this->get__Minor_2();
		int32_t L_11 = __this->get__Build_3();
		int32_t L_12 = __this->get__Revision_4();
		Version_t3456873960 * L_13 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_13, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Int32 System.Version::CompareTo(System.Object)
extern "C"  int32_t Version_CompareTo_m1662919407 (Version_t3456873960 * __this, RuntimeObject * ___version0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CompareTo_m1662919407_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___version0;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return 1;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___version0;
		if (((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_1, Version_t3456873960_il2cpp_TypeInfo_var)))
		{
			goto IL_0023;
		}
	}
	{
		String_t* L_2 = Locale_GetText_m3374010885(NULL /*static, unused*/, _stringLiteral3512823065, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Version_CompareTo_m1662919407_RuntimeMethod_var);
	}

IL_0023:
	{
		RuntimeObject * L_4 = ___version0;
		int32_t L_5 = Version_CompareTo_m3146217210(__this, ((Version_t3456873960 *)CastclassSealed((RuntimeObject*)L_4, Version_t3456873960_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean System.Version::Equals(System.Object)
extern "C"  bool Version_Equals_m3073813696 (Version_t3456873960 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_Equals_m3073813696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		bool L_1 = Version_Equals_m1564427710(__this, ((Version_t3456873960 *)IsInstSealed((RuntimeObject*)L_0, Version_t3456873960_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 System.Version::CompareTo(System.Version)
extern "C"  int32_t Version_CompareTo_m3146217210 (Version_t3456873960 * __this, Version_t3456873960 * ___value0, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___value0;
		bool L_1 = Version_op_Equality_m3804852517(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return 1;
	}

IL_000e:
	{
		int32_t L_2 = __this->get__Major_1();
		Version_t3456873960 * L_3 = ___value0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__Major_1();
		if ((((int32_t)L_2) <= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		return 1;
	}

IL_0021:
	{
		int32_t L_5 = __this->get__Major_1();
		Version_t3456873960 * L_6 = ___value0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get__Major_1();
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_0034;
		}
	}
	{
		return (-1);
	}

IL_0034:
	{
		int32_t L_8 = __this->get__Minor_2();
		Version_t3456873960 * L_9 = ___value0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get__Minor_2();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0047;
		}
	}
	{
		return 1;
	}

IL_0047:
	{
		int32_t L_11 = __this->get__Minor_2();
		Version_t3456873960 * L_12 = ___value0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get__Minor_2();
		if ((((int32_t)L_11) >= ((int32_t)L_13)))
		{
			goto IL_005a;
		}
	}
	{
		return (-1);
	}

IL_005a:
	{
		int32_t L_14 = __this->get__Build_3();
		Version_t3456873960 * L_15 = ___value0;
		NullCheck(L_15);
		int32_t L_16 = L_15->get__Build_3();
		if ((((int32_t)L_14) <= ((int32_t)L_16)))
		{
			goto IL_006d;
		}
	}
	{
		return 1;
	}

IL_006d:
	{
		int32_t L_17 = __this->get__Build_3();
		Version_t3456873960 * L_18 = ___value0;
		NullCheck(L_18);
		int32_t L_19 = L_18->get__Build_3();
		if ((((int32_t)L_17) >= ((int32_t)L_19)))
		{
			goto IL_0080;
		}
	}
	{
		return (-1);
	}

IL_0080:
	{
		int32_t L_20 = __this->get__Revision_4();
		Version_t3456873960 * L_21 = ___value0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__Revision_4();
		if ((((int32_t)L_20) <= ((int32_t)L_22)))
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_23 = __this->get__Revision_4();
		Version_t3456873960 * L_24 = ___value0;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__Revision_4();
		if ((((int32_t)L_23) >= ((int32_t)L_25)))
		{
			goto IL_00a6;
		}
	}
	{
		return (-1);
	}

IL_00a6:
	{
		return 0;
	}
}
// System.Boolean System.Version::Equals(System.Version)
extern "C"  bool Version_Equals_m1564427710 (Version_t3456873960 * __this, Version_t3456873960 * ___obj0, const RuntimeMethod* method)
{
	int32_t G_B6_0 = 0;
	{
		Version_t3456873960 * L_0 = ___obj0;
		bool L_1 = Version_op_Inequality_m1696193441(NULL /*static, unused*/, L_0, (Version_t3456873960 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_2 = ___obj0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get__Major_1();
		int32_t L_4 = __this->get__Major_1();
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_5 = ___obj0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get__Minor_2();
		int32_t L_7 = __this->get__Minor_2();
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_8 = ___obj0;
		NullCheck(L_8);
		int32_t L_9 = L_8->get__Build_3();
		int32_t L_10 = __this->get__Build_3();
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_004f;
		}
	}
	{
		Version_t3456873960 * L_11 = ___obj0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get__Revision_4();
		int32_t L_13 = __this->get__Revision_4();
		G_B6_0 = ((((int32_t)L_12) == ((int32_t)L_13))? 1 : 0);
		goto IL_0050;
	}

IL_004f:
	{
		G_B6_0 = 0;
	}

IL_0050:
	{
		return (bool)G_B6_0;
	}
}
// System.Int32 System.Version::GetHashCode()
extern "C"  int32_t Version_GetHashCode_m672974201 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__Revision_4();
		int32_t L_1 = __this->get__Build_3();
		int32_t L_2 = __this->get__Minor_2();
		int32_t L_3 = __this->get__Major_1();
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0<<(int32_t)((int32_t)24)))|(int32_t)((int32_t)((int32_t)L_1<<(int32_t)((int32_t)16)))))|(int32_t)((int32_t)((int32_t)L_2<<(int32_t)8))))|(int32_t)L_3));
	}
}
// System.String System.Version::ToString()
extern "C"  String_t* Version_ToString_m2279867705 (Version_t3456873960 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_ToString_m2279867705_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		int32_t* L_0 = __this->get_address_of__Major_1();
		String_t* L_1 = Int32_ToString_m141394615((int32_t*)L_0, /*hidden argument*/NULL);
		int32_t* L_2 = __this->get_address_of__Minor_2();
		String_t* L_3 = Int32_ToString_m141394615((int32_t*)L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, L_1, _stringLiteral3452614530, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get__Build_3();
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_6 = V_0;
		int32_t* L_7 = __this->get_address_of__Build_3();
		String_t* L_8 = Int32_ToString_m141394615((int32_t*)L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m3755062657(NULL /*static, unused*/, L_6, _stringLiteral3452614530, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0044:
	{
		int32_t L_10 = __this->get__Revision_4();
		if ((((int32_t)L_10) == ((int32_t)(-1))))
		{
			goto IL_0067;
		}
	}
	{
		String_t* L_11 = V_0;
		int32_t* L_12 = __this->get_address_of__Revision_4();
		String_t* L_13 = Int32_ToString_m141394615((int32_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, L_11, _stringLiteral3452614530, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0067:
	{
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Version System.Version::CreateFromString(System.String)
extern "C"  Version_t3456873960 * Version_CreateFromString_m719054818 (RuntimeObject * __this /* static, unused */, String_t* ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Version_CreateFromString_m719054818_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppChar V_7 = 0x0;
	int32_t V_8 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		V_2 = 0;
		V_3 = 0;
		V_4 = 1;
		V_5 = (-1);
		String_t* L_0 = ___info0;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Version_t3456873960 * L_1 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_1, 0, 0, 0, 0, /*hidden argument*/NULL);
		return L_1;
	}

IL_001e:
	{
		V_6 = 0;
		goto IL_00c8;
	}

IL_0026:
	{
		String_t* L_2 = ___info0;
		int32_t L_3 = V_6;
		NullCheck(L_2);
		Il2CppChar L_4 = String_get_Chars_m2986988803(L_2, L_3, /*hidden argument*/NULL);
		V_7 = L_4;
		Il2CppChar L_5 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Char_t3634460470_il2cpp_TypeInfo_var);
		bool L_6 = Char_IsDigit_m3646673943(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0062;
		}
	}
	{
		int32_t L_7 = V_5;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_0050;
		}
	}
	{
		Il2CppChar L_8 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)((int32_t)48)));
		goto IL_005d;
	}

IL_0050:
	{
		int32_t L_9 = V_5;
		Il2CppChar L_10 = V_7;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_9, (int32_t)((int32_t)10))), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)((int32_t)48)))));
	}

IL_005d:
	{
		goto IL_00b5;
	}

IL_0062:
	{
		int32_t L_11 = V_5;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		int32_t L_12 = V_4;
		V_8 = L_12;
		int32_t L_13 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))
		{
			case 0:
			{
				goto IL_008c;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00a4;
			}
		}
	}
	{
		goto IL_00ac;
	}

IL_008c:
	{
		int32_t L_14 = V_5;
		V_0 = L_14;
		goto IL_00ac;
	}

IL_0094:
	{
		int32_t L_15 = V_5;
		V_1 = L_15;
		goto IL_00ac;
	}

IL_009c:
	{
		int32_t L_16 = V_5;
		V_2 = L_16;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_17 = V_5;
		V_3 = L_17;
		goto IL_00ac;
	}

IL_00ac:
	{
		V_5 = (-1);
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_00b5:
	{
		int32_t L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)5))))
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00d5;
	}

IL_00c2:
	{
		int32_t L_20 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00c8:
	{
		int32_t L_21 = V_6;
		String_t* L_22 = ___info0;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m3847582255(L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_0026;
		}
	}

IL_00d5:
	{
		int32_t L_24 = V_5;
		if ((((int32_t)L_24) < ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		int32_t L_25 = V_4;
		V_8 = L_25;
		int32_t L_26 = V_8;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)))
		{
			case 0:
			{
				goto IL_00ff;
			}
			case 1:
			{
				goto IL_0107;
			}
			case 2:
			{
				goto IL_010f;
			}
			case 3:
			{
				goto IL_0117;
			}
		}
	}
	{
		goto IL_011f;
	}

IL_00ff:
	{
		int32_t L_27 = V_5;
		V_0 = L_27;
		goto IL_011f;
	}

IL_0107:
	{
		int32_t L_28 = V_5;
		V_1 = L_28;
		goto IL_011f;
	}

IL_010f:
	{
		int32_t L_29 = V_5;
		V_2 = L_29;
		goto IL_011f;
	}

IL_0117:
	{
		int32_t L_30 = V_5;
		V_3 = L_30;
		goto IL_011f;
	}

IL_011f:
	{
		int32_t L_31 = V_0;
		int32_t L_32 = V_1;
		int32_t L_33 = V_2;
		int32_t L_34 = V_3;
		Version_t3456873960 * L_35 = (Version_t3456873960 *)il2cpp_codegen_object_new(Version_t3456873960_il2cpp_TypeInfo_var);
		Version__ctor_m417728625(L_35, L_31, L_32, L_33, L_34, /*hidden argument*/NULL);
		return L_35;
	}
}
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
extern "C"  bool Version_op_Equality_m3804852517 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		bool L_2 = Object_Equals_m1397037629(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
extern "C"  bool Version_op_Inequality_m1696193441 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		bool L_2 = Object_Equals_m1397037629(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_GreaterThan(System.Version,System.Version)
extern "C"  bool Version_op_GreaterThan_m2354880383 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		NullCheck(L_0);
		int32_t L_2 = Version_CompareTo_m3146217210(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_GreaterThanOrEqual(System.Version,System.Version)
extern "C"  bool Version_op_GreaterThanOrEqual_m474945801 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		NullCheck(L_0);
		int32_t L_2 = Version_CompareTo_m3146217210(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
extern "C"  bool Version_op_LessThan_m3745610070 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		NullCheck(L_0);
		int32_t L_2 = Version_CompareTo_m3146217210(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean System.Version::op_LessThanOrEqual(System.Version,System.Version)
extern "C"  bool Version_op_LessThanOrEqual_m666140174 (RuntimeObject * __this /* static, unused */, Version_t3456873960 * ___v10, Version_t3456873960 * ___v21, const RuntimeMethod* method)
{
	{
		Version_t3456873960 * L_0 = ___v10;
		Version_t3456873960 * L_1 = ___v21;
		NullCheck(L_0);
		int32_t L_2 = Version_CompareTo_m3146217210(L_0, L_1, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___target0;
		WeakReference__ctor_m1054065938(__this, L_0, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
extern "C"  void WeakReference__ctor_m1054065938 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___trackResurrection1;
		__this->set_isLongReference_0(L_0);
		RuntimeObject * L_1 = ___target0;
		WeakReference_AllocateHandle_m1478975559(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference__ctor_m1244067698 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference__ctor_m1244067698_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference__ctor_m1244067698_RuntimeMethod_var);
	}

IL_0017:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		NullCheck(L_2);
		bool L_3 = SerializationInfo_GetBoolean_m1756153320(L_2, _stringLiteral3234942771, /*hidden argument*/NULL);
		__this->set_isLongReference_0(L_3);
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (RuntimeObject_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject * L_7 = SerializationInfo_GetValue_m42271953(L_4, _stringLiteral2922588279, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		WeakReference_AllocateHandle_m1478975559(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.WeakReference::AllocateHandle(System.Object)
extern "C"  void WeakReference_AllocateHandle_m1478975559 (WeakReference_t1334886716 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject * L_1 = ___target0;
		GCHandle_t3351438187  L_2 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_2);
		goto IL_002a;
	}

IL_001d:
	{
		RuntimeObject * L_3 = ___target0;
		GCHandle_t3351438187  L_4 = GCHandle_Alloc_m3823409740(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		__this->set_gcHandle_1(L_4);
	}

IL_002a:
	{
		return;
	}
}
// System.Boolean System.WeakReference::get_IsAlive()
extern "C"  bool WeakReference_get_IsAlive_m1867740323 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		return (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Object System.WeakReference::get_Target()
extern "C"  RuntimeObject * WeakReference_get_Target_m168713953 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = GCHandle_get_Target_m1824973883((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.WeakReference::set_Target(System.Object)
extern "C"  void WeakReference_set_Target_m1605157902 (WeakReference_t1334886716 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		RuntimeObject * L_1 = ___value0;
		GCHandle_set_Target_m1341806952((GCHandle_t3351438187 *)L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.WeakReference::get_TrackResurrection()
extern "C"  bool WeakReference_get_TrackResurrection_m942701017 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isLongReference_0();
		return L_0;
	}
}
// System.Void System.WeakReference::Finalize()
extern "C"  void WeakReference_Finalize_m2841826116 (WeakReference_t1334886716 * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		GCHandle_t3351438187 * L_0 = __this->get_address_of_gcHandle_1();
		GCHandle_Free_m1457699368((GCHandle_t3351438187 *)L_0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x17, FINALLY_0010);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0010;
	}

FINALLY_0010:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(16)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(16)
	{
		IL2CPP_JUMP_TBL(0x17, IL_0017)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0017:
	{
		return;
	}
}
// System.Void System.WeakReference::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void WeakReference_GetObjectData_m2192383095 (WeakReference_t1334886716 * __this, SerializationInfo_t950877179 * ___info0, StreamingContext_t3711869237  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WeakReference_GetObjectData_m2192383095_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SerializationInfo_t950877179 * L_0 = ___info0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral79347, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, WeakReference_GetObjectData_m2192383095_RuntimeMethod_var);
	}

IL_0011:
	{
		SerializationInfo_t950877179 * L_2 = ___info0;
		bool L_3 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.WeakReference::get_TrackResurrection() */, __this);
		NullCheck(L_2);
		SerializationInfo_AddValue_m3427199315(L_2, _stringLiteral3234942771, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	try
	{ // begin try (depth: 1)
		SerializationInfo_t950877179 * L_4 = ___info0;
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, __this);
		NullCheck(L_4);
		SerializationInfo_AddValue_m2872281893(L_4, _stringLiteral2922588279, L_5, /*hidden argument*/NULL);
		goto IL_004a;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0038;
		throw e;
	}

CATCH_0038:
	{ // begin catch(System.Exception)
		SerializationInfo_t950877179 * L_6 = ___info0;
		NullCheck(L_6);
		SerializationInfo_AddValue_m2872281893(L_6, _stringLiteral2922588279, NULL, /*hidden argument*/NULL);
		goto IL_004a;
	} // end catch (depth: 1)

IL_004a:
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
// System.Void System.WindowsConsoleDriver::.ctor()
extern "C"  void WindowsConsoleDriver__ctor_m141100690 (WindowsConsoleDriver_t3991887195 * __this, const RuntimeMethod* method)
{
	ConsoleScreenBufferInfo_t3095351730  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		intptr_t L_0 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-11), /*hidden argument*/NULL);
		__this->set_outputHandle_1(L_0);
		intptr_t L_1 = WindowsConsoleDriver_GetStdHandle_m23119533(NULL /*static, unused*/, ((int32_t)-10), /*hidden argument*/NULL);
		__this->set_inputHandle_0(L_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ConsoleScreenBufferInfo_t3095351730 ));
		intptr_t L_2 = __this->get_outputHandle_1();
		WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087(NULL /*static, unused*/, L_2, (ConsoleScreenBufferInfo_t3095351730 *)(&V_0), /*hidden argument*/NULL);
		int16_t L_3 = (&V_0)->get_Attribute_2();
		__this->set_defaultAttribute_2(L_3);
		return;
	}
}
// System.ConsoleKeyInfo System.WindowsConsoleDriver::ReadKey(System.Boolean)
extern "C"  ConsoleKeyInfo_t1802691652  WindowsConsoleDriver_ReadKey_m209631140 (WindowsConsoleDriver_t3991887195 * __this, bool ___intercept0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WindowsConsoleDriver_ReadKey_m209631140_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InputRecord_t2660212290  V_1;
	memset(&V_1, 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		il2cpp_codegen_initobj((&V_1), sizeof(InputRecord_t2660212290 ));
	}

IL_0008:
	{
		intptr_t L_0 = __this->get_inputHandle_0();
		bool L_1 = WindowsConsoleDriver_ReadConsoleInput_m1790694890(NULL /*static, unused*/, L_0, (InputRecord_t2660212290 *)(&V_1), 1, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0037;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_t1757017490_il2cpp_TypeInfo_var);
		int32_t L_2 = Marshal_GetLastWin32Error_m1272610344(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1071424308, L_4, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, WindowsConsoleDriver_ReadKey_m209631140_RuntimeMethod_var);
	}

IL_0037:
	{
		int16_t L_7 = (&V_1)->get_EventType_0();
		if ((((int32_t)L_7) == ((int32_t)1)))
		{
			goto IL_0050;
		}
	}
	{
		bool L_8 = (&V_1)->get_KeyDown_1();
		if (!L_8)
		{
			goto IL_0008;
		}
	}

IL_0050:
	{
		int32_t L_9 = (&V_1)->get_ControlKeyState_6();
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_9&(int32_t)3))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_10 = (&V_1)->get_ControlKeyState_6();
		V_3 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_10&(int32_t)((int32_t)12)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		int32_t L_11 = (&V_1)->get_ControlKeyState_6();
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_11&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Il2CppChar L_12 = (&V_1)->get_Character_5();
		int16_t L_13 = (&V_1)->get_VirtualKeyCode_3();
		bool L_14 = V_4;
		bool L_15 = V_2;
		bool L_16 = V_3;
		ConsoleKeyInfo_t1802691652  L_17;
		memset(&L_17, 0, sizeof(L_17));
		ConsoleKeyInfo__ctor_m535940175((&L_17), L_12, L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// System.IntPtr System.WindowsConsoleDriver::GetStdHandle(System.Handles)
extern "C"  intptr_t WindowsConsoleDriver_GetStdHandle_m23119533 (RuntimeObject * __this /* static, unused */, int32_t ___handle0, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetStdHandle", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetStdHandle'"), NULL, NULL);
		}
	}

	// Native function invocation
	intptr_t returnValue = il2cppPInvokeFunc(___handle0);
	il2cpp_codegen_marshal_store_last_error();

	return returnValue;
}
// System.Boolean System.WindowsConsoleDriver::GetConsoleScreenBufferInfo(System.IntPtr,System.ConsoleScreenBufferInfo&)
extern "C"  bool WindowsConsoleDriver_GetConsoleScreenBufferInfo_m3609341087 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, ConsoleScreenBufferInfo_t3095351730 * ___info1, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, ConsoleScreenBufferInfo_t3095351730 *);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(ConsoleScreenBufferInfo_t3095351730 *);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "GetConsoleScreenBufferInfo", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'GetConsoleScreenBufferInfo'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___info1' to native representation
	ConsoleScreenBufferInfo_t3095351730  ____info1_empty = {};

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, (&____info1_empty));
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___info1' back from native representation
	*___info1 = ____info1_empty;

	return static_cast<bool>(returnValue);
}
// System.Boolean System.WindowsConsoleDriver::ReadConsoleInput(System.IntPtr,System.InputRecord&,System.Int32,System.Int32&)
extern "C"  bool WindowsConsoleDriver_ReadConsoleInput_m1790694890 (RuntimeObject * __this /* static, unused */, intptr_t ___handle0, InputRecord_t2660212290 * ___record1, int32_t ___length2, int32_t* ___nread3, const RuntimeMethod* method)
{


	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t, InputRecord_t2660212290_marshaled_pinvoke*, int32_t, int32_t*);
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(InputRecord_t2660212290_marshaled_pinvoke*) + sizeof(int32_t) + sizeof(int32_t*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("kernel32.dll"), "ReadConsoleInput", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);

		if (il2cppPInvokeFunc == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: 'ReadConsoleInput'"), NULL, NULL);
		}
	}

	// Marshaling of parameter '___record1' to native representation
	InputRecord_t2660212290_marshaled_pinvoke ____record1_empty = {};
	InputRecord_t2660212290_marshaled_pinvoke* ____record1_marshaled = &____record1_empty;

	// Marshaling of parameter '___nread3' to native representation
	int32_t ____nread3_empty = 0;

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc(___handle0, ____record1_marshaled, ___length2, (&____nread3_empty));
	il2cpp_codegen_marshal_store_last_error();

	// Marshaling of parameter '___record1' back from native representation
	InputRecord_t2660212290  _____record1_marshaled_unmarshaled_dereferenced;
	memset(&_____record1_marshaled_unmarshaled_dereferenced, 0, sizeof(_____record1_marshaled_unmarshaled_dereferenced));
	InputRecord_t2660212290_marshal_pinvoke_back(*____record1_marshaled, _____record1_marshaled_unmarshaled_dereferenced);
	*___record1 = _____record1_marshaled_unmarshaled_dereferenced;

	// Marshaling cleanup of parameter '___record1' native representation
	InputRecord_t2660212290_marshal_pinvoke_cleanup(*____record1_marshaled);

	// Marshaling of parameter '___nread3' back from native representation
	*___nread3 = ____nread3_empty;

	return static_cast<bool>(returnValue);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
