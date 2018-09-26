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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Configuration.SectionInformation
struct SectionInformation_t2821611020;
// System.String
struct String_t;
// System.NotImplementedException
struct NotImplementedException_t3489357830;
// System.Configuration.ProtectedConfigurationProvider
struct ProtectedConfigurationProvider_t413290519;
// System.Configuration.ConfigurationSection
struct ConfigurationSection_t3156163955;
// System.Configuration.StringValidator
struct StringValidator_t4226114403;
// System.Configuration.ConfigurationValidatorBase
struct ConfigurationValidatorBase_t888490966;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type
struct Type_t;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.Configuration.StringValidatorAttribute
struct StringValidatorAttribute_t905173687;
// System.Configuration.ConfigurationValidatorAttribute
struct ConfigurationValidatorAttribute_t448955463;
// System.Configuration.SubclassTypeValidator
struct SubclassTypeValidator_t2472216208;
// System.Configuration.SubclassTypeValidatorAttribute
struct SubclassTypeValidatorAttribute_t1118469820;
// System.Configuration.TimeSpanMinutesConverter
struct TimeSpanMinutesConverter_t730211177;
// System.Configuration.ConfigurationConverterBase
struct ConfigurationConverterBase_t770649384;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2998566513;
// System.Globalization.CultureInfo
struct CultureInfo_t4157843068;
// System.Configuration.TimeSpanMinutesOrInfiniteConverter
struct TimeSpanMinutesOrInfiniteConverter_t2683336721;
// System.Configuration.TimeSpanSecondsConverter
struct TimeSpanSecondsConverter_t1574829041;
// System.Configuration.TimeSpanSecondsOrInfiniteConverter
struct TimeSpanSecondsOrInfiniteConverter_t2792648515;
// System.Configuration.TimeSpanValidator
struct TimeSpanValidator_t679610852;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Configuration.TimeSpanValidatorAttribute
struct TimeSpanValidatorAttribute_t3672454306;
// System.Configuration.TypeNameConverter
struct TypeNameConverter_t2823944111;
// System.Configuration.ValidatorCallback
struct ValidatorCallback_t1396763873;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Configuration.WhiteSpaceTrimStringConverter
struct WhiteSpaceTrimStringConverter_t4027530507;
// System.MonoInternalNoteAttribute
struct MonoInternalNoteAttribute_t2284022217;
// System.MonoTODOAttribute
struct MonoTODOAttribute_t4131080584;
// System.MonoLimitationAttribute
struct MonoLimitationAttribute_t3672514599;
// System.MonoNotSupportedAttribute
struct MonoNotSupportedAttribute_t2563528020;
// System.Attribute
struct Attribute_t861562559;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
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
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Configuration.ElementMap
struct ElementMap_t2160633803;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t2852175726;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t446763386;
// System.Configuration.ElementInformation
struct ElementInformation_t2651568025;
// System.Configuration.ConfigurationElementProperty
struct ConfigurationElementProperty_t939439970;
// System.Configuration.Configuration
struct Configuration_t2529364143;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t4066281341;
// System.Byte
struct Byte_t1134296376;
// System.Double
struct Double_t594665363;
// System.UInt16
struct UInt16_t2177724958;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t3614337894;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* NotImplementedException_t3489357830_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SectionInformation_get_IsDeclarationRequired_m305191922_RuntimeMethod_var;
extern const uint32_t SectionInformation_get_IsDeclarationRequired_m305191922_MetadataUsageId;
extern const RuntimeMethod* SectionInformation_RevertToParent_m229743672_RuntimeMethod_var;
extern const uint32_t SectionInformation_RevertToParent_m229743672_MetadataUsageId;
extern const RuntimeType* String_t_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const uint32_t StringValidator_CanValidate_m1357874184_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const RuntimeMethod* StringValidator_Validate_m2020870501_RuntimeMethod_var;
extern String_t* _stringLiteral3907706024;
extern String_t* _stringLiteral799920322;
extern String_t* _stringLiteral3765362116;
extern String_t* _stringLiteral3198361138;
extern const uint32_t StringValidator_Validate_m2020870501_MetadataUsageId;
extern RuntimeClass* StringValidator_t4226114403_il2cpp_TypeInfo_var;
extern const uint32_t StringValidatorAttribute_get_ValidatorInstance_m1604745185_MetadataUsageId;
extern const RuntimeType* Type_t_0_0_0_var;
extern const uint32_t SubclassTypeValidator_CanValidate_m537228613_MetadataUsageId;
extern const RuntimeMethod* SubclassTypeValidator_Validate_m3157655990_RuntimeMethod_var;
extern String_t* _stringLiteral3725676252;
extern const uint32_t SubclassTypeValidator_Validate_m3157655990_MetadataUsageId;
extern RuntimeClass* SubclassTypeValidator_t2472216208_il2cpp_TypeInfo_var;
extern const uint32_t SubclassTypeValidatorAttribute_get_ValidatorInstance_m485730132_MetadataUsageId;
extern RuntimeClass* TimeSpan_t881159249_il2cpp_TypeInfo_var;
extern const uint32_t TimeSpanMinutesConverter_ConvertFrom_m3720439865_MetadataUsageId;
extern const RuntimeType* TimeSpan_t881159249_0_0_0_var;
extern const RuntimeMethod* TimeSpanMinutesConverter_ConvertTo_m3578471192_RuntimeMethod_var;
extern const uint32_t TimeSpanMinutesConverter_ConvertTo_m3578471192_MetadataUsageId;
extern String_t* _stringLiteral3907270169;
extern const uint32_t TimeSpanMinutesOrInfiniteConverter_ConvertFrom_m2329453420_MetadataUsageId;
extern const RuntimeMethod* TimeSpanMinutesOrInfiniteConverter_ConvertTo_m3901938982_RuntimeMethod_var;
extern const uint32_t TimeSpanMinutesOrInfiniteConverter_ConvertTo_m3901938982_MetadataUsageId;
extern const RuntimeMethod* TimeSpanSecondsConverter_ConvertFrom_m1255085473_RuntimeMethod_var;
extern String_t* _stringLiteral2037252866;
extern const uint32_t TimeSpanSecondsConverter_ConvertFrom_m1255085473_MetadataUsageId;
extern const RuntimeMethod* TimeSpanSecondsConverter_ConvertTo_m1545092276_RuntimeMethod_var;
extern const uint32_t TimeSpanSecondsConverter_ConvertTo_m1545092276_MetadataUsageId;
extern const uint32_t TimeSpanSecondsOrInfiniteConverter_ConvertFrom_m230902720_MetadataUsageId;
extern const RuntimeMethod* TimeSpanSecondsOrInfiniteConverter_ConvertTo_m2244776874_RuntimeMethod_var;
extern const uint32_t TimeSpanSecondsOrInfiniteConverter_ConvertTo_m2244776874_MetadataUsageId;
extern const uint32_t TimeSpanValidator_CanValidate_m4097264626_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TimeSpanValidator_Validate_m2236800624_RuntimeMethod_var;
extern String_t* _stringLiteral3572078690;
extern String_t* _stringLiteral3786252490;
extern String_t* _stringLiteral140417379;
extern String_t* _stringLiteral2347504902;
extern const uint32_t TimeSpanValidator_Validate_m2236800624_MetadataUsageId;
extern String_t* _stringLiteral3405510866;
extern String_t* _stringLiteral527341921;
extern const uint32_t TimeSpanValidatorAttribute__ctor_m622942210_MetadataUsageId;
extern const uint32_t TimeSpanValidatorAttribute_get_MaxValue_m1330167427_MetadataUsageId;
extern const uint32_t TimeSpanValidatorAttribute_get_MinValue_m588299449_MetadataUsageId;
extern RuntimeClass* TimeSpanValidator_t679610852_il2cpp_TypeInfo_var;
extern const uint32_t TimeSpanValidatorAttribute_get_ValidatorInstance_m252928383_MetadataUsageId;
extern const uint32_t TypeNameConverter_ConvertFrom_m1283783259_MetadataUsageId;
extern const RuntimeMethod* TypeNameConverter_ConvertTo_m1301842820_RuntimeMethod_var;
extern String_t* _stringLiteral3493618073;
extern const uint32_t TypeNameConverter_ConvertTo_m1301842820_MetadataUsageId;
extern const uint32_t WhiteSpaceTrimStringConverter_ConvertFrom_m581056731_MetadataUsageId;
extern const RuntimeMethod* WhiteSpaceTrimStringConverter_ConvertTo_m1444531320_RuntimeMethod_var;
extern const uint32_t WhiteSpaceTrimStringConverter_ConvertTo_m1444531320_MetadataUsageId;

struct CharU5BU5D_t3528271667;
struct ObjectU5BU5D_t2843939325;


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
#ifndef CONFIGURATIONVALIDATORBASE_T888490966_H
#define CONFIGURATIONVALIDATORBASE_T888490966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationValidatorBase
struct  ConfigurationValidatorBase_t888490966  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONVALIDATORBASE_T888490966_H
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
#ifndef PROVIDERBASE_T2594774949_H
#define PROVIDERBASE_T2594774949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.Provider.ProviderBase
struct  ProviderBase_t2594774949  : public RuntimeObject
{
public:
	// System.Boolean System.Configuration.Provider.ProviderBase::alreadyInitialized
	bool ___alreadyInitialized_0;
	// System.String System.Configuration.Provider.ProviderBase::_description
	String_t* ____description_1;
	// System.String System.Configuration.Provider.ProviderBase::_name
	String_t* ____name_2;

public:
	inline static int32_t get_offset_of_alreadyInitialized_0() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ___alreadyInitialized_0)); }
	inline bool get_alreadyInitialized_0() const { return ___alreadyInitialized_0; }
	inline bool* get_address_of_alreadyInitialized_0() { return &___alreadyInitialized_0; }
	inline void set_alreadyInitialized_0(bool value)
	{
		___alreadyInitialized_0 = value;
	}

	inline static int32_t get_offset_of__description_1() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ____description_1)); }
	inline String_t* get__description_1() const { return ____description_1; }
	inline String_t** get_address_of__description_1() { return &____description_1; }
	inline void set__description_1(String_t* value)
	{
		____description_1 = value;
		Il2CppCodeGenWriteBarrier((&____description_1), value);
	}

	inline static int32_t get_offset_of__name_2() { return static_cast<int32_t>(offsetof(ProviderBase_t2594774949, ____name_2)); }
	inline String_t* get__name_2() const { return ____name_2; }
	inline String_t** get_address_of__name_2() { return &____name_2; }
	inline void set__name_2(String_t* value)
	{
		____name_2 = value;
		Il2CppCodeGenWriteBarrier((&____name_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERBASE_T2594774949_H
#ifndef CONFIGURATIONELEMENT_T3318566633_H
#define CONFIGURATIONELEMENT_T3318566633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t3318566633  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t2160633803 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t2852175726 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t446763386 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t2651568025 * ___elementInfo_6;
	// System.Configuration.ConfigurationElementProperty System.Configuration.ConfigurationElement::elementProperty
	ConfigurationElementProperty_t939439970 * ___elementProperty_7;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t2529364143 * ____configuration_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t4066281341 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t4066281341 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t4066281341 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___map_2)); }
	inline ElementMap_t2160633803 * get_map_2() const { return ___map_2; }
	inline ElementMap_t2160633803 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t2160633803 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t2852175726 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t2852175726 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t2852175726 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t446763386 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t446763386 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t446763386 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementInfo_6)); }
	inline ElementInformation_t2651568025 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t2651568025 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t2651568025 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of_elementProperty_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___elementProperty_7)); }
	inline ConfigurationElementProperty_t939439970 * get_elementProperty_7() const { return ___elementProperty_7; }
	inline ConfigurationElementProperty_t939439970 ** get_address_of_elementProperty_7() { return &___elementProperty_7; }
	inline void set_elementProperty_7(ConfigurationElementProperty_t939439970 * value)
	{
		___elementProperty_7 = value;
		Il2CppCodeGenWriteBarrier((&___elementProperty_7), value);
	}

	inline static int32_t get_offset_of__configuration_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ____configuration_8)); }
	inline Configuration_t2529364143 * get__configuration_8() const { return ____configuration_8; }
	inline Configuration_t2529364143 ** get_address_of__configuration_8() { return &____configuration_8; }
	inline void set__configuration_8(Configuration_t2529364143 * value)
	{
		____configuration_8 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_8), value);
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockElements_12)); }
	inline ConfigurationLockCollection_t4066281341 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t4066281341 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t4066281341 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t3318566633, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T3318566633_H
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
#ifndef TYPECONVERTER_T2249118273_H
#define TYPECONVERTER_T2249118273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t2249118273  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T2249118273_H
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
#ifndef CONFIGURATIONCONVERTERBASE_T770649384_H
#define CONFIGURATIONCONVERTERBASE_T770649384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationConverterBase
struct  ConfigurationConverterBase_t770649384  : public TypeConverter_t2249118273
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONCONVERTERBASE_T770649384_H
#ifndef MONOTODOATTRIBUTE_T4131080584_H
#define MONOTODOATTRIBUTE_T4131080584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080584  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080584, ___comment_0)); }
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
#endif // MONOTODOATTRIBUTE_T4131080584_H
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
#ifndef SUBCLASSTYPEVALIDATOR_T2472216208_H
#define SUBCLASSTYPEVALIDATOR_T2472216208_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SubclassTypeValidator
struct  SubclassTypeValidator_t2472216208  : public ConfigurationValidatorBase_t888490966
{
public:
	// System.Type System.Configuration.SubclassTypeValidator::baseClass
	Type_t * ___baseClass_0;

public:
	inline static int32_t get_offset_of_baseClass_0() { return static_cast<int32_t>(offsetof(SubclassTypeValidator_t2472216208, ___baseClass_0)); }
	inline Type_t * get_baseClass_0() const { return ___baseClass_0; }
	inline Type_t ** get_address_of_baseClass_0() { return &___baseClass_0; }
	inline void set_baseClass_0(Type_t * value)
	{
		___baseClass_0 = value;
		Il2CppCodeGenWriteBarrier((&___baseClass_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBCLASSTYPEVALIDATOR_T2472216208_H
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
#ifndef PROTECTEDCONFIGURATIONPROVIDER_T413290519_H
#define PROTECTEDCONFIGURATIONPROVIDER_T413290519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ProtectedConfigurationProvider
struct  ProtectedConfigurationProvider_t413290519  : public ProviderBase_t2594774949
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROTECTEDCONFIGURATIONPROVIDER_T413290519_H
#ifndef CONFIGURATIONSECTION_T3156163955_H
#define CONFIGURATIONSECTION_T3156163955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t3156163955  : public ConfigurationElement_t3318566633
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2821611020 * ___sectionInformation_14;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_15;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_16;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_17;

public:
	inline static int32_t get_offset_of_sectionInformation_14() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___sectionInformation_14)); }
	inline SectionInformation_t2821611020 * get_sectionInformation_14() const { return ___sectionInformation_14; }
	inline SectionInformation_t2821611020 ** get_address_of_sectionInformation_14() { return &___sectionInformation_14; }
	inline void set_sectionInformation_14(SectionInformation_t2821611020 * value)
	{
		___sectionInformation_14 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_14), value);
	}

	inline static int32_t get_offset_of_section_handler_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___section_handler_15)); }
	inline RuntimeObject* get_section_handler_15() const { return ___section_handler_15; }
	inline RuntimeObject** get_address_of_section_handler_15() { return &___section_handler_15; }
	inline void set_section_handler_15(RuntimeObject* value)
	{
		___section_handler_15 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_15), value);
	}

	inline static int32_t get_offset_of_externalDataXml_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ___externalDataXml_16)); }
	inline String_t* get_externalDataXml_16() const { return ___externalDataXml_16; }
	inline String_t** get_address_of_externalDataXml_16() { return &___externalDataXml_16; }
	inline void set_externalDataXml_16(String_t* value)
	{
		___externalDataXml_16 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_16), value);
	}

	inline static int32_t get_offset_of__configContext_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t3156163955, ____configContext_17)); }
	inline RuntimeObject * get__configContext_17() const { return ____configContext_17; }
	inline RuntimeObject ** get_address_of__configContext_17() { return &____configContext_17; }
	inline void set__configContext_17(RuntimeObject * value)
	{
		____configContext_17 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T3156163955_H
#ifndef STRINGVALIDATOR_T4226114403_H
#define STRINGVALIDATOR_T4226114403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.StringValidator
struct  StringValidator_t4226114403  : public ConfigurationValidatorBase_t888490966
{
public:
	// System.Char[] System.Configuration.StringValidator::invalidCharacters
	CharU5BU5D_t3528271667* ___invalidCharacters_0;
	// System.Int32 System.Configuration.StringValidator::maxLength
	int32_t ___maxLength_1;
	// System.Int32 System.Configuration.StringValidator::minLength
	int32_t ___minLength_2;

public:
	inline static int32_t get_offset_of_invalidCharacters_0() { return static_cast<int32_t>(offsetof(StringValidator_t4226114403, ___invalidCharacters_0)); }
	inline CharU5BU5D_t3528271667* get_invalidCharacters_0() const { return ___invalidCharacters_0; }
	inline CharU5BU5D_t3528271667** get_address_of_invalidCharacters_0() { return &___invalidCharacters_0; }
	inline void set_invalidCharacters_0(CharU5BU5D_t3528271667* value)
	{
		___invalidCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((&___invalidCharacters_0), value);
	}

	inline static int32_t get_offset_of_maxLength_1() { return static_cast<int32_t>(offsetof(StringValidator_t4226114403, ___maxLength_1)); }
	inline int32_t get_maxLength_1() const { return ___maxLength_1; }
	inline int32_t* get_address_of_maxLength_1() { return &___maxLength_1; }
	inline void set_maxLength_1(int32_t value)
	{
		___maxLength_1 = value;
	}

	inline static int32_t get_offset_of_minLength_2() { return static_cast<int32_t>(offsetof(StringValidator_t4226114403, ___minLength_2)); }
	inline int32_t get_minLength_2() const { return ___minLength_2; }
	inline int32_t* get_address_of_minLength_2() { return &___minLength_2; }
	inline void set_minLength_2(int32_t value)
	{
		___minLength_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGVALIDATOR_T4226114403_H
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
#ifndef CONFIGURATIONVALIDATORATTRIBUTE_T448955463_H
#define CONFIGURATIONVALIDATORATTRIBUTE_T448955463_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationValidatorAttribute
struct  ConfigurationValidatorAttribute_t448955463  : public Attribute_t861562559
{
public:
	// System.Type System.Configuration.ConfigurationValidatorAttribute::validatorType
	Type_t * ___validatorType_0;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.ConfigurationValidatorAttribute::instance
	ConfigurationValidatorBase_t888490966 * ___instance_1;

public:
	inline static int32_t get_offset_of_validatorType_0() { return static_cast<int32_t>(offsetof(ConfigurationValidatorAttribute_t448955463, ___validatorType_0)); }
	inline Type_t * get_validatorType_0() const { return ___validatorType_0; }
	inline Type_t ** get_address_of_validatorType_0() { return &___validatorType_0; }
	inline void set_validatorType_0(Type_t * value)
	{
		___validatorType_0 = value;
		Il2CppCodeGenWriteBarrier((&___validatorType_0), value);
	}

	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(ConfigurationValidatorAttribute_t448955463, ___instance_1)); }
	inline ConfigurationValidatorBase_t888490966 * get_instance_1() const { return ___instance_1; }
	inline ConfigurationValidatorBase_t888490966 ** get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(ConfigurationValidatorBase_t888490966 * value)
	{
		___instance_1 = value;
		Il2CppCodeGenWriteBarrier((&___instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONVALIDATORATTRIBUTE_T448955463_H
#ifndef SUBCLASSTYPEVALIDATORATTRIBUTE_T1118469820_H
#define SUBCLASSTYPEVALIDATORATTRIBUTE_T1118469820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SubclassTypeValidatorAttribute
struct  SubclassTypeValidatorAttribute_t1118469820  : public ConfigurationValidatorAttribute_t448955463
{
public:
	// System.Type System.Configuration.SubclassTypeValidatorAttribute::baseClass
	Type_t * ___baseClass_2;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.SubclassTypeValidatorAttribute::instance
	ConfigurationValidatorBase_t888490966 * ___instance_3;

public:
	inline static int32_t get_offset_of_baseClass_2() { return static_cast<int32_t>(offsetof(SubclassTypeValidatorAttribute_t1118469820, ___baseClass_2)); }
	inline Type_t * get_baseClass_2() const { return ___baseClass_2; }
	inline Type_t ** get_address_of_baseClass_2() { return &___baseClass_2; }
	inline void set_baseClass_2(Type_t * value)
	{
		___baseClass_2 = value;
		Il2CppCodeGenWriteBarrier((&___baseClass_2), value);
	}

	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(SubclassTypeValidatorAttribute_t1118469820, ___instance_3)); }
	inline ConfigurationValidatorBase_t888490966 * get_instance_3() const { return ___instance_3; }
	inline ConfigurationValidatorBase_t888490966 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(ConfigurationValidatorBase_t888490966 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((&___instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SUBCLASSTYPEVALIDATORATTRIBUTE_T1118469820_H
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
#ifndef CONFIGURATIONALLOWDEFINITION_T1879228320_H
#define CONFIGURATIONALLOWDEFINITION_T1879228320_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationAllowDefinition
struct  ConfigurationAllowDefinition_t1879228320 
{
public:
	// System.Int32 System.Configuration.ConfigurationAllowDefinition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfigurationAllowDefinition_t1879228320, ___value___1)); }
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
#endif // CONFIGURATIONALLOWDEFINITION_T1879228320_H
#ifndef CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#define CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationAllowExeDefinition
struct  ConfigurationAllowExeDefinition_t2804732269 
{
public:
	// System.Int32 System.Configuration.ConfigurationAllowExeDefinition::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConfigurationAllowExeDefinition_t2804732269, ___value___1)); }
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
#endif // CONFIGURATIONALLOWEXEDEFINITION_T2804732269_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#define MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoNotSupportedAttribute
struct  MonoNotSupportedAttribute_t2563528020  : public MonoTODOAttribute_t4131080584
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONONOTSUPPORTEDATTRIBUTE_T2563528020_H
#ifndef MONOLIMITATIONATTRIBUTE_T3672514599_H
#define MONOLIMITATIONATTRIBUTE_T3672514599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoLimitationAttribute
struct  MonoLimitationAttribute_t3672514599  : public MonoTODOAttribute_t4131080584
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLIMITATIONATTRIBUTE_T3672514599_H
#ifndef MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#define MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoInternalNoteAttribute
struct  MonoInternalNoteAttribute_t2284022217  : public MonoTODOAttribute_t4131080584
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOINTERNALNOTEATTRIBUTE_T2284022217_H
#ifndef WHITESPACETRIMSTRINGCONVERTER_T4027530507_H
#define WHITESPACETRIMSTRINGCONVERTER_T4027530507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.WhiteSpaceTrimStringConverter
struct  WhiteSpaceTrimStringConverter_t4027530507  : public ConfigurationConverterBase_t770649384
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WHITESPACETRIMSTRINGCONVERTER_T4027530507_H
#ifndef TYPENAMECONVERTER_T2823944111_H
#define TYPENAMECONVERTER_T2823944111_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TypeNameConverter
struct  TypeNameConverter_t2823944111  : public ConfigurationConverterBase_t770649384
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPENAMECONVERTER_T2823944111_H
#ifndef TIMESPANVALIDATORATTRIBUTE_T3672454306_H
#define TIMESPANVALIDATORATTRIBUTE_T3672454306_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanValidatorAttribute
struct  TimeSpanValidatorAttribute_t3672454306  : public ConfigurationValidatorAttribute_t448955463
{
public:
	// System.Boolean System.Configuration.TimeSpanValidatorAttribute::excludeRange
	bool ___excludeRange_4;
	// System.String System.Configuration.TimeSpanValidatorAttribute::maxValueString
	String_t* ___maxValueString_5;
	// System.String System.Configuration.TimeSpanValidatorAttribute::minValueString
	String_t* ___minValueString_6;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.TimeSpanValidatorAttribute::instance
	ConfigurationValidatorBase_t888490966 * ___instance_7;

public:
	inline static int32_t get_offset_of_excludeRange_4() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t3672454306, ___excludeRange_4)); }
	inline bool get_excludeRange_4() const { return ___excludeRange_4; }
	inline bool* get_address_of_excludeRange_4() { return &___excludeRange_4; }
	inline void set_excludeRange_4(bool value)
	{
		___excludeRange_4 = value;
	}

	inline static int32_t get_offset_of_maxValueString_5() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t3672454306, ___maxValueString_5)); }
	inline String_t* get_maxValueString_5() const { return ___maxValueString_5; }
	inline String_t** get_address_of_maxValueString_5() { return &___maxValueString_5; }
	inline void set_maxValueString_5(String_t* value)
	{
		___maxValueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___maxValueString_5), value);
	}

	inline static int32_t get_offset_of_minValueString_6() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t3672454306, ___minValueString_6)); }
	inline String_t* get_minValueString_6() const { return ___minValueString_6; }
	inline String_t** get_address_of_minValueString_6() { return &___minValueString_6; }
	inline void set_minValueString_6(String_t* value)
	{
		___minValueString_6 = value;
		Il2CppCodeGenWriteBarrier((&___minValueString_6), value);
	}

	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(TimeSpanValidatorAttribute_t3672454306, ___instance_7)); }
	inline ConfigurationValidatorBase_t888490966 * get_instance_7() const { return ___instance_7; }
	inline ConfigurationValidatorBase_t888490966 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(ConfigurationValidatorBase_t888490966 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((&___instance_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANVALIDATORATTRIBUTE_T3672454306_H
#ifndef TIMESPANVALIDATOR_T679610852_H
#define TIMESPANVALIDATOR_T679610852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanValidator
struct  TimeSpanValidator_t679610852  : public ConfigurationValidatorBase_t888490966
{
public:
	// System.Boolean System.Configuration.TimeSpanValidator::rangeIsExclusive
	bool ___rangeIsExclusive_0;
	// System.TimeSpan System.Configuration.TimeSpanValidator::minValue
	TimeSpan_t881159249  ___minValue_1;
	// System.TimeSpan System.Configuration.TimeSpanValidator::maxValue
	TimeSpan_t881159249  ___maxValue_2;
	// System.Int64 System.Configuration.TimeSpanValidator::resolutionInSeconds
	int64_t ___resolutionInSeconds_3;

public:
	inline static int32_t get_offset_of_rangeIsExclusive_0() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t679610852, ___rangeIsExclusive_0)); }
	inline bool get_rangeIsExclusive_0() const { return ___rangeIsExclusive_0; }
	inline bool* get_address_of_rangeIsExclusive_0() { return &___rangeIsExclusive_0; }
	inline void set_rangeIsExclusive_0(bool value)
	{
		___rangeIsExclusive_0 = value;
	}

	inline static int32_t get_offset_of_minValue_1() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t679610852, ___minValue_1)); }
	inline TimeSpan_t881159249  get_minValue_1() const { return ___minValue_1; }
	inline TimeSpan_t881159249 * get_address_of_minValue_1() { return &___minValue_1; }
	inline void set_minValue_1(TimeSpan_t881159249  value)
	{
		___minValue_1 = value;
	}

	inline static int32_t get_offset_of_maxValue_2() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t679610852, ___maxValue_2)); }
	inline TimeSpan_t881159249  get_maxValue_2() const { return ___maxValue_2; }
	inline TimeSpan_t881159249 * get_address_of_maxValue_2() { return &___maxValue_2; }
	inline void set_maxValue_2(TimeSpan_t881159249  value)
	{
		___maxValue_2 = value;
	}

	inline static int32_t get_offset_of_resolutionInSeconds_3() { return static_cast<int32_t>(offsetof(TimeSpanValidator_t679610852, ___resolutionInSeconds_3)); }
	inline int64_t get_resolutionInSeconds_3() const { return ___resolutionInSeconds_3; }
	inline int64_t* get_address_of_resolutionInSeconds_3() { return &___resolutionInSeconds_3; }
	inline void set_resolutionInSeconds_3(int64_t value)
	{
		___resolutionInSeconds_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANVALIDATOR_T679610852_H
#ifndef TIMESPANSECONDSCONVERTER_T1574829041_H
#define TIMESPANSECONDSCONVERTER_T1574829041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanSecondsConverter
struct  TimeSpanSecondsConverter_t1574829041  : public ConfigurationConverterBase_t770649384
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANSECONDSCONVERTER_T1574829041_H
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
#ifndef STRINGVALIDATORATTRIBUTE_T905173687_H
#define STRINGVALIDATORATTRIBUTE_T905173687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.StringValidatorAttribute
struct  StringValidatorAttribute_t905173687  : public ConfigurationValidatorAttribute_t448955463
{
public:
	// System.String System.Configuration.StringValidatorAttribute::invalidCharacters
	String_t* ___invalidCharacters_2;
	// System.Int32 System.Configuration.StringValidatorAttribute::maxLength
	int32_t ___maxLength_3;
	// System.Int32 System.Configuration.StringValidatorAttribute::minLength
	int32_t ___minLength_4;
	// System.Configuration.ConfigurationValidatorBase System.Configuration.StringValidatorAttribute::instance
	ConfigurationValidatorBase_t888490966 * ___instance_5;

public:
	inline static int32_t get_offset_of_invalidCharacters_2() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t905173687, ___invalidCharacters_2)); }
	inline String_t* get_invalidCharacters_2() const { return ___invalidCharacters_2; }
	inline String_t** get_address_of_invalidCharacters_2() { return &___invalidCharacters_2; }
	inline void set_invalidCharacters_2(String_t* value)
	{
		___invalidCharacters_2 = value;
		Il2CppCodeGenWriteBarrier((&___invalidCharacters_2), value);
	}

	inline static int32_t get_offset_of_maxLength_3() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t905173687, ___maxLength_3)); }
	inline int32_t get_maxLength_3() const { return ___maxLength_3; }
	inline int32_t* get_address_of_maxLength_3() { return &___maxLength_3; }
	inline void set_maxLength_3(int32_t value)
	{
		___maxLength_3 = value;
	}

	inline static int32_t get_offset_of_minLength_4() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t905173687, ___minLength_4)); }
	inline int32_t get_minLength_4() const { return ___minLength_4; }
	inline int32_t* get_address_of_minLength_4() { return &___minLength_4; }
	inline void set_minLength_4(int32_t value)
	{
		___minLength_4 = value;
	}

	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(StringValidatorAttribute_t905173687, ___instance_5)); }
	inline ConfigurationValidatorBase_t888490966 * get_instance_5() const { return ___instance_5; }
	inline ConfigurationValidatorBase_t888490966 ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(ConfigurationValidatorBase_t888490966 * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((&___instance_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGVALIDATORATTRIBUTE_T905173687_H
#ifndef TIMESPANMINUTESCONVERTER_T730211177_H
#define TIMESPANMINUTESCONVERTER_T730211177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanMinutesConverter
struct  TimeSpanMinutesConverter_t730211177  : public ConfigurationConverterBase_t770649384
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANMINUTESCONVERTER_T730211177_H
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
#ifndef TIMESPANSECONDSORINFINITECONVERTER_T2792648515_H
#define TIMESPANSECONDSORINFINITECONVERTER_T2792648515_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanSecondsOrInfiniteConverter
struct  TimeSpanSecondsOrInfiniteConverter_t2792648515  : public TimeSpanSecondsConverter_t1574829041
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANSECONDSORINFINITECONVERTER_T2792648515_H
#ifndef TIMESPANMINUTESORINFINITECONVERTER_T2683336721_H
#define TIMESPANMINUTESORINFINITECONVERTER_T2683336721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.TimeSpanMinutesOrInfiniteConverter
struct  TimeSpanMinutesOrInfiniteConverter_t2683336721  : public TimeSpanMinutesConverter_t730211177
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANMINUTESORINFINITECONVERTER_T2683336721_H
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
#ifndef SECTIONINFORMATION_T2821611020_H
#define SECTIONINFORMATION_T2821611020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.SectionInformation
struct  SectionInformation_t2821611020  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::parent
	ConfigurationSection_t3156163955 * ___parent_0;
	// System.Configuration.ConfigurationAllowDefinition System.Configuration.SectionInformation::allow_definition
	int32_t ___allow_definition_1;
	// System.Configuration.ConfigurationAllowExeDefinition System.Configuration.SectionInformation::allow_exe_definition
	int32_t ___allow_exe_definition_2;
	// System.Boolean System.Configuration.SectionInformation::allow_location
	bool ___allow_location_3;
	// System.Boolean System.Configuration.SectionInformation::allow_override
	bool ___allow_override_4;
	// System.Boolean System.Configuration.SectionInformation::inherit_on_child_apps
	bool ___inherit_on_child_apps_5;
	// System.Boolean System.Configuration.SectionInformation::restart_on_external_changes
	bool ___restart_on_external_changes_6;
	// System.Boolean System.Configuration.SectionInformation::require_permission
	bool ___require_permission_7;
	// System.String System.Configuration.SectionInformation::config_source
	String_t* ___config_source_8;
	// System.Boolean System.Configuration.SectionInformation::force_update
	bool ___force_update_9;
	// System.Boolean System.Configuration.SectionInformation::is_declared
	bool ___is_declared_10;
	// System.Boolean System.Configuration.SectionInformation::is_locked
	bool ___is_locked_11;
	// System.String System.Configuration.SectionInformation::name
	String_t* ___name_12;
	// System.String System.Configuration.SectionInformation::type_name
	String_t* ___type_name_13;
	// System.String System.Configuration.SectionInformation::raw_xml
	String_t* ___raw_xml_14;
	// System.Configuration.ProtectedConfigurationProvider System.Configuration.SectionInformation::protection_provider
	ProtectedConfigurationProvider_t413290519 * ___protection_provider_15;
	// System.String System.Configuration.SectionInformation::<ConfigFilePath>k__BackingField
	String_t* ___U3CConfigFilePathU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___parent_0)); }
	inline ConfigurationSection_t3156163955 * get_parent_0() const { return ___parent_0; }
	inline ConfigurationSection_t3156163955 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(ConfigurationSection_t3156163955 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((&___parent_0), value);
	}

	inline static int32_t get_offset_of_allow_definition_1() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___allow_definition_1)); }
	inline int32_t get_allow_definition_1() const { return ___allow_definition_1; }
	inline int32_t* get_address_of_allow_definition_1() { return &___allow_definition_1; }
	inline void set_allow_definition_1(int32_t value)
	{
		___allow_definition_1 = value;
	}

	inline static int32_t get_offset_of_allow_exe_definition_2() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___allow_exe_definition_2)); }
	inline int32_t get_allow_exe_definition_2() const { return ___allow_exe_definition_2; }
	inline int32_t* get_address_of_allow_exe_definition_2() { return &___allow_exe_definition_2; }
	inline void set_allow_exe_definition_2(int32_t value)
	{
		___allow_exe_definition_2 = value;
	}

	inline static int32_t get_offset_of_allow_location_3() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___allow_location_3)); }
	inline bool get_allow_location_3() const { return ___allow_location_3; }
	inline bool* get_address_of_allow_location_3() { return &___allow_location_3; }
	inline void set_allow_location_3(bool value)
	{
		___allow_location_3 = value;
	}

	inline static int32_t get_offset_of_allow_override_4() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___allow_override_4)); }
	inline bool get_allow_override_4() const { return ___allow_override_4; }
	inline bool* get_address_of_allow_override_4() { return &___allow_override_4; }
	inline void set_allow_override_4(bool value)
	{
		___allow_override_4 = value;
	}

	inline static int32_t get_offset_of_inherit_on_child_apps_5() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___inherit_on_child_apps_5)); }
	inline bool get_inherit_on_child_apps_5() const { return ___inherit_on_child_apps_5; }
	inline bool* get_address_of_inherit_on_child_apps_5() { return &___inherit_on_child_apps_5; }
	inline void set_inherit_on_child_apps_5(bool value)
	{
		___inherit_on_child_apps_5 = value;
	}

	inline static int32_t get_offset_of_restart_on_external_changes_6() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___restart_on_external_changes_6)); }
	inline bool get_restart_on_external_changes_6() const { return ___restart_on_external_changes_6; }
	inline bool* get_address_of_restart_on_external_changes_6() { return &___restart_on_external_changes_6; }
	inline void set_restart_on_external_changes_6(bool value)
	{
		___restart_on_external_changes_6 = value;
	}

	inline static int32_t get_offset_of_require_permission_7() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___require_permission_7)); }
	inline bool get_require_permission_7() const { return ___require_permission_7; }
	inline bool* get_address_of_require_permission_7() { return &___require_permission_7; }
	inline void set_require_permission_7(bool value)
	{
		___require_permission_7 = value;
	}

	inline static int32_t get_offset_of_config_source_8() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___config_source_8)); }
	inline String_t* get_config_source_8() const { return ___config_source_8; }
	inline String_t** get_address_of_config_source_8() { return &___config_source_8; }
	inline void set_config_source_8(String_t* value)
	{
		___config_source_8 = value;
		Il2CppCodeGenWriteBarrier((&___config_source_8), value);
	}

	inline static int32_t get_offset_of_force_update_9() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___force_update_9)); }
	inline bool get_force_update_9() const { return ___force_update_9; }
	inline bool* get_address_of_force_update_9() { return &___force_update_9; }
	inline void set_force_update_9(bool value)
	{
		___force_update_9 = value;
	}

	inline static int32_t get_offset_of_is_declared_10() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___is_declared_10)); }
	inline bool get_is_declared_10() const { return ___is_declared_10; }
	inline bool* get_address_of_is_declared_10() { return &___is_declared_10; }
	inline void set_is_declared_10(bool value)
	{
		___is_declared_10 = value;
	}

	inline static int32_t get_offset_of_is_locked_11() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___is_locked_11)); }
	inline bool get_is_locked_11() const { return ___is_locked_11; }
	inline bool* get_address_of_is_locked_11() { return &___is_locked_11; }
	inline void set_is_locked_11(bool value)
	{
		___is_locked_11 = value;
	}

	inline static int32_t get_offset_of_name_12() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___name_12)); }
	inline String_t* get_name_12() const { return ___name_12; }
	inline String_t** get_address_of_name_12() { return &___name_12; }
	inline void set_name_12(String_t* value)
	{
		___name_12 = value;
		Il2CppCodeGenWriteBarrier((&___name_12), value);
	}

	inline static int32_t get_offset_of_type_name_13() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___type_name_13)); }
	inline String_t* get_type_name_13() const { return ___type_name_13; }
	inline String_t** get_address_of_type_name_13() { return &___type_name_13; }
	inline void set_type_name_13(String_t* value)
	{
		___type_name_13 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_13), value);
	}

	inline static int32_t get_offset_of_raw_xml_14() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___raw_xml_14)); }
	inline String_t* get_raw_xml_14() const { return ___raw_xml_14; }
	inline String_t** get_address_of_raw_xml_14() { return &___raw_xml_14; }
	inline void set_raw_xml_14(String_t* value)
	{
		___raw_xml_14 = value;
		Il2CppCodeGenWriteBarrier((&___raw_xml_14), value);
	}

	inline static int32_t get_offset_of_protection_provider_15() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___protection_provider_15)); }
	inline ProtectedConfigurationProvider_t413290519 * get_protection_provider_15() const { return ___protection_provider_15; }
	inline ProtectedConfigurationProvider_t413290519 ** get_address_of_protection_provider_15() { return &___protection_provider_15; }
	inline void set_protection_provider_15(ProtectedConfigurationProvider_t413290519 * value)
	{
		___protection_provider_15 = value;
		Il2CppCodeGenWriteBarrier((&___protection_provider_15), value);
	}

	inline static int32_t get_offset_of_U3CConfigFilePathU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(SectionInformation_t2821611020, ___U3CConfigFilePathU3Ek__BackingField_16)); }
	inline String_t* get_U3CConfigFilePathU3Ek__BackingField_16() const { return ___U3CConfigFilePathU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CConfigFilePathU3Ek__BackingField_16() { return &___U3CConfigFilePathU3Ek__BackingField_16; }
	inline void set_U3CConfigFilePathU3Ek__BackingField_16(String_t* value)
	{
		___U3CConfigFilePathU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CConfigFilePathU3Ek__BackingField_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTIONINFORMATION_T2821611020_H
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
#ifndef VALIDATORCALLBACK_T1396763873_H
#define VALIDATORCALLBACK_T1396763873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ValidatorCallback
struct  ValidatorCallback_t1396763873  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALIDATORCALLBACK_T1396763873_H
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



// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotImplementedException::.ctor()
extern "C"  void NotImplementedException__ctor_m3058704252 (NotImplementedException_t3489357830 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Configuration.ProtectedConfigurationProvider System.Configuration.ProtectedConfiguration::GetProvider(System.String,System.Boolean)
extern "C"  ProtectedConfigurationProvider_t413290519 * ProtectedConfiguration_GetProvider_m2993326322 (RuntimeObject * __this /* static, unused */, String_t* ___name0, bool ___throwOnError1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SectionInformation::ForceDeclaration(System.Boolean)
extern "C"  void SectionInformation_ForceDeclaration_m4105910805 (SectionInformation_t2821611020 * __this, bool ___require0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationValidatorBase::.ctor()
extern "C"  void ConfigurationValidatorBase__ctor_m3078971514 (ConfigurationValidatorBase_t888490966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.String::ToCharArray()
extern "C"  CharU5BU5D_t3528271667* String_ToCharArray_m1492846834 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object,System.Object)
extern "C"  String_t* String_Concat_m1715369213 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.String::IndexOfAny(System.Char[])
extern "C"  int32_t String_IndexOfAny_m4159774896 (String_t* __this, CharU5BU5D_t3528271667* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object)
extern "C"  String_t* String_Format_m2844511972 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationValidatorAttribute::.ctor()
extern "C"  void ConfigurationValidatorAttribute__ctor_m2349383440 (ConfigurationValidatorAttribute_t448955463 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.StringValidator::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void StringValidator__ctor_m315001218 (StringValidator_t4226114403 * __this, int32_t ___minLength0, int32_t ___maxLength1, String_t* ___invalidCharacters2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.SubclassTypeValidator::.ctor(System.Type)
extern "C"  void SubclassTypeValidator__ctor_m308855907 (SubclassTypeValidator_t2472216208 * __this, Type_t * ___baseClass0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ConfigurationConverterBase::.ctor()
extern "C"  void ConfigurationConverterBase__ctor_m594930918 (ConfigurationConverterBase_t770649384 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String)
extern "C"  int64_t Int64_Parse_m662659148 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromMinutes(System.Double)
extern "C"  TimeSpan_t881159249  TimeSpan_FromMinutes_m1032812593 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor()
extern "C"  void ArgumentException__ctor_m3698743796 (ArgumentException_t132251570 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalMinutes()
extern "C"  double TimeSpan_get_TotalMinutes_m3920401708 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
extern "C"  String_t* Int64_ToString_m2986581816 (int64_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanMinutesConverter::.ctor()
extern "C"  void TimeSpanMinutesConverter__ctor_m1251644822 (TimeSpanMinutesConverter_t730211177 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TimeSpanMinutesConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanMinutesConverter_ConvertFrom_m3720439865 (TimeSpanMinutesConverter_t730211177 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_Equality(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_Equality_m1999885032 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TimeSpanMinutesConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanMinutesConverter_ConvertTo_m3578471192 (TimeSpanMinutesConverter_t730211177 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C"  bool Int64_TryParse_m2208578514 (RuntimeObject * __this /* static, unused */, String_t* p0, int64_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromSeconds(System.Double)
extern "C"  TimeSpan_t881159249  TimeSpan_FromSeconds_m4219356874 (RuntimeObject * __this /* static, unused */, double p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Double System.TimeSpan::get_TotalSeconds()
extern "C"  double TimeSpan_get_TotalSeconds_m4083325051 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanSecondsConverter::.ctor()
extern "C"  void TimeSpanSecondsConverter__ctor_m2022028924 (TimeSpanSecondsConverter_t1574829041 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TimeSpanSecondsConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanSecondsConverter_ConvertFrom_m1255085473 (TimeSpanSecondsConverter_t1574829041 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object System.Configuration.TimeSpanSecondsConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanSecondsConverter_ConvertTo_m1545092276 (TimeSpanSecondsConverter_t1574829041 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean,System.Int64)
extern "C"  void TimeSpanValidator__ctor_m3855649908 (TimeSpanValidator_t679610852 * __this, TimeSpan_t881159249  ___minValue0, TimeSpan_t881159249  ___maxValue1, bool ___rangeIsExclusive2, int64_t ___resolutionInSeconds3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThan_m1594498345 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThan(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThan_m734703194 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_GreaterThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_GreaterThanOrEqual_m3604983771 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeSpan::op_LessThanOrEqual(System.TimeSpan,System.TimeSpan)
extern "C"  bool TimeSpan_op_LessThanOrEqual_m300470010 (RuntimeObject * __this /* static, unused */, TimeSpan_t881159249  p0, TimeSpan_t881159249  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.TimeSpan::get_Ticks()
extern "C"  int64_t TimeSpan_get_Ticks_m2137362016 (TimeSpan_t881159249 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::FromTicks(System.Int64)
extern "C"  TimeSpan_t881159249  TimeSpan_FromTicks_m4159473883 (RuntimeObject * __this /* static, unused */, int64_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeSpan::Parse(System.String)
extern "C"  TimeSpan_t881159249  TimeSpan_Parse_m4107860700 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Configuration.TimeSpanValidatorAttribute::get_MinValue()
extern "C"  TimeSpan_t881159249  TimeSpanValidatorAttribute_get_MinValue_m588299449 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Configuration.TimeSpanValidatorAttribute::get_MaxValue()
extern "C"  TimeSpan_t881159249  TimeSpanValidatorAttribute_get_MaxValue_m1330167427 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean)
extern "C"  void TimeSpanValidator__ctor_m4105728429 (TimeSpanValidator_t679610852 * __this, TimeSpan_t881159249  ___minValue0, TimeSpan_t881159249  ___maxValue1, bool ___rangeIsExclusive2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetType(System.String)
extern "C"  Type_t * Type_GetType_m1693760368 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Configuration.ValidatorCallback::Invoke(System.Object)
extern "C"  void ValidatorCallback_Invoke_m4195306840 (ValidatorCallback_t1396763873 * __this, RuntimeObject * ___o0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Trim()
extern "C"  String_t* String_Trim_m923598732 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C"  void MonoTODOAttribute__ctor_m1016023335 (MonoTODOAttribute_t4131080584 * __this, String_t* ___comment0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Configuration.SectionInformation::.ctor()
extern "C"  void SectionInformation__ctor_m2463566108 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		__this->set_allow_definition_1(((int32_t)300));
		__this->set_allow_exe_definition_2(((int32_t)100));
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_allow_definition_1(((int32_t)300));
		__this->set_allow_location_3((bool)1);
		__this->set_allow_override_4((bool)1);
		__this->set_inherit_on_child_apps_5((bool)1);
		__this->set_restart_on_external_changes_6((bool)1);
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigFilePath()
extern "C"  String_t* SectionInformation_get_ConfigFilePath_m3760260021 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CConfigFilePathU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigFilePath(System.String)
extern "C"  void SectionInformation_set_ConfigFilePath_m161091753 (SectionInformation_t2821611020 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CConfigFilePathU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Configuration.ConfigurationAllowDefinition System.Configuration.SectionInformation::get_AllowDefinition()
extern "C"  int32_t SectionInformation_get_AllowDefinition_m951001025 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_allow_definition_1();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowDefinition(System.Configuration.ConfigurationAllowDefinition)
extern "C"  void SectionInformation_set_AllowDefinition_m4002073805 (SectionInformation_t2821611020 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_allow_definition_1(L_0);
		return;
	}
}
// System.Configuration.ConfigurationAllowExeDefinition System.Configuration.SectionInformation::get_AllowExeDefinition()
extern "C"  int32_t SectionInformation_get_AllowExeDefinition_m901302544 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_allow_exe_definition_2();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowExeDefinition(System.Configuration.ConfigurationAllowExeDefinition)
extern "C"  void SectionInformation_set_AllowExeDefinition_m1432757133 (SectionInformation_t2821611020 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_allow_exe_definition_2(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_AllowLocation()
extern "C"  bool SectionInformation_get_AllowLocation_m1788582836 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allow_location_3();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowLocation(System.Boolean)
extern "C"  void SectionInformation_set_AllowLocation_m353401087 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_allow_location_3(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_AllowOverride()
extern "C"  bool SectionInformation_get_AllowOverride_m2075197358 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_allow_override_4();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_AllowOverride(System.Boolean)
extern "C"  void SectionInformation_set_AllowOverride_m4191263482 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_allow_override_4(L_0);
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_ConfigSource()
extern "C"  String_t* SectionInformation_get_ConfigSource_m2091923151 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_config_source_8();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ConfigSource(System.String)
extern "C"  void SectionInformation_set_ConfigSource_m4091382385 (SectionInformation_t2821611020 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_config_source_8(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_ForceSave()
extern "C"  bool SectionInformation_get_ForceSave_m2405195114 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_force_update_9();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_ForceSave(System.Boolean)
extern "C"  void SectionInformation_set_ForceSave_m4168792987 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_force_update_9(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_InheritInChildApplications()
extern "C"  bool SectionInformation_get_InheritInChildApplications_m667760017 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_inherit_on_child_apps_5();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_InheritInChildApplications(System.Boolean)
extern "C"  void SectionInformation_set_InheritInChildApplications_m3870467330 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_inherit_on_child_apps_5(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_IsDeclarationRequired()
extern "C"  bool SectionInformation_get_IsDeclarationRequired_m305191922 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SectionInformation_get_IsDeclarationRequired_m305191922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SectionInformation_get_IsDeclarationRequired_m305191922_RuntimeMethod_var);
	}
}
// System.Boolean System.Configuration.SectionInformation::get_IsDeclared()
extern "C"  bool SectionInformation_get_IsDeclared_m3452330182 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_declared_10();
		return L_0;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_IsLocked()
extern "C"  bool SectionInformation_get_IsLocked_m2150116900 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_is_locked_11();
		return L_0;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_IsProtected()
extern "C"  bool SectionInformation_get_IsProtected_m114762940 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		ProtectedConfigurationProvider_t413290519 * L_0 = __this->get_protection_provider_15();
		return (bool)((((int32_t)((((RuntimeObject*)(ProtectedConfigurationProvider_t413290519 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String System.Configuration.SectionInformation::get_Name()
extern "C"  String_t* SectionInformation_get_Name_m3131539540 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_12();
		return L_0;
	}
}
// System.Configuration.ProtectedConfigurationProvider System.Configuration.SectionInformation::get_ProtectionProvider()
extern "C"  ProtectedConfigurationProvider_t413290519 * SectionInformation_get_ProtectionProvider_m4091754009 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		ProtectedConfigurationProvider_t413290519 * L_0 = __this->get_protection_provider_15();
		return L_0;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_RequirePermission()
extern "C"  bool SectionInformation_get_RequirePermission_m3223978628 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_require_permission_7();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_RequirePermission(System.Boolean)
extern "C"  void SectionInformation_set_RequirePermission_m2854406570 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_require_permission_7(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SectionInformation::get_RestartOnExternalChanges()
extern "C"  bool SectionInformation_get_RestartOnExternalChanges_m3094109561 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_restart_on_external_changes_6();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_RestartOnExternalChanges(System.Boolean)
extern "C"  void SectionInformation_set_RestartOnExternalChanges_m1861344375 (SectionInformation_t2821611020 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_restart_on_external_changes_6(L_0);
		return;
	}
}
// System.String System.Configuration.SectionInformation::get_SectionName()
extern "C"  String_t* SectionInformation_get_SectionName_m3370726199 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_12();
		return L_0;
	}
}
// System.String System.Configuration.SectionInformation::get_Type()
extern "C"  String_t* SectionInformation_get_Type_m1602416887 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_type_name_13();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::set_Type(System.String)
extern "C"  void SectionInformation_set_Type_m2084224426 (SectionInformation_t2821611020 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_type_name_13(L_0);
		return;
	}
}
// System.Configuration.ConfigurationSection System.Configuration.SectionInformation::GetParentSection()
extern "C"  ConfigurationSection_t3156163955 * SectionInformation_GetParentSection_m123342599 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationSection_t3156163955 * L_0 = __this->get_parent_0();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::SetParentSection(System.Configuration.ConfigurationSection)
extern "C"  void SectionInformation_SetParentSection_m3722868878 (SectionInformation_t2821611020 * __this, ConfigurationSection_t3156163955 * ___parent0, const RuntimeMethod* method)
{
	{
		ConfigurationSection_t3156163955 * L_0 = ___parent0;
		__this->set_parent_0(L_0);
		return;
	}
}
// System.String System.Configuration.SectionInformation::GetRawXml()
extern "C"  String_t* SectionInformation_GetRawXml_m1604368476 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_raw_xml_14();
		return L_0;
	}
}
// System.Void System.Configuration.SectionInformation::ProtectSection(System.String)
extern "C"  void SectionInformation_ProtectSection_m4007543682 (SectionInformation_t2821611020 * __this, String_t* ___provider0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___provider0;
		ProtectedConfigurationProvider_t413290519 * L_1 = ProtectedConfiguration_GetProvider_m2993326322(NULL /*static, unused*/, L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_protection_provider_15(L_1);
		return;
	}
}
// System.Void System.Configuration.SectionInformation::ForceDeclaration(System.Boolean)
extern "C"  void SectionInformation_ForceDeclaration_m4105910805 (SectionInformation_t2821611020 * __this, bool ___require0, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void System.Configuration.SectionInformation::ForceDeclaration()
extern "C"  void SectionInformation_ForceDeclaration_m737756012 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		SectionInformation_ForceDeclaration_m4105910805(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.SectionInformation::RevertToParent()
extern "C"  void SectionInformation_RevertToParent_m229743672 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SectionInformation_RevertToParent_m229743672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotImplementedException_t3489357830 * L_0 = (NotImplementedException_t3489357830 *)il2cpp_codegen_object_new(NotImplementedException_t3489357830_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_m3058704252(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, SectionInformation_RevertToParent_m229743672_RuntimeMethod_var);
	}
}
// System.Void System.Configuration.SectionInformation::UnprotectSection()
extern "C"  void SectionInformation_UnprotectSection_m985795109 (SectionInformation_t2821611020 * __this, const RuntimeMethod* method)
{
	{
		__this->set_protection_provider_15((ProtectedConfigurationProvider_t413290519 *)NULL);
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetRawXml(System.String)
extern "C"  void SectionInformation_SetRawXml_m3827543965 (SectionInformation_t2821611020 * __this, String_t* ___xml0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___xml0;
		__this->set_raw_xml_14(L_0);
		return;
	}
}
// System.Void System.Configuration.SectionInformation::SetName(System.String)
extern "C"  void SectionInformation_SetName_m4176156451 (SectionInformation_t2821611020 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_name_12(L_0);
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
// System.Void System.Configuration.StringValidator::.ctor(System.Int32)
extern "C"  void StringValidator__ctor_m3793103630 (StringValidator_t4226114403 * __this, int32_t ___minLength0, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorBase__ctor_m3078971514(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLength0;
		__this->set_minLength_2(L_0);
		__this->set_maxLength_1(((int32_t)2147483647LL));
		return;
	}
}
// System.Void System.Configuration.StringValidator::.ctor(System.Int32,System.Int32)
extern "C"  void StringValidator__ctor_m2975905832 (StringValidator_t4226114403 * __this, int32_t ___minLength0, int32_t ___maxLength1, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorBase__ctor_m3078971514(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLength0;
		__this->set_minLength_2(L_0);
		int32_t L_1 = ___maxLength1;
		__this->set_maxLength_1(L_1);
		return;
	}
}
// System.Void System.Configuration.StringValidator::.ctor(System.Int32,System.Int32,System.String)
extern "C"  void StringValidator__ctor_m315001218 (StringValidator_t4226114403 * __this, int32_t ___minLength0, int32_t ___maxLength1, String_t* ___invalidCharacters2, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorBase__ctor_m3078971514(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___minLength0;
		__this->set_minLength_2(L_0);
		int32_t L_1 = ___maxLength1;
		__this->set_maxLength_1(L_1);
		String_t* L_2 = ___invalidCharacters2;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		String_t* L_3 = ___invalidCharacters2;
		NullCheck(L_3);
		CharU5BU5D_t3528271667* L_4 = String_ToCharArray_m1492846834(L_3, /*hidden argument*/NULL);
		__this->set_invalidCharacters_0(L_4);
	}

IL_0026:
	{
		return;
	}
}
// System.Boolean System.Configuration.StringValidator::CanValidate(System.Type)
extern "C"  bool StringValidator_CanValidate_m1357874184 (StringValidator_t4226114403 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringValidator_CanValidate_m1357874184_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Void System.Configuration.StringValidator::Validate(System.Object)
extern "C"  void StringValidator_Validate_m2020870501 (StringValidator_t4226114403 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringValidator_Validate_m2020870501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->get_minLength_2();
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___value0;
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var));
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = String_get_Length_m3847582255(L_4, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_minLength_2();
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_0051;
		}
	}

IL_0031:
	{
		int32_t L_7 = __this->get_minLength_2();
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3907706024, L_9, _stringLiteral799920322, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_11 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, StringValidator_Validate_m2020870501_RuntimeMethod_var);
	}

IL_0051:
	{
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = String_get_Length_m3847582255(L_12, /*hidden argument*/NULL);
		int32_t L_14 = __this->get_maxLength_1();
		if ((((int32_t)L_13) <= ((int32_t)L_14)))
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_15 = __this->get_maxLength_1();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m1715369213(NULL /*static, unused*/, _stringLiteral3765362116, L_17, _stringLiteral799920322, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_19 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, StringValidator_Validate_m2020870501_RuntimeMethod_var);
	}

IL_0082:
	{
		CharU5BU5D_t3528271667* L_20 = __this->get_invalidCharacters_0();
		if (!L_20)
		{
			goto IL_00b7;
		}
	}
	{
		String_t* L_21 = V_0;
		CharU5BU5D_t3528271667* L_22 = __this->get_invalidCharacters_0();
		NullCheck(L_21);
		int32_t L_23 = String_IndexOfAny_m4159774896(L_21, L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		int32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)(-1))))
		{
			goto IL_00b7;
		}
	}
	{
		CharU5BU5D_t3528271667* L_25 = __this->get_invalidCharacters_0();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Format_m2844511972(NULL /*static, unused*/, _stringLiteral3198361138, (RuntimeObject *)(RuntimeObject *)L_25, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_27 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_27, L_26, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, NULL, StringValidator_Validate_m2020870501_RuntimeMethod_var);
	}

IL_00b7:
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
// System.Void System.Configuration.StringValidatorAttribute::.ctor()
extern "C"  void StringValidatorAttribute__ctor_m1832301084 (StringValidatorAttribute_t905173687 * __this, const RuntimeMethod* method)
{
	{
		__this->set_maxLength_3(((int32_t)2147483647LL));
		ConfigurationValidatorAttribute__ctor_m2349383440(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.StringValidatorAttribute::get_InvalidCharacters()
extern "C"  String_t* StringValidatorAttribute_get_InvalidCharacters_m3071622450 (StringValidatorAttribute_t905173687 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_invalidCharacters_2();
		return L_0;
	}
}
// System.Void System.Configuration.StringValidatorAttribute::set_InvalidCharacters(System.String)
extern "C"  void StringValidatorAttribute_set_InvalidCharacters_m3872208002 (StringValidatorAttribute_t905173687 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_invalidCharacters_2(L_0);
		__this->set_instance_5((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.Int32 System.Configuration.StringValidatorAttribute::get_MaxLength()
extern "C"  int32_t StringValidatorAttribute_get_MaxLength_m4291553009 (StringValidatorAttribute_t905173687 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_maxLength_3();
		return L_0;
	}
}
// System.Void System.Configuration.StringValidatorAttribute::set_MaxLength(System.Int32)
extern "C"  void StringValidatorAttribute_set_MaxLength_m3030741481 (StringValidatorAttribute_t905173687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_maxLength_3(L_0);
		__this->set_instance_5((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.Int32 System.Configuration.StringValidatorAttribute::get_MinLength()
extern "C"  int32_t StringValidatorAttribute_get_MinLength_m1318501049 (StringValidatorAttribute_t905173687 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_minLength_4();
		return L_0;
	}
}
// System.Void System.Configuration.StringValidatorAttribute::set_MinLength(System.Int32)
extern "C"  void StringValidatorAttribute_set_MinLength_m861547710 (StringValidatorAttribute_t905173687 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_minLength_4(L_0);
		__this->set_instance_5((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.Configuration.ConfigurationValidatorBase System.Configuration.StringValidatorAttribute::get_ValidatorInstance()
extern "C"  ConfigurationValidatorBase_t888490966 * StringValidatorAttribute_get_ValidatorInstance_m1604745185 (StringValidatorAttribute_t905173687 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringValidatorAttribute_get_ValidatorInstance_m1604745185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationValidatorBase_t888490966 * L_0 = __this->get_instance_5();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1 = __this->get_minLength_4();
		int32_t L_2 = __this->get_maxLength_3();
		String_t* L_3 = __this->get_invalidCharacters_2();
		StringValidator_t4226114403 * L_4 = (StringValidator_t4226114403 *)il2cpp_codegen_object_new(StringValidator_t4226114403_il2cpp_TypeInfo_var);
		StringValidator__ctor_m315001218(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_instance_5(L_4);
	}

IL_0028:
	{
		ConfigurationValidatorBase_t888490966 * L_5 = __this->get_instance_5();
		return L_5;
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
// System.Void System.Configuration.SubclassTypeValidator::.ctor(System.Type)
extern "C"  void SubclassTypeValidator__ctor_m308855907 (SubclassTypeValidator_t2472216208 * __this, Type_t * ___baseClass0, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorBase__ctor_m3078971514(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___baseClass0;
		__this->set_baseClass_0(L_0);
		return;
	}
}
// System.Boolean System.Configuration.SubclassTypeValidator::CanValidate(System.Type)
extern "C"  bool SubclassTypeValidator_CanValidate_m537228613 (SubclassTypeValidator_t2472216208 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubclassTypeValidator_CanValidate_m537228613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (Type_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Void System.Configuration.SubclassTypeValidator::Validate(System.Object)
extern "C"  void SubclassTypeValidator_Validate_m3157655990 (SubclassTypeValidator_t2472216208 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubclassTypeValidator_Validate_m3157655990_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = ((Type_t *)CastclassClass((RuntimeObject*)L_0, Type_t_il2cpp_TypeInfo_var));
		Type_t * L_1 = __this->get_baseClass_0();
		Type_t * L_2 = V_0;
		NullCheck(L_1);
		bool L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(44 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_1, L_2);
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral3725676252, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, SubclassTypeValidator_Validate_m3157655990_RuntimeMethod_var);
	}

IL_0023:
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
// System.Void System.Configuration.SubclassTypeValidatorAttribute::.ctor(System.Type)
extern "C"  void SubclassTypeValidatorAttribute__ctor_m2983296930 (SubclassTypeValidatorAttribute_t1118469820 * __this, Type_t * ___baseClass0, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorAttribute__ctor_m2349383440(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___baseClass0;
		__this->set_baseClass_2(L_0);
		return;
	}
}
// System.Type System.Configuration.SubclassTypeValidatorAttribute::get_BaseClass()
extern "C"  Type_t * SubclassTypeValidatorAttribute_get_BaseClass_m1979589258 (SubclassTypeValidatorAttribute_t1118469820 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_baseClass_2();
		return L_0;
	}
}
// System.Configuration.ConfigurationValidatorBase System.Configuration.SubclassTypeValidatorAttribute::get_ValidatorInstance()
extern "C"  ConfigurationValidatorBase_t888490966 * SubclassTypeValidatorAttribute_get_ValidatorInstance_m485730132 (SubclassTypeValidatorAttribute_t1118469820 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SubclassTypeValidatorAttribute_get_ValidatorInstance_m485730132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationValidatorBase_t888490966 * L_0 = __this->get_instance_3();
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_1 = __this->get_baseClass_2();
		SubclassTypeValidator_t2472216208 * L_2 = (SubclassTypeValidator_t2472216208 *)il2cpp_codegen_object_new(SubclassTypeValidator_t2472216208_il2cpp_TypeInfo_var);
		SubclassTypeValidator__ctor_m308855907(L_2, L_1, /*hidden argument*/NULL);
		__this->set_instance_3(L_2);
	}

IL_001c:
	{
		ConfigurationValidatorBase_t888490966 * L_3 = __this->get_instance_3();
		return L_3;
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
// System.Void System.Configuration.TimeSpanMinutesConverter::.ctor()
extern "C"  void TimeSpanMinutesConverter__ctor_m1251644822 (TimeSpanMinutesConverter_t730211177 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationConverterBase__ctor_m594930918(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.TimeSpanMinutesConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanMinutesConverter_ConvertFrom_m3720439865 (TimeSpanMinutesConverter_t730211177 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanMinutesConverter_ConvertFrom_m3720439865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___data2;
		int64_t L_1 = Int64_Parse_m662659148(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_2 = TimeSpan_FromMinutes_m1032812593(NULL /*static, unused*/, (((double)((double)L_1))), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_3 = L_2;
		RuntimeObject * L_4 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object System.Configuration.TimeSpanMinutesConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanMinutesConverter_ConvertTo_m3578471192 (TimeSpanMinutesConverter_t730211177 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanMinutesConverter_ConvertTo_m3578471192_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___value2;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TimeSpanMinutesConverter_ConvertTo_m3578471192_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value2;
		V_0 = ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_5, TimeSpan_t881159249_il2cpp_TypeInfo_var))));
		double L_6 = TimeSpan_get_TotalMinutes_m3920401708((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (((int64_t)((int64_t)L_6)));
		String_t* L_7 = Int64_ToString_m2986581816((int64_t*)(&V_1), /*hidden argument*/NULL);
		return L_7;
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
// System.Void System.Configuration.TimeSpanMinutesOrInfiniteConverter::.ctor()
extern "C"  void TimeSpanMinutesOrInfiniteConverter__ctor_m2009528914 (TimeSpanMinutesOrInfiniteConverter_t2683336721 * __this, const RuntimeMethod* method)
{
	{
		TimeSpanMinutesConverter__ctor_m1251644822(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.TimeSpanMinutesOrInfiniteConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanMinutesOrInfiniteConverter_ConvertFrom_m2329453420 (TimeSpanMinutesOrInfiniteConverter_t2683336721 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanMinutesOrInfiniteConverter_ConvertFrom_m2329453420_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___data2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), _stringLiteral3907270169, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_2 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_MaxValue_0();
		TimeSpan_t881159249  L_3 = L_2;
		RuntimeObject * L_4 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0020:
	{
		RuntimeObject* L_5 = ___ctx0;
		CultureInfo_t4157843068 * L_6 = ___ci1;
		RuntimeObject * L_7 = ___data2;
		RuntimeObject * L_8 = TimeSpanMinutesConverter_ConvertFrom_m3720439865(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Configuration.TimeSpanMinutesOrInfiniteConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanMinutesOrInfiniteConverter_ConvertTo_m3901938982 (TimeSpanMinutesOrInfiniteConverter_t2683336721 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanMinutesOrInfiniteConverter_ConvertTo_m3901938982_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value2;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TimeSpanMinutesOrInfiniteConverter_ConvertTo_m3901938982_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_6 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_MaxValue_0();
		bool L_7 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_5, TimeSpan_t881159249_il2cpp_TypeInfo_var)))), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		return _stringLiteral3907270169;
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___ctx0;
		CultureInfo_t4157843068 * L_9 = ___ci1;
		RuntimeObject * L_10 = ___value2;
		Type_t * L_11 = ___type3;
		RuntimeObject * L_12 = TimeSpanMinutesConverter_ConvertTo_m3578471192(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void System.Configuration.TimeSpanSecondsConverter::.ctor()
extern "C"  void TimeSpanSecondsConverter__ctor_m2022028924 (TimeSpanSecondsConverter_t1574829041 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationConverterBase__ctor_m594930918(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.TimeSpanSecondsConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanSecondsConverter_ConvertFrom_m1255085473 (TimeSpanSecondsConverter_t1574829041 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanSecondsConverter_ConvertFrom_m1255085473_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___data2;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentException_t132251570 * L_1 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_1, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, TimeSpanSecondsConverter_ConvertFrom_m1255085473_RuntimeMethod_var);
	}

IL_0016:
	{
		RuntimeObject * L_2 = ___data2;
		bool L_3 = Int64_TryParse_m2208578514(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)), (int64_t*)(&V_0), /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_4, _stringLiteral2037252866, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TimeSpanSecondsConverter_ConvertFrom_m1255085473_RuntimeMethod_var);
	}

IL_0033:
	{
		int64_t L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_6 = TimeSpan_FromSeconds_m4219356874(NULL /*static, unused*/, (((double)((double)L_5))), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_7 = L_6;
		RuntimeObject * L_8 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_7);
		return L_8;
	}
}
// System.Object System.Configuration.TimeSpanSecondsConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanSecondsConverter_ConvertTo_m1545092276 (TimeSpanSecondsConverter_t1574829041 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanSecondsConverter_ConvertTo_m1545092276_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int64_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___value2;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TimeSpanSecondsConverter_ConvertTo_m1545092276_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value2;
		V_0 = ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_5, TimeSpan_t881159249_il2cpp_TypeInfo_var))));
		double L_6 = TimeSpan_get_TotalSeconds_m4083325051((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (((int64_t)((int64_t)L_6)));
		String_t* L_7 = Int64_ToString_m2986581816((int64_t*)(&V_1), /*hidden argument*/NULL);
		return L_7;
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
// System.Void System.Configuration.TimeSpanSecondsOrInfiniteConverter::.ctor()
extern "C"  void TimeSpanSecondsOrInfiniteConverter__ctor_m3839651832 (TimeSpanSecondsOrInfiniteConverter_t2792648515 * __this, const RuntimeMethod* method)
{
	{
		TimeSpanSecondsConverter__ctor_m2022028924(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.TimeSpanSecondsOrInfiniteConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TimeSpanSecondsOrInfiniteConverter_ConvertFrom_m230902720 (TimeSpanSecondsOrInfiniteConverter_t2792648515 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanSecondsOrInfiniteConverter_ConvertFrom_m230902720_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___data2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_op_Equality_m920492651(NULL /*static, unused*/, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), _stringLiteral3907270169, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_2 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_MaxValue_0();
		TimeSpan_t881159249  L_3 = L_2;
		RuntimeObject * L_4 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}

IL_0020:
	{
		RuntimeObject* L_5 = ___ctx0;
		CultureInfo_t4157843068 * L_6 = ___ci1;
		RuntimeObject * L_7 = ___data2;
		RuntimeObject * L_8 = TimeSpanSecondsConverter_ConvertFrom_m1255085473(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// System.Object System.Configuration.TimeSpanSecondsOrInfiniteConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TimeSpanSecondsOrInfiniteConverter_ConvertTo_m2244776874 (TimeSpanSecondsOrInfiniteConverter_t2792648515 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanSecondsOrInfiniteConverter_ConvertTo_m2244776874_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value2;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m88164663(L_0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_2 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_1) == ((RuntimeObject*)(Type_t *)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		ArgumentException_t132251570 * L_4 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3698743796(L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, TimeSpanSecondsOrInfiniteConverter_ConvertTo_m2244776874_RuntimeMethod_var);
	}

IL_001b:
	{
		RuntimeObject * L_5 = ___value2;
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_6 = ((TimeSpan_t881159249_StaticFields*)il2cpp_codegen_static_fields_for(TimeSpan_t881159249_il2cpp_TypeInfo_var))->get_MaxValue_0();
		bool L_7 = TimeSpan_op_Equality_m1999885032(NULL /*static, unused*/, ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_5, TimeSpan_t881159249_il2cpp_TypeInfo_var)))), L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		return _stringLiteral3907270169;
	}

IL_0036:
	{
		RuntimeObject* L_8 = ___ctx0;
		CultureInfo_t4157843068 * L_9 = ___ci1;
		RuntimeObject * L_10 = ___value2;
		Type_t * L_11 = ___type3;
		RuntimeObject * L_12 = TimeSpanSecondsConverter_ConvertTo_m1545092276(__this, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan)
extern "C"  void TimeSpanValidator__ctor_m2335462242 (TimeSpanValidator_t679610852 * __this, TimeSpan_t881159249  ___minValue0, TimeSpan_t881159249  ___maxValue1, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = ___minValue0;
		TimeSpan_t881159249  L_1 = ___maxValue1;
		TimeSpanValidator__ctor_m3855649908(__this, L_0, L_1, (bool)0, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean)
extern "C"  void TimeSpanValidator__ctor_m4105728429 (TimeSpanValidator_t679610852 * __this, TimeSpan_t881159249  ___minValue0, TimeSpan_t881159249  ___maxValue1, bool ___rangeIsExclusive2, const RuntimeMethod* method)
{
	{
		TimeSpan_t881159249  L_0 = ___minValue0;
		TimeSpan_t881159249  L_1 = ___maxValue1;
		bool L_2 = ___rangeIsExclusive2;
		TimeSpanValidator__ctor_m3855649908(__this, L_0, L_1, L_2, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Configuration.TimeSpanValidator::.ctor(System.TimeSpan,System.TimeSpan,System.Boolean,System.Int64)
extern "C"  void TimeSpanValidator__ctor_m3855649908 (TimeSpanValidator_t679610852 * __this, TimeSpan_t881159249  ___minValue0, TimeSpan_t881159249  ___maxValue1, bool ___rangeIsExclusive2, int64_t ___resolutionInSeconds3, const RuntimeMethod* method)
{
	{
		ConfigurationValidatorBase__ctor_m3078971514(__this, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_0 = ___minValue0;
		__this->set_minValue_1(L_0);
		TimeSpan_t881159249  L_1 = ___maxValue1;
		__this->set_maxValue_2(L_1);
		bool L_2 = ___rangeIsExclusive2;
		__this->set_rangeIsExclusive_0(L_2);
		int64_t L_3 = ___resolutionInSeconds3;
		__this->set_resolutionInSeconds_3(L_3);
		return;
	}
}
// System.Boolean System.Configuration.TimeSpanValidator::CanValidate(System.Type)
extern "C"  bool TimeSpanValidator_CanValidate_m4097264626 (TimeSpanValidator_t679610852 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidator_CanValidate_m4097264626_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (TimeSpan_t881159249_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Void System.Configuration.TimeSpanValidator::Validate(System.Object)
extern "C"  void TimeSpanValidator_Validate_m2236800624 (TimeSpanValidator_t679610852 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidator_Validate_m2236800624_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t881159249  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		V_0 = ((*(TimeSpan_t881159249 *)((TimeSpan_t881159249 *)UnBox(L_0, TimeSpan_t881159249_il2cpp_TypeInfo_var))));
		bool L_1 = __this->get_rangeIsExclusive_0();
		if (L_1)
		{
			goto IL_0076;
		}
	}
	{
		TimeSpan_t881159249  L_2 = V_0;
		TimeSpan_t881159249  L_3 = __this->get_minValue_1();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_4 = TimeSpan_op_LessThan_m1594498345(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0034;
		}
	}
	{
		TimeSpan_t881159249  L_5 = V_0;
		TimeSpan_t881159249  L_6 = __this->get_maxValue_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_7 = TimeSpan_op_GreaterThan_m734703194(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0071;
		}
	}

IL_0034:
	{
		ObjectU5BU5D_t2843939325* L_8 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3572078690);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3572078690);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		TimeSpan_t881159249  L_10 = __this->get_minValue_1();
		TimeSpan_t881159249  L_11 = L_10;
		RuntimeObject * L_12 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3786252490);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		TimeSpan_t881159249  L_15 = __this->get_maxValue_2();
		TimeSpan_t881159249  L_16 = L_15;
		RuntimeObject * L_17 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m2971454694(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_19 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_19, L_18, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_19, NULL, TimeSpanValidator_Validate_m2236800624_RuntimeMethod_var);
	}

IL_0071:
	{
		goto IL_00d5;
	}

IL_0076:
	{
		TimeSpan_t881159249  L_20 = V_0;
		TimeSpan_t881159249  L_21 = __this->get_minValue_1();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_22 = TimeSpan_op_GreaterThanOrEqual_m3604983771(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d5;
		}
	}
	{
		TimeSpan_t881159249  L_23 = V_0;
		TimeSpan_t881159249  L_24 = __this->get_maxValue_2();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		bool L_25 = TimeSpan_op_LessThanOrEqual_m300470010(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00d5;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_26 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)4));
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral140417379);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral140417379);
		ObjectU5BU5D_t2843939325* L_27 = L_26;
		TimeSpan_t881159249  L_28 = __this->get_minValue_1();
		TimeSpan_t881159249  L_29 = L_28;
		RuntimeObject * L_30 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_29);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_30);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_30);
		ObjectU5BU5D_t2843939325* L_31 = L_27;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, _stringLiteral3786252490);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_32 = L_31;
		TimeSpan_t881159249  L_33 = __this->get_maxValue_2();
		TimeSpan_t881159249  L_34 = L_33;
		RuntimeObject * L_35 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_35);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_36 = String_Concat_m2971454694(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_37 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_37, L_36, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, NULL, TimeSpanValidator_Validate_m2236800624_RuntimeMethod_var);
	}

IL_00d5:
	{
		int64_t L_38 = __this->get_resolutionInSeconds_3();
		if (!L_38)
		{
			goto IL_0121;
		}
	}
	{
		int64_t L_39 = TimeSpan_get_Ticks_m2137362016((TimeSpan_t881159249 *)(&V_0), /*hidden argument*/NULL);
		int64_t L_40 = __this->get_resolutionInSeconds_3();
		if (!((int64_t)((int64_t)L_39%(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)((int32_t)10000000)))), (int64_t)L_40)))))
		{
			goto IL_0121;
		}
	}
	{
		int64_t L_41 = __this->get_resolutionInSeconds_3();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_42 = TimeSpan_FromTicks_m4159473883(NULL /*static, unused*/, ((int64_t)il2cpp_codegen_multiply((int64_t)(((int64_t)((int64_t)((int32_t)10000000)))), (int64_t)L_41)), /*hidden argument*/NULL);
		TimeSpan_t881159249  L_43 = L_42;
		RuntimeObject * L_44 = Box(TimeSpan_t881159249_il2cpp_TypeInfo_var, &L_43);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_45 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral2347504902, L_44, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_46 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_46, L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, NULL, TimeSpanValidator_Validate_m2236800624_RuntimeMethod_var);
	}

IL_0121:
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
// System.Void System.Configuration.TimeSpanValidatorAttribute::.ctor()
extern "C"  void TimeSpanValidatorAttribute__ctor_m622942210 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidatorAttribute__ctor_m622942210_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_maxValueString_5(_stringLiteral3405510866);
		__this->set_minValueString_6(_stringLiteral527341921);
		ConfigurationValidatorAttribute__ctor_m2349383440(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String System.Configuration.TimeSpanValidatorAttribute::get_MaxValueString()
extern "C"  String_t* TimeSpanValidatorAttribute_get_MaxValueString_m1935593748 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_maxValueString_5();
		return L_0;
	}
}
// System.Void System.Configuration.TimeSpanValidatorAttribute::set_MaxValueString(System.String)
extern "C"  void TimeSpanValidatorAttribute_set_MaxValueString_m4134377632 (TimeSpanValidatorAttribute_t3672454306 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_maxValueString_5(L_0);
		__this->set_instance_7((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.String System.Configuration.TimeSpanValidatorAttribute::get_MinValueString()
extern "C"  String_t* TimeSpanValidatorAttribute_get_MinValueString_m585638987 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_minValueString_6();
		return L_0;
	}
}
// System.Void System.Configuration.TimeSpanValidatorAttribute::set_MinValueString(System.String)
extern "C"  void TimeSpanValidatorAttribute_set_MinValueString_m1466205847 (TimeSpanValidatorAttribute_t3672454306 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_minValueString_6(L_0);
		__this->set_instance_7((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.TimeSpan System.Configuration.TimeSpanValidatorAttribute::get_MaxValue()
extern "C"  TimeSpan_t881159249  TimeSpanValidatorAttribute_get_MaxValue_m1330167427 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidatorAttribute_get_MaxValue_m1330167427_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_maxValueString_5();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = TimeSpan_Parse_m4107860700(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.TimeSpan System.Configuration.TimeSpanValidatorAttribute::get_MinValue()
extern "C"  TimeSpan_t881159249  TimeSpanValidatorAttribute_get_MinValue_m588299449 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidatorAttribute_get_MinValue_m588299449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_minValueString_6();
		IL2CPP_RUNTIME_CLASS_INIT(TimeSpan_t881159249_il2cpp_TypeInfo_var);
		TimeSpan_t881159249  L_1 = TimeSpan_Parse_m4107860700(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean System.Configuration.TimeSpanValidatorAttribute::get_ExcludeRange()
extern "C"  bool TimeSpanValidatorAttribute_get_ExcludeRange_m499934721 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_excludeRange_4();
		return L_0;
	}
}
// System.Void System.Configuration.TimeSpanValidatorAttribute::set_ExcludeRange(System.Boolean)
extern "C"  void TimeSpanValidatorAttribute_set_ExcludeRange_m2837268806 (TimeSpanValidatorAttribute_t3672454306 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_excludeRange_4(L_0);
		__this->set_instance_7((ConfigurationValidatorBase_t888490966 *)NULL);
		return;
	}
}
// System.Configuration.ConfigurationValidatorBase System.Configuration.TimeSpanValidatorAttribute::get_ValidatorInstance()
extern "C"  ConfigurationValidatorBase_t888490966 * TimeSpanValidatorAttribute_get_ValidatorInstance_m252928383 (TimeSpanValidatorAttribute_t3672454306 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeSpanValidatorAttribute_get_ValidatorInstance_m252928383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConfigurationValidatorBase_t888490966 * L_0 = __this->get_instance_7();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		TimeSpan_t881159249  L_1 = TimeSpanValidatorAttribute_get_MinValue_m588299449(__this, /*hidden argument*/NULL);
		TimeSpan_t881159249  L_2 = TimeSpanValidatorAttribute_get_MaxValue_m1330167427(__this, /*hidden argument*/NULL);
		bool L_3 = __this->get_excludeRange_4();
		TimeSpanValidator_t679610852 * L_4 = (TimeSpanValidator_t679610852 *)il2cpp_codegen_object_new(TimeSpanValidator_t679610852_il2cpp_TypeInfo_var);
		TimeSpanValidator__ctor_m4105728429(L_4, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_instance_7(L_4);
	}

IL_0028:
	{
		ConfigurationValidatorBase_t888490966 * L_5 = __this->get_instance_7();
		return L_5;
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
// System.Void System.Configuration.TypeNameConverter::.ctor()
extern "C"  void TypeNameConverter__ctor_m511378202 (TypeNameConverter_t2823944111 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationConverterBase__ctor_m594930918(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.TypeNameConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * TypeNameConverter_ConvertFrom_m1283783259 (TypeNameConverter_t2823944111 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameConverter_ConvertFrom_m1283783259_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___data2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = il2cpp_codegen_get_type((Il2CppMethodPointer)&Type_GetType_m1693760368, ((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), "System.Configuration, Version=2.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a");
		return L_1;
	}
}
// System.Object System.Configuration.TypeNameConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * TypeNameConverter_ConvertTo_m1301842820 (TypeNameConverter_t2823944111 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameConverter_ConvertTo_m1301842820_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value2;
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		return NULL;
	}

IL_0008:
	{
		RuntimeObject * L_1 = ___value2;
		if (((Type_t *)IsInstClass((RuntimeObject*)L_1, Type_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, TypeNameConverter_ConvertTo_m1301842820_RuntimeMethod_var);
	}

IL_001e:
	{
		RuntimeObject * L_3 = ___value2;
		NullCheck(((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var)));
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String System.Type::get_AssemblyQualifiedName() */, ((Type_t *)CastclassClass((RuntimeObject*)L_3, Type_t_il2cpp_TypeInfo_var)));
		return L_4;
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
// System.Void System.Configuration.ValidatorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ValidatorCallback__ctor_m842355137 (ValidatorCallback_t1396763873 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void System.Configuration.ValidatorCallback::Invoke(System.Object)
extern "C"  void ValidatorCallback_Invoke_m4195306840 (ValidatorCallback_t1396763873 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ValidatorCallback_Invoke_m4195306840((ValidatorCallback_t1396763873 *)__this->get_prev_9(), ___o0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___o0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___o0, targetMethod);
			}
		}
	}
	else
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 1)
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
					else
						GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, targetThis, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0);
					else
						VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___o0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___o0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___o0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult System.Configuration.ValidatorCallback::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ValidatorCallback_BeginInvoke_m1545507424 (ValidatorCallback_t1396763873 * __this, RuntimeObject * ___o0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___o0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void System.Configuration.ValidatorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ValidatorCallback_EndInvoke_m2075460093 (ValidatorCallback_t1396763873 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void System.Configuration.WhiteSpaceTrimStringConverter::.ctor()
extern "C"  void WhiteSpaceTrimStringConverter__ctor_m1770425357 (WhiteSpaceTrimStringConverter_t4027530507 * __this, const RuntimeMethod* method)
{
	{
		ConfigurationConverterBase__ctor_m594930918(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object System.Configuration.WhiteSpaceTrimStringConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C"  RuntimeObject * WhiteSpaceTrimStringConverter_ConvertFrom_m581056731 (WhiteSpaceTrimStringConverter_t4027530507 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___data2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WhiteSpaceTrimStringConverter_ConvertFrom_m581056731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___data2;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)));
		String_t* L_1 = String_Trim_m923598732(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Object System.Configuration.WhiteSpaceTrimStringConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C"  RuntimeObject * WhiteSpaceTrimStringConverter_ConvertTo_m1444531320 (WhiteSpaceTrimStringConverter_t4027530507 * __this, RuntimeObject* ___ctx0, CultureInfo_t4157843068 * ___ci1, RuntimeObject * ___value2, Type_t * ___type3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WhiteSpaceTrimStringConverter_ConvertTo_m1444531320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value2;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		return L_1;
	}

IL_000c:
	{
		RuntimeObject * L_2 = ___value2;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_2, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_3, _stringLiteral3493618073, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, WhiteSpaceTrimStringConverter_ConvertTo_m1444531320_RuntimeMethod_var);
	}

IL_0022:
	{
		RuntimeObject * L_4 = ___value2;
		NullCheck(((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)));
		String_t* L_5 = String_Trim_m923598732(((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_5;
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
// System.Void System.MonoInternalNoteAttribute::.ctor(System.String)
extern "C"  void MonoInternalNoteAttribute__ctor_m1356416471 (MonoInternalNoteAttribute_t2284022217 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___comment0;
		MonoTODOAttribute__ctor_m1016023335(__this, L_0, /*hidden argument*/NULL);
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
// System.Void System.MonoLimitationAttribute::.ctor(System.String)
extern "C"  void MonoLimitationAttribute__ctor_m4028214826 (MonoLimitationAttribute_t3672514599 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___comment0;
		MonoTODOAttribute__ctor_m1016023335(__this, L_0, /*hidden argument*/NULL);
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
// System.Void System.MonoNotSupportedAttribute::.ctor(System.String)
extern "C"  void MonoNotSupportedAttribute__ctor_m2832557633 (MonoNotSupportedAttribute_t2563528020 * __this, String_t* ___comment0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___comment0;
		MonoTODOAttribute__ctor_m1016023335(__this, L_0, /*hidden argument*/NULL);
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
extern "C"  void MonoTODOAttribute__ctor_m1337412070 (MonoTODOAttribute_t4131080584 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.MonoTODOAttribute::.ctor(System.String)
extern "C"  void MonoTODOAttribute__ctor_m1016023335 (MonoTODOAttribute_t4131080584 * __this, String_t* ___comment0, const RuntimeMethod* method)
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
