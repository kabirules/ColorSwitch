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
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// Firebase.Database.ChildChangedEventArgs
struct ChildChangedEventArgs_t4202688343;
// Firebase.Database.DataSnapshot
struct DataSnapshot_t2895422505;
// System.String
struct String_t;
// System.EventArgs
struct EventArgs_t3591816995;
// Firebase.Database.DatabaseError
struct DatabaseError_t3685099270;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t736164020;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t2736202052;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t3384741;
// Firebase.Database.DatabaseException
struct DatabaseException_t70968897;
// System.Exception
struct Exception_t;
// Firebase.Database.DatabaseReference
struct DatabaseReference_t514541437;
// Firebase.Database.Internal.InternalDatabaseReference
struct InternalDatabaseReference_t2434949222;
// Firebase.Database.FirebaseDatabase
struct FirebaseDatabase_t1344765733;
// Firebase.Database.Query
struct Query_t3567563289;
// Firebase.Database.Internal.InternalQuery
struct InternalQuery_t2324573063;
// System.Threading.Tasks.Task
struct Task_t3187275312;
// Firebase.Variant
struct Variant_t1163908808;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1329213854;
// Firebase.Database.Internal.InternalDataSnapshot
struct InternalDataSnapshot_t1607276085;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot>
struct IEnumerable_1_t1875275394;
// Firebase.Database.Internal.InternalDataSnapshotList
struct InternalDataSnapshotList_t2262125325;
// Firebase.Database.DataSnapshot/DataSnapshotList
struct DataSnapshotList_t1220253082;
// System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot>
struct IEnumerable_1_t587128974;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// Firebase.Database.DataSnapshot/DataSnapshotEnumerator
struct DataSnapshotEnumerator_t1588063040;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot>
struct IEnumerator_1_t2039846553;
// System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot>
struct IEnumerator_1_t3327992973;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// Firebase.FirebaseApp
struct FirebaseApp_t2526288410;
// Firebase.Database.Internal.InternalFirebaseDatabase
struct InternalFirebaseDatabase_t2115990047;
// System.Type
struct Type_t;
// Firebase.CleanupNotifier/DisposeObjectDelegate
struct DisposeObjectDelegate_t1709778548;
// Firebase.CleanupNotifier/DeleteObjectDelegate
struct DeleteObjectDelegate_t1957612988;
// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>
struct Dictionary_2_t1120143015;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t2982493820;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t3234831756;
// System.WeakReference
struct WeakReference_t1334886716;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t1928209643;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t3177110595;
// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2539505618;
// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct OnCancelledDelegate_t4200244901;
// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct OnValueChangedDelegate_t3156556798;
// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct OnChildChangeDelegate_t3077338721;
// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct OnChildRemovedDelegate_t3205732376;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t53799880;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t3508987397;
// System.ApplicationException
struct ApplicationException_t2339761290;
// System.ArithmeticException
struct ArithmeticException_t4283546778;
// System.DivideByZeroException
struct DivideByZeroException_t1856388118;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t1578797820;
// System.InvalidCastException
struct InvalidCastException_t3927145244;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.IO.IOException
struct IOException_t4088381929;
// System.NullReferenceException
struct NullReferenceException_t1023182353;
// System.OutOfMemoryException
struct OutOfMemoryException_t2437671686;
// System.OverflowException
struct OverflowException_t2020128637;
// System.SystemException
struct SystemException_t176217640;
// System.ArgumentException
struct ArgumentException_t132251570;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t3932276921;
// Firebase.Database.Internal.Future_InternalDataSnapshot
struct Future_InternalDataSnapshot_t3720598533;
// Firebase.FutureBase
struct FutureBase_t1024553797;
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct Task_1_t3012816260;
// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t510208842;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct TaskCompletionSource_1_t7998902;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1480828981;
// Firebase.FirebaseException
struct FirebaseException_t627220627;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t190679043;
// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct Action_t3901044065;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct Dictionary_2_t2789757396;
// Firebase.Database.Internal.Future_InternalDataSnapshot/MonoPInvokeCallbackAttribute
struct MonoPInvokeCallbackAttribute_t55682319;
// System.Attribute
struct Attribute_t861562559;
// Firebase.Database.Internal.InternalChildListener
struct InternalChildListener_t3083312682;
// Firebase.Database.Internal.InternalListener
struct InternalListener_t340858984;
// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct EventHandler_1_t2126847776;
// System.EventHandler`1<System.Object>
struct EventHandler_1_t1004265597;
// Firebase.FutureVoid
struct FutureVoid_t983301800;
// Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator
struct InternalDataSnapshotListEnumerator_t4124443923;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct Dictionary_2_t3524539611;
// Firebase.Database.Internal.InternalValueListener
struct InternalValueListener_t1503646041;
// Firebase.Database.ValueChangedEventArgs
struct ValueChangedEventArgs_t2597003737;
// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct EventHandler_1_t521163170;
// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct OnCancelledDelegate_t3347641453;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct Task_1_t5995384;
// Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0
struct U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct TaskCompletionSource_1_t1296145322;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct Action_1_t3185283855;
// System.Action`1<System.Object>
struct Action_1_t3252573759;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t363146638;
// System.AggregateException
struct AggregateException_t3586243216;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t964245573;
// Firebase.Database.Internal.InternalListener[]
struct InternalListenerU5BU5D_t3898716409;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t950877179;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Firebase.Database.Internal.InternalListener,System.Collections.DictionaryEntry>
struct Transform_1_t3503055253;
// Firebase.Database.Internal.Future_InternalDataSnapshot/Action[]
struct ActionU5BU5D_t4067822588;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action,System.Collections.DictionaryEntry>
struct Transform_1_t3672161432;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t4021634645;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.WeakReference,System.Collections.DictionaryEntry>
struct Transform_1_t2872046361;
// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t558034686;
// System.Action`1<System.Action>
struct Action_1_t1436845072;
// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>>
struct IList_1_t880095394;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.Int32,System.Collections.DictionaryEntry>
struct Transform_1_t3530625384;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.String,System.Collections.DictionaryEntry>
struct Transform_1_t886128184;
// System.Collections.Generic.IDictionary`2<System.Int32,System.String>
struct IDictionary_2_t3494982707;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1200053443;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t2649313536;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_t3851719731;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t3131870060;
// Firebase.FirebaseApp/LogMessageDelegate
struct LogMessageDelegate_t2362307948;
// System.Func`1<System.Boolean>
struct Func_1_t3822001908;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_t2062041240;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t680774166;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t2129588086;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action>
struct Dictionary_2_t133523557;
// Firebase.FutureVoid/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t2224793779;

extern RuntimeClass* EventArgs_t3591816995_il2cpp_TypeInfo_var;
extern const uint32_t ChildChangedEventArgs__ctor_m3147525033_MetadataUsageId;
extern const uint32_t ChildChangedEventArgs__ctor_m691361579_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t736164020_il2cpp_TypeInfo_var;
extern RuntimeClass* DatabaseError_t3685099270_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2736202052_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t3494982707_il2cpp_TypeInfo_var;
extern RuntimeClass* IDictionary_2_t1200053443_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m1227865334_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4006792853_RuntimeMethod_var;
extern String_t* _stringLiteral2533279496;
extern String_t* _stringLiteral7116532;
extern String_t* _stringLiteral1272064032;
extern String_t* _stringLiteral4114175855;
extern String_t* _stringLiteral2629173619;
extern String_t* _stringLiteral2068415882;
extern String_t* _stringLiteral1351415936;
extern String_t* _stringLiteral1254611276;
extern String_t* _stringLiteral2134433393;
extern String_t* _stringLiteral3851914073;
extern String_t* _stringLiteral3345617931;
extern String_t* _stringLiteral2191255229;
extern String_t* _stringLiteral1538137582;
extern String_t* _stringLiteral3926892602;
extern String_t* _stringLiteral2570894439;
extern String_t* _stringLiteral971353870;
extern String_t* _stringLiteral3302125764;
extern String_t* _stringLiteral2679733824;
extern String_t* _stringLiteral344317417;
extern String_t* _stringLiteral3541650682;
extern String_t* _stringLiteral1052471230;
extern String_t* _stringLiteral1513908091;
extern String_t* _stringLiteral3063544446;
extern String_t* _stringLiteral123889061;
extern const uint32_t DatabaseError__cctor_m2513753026_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t DatabaseError__ctor_m1830529586_MetadataUsageId;
extern const uint32_t DatabaseError_FromError_m669180003_MetadataUsageId;
extern String_t* _stringLiteral4120423514;
extern const uint32_t DatabaseError_ToString_m3311598321_MetadataUsageId;
extern RuntimeClass* DatabaseReference_t514541437_il2cpp_TypeInfo_var;
extern const uint32_t DatabaseReference_Child_m994578086_MetadataUsageId;
extern const uint32_t DatabaseReference_Push_m3990992992_MetadataUsageId;
extern const uint32_t DatabaseReference_Equals_m2382516952_MetadataUsageId;
extern RuntimeClass* DataSnapshot_t2895422505_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshot_CreateSnapshot_m934492055_MetadataUsageId;
extern RuntimeClass* DataSnapshotList_t1220253082_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshot_get_Children_m3785432501_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral449145349;
extern String_t* _stringLiteral1112591438;
extern String_t* _stringLiteral3455956864;
extern const uint32_t DataSnapshot_ToString_m2167289265_MetadataUsageId;
extern RuntimeClass* IEnumerator_1_t2039846553_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshotEnumerator_get_Current_m2928615008_MetadataUsageId;
extern const uint32_t DataSnapshotEnumerator_System_Collections_IEnumerator_get_Current_m3659112353_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshotEnumerator_MoveNext_m3348442834_MetadataUsageId;
extern const uint32_t DataSnapshotEnumerator_Reset_m3483257481_MetadataUsageId;
extern RuntimeClass* IDisposable_t3640265483_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshotEnumerator_Dispose_m3017308378_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t587128974_il2cpp_TypeInfo_var;
extern RuntimeClass* DataSnapshotEnumerator_t1588063040_il2cpp_TypeInfo_var;
extern const uint32_t DataSnapshotList_GetEnumerator_m4215544644_MetadataUsageId;
extern const uint32_t DataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m116740761_MetadataUsageId;
extern RuntimeClass* FirebaseApp_t2526288410_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var;
extern RuntimeClass* DisposeObjectDelegate_t1709778548_il2cpp_TypeInfo_var;
extern RuntimeClass* DeleteObjectDelegate_t1957612988_il2cpp_TypeInfo_var;
extern RuntimeClass* CleanupNotifier_t720088202_il2cpp_TypeInfo_var;
extern const RuntimeMethod* FirebaseDatabase_DisposeObject_m4264362008_RuntimeMethod_var;
extern const RuntimeMethod* DatabaseInternalPINVOKE_Firebase_Database_delete_InternalFirebaseDatabase_m2742722154_RuntimeMethod_var;
extern const uint32_t FirebaseDatabase__ctor_m803534952_MetadataUsageId;
extern const uint32_t FirebaseDatabase_DisposeObject_m4264362008_MetadataUsageId;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Remove_m3241364839_RuntimeMethod_var;
extern const uint32_t FirebaseDatabase_Dispose_m3713834711_MetadataUsageId;
extern RuntimeClass* DatabaseException_t70968897_il2cpp_TypeInfo_var;
extern const RuntimeMethod* FirebaseDatabase_get_DefaultInstance_m2679761047_RuntimeMethod_var;
extern String_t* _stringLiteral1366663305;
extern const uint32_t FirebaseDatabase_get_DefaultInstance_m2679761047_MetadataUsageId;
extern RuntimeClass* Services_t463074608_il2cpp_TypeInfo_var;
extern RuntimeClass* IAppConfigExtensions_t2982493820_il2cpp_TypeInfo_var;
extern const uint32_t FirebaseDatabase_GetInstance_m260630464_MetadataUsageId;
extern RuntimeClass* WeakReference_t1334886716_il2cpp_TypeInfo_var;
extern const RuntimeMethod* FirebaseDatabase_GetInstance_m1820077615_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m3248357561_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m2559730247_RuntimeMethod_var;
extern String_t* _stringLiteral1095060571;
extern String_t* _stringLiteral791040696;
extern String_t* _stringLiteral1758303143;
extern const uint32_t FirebaseDatabase_GetInstance_m1820077615_MetadataUsageId;
extern const uint32_t FirebaseDatabase_get_RootReference_m2376894855_MetadataUsageId;
extern const uint32_t FirebaseDatabase_GetReference_m517763391_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t1120143015_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m3434722084_RuntimeMethod_var;
extern const uint32_t FirebaseDatabase__cctor_m2725113536_MetadataUsageId;
extern RuntimeClass* SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var;
extern RuntimeClass* DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var;
extern RuntimeClass* SWIGStringHelper_t3177110595_il2cpp_TypeInfo_var;
extern const uint32_t DatabaseInternalPINVOKE__cctor_m1864086187_MetadataUsageId;
extern RuntimeClass* ExceptionDelegate_t53799880_il2cpp_TypeInfo_var;
extern RuntimeClass* ExceptionArgumentDelegate_t3508987397_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_m3959536635_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_m3200679066_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m710822149_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_m1808183465_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m1779575960_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m2418839823_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m1540183458_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944_RuntimeMethod_var;
extern const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204_RuntimeMethod_var;
extern const uint32_t SWIGExceptionHelper__cctor_m479093236_MetadataUsageId;
extern RuntimeClass* SWIGPendingException_t67283040_il2cpp_TypeInfo_var;
extern RuntimeClass* ApplicationException_t2339761290_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingApplicationException_m3959536635_MetadataUsageId;
extern RuntimeClass* ArithmeticException_t4283546778_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_m3200679066_MetadataUsageId;
extern RuntimeClass* DivideByZeroException_t1856388118_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240_MetadataUsageId;
extern RuntimeClass* IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501_MetadataUsageId;
extern RuntimeClass* InvalidCastException_t3927145244_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m710822149_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463_MetadataUsageId;
extern RuntimeClass* IOException_t4088381929_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingIOException_m1808183465_MetadataUsageId;
extern RuntimeClass* NullReferenceException_t1023182353_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907_MetadataUsageId;
extern RuntimeClass* OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234_MetadataUsageId;
extern RuntimeClass* OverflowException_t2020128637_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m1779575960_MetadataUsageId;
extern RuntimeClass* SystemException_t176217640_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingSystemException_m2418839823_MetadataUsageId;
extern RuntimeClass* ArgumentException_t132251570_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m1540183458_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral88632345;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204_MetadataUsageId;
extern const RuntimeType* DatabaseInternalPINVOKE_t816701182_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SWIGPendingException_Set_m3894827394_RuntimeMethod_var;
extern String_t* _stringLiteral1985503341;
extern String_t* _stringLiteral3452614535;
extern const uint32_t SWIGPendingException_Set_m3894827394_MetadataUsageId;
extern const uint32_t SWIGPendingException_Retrieve_m1649320118_MetadataUsageId;
extern RuntimeClass* SWIGStringDelegate_t3932276921_il2cpp_TypeInfo_var;
extern const RuntimeMethod* SWIGStringHelper_CreateString_m1923416003_RuntimeMethod_var;
extern const uint32_t SWIGStringHelper__cctor_m3503285784_MetadataUsageId;
extern const uint32_t Future_InternalDataSnapshot__ctor_m1472638490_MetadataUsageId;
extern const uint32_t Future_InternalDataSnapshot_Dispose_m1752517857_MetadataUsageId;
extern RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t510208842_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t7998902_il2cpp_TypeInfo_var;
extern RuntimeClass* FirebaseException_t627220627_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_t3901044065_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m2787549879_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetException_m3599795536_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m1632449679_RuntimeMethod_var;
extern const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2406712175_RuntimeMethod_var;
extern String_t* _stringLiteral2669073561;
extern const uint32_t Future_InternalDataSnapshot_GetTask_m2600252647_MetadataUsageId;
extern RuntimeClass* SWIG_CompletionDelegate_t2539505618_il2cpp_TypeInfo_var;
extern RuntimeClass* Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2789757396_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m2969110377_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m1558415536_RuntimeMethod_var;
extern const uint32_t Future_InternalDataSnapshot_SetOnCompletionCallback_m1872287132_MetadataUsageId;
extern const uint32_t Future_InternalDataSnapshot_SetCompletionData_m2154239546_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2152592574_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Remove_m4029264196_RuntimeMethod_var;
extern const uint32_t Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554_MetadataUsageId;
extern RuntimeClass* SWIGPendingException_t3190247900_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386_RuntimeMethod_var;
extern const uint32_t Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386_MetadataUsageId;
extern const RuntimeMethod* Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590_RuntimeMethod_var;
extern const uint32_t Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590_MetadataUsageId;
extern RuntimeClass* InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Future_InternalDataSnapshot_result_m2074089048_RuntimeMethod_var;
extern const uint32_t Future_InternalDataSnapshot_result_m2074089048_MetadataUsageId;
extern RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
extern const uint32_t Future_InternalDataSnapshot__cctor_m2079253468_MetadataUsageId;
extern const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m921486790_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m1331262637_RuntimeMethod_var;
extern const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2406712175_MetadataUsageId;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern const uint32_t SWIG_CompletionDelegate_BeginInvoke_m137124511_MetadataUsageId;
extern RuntimeClass* InternalChildListener_t3083312682_il2cpp_TypeInfo_var;
extern RuntimeClass* OnCancelledDelegate_t4200244901_il2cpp_TypeInfo_var;
extern RuntimeClass* OnChildChangeDelegate_t3077338721_il2cpp_TypeInfo_var;
extern RuntimeClass* OnChildRemovedDelegate_t3205732376_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalChildListener_OnCancelledHandler_m55601804_RuntimeMethod_var;
extern const RuntimeMethod* InternalChildListener_OnChildChangeHandler_m2756529731_RuntimeMethod_var;
extern const RuntimeMethod* InternalChildListener_OnChildRemovedHandler_m2594487275_RuntimeMethod_var;
extern const uint32_t InternalChildListener__cctor_m2086476096_MetadataUsageId;
extern RuntimeClass* InternalListener_t340858984_il2cpp_TypeInfo_var;
extern const uint32_t InternalChildListener__ctor_m2747023506_MetadataUsageId;
extern const uint32_t InternalChildListener_TryGetListener_m4135003006_MetadataUsageId;
extern RuntimeClass* ChildChangedEventArgs_t4202688343_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3773386107_RuntimeMethod_var;
extern const uint32_t InternalChildListener_OnChildChangeHandler_m2756529731_MetadataUsageId;
extern const uint32_t InternalChildListener_OnChildRemovedHandler_m2594487275_MetadataUsageId;
extern const uint32_t InternalChildListener_OnCancelledHandler_m55601804_MetadataUsageId;
extern const uint32_t InternalChildListener_DestroyCppListener_m1987139621_MetadataUsageId;
extern RuntimeClass* Error_t704128997_il2cpp_TypeInfo_var;
extern const uint32_t OnCancelledDelegate_BeginInvoke_m4225741905_MetadataUsageId;
extern RuntimeClass* ChildChangeType_t689306747_il2cpp_TypeInfo_var;
extern const uint32_t OnChildChangeDelegate_BeginInvoke_m394480013_MetadataUsageId;
extern const uint32_t OnChildRemovedDelegate_BeginInvoke_m4012441887_MetadataUsageId;
extern const uint32_t InternalDatabaseReference__ctor_m1883612658_MetadataUsageId;
extern const uint32_t InternalDatabaseReference_Dispose_m2265395864_MetadataUsageId;
extern const RuntimeMethod* InternalDatabaseReference_key_string_m1550646153_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_key_string_m1550646153_MetadataUsageId;
extern const RuntimeMethod* InternalDatabaseReference_is_root_m4288236037_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_is_root_m4288236037_MetadataUsageId;
extern const RuntimeMethod* InternalDatabaseReference_is_valid_m1887106859_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_is_valid_m1887106859_MetadataUsageId;
extern RuntimeClass* InternalDatabaseReference_t2434949222_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalDatabaseReference_Child_m2565751312_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_Child_m2565751312_MetadataUsageId;
extern const RuntimeMethod* InternalDatabaseReference_PushChild_m1170766719_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_PushChild_m1170766719_MetadataUsageId;
extern RuntimeClass* FutureVoid_t983301800_il2cpp_TypeInfo_var;
extern const uint32_t InternalDatabaseReference_SetValueAsync_m1511685033_MetadataUsageId;
extern const uint32_t InternalDatabaseReference_UpdateChildrenAsync_m2600337708_MetadataUsageId;
extern const RuntimeMethod* InternalDatabaseReference_url_m3171555436_RuntimeMethod_var;
extern const uint32_t InternalDatabaseReference_url_m3171555436_MetadataUsageId;
extern const uint32_t InternalDataSnapshot_Dispose_m2759416598_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshot_exists_m888180388_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshot_exists_m888180388_MetadataUsageId;
extern RuntimeClass* InternalDataSnapshotList_t2262125325_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalDataSnapshot_children_m3447820114_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshot_children_m3447820114_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshot_key_string_m1747179232_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshot_key_string_m1747179232_MetadataUsageId;
extern RuntimeClass* Variant_t1163908808_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalDataSnapshot_value_m1688936517_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshot_value_m1688936517_MetadataUsageId;
extern const uint32_t InternalDataSnapshotList_Dispose_m599251185_MetadataUsageId;
extern RuntimeClass* InternalDataSnapshotListEnumerator_t4124443923_il2cpp_TypeInfo_var;
extern const uint32_t InternalDataSnapshotList_System_Collections_Generic_IEnumerableU3CFirebase_Database_Internal_InternalDataSnapshotU3E_GetEnumerator_m689994954_MetadataUsageId;
extern const uint32_t InternalDataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m1959259056_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshotList_size_m4130234286_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshotList_size_m4130234286_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshotList_getitem_m3488929343_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshotList_getitem_m3488929343_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshotListEnumerator_get_Current_m3393202783_RuntimeMethod_var;
extern String_t* _stringLiteral1650397319;
extern String_t* _stringLiteral4099182781;
extern String_t* _stringLiteral1322241199;
extern const uint32_t InternalDataSnapshotListEnumerator_get_Current_m3393202783_MetadataUsageId;
extern const RuntimeMethod* InternalDataSnapshotListEnumerator_Reset_m3467336562_RuntimeMethod_var;
extern const uint32_t InternalDataSnapshotListEnumerator_Reset_m3467336562_MetadataUsageId;
extern const uint32_t InternalFirebaseDatabase_getCPtr_m2276546031_MetadataUsageId;
extern const uint32_t InternalFirebaseDatabase_Dispose_m1322521425_MetadataUsageId;
extern RuntimeClass* InternalFirebaseDatabase_t2115990047_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalFirebaseDatabase_GetInstance_m1855740917_RuntimeMethod_var;
extern const uint32_t InternalFirebaseDatabase_GetInstance_m1855740917_MetadataUsageId;
extern const RuntimeMethod* InternalFirebaseDatabase_GetReference_m3478532065_RuntimeMethod_var;
extern const uint32_t InternalFirebaseDatabase_GetReference_m3478532065_MetadataUsageId;
extern const RuntimeMethod* InternalFirebaseDatabase_GetReference_m2350576704_RuntimeMethod_var;
extern const uint32_t InternalFirebaseDatabase_GetReference_m2350576704_MetadataUsageId;
extern const uint32_t InternalListener__ctor_m542432145_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m1272237168_RuntimeMethod_var;
extern const uint32_t InternalListener_TryGetListener_m4293346749_MetadataUsageId;
extern const RuntimeMethod* Dictionary_2_Remove_m2973165269_RuntimeMethod_var;
extern const uint32_t InternalListener_Dispose_m3966646282_MetadataUsageId;
extern RuntimeClass* Dictionary_2_t3524539611_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2__ctor_m673768653_RuntimeMethod_var;
extern const uint32_t InternalListener__cctor_m2423353445_MetadataUsageId;
extern const uint32_t InternalQuery_Dispose_m2035310434_MetadataUsageId;
extern const uint32_t InternalQuery_GetValueAsync_m3194050225_MetadataUsageId;
extern const RuntimeMethod* InternalQuery_is_valid_m2578659739_RuntimeMethod_var;
extern const uint32_t InternalQuery_is_valid_m2578659739_MetadataUsageId;
extern const RuntimeMethod* InternalQuery_DestroyValueListener_m1709304708_RuntimeMethod_var;
extern const uint32_t InternalQuery_DestroyValueListener_m1709304708_MetadataUsageId;
extern const RuntimeMethod* InternalQuery_RegisterValueListenerCallbacks_m3129422900_RuntimeMethod_var;
extern const uint32_t InternalQuery_RegisterValueListenerCallbacks_m3129422900_MetadataUsageId;
extern const RuntimeMethod* InternalQuery_DestroyChildListener_m2868463944_RuntimeMethod_var;
extern const uint32_t InternalQuery_DestroyChildListener_m2868463944_MetadataUsageId;
extern const RuntimeMethod* InternalQuery_RegisterChildListenerCallbacks_m3258966829_RuntimeMethod_var;
extern const uint32_t InternalQuery_RegisterChildListenerCallbacks_m3258966829_MetadataUsageId;
extern RuntimeClass* InternalValueListener_t1503646041_il2cpp_TypeInfo_var;
extern RuntimeClass* OnValueChangedDelegate_t3156556798_il2cpp_TypeInfo_var;
extern const RuntimeMethod* InternalValueListener_OnCancelledHandler_m1875026310_RuntimeMethod_var;
extern const RuntimeMethod* InternalValueListener_OnValueChangedHandler_m2019442509_RuntimeMethod_var;
extern const uint32_t InternalValueListener__cctor_m3278748422_MetadataUsageId;
extern const uint32_t InternalValueListener__ctor_m3494926899_MetadataUsageId;
extern const uint32_t InternalValueListener_TryGetListener_m572059894_MetadataUsageId;
extern RuntimeClass* ValueChangedEventArgs_t2597003737_il2cpp_TypeInfo_var;
extern const RuntimeMethod* EventHandler_1_Invoke_m3171920573_RuntimeMethod_var;
extern const uint32_t InternalValueListener_OnValueChangedHandler_m2019442509_MetadataUsageId;
extern const uint32_t InternalValueListener_OnCancelledHandler_m1875026310_MetadataUsageId;
extern const uint32_t InternalValueListener_DestroyCppListener_m1625115299_MetadataUsageId;
extern const uint32_t OnCancelledDelegate_BeginInvoke_m847176706_MetadataUsageId;
extern const uint32_t OnValueChangedDelegate_BeginInvoke_m3918677735_MetadataUsageId;
extern const RuntimeMethod* Utilities_MakeVariant_m2743354503_RuntimeMethod_var;
extern String_t* _stringLiteral1193511177;
extern const uint32_t Utilities_MakeVariant_m2743354503_MetadataUsageId;
extern const RuntimeMethod* Query__ctor_m2412639475_RuntimeMethod_var;
extern String_t* _stringLiteral3521236056;
extern const uint32_t Query__ctor_m2412639475_MetadataUsageId;
extern RuntimeClass* U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184_il2cpp_TypeInfo_var;
extern RuntimeClass* TaskCompletionSource_1_t1296145322_il2cpp_TypeInfo_var;
extern RuntimeClass* Action_1_t3185283855_il2cpp_TypeInfo_var;
extern const RuntimeMethod* TaskCompletionSource_1__ctor_m3028900620_RuntimeMethod_var;
extern const RuntimeMethod* U3CWrapInternalTaskU3Ec__AnonStorey0_U3CU3Em__0_m2997893672_RuntimeMethod_var;
extern const RuntimeMethod* Action_1__ctor_m335699739_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_ContinueWith_m3490367399_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_get_Task_m3845061881_RuntimeMethod_var;
extern const uint32_t Query_WrapInternalTask_m364867575_MetadataUsageId;
extern const RuntimeMethod* TaskCompletionSource_1_SetException_m501643672_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetCanceled_m3751695653_RuntimeMethod_var;
extern const RuntimeMethod* Task_1_get_Result_m935389177_RuntimeMethod_var;
extern const RuntimeMethod* TaskCompletionSource_1_SetResult_m1867160503_RuntimeMethod_var;
extern String_t* _stringLiteral2392634446;
extern String_t* _stringLiteral4035382732;
extern const uint32_t U3CWrapInternalTaskU3Ec__AnonStorey0_U3CU3Em__0_m2997893672_MetadataUsageId;
extern const uint32_t ValueChangedEventArgs__ctor_m2733847627_MetadataUsageId;
extern const uint32_t ValueChangedEventArgs__ctor_m4071829590_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745552_H
#define U3CMODULEU3E_T692745552_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745552 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745552_H
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
#ifndef DICTIONARY_2_T3524539611_H
#define DICTIONARY_2_T3524539611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>
struct  Dictionary_2_t3524539611  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	InternalListenerU5BU5D_t3898716409* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___valueSlots_7)); }
	inline InternalListenerU5BU5D_t3898716409* get_valueSlots_7() const { return ___valueSlots_7; }
	inline InternalListenerU5BU5D_t3898716409** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(InternalListenerU5BU5D_t3898716409* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t3524539611_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3503055253 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t3524539611_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3503055253 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3503055253 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3503055253 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3524539611_H
#ifndef INTERNALDATASNAPSHOTLISTENUMERATOR_T4124443923_H
#define INTERNALDATASNAPSHOTLISTENUMERATOR_T4124443923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator
struct  InternalDataSnapshotListEnumerator_t4124443923  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalDataSnapshotList Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::collectionRef
	InternalDataSnapshotList_t2262125325 * ___collectionRef_0;
	// System.Int32 Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentIndex
	int32_t ___currentIndex_1;
	// System.Object Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentObject
	RuntimeObject * ___currentObject_2;
	// System.Int32 Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::currentSize
	int32_t ___currentSize_3;

public:
	inline static int32_t get_offset_of_collectionRef_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t4124443923, ___collectionRef_0)); }
	inline InternalDataSnapshotList_t2262125325 * get_collectionRef_0() const { return ___collectionRef_0; }
	inline InternalDataSnapshotList_t2262125325 ** get_address_of_collectionRef_0() { return &___collectionRef_0; }
	inline void set_collectionRef_0(InternalDataSnapshotList_t2262125325 * value)
	{
		___collectionRef_0 = value;
		Il2CppCodeGenWriteBarrier((&___collectionRef_0), value);
	}

	inline static int32_t get_offset_of_currentIndex_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t4124443923, ___currentIndex_1)); }
	inline int32_t get_currentIndex_1() const { return ___currentIndex_1; }
	inline int32_t* get_address_of_currentIndex_1() { return &___currentIndex_1; }
	inline void set_currentIndex_1(int32_t value)
	{
		___currentIndex_1 = value;
	}

	inline static int32_t get_offset_of_currentObject_2() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t4124443923, ___currentObject_2)); }
	inline RuntimeObject * get_currentObject_2() const { return ___currentObject_2; }
	inline RuntimeObject ** get_address_of_currentObject_2() { return &___currentObject_2; }
	inline void set_currentObject_2(RuntimeObject * value)
	{
		___currentObject_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentObject_2), value);
	}

	inline static int32_t get_offset_of_currentSize_3() { return static_cast<int32_t>(offsetof(InternalDataSnapshotListEnumerator_t4124443923, ___currentSize_3)); }
	inline int32_t get_currentSize_3() const { return ___currentSize_3; }
	inline int32_t* get_address_of_currentSize_3() { return &___currentSize_3; }
	inline void set_currentSize_3(int32_t value)
	{
		___currentSize_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATASNAPSHOTLISTENUMERATOR_T4124443923_H
#ifndef INTERNALLISTENER_T340858984_H
#define INTERNALLISTENER_T340858984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalListener
struct  InternalListener_t340858984  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uid
	int32_t ___uid_2;

public:
	inline static int32_t get_offset_of_uid_2() { return static_cast<int32_t>(offsetof(InternalListener_t340858984, ___uid_2)); }
	inline int32_t get_uid_2() const { return ___uid_2; }
	inline int32_t* get_address_of_uid_2() { return &___uid_2; }
	inline void set_uid_2(int32_t value)
	{
		___uid_2 = value;
	}
};

struct InternalListener_t340858984_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.InternalListener::uidGenerator
	int32_t ___uidGenerator_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener> Firebase.Database.Internal.InternalListener::databaseCallbacks
	Dictionary_2_t3524539611 * ___databaseCallbacks_1;

public:
	inline static int32_t get_offset_of_uidGenerator_0() { return static_cast<int32_t>(offsetof(InternalListener_t340858984_StaticFields, ___uidGenerator_0)); }
	inline int32_t get_uidGenerator_0() const { return ___uidGenerator_0; }
	inline int32_t* get_address_of_uidGenerator_0() { return &___uidGenerator_0; }
	inline void set_uidGenerator_0(int32_t value)
	{
		___uidGenerator_0 = value;
	}

	inline static int32_t get_offset_of_databaseCallbacks_1() { return static_cast<int32_t>(offsetof(InternalListener_t340858984_StaticFields, ___databaseCallbacks_1)); }
	inline Dictionary_2_t3524539611 * get_databaseCallbacks_1() const { return ___databaseCallbacks_1; }
	inline Dictionary_2_t3524539611 ** get_address_of_databaseCallbacks_1() { return &___databaseCallbacks_1; }
	inline void set_databaseCallbacks_1(Dictionary_2_t3524539611 * value)
	{
		___databaseCallbacks_1 = value;
		Il2CppCodeGenWriteBarrier((&___databaseCallbacks_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALLISTENER_T340858984_H
#ifndef DATASNAPSHOTLIST_T1220253082_H
#define DATASNAPSHOTLIST_T1220253082_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DataSnapshot/DataSnapshotList
struct  DataSnapshotList_t1220253082  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotList::internalList
	RuntimeObject* ___internalList_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot/DataSnapshotList::database
	FirebaseDatabase_t1344765733 * ___database_1;

public:
	inline static int32_t get_offset_of_internalList_0() { return static_cast<int32_t>(offsetof(DataSnapshotList_t1220253082, ___internalList_0)); }
	inline RuntimeObject* get_internalList_0() const { return ___internalList_0; }
	inline RuntimeObject** get_address_of_internalList_0() { return &___internalList_0; }
	inline void set_internalList_0(RuntimeObject* value)
	{
		___internalList_0 = value;
		Il2CppCodeGenWriteBarrier((&___internalList_0), value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshotList_t1220253082, ___database_1)); }
	inline FirebaseDatabase_t1344765733 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_t1344765733 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((&___database_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASNAPSHOTLIST_T1220253082_H
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
#ifndef DATASNAPSHOTENUMERATOR_T1588063040_H
#define DATASNAPSHOTENUMERATOR_T1588063040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DataSnapshot/DataSnapshotEnumerator
struct  DataSnapshotEnumerator_t1588063040  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotEnumerator::internalEnumerator
	RuntimeObject* ___internalEnumerator_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot/DataSnapshotEnumerator::database
	FirebaseDatabase_t1344765733 * ___database_1;

public:
	inline static int32_t get_offset_of_internalEnumerator_0() { return static_cast<int32_t>(offsetof(DataSnapshotEnumerator_t1588063040, ___internalEnumerator_0)); }
	inline RuntimeObject* get_internalEnumerator_0() const { return ___internalEnumerator_0; }
	inline RuntimeObject** get_address_of_internalEnumerator_0() { return &___internalEnumerator_0; }
	inline void set_internalEnumerator_0(RuntimeObject* value)
	{
		___internalEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___internalEnumerator_0), value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshotEnumerator_t1588063040, ___database_1)); }
	inline FirebaseDatabase_t1344765733 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_t1344765733 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((&___database_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASNAPSHOTENUMERATOR_T1588063040_H
#ifndef DICTIONARY_2_T2789757396_H
#define DICTIONARY_2_T2789757396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>
struct  Dictionary_2_t2789757396  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	ActionU5BU5D_t4067822588* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___valueSlots_7)); }
	inline ActionU5BU5D_t4067822588* get_valueSlots_7() const { return ___valueSlots_7; }
	inline ActionU5BU5D_t4067822588** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(ActionU5BU5D_t4067822588* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t2789757396_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t3672161432 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t2789757396_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t3672161432 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t3672161432 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t3672161432 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2789757396_H
#ifndef TASKCOMPLETIONSOURCE_1_T7998902_H
#define TASKCOMPLETIONSOURCE_1_T7998902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>
struct  TaskCompletionSource_1_t7998902  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1::<Task>k__BackingField
	Task_1_t3012816260 * ___U3CTaskU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTaskU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t7998902, ___U3CTaskU3Ek__BackingField_0)); }
	inline Task_1_t3012816260 * get_U3CTaskU3Ek__BackingField_0() const { return ___U3CTaskU3Ek__BackingField_0; }
	inline Task_1_t3012816260 ** get_address_of_U3CTaskU3Ek__BackingField_0() { return &___U3CTaskU3Ek__BackingField_0; }
	inline void set_U3CTaskU3Ek__BackingField_0(Task_1_t3012816260 * value)
	{
		___U3CTaskU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTaskU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T7998902_H
#ifndef U3CGETTASKU3EC__ANONSTOREY0_T510208842_H
#define U3CGETTASKU3EC__ANONSTOREY0_T510208842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t510208842  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.Future_InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::fu
	Future_InternalDataSnapshot_t3720598533 * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t7998902 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t510208842, ___fu_0)); }
	inline Future_InternalDataSnapshot_t3720598533 * get_fu_0() const { return ___fu_0; }
	inline Future_InternalDataSnapshot_t3720598533 ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_InternalDataSnapshot_t3720598533 * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((&___fu_0), value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t510208842, ___tcs_1)); }
	inline TaskCompletionSource_1_t7998902 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t7998902 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t7998902 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((&___tcs_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CGETTASKU3EC__ANONSTOREY0_T510208842_H
#ifndef SWIGPENDINGEXCEPTION_T67283040_H
#define SWIGPENDINGEXCEPTION_T67283040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException
struct  SWIGPendingException_t67283040  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t67283040_StaticFields
{
public:
	// System.Int32 Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t67283040_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t67283040_ThreadStaticFields
{
public:
	// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t67283040_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((&___pendingException_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGPENDINGEXCEPTION_T67283040_H
#ifndef DATABASEINTERNALPINVOKE_T816701182_H
#define DATABASEINTERNALPINVOKE_T816701182_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE
struct  DatabaseInternalPINVOKE_t816701182  : public RuntimeObject
{
public:

public:
};

struct DatabaseInternalPINVOKE_t816701182_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t1928209643 * ___swigExceptionHelper_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper Firebase.Database.Internal.DatabaseInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t3177110595 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t816701182_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t1928209643 * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t1928209643 ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t1928209643 * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((&___swigExceptionHelper_0), value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(DatabaseInternalPINVOKE_t816701182_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t3177110595 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t3177110595 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t3177110595 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((&___swigStringHelper_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASEINTERNALPINVOKE_T816701182_H
#ifndef DICTIONARY_2_T1120143015_H
#define DICTIONARY_2_T1120143015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>
struct  Dictionary_2_t1120143015  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	StringU5BU5D_t1281789340* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	WeakReferenceU5BU5D_t4021634645* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___keySlots_6)); }
	inline StringU5BU5D_t1281789340* get_keySlots_6() const { return ___keySlots_6; }
	inline StringU5BU5D_t1281789340** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(StringU5BU5D_t1281789340* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___valueSlots_7)); }
	inline WeakReferenceU5BU5D_t4021634645* get_valueSlots_7() const { return ___valueSlots_7; }
	inline WeakReferenceU5BU5D_t4021634645** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(WeakReferenceU5BU5D_t4021634645* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t1120143015_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t2872046361 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t1120143015_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t2872046361 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t2872046361 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t2872046361 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T1120143015_H
#ifndef FIREBASEAPPPLATFORM_T3234831756_H
#define FIREBASEAPPPLATFORM_T3234831756_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Platform.FirebaseAppPlatform
struct  FirebaseAppPlatform_t3234831756  : public RuntimeObject
{
public:
	// System.WeakReference Firebase.Platform.FirebaseAppPlatform::<app>k__BackingField
	WeakReference_t1334886716 * ___U3CappU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CappU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FirebaseAppPlatform_t3234831756, ___U3CappU3Ek__BackingField_0)); }
	inline WeakReference_t1334886716 * get_U3CappU3Ek__BackingField_0() const { return ___U3CappU3Ek__BackingField_0; }
	inline WeakReference_t1334886716 ** get_address_of_U3CappU3Ek__BackingField_0() { return &___U3CappU3Ek__BackingField_0; }
	inline void set_U3CappU3Ek__BackingField_0(WeakReference_t1334886716 * value)
	{
		___U3CappU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CappU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAPPPLATFORM_T3234831756_H
#ifndef SWIGEXCEPTIONHELPER_T1928209643_H
#define SWIGEXCEPTIONHELPER_T1928209643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper
struct  SWIGExceptionHelper_t1928209643  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t1928209643_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t53799880 * ___applicationDelegate_0;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t53799880 * ___arithmeticDelegate_1;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t53799880 * ___divideByZeroDelegate_2;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t53799880 * ___indexOutOfRangeDelegate_3;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t53799880 * ___invalidCastDelegate_4;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t53799880 * ___invalidOperationDelegate_5;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t53799880 * ___ioDelegate_6;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t53799880 * ___nullReferenceDelegate_7;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t53799880 * ___outOfMemoryDelegate_8;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t53799880 * ___overflowDelegate_9;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t53799880 * ___systemDelegate_10;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t3508987397 * ___argumentDelegate_11;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t3508987397 * ___argumentNullDelegate_12;
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t3508987397 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t53799880 * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t53799880 ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t53799880 * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationDelegate_0), value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t53799880 * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t53799880 ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t53799880 * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((&___arithmeticDelegate_1), value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t53799880 * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t53799880 ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t53799880 * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((&___divideByZeroDelegate_2), value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t53799880 * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t53799880 ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t53799880 * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((&___indexOutOfRangeDelegate_3), value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t53799880 * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t53799880 ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t53799880 * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((&___invalidCastDelegate_4), value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t53799880 * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t53799880 ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t53799880 * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((&___invalidOperationDelegate_5), value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t53799880 * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t53799880 ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t53799880 * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((&___ioDelegate_6), value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t53799880 * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t53799880 ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t53799880 * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((&___nullReferenceDelegate_7), value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t53799880 * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t53799880 ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t53799880 * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((&___outOfMemoryDelegate_8), value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t53799880 * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t53799880 ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t53799880 * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((&___overflowDelegate_9), value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t53799880 * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t53799880 ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t53799880 * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((&___systemDelegate_10), value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t3508987397 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t3508987397 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t3508987397 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((&___argumentDelegate_11), value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t3508987397 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t3508987397 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t3508987397 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((&___argumentNullDelegate_12), value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t1928209643_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t3508987397 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t3508987397 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t3508987397 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((&___argumentOutOfRangeDelegate_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGEXCEPTIONHELPER_T1928209643_H
#ifndef QUERY_T3567563289_H
#define QUERY_T3567563289_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Query
struct  Query_t3567563289  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Query::internalQuery
	InternalQuery_t2324573063 * ___internalQuery_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Query::database
	FirebaseDatabase_t1344765733 * ___database_1;
	// Firebase.Database.Internal.InternalValueListener Firebase.Database.Query::valueListener
	InternalValueListener_t1503646041 * ___valueListener_2;
	// Firebase.Database.Internal.InternalChildListener Firebase.Database.Query::childListener
	InternalChildListener_t3083312682 * ___childListener_3;

public:
	inline static int32_t get_offset_of_internalQuery_0() { return static_cast<int32_t>(offsetof(Query_t3567563289, ___internalQuery_0)); }
	inline InternalQuery_t2324573063 * get_internalQuery_0() const { return ___internalQuery_0; }
	inline InternalQuery_t2324573063 ** get_address_of_internalQuery_0() { return &___internalQuery_0; }
	inline void set_internalQuery_0(InternalQuery_t2324573063 * value)
	{
		___internalQuery_0 = value;
		Il2CppCodeGenWriteBarrier((&___internalQuery_0), value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(Query_t3567563289, ___database_1)); }
	inline FirebaseDatabase_t1344765733 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_t1344765733 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((&___database_1), value);
	}

	inline static int32_t get_offset_of_valueListener_2() { return static_cast<int32_t>(offsetof(Query_t3567563289, ___valueListener_2)); }
	inline InternalValueListener_t1503646041 * get_valueListener_2() const { return ___valueListener_2; }
	inline InternalValueListener_t1503646041 ** get_address_of_valueListener_2() { return &___valueListener_2; }
	inline void set_valueListener_2(InternalValueListener_t1503646041 * value)
	{
		___valueListener_2 = value;
		Il2CppCodeGenWriteBarrier((&___valueListener_2), value);
	}

	inline static int32_t get_offset_of_childListener_3() { return static_cast<int32_t>(offsetof(Query_t3567563289, ___childListener_3)); }
	inline InternalChildListener_t3083312682 * get_childListener_3() const { return ___childListener_3; }
	inline InternalChildListener_t3083312682 ** get_address_of_childListener_3() { return &___childListener_3; }
	inline void set_childListener_3(InternalChildListener_t3083312682 * value)
	{
		___childListener_3 = value;
		Il2CppCodeGenWriteBarrier((&___childListener_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUERY_T3567563289_H
#ifndef TASK_T3187275312_H
#define TASK_T3187275312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task
struct  Task_t3187275312  : public RuntimeObject
{
public:
	// System.Object System.Threading.Tasks.Task::mutex
	RuntimeObject * ___mutex_2;
	// System.Collections.Generic.IList`1<System.Action`1<System.Threading.Tasks.Task>> System.Threading.Tasks.Task::continuations
	RuntimeObject* ___continuations_3;
	// System.AggregateException System.Threading.Tasks.Task::exception
	AggregateException_t3586243216 * ___exception_4;
	// System.Boolean System.Threading.Tasks.Task::isCanceled
	bool ___isCanceled_5;
	// System.Boolean System.Threading.Tasks.Task::isCompleted
	bool ___isCompleted_6;

public:
	inline static int32_t get_offset_of_mutex_2() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___mutex_2)); }
	inline RuntimeObject * get_mutex_2() const { return ___mutex_2; }
	inline RuntimeObject ** get_address_of_mutex_2() { return &___mutex_2; }
	inline void set_mutex_2(RuntimeObject * value)
	{
		___mutex_2 = value;
		Il2CppCodeGenWriteBarrier((&___mutex_2), value);
	}

	inline static int32_t get_offset_of_continuations_3() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___continuations_3)); }
	inline RuntimeObject* get_continuations_3() const { return ___continuations_3; }
	inline RuntimeObject** get_address_of_continuations_3() { return &___continuations_3; }
	inline void set_continuations_3(RuntimeObject* value)
	{
		___continuations_3 = value;
		Il2CppCodeGenWriteBarrier((&___continuations_3), value);
	}

	inline static int32_t get_offset_of_exception_4() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___exception_4)); }
	inline AggregateException_t3586243216 * get_exception_4() const { return ___exception_4; }
	inline AggregateException_t3586243216 ** get_address_of_exception_4() { return &___exception_4; }
	inline void set_exception_4(AggregateException_t3586243216 * value)
	{
		___exception_4 = value;
		Il2CppCodeGenWriteBarrier((&___exception_4), value);
	}

	inline static int32_t get_offset_of_isCanceled_5() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___isCanceled_5)); }
	inline bool get_isCanceled_5() const { return ___isCanceled_5; }
	inline bool* get_address_of_isCanceled_5() { return &___isCanceled_5; }
	inline void set_isCanceled_5(bool value)
	{
		___isCanceled_5 = value;
	}

	inline static int32_t get_offset_of_isCompleted_6() { return static_cast<int32_t>(offsetof(Task_t3187275312, ___isCompleted_6)); }
	inline bool get_isCompleted_6() const { return ___isCompleted_6; }
	inline bool* get_address_of_isCompleted_6() { return &___isCompleted_6; }
	inline void set_isCompleted_6(bool value)
	{
		___isCompleted_6 = value;
	}
};

struct Task_t3187275312_StaticFields
{
public:
	// System.Threading.ThreadLocal`1<System.Int32> System.Threading.Tasks.Task::executionDepth
	ThreadLocal_1_t558034686 * ___executionDepth_0;
	// System.Action`1<System.Action> System.Threading.Tasks.Task::immediateExecutor
	Action_1_t1436845072 * ___immediateExecutor_1;

public:
	inline static int32_t get_offset_of_executionDepth_0() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___executionDepth_0)); }
	inline ThreadLocal_1_t558034686 * get_executionDepth_0() const { return ___executionDepth_0; }
	inline ThreadLocal_1_t558034686 ** get_address_of_executionDepth_0() { return &___executionDepth_0; }
	inline void set_executionDepth_0(ThreadLocal_1_t558034686 * value)
	{
		___executionDepth_0 = value;
		Il2CppCodeGenWriteBarrier((&___executionDepth_0), value);
	}

	inline static int32_t get_offset_of_immediateExecutor_1() { return static_cast<int32_t>(offsetof(Task_t3187275312_StaticFields, ___immediateExecutor_1)); }
	inline Action_1_t1436845072 * get_immediateExecutor_1() const { return ___immediateExecutor_1; }
	inline Action_1_t1436845072 ** get_address_of_immediateExecutor_1() { return &___immediateExecutor_1; }
	inline void set_immediateExecutor_1(Action_1_t1436845072 * value)
	{
		___immediateExecutor_1 = value;
		Il2CppCodeGenWriteBarrier((&___immediateExecutor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_T3187275312_H
#ifndef SWIGSTRINGHELPER_T3177110595_H
#define SWIGSTRINGHELPER_T3177110595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper
struct  SWIGStringHelper_t3177110595  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t3177110595_StaticFields
{
public:
	// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t3932276921 * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t3177110595_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t3932276921 * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t3932276921 ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t3932276921 * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___stringDelegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGSTRINGHELPER_T3177110595_H
#ifndef UTILITIES_T2554312441_H
#define UTILITIES_T2554312441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Utilities
struct  Utilities_t2554312441  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UTILITIES_T2554312441_H
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
#ifndef U3CWRAPINTERNALTASKU3EC__ANONSTOREY0_T4012574184_H
#define U3CWRAPINTERNALTASKU3EC__ANONSTOREY0_T4012574184_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0
struct  U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot> Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t1296145322 * ___tcs_0;
	// Firebase.Database.Query Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0::$this
	Query_t3567563289 * ___U24this_1;

public:
	inline static int32_t get_offset_of_tcs_0() { return static_cast<int32_t>(offsetof(U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184, ___tcs_0)); }
	inline TaskCompletionSource_1_t1296145322 * get_tcs_0() const { return ___tcs_0; }
	inline TaskCompletionSource_1_t1296145322 ** get_address_of_tcs_0() { return &___tcs_0; }
	inline void set_tcs_0(TaskCompletionSource_1_t1296145322 * value)
	{
		___tcs_0 = value;
		Il2CppCodeGenWriteBarrier((&___tcs_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184, ___U24this_1)); }
	inline Query_t3567563289 * get_U24this_1() const { return ___U24this_1; }
	inline Query_t3567563289 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(Query_t3567563289 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CWRAPINTERNALTASKU3EC__ANONSTOREY0_T4012574184_H
#ifndef TASKCOMPLETIONSOURCE_1_T1296145322_H
#define TASKCOMPLETIONSOURCE_1_T1296145322_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>
struct  TaskCompletionSource_1_t1296145322  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1::<Task>k__BackingField
	Task_1_t5995384 * ___U3CTaskU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CTaskU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t1296145322, ___U3CTaskU3Ek__BackingField_0)); }
	inline Task_1_t5995384 * get_U3CTaskU3Ek__BackingField_0() const { return ___U3CTaskU3Ek__BackingField_0; }
	inline Task_1_t5995384 ** get_address_of_U3CTaskU3Ek__BackingField_0() { return &___U3CTaskU3Ek__BackingField_0; }
	inline void set_U3CTaskU3Ek__BackingField_0(Task_1_t5995384 * value)
	{
		___U3CTaskU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTaskU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASKCOMPLETIONSOURCE_1_T1296145322_H
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
#ifndef DICTIONARY_2_T736164020_H
#define DICTIONARY_2_T736164020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct  Dictionary_2_t736164020  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t385246372* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t964245573* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t385246372* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	StringU5BU5D_t1281789340* ___valueSlots_7;
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
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___table_4)); }
	inline Int32U5BU5D_t385246372* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t385246372** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t385246372* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___linkSlots_5)); }
	inline LinkU5BU5D_t964245573* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_t964245573** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_t964245573* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___keySlots_6)); }
	inline Int32U5BU5D_t385246372* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t385246372** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t385246372* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___valueSlots_7)); }
	inline StringU5BU5D_t1281789340* get_valueSlots_7() const { return ___valueSlots_7; }
	inline StringU5BU5D_t1281789340** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(StringU5BU5D_t1281789340* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___serialization_info_13)); }
	inline SerializationInfo_t950877179 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t950877179 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t950877179 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t736164020_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t886128184 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t736164020_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t886128184 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t886128184 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t886128184 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T736164020_H
#ifndef FIREBASEDATABASE_T1344765733_H
#define FIREBASEDATABASE_T1344765733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.FirebaseDatabase
struct  FirebaseDatabase_t1344765733  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.FirebaseDatabase::internalDatabase
	InternalFirebaseDatabase_t2115990047 * ___internalDatabase_2;
	// System.String Firebase.Database.FirebaseDatabase::name
	String_t* ___name_3;
	// Firebase.FirebaseApp Firebase.Database.FirebaseDatabase::<App>k__BackingField
	FirebaseApp_t2526288410 * ___U3CAppU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_internalDatabase_2() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733, ___internalDatabase_2)); }
	inline InternalFirebaseDatabase_t2115990047 * get_internalDatabase_2() const { return ___internalDatabase_2; }
	inline InternalFirebaseDatabase_t2115990047 ** get_address_of_internalDatabase_2() { return &___internalDatabase_2; }
	inline void set_internalDatabase_2(InternalFirebaseDatabase_t2115990047 * value)
	{
		___internalDatabase_2 = value;
		Il2CppCodeGenWriteBarrier((&___internalDatabase_2), value);
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_3), value);
	}

	inline static int32_t get_offset_of_U3CAppU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733, ___U3CAppU3Ek__BackingField_4)); }
	inline FirebaseApp_t2526288410 * get_U3CAppU3Ek__BackingField_4() const { return ___U3CAppU3Ek__BackingField_4; }
	inline FirebaseApp_t2526288410 ** get_address_of_U3CAppU3Ek__BackingField_4() { return &___U3CAppU3Ek__BackingField_4; }
	inline void set_U3CAppU3Ek__BackingField_4(FirebaseApp_t2526288410 * value)
	{
		___U3CAppU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAppU3Ek__BackingField_4), value);
	}
};

struct FirebaseDatabase_t1344765733_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference> Firebase.Database.FirebaseDatabase::databases
	Dictionary_2_t1120143015 * ___databases_5;
	// Firebase.CleanupNotifier/DisposeObjectDelegate Firebase.Database.FirebaseDatabase::<>f__mg$cache0
	DisposeObjectDelegate_t1709778548 * ___U3CU3Ef__mgU24cache0_6;
	// Firebase.CleanupNotifier/DeleteObjectDelegate Firebase.Database.FirebaseDatabase::<>f__mg$cache1
	DeleteObjectDelegate_t1957612988 * ___U3CU3Ef__mgU24cache1_7;

public:
	inline static int32_t get_offset_of_databases_5() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733_StaticFields, ___databases_5)); }
	inline Dictionary_2_t1120143015 * get_databases_5() const { return ___databases_5; }
	inline Dictionary_2_t1120143015 ** get_address_of_databases_5() { return &___databases_5; }
	inline void set_databases_5(Dictionary_2_t1120143015 * value)
	{
		___databases_5 = value;
		Il2CppCodeGenWriteBarrier((&___databases_5), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_6() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733_StaticFields, ___U3CU3Ef__mgU24cache0_6)); }
	inline DisposeObjectDelegate_t1709778548 * get_U3CU3Ef__mgU24cache0_6() const { return ___U3CU3Ef__mgU24cache0_6; }
	inline DisposeObjectDelegate_t1709778548 ** get_address_of_U3CU3Ef__mgU24cache0_6() { return &___U3CU3Ef__mgU24cache0_6; }
	inline void set_U3CU3Ef__mgU24cache0_6(DisposeObjectDelegate_t1709778548 * value)
	{
		___U3CU3Ef__mgU24cache0_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_6), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_7() { return static_cast<int32_t>(offsetof(FirebaseDatabase_t1344765733_StaticFields, ___U3CU3Ef__mgU24cache1_7)); }
	inline DeleteObjectDelegate_t1957612988 * get_U3CU3Ef__mgU24cache1_7() const { return ___U3CU3Ef__mgU24cache1_7; }
	inline DeleteObjectDelegate_t1957612988 ** get_address_of_U3CU3Ef__mgU24cache1_7() { return &___U3CU3Ef__mgU24cache1_7; }
	inline void set_U3CU3Ef__mgU24cache1_7(DeleteObjectDelegate_t1957612988 * value)
	{
		___U3CU3Ef__mgU24cache1_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEDATABASE_T1344765733_H
#ifndef DATABASEERROR_T3685099270_H
#define DATABASEERROR_T3685099270_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseError
struct  DatabaseError_t3685099270  : public RuntimeObject
{
public:
	// System.Int32 Firebase.Database.DatabaseError::<Code>k__BackingField
	int32_t ___U3CCodeU3Ek__BackingField_15;
	// System.String Firebase.Database.DatabaseError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_16;
	// System.String Firebase.Database.DatabaseError::<Details>k__BackingField
	String_t* ___U3CDetailsU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CCodeU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(DatabaseError_t3685099270, ___U3CCodeU3Ek__BackingField_15)); }
	inline int32_t get_U3CCodeU3Ek__BackingField_15() const { return ___U3CCodeU3Ek__BackingField_15; }
	inline int32_t* get_address_of_U3CCodeU3Ek__BackingField_15() { return &___U3CCodeU3Ek__BackingField_15; }
	inline void set_U3CCodeU3Ek__BackingField_15(int32_t value)
	{
		___U3CCodeU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(DatabaseError_t3685099270, ___U3CMessageU3Ek__BackingField_16)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_16() const { return ___U3CMessageU3Ek__BackingField_16; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_16() { return &___U3CMessageU3Ek__BackingField_16; }
	inline void set_U3CMessageU3Ek__BackingField_16(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMessageU3Ek__BackingField_16), value);
	}

	inline static int32_t get_offset_of_U3CDetailsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(DatabaseError_t3685099270, ___U3CDetailsU3Ek__BackingField_17)); }
	inline String_t* get_U3CDetailsU3Ek__BackingField_17() const { return ___U3CDetailsU3Ek__BackingField_17; }
	inline String_t** get_address_of_U3CDetailsU3Ek__BackingField_17() { return &___U3CDetailsU3Ek__BackingField_17; }
	inline void set_U3CDetailsU3Ek__BackingField_17(String_t* value)
	{
		___U3CDetailsU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDetailsU3Ek__BackingField_17), value);
	}
};

struct DatabaseError_t3685099270_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.String> Firebase.Database.DatabaseError::ErrorReasons
	RuntimeObject* ___ErrorReasons_13;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Firebase.Database.DatabaseError::ErrorCodes
	RuntimeObject* ___ErrorCodes_14;

public:
	inline static int32_t get_offset_of_ErrorReasons_13() { return static_cast<int32_t>(offsetof(DatabaseError_t3685099270_StaticFields, ___ErrorReasons_13)); }
	inline RuntimeObject* get_ErrorReasons_13() const { return ___ErrorReasons_13; }
	inline RuntimeObject** get_address_of_ErrorReasons_13() { return &___ErrorReasons_13; }
	inline void set_ErrorReasons_13(RuntimeObject* value)
	{
		___ErrorReasons_13 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorReasons_13), value);
	}

	inline static int32_t get_offset_of_ErrorCodes_14() { return static_cast<int32_t>(offsetof(DatabaseError_t3685099270_StaticFields, ___ErrorCodes_14)); }
	inline RuntimeObject* get_ErrorCodes_14() const { return ___ErrorCodes_14; }
	inline RuntimeObject** get_address_of_ErrorCodes_14() { return &___ErrorCodes_14; }
	inline void set_ErrorCodes_14(RuntimeObject* value)
	{
		___ErrorCodes_14 = value;
		Il2CppCodeGenWriteBarrier((&___ErrorCodes_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASEERROR_T3685099270_H
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
#ifndef DATASNAPSHOT_T2895422505_H
#define DATASNAPSHOT_T2895422505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DataSnapshot
struct  DataSnapshot_t2895422505  : public RuntimeObject
{
public:
	// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.DataSnapshot::internalSnapshot
	InternalDataSnapshot_t1607276085 * ___internalSnapshot_0;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DataSnapshot::database
	FirebaseDatabase_t1344765733 * ___database_1;

public:
	inline static int32_t get_offset_of_internalSnapshot_0() { return static_cast<int32_t>(offsetof(DataSnapshot_t2895422505, ___internalSnapshot_0)); }
	inline InternalDataSnapshot_t1607276085 * get_internalSnapshot_0() const { return ___internalSnapshot_0; }
	inline InternalDataSnapshot_t1607276085 ** get_address_of_internalSnapshot_0() { return &___internalSnapshot_0; }
	inline void set_internalSnapshot_0(InternalDataSnapshot_t1607276085 * value)
	{
		___internalSnapshot_0 = value;
		Il2CppCodeGenWriteBarrier((&___internalSnapshot_0), value);
	}

	inline static int32_t get_offset_of_database_1() { return static_cast<int32_t>(offsetof(DataSnapshot_t2895422505, ___database_1)); }
	inline FirebaseDatabase_t1344765733 * get_database_1() const { return ___database_1; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_1() { return &___database_1; }
	inline void set_database_1(FirebaseDatabase_t1344765733 * value)
	{
		___database_1 = value;
		Il2CppCodeGenWriteBarrier((&___database_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASNAPSHOT_T2895422505_H
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
#ifndef FIREBASEEXCEPTION_T627220627_H
#define FIREBASEEXCEPTION_T627220627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseException
struct  FirebaseException_t627220627  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(FirebaseException_t627220627, ___U3CErrorCodeU3Ek__BackingField_11)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_11() const { return ___U3CErrorCodeU3Ek__BackingField_11; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_11() { return &___U3CErrorCodeU3Ek__BackingField_11; }
	inline void set_U3CErrorCodeU3Ek__BackingField_11(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEEXCEPTION_T627220627_H
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
#ifndef TASK_1_T3012816260_H
#define TASK_1_T3012816260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>
struct  Task_1_t3012816260  : public Task_t3187275312
{
public:
	// T System.Threading.Tasks.Task`1::result
	InternalDataSnapshot_t1607276085 * ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t3012816260, ___result_7)); }
	inline InternalDataSnapshot_t1607276085 * get_result_7() const { return ___result_7; }
	inline InternalDataSnapshot_t1607276085 ** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(InternalDataSnapshot_t1607276085 * value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier((&___result_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T3012816260_H
#ifndef MONOPINVOKECALLBACKATTRIBUTE_T55682319_H
#define MONOPINVOKECALLBACKATTRIBUTE_T55682319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Future_InternalDataSnapshot/MonoPInvokeCallbackAttribute
struct  MonoPInvokeCallbackAttribute_t55682319  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOPINVOKECALLBACKATTRIBUTE_T55682319_H
#ifndef AGGREGATEEXCEPTION_T3586243216_H
#define AGGREGATEEXCEPTION_T3586243216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AggregateException
struct  AggregateException_t3586243216  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::<InnerExceptions>k__BackingField
	ReadOnlyCollection_1_t2649313536 * ___U3CInnerExceptionsU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CInnerExceptionsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(AggregateException_t3586243216, ___U3CInnerExceptionsU3Ek__BackingField_11)); }
	inline ReadOnlyCollection_1_t2649313536 * get_U3CInnerExceptionsU3Ek__BackingField_11() const { return ___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline ReadOnlyCollection_1_t2649313536 ** get_address_of_U3CInnerExceptionsU3Ek__BackingField_11() { return &___U3CInnerExceptionsU3Ek__BackingField_11; }
	inline void set_U3CInnerExceptionsU3Ek__BackingField_11(ReadOnlyCollection_1_t2649313536 * value)
	{
		___U3CInnerExceptionsU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CInnerExceptionsU3Ek__BackingField_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AGGREGATEEXCEPTION_T3586243216_H
#ifndef TASK_1_T5995384_H
#define TASK_1_T5995384_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot>
struct  Task_1_t5995384  : public Task_t3187275312
{
public:
	// T System.Threading.Tasks.Task`1::result
	DataSnapshot_t2895422505 * ___result_7;

public:
	inline static int32_t get_offset_of_result_7() { return static_cast<int32_t>(offsetof(Task_1_t5995384, ___result_7)); }
	inline DataSnapshot_t2895422505 * get_result_7() const { return ___result_7; }
	inline DataSnapshot_t2895422505 ** get_address_of_result_7() { return &___result_7; }
	inline void set_result_7(DataSnapshot_t2895422505 * value)
	{
		___result_7 = value;
		Il2CppCodeGenWriteBarrier((&___result_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TASK_1_T5995384_H
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
#ifndef VALUECHANGEDEVENTARGS_T2597003737_H
#define VALUECHANGEDEVENTARGS_T2597003737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.ValueChangedEventArgs
struct  ValueChangedEventArgs_t2597003737  : public EventArgs_t3591816995
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ValueChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t2895422505 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ValueChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t3685099270 * ___U3CDatabaseErrorU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t2597003737, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t2895422505 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t2895422505 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t2895422505 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSnapshotU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ValueChangedEventArgs_t2597003737, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t3685099270 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t3685099270 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t3685099270 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDatabaseErrorU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VALUECHANGEDEVENTARGS_T2597003737_H
#ifndef APPLICATIONEXCEPTION_T2339761290_H
#define APPLICATIONEXCEPTION_T2339761290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ApplicationException
struct  ApplicationException_t2339761290  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLICATIONEXCEPTION_T2339761290_H
#ifndef DATABASEREFERENCE_T514541437_H
#define DATABASEREFERENCE_T514541437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseReference
struct  DatabaseReference_t514541437  : public Query_t3567563289
{
public:
	// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.DatabaseReference::internalReference
	InternalDatabaseReference_t2434949222 * ___internalReference_4;
	// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::<Database>k__BackingField
	FirebaseDatabase_t1344765733 * ___U3CDatabaseU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_internalReference_4() { return static_cast<int32_t>(offsetof(DatabaseReference_t514541437, ___internalReference_4)); }
	inline InternalDatabaseReference_t2434949222 * get_internalReference_4() const { return ___internalReference_4; }
	inline InternalDatabaseReference_t2434949222 ** get_address_of_internalReference_4() { return &___internalReference_4; }
	inline void set_internalReference_4(InternalDatabaseReference_t2434949222 * value)
	{
		___internalReference_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalReference_4), value);
	}

	inline static int32_t get_offset_of_U3CDatabaseU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(DatabaseReference_t514541437, ___U3CDatabaseU3Ek__BackingField_5)); }
	inline FirebaseDatabase_t1344765733 * get_U3CDatabaseU3Ek__BackingField_5() const { return ___U3CDatabaseU3Ek__BackingField_5; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_U3CDatabaseU3Ek__BackingField_5() { return &___U3CDatabaseU3Ek__BackingField_5; }
	inline void set_U3CDatabaseU3Ek__BackingField_5(FirebaseDatabase_t1344765733 * value)
	{
		___U3CDatabaseU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDatabaseU3Ek__BackingField_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASEREFERENCE_T514541437_H
#ifndef CHILDCHANGEDEVENTARGS_T4202688343_H
#define CHILDCHANGEDEVENTARGS_T4202688343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.ChildChangedEventArgs
struct  ChildChangedEventArgs_t4202688343  : public EventArgs_t3591816995
{
public:
	// Firebase.Database.DataSnapshot Firebase.Database.ChildChangedEventArgs::<Snapshot>k__BackingField
	DataSnapshot_t2895422505 * ___U3CSnapshotU3Ek__BackingField_1;
	// Firebase.Database.DatabaseError Firebase.Database.ChildChangedEventArgs::<DatabaseError>k__BackingField
	DatabaseError_t3685099270 * ___U3CDatabaseErrorU3Ek__BackingField_2;
	// System.String Firebase.Database.ChildChangedEventArgs::<PreviousChildName>k__BackingField
	String_t* ___U3CPreviousChildNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CSnapshotU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t4202688343, ___U3CSnapshotU3Ek__BackingField_1)); }
	inline DataSnapshot_t2895422505 * get_U3CSnapshotU3Ek__BackingField_1() const { return ___U3CSnapshotU3Ek__BackingField_1; }
	inline DataSnapshot_t2895422505 ** get_address_of_U3CSnapshotU3Ek__BackingField_1() { return &___U3CSnapshotU3Ek__BackingField_1; }
	inline void set_U3CSnapshotU3Ek__BackingField_1(DataSnapshot_t2895422505 * value)
	{
		___U3CSnapshotU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CSnapshotU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CDatabaseErrorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t4202688343, ___U3CDatabaseErrorU3Ek__BackingField_2)); }
	inline DatabaseError_t3685099270 * get_U3CDatabaseErrorU3Ek__BackingField_2() const { return ___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline DatabaseError_t3685099270 ** get_address_of_U3CDatabaseErrorU3Ek__BackingField_2() { return &___U3CDatabaseErrorU3Ek__BackingField_2; }
	inline void set_U3CDatabaseErrorU3Ek__BackingField_2(DatabaseError_t3685099270 * value)
	{
		___U3CDatabaseErrorU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDatabaseErrorU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CPreviousChildNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ChildChangedEventArgs_t4202688343, ___U3CPreviousChildNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CPreviousChildNameU3Ek__BackingField_3() const { return ___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CPreviousChildNameU3Ek__BackingField_3() { return &___U3CPreviousChildNameU3Ek__BackingField_3; }
	inline void set_U3CPreviousChildNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CPreviousChildNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CPreviousChildNameU3Ek__BackingField_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHILDCHANGEDEVENTARGS_T4202688343_H
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
#ifndef REGISTRATIONTOKEN_T3106726623_H
#define REGISTRATIONTOKEN_T3106726623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/RegistrationToken
struct  RegistrationToken_t3106726623 
{
public:
	union
	{
		struct
		{
			// System.Int64 Firebase.CleanupNotifier/RegistrationToken::<Identifier>k__BackingField
			int64_t ___U3CIdentifierU3Ek__BackingField_2;
		};
		uint8_t RegistrationToken_t3106726623__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CIdentifierU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(RegistrationToken_t3106726623, ___U3CIdentifierU3Ek__BackingField_2)); }
	inline int64_t get_U3CIdentifierU3Ek__BackingField_2() const { return ___U3CIdentifierU3Ek__BackingField_2; }
	inline int64_t* get_address_of_U3CIdentifierU3Ek__BackingField_2() { return &___U3CIdentifierU3Ek__BackingField_2; }
	inline void set_U3CIdentifierU3Ek__BackingField_2(int64_t value)
	{
		___U3CIdentifierU3Ek__BackingField_2 = value;
	}
};

struct RegistrationToken_t3106726623_StaticFields
{
public:
	// System.Int64 Firebase.CleanupNotifier/RegistrationToken::nextId
	int64_t ___nextId_1;

public:
	inline static int32_t get_offset_of_nextId_1() { return static_cast<int32_t>(offsetof(RegistrationToken_t3106726623_StaticFields, ___nextId_1)); }
	inline int64_t get_nextId_1() const { return ___nextId_1; }
	inline int64_t* get_address_of_nextId_1() { return &___nextId_1; }
	inline void set_nextId_1(int64_t value)
	{
		___nextId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGISTRATIONTOKEN_T3106726623_H
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
#ifndef DATABASEEXCEPTION_T70968897_H
#define DATABASEEXCEPTION_T70968897_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.DatabaseException
struct  DatabaseException_t70968897  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATABASEEXCEPTION_T70968897_H
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
#ifndef FUTURESTATUS_T854570584_H
#define FUTURESTATUS_T854570584_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureStatus
struct  FutureStatus_t854570584 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FutureStatus_t854570584, ___value___1)); }
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
#endif // FUTURESTATUS_T854570584_H
#ifndef HANDLEREF_T3745784362_H
#define HANDLEREF_T3745784362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t3745784362 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::wrapper
	RuntimeObject * ___wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::handle
	intptr_t ___handle_1;

public:
	inline static int32_t get_offset_of_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___wrapper_0)); }
	inline RuntimeObject * get_wrapper_0() const { return ___wrapper_0; }
	inline RuntimeObject ** get_address_of_wrapper_0() { return &___wrapper_0; }
	inline void set_wrapper_0(RuntimeObject * value)
	{
		___wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((&___wrapper_0), value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t3745784362, ___handle_1)); }
	inline intptr_t get_handle_1() const { return ___handle_1; }
	inline intptr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(intptr_t value)
	{
		___handle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HANDLEREF_T3745784362_H
#ifndef KEYOPTIONS_T3246170364_H
#define KEYOPTIONS_T3246170364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.VariantExtension/KeyOptions
struct  KeyOptions_t3246170364 
{
public:
	// System.Int32 Firebase.VariantExtension/KeyOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyOptions_t3246170364, ___value___1)); }
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
#endif // KEYOPTIONS_T3246170364_H
#ifndef CHILDCHANGETYPE_T689306747_H
#define CHILDCHANGETYPE_T689306747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.ChildChangeType
struct  ChildChangeType_t689306747 
{
public:
	// System.Int32 Firebase.Database.Internal.ChildChangeType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ChildChangeType_t689306747, ___value___1)); }
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
#endif // CHILDCHANGETYPE_T689306747_H
#ifndef INTERNALVALUELISTENER_T1503646041_H
#define INTERNALVALUELISTENER_T1503646041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalValueListener
struct  InternalValueListener_t1503646041  : public InternalListener_t340858984
{
public:
	// System.Object Firebase.Database.Internal.InternalValueListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalValueListener::internalQuery
	InternalQuery_t2324573063 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalValueListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalValueListener::database
	FirebaseDatabase_t1344765733 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs> Firebase.Database.Internal.InternalValueListener::valueChangedImpl
	EventHandler_1_t521163170 * ___valueChangedImpl_7;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___eventLock_3), value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041, ___internalQuery_4)); }
	inline InternalQuery_t2324573063 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t2324573063 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t2324573063 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalQuery_4), value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041, ___database_6)); }
	inline FirebaseDatabase_t1344765733 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_t1344765733 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((&___database_6), value);
	}

	inline static int32_t get_offset_of_valueChangedImpl_7() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041, ___valueChangedImpl_7)); }
	inline EventHandler_1_t521163170 * get_valueChangedImpl_7() const { return ___valueChangedImpl_7; }
	inline EventHandler_1_t521163170 ** get_address_of_valueChangedImpl_7() { return &___valueChangedImpl_7; }
	inline void set_valueChangedImpl_7(EventHandler_1_t521163170 * value)
	{
		___valueChangedImpl_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueChangedImpl_7), value);
	}
};

struct InternalValueListener_t1503646041_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache0
	OnCancelledDelegate_t4200244901 * ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate Firebase.Database.Internal.InternalValueListener::<>f__mg$cache1
	OnValueChangedDelegate_t3156556798 * ___U3CU3Ef__mgU24cache1_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline OnCancelledDelegate_t4200244901 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline OnCancelledDelegate_t4200244901 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(OnCancelledDelegate_t4200244901 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(InternalValueListener_t1503646041_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline OnValueChangedDelegate_t3156556798 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline OnValueChangedDelegate_t3156556798 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(OnValueChangedDelegate_t3156556798 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALVALUELISTENER_T1503646041_H
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
#ifndef ERROR_T704128997_H
#define ERROR_T704128997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Error
struct  Error_t704128997 
{
public:
	// System.Int32 Firebase.Database.Internal.Error::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Error_t704128997, ___value___1)); }
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
#endif // ERROR_T704128997_H
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
#ifndef INTERNALCHILDLISTENER_T3083312682_H
#define INTERNALCHILDLISTENER_T3083312682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalChildListener
struct  InternalChildListener_t3083312682  : public InternalListener_t340858984
{
public:
	// System.Object Firebase.Database.Internal.InternalChildListener::eventLock
	RuntimeObject * ___eventLock_3;
	// Firebase.Database.Internal.InternalQuery Firebase.Database.Internal.InternalChildListener::internalQuery
	InternalQuery_t2324573063 * ___internalQuery_4;
	// System.IntPtr Firebase.Database.Internal.InternalChildListener::cppListener
	intptr_t ___cppListener_5;
	// Firebase.Database.FirebaseDatabase Firebase.Database.Internal.InternalChildListener::database
	FirebaseDatabase_t1344765733 * ___database_6;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::cancelledImpl
	EventHandler_1_t2126847776 * ___cancelledImpl_7;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childAddedImpl
	EventHandler_1_t2126847776 * ___childAddedImpl_8;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childChangedImpl
	EventHandler_1_t2126847776 * ___childChangedImpl_9;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childMovedImpl
	EventHandler_1_t2126847776 * ___childMovedImpl_10;
	// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs> Firebase.Database.Internal.InternalChildListener::childRemovedImpl
	EventHandler_1_t2126847776 * ___childRemovedImpl_11;

public:
	inline static int32_t get_offset_of_eventLock_3() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___eventLock_3)); }
	inline RuntimeObject * get_eventLock_3() const { return ___eventLock_3; }
	inline RuntimeObject ** get_address_of_eventLock_3() { return &___eventLock_3; }
	inline void set_eventLock_3(RuntimeObject * value)
	{
		___eventLock_3 = value;
		Il2CppCodeGenWriteBarrier((&___eventLock_3), value);
	}

	inline static int32_t get_offset_of_internalQuery_4() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___internalQuery_4)); }
	inline InternalQuery_t2324573063 * get_internalQuery_4() const { return ___internalQuery_4; }
	inline InternalQuery_t2324573063 ** get_address_of_internalQuery_4() { return &___internalQuery_4; }
	inline void set_internalQuery_4(InternalQuery_t2324573063 * value)
	{
		___internalQuery_4 = value;
		Il2CppCodeGenWriteBarrier((&___internalQuery_4), value);
	}

	inline static int32_t get_offset_of_cppListener_5() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___cppListener_5)); }
	inline intptr_t get_cppListener_5() const { return ___cppListener_5; }
	inline intptr_t* get_address_of_cppListener_5() { return &___cppListener_5; }
	inline void set_cppListener_5(intptr_t value)
	{
		___cppListener_5 = value;
	}

	inline static int32_t get_offset_of_database_6() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___database_6)); }
	inline FirebaseDatabase_t1344765733 * get_database_6() const { return ___database_6; }
	inline FirebaseDatabase_t1344765733 ** get_address_of_database_6() { return &___database_6; }
	inline void set_database_6(FirebaseDatabase_t1344765733 * value)
	{
		___database_6 = value;
		Il2CppCodeGenWriteBarrier((&___database_6), value);
	}

	inline static int32_t get_offset_of_cancelledImpl_7() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___cancelledImpl_7)); }
	inline EventHandler_1_t2126847776 * get_cancelledImpl_7() const { return ___cancelledImpl_7; }
	inline EventHandler_1_t2126847776 ** get_address_of_cancelledImpl_7() { return &___cancelledImpl_7; }
	inline void set_cancelledImpl_7(EventHandler_1_t2126847776 * value)
	{
		___cancelledImpl_7 = value;
		Il2CppCodeGenWriteBarrier((&___cancelledImpl_7), value);
	}

	inline static int32_t get_offset_of_childAddedImpl_8() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___childAddedImpl_8)); }
	inline EventHandler_1_t2126847776 * get_childAddedImpl_8() const { return ___childAddedImpl_8; }
	inline EventHandler_1_t2126847776 ** get_address_of_childAddedImpl_8() { return &___childAddedImpl_8; }
	inline void set_childAddedImpl_8(EventHandler_1_t2126847776 * value)
	{
		___childAddedImpl_8 = value;
		Il2CppCodeGenWriteBarrier((&___childAddedImpl_8), value);
	}

	inline static int32_t get_offset_of_childChangedImpl_9() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___childChangedImpl_9)); }
	inline EventHandler_1_t2126847776 * get_childChangedImpl_9() const { return ___childChangedImpl_9; }
	inline EventHandler_1_t2126847776 ** get_address_of_childChangedImpl_9() { return &___childChangedImpl_9; }
	inline void set_childChangedImpl_9(EventHandler_1_t2126847776 * value)
	{
		___childChangedImpl_9 = value;
		Il2CppCodeGenWriteBarrier((&___childChangedImpl_9), value);
	}

	inline static int32_t get_offset_of_childMovedImpl_10() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___childMovedImpl_10)); }
	inline EventHandler_1_t2126847776 * get_childMovedImpl_10() const { return ___childMovedImpl_10; }
	inline EventHandler_1_t2126847776 ** get_address_of_childMovedImpl_10() { return &___childMovedImpl_10; }
	inline void set_childMovedImpl_10(EventHandler_1_t2126847776 * value)
	{
		___childMovedImpl_10 = value;
		Il2CppCodeGenWriteBarrier((&___childMovedImpl_10), value);
	}

	inline static int32_t get_offset_of_childRemovedImpl_11() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682, ___childRemovedImpl_11)); }
	inline EventHandler_1_t2126847776 * get_childRemovedImpl_11() const { return ___childRemovedImpl_11; }
	inline EventHandler_1_t2126847776 ** get_address_of_childRemovedImpl_11() { return &___childRemovedImpl_11; }
	inline void set_childRemovedImpl_11(EventHandler_1_t2126847776 * value)
	{
		___childRemovedImpl_11 = value;
		Il2CppCodeGenWriteBarrier((&___childRemovedImpl_11), value);
	}
};

struct InternalChildListener_t3083312682_StaticFields
{
public:
	// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache0
	OnCancelledDelegate_t4200244901 * ___U3CU3Ef__mgU24cache0_12;
	// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache1
	OnChildChangeDelegate_t3077338721 * ___U3CU3Ef__mgU24cache1_13;
	// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate Firebase.Database.Internal.InternalChildListener::<>f__mg$cache2
	OnChildRemovedDelegate_t3205732376 * ___U3CU3Ef__mgU24cache2_14;

public:
	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_12() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682_StaticFields, ___U3CU3Ef__mgU24cache0_12)); }
	inline OnCancelledDelegate_t4200244901 * get_U3CU3Ef__mgU24cache0_12() const { return ___U3CU3Ef__mgU24cache0_12; }
	inline OnCancelledDelegate_t4200244901 ** get_address_of_U3CU3Ef__mgU24cache0_12() { return &___U3CU3Ef__mgU24cache0_12; }
	inline void set_U3CU3Ef__mgU24cache0_12(OnCancelledDelegate_t4200244901 * value)
	{
		___U3CU3Ef__mgU24cache0_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_12), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_13() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682_StaticFields, ___U3CU3Ef__mgU24cache1_13)); }
	inline OnChildChangeDelegate_t3077338721 * get_U3CU3Ef__mgU24cache1_13() const { return ___U3CU3Ef__mgU24cache1_13; }
	inline OnChildChangeDelegate_t3077338721 ** get_address_of_U3CU3Ef__mgU24cache1_13() { return &___U3CU3Ef__mgU24cache1_13; }
	inline void set_U3CU3Ef__mgU24cache1_13(OnChildChangeDelegate_t3077338721 * value)
	{
		___U3CU3Ef__mgU24cache1_13 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_14() { return static_cast<int32_t>(offsetof(InternalChildListener_t3083312682_StaticFields, ___U3CU3Ef__mgU24cache2_14)); }
	inline OnChildRemovedDelegate_t3205732376 * get_U3CU3Ef__mgU24cache2_14() const { return ___U3CU3Ef__mgU24cache2_14; }
	inline OnChildRemovedDelegate_t3205732376 ** get_address_of_U3CU3Ef__mgU24cache2_14() { return &___U3CU3Ef__mgU24cache2_14; }
	inline void set_U3CU3Ef__mgU24cache2_14(OnChildRemovedDelegate_t3205732376 * value)
	{
		___U3CU3Ef__mgU24cache2_14 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALCHILDLISTENER_T3083312682_H
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
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
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
#ifndef IOEXCEPTION_T4088381929_H
#define IOEXCEPTION_T4088381929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.IOException
struct  IOException_t4088381929  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IOEXCEPTION_T4088381929_H
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
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
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
#ifndef INTERNALQUERY_T2324573063_H
#define INTERNALQUERY_T2324573063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalQuery
struct  InternalQuery_t2324573063  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalQuery::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalQuery::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalQuery_t2324573063, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalQuery_t2324573063, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALQUERY_T2324573063_H
#ifndef DIVIDEBYZEROEXCEPTION_T1856388118_H
#define DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t1856388118  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifndef VARIANT_T1163908808_H
#define VARIANT_T1163908808_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Variant
struct  Variant_t1163908808  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Variant::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Variant::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(Variant_t1163908808, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(Variant_t1163908808, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VARIANT_T1163908808_H
#ifndef INTERNALDATASNAPSHOT_T1607276085_H
#define INTERNALDATASNAPSHOT_T1607276085_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalDataSnapshot
struct  InternalDataSnapshot_t1607276085  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDataSnapshot::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t1607276085, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshot_t1607276085, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATASNAPSHOT_T1607276085_H
#ifndef INTERNALDATASNAPSHOTLIST_T2262125325_H
#define INTERNALDATASNAPSHOTLIST_T2262125325_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalDataSnapshotList
struct  InternalDataSnapshotList_t2262125325  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDataSnapshotList::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalDataSnapshotList::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalDataSnapshotList_t2262125325, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalDataSnapshotList_t2262125325, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATASNAPSHOTLIST_T2262125325_H
#ifndef FUTUREBASE_T1024553797_H
#define FUTUREBASE_T1024553797_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureBase
struct  FutureBase_t1024553797  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t1024553797, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t1024553797, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTUREBASE_T1024553797_H
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
#ifndef INTERNALFIREBASEDATABASE_T2115990047_H
#define INTERNALFIREBASEDATABASE_T2115990047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalFirebaseDatabase
struct  InternalFirebaseDatabase_t2115990047  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.Database.Internal.InternalFirebaseDatabase::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.CleanupNotifier/RegistrationToken Firebase.Database.Internal.InternalFirebaseDatabase::cleanupToken
	RegistrationToken_t3106726623  ___cleanupToken_2;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t2115990047, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t2115990047, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_cleanupToken_2() { return static_cast<int32_t>(offsetof(InternalFirebaseDatabase_t2115990047, ___cleanupToken_2)); }
	inline RegistrationToken_t3106726623  get_cleanupToken_2() const { return ___cleanupToken_2; }
	inline RegistrationToken_t3106726623 * get_address_of_cleanupToken_2() { return &___cleanupToken_2; }
	inline void set_cleanupToken_2(RegistrationToken_t3106726623  value)
	{
		___cleanupToken_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALFIREBASEDATABASE_T2115990047_H
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
#ifndef FIREBASEAPP_T2526288410_H
#define FIREBASEAPP_T2526288410_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FirebaseApp
struct  FirebaseApp_t2526288410  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_2;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t3234831756 * ___appPlatform_14;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___swigCPtr_0)); }
	inline HandleRef_t3745784362  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t3745784362  value)
	{
		___swigCPtr_0 = value;
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((&___name_2), value);
	}

	inline static int32_t get_offset_of_appPlatform_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410, ___appPlatform_14)); }
	inline FirebaseAppPlatform_t3234831756 * get_appPlatform_14() const { return ___appPlatform_14; }
	inline FirebaseAppPlatform_t3234831756 ** get_address_of_appPlatform_14() { return &___appPlatform_14; }
	inline void set_appPlatform_14(FirebaseAppPlatform_t3234831756 * value)
	{
		___appPlatform_14 = value;
		Il2CppCodeGenWriteBarrier((&___appPlatform_14), value);
	}
};

struct FirebaseApp_t2526288410_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.WeakReference> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t1120143015 * ___nameToProxy_3;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_t3851719731 * ___cPtrToProxy_4;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_5;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_6;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_7;
	// System.Boolean Firebase.FirebaseApp::installedCerts
	bool ___installedCerts_8;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_9;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_12;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_13;
	// Firebase.FirebaseApp/CreateDelegate Firebase.FirebaseApp::<>f__am$cache0
	CreateDelegate_t3131870060 * ___U3CU3Ef__amU24cache0_15;
	// Firebase.FirebaseApp/LogMessageDelegate Firebase.FirebaseApp::<>f__mg$cache0
	LogMessageDelegate_t2362307948 * ___U3CU3Ef__mgU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__am$cache1
	Func_1_t3822001908 * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__am$cache2
	Func_1_t2062041240 * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache3
	Func_2_t680774166 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__am$cache4
	Func_2_t2129588086 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_nameToProxy_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___nameToProxy_3)); }
	inline Dictionary_2_t1120143015 * get_nameToProxy_3() const { return ___nameToProxy_3; }
	inline Dictionary_2_t1120143015 ** get_address_of_nameToProxy_3() { return &___nameToProxy_3; }
	inline void set_nameToProxy_3(Dictionary_2_t1120143015 * value)
	{
		___nameToProxy_3 = value;
		Il2CppCodeGenWriteBarrier((&___nameToProxy_3), value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___cPtrToProxy_4)); }
	inline Dictionary_2_t3851719731 * get_cPtrToProxy_4() const { return ___cPtrToProxy_4; }
	inline Dictionary_2_t3851719731 ** get_address_of_cPtrToProxy_4() { return &___cPtrToProxy_4; }
	inline void set_cPtrToProxy_4(Dictionary_2_t3851719731 * value)
	{
		___cPtrToProxy_4 = value;
		Il2CppCodeGenWriteBarrier((&___cPtrToProxy_4), value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___AppUtilCallbacksInitialized_5)); }
	inline bool get_AppUtilCallbacksInitialized_5() const { return ___AppUtilCallbacksInitialized_5; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_5() { return &___AppUtilCallbacksInitialized_5; }
	inline void set_AppUtilCallbacksInitialized_5(bool value)
	{
		___AppUtilCallbacksInitialized_5 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___AppUtilCallbacksLock_6)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_6() const { return ___AppUtilCallbacksLock_6; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_6() { return &___AppUtilCallbacksLock_6; }
	inline void set_AppUtilCallbacksLock_6(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_6 = value;
		Il2CppCodeGenWriteBarrier((&___AppUtilCallbacksLock_6), value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___PreventOnAllAppsDestroyed_7)); }
	inline bool get_PreventOnAllAppsDestroyed_7() const { return ___PreventOnAllAppsDestroyed_7; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_7() { return &___PreventOnAllAppsDestroyed_7; }
	inline void set_PreventOnAllAppsDestroyed_7(bool value)
	{
		___PreventOnAllAppsDestroyed_7 = value;
	}

	inline static int32_t get_offset_of_installedCerts_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___installedCerts_8)); }
	inline bool get_installedCerts_8() const { return ___installedCerts_8; }
	inline bool* get_address_of_installedCerts_8() { return &___installedCerts_8; }
	inline void set_installedCerts_8(bool value)
	{
		___installedCerts_8 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___crashlyticsInitializationAttempted_9)); }
	inline bool get_crashlyticsInitializationAttempted_9() const { return ___crashlyticsInitializationAttempted_9; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_9() { return &___crashlyticsInitializationAttempted_9; }
	inline void set_crashlyticsInitializationAttempted_9(bool value)
	{
		___crashlyticsInitializationAttempted_9 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_12() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___CheckDependenciesThread_12)); }
	inline int32_t get_CheckDependenciesThread_12() const { return ___CheckDependenciesThread_12; }
	inline int32_t* get_address_of_CheckDependenciesThread_12() { return &___CheckDependenciesThread_12; }
	inline void set_CheckDependenciesThread_12(int32_t value)
	{
		___CheckDependenciesThread_12 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___CheckDependenciesThreadLock_13)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_13() const { return ___CheckDependenciesThreadLock_13; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_13() { return &___CheckDependenciesThreadLock_13; }
	inline void set_CheckDependenciesThreadLock_13(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_13 = value;
		Il2CppCodeGenWriteBarrier((&___CheckDependenciesThreadLock_13), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache0_15)); }
	inline CreateDelegate_t3131870060 * get_U3CU3Ef__amU24cache0_15() const { return ___U3CU3Ef__amU24cache0_15; }
	inline CreateDelegate_t3131870060 ** get_address_of_U3CU3Ef__amU24cache0_15() { return &___U3CU3Ef__amU24cache0_15; }
	inline void set_U3CU3Ef__amU24cache0_15(CreateDelegate_t3131870060 * value)
	{
		___U3CU3Ef__amU24cache0_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_15), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__mgU24cache0_16)); }
	inline LogMessageDelegate_t2362307948 * get_U3CU3Ef__mgU24cache0_16() const { return ___U3CU3Ef__mgU24cache0_16; }
	inline LogMessageDelegate_t2362307948 ** get_address_of_U3CU3Ef__mgU24cache0_16() { return &___U3CU3Ef__mgU24cache0_16; }
	inline void set_U3CU3Ef__mgU24cache0_16(LogMessageDelegate_t2362307948 * value)
	{
		___U3CU3Ef__mgU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_16), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t3822001908 * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t3822001908 ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t3822001908 * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_17), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_t2062041240 * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_t2062041240 ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_t2062041240 * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache2_18), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t680774166 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t680774166 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t680774166 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache3_19), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t2526288410_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t2129588086 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t2129588086 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t2129588086 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache4_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIREBASEAPP_T2526288410_H
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
#ifndef ONCANCELLEDDELEGATE_T4200244901_H
#define ONCANCELLEDDELEGATE_T4200244901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate
struct  OnCancelledDelegate_t4200244901  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCANCELLEDDELEGATE_T4200244901_H
#ifndef EXCEPTIONDELEGATE_T53799880_H
#define EXCEPTIONDELEGATE_T53799880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct  ExceptionDelegate_t53799880  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONDELEGATE_T53799880_H
#ifndef ACTION_1_T3185283855_H
#define ACTION_1_T3185283855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>
struct  Action_1_t3185283855  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3185283855_H
#ifndef ONVALUECHANGEDDELEGATE_T3156556798_H
#define ONVALUECHANGEDDELEGATE_T3156556798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate
struct  OnValueChangedDelegate_t3156556798  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONVALUECHANGEDDELEGATE_T3156556798_H
#ifndef ONCHILDREMOVEDDELEGATE_T3205732376_H
#define ONCHILDREMOVEDDELEGATE_T3205732376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate
struct  OnChildRemovedDelegate_t3205732376  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCHILDREMOVEDDELEGATE_T3205732376_H
#ifndef ONCHILDCHANGEDELEGATE_T3077338721_H
#define ONCHILDCHANGEDELEGATE_T3077338721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate
struct  OnChildChangeDelegate_t3077338721  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCHILDCHANGEDELEGATE_T3077338721_H
#ifndef EXCEPTIONARGUMENTDELEGATE_T3508987397_H
#define EXCEPTIONARGUMENTDELEGATE_T3508987397_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t3508987397  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTIONARGUMENTDELEGATE_T3508987397_H
#ifndef EVENTHANDLER_1_T2126847776_H
#define EVENTHANDLER_1_T2126847776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>
struct  EventHandler_1_t2126847776  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T2126847776_H
#ifndef ONCANCELLEDDELEGATE_T3347641453_H
#define ONCANCELLEDDELEGATE_T3347641453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate
struct  OnCancelledDelegate_t3347641453  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONCANCELLEDDELEGATE_T3347641453_H
#ifndef EVENTHANDLER_1_T521163170_H
#define EVENTHANDLER_1_T521163170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>
struct  EventHandler_1_t521163170  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_1_T521163170_H
#ifndef FUTUREVOID_T983301800_H
#define FUTUREVOID_T983301800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.FutureVoid
struct  FutureVoid_t983301800  : public FutureBase_t1024553797
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureVoid::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureVoid::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureVoid/SWIG_CompletionDelegate Firebase.FutureVoid::SWIG_CompletionCB
	SWIG_CompletionDelegate_t2224793779 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t2224793779 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t2224793779 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t2224793779 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((&___SWIG_CompletionCB_7), value);
	}
};

struct FutureVoid_t983301800_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureVoid/Action> Firebase.FutureVoid::Callbacks
	Dictionary_2_t133523557 * ___Callbacks_3;
	// System.Int32 Firebase.FutureVoid::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureVoid::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t133523557 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t133523557 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t133523557 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___Callbacks_3), value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureVoid_t983301800_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTUREVOID_T983301800_H
#ifndef DELETEOBJECTDELEGATE_T1957612988_H
#define DELETEOBJECTDELEGATE_T1957612988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/DeleteObjectDelegate
struct  DeleteObjectDelegate_t1957612988  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELETEOBJECTDELEGATE_T1957612988_H
#ifndef SWIG_COMPLETIONDELEGATE_T2539505618_H
#define SWIG_COMPLETIONDELEGATE_T2539505618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_t2539505618  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIG_COMPLETIONDELEGATE_T2539505618_H
#ifndef FUTURE_INTERNALDATASNAPSHOT_T3720598533_H
#define FUTURE_INTERNALDATASNAPSHOT_T3720598533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Future_InternalDataSnapshot
struct  Future_InternalDataSnapshot_t3720598533  : public FutureBase_t1024553797
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.Future_InternalDataSnapshot::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;
	// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionCB
	SWIG_CompletionDelegate_t2539505618 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t2539505618 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t2539505618 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t2539505618 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((&___SWIG_CompletionCB_7), value);
	}
};

struct Future_InternalDataSnapshot_t3720598533_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action> Firebase.Database.Internal.Future_InternalDataSnapshot::Callbacks
	Dictionary_2_t2789757396 * ___Callbacks_3;
	// System.Int32 Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Database.Internal.Future_InternalDataSnapshot::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t2789757396 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t2789757396 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t2789757396 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((&___Callbacks_3), value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_InternalDataSnapshot_t3720598533_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((&___CallbackLock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FUTURE_INTERNALDATASNAPSHOT_T3720598533_H
#ifndef SWIGSTRINGDELEGATE_T3932276921_H
#define SWIGSTRINGDELEGATE_T3932276921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct  SWIGStringDelegate_t3932276921  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWIGSTRINGDELEGATE_T3932276921_H
#ifndef DISPOSEOBJECTDELEGATE_T1709778548_H
#define DISPOSEOBJECTDELEGATE_T1709778548_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.CleanupNotifier/DisposeObjectDelegate
struct  DisposeObjectDelegate_t1709778548  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISPOSEOBJECTDELEGATE_T1709778548_H
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
#ifndef INTERNALDATABASEREFERENCE_T2434949222_H
#define INTERNALDATABASEREFERENCE_T2434949222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.InternalDatabaseReference
struct  InternalDatabaseReference_t2434949222  : public InternalQuery_t2324573063
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalDatabaseReference::swigCPtr
	HandleRef_t3745784362  ___swigCPtr_2;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(InternalDatabaseReference_t2434949222, ___swigCPtr_2)); }
	inline HandleRef_t3745784362  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t3745784362 * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t3745784362  value)
	{
		___swigCPtr_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALDATABASEREFERENCE_T2434949222_H
#ifndef ACTION_T3901044065_H
#define ACTION_T3901044065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Firebase.Database.Internal.Future_InternalDataSnapshot/Action
struct  Action_t3901044065  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T3901044065_H
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


// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m2601736566_gshared (Dictionary_2_t1968819495 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C"  void Dictionary_2__ctor_m2253601317_gshared (Dictionary_2_t3384741 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m1786738978_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3280774074_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3474379962_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C"  void Dictionary_2__ctor_m518943619_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C"  void TaskCompletionSource_1__ctor_m3592511947_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C"  void TaskCompletionSource_1_SetException_m3035911479_gshared (TaskCompletionSource_1_t1480828981 * __this, Exception_t * p0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C"  Task_1_t190679043 * TaskCompletionSource_1_get_Task_m956462093_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C"  void Dictionary_2_set_Item_m3327106492_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
extern "C"  bool Dictionary_2_TryGetValue_m3411363121_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
extern "C"  bool Dictionary_2_Remove_m4193450060_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C"  void TaskCompletionSource_1_SetCanceled_m3013710522_gshared (TaskCompletionSource_1_t1480828981 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
extern "C"  void TaskCompletionSource_1_SetResult_m1045642339_gshared (TaskCompletionSource_1_t1480828981 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
extern "C"  void EventHandler_1_Invoke_m4124830036_gshared (EventHandler_1_t1004265597 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Action_1__ctor_m118522912_gshared (Action_1_t3252573759 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
extern "C"  Task_t3187275312 * Task_1_ContinueWith_m650681576_gshared (Task_1_t190679043 * __this, Action_1_t363146638 * p0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C"  RuntimeObject * Task_1_get_Result_m822420933_gshared (Task_1_t190679043 * __this, const RuntimeMethod* method);

// System.Void System.EventArgs::.ctor()
extern "C"  void EventArgs__ctor_m32674013 (EventArgs_t3591816995 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
extern "C"  void ChildChangedEventArgs_set_PreviousChildName_m2142858342 (ChildChangedEventArgs_t4202688343 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
extern "C"  void ChildChangedEventArgs_set_Snapshot_m2651167473 (ChildChangedEventArgs_t4202688343 * __this, DataSnapshot_t2895422505 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
extern "C"  void ChildChangedEventArgs_set_DatabaseError_m3384740705 (ChildChangedEventArgs_t4202688343 * __this, DatabaseError_t3685099270 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String>::.ctor()
#define Dictionary_2__ctor_m1227865334(__this, method) ((  void (*) (Dictionary_2_t736164020 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
#define Dictionary_2__ctor_m4006792853(__this, method) ((  void (*) (Dictionary_2_t2736202052 *, const RuntimeMethod*))Dictionary_2__ctor_m2253601317_gshared)(__this, method)
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
extern "C"  void DatabaseError_set_Code_m1052684206 (DatabaseError_t3685099270 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
extern "C"  void DatabaseError_set_Message_m1284691801 (DatabaseError_t3685099270 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
extern "C"  void DatabaseError_set_Details_m3804841624 (DatabaseError_t3685099270 * __this, String_t* ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
extern "C"  int32_t DatabaseError_ErrorToCode_m2977658262 (RuntimeObject * __this /* static, unused */, int32_t ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
extern "C"  void DatabaseError__ctor_m1830529586 (DatabaseError_t3685099270 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DatabaseError::get_Message()
extern "C"  String_t* DatabaseError_get_Message_m370412539 (DatabaseError_t3685099270 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String)
extern "C"  void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C"  void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void Query__ctor_m2412639475 (Query_t3567563289 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
extern "C"  void DatabaseReference_set_Database_m2537335485 (DatabaseReference_t514541437 * __this, FirebaseDatabase_t1344765733 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalDatabaseReference::Child(System.String)
extern "C"  InternalDatabaseReference_t2434949222 * InternalDatabaseReference_Child_m2565751312 (InternalDatabaseReference_t2434949222 * __this, String_t* ___path0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
extern "C"  FirebaseDatabase_t1344765733 * DatabaseReference_get_Database_m2579102942 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
extern "C"  void DatabaseReference__ctor_m1165359925 (DatabaseReference_t514541437 * __this, InternalDatabaseReference_t2434949222 * ___internalRef0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalDatabaseReference::PushChild()
extern "C"  InternalDatabaseReference_t2434949222 * InternalDatabaseReference_PushChild_m1170766719 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
extern "C"  Variant_t1163908808 * Utilities_MakeVariant_m2743354503 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
extern "C"  Task_t3187275312 * InternalDatabaseReference_SetValueAsync_m1511685033 (InternalDatabaseReference_t2434949222 * __this, Variant_t1163908808 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
extern "C"  RuntimeObject * Json_Deserialize_m3621240866 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
extern "C"  Task_t3187275312 * DatabaseReference_SetValueAsync_m3001601155 (DatabaseReference_t514541437 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::UpdateChildrenAsync(Firebase.Variant)
extern "C"  Task_t3187275312 * InternalDatabaseReference_UpdateChildrenAsync_m2600337708 (InternalDatabaseReference_t2434949222 * __this, Variant_t1163908808 * ___values0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
extern "C"  String_t* InternalDatabaseReference_url_m3171555436 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_root()
extern "C"  bool InternalDatabaseReference_is_root_m4288236037 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.InternalDatabaseReference::key_string()
extern "C"  String_t* InternalDatabaseReference_key_string_m1550646153 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::Equals(System.String)
extern "C"  bool String_Equals_m2270643605 (String_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::exists()
extern "C"  bool InternalDataSnapshot_exists_m888180388 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshot__ctor_m1576165825 (DataSnapshot_t2895422505 * __this, InternalDataSnapshot_t1607276085 * ___internalSnapshot0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
extern "C"  RuntimeObject * DataSnapshot_GetValue_m4020496872 (DataSnapshot_t2895422505 * __this, bool ___useExportFormat0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
extern "C"  String_t* InternalDataSnapshot_key_string_m1747179232 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDataSnapshotList Firebase.Database.Internal.InternalDataSnapshot::children()
extern "C"  InternalDataSnapshotList_t2262125325 * InternalDataSnapshot_children_m3447820114 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DataSnapshot/DataSnapshotList::.ctor(System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshotList__ctor_m1715230651 (DataSnapshotList_t1220253082 * __this, RuntimeObject* ___internalList0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
extern "C"  Variant_t1163908808 * InternalDataSnapshot_value_m1688936517 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.VariantExtension::ToObject(Firebase.Variant,Firebase.VariantExtension/KeyOptions)
extern "C"  RuntimeObject * VariantExtension_ToObject_m3219254421 (RuntimeObject * __this /* static, unused */, Variant_t1163908808 * p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Google.MiniJSON.Json::Serialize(System.Object)
extern "C"  String_t* Json_Serialize_m2386521976 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.DataSnapshot::get_Key()
extern "C"  String_t* DataSnapshot_get_Key_m2809767944 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Firebase.Database.DataSnapshot::get_Value()
extern "C"  RuntimeObject * DataSnapshot_get_Value_m1651419359 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
extern "C"  DataSnapshot_t2895422505 * DataSnapshot_CreateSnapshot_m934492055 (RuntimeObject * __this /* static, unused */, InternalDataSnapshot_t1607276085 * ___internalSnapshot0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshotEnumerator__ctor_m1530944003 (DataSnapshotEnumerator_t1588063040 * __this, RuntimeObject* ___internalEnumerator0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
extern "C"  void FirebaseDatabase_set_App_m2635536316 (FirebaseDatabase_t1344765733 * __this, FirebaseApp_t2526288410 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
extern "C"  HandleRef_t3745784362  FirebaseApp_getCPtr_m4063892236 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
extern "C"  intptr_t HandleRef_get_Handle_m4239591804 (HandleRef_t3745784362 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
extern "C"  HandleRef_t3745784362  InternalFirebaseDatabase_getCPtr_m2276546031 (RuntimeObject * __this /* static, unused */, InternalFirebaseDatabase_t2115990047 * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.CleanupNotifier/DisposeObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DisposeObjectDelegate__ctor_m2871048726 (DisposeObjectDelegate_t1709778548 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.CleanupNotifier/DeleteObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void DeleteObjectDelegate__ctor_m1051687624 (DeleteObjectDelegate_t1957612988 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.CleanupNotifier/RegistrationToken Firebase.CleanupNotifier::RegisterForCleanup(System.IntPtr,System.IntPtr,System.Object,System.Type,Firebase.CleanupNotifier/DisposeObjectDelegate,Firebase.CleanupNotifier/DeleteObjectDelegate)
extern "C"  RegistrationToken_t3106726623  CleanupNotifier_RegisterForCleanup_m3761672935 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, RuntimeObject * p2, Type_t * p3, DisposeObjectDelegate_t1709778548 * p4, DeleteObjectDelegate_t1957612988 * p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
extern "C"  void FirebaseDatabase_Dispose_m3713834711 (FirebaseDatabase_t1344765733 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::Finalize()
extern "C"  void Object_Finalize_m3076187857 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Monitor::Enter(System.Object)
extern "C"  void Monitor_Enter_m2249409497 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.GC::SuppressFinalize(System.Object)
extern "C"  void GC_SuppressFinalize_m1177400158 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Inequality_m3063970704 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>::Remove(!0)
#define Dictionary_2_Remove_m3241364839(__this, p0, method) ((  bool (*) (Dictionary_2_t1120143015 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m1786738978_gshared)(__this, p0, method)
// System.Void System.Threading.Monitor::Exit(System.Object)
extern "C"  void Monitor_Exit_m3585316909 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
extern "C"  FirebaseApp_t2526288410 * FirebaseApp_get_DefaultInstance_m3436350982 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
extern "C"  void DatabaseException__ctor_m448054621 (DatabaseException_t70968897 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
extern "C"  FirebaseDatabase_t1344765733 * FirebaseDatabase_GetInstance_m260630464 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
extern "C"  RuntimeObject* Services_get_AppConfig_m1967952270 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::get_AppPlatform()
extern "C"  FirebaseAppPlatform_t3234831756 * FirebaseApp_get_AppPlatform_m3711963337 (FirebaseApp_t2526288410 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
extern "C"  FirebaseDatabase_t1344765733 * FirebaseDatabase_GetInstance_m1820077615 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, String_t* ___url1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::IsNullOrEmpty(System.String)
extern "C"  bool String_IsNullOrEmpty_m2969720369 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FirebaseApp::get_Name()
extern "C"  String_t* FirebaseApp_get_Name_m2009872515 (FirebaseApp_t2526288410 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C"  String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m3248357561(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t1120143015 *, String_t*, WeakReference_t1334886716 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3280774074_gshared)(__this, p0, p1, method)
// System.Void System.WeakReference::.ctor(System.Object)
extern "C"  void WeakReference__ctor_m2401547918 (WeakReference_t1334886716 * __this, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m2559730247(__this, p0, p1, method) ((  void (*) (Dictionary_2_t1120143015 *, String_t*, WeakReference_t1334886716 *, const RuntimeMethod*))Dictionary_2_set_Item_m3474379962_gshared)(__this, p0, p1, method)
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
extern "C"  RuntimeObject * FirebaseApp_WeakReferenceGetTarget_m3657098532 (RuntimeObject * __this /* static, unused */, WeakReference_t1334886716 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
extern "C"  InternalFirebaseDatabase_t2115990047 * InternalFirebaseDatabase_GetInstance_m1855740917 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, String_t* ___url1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
extern "C"  void FirebaseDatabase__ctor_m803534952 (FirebaseDatabase_t1344765733 * __this, FirebaseApp_t2526288410 * ___app0, InternalFirebaseDatabase_t2115990047 * ___internalDB1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
extern "C"  InternalDatabaseReference_t2434949222 * InternalFirebaseDatabase_GetReference_m3478532065 (InternalFirebaseDatabase_t2115990047 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
extern "C"  InternalDatabaseReference_t2434949222 * InternalFirebaseDatabase_GetReference_m2350576704 (InternalFirebaseDatabase_t2115990047 * __this, String_t* ___path0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.WeakReference>::.ctor()
#define Dictionary_2__ctor_m3434722084(__this, method) ((  void (*) (Dictionary_2_t1120143015 *, const RuntimeMethod*))Dictionary_2__ctor_m518943619_gshared)(__this, method)
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
extern "C"  void SWIGExceptionHelper__ctor_m1098160713 (SWIGExceptionHelper_t1928209643 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
extern "C"  void SWIGStringHelper__ctor_m50472557 (SWIGStringHelper_t3177110595 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingApplicationException_m3959536635 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArithmeticException_m3200679066 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidCastException_m710822149 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIOException_m1808183465 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOverflowException_m1779575960 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingSystemException_m2418839823 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentException_m1540183458 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionDelegate__ctor_m4026563294 (ExceptionDelegate_t53799880 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionArgumentDelegate__ctor_m568038319 (ExceptionArgumentDelegate_t3508987397 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m3613631766 (RuntimeObject * __this /* static, unused */, ExceptionDelegate_t53799880 * ___applicationDelegate0, ExceptionDelegate_t53799880 * ___arithmeticDelegate1, ExceptionDelegate_t53799880 * ___divideByZeroDelegate2, ExceptionDelegate_t53799880 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t53799880 * ___invalidCastDelegate4, ExceptionDelegate_t53799880 * ___invalidOperationDelegate5, ExceptionDelegate_t53799880 * ___ioDelegate6, ExceptionDelegate_t53799880 * ___nullReferenceDelegate7, ExceptionDelegate_t53799880 * ___outOfMemoryDelegate8, ExceptionDelegate_t53799880 * ___overflowDelegate9, ExceptionDelegate_t53799880 * ___systemExceptionDelegate10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1812103195 (RuntimeObject * __this /* static, unused */, ExceptionArgumentDelegate_t3508987397 * ___argumentDelegate0, ExceptionArgumentDelegate_t3508987397 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t3508987397 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
extern "C"  Exception_t * SWIGPendingException_Retrieve_m1649320118 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C"  void ApplicationException__ctor_m692455299 (ApplicationException_t2339761290 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
extern "C"  void SWIGPendingException_Set_m3894827394 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
extern "C"  void ArithmeticException__ctor_m3829702723 (ArithmeticException_t4283546778 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
extern "C"  void DivideByZeroException__ctor_m3132723944 (DivideByZeroException_t1856388118 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
extern "C"  void IndexOutOfRangeException__ctor_m3342077230 (IndexOutOfRangeException_t1578797820 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
extern "C"  void InvalidCastException__ctor_m2604994586 (InvalidCastException_t3927145244 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
extern "C"  void InvalidOperationException__ctor_m1685032583 (InvalidOperationException_t56020091 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
extern "C"  void IOException__ctor_m3246761956 (IOException_t4088381929 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
extern "C"  void NullReferenceException__ctor_m3182281066 (NullReferenceException_t1023182353 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
extern "C"  void OutOfMemoryException__ctor_m4180974057 (OutOfMemoryException_t2437671686 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
extern "C"  void OverflowException__ctor_m2524654454 (OverflowException_t2020128637 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.SystemException::.ctor(System.String,System.Exception)
extern "C"  void SystemException__ctor_m4132668650 (SystemException_t176217640 * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
extern "C"  void ArgumentException__ctor_m3761792013 (ArgumentException_t132251570 * __this, String_t* p0, String_t* p1, Exception_t * p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
extern "C"  void ArgumentNullException__ctor_m2009621981 (ArgumentNullException_t1615371798 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
extern "C"  void ExceptionArgumentDelegate_Invoke_m89679380 (ExceptionArgumentDelegate_t3508987397 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
extern "C"  void ExceptionDelegate_Invoke_m204322687 (ExceptionDelegate_t53799880 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
extern "C"  String_t* SWIGStringHelper_CreateString_m1923416003 (RuntimeObject * __this /* static, unused */, String_t* ___cString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SWIGStringDelegate__ctor_m901817829 (SWIGStringDelegate_t3932276921 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
extern "C"  void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m783101452 (RuntimeObject * __this /* static, unused */, SWIGStringDelegate_t3932276921 * ___stringDelegate0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
extern "C"  String_t* SWIGStringDelegate_Invoke_m3094404280 (SWIGStringDelegate_t3932276921 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
extern "C"  void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m4034575448 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FutureBase__ctor_m4133108386 (FutureBase_t1024553797 * __this, intptr_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
extern "C"  void HandleRef__ctor_m868850155 (HandleRef_t3745784362 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureBase::Finalize()
extern "C"  void FutureBase_Finalize_m1172048056 (FutureBase_t1024553797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_m4252457530 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
extern "C"  void Future_InternalDataSnapshot_SetCompletionData_m2154239546 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureBase::Dispose()
extern "C"  void FutureBase_Dispose_m3149756878 (FutureBase_t1024553797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
extern "C"  void U3CGetTaskU3Ec__AnonStorey0__ctor_m3994183322 (U3CGetTaskU3Ec__AnonStorey0_t510208842 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::.ctor()
#define TaskCompletionSource_1__ctor_m2787549879(__this, method) ((  void (*) (TaskCompletionSource_1_t7998902 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3592511947_gshared)(__this, method)
// Firebase.FutureStatus Firebase.FutureBase::status()
extern "C"  int32_t FutureBase_status_m2790518304 (FutureBase_t1024553797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
extern "C"  void FirebaseException__ctor_m2690917590 (FirebaseException_t627220627 * __this, int32_t p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m3599795536(__this, p0, method) ((  void (*) (TaskCompletionSource_1_t7998902 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_m3035911479_gshared)(__this, p0, method)
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Task()
#define TaskCompletionSource_1_get_Task_m1632449679(__this, method) ((  Task_1_t3012816260 * (*) (TaskCompletionSource_1_t7998902 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m956462093_gshared)(__this, method)
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m3550217258 (Action_t3901044065 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
extern "C"  void Future_InternalDataSnapshot_SetOnCompletionCallback_m1872287132 (Future_InternalDataSnapshot_t3720598533 * __this, Action_t3901044065 * ___userCompletionCallback0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SWIG_CompletionDelegate__ctor_m3864827867 (SWIG_CompletionDelegate_t2539505618 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::.ctor()
#define Dictionary_2__ctor_m2969110377(__this, method) ((  void (*) (Dictionary_2_t2789757396 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::set_Item(!0,!1)
#define Dictionary_2_set_Item_m1558415536(__this, p0, p1, method) ((  void (*) (Dictionary_2_t2789757396 *, int32_t, Action_t3901044065 *, const RuntimeMethod*))Dictionary_2_set_Item_m3327106492_gshared)(__this, p0, p1, method)
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
extern "C"  intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386 (Future_InternalDataSnapshot_t3720598533 * __this, SWIG_CompletionDelegate_t2539505618 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
extern "C"  void Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___data0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m2152592574(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t2789757396 *, int32_t, Action_t3901044065 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.Future_InternalDataSnapshot/Action>::Remove(!0)
#define Dictionary_2_Remove_m4029264196(__this, p0, method) ((  bool (*) (Dictionary_2_t2789757396 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
extern "C"  void Action_Invoke_m2058789070 (Action_t3901044065 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m106048353 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, SWIG_CompletionDelegate_t2539505618 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
extern "C"  bool SWIGPendingException_get_Pending_m582413763 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
extern "C"  Exception_t * SWIGPendingException_Retrieve_m2171998990 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3708552191 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_result(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_result_m2983813031 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDataSnapshot__ctor_m3155803892 (InternalDataSnapshot_t1607276085 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m921486790(__this, method) ((  void (*) (TaskCompletionSource_1_t7998902 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m3013710522_gshared)(__this, method)
// System.Int32 Firebase.FutureBase::error()
extern "C"  int32_t FutureBase_error_m319631945 (FutureBase_t1024553797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.FutureBase::error_message()
extern "C"  String_t* FutureBase_error_message_m2570640618 (FutureBase_t1024553797 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::result()
extern "C"  InternalDataSnapshot_t1607276085 * Future_InternalDataSnapshot_result_m2074089048 (Future_InternalDataSnapshot_t3720598533 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.Internal.InternalDataSnapshot>::SetResult(!0)
#define TaskCompletionSource_1_SetResult_m1331262637(__this, p0, method) ((  void (*) (TaskCompletionSource_1_t7998902 *, InternalDataSnapshot_t1607276085 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m1045642339_gshared)(__this, p0, method)
// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1529526131 (Attribute_t861562559 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
extern "C"  void SWIG_CompletionDelegate_Invoke_m1054786283 (SWIG_CompletionDelegate_t2539505618 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
extern "C"  void InternalChildListener_OnChildChangeHandler_m2756529731 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
extern "C"  void InternalChildListener_OnChildRemovedHandler_m2594487275 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void InternalChildListener_OnCancelledHandler_m55601804 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCancelledDelegate__ctor_m3646004881 (OnCancelledDelegate_t4200244901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnChildChangeDelegate__ctor_m1119951216 (OnChildChangeDelegate_t3077338721 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnChildRemovedDelegate__ctor_m488517300 (OnChildRemovedDelegate_t3205732376 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
extern "C"  void InternalQuery_RegisterChildListenerCallbacks_m3258966829 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___cancelledCallback0, OnChildChangeDelegate_t3077338721 * ___childChangeCallback1, OnChildRemovedDelegate_t3205732376 * ___childRemovedCallback2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
extern "C"  void InternalListener__ctor_m542432145 (InternalListener_t340858984 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
extern "C"  bool InternalListener_TryGetListener_m4293346749 (RuntimeObject * __this /* static, unused */, int32_t ___uid0, InternalListener_t340858984 ** ___listener1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
extern "C"  bool InternalChildListener_TryGetListener_m4135003006 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, InternalChildListener_t3083312682 ** ___childListener1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
extern "C"  void ChildChangedEventArgs__ctor_m3147525033 (ChildChangedEventArgs_t4202688343 * __this, DataSnapshot_t2895422505 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<Firebase.Database.ChildChangedEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3773386107(__this, p0, p1, method) ((  void (*) (EventHandler_1_t2126847776 *, RuntimeObject *, ChildChangedEventArgs_t4202688343 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
extern "C"  DatabaseError_t3685099270 * DatabaseError_FromError_m669180003 (RuntimeObject * __this /* static, unused */, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
extern "C"  void ChildChangedEventArgs__ctor_m691361579 (ChildChangedEventArgs_t4202688343 * __this, DatabaseError_t3685099270 * ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
extern "C"  void InternalQuery_DestroyChildListener_m2868463944 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void OnCancelledDelegate_Invoke_m2726729966 (OnCancelledDelegate_t4200244901 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
extern "C"  void OnChildChangeDelegate_Invoke_m4081945494 (OnChildChangeDelegate_t3077338721 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
extern "C"  void OnChildRemovedDelegate_Invoke_m1423437502 (OnChildRemovedDelegate_t3205732376 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_m3819929639 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalQuery__ctor_m4090244133 (InternalQuery_t2324573063 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
extern "C"  void InternalQuery_Finalize_m3459020172 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m279241591 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
extern "C"  void InternalQuery_Dispose_m2035310434 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_key_string(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_key_string_m3617372534 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_root(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_root_m1605903526 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m540846483 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_Child__SWIG_0_m1121580414 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDatabaseReference__ctor_m1883612658 (InternalDatabaseReference_t2434949222 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_PushChild(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_PushChild_m2641246044 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Runtime.InteropServices.HandleRef Firebase.Variant::getCPtr(Firebase.Variant)
extern "C"  HandleRef_t3745784362  Variant_getCPtr_m474309385 (RuntimeObject * __this /* static, unused */, Variant_t1163908808 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SetValue_m1573575676 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, HandleRef_t3745784362  ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.FutureVoid::.ctor(System.IntPtr,System.Boolean)
extern "C"  void FutureVoid__ctor_m3140861867 (FutureVoid_t983301800 * __this, intptr_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Firebase.FutureVoid::GetTask(Firebase.FutureVoid)
extern "C"  Task_t3187275312 * FutureVoid_GetTask_m4275693369 (RuntimeObject * __this /* static, unused */, FutureVoid_t983301800 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_UpdateChildren(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_UpdateChildren_m781051516 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, HandleRef_t3745784362  ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m4115933297 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_m4195680626 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1172472909 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_children(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_children_m3898803079 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalDataSnapshotList::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDataSnapshotList__ctor_m3220367029 (InternalDataSnapshotList_t2262125325 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_m780224523 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2291277655 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Variant::.ctor(System.IntPtr,System.Boolean)
extern "C"  void Variant__ctor_m4169718302 (Variant_t1163908808 * __this, intptr_t p0, bool p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshotList(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshotList_m3100052608 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList::getitem(System.Int32)
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotList_getitem_m3488929343 (InternalDataSnapshotList_t2262125325 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Firebase.Database.Internal.InternalDataSnapshotList::size()
extern "C"  uint32_t InternalDataSnapshotList_size_m4130234286 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::.ctor(Firebase.Database.Internal.InternalDataSnapshotList)
extern "C"  void InternalDataSnapshotListEnumerator__ctor_m841448010 (InternalDataSnapshotListEnumerator_t4124443923 * __this, InternalDataSnapshotList_t2262125325 * ___collection0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshotList_size(System.Runtime.InteropServices.HandleRef)
extern "C"  uint32_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_size_m1844728926 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshotList_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_getitem_m1679163993 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 Firebase.Database.Internal.InternalDataSnapshotList::get_Count()
extern "C"  int32_t InternalDataSnapshotList_get_Count_m1603620401 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::get_Current()
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotListEnumerator_get_Current_m3393202783 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList::get_Item(System.Int32)
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotList_get_Item_m1155061552 (InternalDataSnapshotList_t2262125325 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.CleanupNotifier::DisposeObject(Firebase.CleanupNotifier/RegistrationToken&,System.Object,System.Boolean)
extern "C"  void CleanupNotifier_DisposeObject_m2709111202 (RuntimeObject * __this /* static, unused */, RegistrationToken_t3106726623 * p0, RuntimeObject * p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3_m2405421246 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
extern "C"  bool IntPtr_op_Equality_m408849716 (RuntimeObject * __this /* static, unused */, intptr_t p0, intptr_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalFirebaseDatabase__ctor_m188332242 (InternalFirebaseDatabase_t2115990047 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m2831832208 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m2905014466 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::TryGetValue(!0,!1&)
#define Dictionary_2_TryGetValue_m1272237168(__this, p0, p1, method) ((  bool (*) (Dictionary_2_t3524539611 *, int32_t, InternalListener_t340858984 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m3411363121_gshared)(__this, p0, p1, method)
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
extern "C"  void InternalListener_Dispose_m3966646282 (InternalListener_t340858984 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::Remove(!0)
#define Dictionary_2_Remove_m2973165269(__this, p0, method) ((  bool (*) (Dictionary_2_t3524539611 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m4193450060_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Database.Internal.InternalListener>::.ctor()
#define Dictionary_2__ctor_m673768653(__this, method) ((  void (*) (Dictionary_2_t3524539611 *, const RuntimeMethod*))Dictionary_2__ctor_m2601736566_gshared)(__this, method)
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m1362472026 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_m1300566419 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
extern "C"  void Future_InternalDataSnapshot__ctor_m1472638490 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
extern "C"  Task_1_t3012816260 * Future_InternalDataSnapshot_GetTask_m2600252647 (RuntimeObject * __this /* static, unused */, Future_InternalDataSnapshot_t3720598533 * ___fu0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m3458490525 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m2624393739 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m1853347796 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___jarg10, OnValueChangedDelegate_t3156556798 * ___jarg21, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m1713730544 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m1797914766 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___jarg10, OnChildChangeDelegate_t3077338721 * ___jarg21, OnChildRemovedDelegate_t3205732376 * ___jarg32, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
extern "C"  void InternalValueListener_OnValueChangedHandler_m2019442509 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void InternalValueListener_OnCancelledHandler_m1875026310 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValueChangedDelegate__ctor_m3897072874 (OnValueChangedDelegate_t3156556798 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
extern "C"  void InternalQuery_RegisterValueListenerCallbacks_m3129422900 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___cancelledCallback0, OnValueChangedDelegate_t3156556798 * ___valueChangedCallback1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
extern "C"  bool InternalValueListener_TryGetListener_m572059894 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, InternalValueListener_t1503646041 ** ___valueListener1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs__ctor_m2733847627 (ValueChangedEventArgs_t2597003737 * __this, DataSnapshot_t2895422505 * ___snapshot0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.EventHandler`1<Firebase.Database.ValueChangedEventArgs>::Invoke(System.Object,!0)
#define EventHandler_1_Invoke_m3171920573(__this, p0, p1, method) ((  void (*) (EventHandler_1_t521163170 *, RuntimeObject *, ValueChangedEventArgs_t2597003737 *, const RuntimeMethod*))EventHandler_1_Invoke_m4124830036_gshared)(__this, p0, p1, method)
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs__ctor_m4071829590 (ValueChangedEventArgs_t2597003737 * __this, DatabaseError_t3685099270 * ___error0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
extern "C"  void InternalQuery_DestroyValueListener_m1709304708 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void OnCancelledDelegate_Invoke_m4180255669 (OnCancelledDelegate_t3347641453 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
extern "C"  void OnValueChangedDelegate_Invoke_m3488926724 (OnValueChangedDelegate_t3156556798 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Firebase.Variant Firebase.Variant::FromObject(System.Object)
extern "C"  Variant_t1163908808 * Variant_FromObject_m3730095020 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
extern "C"  void DatabaseException__ctor_m3625098234 (DatabaseException_t70968897 * __this, String_t* ___message0, Exception_t * ___cause1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m1312628991 (ArgumentException_t132251570 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void InternalValueListener__ctor_m3494926899 (InternalValueListener_t1503646041 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void InternalChildListener__ctor_m2747023506 (InternalChildListener_t3083312682 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0::.ctor()
extern "C"  void U3CWrapInternalTaskU3Ec__AnonStorey0__ctor_m1833637869 (U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::.ctor()
#define TaskCompletionSource_1__ctor_m3028900620(__this, method) ((  void (*) (TaskCompletionSource_1_t1296145322 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m3592511947_gshared)(__this, method)
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>>::.ctor(System.Object,System.IntPtr)
#define Action_1__ctor_m335699739(__this, p0, p1, method) ((  void (*) (Action_1_t3185283855 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m118522912_gshared)(__this, p0, p1, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
#define Task_1_ContinueWith_m3490367399(__this, p0, method) ((  Task_t3187275312 * (*) (Task_1_t3012816260 *, Action_1_t3185283855 *, const RuntimeMethod*))Task_1_ContinueWith_m650681576_gshared)(__this, p0, method)
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::get_Task()
#define TaskCompletionSource_1_get_Task_m3845061881(__this, method) ((  Task_1_t5995384 * (*) (TaskCompletionSource_1_t1296145322 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m956462093_gshared)(__this, method)
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
extern "C"  Task_1_t3012816260 * InternalQuery_GetValueAsync_m3194050225 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
extern "C"  Task_1_t5995384 * Query_WrapInternalTask_m364867575 (Query_t3567563289 * __this, Task_1_t3012816260 * ___it0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
extern "C"  bool Task_get_IsFaulted_m4214781122 (Task_t3187275312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
extern "C"  AggregateException_t3586243216 * Task_get_Exception_m1363338588 (Task_t3187275312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m501643672(__this, p0, method) ((  void (*) (TaskCompletionSource_1_t1296145322 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_m3035911479_gshared)(__this, p0, method)
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
extern "C"  bool Task_get_IsCanceled_m3056077931 (Task_t3187275312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m3751695653(__this, method) ((  void (*) (TaskCompletionSource_1_t1296145322 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m3013710522_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
extern "C"  bool Task_get_IsCompleted_m3967183205 (Task_t3187275312 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Result()
#define Task_1_get_Result_m935389177(__this, method) ((  InternalDataSnapshot_t1607276085 * (*) (Task_1_t3012816260 *, const RuntimeMethod*))Task_1_get_Result_m822420933_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Database.DataSnapshot>::SetResult(!0)
#define TaskCompletionSource_1_SetResult_m1867160503(__this, p0, method) ((  void (*) (TaskCompletionSource_1_t1296145322 *, DataSnapshot_t2895422505 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m1045642339_gshared)(__this, p0, method)
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs_set_Snapshot_m595465497 (ValueChangedEventArgs_t2597003737 * __this, DataSnapshot_t2895422505 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs_set_DatabaseError_m1966768770 (ValueChangedEventArgs_t2597003737 * __this, DatabaseError_t3685099270 * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DataSnapshot,System.String)
extern "C"  void ChildChangedEventArgs__ctor_m3147525033 (ChildChangedEventArgs_t4202688343 * __this, DataSnapshot_t2895422505 * ___snapshot0, String_t* ___previousChildName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_m3147525033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___previousChildName1;
		ChildChangedEventArgs_set_PreviousChildName_m2142858342(__this, L_0, /*hidden argument*/NULL);
		DataSnapshot_t2895422505 * L_1 = ___snapshot0;
		ChildChangedEventArgs_set_Snapshot_m2651167473(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
extern "C"  void ChildChangedEventArgs__ctor_m691361579 (ChildChangedEventArgs_t4202688343 * __this, DatabaseError_t3685099270 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ChildChangedEventArgs__ctor_m691361579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		DatabaseError_t3685099270 * L_0 = ___error0;
		ChildChangedEventArgs_set_DatabaseError_m3384740705(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
extern "C"  void ChildChangedEventArgs_set_Snapshot_m2651167473 (ChildChangedEventArgs_t4202688343 * __this, DataSnapshot_t2895422505 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t2895422505 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
extern "C"  void ChildChangedEventArgs_set_DatabaseError_m3384740705 (ChildChangedEventArgs_t4202688343 * __this, DatabaseError_t3685099270 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t3685099270 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Database.ChildChangedEventArgs::set_PreviousChildName(System.String)
extern "C"  void ChildChangedEventArgs_set_PreviousChildName_m2142858342 (ChildChangedEventArgs_t4202688343 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CPreviousChildNameU3Ek__BackingField_3(L_0);
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
// System.Void Firebase.Database.DatabaseError::.cctor()
extern "C"  void DatabaseError__cctor_m2513753026 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__cctor_m2513753026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t736164020 * L_0 = (Dictionary_2_t736164020 *)il2cpp_codegen_object_new(Dictionary_2_t736164020_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1227865334(L_0, /*hidden argument*/Dictionary_2__ctor_m1227865334_RuntimeMethod_var);
		((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->set_ErrorReasons_13(L_0);
		Dictionary_2_t2736202052 * L_1 = (Dictionary_2_t2736202052 *)il2cpp_codegen_object_new(Dictionary_2_t2736202052_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4006792853(L_1, /*hidden argument*/Dictionary_2__ctor_m4006792853_RuntimeMethod_var);
		((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->set_ErrorCodes_14(L_1);
		RuntimeObject* L_2 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_2, (-1), _stringLiteral2533279496);
		RuntimeObject* L_3 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_3);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_3, ((int32_t)-2), _stringLiteral7116532);
		RuntimeObject* L_4 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_4);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_4, ((int32_t)-3), _stringLiteral1272064032);
		RuntimeObject* L_5 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_5, ((int32_t)-4), _stringLiteral4114175855);
		RuntimeObject* L_6 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_6);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_6, ((int32_t)-6), _stringLiteral2629173619);
		RuntimeObject* L_7 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_7);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_7, ((int32_t)-7), _stringLiteral2068415882);
		RuntimeObject* L_8 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_8);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_8, ((int32_t)-8), _stringLiteral1351415936);
		RuntimeObject* L_9 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_9, ((int32_t)-9), _stringLiteral1254611276);
		RuntimeObject* L_10 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_10, ((int32_t)-10), _stringLiteral2134433393);
		RuntimeObject* L_11 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_11, ((int32_t)-11), _stringLiteral3851914073);
		RuntimeObject* L_12 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_12, ((int32_t)-24), _stringLiteral3345617931);
		RuntimeObject* L_13 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_13, ((int32_t)-25), _stringLiteral2191255229);
		RuntimeObject* L_14 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.String>::set_Item(!0,!1) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_14, ((int32_t)-999), _stringLiteral1538137582);
		RuntimeObject* L_15 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_15);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_15, _stringLiteral3926892602, (-1));
		RuntimeObject* L_16 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_16);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_16, _stringLiteral2570894439, ((int32_t)-2));
		RuntimeObject* L_17 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_17);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_17, _stringLiteral971353870, ((int32_t)-3));
		RuntimeObject* L_18 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_18);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_18, _stringLiteral3302125764, ((int32_t)-4));
		RuntimeObject* L_19 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_19);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_19, _stringLiteral2679733824, ((int32_t)-6));
		RuntimeObject* L_20 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_20);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_20, _stringLiteral344317417, ((int32_t)-7));
		RuntimeObject* L_21 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_21, _stringLiteral3541650682, ((int32_t)-8));
		RuntimeObject* L_22 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_22);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_22, _stringLiteral1052471230, ((int32_t)-9));
		RuntimeObject* L_23 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_23, _stringLiteral1513908091, ((int32_t)-10));
		RuntimeObject* L_24 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_24);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_24, _stringLiteral3063544446, ((int32_t)-24));
		RuntimeObject* L_25 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorCodes_14();
		NullCheck(L_25);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(3 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(!0,!1) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, L_25, _stringLiteral123889061, ((int32_t)-25));
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::.ctor(System.Int32,System.String,System.String)
extern "C"  void DatabaseError__ctor_m1830529586 (DatabaseError_t3685099270 * __this, int32_t ___code0, String_t* ___message1, String_t* ___details2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError__ctor_m1830529586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DatabaseError_t3685099270 * G_B2_0 = NULL;
	DatabaseError_t3685099270 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	DatabaseError_t3685099270 * G_B3_1 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___code0;
		DatabaseError_set_Code_m1052684206(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___message1;
		DatabaseError_set_Message_m1284691801(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___details2;
		G_B1_0 = __this;
		if (L_2)
		{
			G_B2_0 = __this;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0026;
	}

IL_0025:
	{
		String_t* L_4 = ___details2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0026:
	{
		NullCheck(G_B3_1);
		DatabaseError_set_Details_m3804841624(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Code(System.Int32)
extern "C"  void DatabaseError_set_Code_m1052684206 (DatabaseError_t3685099270 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CCodeU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.String Firebase.Database.DatabaseError::get_Message()
extern "C"  String_t* DatabaseError_get_Message_m370412539 (DatabaseError_t3685099270 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Message(System.String)
extern "C"  void DatabaseError_set_Message_m1284691801 (DatabaseError_t3685099270 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Void Firebase.Database.DatabaseError::set_Details(System.String)
extern "C"  void DatabaseError_set_Details_m3804841624 (DatabaseError_t3685099270 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CDetailsU3Ek__BackingField_17(L_0);
		return;
	}
}
// System.Int32 Firebase.Database.DatabaseError::ErrorToCode(Firebase.Database.Internal.Error)
extern "C"  int32_t DatabaseError_ErrorToCode_m2977658262 (RuntimeObject * __this /* static, unused */, int32_t ___error0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___error0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0045;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_004b;
			}
			case 3:
			{
				goto IL_004e;
			}
			case 4:
			{
				goto IL_0051;
			}
			case 5:
			{
				goto IL_0054;
			}
			case 6:
			{
				goto IL_0057;
			}
			case 7:
			{
				goto IL_005a;
			}
			case 8:
			{
				goto IL_005d;
			}
			case 9:
			{
				goto IL_0060;
			}
			case 10:
			{
				goto IL_0066;
			}
			case 11:
			{
				goto IL_0069;
			}
			case 12:
			{
				goto IL_0069;
			}
			case 13:
			{
				goto IL_0069;
			}
		}
	}
	{
		goto IL_0069;
	}

IL_0045:
	{
		return ((int32_t)-4);
	}

IL_0048:
	{
		return ((int32_t)-6);
	}

IL_004b:
	{
		return ((int32_t)-7);
	}

IL_004e:
	{
		return ((int32_t)-8);
	}

IL_0051:
	{
		return ((int32_t)-24);
	}

IL_0054:
	{
		return ((int32_t)-2);
	}

IL_0057:
	{
		return ((int32_t)-9);
	}

IL_005a:
	{
		return ((int32_t)-3);
	}

IL_005d:
	{
		return ((int32_t)-10);
	}

IL_0060:
	{
		return ((int32_t)-999);
	}

IL_0066:
	{
		return ((int32_t)-25);
	}

IL_0069:
	{
		return ((int32_t)-999);
	}
}
// Firebase.Database.DatabaseError Firebase.Database.DatabaseError::FromError(Firebase.Database.Internal.Error,System.String)
extern "C"  DatabaseError_t3685099270 * DatabaseError_FromError_m669180003 (RuntimeObject * __this /* static, unused */, int32_t ___error0, String_t* ___msg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_FromError_m669180003_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	String_t* G_B4_0 = NULL;
	{
		int32_t L_0 = ___error0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t3685099270_il2cpp_TypeInfo_var);
		int32_t L_1 = DatabaseError_ErrorToCode_m2977658262(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = ___msg1;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = ___msg1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_5 = String_op_Equality_m920492651(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002d;
		}
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t3685099270_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((DatabaseError_t3685099270_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseError_t3685099270_il2cpp_TypeInfo_var))->get_ErrorReasons_13();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		String_t* L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.String>::get_Item(!0) */, IDictionary_2_t3494982707_il2cpp_TypeInfo_var, L_6, L_7);
		G_B4_0 = L_8;
		goto IL_002e;
	}

IL_002d:
	{
		String_t* L_9 = ___msg1;
		G_B4_0 = L_9;
	}

IL_002e:
	{
		V_1 = G_B4_0;
		int32_t L_10 = V_0;
		String_t* L_11 = V_1;
		DatabaseError_t3685099270 * L_12 = (DatabaseError_t3685099270 *)il2cpp_codegen_object_new(DatabaseError_t3685099270_il2cpp_TypeInfo_var);
		DatabaseError__ctor_m1830529586(L_12, L_10, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.String Firebase.Database.DatabaseError::ToString()
extern "C"  String_t* DatabaseError_ToString_m3311598321 (DatabaseError_t3685099270 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseError_ToString_m3311598321_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = DatabaseError_get_Message_m370412539(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral4120423514, L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseException::.ctor(System.String)
extern "C"  void DatabaseException__ctor_m448054621 (DatabaseException_t70968897 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.DatabaseException::.ctor(System.String,System.Exception)
extern "C"  void DatabaseException__ctor_m3625098234 (DatabaseException_t70968897 * __this, String_t* ___message0, Exception_t * ___cause1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___cause1;
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DatabaseReference::.ctor(Firebase.Database.Internal.InternalDatabaseReference,Firebase.Database.FirebaseDatabase)
extern "C"  void DatabaseReference__ctor_m1165359925 (DatabaseReference_t514541437 * __this, InternalDatabaseReference_t2434949222 * ___internalRef0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2434949222 * L_0 = ___internalRef0;
		FirebaseDatabase_t1344765733 * L_1 = ___database1;
		Query__ctor_m2412639475(__this, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t2434949222 * L_2 = ___internalRef0;
		__this->set_internalReference_4(L_2);
		FirebaseDatabase_t1344765733 * L_3 = ___database1;
		DatabaseReference_set_Database_m2537335485(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.DatabaseReference::get_Database()
extern "C"  FirebaseDatabase_t1344765733 * DatabaseReference_get_Database_m2579102942 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_t1344765733 * L_0 = __this->get_U3CDatabaseU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Firebase.Database.DatabaseReference::set_Database(Firebase.Database.FirebaseDatabase)
extern "C"  void DatabaseReference_set_Database_m2537335485 (DatabaseReference_t514541437 * __this, FirebaseDatabase_t1344765733 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseDatabase_t1344765733 * L_0 = ___value0;
		__this->set_U3CDatabaseU3Ek__BackingField_5(L_0);
		return;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Child(System.String)
extern "C"  DatabaseReference_t514541437 * DatabaseReference_Child_m994578086 (DatabaseReference_t514541437 * __this, String_t* ___pathString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseReference_Child_m994578086_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		String_t* L_1 = ___pathString0;
		NullCheck(L_0);
		InternalDatabaseReference_t2434949222 * L_2 = InternalDatabaseReference_Child_m2565751312(L_0, L_1, /*hidden argument*/NULL);
		FirebaseDatabase_t1344765733 * L_3 = DatabaseReference_get_Database_m2579102942(__this, /*hidden argument*/NULL);
		DatabaseReference_t514541437 * L_4 = (DatabaseReference_t514541437 *)il2cpp_codegen_object_new(DatabaseReference_t514541437_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_m1165359925(L_4, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.DatabaseReference::Push()
extern "C"  DatabaseReference_t514541437 * DatabaseReference_Push_m3990992992 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseReference_Push_m3990992992_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		InternalDatabaseReference_t2434949222 * L_1 = InternalDatabaseReference_PushChild_m1170766719(L_0, /*hidden argument*/NULL);
		FirebaseDatabase_t1344765733 * L_2 = DatabaseReference_get_Database_m2579102942(__this, /*hidden argument*/NULL);
		DatabaseReference_t514541437 * L_3 = (DatabaseReference_t514541437 *)il2cpp_codegen_object_new(DatabaseReference_t514541437_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_m1165359925(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetValueAsync(System.Object)
extern "C"  Task_t3187275312 * DatabaseReference_SetValueAsync_m3001601155 (DatabaseReference_t514541437 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		RuntimeObject * L_1 = ___value0;
		Variant_t1163908808 * L_2 = Utilities_MakeVariant_m2743354503(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Task_t3187275312 * L_3 = InternalDatabaseReference_SetValueAsync_m1511685033(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::SetRawJsonValueAsync(System.String)
extern "C"  Task_t3187275312 * DatabaseReference_SetRawJsonValueAsync_m3207614939 (DatabaseReference_t514541437 * __this, String_t* ___jsonValue0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___jsonValue0;
		RuntimeObject * L_1 = Json_Deserialize_m3621240866(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Task_t3187275312 * L_2 = DatabaseReference_SetValueAsync_m3001601155(__this, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Threading.Tasks.Task Firebase.Database.DatabaseReference::UpdateChildrenAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Task_t3187275312 * DatabaseReference_UpdateChildrenAsync_m2080309207 (DatabaseReference_t514541437 * __this, RuntimeObject* ___update0, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		RuntimeObject* L_1 = ___update0;
		Variant_t1163908808 * L_2 = Utilities_MakeVariant_m2743354503(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Task_t3187275312 * L_3 = InternalDatabaseReference_UpdateChildrenAsync_m2600337708(L_0, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String Firebase.Database.DatabaseReference::ToString()
extern "C"  String_t* DatabaseReference_ToString_m1165961744 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method)
{
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		String_t* L_1 = InternalDatabaseReference_url_m3171555436(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Database.DatabaseReference::get_Key()
extern "C"  String_t* DatabaseReference_get_Key_m472073313 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method)
{
	String_t* G_B3_0 = NULL;
	{
		InternalDatabaseReference_t2434949222 * L_0 = __this->get_internalReference_4();
		NullCheck(L_0);
		bool L_1 = InternalDatabaseReference_is_root_m4288236037(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		goto IL_0021;
	}

IL_0016:
	{
		InternalDatabaseReference_t2434949222 * L_2 = __this->get_internalReference_4();
		NullCheck(L_2);
		String_t* L_3 = InternalDatabaseReference_key_string_m1550646153(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
	}

IL_0021:
	{
		return G_B3_0;
	}
}
// System.Boolean Firebase.Database.DatabaseReference::Equals(System.Object)
extern "C"  bool DatabaseReference_Equals_m2382516952 (DatabaseReference_t514541437 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseReference_Equals_m2382516952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (!((DatabaseReference_t514541437 *)IsInstSealed((RuntimeObject*)L_0, DatabaseReference_t514541437_il2cpp_TypeInfo_var)))
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		RuntimeObject * L_2 = ___other0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		NullCheck(L_1);
		bool L_4 = String_Equals_m2270643605(L_1, L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 Firebase.Database.DatabaseReference::GetHashCode()
extern "C"  int32_t DatabaseReference_GetHashCode_m2445676018 (DatabaseReference_t514541437 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
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
// System.Void Firebase.Database.DataSnapshot::.ctor(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshot__ctor_m1576165825 (DataSnapshot_t2895422505 * __this, InternalDataSnapshot_t1607276085 * ___internalSnapshot0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InternalDataSnapshot_t1607276085 * L_0 = ___internalSnapshot0;
		__this->set_internalSnapshot_0(L_0);
		FirebaseDatabase_t1344765733 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot::CreateSnapshot(Firebase.Database.Internal.InternalDataSnapshot,Firebase.Database.FirebaseDatabase)
extern "C"  DataSnapshot_t2895422505 * DataSnapshot_CreateSnapshot_m934492055 (RuntimeObject * __this /* static, unused */, InternalDataSnapshot_t1607276085 * ___internalSnapshot0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_CreateSnapshot_m934492055_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DataSnapshot_t2895422505 * G_B3_0 = NULL;
	{
		InternalDataSnapshot_t1607276085 * L_0 = ___internalSnapshot0;
		NullCheck(L_0);
		bool L_1 = InternalDataSnapshot_exists_m888180388(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		InternalDataSnapshot_t1607276085 * L_2 = ___internalSnapshot0;
		FirebaseDatabase_t1344765733 * L_3 = ___database1;
		DataSnapshot_t2895422505 * L_4 = (DataSnapshot_t2895422505 *)il2cpp_codegen_object_new(DataSnapshot_t2895422505_il2cpp_TypeInfo_var);
		DataSnapshot__ctor_m1576165825(L_4, L_2, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = ((DataSnapshot_t2895422505 *)(NULL));
	}

IL_0018:
	{
		return G_B3_0;
	}
}
// System.Object Firebase.Database.DataSnapshot::get_Value()
extern "C"  RuntimeObject * DataSnapshot_get_Value_m1651419359 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = DataSnapshot_GetValue_m4020496872(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Firebase.Database.DataSnapshot::get_Key()
extern "C"  String_t* DataSnapshot_get_Key_m2809767944 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t1607276085 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		String_t* L_1 = InternalDataSnapshot_key_string_m1747179232(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.IEnumerable`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot::get_Children()
extern "C"  RuntimeObject* DataSnapshot_get_Children_m3785432501 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_get_Children_m3785432501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshot_t1607276085 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		InternalDataSnapshotList_t2262125325 * L_1 = InternalDataSnapshot_children_m3447820114(L_0, /*hidden argument*/NULL);
		FirebaseDatabase_t1344765733 * L_2 = __this->get_database_1();
		DataSnapshotList_t1220253082 * L_3 = (DataSnapshotList_t1220253082 *)il2cpp_codegen_object_new(DataSnapshotList_t1220253082_il2cpp_TypeInfo_var);
		DataSnapshotList__ctor_m1715230651(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String Firebase.Database.DataSnapshot::GetRawJsonValue()
extern "C"  String_t* DataSnapshot_GetRawJsonValue_m1174322441 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t1607276085 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_t1163908808 * L_1 = InternalDataSnapshot_value_m1688936517(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = VariantExtension_ToObject_m3219254421(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		String_t* L_3 = Json_Serialize_m2386521976(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Firebase.Database.DataSnapshot::GetValue(System.Boolean)
extern "C"  RuntimeObject * DataSnapshot_GetValue_m4020496872 (DataSnapshot_t2895422505 * __this, bool ___useExportFormat0, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t1607276085 * L_0 = __this->get_internalSnapshot_0();
		NullCheck(L_0);
		Variant_t1163908808 * L_1 = InternalDataSnapshot_value_m1688936517(L_0, /*hidden argument*/NULL);
		RuntimeObject * L_2 = VariantExtension_ToObject_m3219254421(NULL /*static, unused*/, L_1, 1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.String Firebase.Database.DataSnapshot::ToString()
extern "C"  String_t* DataSnapshot_ToString_m2167289265 (DataSnapshot_t2895422505 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshot_ToString_m2167289265_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral449145349);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral449145349);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = DataSnapshot_get_Key_m2809767944(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral1112591438);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1112591438);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		RuntimeObject * L_5 = DataSnapshot_get_Value_m1651419359(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3455956864);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3455956864);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2971454694(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshotEnumerator__ctor_m1530944003 (DataSnapshotEnumerator_t1588063040 * __this, RuntimeObject* ___internalEnumerator0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___internalEnumerator0;
		__this->set_internalEnumerator_0(L_0);
		FirebaseDatabase_t1344765733 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// Firebase.Database.DataSnapshot Firebase.Database.DataSnapshot/DataSnapshotEnumerator::get_Current()
extern "C"  DataSnapshot_t2895422505 * DataSnapshotEnumerator_get_Current_m2928615008 (DataSnapshotEnumerator_t1588063040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotEnumerator_get_Current_m2928615008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InternalDataSnapshot_t1607276085 * L_1 = InterfaceFuncInvoker0< InternalDataSnapshot_t1607276085 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Current() */, IEnumerator_1_t2039846553_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_t1344765733 * L_2 = __this->get_database_1();
		DataSnapshot_t2895422505 * L_3 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Firebase.Database.DataSnapshot/DataSnapshotEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * DataSnapshotEnumerator_System_Collections_IEnumerator_get_Current_m3659112353 (DataSnapshotEnumerator_t1588063040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotEnumerator_System_Collections_IEnumerator_get_Current_m3659112353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InternalDataSnapshot_t1607276085 * L_1 = InterfaceFuncInvoker0< InternalDataSnapshot_t1607276085 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot>::get_Current() */, IEnumerator_1_t2039846553_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_t1344765733 * L_2 = __this->get_database_1();
		DataSnapshot_t2895422505 * L_3 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Boolean Firebase.Database.DataSnapshot/DataSnapshotEnumerator::MoveNext()
extern "C"  bool DataSnapshotEnumerator_MoveNext_m3348442834 (DataSnapshotEnumerator_t1588063040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotEnumerator_MoveNext_m3348442834_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		bool L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::Reset()
extern "C"  void DataSnapshotEnumerator_Reset_m3483257481 (DataSnapshotEnumerator_t1588063040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotEnumerator_Reset_m3483257481_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void Firebase.Database.DataSnapshot/DataSnapshotEnumerator::Dispose()
extern "C"  void DataSnapshotEnumerator_Dispose_m3017308378 (DataSnapshotEnumerator_t1588063040 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotEnumerator_Dispose_m3017308378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalEnumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t3640265483_il2cpp_TypeInfo_var, L_0);
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
// System.Void Firebase.Database.DataSnapshot/DataSnapshotList::.ctor(System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot>,Firebase.Database.FirebaseDatabase)
extern "C"  void DataSnapshotList__ctor_m1715230651 (DataSnapshotList_t1220253082 * __this, RuntimeObject* ___internalList0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___internalList0;
		__this->set_internalList_0(L_0);
		FirebaseDatabase_t1344765733 * L_1 = ___database1;
		__this->set_database_1(L_1);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<Firebase.Database.DataSnapshot> Firebase.Database.DataSnapshot/DataSnapshotList::GetEnumerator()
extern "C"  RuntimeObject* DataSnapshotList_GetEnumerator_m4215544644 (DataSnapshotList_t1220253082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotList_GetEnumerator_m4215544644_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalList_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot>::GetEnumerator() */, IEnumerable_1_t587128974_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_t1344765733 * L_2 = __this->get_database_1();
		DataSnapshotEnumerator_t1588063040 * L_3 = (DataSnapshotEnumerator_t1588063040 *)il2cpp_codegen_object_new(DataSnapshotEnumerator_t1588063040_il2cpp_TypeInfo_var);
		DataSnapshotEnumerator__ctor_m1530944003(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.IEnumerator Firebase.Database.DataSnapshot/DataSnapshotList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* DataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m116740761 (DataSnapshotList_t1220253082 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m116740761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_internalList_0();
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Firebase.Database.Internal.InternalDataSnapshot>::GetEnumerator() */, IEnumerable_1_t587128974_il2cpp_TypeInfo_var, L_0);
		FirebaseDatabase_t1344765733 * L_2 = __this->get_database_1();
		DataSnapshotEnumerator_t1588063040 * L_3 = (DataSnapshotEnumerator_t1588063040 *)il2cpp_codegen_object_new(DataSnapshotEnumerator_t1588063040_il2cpp_TypeInfo_var);
		DataSnapshotEnumerator__ctor_m1530944003(L_3, L_1, L_2, /*hidden argument*/NULL);
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
// System.Void Firebase.Database.FirebaseDatabase::.ctor(Firebase.FirebaseApp,Firebase.Database.Internal.InternalFirebaseDatabase)
extern "C"  void FirebaseDatabase__ctor_m803534952 (FirebaseDatabase_t1344765733 * __this, FirebaseApp_t2526288410 * ___app0, InternalFirebaseDatabase_t2115990047 * ___internalDB1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__ctor_m803534952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t3745784362  V_0;
	memset(&V_0, 0, sizeof(V_0));
	HandleRef_t3745784362  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Type_t * G_B2_0 = NULL;
	FirebaseDatabase_t1344765733 * G_B2_1 = NULL;
	intptr_t G_B2_2;
	memset(&G_B2_2, 0, sizeof(G_B2_2));
	intptr_t G_B2_3;
	memset(&G_B2_3, 0, sizeof(G_B2_3));
	InternalFirebaseDatabase_t2115990047 * G_B2_4 = NULL;
	Type_t * G_B1_0 = NULL;
	FirebaseDatabase_t1344765733 * G_B1_1 = NULL;
	intptr_t G_B1_2;
	memset(&G_B1_2, 0, sizeof(G_B1_2));
	intptr_t G_B1_3;
	memset(&G_B1_3, 0, sizeof(G_B1_3));
	InternalFirebaseDatabase_t2115990047 * G_B1_4 = NULL;
	DisposeObjectDelegate_t1709778548 * G_B4_0 = NULL;
	Type_t * G_B4_1 = NULL;
	FirebaseDatabase_t1344765733 * G_B4_2 = NULL;
	intptr_t G_B4_3;
	memset(&G_B4_3, 0, sizeof(G_B4_3));
	intptr_t G_B4_4;
	memset(&G_B4_4, 0, sizeof(G_B4_4));
	InternalFirebaseDatabase_t2115990047 * G_B4_5 = NULL;
	DisposeObjectDelegate_t1709778548 * G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	FirebaseDatabase_t1344765733 * G_B3_2 = NULL;
	intptr_t G_B3_3;
	memset(&G_B3_3, 0, sizeof(G_B3_3));
	intptr_t G_B3_4;
	memset(&G_B3_4, 0, sizeof(G_B3_4));
	InternalFirebaseDatabase_t2115990047 * G_B3_5 = NULL;
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		FirebaseApp_t2526288410 * L_0 = ___app0;
		FirebaseDatabase_set_App_m2635536316(__this, L_0, /*hidden argument*/NULL);
		InternalFirebaseDatabase_t2115990047 * L_1 = ___internalDB1;
		__this->set_internalDatabase_2(L_1);
		InternalFirebaseDatabase_t2115990047 * L_2 = __this->get_internalDatabase_2();
		FirebaseApp_t2526288410 * L_3 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		HandleRef_t3745784362  L_4 = FirebaseApp_getCPtr_m4063892236(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		intptr_t L_5 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_0), /*hidden argument*/NULL);
		InternalFirebaseDatabase_t2115990047 * L_6 = __this->get_internalDatabase_2();
		HandleRef_t3745784362  L_7 = InternalFirebaseDatabase_getCPtr_m2276546031(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		intptr_t L_8 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_1), /*hidden argument*/NULL);
		Type_t * L_9 = Object_GetType_m88164663(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		DisposeObjectDelegate_t1709778548 * L_10 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		G_B1_0 = L_9;
		G_B1_1 = __this;
		G_B1_2 = L_8;
		G_B1_3 = L_5;
		G_B1_4 = L_2;
		if (L_10)
		{
			G_B2_0 = L_9;
			G_B2_1 = __this;
			G_B2_2 = L_8;
			G_B2_3 = L_5;
			G_B2_4 = L_2;
			goto IL_005a;
		}
	}
	{
		intptr_t L_11 = (intptr_t)FirebaseDatabase_DisposeObject_m4264362008_RuntimeMethod_var;
		DisposeObjectDelegate_t1709778548 * L_12 = (DisposeObjectDelegate_t1709778548 *)il2cpp_codegen_object_new(DisposeObjectDelegate_t1709778548_il2cpp_TypeInfo_var);
		DisposeObjectDelegate__ctor_m2871048726(L_12, NULL, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_6(L_12);
		G_B2_0 = G_B1_0;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		G_B2_4 = G_B1_4;
	}

IL_005a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		DisposeObjectDelegate_t1709778548 * L_13 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_6();
		DeleteObjectDelegate_t1957612988 * L_14 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		G_B3_0 = L_13;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		if (L_14)
		{
			G_B4_0 = L_13;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			G_B4_4 = G_B2_3;
			G_B4_5 = G_B2_4;
			goto IL_0077;
		}
	}
	{
		intptr_t L_15 = (intptr_t)DatabaseInternalPINVOKE_Firebase_Database_delete_InternalFirebaseDatabase_m2742722154_RuntimeMethod_var;
		DeleteObjectDelegate_t1957612988 * L_16 = (DeleteObjectDelegate_t1957612988 *)il2cpp_codegen_object_new(DeleteObjectDelegate_t1957612988_il2cpp_TypeInfo_var);
		DeleteObjectDelegate__ctor_m1051687624(L_16, NULL, L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_7(L_16);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
		G_B4_4 = G_B3_4;
		G_B4_5 = G_B3_5;
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		DeleteObjectDelegate_t1957612988 * L_17 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_7();
		IL2CPP_RUNTIME_CLASS_INIT(CleanupNotifier_t720088202_il2cpp_TypeInfo_var);
		RegistrationToken_t3106726623  L_18 = CleanupNotifier_RegisterForCleanup_m3761672935(NULL /*static, unused*/, G_B4_4, G_B4_3, G_B4_2, G_B4_1, G_B4_0, L_17, /*hidden argument*/NULL);
		NullCheck(G_B4_5);
		G_B4_5->set_cleanupToken_2(L_18);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::DisposeObject(System.Object)
extern "C"  void FirebaseDatabase_DisposeObject_m4264362008 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___objectToDispose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_DisposeObject_m4264362008_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___objectToDispose0;
		NullCheck(((FirebaseDatabase_t1344765733 *)CastclassSealed((RuntimeObject*)L_0, FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var)));
		FirebaseDatabase_Dispose_m3713834711(((FirebaseDatabase_t1344765733 *)CastclassSealed((RuntimeObject*)L_0, FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Finalize()
extern "C"  void FirebaseDatabase_Finalize_m777255599 (FirebaseDatabase_t1344765733 * __this, const RuntimeMethod* method)
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
		FirebaseDatabase_Dispose_m3713834711(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::Dispose()
extern "C"  void FirebaseDatabase_Dispose_m3713834711 (FirebaseDatabase_t1344765733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_Dispose_m3713834711_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t3745784362  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			InternalFirebaseDatabase_t2115990047 * L_1 = __this->get_internalDatabase_2();
			if (!L_1)
			{
				goto IL_004d;
			}
		}

IL_0019:
		{
			InternalFirebaseDatabase_t2115990047 * L_2 = __this->get_internalDatabase_2();
			HandleRef_t3745784362  L_3 = InternalFirebaseDatabase_getCPtr_m2276546031(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
			V_1 = L_3;
			intptr_t L_4 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)(&V_1), /*hidden argument*/NULL);
			bool L_5 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_004d;
			}
		}

IL_003b:
		{
			InternalFirebaseDatabase_t2115990047 * L_6 = __this->get_internalDatabase_2();
			NullCheck(L_6);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, L_6);
			__this->set_internalDatabase_2((InternalFirebaseDatabase_t2115990047 *)NULL);
		}

IL_004d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
			Dictionary_2_t1120143015 * L_7 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_8 = __this->get_name_3();
			NullCheck(L_7);
			Dictionary_2_Remove_m3241364839(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_m3241364839_RuntimeMethod_var);
			IL2CPP_LEAVE(0x6A, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(99)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		return;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::set_App(Firebase.FirebaseApp)
extern "C"  void FirebaseDatabase_set_App_m2635536316 (FirebaseDatabase_t1344765733 * __this, FirebaseApp_t2526288410 * ___value0, const RuntimeMethod* method)
{
	{
		FirebaseApp_t2526288410 * L_0 = ___value0;
		__this->set_U3CAppU3Ek__BackingField_4(L_0);
		return;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::get_DefaultInstance()
extern "C"  FirebaseDatabase_t1344765733 * FirebaseDatabase_get_DefaultInstance_m2679761047 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_get_DefaultInstance_m2679761047_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t2526288410 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		FirebaseApp_t2526288410 * L_0 = FirebaseApp_get_DefaultInstance_m3436350982(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		FirebaseApp_t2526288410 * L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		DatabaseException_t70968897 * L_2 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m448054621(L_2, _stringLiteral1366663305, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseDatabase_get_DefaultInstance_m2679761047_RuntimeMethod_var);
	}

IL_0017:
	{
		FirebaseApp_t2526288410 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		FirebaseDatabase_t1344765733 * L_4 = FirebaseDatabase_GetInstance_m260630464(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp)
extern "C"  FirebaseDatabase_t1344765733 * FirebaseDatabase_GetInstance_m260630464 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m260630464_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseApp_t2526288410 * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(Services_t463074608_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = Services_get_AppConfig_m1967952270(NULL /*static, unused*/, /*hidden argument*/NULL);
		FirebaseApp_t2526288410 * L_2 = ___app0;
		NullCheck(L_2);
		FirebaseAppPlatform_t3234831756 * L_3 = FirebaseApp_get_AppPlatform_m3711963337(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_4 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(2 /* System.String Firebase.Platform.IAppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2982493820_il2cpp_TypeInfo_var, L_1, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		FirebaseDatabase_t1344765733 * L_5 = FirebaseDatabase_GetInstance_m1820077615(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// Firebase.Database.FirebaseDatabase Firebase.Database.FirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
extern "C"  FirebaseDatabase_t1344765733 * FirebaseDatabase_GetInstance_m1820077615 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetInstance_m1820077615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseDatabase_t1344765733 * V_0 = NULL;
	WeakReference_t1334886716 * V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	InternalFirebaseDatabase_t2115990047 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		String_t* L_0 = ___url1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m2969720369(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		DatabaseException_t70968897 * L_2 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m448054621(L_2, _stringLiteral1095060571, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, FirebaseDatabase_GetInstance_m1820077615_RuntimeMethod_var);
	}

IL_0016:
	{
		V_0 = (FirebaseDatabase_t1344765733 *)NULL;
		V_1 = (WeakReference_t1334886716 *)NULL;
		FirebaseApp_t2526288410 * L_3 = ___app0;
		NullCheck(L_3);
		String_t* L_4 = FirebaseApp_get_Name_m2009872515(L_3, /*hidden argument*/NULL);
		String_t* L_5 = ___url1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral791040696, L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
		Dictionary_2_t1120143015 * L_7 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_databases_5();
		V_3 = L_7;
		RuntimeObject * L_8 = V_3;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
			Dictionary_2_t1120143015 * L_9 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_10 = V_2;
			NullCheck(L_9);
			bool L_11 = Dictionary_2_TryGetValue_m3248357561(L_9, L_10, (WeakReference_t1334886716 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m3248357561_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_005d;
			}
		}

IL_004a:
		{
			WeakReference_t1334886716 * L_12 = (WeakReference_t1334886716 *)il2cpp_codegen_object_new(WeakReference_t1334886716_il2cpp_TypeInfo_var);
			WeakReference__ctor_m2401547918(L_12, NULL, /*hidden argument*/NULL);
			V_1 = L_12;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
			Dictionary_2_t1120143015 * L_13 = ((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->get_databases_5();
			String_t* L_14 = V_2;
			WeakReference_t1334886716 * L_15 = V_1;
			NullCheck(L_13);
			Dictionary_2_set_Item_m2559730247(L_13, L_14, L_15, /*hidden argument*/Dictionary_2_set_Item_m2559730247_RuntimeMethod_var);
		}

IL_005d:
		{
			WeakReference_t1334886716 * L_16 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
			RuntimeObject * L_17 = FirebaseApp_WeakReferenceGetTarget_m3657098532(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			V_0 = ((FirebaseDatabase_t1344765733 *)CastclassSealed((RuntimeObject*)L_17, FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var));
			FirebaseDatabase_t1344765733 * L_18 = V_0;
			if (L_18)
			{
				goto IL_00a1;
			}
		}

IL_006f:
		{
			FirebaseApp_t2526288410 * L_19 = ___app0;
			String_t* L_20 = ___url1;
			InternalFirebaseDatabase_t2115990047 * L_21 = InternalFirebaseDatabase_GetInstance_m1855740917(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
			V_4 = L_21;
			InternalFirebaseDatabase_t2115990047 * L_22 = V_4;
			if (L_22)
			{
				goto IL_008a;
			}
		}

IL_007f:
		{
			DatabaseException_t70968897 * L_23 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
			DatabaseException__ctor_m448054621(L_23, _stringLiteral1758303143, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, NULL, FirebaseDatabase_GetInstance_m1820077615_RuntimeMethod_var);
		}

IL_008a:
		{
			FirebaseApp_t2526288410 * L_24 = ___app0;
			InternalFirebaseDatabase_t2115990047 * L_25 = V_4;
			FirebaseDatabase_t1344765733 * L_26 = (FirebaseDatabase_t1344765733 *)il2cpp_codegen_object_new(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var);
			FirebaseDatabase__ctor_m803534952(L_26, L_24, L_25, /*hidden argument*/NULL);
			V_0 = L_26;
			FirebaseDatabase_t1344765733 * L_27 = V_0;
			String_t* L_28 = V_2;
			NullCheck(L_27);
			L_27->set_name_3(L_28);
			WeakReference_t1334886716 * L_29 = V_1;
			FirebaseDatabase_t1344765733 * L_30 = V_0;
			NullCheck(L_29);
			VirtActionInvoker1< RuntimeObject * >::Invoke(7 /* System.Void System.WeakReference::set_Target(System.Object) */, L_29, L_30);
		}

IL_00a1:
		{
			IL2CPP_LEAVE(0xAD, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		RuntimeObject * L_31 = V_3;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(166)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_JUMP_TBL(0xAD, IL_00ad)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ad:
	{
		FirebaseDatabase_t1344765733 * L_32 = V_0;
		return L_32;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::get_RootReference()
extern "C"  DatabaseReference_t514541437 * FirebaseDatabase_get_RootReference_m2376894855 (FirebaseDatabase_t1344765733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_get_RootReference_m2376894855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t2115990047 * L_0 = __this->get_internalDatabase_2();
		NullCheck(L_0);
		InternalDatabaseReference_t2434949222 * L_1 = InternalFirebaseDatabase_GetReference_m3478532065(L_0, /*hidden argument*/NULL);
		DatabaseReference_t514541437 * L_2 = (DatabaseReference_t514541437 *)il2cpp_codegen_object_new(DatabaseReference_t514541437_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_m1165359925(L_2, L_1, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// Firebase.Database.DatabaseReference Firebase.Database.FirebaseDatabase::GetReference(System.String)
extern "C"  DatabaseReference_t514541437 * FirebaseDatabase_GetReference_m517763391 (FirebaseDatabase_t1344765733 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase_GetReference_m517763391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalFirebaseDatabase_t2115990047 * L_0 = __this->get_internalDatabase_2();
		String_t* L_1 = ___path0;
		NullCheck(L_0);
		InternalDatabaseReference_t2434949222 * L_2 = InternalFirebaseDatabase_GetReference_m2350576704(L_0, L_1, /*hidden argument*/NULL);
		DatabaseReference_t514541437 * L_3 = (DatabaseReference_t514541437 *)il2cpp_codegen_object_new(DatabaseReference_t514541437_il2cpp_TypeInfo_var);
		DatabaseReference__ctor_m1165359925(L_3, L_2, __this, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Firebase.Database.FirebaseDatabase::.cctor()
extern "C"  void FirebaseDatabase__cctor_m2725113536 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseDatabase__cctor_m2725113536_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t1120143015 * L_0 = (Dictionary_2_t1120143015 *)il2cpp_codegen_object_new(Dictionary_2_t1120143015_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3434722084(L_0, /*hidden argument*/Dictionary_2__ctor_m3434722084_RuntimeMethod_var);
		((FirebaseDatabase_t1344765733_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseDatabase_t1344765733_il2cpp_TypeInfo_var))->set_databases_5(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::.cctor()
extern "C"  void DatabaseInternalPINVOKE__cctor_m1864086187 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DatabaseInternalPINVOKE__cctor_m1864086187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t1928209643 * L_0 = (SWIGExceptionHelper_t1928209643 *)il2cpp_codegen_object_new(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m1098160713(L_0, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t816701182_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t3177110595 * L_1 = (SWIGStringHelper_t3177110595 *)il2cpp_codegen_object_new(SWIGStringHelper_t3177110595_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_m50472557(L_1, /*hidden argument*/NULL);
		((DatabaseInternalPINVOKE_t816701182_StaticFields*)il2cpp_codegen_static_fields_for(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m106048353 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, SWIG_CompletionDelegate_t2539505618 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(void*, intptr_t);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3708552191 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_result(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_result(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_result_m2983813031 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_result)(____jarg10_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_delete_Future_InternalDataSnapshot(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_Future_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_m4252457530 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_Future_InternalDataSnapshot)(____jarg10_marshaled);

}
extern "C" uint32_t DEFAULT_CALL Firebase_Database_InternalDataSnapshotList_size(void*);
// System.UInt32 Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshotList_size(System.Runtime.InteropServices.HandleRef)
extern "C"  uint32_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_size_m1844728926 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef uint32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	uint32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshotList_size)(____jarg10_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshotList_getitem(void*, int32_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshotList_getitem(System.Runtime.InteropServices.HandleRef,System.Int32)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_getitem_m1679163993 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, int32_t ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshotList_getitem)(____jarg10_marshaled, ___jarg21);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_delete_InternalDataSnapshotList(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshotList(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshotList_m3100052608 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDataSnapshotList)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3(void*, char*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3_m2405421246 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_delete_InternalFirebaseDatabase(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalFirebaseDatabase(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalFirebaseDatabase_m2742722154 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalFirebaseDatabase)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m2831832208 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0)(____jarg10_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(void*, char*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m2905014466 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_delete_InternalDataSnapshot(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDataSnapshot(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_m4195680626 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDataSnapshot)(____jarg10_marshaled);

}
extern "C" int32_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_exists(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_exists(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1172472909 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_exists)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_children(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_children(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_children_m3898803079 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_children)(____jarg10_marshaled);

	return returnValue;
}
extern "C" char* DEFAULT_CALL Firebase_Database_InternalDataSnapshot_key_string(void*);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_key_string(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_m780224523 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_key_string)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDataSnapshot_value(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDataSnapshot_value(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2291277655 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDataSnapshot_value)(____jarg10_marshaled);

	return returnValue;
}
extern "C" void DEFAULT_CALL Firebase_Database_delete_InternalQuery(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalQuery(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m1362472026 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalQuery)(____jarg10_marshaled);

}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalQuery_GetValue(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_GetValue(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_m1300566419 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_GetValue)(____jarg10_marshaled);

	return returnValue;
}
extern "C" int32_t DEFAULT_CALL Firebase_Database_InternalQuery_is_valid(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_is_valid(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m3458490525 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyValueListener(intptr_t);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyValueListener(System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m2624393739 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyValueListener)(___jarg10);

}
extern "C" void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m1853347796 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___jarg10, OnValueChangedDelegate_t3156556798 * ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterValueListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled);

}
extern "C" void DEFAULT_CALL Firebase_Database_InternalQuery_DestroyChildListener(intptr_t);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_DestroyChildListener(System.IntPtr)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m1713730544 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_DestroyChildListener)(___jarg10);

}
extern "C" void DEFAULT_CALL Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalQuery_RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m1797914766 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___jarg10, OnChildChangeDelegate_t3077338721 * ___jarg21, OnChildRemovedDelegate_t3205732376 * ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___jarg10' to native representation
	Il2CppMethodPointer ____jarg10_marshaled = NULL;
	____jarg10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg10));

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Marshaling of parameter '___jarg32' to native representation
	Il2CppMethodPointer ____jarg32_marshaled = NULL;
	____jarg32_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg32));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalQuery_RegisterChildListenerCallbacks)(____jarg10_marshaled, ____jarg21_marshaled, ____jarg32_marshaled);

}
extern "C" void DEFAULT_CALL Firebase_Database_delete_InternalDatabaseReference(void*);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_delete_InternalDatabaseReference(System.Runtime.InteropServices.HandleRef)
extern "C"  void DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m279241591 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Database_delete_InternalDatabaseReference)(____jarg10_marshaled);

}
extern "C" char* DEFAULT_CALL Firebase_Database_InternalDatabaseReference_key_string(void*);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_key_string(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_key_string_m3617372534 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_key_string)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" int32_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_is_root(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_root(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_root_m1605903526 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_is_root)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" int32_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_is_valid(void*);
// System.Boolean Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_is_valid(System.Runtime.InteropServices.HandleRef)
extern "C"  bool DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m540846483 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_is_valid)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_Child__SWIG_0(void*, char*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_Child__SWIG_0_m1121580414 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_PushChild(void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_PushChild(System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_PushChild_m2641246044 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_PushChild)(____jarg10_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_SetValue(void*, void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SetValue(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SetValue_m1573575676 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, HandleRef_t3745784362  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_SetValue)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_UpdateChildren(void*, void*);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_UpdateChildren(System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_UpdateChildren_m781051516 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, HandleRef_t3745784362  ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	void* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = (void*)___jarg21.get_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_UpdateChildren)(____jarg10_marshaled, ____jarg21_marshaled);

	return returnValue;
}
extern "C" char* DEFAULT_CALL Firebase_Database_InternalDatabaseReference_url(void*);
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_url(System.Runtime.InteropServices.HandleRef)
extern "C"  String_t* DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m4115933297 (RuntimeObject * __this /* static, unused */, HandleRef_t3745784362  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_url)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast(System.IntPtr)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m4034575448 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast)(___jarg10);

	return returnValue;
}
extern "C" intptr_t DEFAULT_CALL Firebase_Database_InternalDatabaseReference_SWIGUpcast(intptr_t);
// System.IntPtr Firebase.Database.Internal.DatabaseInternalPINVOKE::Firebase_Database_InternalDatabaseReference_SWIGUpcast(System.IntPtr)
extern "C"  intptr_t DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_m3819929639 (RuntimeObject * __this /* static, unused */, intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Database_InternalDatabaseReference_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_m3959536635(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_m3959536635(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_m3200679066(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_m3200679066(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m710822149(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m710822149(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_m1808183465(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_m1808183465(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m1779575960(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m1779575960(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m2418839823(char* ___message0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m2418839823(NULL, ____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m1540183458(char* ___message0, char* ___paramName1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m1540183458(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944(char* ___message0, char* ___paramName1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204(char* ___message0, char* ___paramName1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204(NULL, ____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.cctor()
extern "C"  void SWIGExceptionHelper__cctor_m479093236 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m479093236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SWIGExceptionHelper_SetPendingApplicationException_m3959536635_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_1 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_1, NULL, L_0, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_1);
		intptr_t L_2 = (intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_m3200679066_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_3 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_3, NULL, L_2, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_3);
		intptr_t L_4 = (intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_5 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_5, NULL, L_4, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_5);
		intptr_t L_6 = (intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_7 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_7, NULL, L_6, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_7);
		intptr_t L_8 = (intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m710822149_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_9 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_9, NULL, L_8, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_9);
		intptr_t L_10 = (intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_11 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_11, NULL, L_10, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_11);
		intptr_t L_12 = (intptr_t)SWIGExceptionHelper_SetPendingIOException_m1808183465_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_13 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_13, NULL, L_12, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_13);
		intptr_t L_14 = (intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_15 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_15, NULL, L_14, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_15);
		intptr_t L_16 = (intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_17 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_17, NULL, L_16, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_17);
		intptr_t L_18 = (intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m1779575960_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_19 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_19, NULL, L_18, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_19);
		intptr_t L_20 = (intptr_t)SWIGExceptionHelper_SetPendingSystemException_m2418839823_RuntimeMethod_var;
		ExceptionDelegate_t53799880 * L_21 = (ExceptionDelegate_t53799880 *)il2cpp_codegen_object_new(ExceptionDelegate_t53799880_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_m4026563294(L_21, NULL, L_20, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_21);
		intptr_t L_22 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m1540183458_RuntimeMethod_var;
		ExceptionArgumentDelegate_t3508987397 * L_23 = (ExceptionArgumentDelegate_t3508987397 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t3508987397_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m568038319(L_23, NULL, L_22, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_23);
		intptr_t L_24 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944_RuntimeMethod_var;
		ExceptionArgumentDelegate_t3508987397 * L_25 = (ExceptionArgumentDelegate_t3508987397 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t3508987397_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m568038319(L_25, NULL, L_24, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_25);
		intptr_t L_26 = (intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204_RuntimeMethod_var;
		ExceptionArgumentDelegate_t3508987397 * L_27 = (ExceptionArgumentDelegate_t3508987397 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t3508987397_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m568038319(L_27, NULL, L_26, /*hidden argument*/NULL);
		((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_27);
		ExceptionDelegate_t53799880 * L_28 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t53799880 * L_29 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t53799880 * L_30 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t53799880 * L_31 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t53799880 * L_32 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t53799880 * L_33 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t53799880 * L_34 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t53799880 * L_35 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t53799880 * L_36 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t53799880 * L_37 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t53799880 * L_38 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m3613631766(NULL /*static, unused*/, L_28, L_29, L_30, L_31, L_32, L_33, L_34, L_35, L_36, L_37, L_38, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t3508987397 * L_39 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t3508987397 * L_40 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t3508987397 * L_41 = ((SWIGExceptionHelper_t1928209643_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t1928209643_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1812103195(NULL /*static, unused*/, L_39, L_40, L_41, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::.ctor()
extern "C"  void SWIGExceptionHelper__ctor_m1098160713 (SWIGExceptionHelper_t1928209643 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL SWIGRegisterExceptionCallbacks_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_DatabaseInternal_m3613631766 (RuntimeObject * __this /* static, unused */, ExceptionDelegate_t53799880 * ___applicationDelegate0, ExceptionDelegate_t53799880 * ___arithmeticDelegate1, ExceptionDelegate_t53799880 * ___divideByZeroDelegate2, ExceptionDelegate_t53799880 * ___indexOutOfRangeDelegate3, ExceptionDelegate_t53799880 * ___invalidCastDelegate4, ExceptionDelegate_t53799880 * ___invalidOperationDelegate5, ExceptionDelegate_t53799880 * ___ioDelegate6, ExceptionDelegate_t53799880 * ___nullReferenceDelegate7, ExceptionDelegate_t53799880 * ___outOfMemoryDelegate8, ExceptionDelegate_t53799880 * ___overflowDelegate9, ExceptionDelegate_t53799880 * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_DatabaseInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
extern "C" void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
extern "C"  void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_DatabaseInternal_m1812103195 (RuntimeObject * __this /* static, unused */, ExceptionArgumentDelegate_t3508987397 * ___argumentDelegate0, ExceptionArgumentDelegate_t3508987397 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t3508987397 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_DatabaseInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingApplicationException_m3959536635 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_m3959536635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		ApplicationException_t2339761290 * L_2 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m692455299(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArithmeticException_m3200679066 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_m3200679066_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		ArithmeticException_t4283546778 * L_2 = (ArithmeticException_t4283546778 *)il2cpp_codegen_object_new(ArithmeticException_t4283546778_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_m3829702723(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m3094467240_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		DivideByZeroException_t1856388118 * L_2 = (DivideByZeroException_t1856388118 *)il2cpp_codegen_object_new(DivideByZeroException_t1856388118_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m3132723944(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_m3724443501_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		IndexOutOfRangeException_t1578797820 * L_2 = (IndexOutOfRangeException_t1578797820 *)il2cpp_codegen_object_new(IndexOutOfRangeException_t1578797820_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_m3342077230(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidCastException_m710822149 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m710822149_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		InvalidCastException_t3927145244 * L_2 = (InvalidCastException_t3927145244 *)il2cpp_codegen_object_new(InvalidCastException_t3927145244_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m2604994586(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m1500157463_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		InvalidOperationException_t56020091 * L_2 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1685032583(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingIOException_m1808183465 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_m1808183465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		IOException_t4088381929 * L_2 = (IOException_t4088381929 *)il2cpp_codegen_object_new(IOException_t4088381929_il2cpp_TypeInfo_var);
		IOException__ctor_m3246761956(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_m4193524907_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullReferenceException_t1023182353 * L_2 = (NullReferenceException_t1023182353 *)il2cpp_codegen_object_new(NullReferenceException_t1023182353_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m3182281066(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_m2361600234_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		OutOfMemoryException_t2437671686 * L_2 = (OutOfMemoryException_t2437671686 *)il2cpp_codegen_object_new(OutOfMemoryException_t2437671686_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m4180974057(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingOverflowException_m1779575960 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m1779575960_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		OverflowException_t2020128637 * L_2 = (OverflowException_t2020128637 *)il2cpp_codegen_object_new(OverflowException_t2020128637_il2cpp_TypeInfo_var);
		OverflowException__ctor_m2524654454(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
extern "C"  void SWIGExceptionHelper_SetPendingSystemException_m2418839823 (RuntimeObject * __this /* static, unused */, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m2418839823_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		SystemException_t176217640 * L_2 = (SystemException_t176217640 *)il2cpp_codegen_object_new(SystemException_t176217640_il2cpp_TypeInfo_var);
		SystemException__ctor_m4132668650(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentException_m1540183458 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m1540183458_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_3 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m3761792013(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m1301888944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral88632345, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_t1615371798 * L_8 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2009621981(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
extern "C"  void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204 (RuntimeObject * __this /* static, unused */, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m3910021204_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_0 = SWIGPendingException_Retrieve_m1649320118(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(6 /* System.String System.Exception::get_Message() */, L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, L_2, _stringLiteral88632345, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_t777629997 * L_8 = (ArgumentOutOfRangeException_t777629997 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(L_8, L_6, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		SWIGPendingException_Set_m3894827394(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t3508987397 (ExceptionArgumentDelegate_t3508987397 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionArgumentDelegate__ctor_m568038319 (ExceptionArgumentDelegate_t3508987397 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::Invoke(System.String,System.String)
extern "C"  void ExceptionArgumentDelegate_Invoke_m89679380 (ExceptionArgumentDelegate_t3508987397 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ExceptionArgumentDelegate_Invoke_m89679380((ExceptionArgumentDelegate_t3508987397 *)__this->get_prev_9(), ___message0, ___paramName1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___message0, ___paramName1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m2159854840 (ExceptionArgumentDelegate_t3508987397 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ExceptionArgumentDelegate_EndInvoke_m1472287946 (ExceptionArgumentDelegate_t3508987397 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_ExceptionDelegate_t53799880 (ExceptionDelegate_t53799880 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void ExceptionDelegate__ctor_m4026563294 (ExceptionDelegate_t53799880 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::Invoke(System.String)
extern "C"  void ExceptionDelegate_Invoke_m204322687 (ExceptionDelegate_t53799880 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ExceptionDelegate_Invoke_m204322687((ExceptionDelegate_t53799880 *)__this->get_prev_9(), ___message0, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___message0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ExceptionDelegate_BeginInvoke_m6835976 (ExceptionDelegate_t53799880 * __this, String_t* ___message0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void ExceptionDelegate_EndInvoke_m4196025263 (ExceptionDelegate_t53799880 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Set(System.Exception)
extern "C"  void SWIGPendingException_Set_m3894827394 (RuntimeObject * __this /* static, unused */, Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m3894827394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_0 = ((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = ((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral1985503341, L_2, _stringLiteral3452614535, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t2339761290 * L_5 = (ApplicationException_t2339761290 *)il2cpp_codegen_object_new(ApplicationException_t2339761290_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m692455299(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, SWIGPendingException_Set_m3894827394_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t816701182_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		int32_t L_10 = ((SWIGPendingException_t67283040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t67283040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::Retrieve()
extern "C"  Exception_t * SWIGPendingException_Retrieve_m1649320118 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_m1649320118_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Exception_t *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		int32_t L_0 = ((SWIGPendingException_t67283040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_1 = ((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		Exception_t * L_2 = ((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t67283040_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (DatabaseInternalPINVOKE_t816701182_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t67283040_il2cpp_TypeInfo_var);
		int32_t L_6 = ((SWIGPendingException_t67283040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t67283040_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t67283040_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGPendingException::.cctor()
extern "C"  void SWIGPendingException__cctor_m2051959207 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_m1923416003(char* ___cString0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue = SWIGStringHelper_CreateString_m1923416003(NULL, ____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.cctor()
extern "C"  void SWIGStringHelper__cctor_m3503285784 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_m3503285784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = (intptr_t)SWIGStringHelper_CreateString_m1923416003_RuntimeMethod_var;
		SWIGStringDelegate_t3932276921 * L_1 = (SWIGStringDelegate_t3932276921 *)il2cpp_codegen_object_new(SWIGStringDelegate_t3932276921_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m901817829(L_1, NULL, L_0, /*hidden argument*/NULL);
		((SWIGStringHelper_t3177110595_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t3177110595_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_1);
		SWIGStringDelegate_t3932276921 * L_2 = ((SWIGStringHelper_t3177110595_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t3177110595_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m783101452(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::.ctor()
extern "C"  void SWIGStringHelper__ctor_m50472557 (SWIGStringHelper_t3177110595 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
extern "C" void DEFAULT_CALL SWIGRegisterStringCallback_DatabaseInternal(Il2CppMethodPointer);
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_DatabaseInternal(Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
extern "C"  void SWIGStringHelper_SWIGRegisterStringCallback_DatabaseInternal_m783101452 (RuntimeObject * __this /* static, unused */, SWIGStringDelegate_t3932276921 * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_DatabaseInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
extern "C"  String_t* SWIGStringHelper_CreateString_m1923416003 (RuntimeObject * __this /* static, unused */, String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
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
extern "C"  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t3932276921 (SWIGStringDelegate_t3932276921 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (STDCALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SWIGStringDelegate__ctor_m901817829 (SWIGStringDelegate_t3932276921 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::Invoke(System.String)
extern "C"  String_t* SWIGStringDelegate_Invoke_m3094404280 (SWIGStringDelegate_t3932276921 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
	if(__this->get_prev_9() != NULL)
	{
		SWIGStringDelegate_Invoke_m3094404280((SWIGStringDelegate_t3932276921 *)__this->get_prev_9(), ___message0, method);
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
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, ___message0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef String_t* (*FunctionPointerType) (RuntimeObject *, void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
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
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SWIGStringDelegate_BeginInvoke_m3793607779 (SWIGStringDelegate_t3932276921 * __this, String_t* ___message0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Database.Internal.DatabaseInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::EndInvoke(System.IAsyncResult)
extern "C"  String_t* SWIGStringDelegate_EndInvoke_m2819054610 (SWIGStringDelegate_t3932276921 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554(int32_t ___key0)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554(NULL, ___key0, NULL);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
extern "C"  void Future_InternalDataSnapshot__ctor_m1472638490 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot__ctor_m1472638490_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIGUpcast_m4034575448(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m4133108386(__this, L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t3745784362  L_4;
		memset(&L_4, 0, sizeof(L_4));
		HandleRef__ctor_m868850155((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Finalize()
extern "C"  void Future_InternalDataSnapshot_Finalize_m4284103059 (Future_InternalDataSnapshot_t3720598533 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m1172048056(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::Dispose()
extern "C"  void Future_InternalDataSnapshot_Dispose_m1752517857 (Future_InternalDataSnapshot_t3720598533 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_Dispose_m1752517857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_2();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = ((FutureBase_t1024553797 *)__this)->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			((FutureBase_t1024553797 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_Future_InternalDataSnapshot_m4252457530(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_6);
		}

IL_0050:
		{
			Future_InternalDataSnapshot_SetCompletionData_m2154239546(__this, (intptr_t)(0), /*hidden argument*/NULL);
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			FutureBase_Dispose_m3149756878(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x73, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(108)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_JUMP_TBL(0x73, IL_0073)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0073:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.Future_InternalDataSnapshot::GetTask(Firebase.Database.Internal.Future_InternalDataSnapshot)
extern "C"  Task_1_t3012816260 * Future_InternalDataSnapshot_GetTask_m2600252647 (RuntimeObject * __this /* static, unused */, Future_InternalDataSnapshot_t3720598533 * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_GetTask_m2600252647_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t510208842 * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t510208842 *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t510208842_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m3994183322(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_1 = V_0;
		Future_InternalDataSnapshot_t3720598533 * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_3 = V_0;
		TaskCompletionSource_1_t7998902 * L_4 = (TaskCompletionSource_1_t7998902 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t7998902_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m2787549879(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m2787549879_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_5 = V_0;
		NullCheck(L_5);
		Future_InternalDataSnapshot_t3720598533 * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_m2790518304(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t7998902 * L_9 = L_8->get_tcs_1();
		FirebaseException_t627220627 * L_10 = (FirebaseException_t627220627 *)il2cpp_codegen_object_new(FirebaseException_t627220627_il2cpp_TypeInfo_var);
		FirebaseException__ctor_m2690917590(L_10, 0, _stringLiteral2669073561, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_m3599795536(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m3599795536_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t7998902 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t3012816260 * L_13 = TaskCompletionSource_1_get_Task_m1632449679(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m1632449679_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_14 = V_0;
		NullCheck(L_14);
		Future_InternalDataSnapshot_t3720598533 * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_16 = V_0;
		intptr_t L_17 = (intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2406712175_RuntimeMethod_var;
		Action_t3901044065 * L_18 = (Action_t3901044065 *)il2cpp_codegen_object_new(Action_t3901044065_il2cpp_TypeInfo_var);
		Action__ctor_m3550217258(L_18, L_16, L_17, /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_InternalDataSnapshot_SetOnCompletionCallback_m1872287132(L_15, L_18, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t510208842 * L_19 = V_0;
		NullCheck(L_19);
		TaskCompletionSource_1_t7998902 * L_20 = L_19->get_tcs_1();
		NullCheck(L_20);
		Task_1_t3012816260 * L_21 = TaskCompletionSource_1_get_Task_m1632449679(L_20, /*hidden argument*/TaskCompletionSource_1_get_Task_m1632449679_RuntimeMethod_var);
		return L_21;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetOnCompletionCallback(Firebase.Database.Internal.Future_InternalDataSnapshot/Action)
extern "C"  void Future_InternalDataSnapshot_SetOnCompletionCallback_m1872287132 (Future_InternalDataSnapshot_t3720598533 * __this, Action_t3901044065 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_SetOnCompletionCallback_m1872287132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SWIG_CompletionDelegate_t2539505618 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		intptr_t L_1 = (intptr_t)Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554_RuntimeMethod_var;
		SWIG_CompletionDelegate_t2539505618 * L_2 = (SWIG_CompletionDelegate_t2539505618 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_t2539505618_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m3864827867(L_2, NULL, L_1, /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_2);
	}

IL_001d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
		RuntimeObject * L_3 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_3;
		RuntimeObject * L_4 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			Dictionary_2_t2789757396 * L_5 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_5)
			{
				goto IL_003d;
			}
		}

IL_0033:
		{
			Dictionary_2_t2789757396 * L_6 = (Dictionary_2_t2789757396 *)il2cpp_codegen_object_new(Dictionary_2_t2789757396_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_m2969110377(L_6, /*hidden argument*/Dictionary_2__ctor_m2969110377_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->set_Callbacks_3(L_6);
		}

IL_003d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			int32_t L_7 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
			((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_8);
			V_0 = L_8;
			Dictionary_2_t2789757396 * L_9 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_10 = V_0;
			Action_t3901044065 * L_11 = ___userCompletionCallback0;
			NullCheck(L_9);
			Dictionary_2_set_Item_m1558415536(L_9, L_10, L_11, /*hidden argument*/Dictionary_2_set_Item_m1558415536_RuntimeMethod_var);
			IL2CPP_LEAVE(0x63, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		SWIG_CompletionDelegate_t2539505618 * L_13 = __this->get_SWIG_CompletionCB_7();
		int32_t L_14 = V_0;
		intptr_t L_15 = Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386(__this, L_13, L_14, /*hidden argument*/NULL);
		Future_InternalDataSnapshot_SetCompletionData_m2154239546(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SetCompletionData(System.IntPtr)
extern "C"  void Future_InternalDataSnapshot_SetCompletionData_m2154239546 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_SetCompletionData_m2154239546_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_callbackData_6();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		intptr_t L_2 = __this->get_callbackData_6();
		Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590(__this, L_2, /*hidden argument*/NULL);
	}

IL_0021:
	{
		intptr_t L_3 = ___data0;
		__this->set_callbackData_6(L_3);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_CompletionDispatcher(System.Int32)
extern "C"  void Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554 (RuntimeObject * __this /* static, unused */, int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_SWIG_CompletionDispatcher_m1157976554_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t3901044065 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (Action_t3901044065 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			Dictionary_2_t2789757396 * L_2 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			Dictionary_2_t2789757396 * L_3 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_m2152592574(L_3, L_4, (Action_t3901044065 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2152592574_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
			Dictionary_2_t2789757396 * L_6 = ((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m4029264196(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m4029264196_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_1;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		Action_t3901044065 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_t3901044065 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m2058789070(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_OnCompletion(Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate,System.Int32)
extern "C"  intptr_t Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386 (Future_InternalDataSnapshot_t3720598533 * __this, SWIG_CompletionDelegate_t2539505618 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_t2539505618 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_3 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_OnCompletion_m106048353(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Future_InternalDataSnapshot_SWIG_OnCompletion_m3550056386_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::SWIG_FreeCompletionData(System.IntPtr)
extern "C"  void Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590 (Future_InternalDataSnapshot_t3720598533 * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_SWIG_FreeCompletionData_m3708552191(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, Future_InternalDataSnapshot_SWIG_FreeCompletionData_m1782338590_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.Future_InternalDataSnapshot::result()
extern "C"  InternalDataSnapshot_t1607276085 * Future_InternalDataSnapshot_result_m2074089048 (Future_InternalDataSnapshot_t3720598533 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot_result_m2074089048_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t1607276085 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_Future_InternalDataSnapshot_result_m2983813031(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		InternalDataSnapshot_t1607276085 * L_2 = (InternalDataSnapshot_t1607276085 *)il2cpp_codegen_object_new(InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m3155803892(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, Future_InternalDataSnapshot_result_m2074089048_RuntimeMethod_var);
	}

IL_0022:
	{
		InternalDataSnapshot_t1607276085 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot::.cctor()
extern "C"  void Future_InternalDataSnapshot__cctor_m2079253468 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_InternalDataSnapshot__cctor_m2079253468_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		((Future_InternalDataSnapshot_t3720598533_StaticFields*)il2cpp_codegen_static_fields_for(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::.ctor()
extern "C"  void U3CGetTaskU3Ec__AnonStorey0__ctor_m3994183322 (U3CGetTaskU3Ec__AnonStorey0_t510208842 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/<GetTask>c__AnonStorey0::<>m__0()
extern "C"  void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2406712175 (U3CGetTaskU3Ec__AnonStorey0_t510208842 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_m2406712175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Future_InternalDataSnapshot_t3720598533 * L_0 = __this->get_fu_0();
		NullCheck(L_0);
		int32_t L_1 = FutureBase_status_m2790518304(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0021;
		}
	}
	{
		TaskCompletionSource_1_t7998902 * L_2 = __this->get_tcs_1();
		NullCheck(L_2);
		TaskCompletionSource_1_SetCanceled_m921486790(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m921486790_RuntimeMethod_var);
		goto IL_006a;
	}

IL_0021:
	{
		Future_InternalDataSnapshot_t3720598533 * L_3 = __this->get_fu_0();
		NullCheck(L_3);
		int32_t L_4 = FutureBase_error_m319631945(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		TaskCompletionSource_1_t7998902 * L_6 = __this->get_tcs_1();
		int32_t L_7 = V_0;
		Future_InternalDataSnapshot_t3720598533 * L_8 = __this->get_fu_0();
		NullCheck(L_8);
		String_t* L_9 = FutureBase_error_message_m2570640618(L_8, /*hidden argument*/NULL);
		FirebaseException_t627220627 * L_10 = (FirebaseException_t627220627 *)il2cpp_codegen_object_new(FirebaseException_t627220627_il2cpp_TypeInfo_var);
		FirebaseException__ctor_m2690917590(L_10, L_7, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		TaskCompletionSource_1_SetException_m3599795536(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_m3599795536_RuntimeMethod_var);
		goto IL_006a;
	}

IL_0054:
	{
		TaskCompletionSource_1_t7998902 * L_11 = __this->get_tcs_1();
		Future_InternalDataSnapshot_t3720598533 * L_12 = __this->get_fu_0();
		NullCheck(L_12);
		InternalDataSnapshot_t1607276085 * L_13 = Future_InternalDataSnapshot_result_m2074089048(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		TaskCompletionSource_1_SetResult_m1331262637(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_m1331262637_RuntimeMethod_var);
	}

IL_006a:
	{
		Future_InternalDataSnapshot_t3720598533 * L_14 = __this->get_fu_0();
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_14);
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
extern "C"  void DelegatePInvokeWrapper_Action_t3901044065 (Action_t3901044065 * __this, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::.ctor(System.Object,System.IntPtr)
extern "C"  void Action__ctor_m3550217258 (Action_t3901044065 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::Invoke()
extern "C"  void Action_Invoke_m2058789070 (Action_t3901044065 * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		Action_Invoke_m2058789070((Action_t3901044065 *)__this->get_prev_9(), method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 0)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.Future_InternalDataSnapshot/Action::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* Action_BeginInvoke_m4162210864 (Action_t3901044065 * __this, AsyncCallback_t3962456242 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/Action::EndInvoke(System.IAsyncResult)
extern "C"  void Action_EndInvoke_m1473722963 (Action_t3901044065 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/MonoPInvokeCallbackAttribute::.ctor(System.Type)
extern "C"  void MonoPInvokeCallbackAttribute__ctor_m3483861308 (MonoPInvokeCallbackAttribute_t55682319 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m1529526131(__this, /*hidden argument*/NULL);
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
extern "C"  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_t2539505618 (SWIG_CompletionDelegate_t2539505618 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void SWIG_CompletionDelegate__ctor_m3864827867 (SWIG_CompletionDelegate_t2539505618 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::Invoke(System.Int32)
extern "C"  void SWIG_CompletionDelegate_Invoke_m1054786283 (SWIG_CompletionDelegate_t2539505618 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		SWIG_CompletionDelegate_Invoke_m1054786283((SWIG_CompletionDelegate_t2539505618 *)__this->get_prev_9(), ___index0, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___index0, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_m137124511 (SWIG_CompletionDelegate_t2539505618 * __this, int32_t ___index0, AsyncCallback_t3962456242 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_m137124511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Database.Internal.Future_InternalDataSnapshot/SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void SWIG_CompletionDelegate_EndInvoke_m1585473615 (SWIG_CompletionDelegate_t2539505618 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildChangeHandler_m2756529731(int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, char* ___previousChildName3)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___previousChildName3' to managed representation
	String_t* ____previousChildName3_unmarshaled = NULL;
	____previousChildName3_unmarshaled = il2cpp_codegen_marshal_string_result(___previousChildName3);

	// Managed method invocation
	InternalChildListener_OnChildChangeHandler_m2756529731(NULL, ___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnChildRemovedHandler_m2594487275(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	InternalChildListener_OnChildRemovedHandler_m2594487275(NULL, ___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalChildListener_OnCancelledHandler_m55601804(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalChildListener_OnCancelledHandler_m55601804(NULL, ___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalChildListener::.cctor()
extern "C"  void InternalChildListener__cctor_m2086476096 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__cctor_m2086476096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t4200244901 * G_B4_0 = NULL;
	OnCancelledDelegate_t4200244901 * G_B3_0 = NULL;
	OnChildChangeDelegate_t3077338721 * G_B6_0 = NULL;
	OnCancelledDelegate_t4200244901 * G_B6_1 = NULL;
	OnChildChangeDelegate_t3077338721 * G_B5_0 = NULL;
	OnCancelledDelegate_t4200244901 * G_B5_1 = NULL;
	{
		OnCancelledDelegate_t4200244901 * L_0 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)InternalChildListener_OnCancelledHandler_m55601804_RuntimeMethod_var;
		OnCancelledDelegate_t4200244901 * L_2 = (OnCancelledDelegate_t4200244901 *)il2cpp_codegen_object_new(OnCancelledDelegate_t4200244901_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m3646004881(L_2, NULL, L_1, /*hidden argument*/NULL);
		((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_12(L_2);
	}

IL_0018:
	{
		OnCancelledDelegate_t4200244901 * L_3 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_12();
		OnChildChangeDelegate_t3077338721 * L_4 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0035;
		}
	}
	{
		intptr_t L_5 = (intptr_t)InternalChildListener_OnChildChangeHandler_m2756529731_RuntimeMethod_var;
		OnChildChangeDelegate_t3077338721 * L_6 = (OnChildChangeDelegate_t3077338721 *)il2cpp_codegen_object_new(OnChildChangeDelegate_t3077338721_il2cpp_TypeInfo_var);
		OnChildChangeDelegate__ctor_m1119951216(L_6, NULL, L_5, /*hidden argument*/NULL);
		((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_13(L_6);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnChildChangeDelegate_t3077338721 * L_7 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_13();
		OnChildRemovedDelegate_t3205732376 * L_8 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		G_B5_0 = L_7;
		G_B5_1 = G_B4_0;
		if (L_8)
		{
			G_B6_0 = L_7;
			G_B6_1 = G_B4_0;
			goto IL_0052;
		}
	}
	{
		intptr_t L_9 = (intptr_t)InternalChildListener_OnChildRemovedHandler_m2594487275_RuntimeMethod_var;
		OnChildRemovedDelegate_t3205732376 * L_10 = (OnChildRemovedDelegate_t3205732376 *)il2cpp_codegen_object_new(OnChildRemovedDelegate_t3205732376_il2cpp_TypeInfo_var);
		OnChildRemovedDelegate__ctor_m488517300(L_10, NULL, L_9, /*hidden argument*/NULL);
		((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache2_14(L_10);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
	}

IL_0052:
	{
		OnChildRemovedDelegate_t3205732376 * L_11 = ((InternalChildListener_t3083312682_StaticFields*)il2cpp_codegen_static_fields_for(InternalChildListener_t3083312682_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache2_14();
		InternalQuery_RegisterChildListenerCallbacks_m3258966829(NULL /*static, unused*/, G_B6_1, G_B6_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void InternalChildListener__ctor_m2747023506 (InternalChildListener_t3083312682 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener__ctor_m2747023506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		InternalListener__ctor_m542432145(__this, /*hidden argument*/NULL);
		InternalQuery_t2324573063 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_t1344765733 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalChildListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalChildListener&)
extern "C"  bool InternalChildListener_TryGetListener_m4135003006 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, InternalChildListener_t3083312682 ** ___childListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_TryGetListener_m4135003006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t340858984 * V_0 = NULL;
	{
		V_0 = (InternalListener_t340858984 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_m4293346749(NULL /*static, unused*/, L_0, (InternalListener_t340858984 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_t3083312682 ** L_2 = ___childListener1;
		InternalListener_t340858984 * L_3 = V_0;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)((InternalChildListener_t3083312682 *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_t3083312682_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)((InternalChildListener_t3083312682 *)IsInstSealed((RuntimeObject*)L_3, InternalChildListener_t3083312682_il2cpp_TypeInfo_var)));
		InternalChildListener_t3083312682 ** L_4 = ___childListener1;
		return (bool)((((int32_t)((((RuntimeObject*)(InternalChildListener_t3083312682 *)(*((InternalChildListener_t3083312682 **)L_4))) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalChildListener_t3083312682 ** L_5 = ___childListener1;
		*((RuntimeObject **)(L_5)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_5), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildChangeHandler(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
extern "C"  void InternalChildListener_OnChildChangeHandler_m2756529731 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildChangeHandler_m2756529731_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t1607276085 * V_0 = NULL;
	EventHandler_1_t2126847776 * V_1 = NULL;
	InternalChildListener_t3083312682 * V_2 = NULL;
	{
		intptr_t L_0 = ___snapshot2;
		InternalDataSnapshot_t1607276085 * L_1 = (InternalDataSnapshot_t1607276085 *)il2cpp_codegen_object_new(InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m3155803892(L_1, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t2126847776 *)NULL;
		V_2 = (InternalChildListener_t3083312682 *)NULL;
		int32_t L_2 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t3083312682_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_m4135003006(NULL /*static, unused*/, L_2, (InternalChildListener_t3083312682 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_4 = ___changeType1;
		if ((((int32_t)L_4) == ((int32_t)1)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_5 = ___changeType1;
		if ((((int32_t)L_5) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_6 = ___changeType1;
		if ((((int32_t)L_6) == ((int32_t)3)))
		{
			goto IL_004b;
		}
	}
	{
		goto IL_0057;
	}

IL_0033:
	{
		InternalChildListener_t3083312682 * L_7 = V_2;
		NullCheck(L_7);
		EventHandler_1_t2126847776 * L_8 = L_7->get_childAddedImpl_8();
		V_1 = L_8;
		goto IL_0057;
	}

IL_003f:
	{
		InternalChildListener_t3083312682 * L_9 = V_2;
		NullCheck(L_9);
		EventHandler_1_t2126847776 * L_10 = L_9->get_childChangedImpl_9();
		V_1 = L_10;
		goto IL_0057;
	}

IL_004b:
	{
		InternalChildListener_t3083312682 * L_11 = V_2;
		NullCheck(L_11);
		EventHandler_1_t2126847776 * L_12 = L_11->get_childMovedImpl_10();
		V_1 = L_12;
		goto IL_0057;
	}

IL_0057:
	{
		EventHandler_1_t2126847776 * L_13 = V_1;
		if (!L_13)
		{
			goto IL_007b;
		}
	}
	{
		EventHandler_1_t2126847776 * L_14 = V_1;
		InternalDataSnapshot_t1607276085 * L_15 = V_0;
		InternalChildListener_t3083312682 * L_16 = V_2;
		NullCheck(L_16);
		FirebaseDatabase_t1344765733 * L_17 = L_16->get_database_6();
		DataSnapshot_t2895422505 * L_18 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_15, L_17, /*hidden argument*/NULL);
		String_t* L_19 = ___previousChildName3;
		ChildChangedEventArgs_t4202688343 * L_20 = (ChildChangedEventArgs_t4202688343 *)il2cpp_codegen_object_new(ChildChangedEventArgs_t4202688343_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m3147525033(L_20, L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_14);
		EventHandler_1_Invoke_m3773386107(L_14, NULL, L_20, /*hidden argument*/EventHandler_1_Invoke_m3773386107_RuntimeMethod_var);
		goto IL_0081;
	}

IL_007b:
	{
		InternalDataSnapshot_t1607276085 * L_21 = V_0;
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_21);
	}

IL_0081:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnChildRemovedHandler(System.Int32,System.IntPtr)
extern "C"  void InternalChildListener_OnChildRemovedHandler_m2594487275 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnChildRemovedHandler_m2594487275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t1607276085 * V_0 = NULL;
	EventHandler_1_t2126847776 * V_1 = NULL;
	InternalChildListener_t3083312682 * V_2 = NULL;
	{
		intptr_t L_0 = ___snapshot1;
		InternalDataSnapshot_t1607276085 * L_1 = (InternalDataSnapshot_t1607276085 *)il2cpp_codegen_object_new(InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m3155803892(L_1, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t2126847776 *)NULL;
		V_2 = (InternalChildListener_t3083312682 *)NULL;
		int32_t L_2 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t3083312682_il2cpp_TypeInfo_var);
		bool L_3 = InternalChildListener_TryGetListener_m4135003006(NULL /*static, unused*/, L_2, (InternalChildListener_t3083312682 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InternalChildListener_t3083312682 * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t2126847776 * L_5 = L_4->get_childRemovedImpl_11();
		V_1 = L_5;
	}

IL_0020:
	{
		EventHandler_1_t2126847776 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		EventHandler_1_t2126847776 * L_7 = V_1;
		InternalDataSnapshot_t1607276085 * L_8 = V_0;
		InternalChildListener_t3083312682 * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_t1344765733 * L_10 = L_9->get_database_6();
		DataSnapshot_t2895422505 * L_11 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		ChildChangedEventArgs_t4202688343 * L_12 = (ChildChangedEventArgs_t4202688343 *)il2cpp_codegen_object_new(ChildChangedEventArgs_t4202688343_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m3147525033(L_12, L_11, (String_t*)NULL, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m3773386107(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_m3773386107_RuntimeMethod_var);
		goto IL_004a;
	}

IL_0044:
	{
		InternalDataSnapshot_t1607276085 * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_004a:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void InternalChildListener_OnCancelledHandler_m55601804 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_OnCancelledHandler_m55601804_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2126847776 * V_0 = NULL;
	InternalChildListener_t3083312682 * V_1 = NULL;
	{
		V_0 = (EventHandler_1_t2126847776 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalChildListener_t3083312682_il2cpp_TypeInfo_var);
		bool L_1 = InternalChildListener_TryGetListener_m4135003006(NULL /*static, unused*/, L_0, (InternalChildListener_t3083312682 **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		InternalChildListener_t3083312682 * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t2126847776 * L_3 = L_2->get_cancelledImpl_7();
		V_0 = L_3;
	}

IL_0016:
	{
		EventHandler_1_t2126847776 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EventHandler_1_t2126847776 * L_5 = V_0;
		int32_t L_6 = ___error1;
		String_t* L_7 = ___msg2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t3685099270_il2cpp_TypeInfo_var);
		DatabaseError_t3685099270 * L_8 = DatabaseError_FromError_m669180003(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		ChildChangedEventArgs_t4202688343 * L_9 = (ChildChangedEventArgs_t4202688343 *)il2cpp_codegen_object_new(ChildChangedEventArgs_t4202688343_il2cpp_TypeInfo_var);
		ChildChangedEventArgs__ctor_m691361579(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m3773386107(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_m3773386107_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalChildListener::DestroyCppListener()
extern "C"  void InternalChildListener_DestroyCppListener_m1987139621 (InternalChildListener_t3083312682 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalChildListener_DestroyCppListener_m1987139621_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyChildListener_m2868463944(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
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
extern "C"  void DelegatePInvokeWrapper_OnCancelledDelegate_t4200244901 (OnCancelledDelegate_t4200244901 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCancelledDelegate__ctor_m3646004881 (OnCancelledDelegate_t4200244901 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void OnCancelledDelegate_Invoke_m2726729966 (OnCancelledDelegate_t4200244901 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnCancelledDelegate_Invoke_m2726729966((OnCancelledDelegate_t4200244901 *)__this->get_prev_9(), ___callbackId0, ___error1, ___msg2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnCancelledDelegate_BeginInvoke_m4225741905 (OnCancelledDelegate_t4200244901 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_m4225741905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t704128997_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnCancelledDelegate_EndInvoke_m937541572 (OnCancelledDelegate_t4200244901 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_OnChildChangeDelegate_t3077338721 (OnChildChangeDelegate_t3077338721 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, int32_t, intptr_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___previousChildName3' to native representation
	char* ____previousChildName3_marshaled = NULL;
	____previousChildName3_marshaled = il2cpp_codegen_marshal_string(___previousChildName3);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___changeType1, ___snapshot2, ____previousChildName3_marshaled);

	// Marshaling cleanup of parameter '___previousChildName3' native representation
	il2cpp_codegen_marshal_free(____previousChildName3_marshaled);
	____previousChildName3_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnChildChangeDelegate__ctor_m1119951216 (OnChildChangeDelegate_t3077338721 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::Invoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String)
extern "C"  void OnChildChangeDelegate_Invoke_m4081945494 (OnChildChangeDelegate_t3077338721 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnChildChangeDelegate_Invoke_m4081945494((OnChildChangeDelegate_t3077338721 *)__this->get_prev_9(), ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 4)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						GenericVirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
					else
						VirtActionInvoker4< int32_t, int32_t, intptr_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, intptr_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___changeType1, ___snapshot2, ___previousChildName3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.ChildChangeType,System.IntPtr,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnChildChangeDelegate_BeginInvoke_m394480013 (OnChildChangeDelegate_t3077338721 * __this, int32_t ___callbackId0, int32_t ___changeType1, intptr_t ___snapshot2, String_t* ___previousChildName3, AsyncCallback_t3962456242 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildChangeDelegate_BeginInvoke_m394480013_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(ChildChangeType_t689306747_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot2);
	__d_args[3] = ___previousChildName3;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnChildChangeDelegate_EndInvoke_m3195079396 (OnChildChangeDelegate_t3077338721 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_OnChildRemovedDelegate_t3205732376 (OnChildRemovedDelegate_t3205732376 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnChildRemovedDelegate__ctor_m488517300 (OnChildRemovedDelegate_t3205732376 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::Invoke(System.Int32,System.IntPtr)
extern "C"  void OnChildRemovedDelegate_Invoke_m1423437502 (OnChildRemovedDelegate_t3205732376 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnChildRemovedDelegate_Invoke_m1423437502((OnChildRemovedDelegate_t3205732376 *)__this->get_prev_9(), ___callbackId0, ___snapshot1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnChildRemovedDelegate_BeginInvoke_m4012441887 (OnChildRemovedDelegate_t3205732376 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnChildRemovedDelegate_BeginInvoke_m4012441887_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnChildRemovedDelegate_EndInvoke_m2455899000 (OnChildRemovedDelegate_t3205732376 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Database.Internal.InternalDatabaseReference::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDatabaseReference__ctor_m1883612658 (InternalDatabaseReference_t2434949222 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference__ctor_m1883612658_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SWIGUpcast_m3819929639(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		InternalQuery__ctor_m4090244133(__this, L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t3745784362  L_4;
		memset(&L_4, 0, sizeof(L_4));
		HandleRef__ctor_m868850155((&L_4), __this, L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Finalize()
extern "C"  void InternalDatabaseReference_Finalize_m515798408 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		InternalQuery_Finalize_m3459020172(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDatabaseReference::Dispose()
extern "C"  void InternalDatabaseReference_Dispose_m2265395864 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_Dispose_m2265395864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_2();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = ((InternalQuery_t2324573063 *)__this)->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			((InternalQuery_t2324573063 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDatabaseReference_m279241591(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_6);
		}

IL_0050:
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			InternalQuery_Dispose_m2035310434(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		return;
	}
}
// System.String Firebase.Database.Internal.InternalDatabaseReference::key_string()
extern "C"  String_t* InternalDatabaseReference_key_string_m1550646153 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_key_string_m1550646153_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_key_string_m3617372534(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDatabaseReference_key_string_m1550646153_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_root()
extern "C"  bool InternalDatabaseReference_is_root_m4288236037 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_is_root_m4288236037_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_root_m1605903526(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDatabaseReference_is_root_m4288236037_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDatabaseReference::is_valid()
extern "C"  bool InternalDatabaseReference_is_valid_m1887106859 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_is_valid_m1887106859_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_is_valid_m540846483(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDatabaseReference_is_valid_m1887106859_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalDatabaseReference::Child(System.String)
extern "C"  InternalDatabaseReference_t2434949222 * InternalDatabaseReference_Child_m2565751312 (InternalDatabaseReference_t2434949222 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_Child_m2565751312_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t2434949222 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_Child__SWIG_0_m1121580414(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t2434949222 * L_3 = (InternalDatabaseReference_t2434949222 *)il2cpp_codegen_object_new(InternalDatabaseReference_t2434949222_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m1883612658(L_3, L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, InternalDatabaseReference_Child_m2565751312_RuntimeMethod_var);
	}

IL_0023:
	{
		InternalDatabaseReference_t2434949222 * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalDatabaseReference::PushChild()
extern "C"  InternalDatabaseReference_t2434949222 * InternalDatabaseReference_PushChild_m1170766719 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_PushChild_m1170766719_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t2434949222 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_PushChild_m2641246044(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		InternalDatabaseReference_t2434949222 * L_2 = (InternalDatabaseReference_t2434949222 *)il2cpp_codegen_object_new(InternalDatabaseReference_t2434949222_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m1883612658(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalDatabaseReference_PushChild_m1170766719_RuntimeMethod_var);
	}

IL_0022:
	{
		InternalDatabaseReference_t2434949222 * L_5 = V_0;
		return L_5;
	}
}
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::SetValueAsync(Firebase.Variant)
extern "C"  Task_t3187275312 * InternalDatabaseReference_SetValueAsync_m1511685033 (InternalDatabaseReference_t2434949222 * __this, Variant_t1163908808 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_SetValueAsync_m1511685033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t3187275312 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		Variant_t1163908808 * L_1 = ___value0;
		HandleRef_t3745784362  L_2 = Variant_getCPtr_m474309385(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_3 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_SetValue_m1573575676(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		FutureVoid_t983301800 * L_4 = (FutureVoid_t983301800 *)il2cpp_codegen_object_new(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m3140861867(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_5 = FutureVoid_GetTask_m4275693369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Task_t3187275312 * L_6 = V_0;
		return L_6;
	}
}
// System.Threading.Tasks.Task Firebase.Database.Internal.InternalDatabaseReference::UpdateChildrenAsync(Firebase.Variant)
extern "C"  Task_t3187275312 * InternalDatabaseReference_UpdateChildrenAsync_m2600337708 (InternalDatabaseReference_t2434949222 * __this, Variant_t1163908808 * ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_UpdateChildrenAsync_m2600337708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_t3187275312 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		Variant_t1163908808 * L_1 = ___values0;
		HandleRef_t3745784362  L_2 = Variant_getCPtr_m474309385(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_3 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_UpdateChildren_m781051516(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		FutureVoid_t983301800 * L_4 = (FutureVoid_t983301800 *)il2cpp_codegen_object_new(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		FutureVoid__ctor_m3140861867(L_4, L_3, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureVoid_t983301800_il2cpp_TypeInfo_var);
		Task_t3187275312 * L_5 = FutureVoid_GetTask_m4275693369(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Task_t3187275312 * L_6 = V_0;
		return L_6;
	}
}
// System.String Firebase.Database.Internal.InternalDatabaseReference::url()
extern "C"  String_t* InternalDatabaseReference_url_m3171555436 (InternalDatabaseReference_t2434949222 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDatabaseReference_url_m3171555436_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDatabaseReference_url_m4115933297(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDatabaseReference_url_m3171555436_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
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
// System.Void Firebase.Database.Internal.InternalDataSnapshot::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDataSnapshot__ctor_m3155803892 (InternalDataSnapshot_t1607276085 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t3745784362  L_2;
		memset(&L_2, 0, sizeof(L_2));
		HandleRef__ctor_m868850155((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Finalize()
extern "C"  void InternalDataSnapshot_Finalize_m3451700398 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose()
extern "C"  void InternalDataSnapshot_Dispose_m2759416598 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_Dispose_m2759416598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_0();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = __this->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshot_m4195680626(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_6);
		}

IL_0050:
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x62, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDataSnapshot::exists()
extern "C"  bool InternalDataSnapshot_exists_m888180388 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_exists_m888180388_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_exists_m1172472909(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDataSnapshot_exists_m888180388_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// Firebase.Database.Internal.InternalDataSnapshotList Firebase.Database.Internal.InternalDataSnapshot::children()
extern "C"  InternalDataSnapshotList_t2262125325 * InternalDataSnapshot_children_m3447820114 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_children_m3447820114_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshotList_t2262125325 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_children_m3898803079(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		InternalDataSnapshotList_t2262125325 * L_2 = (InternalDataSnapshotList_t2262125325 *)il2cpp_codegen_object_new(InternalDataSnapshotList_t2262125325_il2cpp_TypeInfo_var);
		InternalDataSnapshotList__ctor_m3220367029(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalDataSnapshot_children_m3447820114_RuntimeMethod_var);
	}

IL_0022:
	{
		InternalDataSnapshotList_t2262125325 * L_5 = V_0;
		return L_5;
	}
}
// System.String Firebase.Database.Internal.InternalDataSnapshot::key_string()
extern "C"  String_t* InternalDataSnapshot_key_string_m1747179232 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_key_string_m1747179232_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		String_t* L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_key_string_m780224523(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDataSnapshot_key_string_m1747179232_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// Firebase.Variant Firebase.Database.Internal.InternalDataSnapshot::value()
extern "C"  Variant_t1163908808 * InternalDataSnapshot_value_m1688936517 (InternalDataSnapshot_t1607276085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshot_value_m1688936517_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t1163908808 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshot_value_m2291277655(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Variant_t1163908808 * L_2 = (Variant_t1163908808 *)il2cpp_codegen_object_new(Variant_t1163908808_il2cpp_TypeInfo_var);
		Variant__ctor_m4169718302(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalDataSnapshot_value_m1688936517_RuntimeMethod_var);
	}

IL_0022:
	{
		Variant_t1163908808 * L_5 = V_0;
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
// System.Void Firebase.Database.Internal.InternalDataSnapshotList::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalDataSnapshotList__ctor_m3220367029 (InternalDataSnapshotList_t2262125325 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t3745784362  L_2;
		memset(&L_2, 0, sizeof(L_2));
		HandleRef__ctor_m868850155((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshotList::Finalize()
extern "C"  void InternalDataSnapshotList_Finalize_m560747219 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(7 /* System.Void Firebase.Database.Internal.InternalDataSnapshotList::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshotList::Dispose()
extern "C"  void InternalDataSnapshotList_Dispose_m599251185 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotList_Dispose_m599251185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_0();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = __this->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalDataSnapshotList_m3100052608(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_6);
		}

IL_0050:
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x62, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList::get_Item(System.Int32)
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotList_get_Item_m1155061552 (InternalDataSnapshotList_t2262125325 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		InternalDataSnapshot_t1607276085 * L_1 = InternalDataSnapshotList_getitem_m3488929343(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Int32 Firebase.Database.Internal.InternalDataSnapshotList::get_Count()
extern "C"  int32_t InternalDataSnapshotList_get_Count_m1603620401 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = InternalDataSnapshotList_size_m4130234286(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalDataSnapshotList::System.Collections.Generic.IEnumerable<Firebase.Database.Internal.InternalDataSnapshot>.GetEnumerator()
extern "C"  RuntimeObject* InternalDataSnapshotList_System_Collections_Generic_IEnumerableU3CFirebase_Database_Internal_InternalDataSnapshotU3E_GetEnumerator_m689994954 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotList_System_Collections_Generic_IEnumerableU3CFirebase_Database_Internal_InternalDataSnapshotU3E_GetEnumerator_m689994954_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshotListEnumerator_t4124443923 * L_0 = (InternalDataSnapshotListEnumerator_t4124443923 *)il2cpp_codegen_object_new(InternalDataSnapshotListEnumerator_t4124443923_il2cpp_TypeInfo_var);
		InternalDataSnapshotListEnumerator__ctor_m841448010(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.IEnumerator Firebase.Database.Internal.InternalDataSnapshotList::System.Collections.IEnumerable.GetEnumerator()
extern "C"  RuntimeObject* InternalDataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m1959259056 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotList_System_Collections_IEnumerable_GetEnumerator_m1959259056_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		InternalDataSnapshotListEnumerator_t4124443923 * L_0 = (InternalDataSnapshotListEnumerator_t4124443923 *)il2cpp_codegen_object_new(InternalDataSnapshotListEnumerator_t4124443923_il2cpp_TypeInfo_var);
		InternalDataSnapshotListEnumerator__ctor_m841448010(L_0, __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.UInt32 Firebase.Database.Internal.InternalDataSnapshotList::size()
extern "C"  uint32_t InternalDataSnapshotList_size_m4130234286 (InternalDataSnapshotList_t2262125325 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotList_size_m4130234286_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		uint32_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_size_m1844728926(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDataSnapshotList_size_m4130234286_RuntimeMethod_var);
	}

IL_001c:
	{
		uint32_t L_4 = V_0;
		return L_4;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList::getitem(System.Int32)
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotList_getitem_m3488929343 (InternalDataSnapshotList_t2262125325 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotList_getitem_m3488929343_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t1607276085 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		int32_t L_1 = ___index0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalDataSnapshotList_getitem_m1679163993(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		InternalDataSnapshot_t1607276085 * L_3 = (InternalDataSnapshot_t1607276085 *)il2cpp_codegen_object_new(InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m3155803892(L_3, L_2, (bool)0, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, InternalDataSnapshotList_getitem_m3488929343_RuntimeMethod_var);
	}

IL_0023:
	{
		InternalDataSnapshot_t1607276085 * L_6 = V_0;
		return L_6;
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
// System.Void Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::.ctor(Firebase.Database.Internal.InternalDataSnapshotList)
extern "C"  void InternalDataSnapshotListEnumerator__ctor_m841448010 (InternalDataSnapshotListEnumerator_t4124443923 * __this, InternalDataSnapshotList_t2262125325 * ___collection0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InternalDataSnapshotList_t2262125325 * L_0 = ___collection0;
		__this->set_collectionRef_0(L_0);
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
		InternalDataSnapshotList_t2262125325 * L_1 = __this->get_collectionRef_0();
		NullCheck(L_1);
		int32_t L_2 = InternalDataSnapshotList_get_Count_m1603620401(L_1, /*hidden argument*/NULL);
		__this->set_currentSize_3(L_2);
		return;
	}
}
// Firebase.Database.Internal.InternalDataSnapshot Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::get_Current()
extern "C"  InternalDataSnapshot_t1607276085 * InternalDataSnapshotListEnumerator_get_Current_m3393202783 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotListEnumerator_get_Current_m3393202783_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_currentIndex_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_0017;
		}
	}
	{
		InvalidOperationException_t56020091 * L_1 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_1, _stringLiteral1650397319, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, InternalDataSnapshotListEnumerator_get_Current_m3393202783_RuntimeMethod_var);
	}

IL_0017:
	{
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = __this->get_currentSize_3();
		if ((((int32_t)L_2) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1)))))
		{
			goto IL_0035;
		}
	}
	{
		InvalidOperationException_t56020091 * L_4 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_4, _stringLiteral4099182781, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalDataSnapshotListEnumerator_get_Current_m3393202783_RuntimeMethod_var);
	}

IL_0035:
	{
		RuntimeObject * L_5 = __this->get_currentObject_2();
		if (L_5)
		{
			goto IL_004b;
		}
	}
	{
		InvalidOperationException_t56020091 * L_6 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_6, _stringLiteral1322241199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, NULL, InternalDataSnapshotListEnumerator_get_Current_m3393202783_RuntimeMethod_var);
	}

IL_004b:
	{
		RuntimeObject * L_7 = __this->get_currentObject_2();
		return ((InternalDataSnapshot_t1607276085 *)CastclassClass((RuntimeObject*)L_7, InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var));
	}
}
// System.Object Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * InternalDataSnapshotListEnumerator_System_Collections_IEnumerator_get_Current_m1315157375 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method)
{
	{
		InternalDataSnapshot_t1607276085 * L_0 = InternalDataSnapshotListEnumerator_get_Current_m3393202783(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::MoveNext()
extern "C"  bool InternalDataSnapshotListEnumerator_MoveNext_m913699956 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		InternalDataSnapshotList_t2262125325 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1 = InternalDataSnapshotList_get_Count_m1603620401(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = __this->get_currentIndex_1();
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))) >= ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_currentSize_3();
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_7 = __this->get_currentIndex_1();
		__this->set_currentIndex_1(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		InternalDataSnapshotList_t2262125325 * L_8 = __this->get_collectionRef_0();
		int32_t L_9 = __this->get_currentIndex_1();
		NullCheck(L_8);
		InternalDataSnapshot_t1607276085 * L_10 = InternalDataSnapshotList_get_Item_m1155061552(L_8, L_9, /*hidden argument*/NULL);
		__this->set_currentObject_2(L_10);
		goto IL_005e;
	}

IL_0057:
	{
		__this->set_currentObject_2(NULL);
	}

IL_005e:
	{
		bool L_11 = V_1;
		return L_11;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::Reset()
extern "C"  void InternalDataSnapshotListEnumerator_Reset_m3467336562 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalDataSnapshotListEnumerator_Reset_m3467336562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
		InternalDataSnapshotList_t2262125325 * L_0 = __this->get_collectionRef_0();
		NullCheck(L_0);
		int32_t L_1 = InternalDataSnapshotList_get_Count_m1603620401(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_currentSize_3();
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_002f;
		}
	}
	{
		InvalidOperationException_t56020091 * L_3 = (InvalidOperationException_t56020091 *)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m237278729(L_3, _stringLiteral1322241199, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalDataSnapshotListEnumerator_Reset_m3467336562_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalDataSnapshotList/InternalDataSnapshotListEnumerator::Dispose()
extern "C"  void InternalDataSnapshotListEnumerator_Dispose_m985616098 (InternalDataSnapshotListEnumerator_t4124443923 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currentIndex_1((-1));
		__this->set_currentObject_2(NULL);
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
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalFirebaseDatabase__ctor_m188332242 (InternalFirebaseDatabase_t2115990047 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t3745784362  L_2;
		memset(&L_2, 0, sizeof(L_2));
		HandleRef__ctor_m868850155((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Database.Internal.InternalFirebaseDatabase::getCPtr(Firebase.Database.Internal.InternalFirebaseDatabase)
extern "C"  HandleRef_t3745784362  InternalFirebaseDatabase_getCPtr_m2276546031 (RuntimeObject * __this /* static, unused */, InternalFirebaseDatabase_t2115990047 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_getCPtr_m2276546031_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t3745784362  G_B3_0;
	memset(&G_B3_0, 0, sizeof(G_B3_0));
	{
		InternalFirebaseDatabase_t2115990047 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t3745784362  L_1;
		memset(&L_1, 0, sizeof(L_1));
		HandleRef__ctor_m868850155((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		InternalFirebaseDatabase_t2115990047 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t3745784362  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Finalize()
extern "C"  void InternalFirebaseDatabase_Finalize_m4187889173 (InternalFirebaseDatabase_t2115990047 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalFirebaseDatabase::Dispose()
extern "C"  void InternalFirebaseDatabase_Dispose_m1322521425 (InternalFirebaseDatabase_t2115990047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_Dispose_m1322521425_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		RegistrationToken_t3106726623 * L_1 = __this->get_address_of_cleanupToken_2();
		bool L_2 = __this->get_swigCMemOwn_1();
		IL2CPP_RUNTIME_CLASS_INIT(CleanupNotifier_t720088202_il2cpp_TypeInfo_var);
		CleanupNotifier_DisposeObject_m2709111202(NULL /*static, unused*/, (RegistrationToken_t3106726623 *)L_1, __this, L_2, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t3745784362  L_3;
		memset(&L_3, 0, sizeof(L_3));
		HandleRef__ctor_m868850155((&L_3), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_3);
		IL2CPP_LEAVE(0x3E, FINALLY_0037);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(55)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x3E, IL_003e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003e:
	{
		return;
	}
}
// Firebase.Database.Internal.InternalFirebaseDatabase Firebase.Database.Internal.InternalFirebaseDatabase::GetInstance(Firebase.FirebaseApp,System.String)
extern "C"  InternalFirebaseDatabase_t2115990047 * InternalFirebaseDatabase_GetInstance_m1855740917 (RuntimeObject * __this /* static, unused */, FirebaseApp_t2526288410 * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetInstance_m1855740917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset(&V_0, 0, sizeof(V_0));
	InternalFirebaseDatabase_t2115990047 * V_1 = NULL;
	InternalFirebaseDatabase_t2115990047 * G_B3_0 = NULL;
	{
		FirebaseApp_t2526288410 * L_0 = ___app0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t2526288410_il2cpp_TypeInfo_var);
		HandleRef_t3745784362  L_1 = FirebaseApp_getCPtr_m4063892236(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___url1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_3 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetInstance__SWIG_3_m2405421246(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		intptr_t L_4 = V_0;
		bool L_5 = IntPtr_op_Equality_m408849716(NULL /*static, unused*/, L_4, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0023;
		}
	}
	{
		G_B3_0 = ((InternalFirebaseDatabase_t2115990047 *)(NULL));
		goto IL_002a;
	}

IL_0023:
	{
		intptr_t L_6 = V_0;
		InternalFirebaseDatabase_t2115990047 * L_7 = (InternalFirebaseDatabase_t2115990047 *)il2cpp_codegen_object_new(InternalFirebaseDatabase_t2115990047_il2cpp_TypeInfo_var);
		InternalFirebaseDatabase__ctor_m188332242(L_7, L_6, (bool)1, /*hidden argument*/NULL);
		G_B3_0 = L_7;
	}

IL_002a:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_8 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_9 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, NULL, InternalFirebaseDatabase_GetInstance_m1855740917_RuntimeMethod_var);
	}

IL_003b:
	{
		InternalFirebaseDatabase_t2115990047 * L_10 = V_1;
		return L_10;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference()
extern "C"  InternalDatabaseReference_t2434949222 * InternalFirebaseDatabase_GetReference_m3478532065 (InternalFirebaseDatabase_t2115990047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetReference_m3478532065_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t2434949222 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_0_m2831832208(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		InternalDatabaseReference_t2434949222 * L_2 = (InternalDatabaseReference_t2434949222 *)il2cpp_codegen_object_new(InternalDatabaseReference_t2434949222_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m1883612658(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalFirebaseDatabase_GetReference_m3478532065_RuntimeMethod_var);
	}

IL_0022:
	{
		InternalDatabaseReference_t2434949222 * L_5 = V_0;
		return L_5;
	}
}
// Firebase.Database.Internal.InternalDatabaseReference Firebase.Database.Internal.InternalFirebaseDatabase::GetReference(System.String)
extern "C"  InternalDatabaseReference_t2434949222 * InternalFirebaseDatabase_GetReference_m2350576704 (InternalFirebaseDatabase_t2115990047 * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalFirebaseDatabase_GetReference_m2350576704_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDatabaseReference_t2434949222 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_2 = DatabaseInternalPINVOKE_Firebase_Database_InternalFirebaseDatabase_GetReference__SWIG_1_m2905014466(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		InternalDatabaseReference_t2434949222 * L_3 = (InternalDatabaseReference_t2434949222 *)il2cpp_codegen_object_new(InternalDatabaseReference_t2434949222_il2cpp_TypeInfo_var);
		InternalDatabaseReference__ctor_m1883612658(L_3, L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_4 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_5 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, InternalFirebaseDatabase_GetReference_m2350576704_RuntimeMethod_var);
	}

IL_0023:
	{
		InternalDatabaseReference_t2434949222 * L_6 = V_0;
		return L_6;
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
// System.Void Firebase.Database.Internal.InternalListener::.ctor()
extern "C"  void InternalListener__ctor_m542432145 (InternalListener_t340858984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__ctor_m542432145_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		Dictionary_2_t3524539611 * L_0 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		int32_t L_2 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_uidGenerator_0();
		int32_t L_3 = L_2;
		((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->set_uidGenerator_0(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		__this->set_uid_2(L_3);
		IL2CPP_LEAVE(0x31, FINALLY_002a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_JUMP_TBL(0x31, IL_0031)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalListener&)
extern "C"  bool InternalListener_TryGetListener_m4293346749 (RuntimeObject * __this /* static, unused */, int32_t ___uid0, InternalListener_t340858984 ** ___listener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_TryGetListener_m4293346749_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		Dictionary_2_t3524539611 * L_0 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		Dictionary_2_t3524539611 * L_2 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = ___uid0;
		InternalListener_t340858984 ** L_4 = ___listener1;
		NullCheck(L_2);
		bool L_5 = Dictionary_2_TryGetValue_m1272237168(L_2, L_3, (InternalListener_t340858984 **)L_4, /*hidden argument*/Dictionary_2_TryGetValue_m1272237168_RuntimeMethod_var);
		V_1 = L_5;
		IL2CPP_LEAVE(0x25, FINALLY_001e);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_6 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0025:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Finalize()
extern "C"  void InternalListener_Finalize_m2103772636 (InternalListener_t340858984 * __this, const RuntimeMethod* method)
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
		InternalListener_Dispose_m3966646282(__this, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::Dispose()
extern "C"  void InternalListener_Dispose_m3966646282 (InternalListener_t340858984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener_Dispose_m3966646282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalListener::DestroyCppListener() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		Dictionary_2_t3524539611 * L_0 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		Dictionary_2_t3524539611 * L_2 = ((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->get_databaseCallbacks_1();
		int32_t L_3 = __this->get_uid_2();
		NullCheck(L_2);
		Dictionary_2_Remove_m2973165269(L_2, L_3, /*hidden argument*/Dictionary_2_Remove_m2973165269_RuntimeMethod_var);
		IL2CPP_LEAVE(0x2F, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		RuntimeObject * L_4 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002f:
	{
		GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalListener::.cctor()
extern "C"  void InternalListener__cctor_m2423353445 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalListener__cctor_m2423353445_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->set_uidGenerator_0(0);
		Dictionary_2_t3524539611 * L_0 = (Dictionary_2_t3524539611 *)il2cpp_codegen_object_new(Dictionary_2_t3524539611_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m673768653(L_0, /*hidden argument*/Dictionary_2__ctor_m673768653_RuntimeMethod_var);
		((InternalListener_t340858984_StaticFields*)il2cpp_codegen_static_fields_for(InternalListener_t340858984_il2cpp_TypeInfo_var))->set_databaseCallbacks_1(L_0);
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
// System.Void Firebase.Database.Internal.InternalQuery::.ctor(System.IntPtr,System.Boolean)
extern "C"  void InternalQuery__ctor_m4090244133 (InternalQuery_t2324573063 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t3745784362  L_2;
		memset(&L_2, 0, sizeof(L_2));
		HandleRef__ctor_m868850155((&L_2), __this, L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Finalize()
extern "C"  void InternalQuery_Finalize_m3459020172 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method)
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalQuery::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_m3076187857(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::Dispose()
extern "C"  void InternalQuery_Dispose_m2035310434 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_Dispose_m2035310434_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = __this;
		RuntimeObject * L_0 = V_0;
		Monitor_Enter_m2249409497(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
	}

IL_0008:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t3745784362 * L_1 = __this->get_address_of_swigCPtr_0();
			intptr_t L_2 = HandleRef_get_Handle_m4239591804((HandleRef_t3745784362 *)L_1, /*hidden argument*/NULL);
			bool L_3 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_2, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_3)
			{
				goto IL_0050;
			}
		}

IL_0022:
		{
			bool L_4 = __this->get_swigCMemOwn_1();
			if (!L_4)
			{
				goto IL_003f;
			}
		}

IL_002d:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t3745784362  L_5 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
			DatabaseInternalPINVOKE_Firebase_Database_delete_InternalQuery_m1362472026(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		}

IL_003f:
		{
			HandleRef_t3745784362  L_6;
			memset(&L_6, 0, sizeof(L_6));
			HandleRef__ctor_m868850155((&L_6), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_6);
		}

IL_0050:
		{
			GC_SuppressFinalize_m1177400158(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x62, FINALLY_005b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005b;
	}

FINALLY_005b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_m3585316909(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(91)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(91)
	{
		IL2CPP_JUMP_TBL(0x62, IL_0062)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0062:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot> Firebase.Database.Internal.InternalQuery::GetValueAsync()
extern "C"  Task_1_t3012816260 * InternalQuery_GetValueAsync_m3194050225 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_GetValueAsync_m3194050225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_t3012816260 * V_0 = NULL;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		intptr_t L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_GetValue_m1300566419(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Future_InternalDataSnapshot_t3720598533 * L_2 = (Future_InternalDataSnapshot_t3720598533 *)il2cpp_codegen_object_new(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
		Future_InternalDataSnapshot__ctor_m1472638490(L_2, L_1, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_InternalDataSnapshot_t3720598533_il2cpp_TypeInfo_var);
		Task_1_t3012816260 * L_3 = Future_InternalDataSnapshot_GetTask_m2600252647(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Task_1_t3012816260 * L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Database.Internal.InternalQuery::is_valid()
extern "C"  bool InternalQuery_is_valid_m2578659739 (InternalQuery_t2324573063 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_is_valid_m2578659739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t3745784362  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		bool L_1 = DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_is_valid_m3458490525(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalQuery_is_valid_m2578659739_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyValueListener(System.IntPtr)
extern "C"  void InternalQuery_DestroyValueListener_m1709304708 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyValueListener_m1709304708_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyValueListener_m2624393739(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, InternalQuery_DestroyValueListener_m1709304708_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterValueListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate)
extern "C"  void InternalQuery_RegisterValueListenerCallbacks_m3129422900 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___cancelledCallback0, OnValueChangedDelegate_t3156556798 * ___valueChangedCallback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterValueListenerCallbacks_m3129422900_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t4200244901 * L_0 = ___cancelledCallback0;
		OnValueChangedDelegate_t3156556798 * L_1 = ___valueChangedCallback1;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterValueListenerCallbacks_m1853347796(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_2 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_3 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, NULL, InternalQuery_RegisterValueListenerCallbacks_m3129422900_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::DestroyChildListener(System.IntPtr)
extern "C"  void InternalQuery_DestroyChildListener_m2868463944 (RuntimeObject * __this /* static, unused */, intptr_t ___listener0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_DestroyChildListener_m2868463944_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___listener0;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_DestroyChildListener_m1713730544(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_1 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_2 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, InternalQuery_DestroyChildListener_m2868463944_RuntimeMethod_var);
	}

IL_0016:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalQuery::RegisterChildListenerCallbacks(Firebase.Database.Internal.InternalChildListener/OnCancelledDelegate,Firebase.Database.Internal.InternalChildListener/OnChildChangeDelegate,Firebase.Database.Internal.InternalChildListener/OnChildRemovedDelegate)
extern "C"  void InternalQuery_RegisterChildListenerCallbacks_m3258966829 (RuntimeObject * __this /* static, unused */, OnCancelledDelegate_t4200244901 * ___cancelledCallback0, OnChildChangeDelegate_t3077338721 * ___childChangeCallback1, OnChildRemovedDelegate_t3205732376 * ___childRemovedCallback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalQuery_RegisterChildListenerCallbacks_m3258966829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnCancelledDelegate_t4200244901 * L_0 = ___cancelledCallback0;
		OnChildChangeDelegate_t3077338721 * L_1 = ___childChangeCallback1;
		OnChildRemovedDelegate_t3205732376 * L_2 = ___childRemovedCallback2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseInternalPINVOKE_t816701182_il2cpp_TypeInfo_var);
		DatabaseInternalPINVOKE_Firebase_Database_InternalQuery_RegisterChildListenerCallbacks_m1797914766(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		bool L_3 = SWIGPendingException_get_Pending_m582413763(NULL /*static, unused*/, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(SWIGPendingException_t3190247900_il2cpp_TypeInfo_var);
		Exception_t * L_4 = SWIGPendingException_Retrieve_m2171998990(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, InternalQuery_RegisterChildListenerCallbacks_m3258966829_RuntimeMethod_var);
	}

IL_0018:
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnValueChangedHandler_m2019442509(int32_t ___callbackId0, intptr_t ___snapshot1)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	InternalValueListener_OnValueChangedHandler_m2019442509(NULL, ___callbackId0, ___snapshot1, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_InternalValueListener_OnCancelledHandler_m1875026310(int32_t ___callbackId0, int32_t ___error1, char* ___msg2)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___msg2' to managed representation
	String_t* ____msg2_unmarshaled = NULL;
	____msg2_unmarshaled = il2cpp_codegen_marshal_string_result(___msg2);

	// Managed method invocation
	InternalValueListener_OnCancelledHandler_m1875026310(NULL, ___callbackId0, ___error1, ____msg2_unmarshaled, NULL);

}
// System.Void Firebase.Database.Internal.InternalValueListener::.cctor()
extern "C"  void InternalValueListener__cctor_m3278748422 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__cctor_m3278748422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnCancelledDelegate_t4200244901 * G_B4_0 = NULL;
	OnCancelledDelegate_t4200244901 * G_B3_0 = NULL;
	{
		OnCancelledDelegate_t4200244901 * L_0 = ((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		intptr_t L_1 = (intptr_t)InternalValueListener_OnCancelledHandler_m1875026310_RuntimeMethod_var;
		OnCancelledDelegate_t4200244901 * L_2 = (OnCancelledDelegate_t4200244901 *)il2cpp_codegen_object_new(OnCancelledDelegate_t4200244901_il2cpp_TypeInfo_var);
		OnCancelledDelegate__ctor_m3646004881(L_2, NULL, L_1, /*hidden argument*/NULL);
		((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_8(L_2);
	}

IL_0018:
	{
		OnCancelledDelegate_t4200244901 * L_3 = ((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		OnValueChangedDelegate_t3156556798 * L_4 = ((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		G_B3_0 = L_3;
		if (L_4)
		{
			G_B4_0 = L_3;
			goto IL_0035;
		}
	}
	{
		intptr_t L_5 = (intptr_t)InternalValueListener_OnValueChangedHandler_m2019442509_RuntimeMethod_var;
		OnValueChangedDelegate_t3156556798 * L_6 = (OnValueChangedDelegate_t3156556798 *)il2cpp_codegen_object_new(OnValueChangedDelegate_t3156556798_il2cpp_TypeInfo_var);
		OnValueChangedDelegate__ctor_m3897072874(L_6, NULL, L_5, /*hidden argument*/NULL);
		((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_9(L_6);
		G_B4_0 = G_B3_0;
	}

IL_0035:
	{
		OnValueChangedDelegate_t3156556798 * L_7 = ((InternalValueListener_t1503646041_StaticFields*)il2cpp_codegen_static_fields_for(InternalValueListener_t1503646041_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		InternalQuery_RegisterValueListenerCallbacks_m3129422900(NULL /*static, unused*/, G_B4_0, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void InternalValueListener__ctor_m3494926899 (InternalValueListener_t1503646041 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener__ctor_m3494926899_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m297566312(L_0, /*hidden argument*/NULL);
		__this->set_eventLock_3(L_0);
		__this->set_cppListener_5((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		InternalListener__ctor_m542432145(__this, /*hidden argument*/NULL);
		InternalQuery_t2324573063 * L_1 = ___internalQuery0;
		__this->set_internalQuery_4(L_1);
		FirebaseDatabase_t1344765733 * L_2 = ___database1;
		__this->set_database_6(L_2);
		return;
	}
}
// System.Boolean Firebase.Database.Internal.InternalValueListener::TryGetListener(System.Int32,Firebase.Database.Internal.InternalValueListener&)
extern "C"  bool InternalValueListener_TryGetListener_m572059894 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, InternalValueListener_t1503646041 ** ___valueListener1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_TryGetListener_m572059894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalListener_t340858984 * V_0 = NULL;
	{
		V_0 = (InternalListener_t340858984 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalListener_t340858984_il2cpp_TypeInfo_var);
		bool L_1 = InternalListener_TryGetListener_m4293346749(NULL /*static, unused*/, L_0, (InternalListener_t340858984 **)(&V_0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_t1503646041 ** L_2 = ___valueListener1;
		InternalListener_t340858984 * L_3 = V_0;
		*((RuntimeObject **)(L_2)) = (RuntimeObject *)((InternalValueListener_t1503646041 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t1503646041_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_2), (RuntimeObject *)((InternalValueListener_t1503646041 *)IsInstSealed((RuntimeObject*)L_3, InternalValueListener_t1503646041_il2cpp_TypeInfo_var)));
		InternalValueListener_t1503646041 ** L_4 = ___valueListener1;
		return (bool)((((int32_t)((((RuntimeObject*)(InternalValueListener_t1503646041 *)(*((InternalValueListener_t1503646041 **)L_4))) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0020:
	{
		InternalValueListener_t1503646041 ** L_5 = ___valueListener1;
		*((RuntimeObject **)(L_5)) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((RuntimeObject **)(L_5), (RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnValueChangedHandler(System.Int32,System.IntPtr)
extern "C"  void InternalValueListener_OnValueChangedHandler_m2019442509 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnValueChangedHandler_m2019442509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InternalDataSnapshot_t1607276085 * V_0 = NULL;
	EventHandler_1_t521163170 * V_1 = NULL;
	InternalValueListener_t1503646041 * V_2 = NULL;
	{
		intptr_t L_0 = ___snapshot1;
		InternalDataSnapshot_t1607276085 * L_1 = (InternalDataSnapshot_t1607276085 *)il2cpp_codegen_object_new(InternalDataSnapshot_t1607276085_il2cpp_TypeInfo_var);
		InternalDataSnapshot__ctor_m3155803892(L_1, L_0, (bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (EventHandler_1_t521163170 *)NULL;
		V_2 = (InternalValueListener_t1503646041 *)NULL;
		int32_t L_2 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_t1503646041_il2cpp_TypeInfo_var);
		bool L_3 = InternalValueListener_TryGetListener_m572059894(NULL /*static, unused*/, L_2, (InternalValueListener_t1503646041 **)(&V_2), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		InternalValueListener_t1503646041 * L_4 = V_2;
		NullCheck(L_4);
		EventHandler_1_t521163170 * L_5 = L_4->get_valueChangedImpl_7();
		V_1 = L_5;
	}

IL_0020:
	{
		EventHandler_1_t521163170 * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		EventHandler_1_t521163170 * L_7 = V_1;
		InternalDataSnapshot_t1607276085 * L_8 = V_0;
		InternalValueListener_t1503646041 * L_9 = V_2;
		NullCheck(L_9);
		FirebaseDatabase_t1344765733 * L_10 = L_9->get_database_6();
		DataSnapshot_t2895422505 * L_11 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_8, L_10, /*hidden argument*/NULL);
		ValueChangedEventArgs_t2597003737 * L_12 = (ValueChangedEventArgs_t2597003737 *)il2cpp_codegen_object_new(ValueChangedEventArgs_t2597003737_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m2733847627(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		EventHandler_1_Invoke_m3171920573(L_7, NULL, L_12, /*hidden argument*/EventHandler_1_Invoke_m3171920573_RuntimeMethod_var);
		goto IL_0049;
	}

IL_0043:
	{
		InternalDataSnapshot_t1607276085 * L_13 = V_0;
		NullCheck(L_13);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Database.Internal.InternalDataSnapshot::Dispose() */, L_13);
	}

IL_0049:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::OnCancelledHandler(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void InternalValueListener_OnCancelledHandler_m1875026310 (RuntimeObject * __this /* static, unused */, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_OnCancelledHandler_m1875026310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t521163170 * V_0 = NULL;
	InternalValueListener_t1503646041 * V_1 = NULL;
	{
		V_0 = (EventHandler_1_t521163170 *)NULL;
		int32_t L_0 = ___callbackId0;
		IL2CPP_RUNTIME_CLASS_INIT(InternalValueListener_t1503646041_il2cpp_TypeInfo_var);
		bool L_1 = InternalValueListener_TryGetListener_m572059894(NULL /*static, unused*/, L_0, (InternalValueListener_t1503646041 **)(&V_1), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		InternalValueListener_t1503646041 * L_2 = V_1;
		NullCheck(L_2);
		EventHandler_1_t521163170 * L_3 = L_2->get_valueChangedImpl_7();
		V_0 = L_3;
	}

IL_0016:
	{
		EventHandler_1_t521163170 * L_4 = V_0;
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		EventHandler_1_t521163170 * L_5 = V_0;
		int32_t L_6 = ___error1;
		String_t* L_7 = ___msg2;
		IL2CPP_RUNTIME_CLASS_INIT(DatabaseError_t3685099270_il2cpp_TypeInfo_var);
		DatabaseError_t3685099270 * L_8 = DatabaseError_FromError_m669180003(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		ValueChangedEventArgs_t2597003737 * L_9 = (ValueChangedEventArgs_t2597003737 *)il2cpp_codegen_object_new(ValueChangedEventArgs_t2597003737_il2cpp_TypeInfo_var);
		ValueChangedEventArgs__ctor_m4071829590(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		EventHandler_1_Invoke_m3171920573(L_5, NULL, L_9, /*hidden argument*/EventHandler_1_Invoke_m3171920573_RuntimeMethod_var);
	}

IL_002f:
	{
		return;
	}
}
// System.Void Firebase.Database.Internal.InternalValueListener::DestroyCppListener()
extern "C"  void InternalValueListener_DestroyCppListener_m1625115299 (InternalValueListener_t1503646041 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InternalValueListener_DestroyCppListener_m1625115299_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_cppListener_5();
		bool L_1 = IntPtr_op_Inequality_m3063970704(NULL /*static, unused*/, L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		intptr_t L_2 = __this->get_cppListener_5();
		InternalQuery_DestroyValueListener_m1709304708(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_cppListener_5((intptr_t)(0));
	}

IL_002b:
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
extern "C"  void DelegatePInvokeWrapper_OnCancelledDelegate_t3347641453 (OnCancelledDelegate_t3347641453 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, int32_t, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___msg2' to native representation
	char* ____msg2_marshaled = NULL;
	____msg2_marshaled = il2cpp_codegen_marshal_string(___msg2);

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___error1, ____msg2_marshaled);

	// Marshaling cleanup of parameter '___msg2' native representation
	il2cpp_codegen_marshal_free(____msg2_marshaled);
	____msg2_marshaled = NULL;

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnCancelledDelegate__ctor_m2828148934 (OnCancelledDelegate_t3347641453 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::Invoke(System.Int32,Firebase.Database.Internal.Error,System.String)
extern "C"  void OnCancelledDelegate_Invoke_m4180255669 (OnCancelledDelegate_t3347641453 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnCancelledDelegate_Invoke_m4180255669((OnCancelledDelegate_t3347641453 *)__this->get_prev_9(), ___callbackId0, ___error1, ___msg2, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	if (___methodIsStatic)
	{
		if (il2cpp_codegen_method_parameter_count(targetMethod) == 3)
		{
			// open
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(targetMethod, targetThis, ___callbackId0, ___error1, ___msg2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
					else
						VirtActionInvoker3< int32_t, int32_t, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___error1, ___msg2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___error1, ___msg2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::BeginInvoke(System.Int32,Firebase.Database.Internal.Error,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnCancelledDelegate_BeginInvoke_m847176706 (OnCancelledDelegate_t3347641453 * __this, int32_t ___callbackId0, int32_t ___error1, String_t* ___msg2, AsyncCallback_t3962456242 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnCancelledDelegate_BeginInvoke_m847176706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(Error_t704128997_il2cpp_TypeInfo_var, &___error1);
	__d_args[2] = ___msg2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnCancelledDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnCancelledDelegate_EndInvoke_m2756886951 (OnCancelledDelegate_t3347641453 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C"  void DelegatePInvokeWrapper_OnValueChangedDelegate_t3156556798 (OnValueChangedDelegate_t3156556798 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___callbackId0, ___snapshot1);

}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void OnValueChangedDelegate__ctor_m3897072874 (OnValueChangedDelegate_t3156556798 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::Invoke(System.Int32,System.IntPtr)
extern "C"  void OnValueChangedDelegate_Invoke_m3488926724 (OnValueChangedDelegate_t3156556798 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		OnValueChangedDelegate_Invoke_m3488926724((OnValueChangedDelegate_t3156556798 *)__this->get_prev_9(), ___callbackId0, ___snapshot1, method);
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
				typedef void (*FunctionPointerType) (RuntimeObject *, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
		else
		{
			// closed
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
	else
	{
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
					else
						GenericVirtActionInvoker2< int32_t, intptr_t >::Invoke(targetMethod, targetThis, ___callbackId0, ___snapshot1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___callbackId0, ___snapshot1);
					else
						VirtActionInvoker2< int32_t, intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___callbackId0, ___snapshot1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___callbackId0, ___snapshot1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* OnValueChangedDelegate_BeginInvoke_m3918677735 (OnValueChangedDelegate_t3156556798 * __this, int32_t ___callbackId0, intptr_t ___snapshot1, AsyncCallback_t3962456242 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnValueChangedDelegate_BeginInvoke_m3918677735_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &___callbackId0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___snapshot1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Database.Internal.InternalValueListener/OnValueChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void OnValueChangedDelegate_EndInvoke_m3668300247 (OnValueChangedDelegate_t3156556798 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// Firebase.Variant Firebase.Database.Internal.Utilities::MakeVariant(System.Object)
extern "C"  Variant_t1163908808 * Utilities_MakeVariant_m2743354503 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utilities_MakeVariant_m2743354503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Variant_t1163908808 * V_0 = NULL;
	ArgumentException_t132251570 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_0 = ___value0;
		Variant_t1163908808 * L_1 = Variant_FromObject_m3730095020(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_001f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t132251570_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000c;
		throw e;
	}

CATCH_000c:
	{ // begin catch(System.ArgumentException)
		V_1 = ((ArgumentException_t132251570 *)__exception_local);
		RuntimeObject * L_2 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral1193511177, L_2, /*hidden argument*/NULL);
		ArgumentException_t132251570 * L_4 = V_1;
		DatabaseException_t70968897 * L_5 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m3625098234(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, Utilities_MakeVariant_m2743354503_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_001f:
	{
		Variant_t1163908808 * L_6 = V_0;
		return L_6;
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
// System.Void Firebase.Database.Query::.ctor(Firebase.Database.Internal.InternalQuery,Firebase.Database.FirebaseDatabase)
extern "C"  void Query__ctor_m2412639475 (Query_t3567563289 * __this, InternalQuery_t2324573063 * ___internalQuery0, FirebaseDatabase_t1344765733 * ___database1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query__ctor_m2412639475_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		InternalQuery_t2324573063 * L_0 = ___internalQuery0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean Firebase.Database.Internal.InternalQuery::is_valid() */, L_0);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentException_t132251570 * L_2 = (ArgumentException_t132251570 *)il2cpp_codegen_object_new(ArgumentException_t132251570_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1312628991(L_2, _stringLiteral3521236056, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, Query__ctor_m2412639475_RuntimeMethod_var);
	}

IL_001c:
	{
		InternalQuery_t2324573063 * L_3 = ___internalQuery0;
		__this->set_internalQuery_0(L_3);
		FirebaseDatabase_t1344765733 * L_4 = ___database1;
		__this->set_database_1(L_4);
		InternalQuery_t2324573063 * L_5 = ___internalQuery0;
		FirebaseDatabase_t1344765733 * L_6 = ___database1;
		InternalValueListener_t1503646041 * L_7 = (InternalValueListener_t1503646041 *)il2cpp_codegen_object_new(InternalValueListener_t1503646041_il2cpp_TypeInfo_var);
		InternalValueListener__ctor_m3494926899(L_7, L_5, L_6, /*hidden argument*/NULL);
		__this->set_valueListener_2(L_7);
		InternalQuery_t2324573063 * L_8 = ___internalQuery0;
		FirebaseDatabase_t1344765733 * L_9 = ___database1;
		InternalChildListener_t3083312682 * L_10 = (InternalChildListener_t3083312682 *)il2cpp_codegen_object_new(InternalChildListener_t3083312682_il2cpp_TypeInfo_var);
		InternalChildListener__ctor_m2747023506(L_10, L_8, L_9, /*hidden argument*/NULL);
		__this->set_childListener_3(L_10);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::WrapInternalTask(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
extern "C"  Task_1_t5995384 * Query_WrapInternalTask_m364867575 (Query_t3567563289 * __this, Task_1_t3012816260 * ___it0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Query_WrapInternalTask_m364867575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * V_0 = NULL;
	{
		U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * L_0 = (U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 *)il2cpp_codegen_object_new(U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184_il2cpp_TypeInfo_var);
		U3CWrapInternalTaskU3Ec__AnonStorey0__ctor_m1833637869(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * L_2 = V_0;
		TaskCompletionSource_1_t1296145322 * L_3 = (TaskCompletionSource_1_t1296145322 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t1296145322_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m3028900620(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m3028900620_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_tcs_0(L_3);
		Task_1_t3012816260 * L_4 = ___it0;
		U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * L_5 = V_0;
		intptr_t L_6 = (intptr_t)U3CWrapInternalTaskU3Ec__AnonStorey0_U3CU3Em__0_m2997893672_RuntimeMethod_var;
		Action_1_t3185283855 * L_7 = (Action_1_t3185283855 *)il2cpp_codegen_object_new(Action_1_t3185283855_il2cpp_TypeInfo_var);
		Action_1__ctor_m335699739(L_7, L_5, L_6, /*hidden argument*/Action_1__ctor_m335699739_RuntimeMethod_var);
		NullCheck(L_4);
		Task_1_ContinueWith_m3490367399(L_4, L_7, /*hidden argument*/Task_1_ContinueWith_m3490367399_RuntimeMethod_var);
		U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t1296145322 * L_9 = L_8->get_tcs_0();
		NullCheck(L_9);
		Task_1_t5995384 * L_10 = TaskCompletionSource_1_get_Task_m3845061881(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_m3845061881_RuntimeMethod_var);
		return L_10;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Database.DataSnapshot> Firebase.Database.Query::GetValueAsync()
extern "C"  Task_1_t5995384 * Query_GetValueAsync_m3407678292 (Query_t3567563289 * __this, const RuntimeMethod* method)
{
	{
		InternalQuery_t2324573063 * L_0 = __this->get_internalQuery_0();
		NullCheck(L_0);
		Task_1_t3012816260 * L_1 = InternalQuery_GetValueAsync_m3194050225(L_0, /*hidden argument*/NULL);
		Task_1_t5995384 * L_2 = Query_WrapInternalTask_m364867575(__this, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0::.ctor()
extern "C"  void U3CWrapInternalTaskU3Ec__AnonStorey0__ctor_m1833637869 (U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.Query/<WrapInternalTask>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<Firebase.Database.Internal.InternalDataSnapshot>)
extern "C"  void U3CWrapInternalTaskU3Ec__AnonStorey0_U3CU3Em__0_m2997893672 (U3CWrapInternalTaskU3Ec__AnonStorey0_t4012574184 * __this, Task_1_t3012816260 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWrapInternalTaskU3Ec__AnonStorey0_U3CU3Em__0_m2997893672_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_t3012816260 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsFaulted_m4214781122(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		TaskCompletionSource_1_t1296145322 * L_2 = __this->get_tcs_0();
		Task_1_t3012816260 * L_3 = ___task0;
		NullCheck(L_3);
		AggregateException_t3586243216 * L_4 = Task_get_Exception_m1363338588(L_3, /*hidden argument*/NULL);
		DatabaseException_t70968897 * L_5 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m3625098234(L_5, _stringLiteral2392634446, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		TaskCompletionSource_1_SetException_m501643672(L_2, L_5, /*hidden argument*/TaskCompletionSource_1_SetException_m501643672_RuntimeMethod_var);
		goto IL_008c;
	}

IL_002b:
	{
		Task_1_t3012816260 * L_6 = ___task0;
		NullCheck(L_6);
		bool L_7 = Task_get_IsCanceled_m3056077931(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		TaskCompletionSource_1_t1296145322 * L_8 = __this->get_tcs_0();
		NullCheck(L_8);
		TaskCompletionSource_1_SetCanceled_m3751695653(L_8, /*hidden argument*/TaskCompletionSource_1_SetCanceled_m3751695653_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0046:
	{
		Task_1_t3012816260 * L_9 = ___task0;
		NullCheck(L_9);
		bool L_10 = Task_get_IsCompleted_m3967183205(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		TaskCompletionSource_1_t1296145322 * L_11 = __this->get_tcs_0();
		Task_1_t3012816260 * L_12 = ___task0;
		NullCheck(L_12);
		InternalDataSnapshot_t1607276085 * L_13 = Task_1_get_Result_m935389177(L_12, /*hidden argument*/Task_1_get_Result_m935389177_RuntimeMethod_var);
		Query_t3567563289 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		FirebaseDatabase_t1344765733 * L_15 = L_14->get_database_1();
		DataSnapshot_t2895422505 * L_16 = DataSnapshot_CreateSnapshot_m934492055(NULL /*static, unused*/, L_13, L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		TaskCompletionSource_1_SetResult_m1867160503(L_11, L_16, /*hidden argument*/TaskCompletionSource_1_SetResult_m1867160503_RuntimeMethod_var);
		goto IL_008c;
	}

IL_0077:
	{
		TaskCompletionSource_1_t1296145322 * L_17 = __this->get_tcs_0();
		DatabaseException_t70968897 * L_18 = (DatabaseException_t70968897 *)il2cpp_codegen_object_new(DatabaseException_t70968897_il2cpp_TypeInfo_var);
		DatabaseException__ctor_m448054621(L_18, _stringLiteral4035382732, /*hidden argument*/NULL);
		NullCheck(L_17);
		TaskCompletionSource_1_SetException_m501643672(L_17, L_18, /*hidden argument*/TaskCompletionSource_1_SetException_m501643672_RuntimeMethod_var);
	}

IL_008c:
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
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs__ctor_m2733847627 (ValueChangedEventArgs_t2597003737 * __this, DataSnapshot_t2895422505 * ___snapshot0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m2733847627_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		DataSnapshot_t2895422505 * L_0 = ___snapshot0;
		ValueChangedEventArgs_set_Snapshot_m595465497(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::.ctor(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs__ctor_m4071829590 (ValueChangedEventArgs_t2597003737 * __this, DatabaseError_t3685099270 * ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueChangedEventArgs__ctor_m4071829590_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_t3591816995_il2cpp_TypeInfo_var);
		EventArgs__ctor_m32674013(__this, /*hidden argument*/NULL);
		DatabaseError_t3685099270 * L_0 = ___error0;
		ValueChangedEventArgs_set_DatabaseError_m1966768770(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_Snapshot(Firebase.Database.DataSnapshot)
extern "C"  void ValueChangedEventArgs_set_Snapshot_m595465497 (ValueChangedEventArgs_t2597003737 * __this, DataSnapshot_t2895422505 * ___value0, const RuntimeMethod* method)
{
	{
		DataSnapshot_t2895422505 * L_0 = ___value0;
		__this->set_U3CSnapshotU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Database.ValueChangedEventArgs::set_DatabaseError(Firebase.Database.DatabaseError)
extern "C"  void ValueChangedEventArgs_set_DatabaseError_m1966768770 (ValueChangedEventArgs_t2597003737 * __this, DatabaseError_t3685099270 * ___value0, const RuntimeMethod* method)
{
	{
		DatabaseError_t3685099270 * L_0 = ___value0;
		__this->set_U3CDatabaseErrorU3Ek__BackingField_2(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
