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

// UsedAxis
struct UsedAxis_t1682297064;
// Waypoint
struct Waypoint_t1614450805;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.Transform
struct Transform_t3600365921;
// System.String
struct String_t;
// WaypointMover
struct WaypointMover_t492995286;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// WaypointMover/$Start$15
struct U24StartU2415_t1678141414;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds>
struct IEnumerator_1_t2131661719;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Object
struct Object_t631007953;
// Boo.Lang.GenericGenerator`1<UnityEngine.WaitForSeconds>
struct GenericGenerator_1_t2562178349;
// Boo.Lang.GenericGenerator`1<System.Object>
struct GenericGenerator_1_t3943193262;
// WaypointMover/$Start$15/$
struct U24_t3290484354;
// Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>
struct GenericGeneratorEnumerator_1_t2163727001;
// Boo.Lang.GenericGeneratorEnumerator`1<System.Object>
struct GenericGeneratorEnumerator_1_t3544741914;
// UnityEngine.Rigidbody
struct Rigidbody_t3916780224;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// WaypointsHolder
struct WaypointsHolder_t3313439174;
// UnityScript.Lang.Array
struct Array_t201190492;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.Void
struct Void_t1185182177;
// UnityEngine.Collider
struct Collider_t1773347010;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// Waypoint[]
struct WaypointU5BU5D_t1069915672;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Waypoint_OnDrawGizmos_m1890594993_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t WaypointMover__ctor_m2463556371_MetadataUsageId;
extern RuntimeClass* U24StartU2415_t1678141414_il2cpp_TypeInfo_var;
extern const uint32_t WaypointMover_Start_m961304449_MetadataUsageId;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeServices_t2098243569_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral2756806205;
extern const uint32_t WaypointMover_Update_m888595589_MetadataUsageId;
extern const uint32_t WaypointMover_SmoothLookAt2D_m2909215025_MetadataUsageId;
extern const RuntimeMethod* GenericGenerator_1__ctor_m3668034686_RuntimeMethod_var;
extern const uint32_t U24StartU2415__ctor_m3585172406_MetadataUsageId;
extern RuntimeClass* U24_t3290484354_il2cpp_TypeInfo_var;
extern const uint32_t U24StartU2415_GetEnumerator_m2388058835_MetadataUsageId;
extern const RuntimeMethod* GenericGeneratorEnumerator_1__ctor_m1741709125_RuntimeMethod_var;
extern const uint32_t U24__ctor_m569500378_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var;
extern const RuntimeMethod* GenericGeneratorEnumerator_1_Yield_m2392643255_RuntimeMethod_var;
extern const RuntimeMethod* GenericGeneratorEnumerator_1_YieldDefault_m3906696236_RuntimeMethod_var;
extern const uint32_t U24_MoveNext_m1996041879_MetadataUsageId;
extern const RuntimeType* Waypoint_t1614450805_0_0_0_var;
extern RuntimeClass* Array_t201190492_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* WaypointU5BU5D_t1069915672_il2cpp_TypeInfo_var;
extern RuntimeClass* Waypoint_t1614450805_il2cpp_TypeInfo_var;
extern const uint32_t WaypointsHolder_Start_m634307809_MetadataUsageId;
extern const uint32_t WaypointsHolder_AddWaypoint_m2765870964_MetadataUsageId;
extern const uint32_t WaypointsHolder_DeleteWaypoint_m3108876766_MetadataUsageId;
extern const uint32_t WaypointsHolder_OnDrawGizmos_m608013696_MetadataUsageId;

struct WaypointU5BU5D_t1069915672;
struct ComponentU5BU5D_t3294940482;


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
#ifndef GENERICGENERATOR_1_T2562178349_H
#define GENERICGENERATOR_1_T2562178349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGenerator`1<UnityEngine.WaitForSeconds>
struct  GenericGenerator_1_t2562178349  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICGENERATOR_1_T2562178349_H
#ifndef GENERICGENERATORENUMERATOR_1_T2163727001_H
#define GENERICGENERATORENUMERATOR_1_T2163727001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>
struct  GenericGeneratorEnumerator_1_t2163727001  : public RuntimeObject
{
public:
	// T Boo.Lang.GenericGeneratorEnumerator`1::_current
	WaitForSeconds_t1699091251 * ____current_0;
	// System.Int32 Boo.Lang.GenericGeneratorEnumerator`1::_state
	int32_t ____state_1;

public:
	inline static int32_t get_offset_of__current_0() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t2163727001, ____current_0)); }
	inline WaitForSeconds_t1699091251 * get__current_0() const { return ____current_0; }
	inline WaitForSeconds_t1699091251 ** get_address_of__current_0() { return &____current_0; }
	inline void set__current_0(WaitForSeconds_t1699091251 * value)
	{
		____current_0 = value;
		Il2CppCodeGenWriteBarrier((&____current_0), value);
	}

	inline static int32_t get_offset_of__state_1() { return static_cast<int32_t>(offsetof(GenericGeneratorEnumerator_1_t2163727001, ____state_1)); }
	inline int32_t get__state_1() const { return ____state_1; }
	inline int32_t* get_address_of__state_1() { return &____state_1; }
	inline void set__state_1(int32_t value)
	{
		____state_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERICGENERATORENUMERATOR_1_T2163727001_H
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
#ifndef USEDAXIS_T1682297064_H
#define USEDAXIS_T1682297064_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UsedAxis
struct  UsedAxis_t1682297064  : public RuntimeObject
{
public:
	// System.Boolean UsedAxis::x
	bool ___x_0;
	// System.Boolean UsedAxis::y
	bool ___y_1;
	// System.Boolean UsedAxis::z
	bool ___z_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(UsedAxis_t1682297064, ___x_0)); }
	inline bool get_x_0() const { return ___x_0; }
	inline bool* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(bool value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(UsedAxis_t1682297064, ___y_1)); }
	inline bool get_y_1() const { return ___y_1; }
	inline bool* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(bool value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(UsedAxis_t1682297064, ___z_2)); }
	inline bool get_z_2() const { return ___z_2; }
	inline bool* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(bool value)
	{
		___z_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USEDAXIS_T1682297064_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
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
#ifndef ARRAY_T201190492_H
#define ARRAY_T201190492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.Array
struct  Array_t201190492  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAY_T201190492_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef U24STARTU2415_T1678141414_H
#define U24STARTU2415_T1678141414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointMover/$Start$15
struct  U24StartU2415_t1678141414  : public GenericGenerator_1_t2562178349
{
public:
	// WaypointMover WaypointMover/$Start$15::$self_$22
	WaypointMover_t492995286 * ___U24self_U2422_0;

public:
	inline static int32_t get_offset_of_U24self_U2422_0() { return static_cast<int32_t>(offsetof(U24StartU2415_t1678141414, ___U24self_U2422_0)); }
	inline WaypointMover_t492995286 * get_U24self_U2422_0() const { return ___U24self_U2422_0; }
	inline WaypointMover_t492995286 ** get_address_of_U24self_U2422_0() { return &___U24self_U2422_0; }
	inline void set_U24self_U2422_0(WaypointMover_t492995286 * value)
	{
		___U24self_U2422_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2422_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24STARTU2415_T1678141414_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
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
#ifndef LOOPTYPE_T539454373_H
#define LOOPTYPE_T539454373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LoopType
struct  LoopType_t539454373 
{
public:
	// System.Int32 LoopType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoopType_t539454373, ___value___1)); }
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
#endif // LOOPTYPE_T539454373_H
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
#ifndef FOLLOWTYPE_T2028440648_H
#define FOLLOWTYPE_T2028440648_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FollowType
struct  FollowType_t2028440648 
{
public:
	// System.Int32 FollowType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FollowType_t2028440648, ___value___1)); }
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
#endif // FOLLOWTYPE_T2028440648_H
#ifndef RAYCASTHIT_T1056001966_H
#define RAYCASTHIT_T1056001966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RaycastHit
struct  RaycastHit_t1056001966 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t3722313464  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t3722313464  ___m_Normal_1;
	// System.Int32 UnityEngine.RaycastHit::m_FaceID
	int32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t2156229523  ___m_UV_4;
	// UnityEngine.Collider UnityEngine.RaycastHit::m_Collider
	Collider_t1773347010 * ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Point_0)); }
	inline Vector3_t3722313464  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t3722313464 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t3722313464  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Normal_1)); }
	inline Vector3_t3722313464  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t3722313464 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t3722313464  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_FaceID_2)); }
	inline int32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline int32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(int32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_UV_4)); }
	inline Vector2_t2156229523  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_t2156229523 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_t2156229523  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t1056001966, ___m_Collider_5)); }
	inline Collider_t1773347010 * get_m_Collider_5() const { return ___m_Collider_5; }
	inline Collider_t1773347010 ** get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(Collider_t1773347010 * value)
	{
		___m_Collider_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Collider_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_pinvoke
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
// Native definition for COM marshalling of UnityEngine.RaycastHit
struct RaycastHit_t1056001966_marshaled_com
{
	Vector3_t3722313464  ___m_Point_0;
	Vector3_t3722313464  ___m_Normal_1;
	int32_t ___m_FaceID_2;
	float ___m_Distance_3;
	Vector2_t2156229523  ___m_UV_4;
	Collider_t1773347010 * ___m_Collider_5;
};
#endif // RAYCASTHIT_T1056001966_H
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
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
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
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef U24_T3290484354_H
#define U24_T3290484354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointMover/$Start$15/$
struct  U24_t3290484354  : public GenericGeneratorEnumerator_1_t2163727001
{
public:
	// UnityEngine.Vector3 WaypointMover/$Start$15/$::$waypointPosition$16
	Vector3_t3722313464  ___U24waypointPositionU2416_2;
	// System.Int32 WaypointMover/$Start$15/$::$nearestWaypointID$17
	int32_t ___U24nearestWaypointIDU2417_3;
	// System.Single WaypointMover/$Start$15/$::$previousSmallestDistance$18
	float ___U24previousSmallestDistanceU2418_4;
	// System.Single WaypointMover/$Start$15/$::$distance$19
	float ___U24distanceU2419_5;
	// System.Int32 WaypointMover/$Start$15/$::$i$20
	int32_t ___U24iU2420_6;
	// WaypointMover WaypointMover/$Start$15/$::$self_$21
	WaypointMover_t492995286 * ___U24self_U2421_7;

public:
	inline static int32_t get_offset_of_U24waypointPositionU2416_2() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24waypointPositionU2416_2)); }
	inline Vector3_t3722313464  get_U24waypointPositionU2416_2() const { return ___U24waypointPositionU2416_2; }
	inline Vector3_t3722313464 * get_address_of_U24waypointPositionU2416_2() { return &___U24waypointPositionU2416_2; }
	inline void set_U24waypointPositionU2416_2(Vector3_t3722313464  value)
	{
		___U24waypointPositionU2416_2 = value;
	}

	inline static int32_t get_offset_of_U24nearestWaypointIDU2417_3() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24nearestWaypointIDU2417_3)); }
	inline int32_t get_U24nearestWaypointIDU2417_3() const { return ___U24nearestWaypointIDU2417_3; }
	inline int32_t* get_address_of_U24nearestWaypointIDU2417_3() { return &___U24nearestWaypointIDU2417_3; }
	inline void set_U24nearestWaypointIDU2417_3(int32_t value)
	{
		___U24nearestWaypointIDU2417_3 = value;
	}

	inline static int32_t get_offset_of_U24previousSmallestDistanceU2418_4() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24previousSmallestDistanceU2418_4)); }
	inline float get_U24previousSmallestDistanceU2418_4() const { return ___U24previousSmallestDistanceU2418_4; }
	inline float* get_address_of_U24previousSmallestDistanceU2418_4() { return &___U24previousSmallestDistanceU2418_4; }
	inline void set_U24previousSmallestDistanceU2418_4(float value)
	{
		___U24previousSmallestDistanceU2418_4 = value;
	}

	inline static int32_t get_offset_of_U24distanceU2419_5() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24distanceU2419_5)); }
	inline float get_U24distanceU2419_5() const { return ___U24distanceU2419_5; }
	inline float* get_address_of_U24distanceU2419_5() { return &___U24distanceU2419_5; }
	inline void set_U24distanceU2419_5(float value)
	{
		___U24distanceU2419_5 = value;
	}

	inline static int32_t get_offset_of_U24iU2420_6() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24iU2420_6)); }
	inline int32_t get_U24iU2420_6() const { return ___U24iU2420_6; }
	inline int32_t* get_address_of_U24iU2420_6() { return &___U24iU2420_6; }
	inline void set_U24iU2420_6(int32_t value)
	{
		___U24iU2420_6 = value;
	}

	inline static int32_t get_offset_of_U24self_U2421_7() { return static_cast<int32_t>(offsetof(U24_t3290484354, ___U24self_U2421_7)); }
	inline WaypointMover_t492995286 * get_U24self_U2421_7() const { return ___U24self_U2421_7; }
	inline WaypointMover_t492995286 ** get_address_of_U24self_U2421_7() { return &___U24self_U2421_7; }
	inline void set_U24self_U2421_7(WaypointMover_t492995286 * value)
	{
		___U24self_U2421_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24self_U2421_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U24_T3290484354_H
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
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
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
#ifndef RIGIDBODY_T3916780224_H
#define RIGIDBODY_T3916780224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rigidbody
struct  Rigidbody_t3916780224  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RIGIDBODY_T3916780224_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef WAYPOINTMOVER_T492995286_H
#define WAYPOINTMOVER_T492995286_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointMover
struct  WaypointMover_t492995286  : public MonoBehaviour_t3962482529
{
public:
	// WaypointsHolder WaypointMover::waypointsHolder
	WaypointsHolder_t3313439174 * ___waypointsHolder_2;
	// FollowType WaypointMover::followingType
	int32_t ___followingType_3;
	// LoopType WaypointMover::loopingType
	int32_t ___loopingType_4;
	// System.Boolean WaypointMover::MoveOnWayImmediately
	bool ___MoveOnWayImmediately_5;
	// System.Boolean WaypointMover::StartFromNearestWaypoint
	bool ___StartFromNearestWaypoint_6;
	// UsedAxis WaypointMover::ignorePositionAtAxis
	UsedAxis_t1682297064 * ___ignorePositionAtAxis_7;
	// System.Single WaypointMover::damping
	float ___damping_8;
	// System.Single WaypointMover::movementSpeed
	float ___movementSpeed_9;
	// System.Single WaypointMover::waypointActivationDistance
	float ___waypointActivationDistance_10;
	// System.Int32 WaypointMover::numberOfLoops
	int32_t ___numberOfLoops_11;
	// System.Single WaypointMover::preventCollisionDistance
	float ___preventCollisionDistance_12;
	// System.Boolean WaypointMover::smoothCollisionPreventing
	bool ___smoothCollisionPreventing_13;
	// System.Boolean WaypointMover::dynamicWaypointsUpdate
	bool ___dynamicWaypointsUpdate_14;
	// System.Int32 WaypointMover::currentWaypoint
	int32_t ___currentWaypoint_15;
	// System.Int32 WaypointMover::direction
	int32_t ___direction_16;
	// UnityEngine.Vector3 WaypointMover::velocity
	Vector3_t3722313464  ___velocity_17;
	// UnityEngine.Vector3 WaypointMover::targetPosition
	Vector3_t3722313464  ___targetPosition_18;
	// System.Single WaypointMover::delayTillTime
	float ___delayTillTime_19;
	// System.Int32 WaypointMover::loopNumber
	int32_t ___loopNumber_20;
	// System.Boolean WaypointMover::inMove
	bool ___inMove_21;
	// System.Boolean WaypointMover::suspended
	bool ___suspended_22;
	// System.Int32 WaypointMover::previousWaypoint
	int32_t ___previousWaypoint_23;
	// System.Single WaypointMover::initialMovementSpeed
	float ___initialMovementSpeed_24;
	// System.Boolean WaypointMover::callExitFunction
	bool ___callExitFunction_25;
	// System.Boolean WaypointMover::onWaypoint
	bool ___onWaypoint_26;

public:
	inline static int32_t get_offset_of_waypointsHolder_2() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___waypointsHolder_2)); }
	inline WaypointsHolder_t3313439174 * get_waypointsHolder_2() const { return ___waypointsHolder_2; }
	inline WaypointsHolder_t3313439174 ** get_address_of_waypointsHolder_2() { return &___waypointsHolder_2; }
	inline void set_waypointsHolder_2(WaypointsHolder_t3313439174 * value)
	{
		___waypointsHolder_2 = value;
		Il2CppCodeGenWriteBarrier((&___waypointsHolder_2), value);
	}

	inline static int32_t get_offset_of_followingType_3() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___followingType_3)); }
	inline int32_t get_followingType_3() const { return ___followingType_3; }
	inline int32_t* get_address_of_followingType_3() { return &___followingType_3; }
	inline void set_followingType_3(int32_t value)
	{
		___followingType_3 = value;
	}

	inline static int32_t get_offset_of_loopingType_4() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___loopingType_4)); }
	inline int32_t get_loopingType_4() const { return ___loopingType_4; }
	inline int32_t* get_address_of_loopingType_4() { return &___loopingType_4; }
	inline void set_loopingType_4(int32_t value)
	{
		___loopingType_4 = value;
	}

	inline static int32_t get_offset_of_MoveOnWayImmediately_5() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___MoveOnWayImmediately_5)); }
	inline bool get_MoveOnWayImmediately_5() const { return ___MoveOnWayImmediately_5; }
	inline bool* get_address_of_MoveOnWayImmediately_5() { return &___MoveOnWayImmediately_5; }
	inline void set_MoveOnWayImmediately_5(bool value)
	{
		___MoveOnWayImmediately_5 = value;
	}

	inline static int32_t get_offset_of_StartFromNearestWaypoint_6() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___StartFromNearestWaypoint_6)); }
	inline bool get_StartFromNearestWaypoint_6() const { return ___StartFromNearestWaypoint_6; }
	inline bool* get_address_of_StartFromNearestWaypoint_6() { return &___StartFromNearestWaypoint_6; }
	inline void set_StartFromNearestWaypoint_6(bool value)
	{
		___StartFromNearestWaypoint_6 = value;
	}

	inline static int32_t get_offset_of_ignorePositionAtAxis_7() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___ignorePositionAtAxis_7)); }
	inline UsedAxis_t1682297064 * get_ignorePositionAtAxis_7() const { return ___ignorePositionAtAxis_7; }
	inline UsedAxis_t1682297064 ** get_address_of_ignorePositionAtAxis_7() { return &___ignorePositionAtAxis_7; }
	inline void set_ignorePositionAtAxis_7(UsedAxis_t1682297064 * value)
	{
		___ignorePositionAtAxis_7 = value;
		Il2CppCodeGenWriteBarrier((&___ignorePositionAtAxis_7), value);
	}

	inline static int32_t get_offset_of_damping_8() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___damping_8)); }
	inline float get_damping_8() const { return ___damping_8; }
	inline float* get_address_of_damping_8() { return &___damping_8; }
	inline void set_damping_8(float value)
	{
		___damping_8 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_9() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___movementSpeed_9)); }
	inline float get_movementSpeed_9() const { return ___movementSpeed_9; }
	inline float* get_address_of_movementSpeed_9() { return &___movementSpeed_9; }
	inline void set_movementSpeed_9(float value)
	{
		___movementSpeed_9 = value;
	}

	inline static int32_t get_offset_of_waypointActivationDistance_10() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___waypointActivationDistance_10)); }
	inline float get_waypointActivationDistance_10() const { return ___waypointActivationDistance_10; }
	inline float* get_address_of_waypointActivationDistance_10() { return &___waypointActivationDistance_10; }
	inline void set_waypointActivationDistance_10(float value)
	{
		___waypointActivationDistance_10 = value;
	}

	inline static int32_t get_offset_of_numberOfLoops_11() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___numberOfLoops_11)); }
	inline int32_t get_numberOfLoops_11() const { return ___numberOfLoops_11; }
	inline int32_t* get_address_of_numberOfLoops_11() { return &___numberOfLoops_11; }
	inline void set_numberOfLoops_11(int32_t value)
	{
		___numberOfLoops_11 = value;
	}

	inline static int32_t get_offset_of_preventCollisionDistance_12() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___preventCollisionDistance_12)); }
	inline float get_preventCollisionDistance_12() const { return ___preventCollisionDistance_12; }
	inline float* get_address_of_preventCollisionDistance_12() { return &___preventCollisionDistance_12; }
	inline void set_preventCollisionDistance_12(float value)
	{
		___preventCollisionDistance_12 = value;
	}

	inline static int32_t get_offset_of_smoothCollisionPreventing_13() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___smoothCollisionPreventing_13)); }
	inline bool get_smoothCollisionPreventing_13() const { return ___smoothCollisionPreventing_13; }
	inline bool* get_address_of_smoothCollisionPreventing_13() { return &___smoothCollisionPreventing_13; }
	inline void set_smoothCollisionPreventing_13(bool value)
	{
		___smoothCollisionPreventing_13 = value;
	}

	inline static int32_t get_offset_of_dynamicWaypointsUpdate_14() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___dynamicWaypointsUpdate_14)); }
	inline bool get_dynamicWaypointsUpdate_14() const { return ___dynamicWaypointsUpdate_14; }
	inline bool* get_address_of_dynamicWaypointsUpdate_14() { return &___dynamicWaypointsUpdate_14; }
	inline void set_dynamicWaypointsUpdate_14(bool value)
	{
		___dynamicWaypointsUpdate_14 = value;
	}

	inline static int32_t get_offset_of_currentWaypoint_15() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___currentWaypoint_15)); }
	inline int32_t get_currentWaypoint_15() const { return ___currentWaypoint_15; }
	inline int32_t* get_address_of_currentWaypoint_15() { return &___currentWaypoint_15; }
	inline void set_currentWaypoint_15(int32_t value)
	{
		___currentWaypoint_15 = value;
	}

	inline static int32_t get_offset_of_direction_16() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___direction_16)); }
	inline int32_t get_direction_16() const { return ___direction_16; }
	inline int32_t* get_address_of_direction_16() { return &___direction_16; }
	inline void set_direction_16(int32_t value)
	{
		___direction_16 = value;
	}

	inline static int32_t get_offset_of_velocity_17() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___velocity_17)); }
	inline Vector3_t3722313464  get_velocity_17() const { return ___velocity_17; }
	inline Vector3_t3722313464 * get_address_of_velocity_17() { return &___velocity_17; }
	inline void set_velocity_17(Vector3_t3722313464  value)
	{
		___velocity_17 = value;
	}

	inline static int32_t get_offset_of_targetPosition_18() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___targetPosition_18)); }
	inline Vector3_t3722313464  get_targetPosition_18() const { return ___targetPosition_18; }
	inline Vector3_t3722313464 * get_address_of_targetPosition_18() { return &___targetPosition_18; }
	inline void set_targetPosition_18(Vector3_t3722313464  value)
	{
		___targetPosition_18 = value;
	}

	inline static int32_t get_offset_of_delayTillTime_19() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___delayTillTime_19)); }
	inline float get_delayTillTime_19() const { return ___delayTillTime_19; }
	inline float* get_address_of_delayTillTime_19() { return &___delayTillTime_19; }
	inline void set_delayTillTime_19(float value)
	{
		___delayTillTime_19 = value;
	}

	inline static int32_t get_offset_of_loopNumber_20() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___loopNumber_20)); }
	inline int32_t get_loopNumber_20() const { return ___loopNumber_20; }
	inline int32_t* get_address_of_loopNumber_20() { return &___loopNumber_20; }
	inline void set_loopNumber_20(int32_t value)
	{
		___loopNumber_20 = value;
	}

	inline static int32_t get_offset_of_inMove_21() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___inMove_21)); }
	inline bool get_inMove_21() const { return ___inMove_21; }
	inline bool* get_address_of_inMove_21() { return &___inMove_21; }
	inline void set_inMove_21(bool value)
	{
		___inMove_21 = value;
	}

	inline static int32_t get_offset_of_suspended_22() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___suspended_22)); }
	inline bool get_suspended_22() const { return ___suspended_22; }
	inline bool* get_address_of_suspended_22() { return &___suspended_22; }
	inline void set_suspended_22(bool value)
	{
		___suspended_22 = value;
	}

	inline static int32_t get_offset_of_previousWaypoint_23() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___previousWaypoint_23)); }
	inline int32_t get_previousWaypoint_23() const { return ___previousWaypoint_23; }
	inline int32_t* get_address_of_previousWaypoint_23() { return &___previousWaypoint_23; }
	inline void set_previousWaypoint_23(int32_t value)
	{
		___previousWaypoint_23 = value;
	}

	inline static int32_t get_offset_of_initialMovementSpeed_24() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___initialMovementSpeed_24)); }
	inline float get_initialMovementSpeed_24() const { return ___initialMovementSpeed_24; }
	inline float* get_address_of_initialMovementSpeed_24() { return &___initialMovementSpeed_24; }
	inline void set_initialMovementSpeed_24(float value)
	{
		___initialMovementSpeed_24 = value;
	}

	inline static int32_t get_offset_of_callExitFunction_25() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___callExitFunction_25)); }
	inline bool get_callExitFunction_25() const { return ___callExitFunction_25; }
	inline bool* get_address_of_callExitFunction_25() { return &___callExitFunction_25; }
	inline void set_callExitFunction_25(bool value)
	{
		___callExitFunction_25 = value;
	}

	inline static int32_t get_offset_of_onWaypoint_26() { return static_cast<int32_t>(offsetof(WaypointMover_t492995286, ___onWaypoint_26)); }
	inline bool get_onWaypoint_26() const { return ___onWaypoint_26; }
	inline bool* get_address_of_onWaypoint_26() { return &___onWaypoint_26; }
	inline void set_onWaypoint_26(bool value)
	{
		___onWaypoint_26 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTMOVER_T492995286_H
#ifndef WAYPOINTSHOLDER_T3313439174_H
#define WAYPOINTSHOLDER_T3313439174_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WaypointsHolder
struct  WaypointsHolder_t3313439174  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color WaypointsHolder::color
	Color_t2555686324  ___color_2;
	// Waypoint[] WaypointsHolder::waypoints
	WaypointU5BU5D_t1069915672* ___waypoints_3;
	// System.Boolean WaypointsHolder::colorizeWaypoints
	bool ___colorizeWaypoints_4;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(WaypointsHolder_t3313439174, ___color_2)); }
	inline Color_t2555686324  get_color_2() const { return ___color_2; }
	inline Color_t2555686324 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2555686324  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_waypoints_3() { return static_cast<int32_t>(offsetof(WaypointsHolder_t3313439174, ___waypoints_3)); }
	inline WaypointU5BU5D_t1069915672* get_waypoints_3() const { return ___waypoints_3; }
	inline WaypointU5BU5D_t1069915672** get_address_of_waypoints_3() { return &___waypoints_3; }
	inline void set_waypoints_3(WaypointU5BU5D_t1069915672* value)
	{
		___waypoints_3 = value;
		Il2CppCodeGenWriteBarrier((&___waypoints_3), value);
	}

	inline static int32_t get_offset_of_colorizeWaypoints_4() { return static_cast<int32_t>(offsetof(WaypointsHolder_t3313439174, ___colorizeWaypoints_4)); }
	inline bool get_colorizeWaypoints_4() const { return ___colorizeWaypoints_4; }
	inline bool* get_address_of_colorizeWaypoints_4() { return &___colorizeWaypoints_4; }
	inline void set_colorizeWaypoints_4(bool value)
	{
		___colorizeWaypoints_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTSHOLDER_T3313439174_H
#ifndef WAYPOINT_T1614450805_H
#define WAYPOINT_T1614450805_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Waypoint
struct  Waypoint_t1614450805  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Color Waypoint::color
	Color_t2555686324  ___color_2;
	// System.Single Waypoint::radius
	float ___radius_3;
	// System.String Waypoint::iconName
	String_t* ___iconName_4;
	// System.Single Waypoint::delay
	float ___delay_5;
	// System.String Waypoint::callFunction
	String_t* ___callFunction_6;
	// System.String Waypoint::callExitFunction
	String_t* ___callExitFunction_7;
	// System.Single Waypoint::newMoverSpeed
	float ___newMoverSpeed_8;

public:
	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___color_2)); }
	inline Color_t2555686324  get_color_2() const { return ___color_2; }
	inline Color_t2555686324 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2555686324  value)
	{
		___color_2 = value;
	}

	inline static int32_t get_offset_of_radius_3() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___radius_3)); }
	inline float get_radius_3() const { return ___radius_3; }
	inline float* get_address_of_radius_3() { return &___radius_3; }
	inline void set_radius_3(float value)
	{
		___radius_3 = value;
	}

	inline static int32_t get_offset_of_iconName_4() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___iconName_4)); }
	inline String_t* get_iconName_4() const { return ___iconName_4; }
	inline String_t** get_address_of_iconName_4() { return &___iconName_4; }
	inline void set_iconName_4(String_t* value)
	{
		___iconName_4 = value;
		Il2CppCodeGenWriteBarrier((&___iconName_4), value);
	}

	inline static int32_t get_offset_of_delay_5() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___delay_5)); }
	inline float get_delay_5() const { return ___delay_5; }
	inline float* get_address_of_delay_5() { return &___delay_5; }
	inline void set_delay_5(float value)
	{
		___delay_5 = value;
	}

	inline static int32_t get_offset_of_callFunction_6() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___callFunction_6)); }
	inline String_t* get_callFunction_6() const { return ___callFunction_6; }
	inline String_t** get_address_of_callFunction_6() { return &___callFunction_6; }
	inline void set_callFunction_6(String_t* value)
	{
		___callFunction_6 = value;
		Il2CppCodeGenWriteBarrier((&___callFunction_6), value);
	}

	inline static int32_t get_offset_of_callExitFunction_7() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___callExitFunction_7)); }
	inline String_t* get_callExitFunction_7() const { return ___callExitFunction_7; }
	inline String_t** get_address_of_callExitFunction_7() { return &___callExitFunction_7; }
	inline void set_callExitFunction_7(String_t* value)
	{
		___callExitFunction_7 = value;
		Il2CppCodeGenWriteBarrier((&___callExitFunction_7), value);
	}

	inline static int32_t get_offset_of_newMoverSpeed_8() { return static_cast<int32_t>(offsetof(Waypoint_t1614450805, ___newMoverSpeed_8)); }
	inline float get_newMoverSpeed_8() const { return ___newMoverSpeed_8; }
	inline float* get_address_of_newMoverSpeed_8() { return &___newMoverSpeed_8; }
	inline void set_newMoverSpeed_8(float value)
	{
		___newMoverSpeed_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINT_T1614450805_H
// Waypoint[]
struct WaypointU5BU5D_t1069915672  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Waypoint_t1614450805 * m_Items[1];

public:
	inline Waypoint_t1614450805 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Waypoint_t1614450805 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Waypoint_t1614450805 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Waypoint_t1614450805 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Waypoint_t1614450805 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Waypoint_t1614450805 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Component[]
struct ComponentU5BU5D_t3294940482  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Component_t1923634451 * m_Items[1];

public:
	inline Component_t1923634451 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Component_t1923634451 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Component_t1923634451 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Component_t1923634451 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void Boo.Lang.GenericGenerator`1<System.Object>::.ctor()
extern "C"  void GenericGenerator_1__ctor_m2266291476_gshared (GenericGenerator_1_t3943193262 * __this, const RuntimeMethod* method);
// System.Void Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::.ctor()
extern "C"  void GenericGeneratorEnumerator_1__ctor_m335336636_gshared (GenericGeneratorEnumerator_1_t3544741914 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::Yield(System.Int32,!0)
extern "C"  bool GenericGeneratorEnumerator_1_Yield_m588388320_gshared (GenericGeneratorEnumerator_1_t3544741914 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<System.Object>::YieldDefault(System.Int32)
extern "C"  bool GenericGeneratorEnumerator_1_YieldDefault_m2857677239_gshared (GenericGeneratorEnumerator_1_t3544741914 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
extern "C"  void Gizmos_set_color_m3399737545 (RuntimeObject * __this /* static, unused */, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawSphere(UnityEngine.Vector3,System.Single)
extern "C"  void Gizmos_DrawSphere_m492648055 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Inequality(System.String,System.String)
extern "C"  bool String_op_Inequality_m215368492 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawIcon(UnityEngine.Vector3,System.String,System.Boolean)
extern "C"  void Gizmos_DrawIcon_m1426684253 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, String_t* p1, bool p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void WaypointMover/$Start$15::.ctor(WaypointMover)
extern "C"  void U24StartU2415__ctor_m3585172406 (U24StartU2415_t1678141414 * __this, WaypointMover_t492995286 * ___self_0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> WaypointMover/$Start$15::GetEnumerator()
extern "C"  RuntimeObject* U24StartU2415_GetEnumerator_m2388058835 (U24StartU2415_t1678141414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
extern "C"  Vector3_t3722313464  Transform_get_forward_m747522392 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::CapsuleCast(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_CapsuleCast_m708192531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, Vector3_t3722313464  p3, RaycastHit_t1056001966 * p4, float p5, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern "C"  Vector3_t3722313464  RaycastHit_get_point_m2236647085 (RaycastHit_t1056001966 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Distance_m886789632 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  bool Vector3_op_Inequality_m315980366 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
extern "C"  void Transform_LookAt_m3649447396 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_time()
extern "C"  float Time_get_time_m2907476221 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
extern "C"  void Component_SendMessage_m1441147224 (Component_t1923634451 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Object::get_name()
extern "C"  String_t* Object_get_name_m4211327027 (Object_t631007953 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Runtime.RuntimeServices::op_Addition(System.String,System.String)
extern "C"  String_t* RuntimeServices_op_Addition_m583005490 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3752629331 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_Subtraction_m3073674971 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
extern "C"  Quaternion_t2301928331  Quaternion_LookRotation_m4040767668 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
extern "C"  Quaternion_t2301928331  Transform_get_rotation_m3502953881 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t2301928331  Quaternion_Slerp_m1234055455 (RuntimeObject * __this /* static, unused */, Quaternion_t2301928331  p0, Quaternion_t2301928331  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
extern "C"  void Transform_set_rotation_m3524318132 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
extern "C"  Vector3_t3722313464  Vector3_get_forward_m3100859705 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
extern "C"  void Transform_Translate_m1810197270 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C"  Vector3_t3722313464  Vector3_get_up_m3584168373 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
extern "C"  void Transform_Rotate_m1749346957 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Vector3_op_UnaryNegation_m1951478815 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_MoveTowards_m2786395547 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
extern "C"  Vector3_t3722313464  Vector3_SmoothDamp_m1123559802 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, Vector3_t3722313464 * p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
extern "C"  Vector3_t3722313464  Vector3_get_right_m1913784872 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
extern "C"  Vector3_t3722313464  Transform_get_right_m2535262102 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Vector3::Angle(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float Vector3_Angle_m3731191531 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
extern "C"  Vector3_t3722313464  Quaternion_get_eulerAngles_m3425202016 (Quaternion_t2301928331 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Quaternion::set_eulerAngles(UnityEngine.Vector3)
extern "C"  void Quaternion_set_eulerAngles_m793195291 (Quaternion_t2301928331 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Transform_InverseTransformPoint_m1343916000 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::LerpAngle(System.Single,System.Single,System.Single)
extern "C"  float Mathf_LerpAngle_m295352085 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
extern "C"  void Transform_Rotate_m3172098886 (Transform_t3600365921 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.GenericGenerator`1<UnityEngine.WaitForSeconds>::.ctor()
#define GenericGenerator_1__ctor_m3668034686(__this, method) ((  void (*) (GenericGenerator_1_t2562178349 *, const RuntimeMethod*))GenericGenerator_1__ctor_m2266291476_gshared)(__this, method)
// System.Void WaypointMover/$Start$15/$::.ctor(WaypointMover)
extern "C"  void U24__ctor_m569500378 (U24_t3290484354 * __this, WaypointMover_t492995286 * ___self_0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>::.ctor()
#define GenericGeneratorEnumerator_1__ctor_m1741709125(__this, method) ((  void (*) (GenericGeneratorEnumerator_1_t2163727001 *, const RuntimeMethod*))GenericGeneratorEnumerator_1__ctor_m335336636_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t3916780224_m279685075(__this, method) ((  Rigidbody_t3916780224 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
extern "C"  void Rigidbody_set_freezeRotation_m754206839 (Rigidbody_t3916780224 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>::Yield(System.Int32,!0)
#define GenericGeneratorEnumerator_1_Yield_m2392643255(__this, p0, p1, method) ((  bool (*) (GenericGeneratorEnumerator_1_t2163727001 *, int32_t, WaitForSeconds_t1699091251 *, const RuntimeMethod*))GenericGeneratorEnumerator_1_Yield_m588388320_gshared)(__this, p0, p1, method)
// System.Boolean Boo.Lang.GenericGeneratorEnumerator`1<UnityEngine.WaitForSeconds>::YieldDefault(System.Int32)
#define GenericGeneratorEnumerator_1_YieldDefault_m3906696236(__this, p0, method) ((  bool (*) (GenericGeneratorEnumerator_1_t2163727001 *, int32_t, const RuntimeMethod*))GenericGeneratorEnumerator_1_YieldDefault_m2857677239_gshared)(__this, p0, method)
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C"  void Color__ctor_m2943235014 (Color_t2555686324 * __this, float p0, float p1, float p2, float p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Transform::get_childCount()
extern "C"  int32_t Transform_get_childCount_m3145433196 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::.ctor(System.Int32)
extern "C"  void Array__ctor_m2555122516 (Array_t201190492 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  RuntimeArray * Array_ToBuiltin_m286161891 (Array_t201190492 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsInChildren(System.Type)
extern "C"  ComponentU5BU5D_t3294940482* Component_GetComponentsInChildren_m4100240514 (Component_t1923634451 * __this, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::.ctor(System.Collections.IEnumerable)
extern "C"  void Array__ctor_m2237513838 (Array_t201190492 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m219024605 (Array_t201190492 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::set_length(System.Int32)
extern "C"  void Array_set_length_m3735173719 (Array_t201190492 * __this, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Waypoint::.ctor()
extern "C"  void Waypoint__ctor_m182443051 (Waypoint_t1614450805 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gizmos::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Gizmos_DrawLine_m3273476787 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void UsedAxis::.ctor()
extern "C"  void UsedAxis__ctor_m331859356 (UsedAxis_t1682297064 * __this, const RuntimeMethod* method)
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
// System.Void Waypoint::.ctor()
extern "C"  void Waypoint__ctor_m182443051 (Waypoint_t1614450805 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_radius_3((0.25f));
		return;
	}
}
// System.Void Waypoint::OnDrawGizmos()
extern "C"  void Waypoint_OnDrawGizmos_m1890594993 (Waypoint_t1614450805 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Waypoint_OnDrawGizmos_m1890594993_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Color_t2555686324  L_0 = __this->get_color_2();
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_3();
		Gizmos_DrawSphere_m492648055(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		String_t* L_4 = __this->get_iconName_4();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_6 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_008d;
		}
	}
	{
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_x_1();
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t3722313464  L_11 = Transform_get_position_m36019626(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		float L_12 = (&V_1)->get_y_2();
		float L_13 = __this->get_radius_3();
		Transform_t3600365921 * L_14 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t3722313464  L_15 = Transform_get_position_m36019626(L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		float L_16 = (&V_2)->get_z_3();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), L_9, ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(1.5f))))), L_16, /*hidden argument*/NULL);
		String_t* L_18 = __this->get_iconName_4();
		Gizmos_DrawIcon_m1426684253(NULL /*static, unused*/, L_17, L_18, (bool)1, /*hidden argument*/NULL);
	}

IL_008d:
	{
		return;
	}
}
// System.Void Waypoint::Main()
extern "C"  void Waypoint_Main_m3836891269 (Waypoint_t1614450805 * __this, const RuntimeMethod* method)
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
// System.Void WaypointMover::.ctor()
extern "C"  void WaypointMover__ctor_m2463556371 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointMover__ctor_m2463556371_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		__this->set_damping_8((3.0f));
		__this->set_movementSpeed_9((5.0f));
		__this->set_waypointActivationDistance_10((1.0f));
		__this->set_direction_16(1);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_velocity_17(L_0);
		__this->set_loopNumber_20(1);
		return;
	}
}
// System.Collections.IEnumerator WaypointMover::Start()
extern "C"  RuntimeObject* WaypointMover_Start_m961304449 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointMover_Start_m961304449_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U24StartU2415_t1678141414 * L_0 = (U24StartU2415_t1678141414 *)il2cpp_codegen_object_new(U24StartU2415_t1678141414_il2cpp_TypeInfo_var);
		U24StartU2415__ctor_m3585172406(L_0, __this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = U24StartU2415_GetEnumerator_m2388058835(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void WaypointMover::Update()
extern "C"  void WaypointMover_Update_m888595589 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointMover_Update_m888595589_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RaycastHit_t1056001966  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	int32_t V_4 = 0;
	Quaternion_t2301928331  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_t3722313464  V_6;
	memset(&V_6, 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Quaternion_t2301928331  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t3722313464  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float V_11 = 0.0f;
	Quaternion_t2301928331  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_t3722313464  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Quaternion_t2301928331  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_t3722313464  V_15;
	memset(&V_15, 0, sizeof(V_15));
	float V_16 = 0.0f;
	Vector3_t3722313464  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Quaternion_t2301928331  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Quaternion_t2301928331  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Vector3_t3722313464  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Quaternion_t2301928331  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Vector3_t3722313464  V_22;
	memset(&V_22, 0, sizeof(V_22));
	float V_23 = 0.0f;
	Vector3_t3722313464  V_24;
	memset(&V_24, 0, sizeof(V_24));
	Quaternion_t2301928331  V_25;
	memset(&V_25, 0, sizeof(V_25));
	WaypointMover_t492995286 * G_B30_0 = NULL;
	WaypointMover_t492995286 * G_B29_0 = NULL;
	int32_t G_B31_0 = 0;
	WaypointMover_t492995286 * G_B31_1 = NULL;
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_1), sizeof(RaycastHit_t1056001966 ));
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = Transform_get_position_m36019626(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		Vector3_t3722313464  L_2 = V_2;
		V_3 = L_2;
		float L_3 = __this->get_preventCollisionDistance_12();
		if ((((float)L_3) <= ((float)(((float)((float)0))))))
		{
			goto IL_00b1;
		}
	}
	{
		Vector3_t3722313464  L_4 = V_2;
		Vector3_t3722313464  L_5 = V_3;
		Transform_t3600365921 * L_6 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_forward_m747522392(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_preventCollisionDistance_12();
		bool L_9 = Physics_CapsuleCast_m708192531(NULL /*static, unused*/, L_4, L_5, (0.5f), L_7, (&V_1), L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		bool L_10 = __this->get_smoothCollisionPreventing_13();
		if (L_10)
		{
			goto IL_005b;
		}
	}
	{
		V_0 = (bool)1;
		goto IL_00a0;
	}

IL_005b:
	{
		float L_11 = __this->get_initialMovementSpeed_24();
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = RaycastHit_get_point_m2236647085((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_15 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_preventCollisionDistance_12();
		__this->set_movementSpeed_9(((float)((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_15))/(float)L_16)));
		float L_17 = __this->get_movementSpeed_9();
		float L_18 = __this->get_initialMovementSpeed_24();
		float L_19 = __this->get_preventCollisionDistance_12();
		if ((((float)L_17) >= ((float)((float)((float)L_18/(float)L_19)))))
		{
			goto IL_00a0;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_00a0:
	{
		goto IL_00b1;
	}

IL_00a5:
	{
		float L_20 = __this->get_initialMovementSpeed_24();
		__this->set_movementSpeed_9(L_20);
	}

IL_00b1:
	{
		bool L_21 = __this->get_dynamicWaypointsUpdate_14();
		if (!L_21)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_22 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_22) < ((int32_t)0)))
		{
			goto IL_0143;
		}
	}
	{
		Vector3_t3722313464  L_23 = __this->get_targetPosition_18();
		WaypointsHolder_t3313439174 * L_24 = __this->get_waypointsHolder_2();
		NullCheck(L_24);
		WaypointU5BU5D_t1069915672* L_25 = L_24->get_waypoints_3();
		int32_t L_26 = __this->get_currentWaypoint_15();
		NullCheck(L_25);
		int32_t L_27 = L_26;
		Waypoint_t1614450805 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		GameObject_t1113636619 * L_29 = Component_get_gameObject_m442555142(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_t3600365921 * L_30 = GameObject_get_transform_m1369836730(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t3722313464  L_31 = Transform_get_position_m36019626(L_30, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		bool L_32 = Vector3_op_Inequality_m315980366(NULL /*static, unused*/, L_23, L_31, /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0143;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_33 = __this->get_waypointsHolder_2();
		NullCheck(L_33);
		WaypointU5BU5D_t1069915672* L_34 = L_33->get_waypoints_3();
		int32_t L_35 = __this->get_currentWaypoint_15();
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Waypoint_t1614450805 * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		GameObject_t1113636619 * L_38 = Component_get_gameObject_m442555142(L_37, /*hidden argument*/NULL);
		NullCheck(L_38);
		Transform_t3600365921 * L_39 = GameObject_get_transform_m1369836730(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		Vector3_t3722313464  L_40 = Transform_get_position_m36019626(L_39, /*hidden argument*/NULL);
		__this->set_targetPosition_18(L_40);
		Transform_t3600365921 * L_41 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_42 = __this->get_targetPosition_18();
		NullCheck(L_41);
		Transform_LookAt_m3649447396(L_41, L_42, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = __this->get_targetPosition_18();
		Vector3_t3722313464  L_44 = VirtFuncInvoker1< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(15 /* UnityEngine.Vector3 WaypointMover::IgnorePositionByAxis(UnityEngine.Vector3) */, __this, L_43);
		__this->set_targetPosition_18(L_44);
	}

IL_0143:
	{
		bool L_45 = __this->get_suspended_22();
		if (L_45)
		{
			goto IL_089a;
		}
	}
	{
		bool L_46 = V_0;
		if (L_46)
		{
			goto IL_089a;
		}
	}
	{
		int32_t L_47 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_47) < ((int32_t)0)))
		{
			goto IL_089a;
		}
	}
	{
		float L_48 = __this->get_delayTillTime_19();
		float L_49 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		if ((((float)L_48) >= ((float)L_49)))
		{
			goto IL_089a;
		}
	}
	{
		__this->set_inMove_21((bool)1);
		Transform_t3600365921 * L_50 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		Vector3_t3722313464  L_51 = Transform_get_position_m36019626(L_50, /*hidden argument*/NULL);
		Vector3_t3722313464  L_52 = __this->get_targetPosition_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_53 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_51, L_52, /*hidden argument*/NULL);
		float L_54 = __this->get_waypointActivationDistance_10();
		if ((((float)L_53) >= ((float)L_54)))
		{
			goto IL_0431;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_55 = __this->get_waypointsHolder_2();
		NullCheck(L_55);
		WaypointU5BU5D_t1069915672* L_56 = L_55->get_waypoints_3();
		int32_t L_57 = __this->get_currentWaypoint_15();
		NullCheck(L_56);
		int32_t L_58 = L_57;
		Waypoint_t1614450805 * L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		float L_60 = L_59->get_delay_5();
		if ((((float)L_60) <= ((float)(((float)((float)0))))))
		{
			goto IL_01d9;
		}
	}
	{
		float L_61 = Time_get_time_m2907476221(NULL /*static, unused*/, /*hidden argument*/NULL);
		WaypointsHolder_t3313439174 * L_62 = __this->get_waypointsHolder_2();
		NullCheck(L_62);
		WaypointU5BU5D_t1069915672* L_63 = L_62->get_waypoints_3();
		int32_t L_64 = __this->get_currentWaypoint_15();
		NullCheck(L_63);
		int32_t L_65 = L_64;
		Waypoint_t1614450805 * L_66 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		float L_67 = L_66->get_delay_5();
		__this->set_delayTillTime_19(((float)il2cpp_codegen_add((float)L_61, (float)L_67)));
	}

IL_01d9:
	{
		WaypointsHolder_t3313439174 * L_68 = __this->get_waypointsHolder_2();
		NullCheck(L_68);
		WaypointU5BU5D_t1069915672* L_69 = L_68->get_waypoints_3();
		int32_t L_70 = __this->get_currentWaypoint_15();
		NullCheck(L_69);
		int32_t L_71 = L_70;
		Waypoint_t1614450805 * L_72 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_72);
		String_t* L_73 = L_72->get_callFunction_6();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_74 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_75 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_73, L_74, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_021d;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_76 = __this->get_waypointsHolder_2();
		NullCheck(L_76);
		WaypointU5BU5D_t1069915672* L_77 = L_76->get_waypoints_3();
		int32_t L_78 = __this->get_currentWaypoint_15();
		NullCheck(L_77);
		int32_t L_79 = L_78;
		Waypoint_t1614450805 * L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		String_t* L_81 = L_80->get_callFunction_6();
		Component_SendMessage_m1441147224(__this, L_81, 1, /*hidden argument*/NULL);
	}

IL_021d:
	{
		WaypointsHolder_t3313439174 * L_82 = __this->get_waypointsHolder_2();
		NullCheck(L_82);
		WaypointU5BU5D_t1069915672* L_83 = L_82->get_waypoints_3();
		int32_t L_84 = __this->get_currentWaypoint_15();
		NullCheck(L_83);
		int32_t L_85 = L_84;
		Waypoint_t1614450805 * L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		float L_87 = L_86->get_newMoverSpeed_8();
		if ((((float)L_87) <= ((float)(((float)((float)0))))))
		{
			goto IL_0258;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_88 = __this->get_waypointsHolder_2();
		NullCheck(L_88);
		WaypointU5BU5D_t1069915672* L_89 = L_88->get_waypoints_3();
		int32_t L_90 = __this->get_currentWaypoint_15();
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Waypoint_t1614450805 * L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		float L_93 = L_92->get_newMoverSpeed_8();
		VirtActionInvoker1< float >::Invoke(14 /* System.Void WaypointMover::ChangeWaypointMoverSpeed(System.Single) */, __this, L_93);
	}

IL_0258:
	{
		int32_t L_94 = __this->get_currentWaypoint_15();
		__this->set_previousWaypoint_23(L_94);
		int32_t L_95 = __this->get_currentWaypoint_15();
		int32_t L_96 = __this->get_direction_16();
		__this->set_currentWaypoint_15(((int32_t)il2cpp_codegen_add((int32_t)L_95, (int32_t)L_96)));
		__this->set_onWaypoint_26((bool)1);
		int32_t L_97 = __this->get_currentWaypoint_15();
		WaypointsHolder_t3313439174 * L_98 = __this->get_waypointsHolder_2();
		NullCheck(L_98);
		WaypointU5BU5D_t1069915672* L_99 = L_98->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_99);
		int32_t L_100 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_99, /*hidden argument*/NULL);
		if ((((int32_t)L_97) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_100, (int32_t)1)))))
		{
			goto IL_02a7;
		}
	}
	{
		int32_t L_101 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_101) >= ((int32_t)0)))
		{
			goto IL_0366;
		}
	}

IL_02a7:
	{
		int32_t L_102 = __this->get_loopingType_4();
		V_4 = L_102;
		int32_t L_103 = V_4;
		if ((!(((uint32_t)L_103) == ((uint32_t)0))))
		{
			goto IL_02c3;
		}
	}
	{
		__this->set_currentWaypoint_15((-1));
		goto IL_0366;
	}

IL_02c3:
	{
		int32_t L_104 = V_4;
		if ((!(((uint32_t)L_104) == ((uint32_t)1))))
		{
			goto IL_02fa;
		}
	}
	{
		int32_t L_105 = __this->get_currentWaypoint_15();
		G_B29_0 = __this;
		if ((((int32_t)L_105) >= ((int32_t)0)))
		{
			G_B30_0 = __this;
			goto IL_02ef;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_106 = __this->get_waypointsHolder_2();
		NullCheck(L_106);
		WaypointU5BU5D_t1069915672* L_107 = L_106->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_107);
		int32_t L_108 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_107, /*hidden argument*/NULL);
		G_B31_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_108, (int32_t)1));
		G_B31_1 = G_B29_0;
		goto IL_02f0;
	}

IL_02ef:
	{
		G_B31_0 = 0;
		G_B31_1 = G_B30_0;
	}

IL_02f0:
	{
		NullCheck(G_B31_1);
		G_B31_1->set_currentWaypoint_15(G_B31_0);
		goto IL_0366;
	}

IL_02fa:
	{
		int32_t L_109 = V_4;
		if ((!(((uint32_t)L_109) == ((uint32_t)2))))
		{
			goto IL_0327;
		}
	}
	{
		int32_t L_110 = __this->get_direction_16();
		__this->set_direction_16(((-L_110)));
		int32_t L_111 = __this->get_currentWaypoint_15();
		int32_t L_112 = __this->get_direction_16();
		__this->set_currentWaypoint_15(((int32_t)il2cpp_codegen_add((int32_t)L_111, (int32_t)L_112)));
		goto IL_0366;
	}

IL_0327:
	{
		int32_t L_113 = V_4;
		if ((!(((uint32_t)L_113) == ((uint32_t)3))))
		{
			goto IL_0366;
		}
	}
	{
		int32_t L_114 = __this->get_loopNumber_20();
		int32_t L_115 = __this->get_numberOfLoops_11();
		if ((((int32_t)L_114) >= ((int32_t)L_115)))
		{
			goto IL_035a;
		}
	}
	{
		__this->set_currentWaypoint_15(0);
		int32_t L_116 = __this->get_loopNumber_20();
		__this->set_loopNumber_20(((int32_t)il2cpp_codegen_add((int32_t)L_116, (int32_t)1)));
		goto IL_0361;
	}

IL_035a:
	{
		__this->set_currentWaypoint_15((-1));
	}

IL_0361:
	{
		goto IL_0366;
	}

IL_0366:
	{
		int32_t L_117 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_117) < ((int32_t)0)))
		{
			goto IL_03cc;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_118 = __this->get_waypointsHolder_2();
		NullCheck(L_118);
		WaypointU5BU5D_t1069915672* L_119 = L_118->get_waypoints_3();
		int32_t L_120 = __this->get_currentWaypoint_15();
		NullCheck(L_119);
		int32_t L_121 = L_120;
		Waypoint_t1614450805 * L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_123 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_122, /*hidden argument*/NULL);
		if (!L_123)
		{
			goto IL_03cc;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_124 = __this->get_waypointsHolder_2();
		NullCheck(L_124);
		WaypointU5BU5D_t1069915672* L_125 = L_124->get_waypoints_3();
		int32_t L_126 = __this->get_currentWaypoint_15();
		NullCheck(L_125);
		int32_t L_127 = L_126;
		Waypoint_t1614450805 * L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		GameObject_t1113636619 * L_129 = Component_get_gameObject_m442555142(L_128, /*hidden argument*/NULL);
		NullCheck(L_129);
		Transform_t3600365921 * L_130 = GameObject_get_transform_m1369836730(L_129, /*hidden argument*/NULL);
		NullCheck(L_130);
		Vector3_t3722313464  L_131 = Transform_get_position_m36019626(L_130, /*hidden argument*/NULL);
		__this->set_targetPosition_18(L_131);
		Vector3_t3722313464  L_132 = __this->get_targetPosition_18();
		Vector3_t3722313464  L_133 = VirtFuncInvoker1< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(15 /* UnityEngine.Vector3 WaypointMover::IgnorePositionByAxis(UnityEngine.Vector3) */, __this, L_132);
		__this->set_targetPosition_18(L_133);
		goto IL_0425;
	}

IL_03cc:
	{
		int32_t L_134 = __this->get_currentWaypoint_15();
		WaypointsHolder_t3313439174 * L_135 = __this->get_waypointsHolder_2();
		NullCheck(L_135);
		WaypointU5BU5D_t1069915672* L_136 = L_135->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_136);
		int32_t L_137 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_136, /*hidden argument*/NULL);
		if ((((int32_t)L_134) >= ((int32_t)L_137)))
		{
			goto IL_0425;
		}
	}
	{
		int32_t L_138 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_138) < ((int32_t)0)))
		{
			goto IL_0425;
		}
	}
	{
		int32_t L_139 = __this->get_currentWaypoint_15();
		int32_t L_140 = __this->get_direction_16();
		__this->set_currentWaypoint_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)L_140)));
		WaypointsHolder_t3313439174 * L_141 = __this->get_waypointsHolder_2();
		NullCheck(L_141);
		GameObject_t1113636619 * L_142 = Component_get_gameObject_m442555142(L_141, /*hidden argument*/NULL);
		NullCheck(L_142);
		String_t* L_143 = Object_get_name_m4211327027(L_142, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		String_t* L_144 = RuntimeServices_op_Addition_m583005490(NULL /*static, unused*/, _stringLiteral2756806205, L_143, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarning_m3752629331(NULL /*static, unused*/, L_144, /*hidden argument*/NULL);
	}

IL_0425:
	{
		__this->set_callExitFunction_25((bool)1);
		goto IL_04ca;
	}

IL_0431:
	{
		__this->set_onWaypoint_26((bool)0);
		WaypointsHolder_t3313439174 * L_145 = __this->get_waypointsHolder_2();
		NullCheck(L_145);
		WaypointU5BU5D_t1069915672* L_146 = L_145->get_waypoints_3();
		int32_t L_147 = __this->get_previousWaypoint_23();
		NullCheck(L_146);
		int32_t L_148 = L_147;
		Waypoint_t1614450805 * L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		String_t* L_150 = L_149->get_callExitFunction_7();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_151 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		bool L_152 = String_op_Inequality_m215368492(NULL /*static, unused*/, L_150, L_151, /*hidden argument*/NULL);
		if (!L_152)
		{
			goto IL_04ca;
		}
	}
	{
		bool L_153 = __this->get_callExitFunction_25();
		if (!L_153)
		{
			goto IL_04ca;
		}
	}
	{
		Transform_t3600365921 * L_154 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_154);
		Vector3_t3722313464  L_155 = Transform_get_position_m36019626(L_154, /*hidden argument*/NULL);
		WaypointsHolder_t3313439174 * L_156 = __this->get_waypointsHolder_2();
		NullCheck(L_156);
		WaypointU5BU5D_t1069915672* L_157 = L_156->get_waypoints_3();
		int32_t L_158 = __this->get_previousWaypoint_23();
		NullCheck(L_157);
		int32_t L_159 = L_158;
		Waypoint_t1614450805 * L_160 = (L_157)->GetAt(static_cast<il2cpp_array_size_t>(L_159));
		NullCheck(L_160);
		GameObject_t1113636619 * L_161 = Component_get_gameObject_m442555142(L_160, /*hidden argument*/NULL);
		NullCheck(L_161);
		Transform_t3600365921 * L_162 = GameObject_get_transform_m1369836730(L_161, /*hidden argument*/NULL);
		NullCheck(L_162);
		Vector3_t3722313464  L_163 = Transform_get_position_m36019626(L_162, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_164 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_155, L_163, /*hidden argument*/NULL);
		float L_165 = __this->get_waypointActivationDistance_10();
		if ((((float)L_164) >= ((float)L_165)))
		{
			goto IL_04ca;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_166 = __this->get_waypointsHolder_2();
		NullCheck(L_166);
		WaypointU5BU5D_t1069915672* L_167 = L_166->get_waypoints_3();
		int32_t L_168 = __this->get_previousWaypoint_23();
		NullCheck(L_167);
		int32_t L_169 = L_168;
		Waypoint_t1614450805 * L_170 = (L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_170);
		String_t* L_171 = L_170->get_callExitFunction_7();
		Component_SendMessage_m1441147224(__this, L_171, 1, /*hidden argument*/NULL);
		__this->set_callExitFunction_25((bool)0);
	}

IL_04ca:
	{
		int32_t L_172 = __this->get_followingType_3();
		if ((!(((uint32_t)L_172) == ((uint32_t)2))))
		{
			goto IL_0541;
		}
	}
	{
		Vector3_t3722313464  L_173 = __this->get_targetPosition_18();
		Transform_t3600365921 * L_174 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_174);
		Vector3_t3722313464  L_175 = Transform_get_position_m36019626(L_174, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_176 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_173, L_175, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_177 = Quaternion_LookRotation_m4040767668(NULL /*static, unused*/, L_176, /*hidden argument*/NULL);
		V_5 = L_177;
		Transform_t3600365921 * L_178 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_179 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_179);
		Quaternion_t2301928331  L_180 = Transform_get_rotation_m3502953881(L_179, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_181 = V_5;
		float L_182 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_183 = __this->get_damping_8();
		Quaternion_t2301928331  L_184 = Quaternion_Slerp_m1234055455(NULL /*static, unused*/, L_180, L_181, ((float)il2cpp_codegen_multiply((float)L_182, (float)L_183)), /*hidden argument*/NULL);
		NullCheck(L_178);
		Transform_set_rotation_m3524318132(L_178, L_184, /*hidden argument*/NULL);
		Transform_t3600365921 * L_185 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_186 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_187 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_188 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_186, L_187, /*hidden argument*/NULL);
		float L_189 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_190 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_188, L_189, /*hidden argument*/NULL);
		NullCheck(L_185);
		Transform_Translate_m1810197270(L_185, L_190, /*hidden argument*/NULL);
	}

IL_0541:
	{
		int32_t L_191 = __this->get_followingType_3();
		if ((!(((uint32_t)L_191) == ((uint32_t)1))))
		{
			goto IL_0583;
		}
	}
	{
		Transform_t3600365921 * L_192 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_193 = __this->get_targetPosition_18();
		NullCheck(L_192);
		Transform_LookAt_m3649447396(L_192, L_193, /*hidden argument*/NULL);
		Transform_t3600365921 * L_194 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_195 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_196 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_197 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_195, L_196, /*hidden argument*/NULL);
		float L_198 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_199 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_197, L_198, /*hidden argument*/NULL);
		NullCheck(L_194);
		Transform_Translate_m1810197270(L_194, L_199, /*hidden argument*/NULL);
	}

IL_0583:
	{
		int32_t L_200 = __this->get_followingType_3();
		if ((!(((uint32_t)L_200) == ((uint32_t)8))))
		{
			goto IL_05e0;
		}
	}
	{
		Transform_t3600365921 * L_201 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_202 = __this->get_targetPosition_18();
		NullCheck(L_201);
		Transform_LookAt_m3649447396(L_201, L_202, /*hidden argument*/NULL);
		Transform_t3600365921 * L_203 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_204 = Vector3_get_up_m3584168373(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_203);
		Transform_Rotate_m1749346957(L_203, L_204, (((float)((float)((int32_t)180)))), /*hidden argument*/NULL);
		Transform_t3600365921 * L_205 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_206 = Vector3_get_forward_m3100859705(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_207 = Vector3_op_UnaryNegation_m1951478815(NULL /*static, unused*/, L_206, /*hidden argument*/NULL);
		float L_208 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_209 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_207, L_208, /*hidden argument*/NULL);
		float L_210 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_211 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_209, L_210, /*hidden argument*/NULL);
		NullCheck(L_205);
		Transform_Translate_m1810197270(L_205, L_211, /*hidden argument*/NULL);
	}

IL_05e0:
	{
		int32_t L_212 = __this->get_followingType_3();
		if ((!(((uint32_t)L_212) == ((uint32_t)0))))
		{
			goto IL_0619;
		}
	}
	{
		Transform_t3600365921 * L_213 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_214 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_214);
		Vector3_t3722313464  L_215 = Transform_get_position_m36019626(L_214, /*hidden argument*/NULL);
		Vector3_t3722313464  L_216 = __this->get_targetPosition_18();
		float L_217 = __this->get_movementSpeed_9();
		float L_218 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_219 = Vector3_MoveTowards_m2786395547(NULL /*static, unused*/, L_215, L_216, ((float)il2cpp_codegen_multiply((float)L_217, (float)L_218)), /*hidden argument*/NULL);
		NullCheck(L_213);
		Transform_set_position_m3387557959(L_213, L_219, /*hidden argument*/NULL);
	}

IL_0619:
	{
		int32_t L_220 = __this->get_followingType_3();
		if ((!(((uint32_t)L_220) == ((uint32_t)3))))
		{
			goto IL_0652;
		}
	}
	{
		Transform_t3600365921 * L_221 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Transform_t3600365921 * L_222 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_222);
		Vector3_t3722313464  L_223 = Transform_get_position_m36019626(L_222, /*hidden argument*/NULL);
		Vector3_t3722313464  L_224 = __this->get_targetPosition_18();
		Vector3_t3722313464 * L_225 = __this->get_address_of_velocity_17();
		float L_226 = __this->get_movementSpeed_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_227 = Vector3_SmoothDamp_m1123559802(NULL /*static, unused*/, L_223, L_224, L_225, L_226, /*hidden argument*/NULL);
		NullCheck(L_221);
		Transform_set_position_m3387557959(L_221, L_227, /*hidden argument*/NULL);
	}

IL_0652:
	{
		int32_t L_228 = __this->get_followingType_3();
		if ((!(((uint32_t)L_228) == ((uint32_t)4))))
		{
			goto IL_06a0;
		}
	}
	{
		Transform_t3600365921 * L_229 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_230 = __this->get_targetPosition_18();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_231 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_230, /*hidden argument*/NULL);
		float L_232 = __this->get_damping_8();
		VirtActionInvoker3< Transform_t3600365921 *, Vector2_t2156229523 , float >::Invoke(16 /* System.Void WaypointMover::SmoothLookAt2D(UnityEngine.Transform,UnityEngine.Vector2,System.Single) */, __this, L_229, L_231, L_232);
		Transform_t3600365921 * L_233 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_234 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_235 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_236 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_234, L_235, /*hidden argument*/NULL);
		float L_237 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_238 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_236, L_237, /*hidden argument*/NULL);
		NullCheck(L_233);
		Transform_Translate_m1810197270(L_233, L_238, /*hidden argument*/NULL);
	}

IL_06a0:
	{
		int32_t L_239 = __this->get_followingType_3();
		if ((!(((uint32_t)L_239) == ((uint32_t)5))))
		{
			goto IL_0775;
		}
	}
	{
		Vector3_t3722313464  L_240 = __this->get_targetPosition_18();
		Transform_t3600365921 * L_241 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_241);
		Vector3_t3722313464  L_242 = Transform_get_position_m36019626(L_241, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_243 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_240, L_242, /*hidden argument*/NULL);
		V_6 = L_243;
		Vector3_t3722313464  L_244 = V_6;
		Transform_t3600365921 * L_245 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_245);
		Vector3_t3722313464  L_246 = Transform_get_right_m2535262102(L_245, /*hidden argument*/NULL);
		float L_247 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_244, L_246, /*hidden argument*/NULL);
		V_7 = L_247;
		float L_248 = V_7;
		if ((((float)L_248) <= ((float)(((float)((float)3))))))
		{
			goto IL_0750;
		}
	}
	{
		Transform_t3600365921 * L_249 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_249);
		Quaternion_t2301928331  L_250 = Transform_get_rotation_m3502953881(L_249, /*hidden argument*/NULL);
		V_14 = L_250;
		Vector3_t3722313464  L_251 = Quaternion_get_eulerAngles_m3425202016((&V_14), /*hidden argument*/NULL);
		V_15 = L_251;
		float L_252 = (&V_15)->get_z_3();
		float L_253 = V_7;
		float L_254 = ((float)il2cpp_codegen_add((float)L_252, (float)L_253));
		V_8 = L_254;
		Transform_t3600365921 * L_255 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_255);
		Quaternion_t2301928331  L_256 = Transform_get_rotation_m3502953881(L_255, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_257 = L_256;
		V_9 = L_257;
		Vector3_t3722313464  L_258 = Quaternion_get_eulerAngles_m3425202016((&V_9), /*hidden argument*/NULL);
		Vector3_t3722313464  L_259 = L_258;
		V_10 = L_259;
		float L_260 = V_8;
		float L_261 = L_260;
		V_16 = L_261;
		(&V_10)->set_z_3(L_261);
		float L_262 = V_16;
		Vector3_t3722313464  L_263 = V_10;
		Vector3_t3722313464  L_264 = L_263;
		V_17 = L_264;
		Quaternion_set_eulerAngles_m793195291((&V_9), L_264, /*hidden argument*/NULL);
		Vector3_t3722313464  L_265 = V_17;
		Transform_t3600365921 * L_266 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_267 = V_9;
		Quaternion_t2301928331  L_268 = L_267;
		V_18 = L_268;
		NullCheck(L_266);
		Transform_set_rotation_m3524318132(L_266, L_268, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_269 = V_18;
	}

IL_0750:
	{
		Transform_t3600365921 * L_270 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_271 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_272 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_273 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_271, L_272, /*hidden argument*/NULL);
		float L_274 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_275 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_273, L_274, /*hidden argument*/NULL);
		NullCheck(L_270);
		Transform_Translate_m1810197270(L_270, L_275, /*hidden argument*/NULL);
	}

IL_0775:
	{
		int32_t L_276 = __this->get_followingType_3();
		if ((!(((uint32_t)L_276) == ((uint32_t)6))))
		{
			goto IL_0878;
		}
	}
	{
		Vector3_t3722313464  L_277 = __this->get_targetPosition_18();
		Transform_t3600365921 * L_278 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_278);
		Vector3_t3722313464  L_279 = Transform_get_position_m36019626(L_278, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_280 = Vector3_op_Subtraction_m3073674971(NULL /*static, unused*/, L_277, L_279, /*hidden argument*/NULL);
		V_6 = L_280;
		Vector3_t3722313464  L_281 = V_6;
		Transform_t3600365921 * L_282 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_282);
		Vector3_t3722313464  L_283 = Transform_get_right_m2535262102(L_282, /*hidden argument*/NULL);
		float L_284 = Vector3_Angle_m3731191531(NULL /*static, unused*/, L_281, L_283, /*hidden argument*/NULL);
		V_7 = L_284;
		float L_285 = V_7;
		if ((((float)L_285) <= ((float)(((float)((float)3))))))
		{
			goto IL_0853;
		}
	}
	{
		Transform_t3600365921 * L_286 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_286);
		Quaternion_t2301928331  L_287 = Transform_get_rotation_m3502953881(L_286, /*hidden argument*/NULL);
		V_19 = L_287;
		Vector3_t3722313464  L_288 = Quaternion_get_eulerAngles_m3425202016((&V_19), /*hidden argument*/NULL);
		V_20 = L_288;
		float L_289 = (&V_20)->get_z_3();
		Transform_t3600365921 * L_290 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_290);
		Quaternion_t2301928331  L_291 = Transform_get_rotation_m3502953881(L_290, /*hidden argument*/NULL);
		V_21 = L_291;
		Vector3_t3722313464  L_292 = Quaternion_get_eulerAngles_m3425202016((&V_21), /*hidden argument*/NULL);
		V_22 = L_292;
		float L_293 = (&V_22)->get_z_3();
		float L_294 = V_7;
		float L_295 = __this->get_damping_8();
		float L_296 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_297 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_289, ((float)il2cpp_codegen_subtract((float)L_293, (float)L_294)), ((float)il2cpp_codegen_multiply((float)L_295, (float)L_296)), /*hidden argument*/NULL);
		float L_298 = L_297;
		V_11 = L_298;
		Transform_t3600365921 * L_299 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_299);
		Quaternion_t2301928331  L_300 = Transform_get_rotation_m3502953881(L_299, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_301 = L_300;
		V_12 = L_301;
		Vector3_t3722313464  L_302 = Quaternion_get_eulerAngles_m3425202016((&V_12), /*hidden argument*/NULL);
		Vector3_t3722313464  L_303 = L_302;
		V_13 = L_303;
		float L_304 = V_11;
		float L_305 = L_304;
		V_23 = L_305;
		(&V_13)->set_z_3(L_305);
		float L_306 = V_23;
		Vector3_t3722313464  L_307 = V_13;
		Vector3_t3722313464  L_308 = L_307;
		V_24 = L_308;
		Quaternion_set_eulerAngles_m793195291((&V_12), L_308, /*hidden argument*/NULL);
		Vector3_t3722313464  L_309 = V_24;
		Transform_t3600365921 * L_310 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_311 = V_12;
		Quaternion_t2301928331  L_312 = L_311;
		V_25 = L_312;
		NullCheck(L_310);
		Transform_set_rotation_m3524318132(L_310, L_312, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_313 = V_25;
	}

IL_0853:
	{
		Transform_t3600365921 * L_314 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_315 = Vector3_get_right_m1913784872(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_316 = __this->get_movementSpeed_9();
		Vector3_t3722313464  L_317 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_315, L_316, /*hidden argument*/NULL);
		float L_318 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_319 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_317, L_318, /*hidden argument*/NULL);
		NullCheck(L_314);
		Transform_Translate_m1810197270(L_314, L_319, /*hidden argument*/NULL);
	}

IL_0878:
	{
		int32_t L_320 = __this->get_followingType_3();
		if ((!(((uint32_t)L_320) == ((uint32_t)7))))
		{
			goto IL_0895;
		}
	}
	{
		Transform_t3600365921 * L_321 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		Vector3_t3722313464  L_322 = __this->get_targetPosition_18();
		NullCheck(L_321);
		Transform_set_position_m3387557959(L_321, L_322, /*hidden argument*/NULL);
	}

IL_0895:
	{
		goto IL_08a1;
	}

IL_089a:
	{
		__this->set_inMove_21((bool)0);
	}

IL_08a1:
	{
		return;
	}
}
// System.Void WaypointMover::ReverseDirection()
extern "C"  void WaypointMover_ReverseDirection_m14530025 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	WaypointMover_t492995286 * G_B2_0 = NULL;
	WaypointMover_t492995286 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WaypointMover_t492995286 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get_currentWaypoint_15();
		__this->set_previousWaypoint_23(L_0);
		int32_t L_1 = __this->get_direction_16();
		__this->set_direction_16(((-L_1)));
		int32_t L_2 = __this->get_direction_16();
		G_B1_0 = __this;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_0033;
		}
	}
	{
		int32_t L_3 = __this->get_currentWaypoint_15();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0033:
	{
		int32_t L_4 = __this->get_currentWaypoint_15();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_currentWaypoint_15(G_B3_0);
		int32_t L_5 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_6 = __this->get_waypointsHolder_2();
		NullCheck(L_6);
		WaypointU5BU5D_t1069915672* L_7 = L_6->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		int32_t L_8 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_7, /*hidden argument*/NULL);
		__this->set_currentWaypoint_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		goto IL_008d;
	}

IL_0069:
	{
		int32_t L_9 = __this->get_currentWaypoint_15();
		WaypointsHolder_t3313439174 * L_10 = __this->get_waypointsHolder_2();
		NullCheck(L_10);
		WaypointU5BU5D_t1069915672* L_11 = L_10->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_11);
		int32_t L_12 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_008d;
		}
	}
	{
		__this->set_currentWaypoint_15(0);
	}

IL_008d:
	{
		WaypointsHolder_t3313439174 * L_13 = __this->get_waypointsHolder_2();
		NullCheck(L_13);
		WaypointU5BU5D_t1069915672* L_14 = L_13->get_waypoints_3();
		int32_t L_15 = __this->get_currentWaypoint_15();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Waypoint_t1614450805 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		__this->set_targetPosition_18(L_20);
		return;
	}
}
// System.Void WaypointMover::SetDirection(System.Int32)
extern "C"  void WaypointMover_SetDirection_m980022799 (WaypointMover_t492995286 * __this, int32_t ___dir0, const RuntimeMethod* method)
{
	WaypointMover_t492995286 * G_B2_0 = NULL;
	WaypointMover_t492995286 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WaypointMover_t492995286 * G_B3_1 = NULL;
	{
		int32_t L_0 = __this->get_currentWaypoint_15();
		__this->set_previousWaypoint_23(L_0);
		int32_t L_1 = ___dir0;
		__this->set_direction_16(L_1);
		int32_t L_2 = __this->get_direction_16();
		G_B1_0 = __this;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = __this->get_currentWaypoint_15();
		G_B3_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		G_B3_1 = G_B1_0;
		goto IL_0035;
	}

IL_002d:
	{
		int32_t L_4 = __this->get_currentWaypoint_15();
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1));
		G_B3_1 = G_B2_0;
	}

IL_0035:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_currentWaypoint_15(G_B3_0);
		int32_t L_5 = __this->get_currentWaypoint_15();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0063;
		}
	}
	{
		WaypointsHolder_t3313439174 * L_6 = __this->get_waypointsHolder_2();
		NullCheck(L_6);
		WaypointU5BU5D_t1069915672* L_7 = L_6->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_7);
		int32_t L_8 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_7, /*hidden argument*/NULL);
		__this->set_currentWaypoint_15(((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1)));
		goto IL_0087;
	}

IL_0063:
	{
		int32_t L_9 = __this->get_currentWaypoint_15();
		WaypointsHolder_t3313439174 * L_10 = __this->get_waypointsHolder_2();
		NullCheck(L_10);
		WaypointU5BU5D_t1069915672* L_11 = L_10->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_11);
		int32_t L_12 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)))))
		{
			goto IL_0087;
		}
	}
	{
		__this->set_currentWaypoint_15(0);
	}

IL_0087:
	{
		WaypointsHolder_t3313439174 * L_13 = __this->get_waypointsHolder_2();
		NullCheck(L_13);
		WaypointU5BU5D_t1069915672* L_14 = L_13->get_waypoints_3();
		int32_t L_15 = __this->get_currentWaypoint_15();
		NullCheck(L_14);
		int32_t L_16 = L_15;
		Waypoint_t1614450805 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_t1113636619 * L_18 = Component_get_gameObject_m442555142(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		__this->set_targetPosition_18(L_20);
		return;
	}
}
// System.Boolean WaypointMover::IsOnWaypoint()
extern "C"  bool WaypointMover_IsOnWaypoint_m2096804539 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_onWaypoint_26();
		return L_0;
	}
}
// System.Void WaypointMover::ReturnToPreviousWaypoint()
extern "C"  void WaypointMover_ReturnToPreviousWaypoint_m406051823 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_previousWaypoint_23();
		__this->set_currentWaypoint_15(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		WaypointsHolder_t3313439174 * L_2 = __this->get_waypointsHolder_2();
		NullCheck(L_2);
		WaypointU5BU5D_t1069915672* L_3 = L_2->get_waypoints_3();
		int32_t L_4 = __this->get_previousWaypoint_23();
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Waypoint_t1614450805 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_9, /*hidden argument*/NULL);
		WaypointsHolder_t3313439174 * L_10 = __this->get_waypointsHolder_2();
		NullCheck(L_10);
		WaypointU5BU5D_t1069915672* L_11 = L_10->get_waypoints_3();
		int32_t L_12 = __this->get_previousWaypoint_23();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Waypoint_t1614450805 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t3722313464  L_17 = Transform_get_position_m36019626(L_16, /*hidden argument*/NULL);
		__this->set_targetPosition_18(L_17);
		return;
	}
}
// System.Boolean WaypointMover::isMoving()
extern "C"  bool WaypointMover_isMoving_m1938984450 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_inMove_21();
		return L_0;
	}
}
// System.Void WaypointMover::Suspend(System.Boolean)
extern "C"  void WaypointMover_Suspend_m187153646 (WaypointMover_t492995286 * __this, bool ___state0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___state0;
		__this->set_suspended_22(L_0);
		return;
	}
}
// System.Void WaypointMover::Pause()
extern "C"  void WaypointMover_Pause_m3741388681 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	{
		__this->set_suspended_22((bool)1);
		return;
	}
}
// System.Void WaypointMover::Unpause()
extern "C"  void WaypointMover_Unpause_m3163514651 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
{
	{
		__this->set_suspended_22((bool)0);
		return;
	}
}
// System.Void WaypointMover::ChangeWaypointMoverSpeed(System.Single)
extern "C"  void WaypointMover_ChangeWaypointMoverSpeed_m352096516 (WaypointMover_t492995286 * __this, float ___newSpeed0, const RuntimeMethod* method)
{
	{
		float L_0 = ___newSpeed0;
		__this->set_movementSpeed_9(L_0);
		float L_1 = __this->get_movementSpeed_9();
		__this->set_initialMovementSpeed_24(L_1);
		return;
	}
}
// UnityEngine.Vector3 WaypointMover::IgnorePositionByAxis(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  WaypointMover_IgnorePositionByAxis_m2580620123 (WaypointMover_t492995286 * __this, Vector3_t3722313464  ___positionToUpdate0, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		Vector3_t3722313464  L_0 = ___positionToUpdate0;
		V_0 = L_0;
		UsedAxis_t1682297064 * L_1 = __this->get_ignorePositionAtAxis_7();
		NullCheck(L_1);
		bool L_2 = L_1->get_x_0();
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		(&V_0)->set_x_1(L_5);
	}

IL_002c:
	{
		UsedAxis_t1682297064 * L_6 = __this->get_ignorePositionAtAxis_7();
		NullCheck(L_6);
		bool L_7 = L_6->get_y_1();
		if (!L_7)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t3600365921 * L_8 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = (&V_2)->get_y_2();
		(&V_0)->set_y_2(L_10);
	}

IL_0056:
	{
		UsedAxis_t1682297064 * L_11 = __this->get_ignorePositionAtAxis_7();
		NullCheck(L_11);
		bool L_12 = L_11->get_z_2();
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = (&V_3)->get_z_3();
		(&V_0)->set_z_3(L_15);
	}

IL_0080:
	{
		Vector3_t3722313464  L_16 = V_0;
		return L_16;
	}
}
// System.Void WaypointMover::SmoothLookAt2D(UnityEngine.Transform,UnityEngine.Vector2,System.Single)
extern "C"  void WaypointMover_SmoothLookAt2D_m2909215025 (WaypointMover_t492995286 * __this, Transform_t3600365921 * ___objectTransform0, Vector2_t2156229523  ___targetPosition1, float ___smoothingValue2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointMover_SmoothLookAt2D_m2909215025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		Transform_t3600365921 * L_0 = ___objectTransform0;
		Vector2_t2156229523  L_1 = ___targetPosition1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_2 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t3722313464  L_3 = Transform_InverseTransformPoint_m1343916000(L_0, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_2();
		float L_5 = (&V_0)->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_6 = atan2f(L_4, L_5);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_6, (float)(57.29578f)));
		Transform_t3600365921 * L_7 = ___objectTransform0;
		float L_8 = V_1;
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = ___smoothingValue2;
		float L_11 = Mathf_LerpAngle_m295352085(NULL /*static, unused*/, (((float)((float)0))), L_8, ((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)), /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_Rotate_m3172098886(L_7, (((float)((float)0))), (((float)((float)0))), L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void WaypointMover::Main()
extern "C"  void WaypointMover_Main_m1358130201 (WaypointMover_t492995286 * __this, const RuntimeMethod* method)
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
// System.Void WaypointMover/$Start$15::.ctor(WaypointMover)
extern "C"  void U24StartU2415__ctor_m3585172406 (U24StartU2415_t1678141414 * __this, WaypointMover_t492995286 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24StartU2415__ctor_m3585172406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGenerator_1__ctor_m3668034686(__this, /*hidden argument*/GenericGenerator_1__ctor_m3668034686_RuntimeMethod_var);
		WaypointMover_t492995286 * L_0 = ___self_0;
		__this->set_U24self_U2422_0(L_0);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.WaitForSeconds> WaypointMover/$Start$15::GetEnumerator()
extern "C"  RuntimeObject* U24StartU2415_GetEnumerator_m2388058835 (U24StartU2415_t1678141414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24StartU2415_GetEnumerator_m2388058835_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WaypointMover_t492995286 * L_0 = __this->get_U24self_U2422_0();
		U24_t3290484354 * L_1 = (U24_t3290484354 *)il2cpp_codegen_object_new(U24_t3290484354_il2cpp_TypeInfo_var);
		U24__ctor_m569500378(L_1, L_0, /*hidden argument*/NULL);
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
// System.Void WaypointMover/$Start$15/$::.ctor(WaypointMover)
extern "C"  void U24__ctor_m569500378 (U24_t3290484354 * __this, WaypointMover_t492995286 * ___self_0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24__ctor_m569500378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GenericGeneratorEnumerator_1__ctor_m1741709125(__this, /*hidden argument*/GenericGeneratorEnumerator_1__ctor_m1741709125_RuntimeMethod_var);
		WaypointMover_t492995286 * L_0 = ___self_0;
		__this->set_U24self_U2421_7(L_0);
		return;
	}
}
// System.Boolean WaypointMover/$Start$15/$::MoveNext()
extern "C"  bool U24_MoveNext_m1996041879 (U24_t3290484354 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U24_MoveNext_m1996041879_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = ((GenericGeneratorEnumerator_1_t2163727001 *)__this)->get__state_1();
		switch (L_0)
		{
			case 0:
			{
				goto IL_0017;
			}
			case 1:
			{
				goto IL_023b;
			}
			case 2:
			{
				goto IL_0069;
			}
		}
	}

IL_0017:
	{
		WaypointMover_t492995286 * L_1 = __this->get_U24self_U2421_7();
		NullCheck(L_1);
		Rigidbody_t3916780224 * L_2 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(L_1, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		WaypointMover_t492995286 * L_4 = __this->get_U24self_U2421_7();
		NullCheck(L_4);
		Rigidbody_t3916780224 * L_5 = Component_GetComponent_TisRigidbody_t3916780224_m279685075(L_4, /*hidden argument*/Component_GetComponent_TisRigidbody_t3916780224_m279685075_RuntimeMethod_var);
		NullCheck(L_5);
		Rigidbody_set_freezeRotation_m754206839(L_5, (bool)1, /*hidden argument*/NULL);
	}

IL_003d:
	{
		WaypointMover_t492995286 * L_6 = __this->get_U24self_U2421_7();
		WaypointMover_t492995286 * L_7 = __this->get_U24self_U2421_7();
		NullCheck(L_7);
		float L_8 = L_7->get_movementSpeed_9();
		NullCheck(L_6);
		L_6->set_initialMovementSpeed_24(L_8);
		WaitForSeconds_t1699091251 * L_9 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_9, (0.01f), /*hidden argument*/NULL);
		bool L_10 = GenericGeneratorEnumerator_1_Yield_m2392643255(__this, 2, L_9, /*hidden argument*/GenericGeneratorEnumerator_1_Yield_m2392643255_RuntimeMethod_var);
		G_B16_0 = ((int32_t)(L_10));
		goto IL_023c;
	}

IL_0069:
	{
		WaypointMover_t492995286 * L_11 = __this->get_U24self_U2421_7();
		NullCheck(L_11);
		bool L_12 = L_11->get_StartFromNearestWaypoint_6();
		if (!L_12)
		{
			goto IL_0185;
		}
	}
	{
		Vector3_t3722313464 * L_13 = __this->get_address_of_U24waypointPositionU2416_2();
		il2cpp_codegen_initobj(L_13, sizeof(Vector3_t3722313464 ));
		int32_t* L_14 = __this->get_address_of_U24nearestWaypointIDU2417_3();
		il2cpp_codegen_initobj(L_14, sizeof(int32_t));
		__this->set_U24previousSmallestDistanceU2418_4((std::numeric_limits<float>::infinity()));
		float* L_15 = __this->get_address_of_U24distanceU2419_5();
		il2cpp_codegen_initobj(L_15, sizeof(float));
		__this->set_U24iU2420_6(0);
		goto IL_014f;
	}

IL_00b4:
	{
		WaypointMover_t492995286 * L_16 = __this->get_U24self_U2421_7();
		NullCheck(L_16);
		WaypointsHolder_t3313439174 * L_17 = L_16->get_waypointsHolder_2();
		NullCheck(L_17);
		WaypointU5BU5D_t1069915672* L_18 = L_17->get_waypoints_3();
		int32_t L_19 = __this->get_U24iU2420_6();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Waypoint_t1614450805 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_t1113636619 * L_22 = Component_get_gameObject_m442555142(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_t3600365921 * L_23 = GameObject_get_transform_m1369836730(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t3722313464  L_24 = Transform_get_position_m36019626(L_23, /*hidden argument*/NULL);
		__this->set_U24waypointPositionU2416_2(L_24);
		WaypointMover_t492995286 * L_25 = __this->get_U24self_U2421_7();
		Vector3_t3722313464  L_26 = __this->get_U24waypointPositionU2416_2();
		NullCheck(L_25);
		Vector3_t3722313464  L_27 = VirtFuncInvoker1< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(15 /* UnityEngine.Vector3 WaypointMover::IgnorePositionByAxis(UnityEngine.Vector3) */, L_25, L_26);
		__this->set_U24waypointPositionU2416_2(L_27);
		WaypointMover_t492995286 * L_28 = __this->get_U24self_U2421_7();
		NullCheck(L_28);
		Transform_t3600365921 * L_29 = Component_get_transform_m3162698980(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t3722313464  L_30 = Transform_get_position_m36019626(L_29, /*hidden argument*/NULL);
		Vector3_t3722313464  L_31 = __this->get_U24waypointPositionU2416_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		float L_32 = Vector3_Distance_m886789632(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		__this->set_U24distanceU2419_5(L_32);
		float L_33 = __this->get_U24distanceU2419_5();
		float L_34 = __this->get_U24previousSmallestDistanceU2418_4();
		if ((((float)L_33) >= ((float)L_34)))
		{
			goto IL_0141;
		}
	}
	{
		int32_t L_35 = __this->get_U24iU2420_6();
		__this->set_U24nearestWaypointIDU2417_3(L_35);
		float L_36 = __this->get_U24distanceU2419_5();
		__this->set_U24previousSmallestDistanceU2418_4(L_36);
	}

IL_0141:
	{
		int32_t L_37 = __this->get_U24iU2420_6();
		__this->set_U24iU2420_6(((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1)));
	}

IL_014f:
	{
		int32_t L_38 = __this->get_U24iU2420_6();
		WaypointMover_t492995286 * L_39 = __this->get_U24self_U2421_7();
		NullCheck(L_39);
		WaypointsHolder_t3313439174 * L_40 = L_39->get_waypointsHolder_2();
		NullCheck(L_40);
		WaypointU5BU5D_t1069915672* L_41 = L_40->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_41);
		int32_t L_42 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_41, /*hidden argument*/NULL);
		if ((((int32_t)L_38) < ((int32_t)L_42)))
		{
			goto IL_00b4;
		}
	}
	{
		WaypointMover_t492995286 * L_43 = __this->get_U24self_U2421_7();
		int32_t L_44 = __this->get_U24nearestWaypointIDU2417_3();
		NullCheck(L_43);
		L_43->set_currentWaypoint_15(L_44);
		goto IL_0191;
	}

IL_0185:
	{
		WaypointMover_t492995286 * L_45 = __this->get_U24self_U2421_7();
		NullCheck(L_45);
		L_45->set_currentWaypoint_15(0);
	}

IL_0191:
	{
		WaypointMover_t492995286 * L_46 = __this->get_U24self_U2421_7();
		NullCheck(L_46);
		bool L_47 = L_46->get_MoveOnWayImmediately_5();
		if (!L_47)
		{
			goto IL_01dc;
		}
	}
	{
		WaypointMover_t492995286 * L_48 = __this->get_U24self_U2421_7();
		NullCheck(L_48);
		Transform_t3600365921 * L_49 = Component_get_transform_m3162698980(L_48, /*hidden argument*/NULL);
		WaypointMover_t492995286 * L_50 = __this->get_U24self_U2421_7();
		NullCheck(L_50);
		WaypointsHolder_t3313439174 * L_51 = L_50->get_waypointsHolder_2();
		NullCheck(L_51);
		WaypointU5BU5D_t1069915672* L_52 = L_51->get_waypoints_3();
		WaypointMover_t492995286 * L_53 = __this->get_U24self_U2421_7();
		NullCheck(L_53);
		int32_t L_54 = L_53->get_currentWaypoint_15();
		NullCheck(L_52);
		int32_t L_55 = L_54;
		Waypoint_t1614450805 * L_56 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		NullCheck(L_56);
		GameObject_t1113636619 * L_57 = Component_get_gameObject_m442555142(L_56, /*hidden argument*/NULL);
		NullCheck(L_57);
		Transform_t3600365921 * L_58 = GameObject_get_transform_m1369836730(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_t3722313464  L_59 = Transform_get_position_m36019626(L_58, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_set_position_m3387557959(L_49, L_59, /*hidden argument*/NULL);
	}

IL_01dc:
	{
		WaypointMover_t492995286 * L_60 = __this->get_U24self_U2421_7();
		WaypointMover_t492995286 * L_61 = __this->get_U24self_U2421_7();
		NullCheck(L_61);
		WaypointsHolder_t3313439174 * L_62 = L_61->get_waypointsHolder_2();
		NullCheck(L_62);
		WaypointU5BU5D_t1069915672* L_63 = L_62->get_waypoints_3();
		WaypointMover_t492995286 * L_64 = __this->get_U24self_U2421_7();
		NullCheck(L_64);
		int32_t L_65 = L_64->get_currentWaypoint_15();
		NullCheck(L_63);
		int32_t L_66 = L_65;
		Waypoint_t1614450805 * L_67 = (L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		GameObject_t1113636619 * L_68 = Component_get_gameObject_m442555142(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_t3600365921 * L_69 = GameObject_get_transform_m1369836730(L_68, /*hidden argument*/NULL);
		NullCheck(L_69);
		Vector3_t3722313464  L_70 = Transform_get_position_m36019626(L_69, /*hidden argument*/NULL);
		NullCheck(L_60);
		L_60->set_targetPosition_18(L_70);
		WaypointMover_t492995286 * L_71 = __this->get_U24self_U2421_7();
		WaypointMover_t492995286 * L_72 = __this->get_U24self_U2421_7();
		WaypointMover_t492995286 * L_73 = __this->get_U24self_U2421_7();
		NullCheck(L_73);
		Vector3_t3722313464  L_74 = L_73->get_targetPosition_18();
		NullCheck(L_72);
		Vector3_t3722313464  L_75 = VirtFuncInvoker1< Vector3_t3722313464 , Vector3_t3722313464  >::Invoke(15 /* UnityEngine.Vector3 WaypointMover::IgnorePositionByAxis(UnityEngine.Vector3) */, L_72, L_74);
		NullCheck(L_71);
		L_71->set_targetPosition_18(L_75);
		GenericGeneratorEnumerator_1_YieldDefault_m3906696236(__this, 1, /*hidden argument*/GenericGeneratorEnumerator_1_YieldDefault_m3906696236_RuntimeMethod_var);
	}

IL_023b:
	{
		G_B16_0 = 0;
	}

IL_023c:
	{
		return (bool)G_B16_0;
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
// System.Void WaypointsHolder::.ctor()
extern "C"  void WaypointsHolder__ctor_m3849348123 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		Color_t2555686324  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Color__ctor_m2943235014((&L_0), (((float)((float)0))), (((float)((float)1))), (((float)((float)0))), (0.5f), /*hidden argument*/NULL);
		__this->set_color_2(L_0);
		__this->set_colorizeWaypoints_4((bool)1);
		return;
	}
}
// System.Void WaypointsHolder::Start()
extern "C"  void WaypointsHolder_Start_m634307809 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointsHolder_Start_m634307809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ComponentU5BU5D_t3294940482* V_0 = NULL;
	int32_t V_1 = 0;
	Waypoint_t1614450805 * V_2 = NULL;
	int32_t V_3 = 0;
	ComponentU5BU5D_t3294940482* V_4 = NULL;
	int32_t V_5 = 0;
	{
		WaypointU5BU5D_t1069915672* L_0 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0081;
		}
	}
	{
		Transform_t3600365921 * L_2 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Transform_get_childCount_m3145433196(L_2, /*hidden argument*/NULL);
		Array_t201190492 * L_4 = (Array_t201190492 *)il2cpp_codegen_object_new(Array_t201190492_il2cpp_TypeInfo_var);
		Array__ctor_m2555122516(L_4, L_3, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_5 = { reinterpret_cast<intptr_t> (Waypoint_t1614450805_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeArray * L_7 = Array_ToBuiltin_m286161891(L_4, L_6, /*hidden argument*/NULL);
		__this->set_waypoints_3(((WaypointU5BU5D_t1069915672*)Castclass((RuntimeObject*)L_7, WaypointU5BU5D_t1069915672_il2cpp_TypeInfo_var)));
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (Waypoint_t1614450805_0_0_0_var) };
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		ComponentU5BU5D_t3294940482* L_10 = Component_GetComponentsInChildren_m4100240514(__this, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		V_1 = 0;
		V_3 = 0;
		ComponentU5BU5D_t3294940482* L_11 = V_0;
		V_4 = L_11;
		ComponentU5BU5D_t3294940482* L_12 = V_4;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_12);
		int32_t L_13 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		goto IL_0079;
	}

IL_0060:
	{
		WaypointU5BU5D_t1069915672* L_14 = __this->get_waypoints_3();
		int32_t L_15 = V_1;
		ComponentU5BU5D_t3294940482* L_16 = V_4;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Component_t1923634451 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, ((Waypoint_t1614450805 *)CastclassClass((RuntimeObject*)L_19, Waypoint_t1614450805_il2cpp_TypeInfo_var)));
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Waypoint_t1614450805 *)((Waypoint_t1614450805 *)CastclassClass((RuntimeObject*)L_19, Waypoint_t1614450805_il2cpp_TypeInfo_var)));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
		int32_t L_21 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0079:
	{
		int32_t L_22 = V_3;
		int32_t L_23 = V_5;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0060;
		}
	}

IL_0081:
	{
		return;
	}
}
// System.Void WaypointsHolder::AddWaypoint()
extern "C"  void WaypointsHolder_AddWaypoint_m2765870964 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointsHolder_AddWaypoint_m2765870964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Array_t201190492 * V_0 = NULL;
	{
		WaypointU5BU5D_t1069915672* L_0 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0030;
		}
	}
	{
		Array_t201190492 * L_2 = (Array_t201190492 *)il2cpp_codegen_object_new(Array_t201190492_il2cpp_TypeInfo_var);
		Array__ctor_m2555122516(L_2, 0, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_3 = { reinterpret_cast<intptr_t> (Waypoint_t1614450805_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeArray * L_5 = Array_ToBuiltin_m286161891(L_2, L_4, /*hidden argument*/NULL);
		__this->set_waypoints_3(((WaypointU5BU5D_t1069915672*)Castclass((RuntimeObject*)L_5, WaypointU5BU5D_t1069915672_il2cpp_TypeInfo_var)));
	}

IL_0030:
	{
		WaypointU5BU5D_t1069915672* L_6 = __this->get_waypoints_3();
		Array_t201190492 * L_7 = (Array_t201190492 *)il2cpp_codegen_object_new(Array_t201190492_il2cpp_TypeInfo_var);
		Array__ctor_m2237513838(L_7, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		Array_t201190492 * L_8 = V_0;
		Array_t201190492 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = Array_get_length_m219024605(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Array_set_length_m3735173719(L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		Array_t201190492 * L_11 = V_0;
		RuntimeTypeHandle_t3027515415  L_12 = { reinterpret_cast<intptr_t> (Waypoint_t1614450805_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_13 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeArray * L_14 = Array_ToBuiltin_m286161891(L_11, L_13, /*hidden argument*/NULL);
		__this->set_waypoints_3(((WaypointU5BU5D_t1069915672*)IsInst((RuntimeObject*)L_14, WaypointU5BU5D_t1069915672_il2cpp_TypeInfo_var)));
		WaypointU5BU5D_t1069915672* L_15 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_15);
		int32_t L_16 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_008f;
		}
	}
	{
		WaypointU5BU5D_t1069915672* L_17 = __this->get_waypoints_3();
		WaypointU5BU5D_t1069915672* L_18 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_18);
		int32_t L_19 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_18, /*hidden argument*/NULL);
		Waypoint_t1614450805 * L_20 = (Waypoint_t1614450805 *)il2cpp_codegen_object_new(Waypoint_t1614450805_il2cpp_TypeInfo_var);
		Waypoint__ctor_m182443051(L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1))), (Waypoint_t1614450805 *)L_20);
	}

IL_008f:
	{
		return;
	}
}
// System.Void WaypointsHolder::DeleteWaypoint()
extern "C"  void WaypointsHolder_DeleteWaypoint_m3108876766 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointsHolder_DeleteWaypoint_m3108876766_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Array_t201190492 * V_0 = NULL;
	{
		WaypointU5BU5D_t1069915672* L_0 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		WaypointU5BU5D_t1069915672* L_2 = __this->get_waypoints_3();
		Array_t201190492 * L_3 = (Array_t201190492 *)il2cpp_codegen_object_new(Array_t201190492_il2cpp_TypeInfo_var);
		Array__ctor_m2237513838(L_3, (RuntimeObject*)(RuntimeObject*)L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		Array_t201190492 * L_4 = V_0;
		Array_t201190492 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6 = Array_get_length_m219024605(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		Array_set_length_m3735173719(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		Array_t201190492 * L_7 = V_0;
		RuntimeTypeHandle_t3027515415  L_8 = { reinterpret_cast<intptr_t> (Waypoint_t1614450805_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_9 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		RuntimeArray * L_10 = Array_ToBuiltin_m286161891(L_7, L_9, /*hidden argument*/NULL);
		__this->set_waypoints_3(((WaypointU5BU5D_t1069915672*)IsInst((RuntimeObject*)L_10, WaypointU5BU5D_t1069915672_il2cpp_TypeInfo_var)));
	}

IL_0046:
	{
		return;
	}
}
// System.Void WaypointsHolder::OnDrawGizmos()
extern "C"  void WaypointsHolder_OnDrawGizmos_m608013696 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WaypointsHolder_OnDrawGizmos_m608013696_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Color_t2555686324  L_0 = __this->get_color_2();
		Gizmos_set_color_m3399737545(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		WaypointU5BU5D_t1069915672* L_1 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_1);
		int32_t L_2 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_00b5;
		}
	}
	{
		V_0 = 0;
		goto IL_00a2;
	}

IL_0023:
	{
		WaypointU5BU5D_t1069915672* L_3 = __this->get_waypoints_3();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Waypoint_t1614450805 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_009e;
		}
	}
	{
		WaypointU5BU5D_t1069915672* L_8 = __this->get_waypoints_3();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
		Waypoint_t1614450805 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_009e;
		}
	}
	{
		WaypointU5BU5D_t1069915672* L_13 = __this->get_waypoints_3();
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		Waypoint_t1614450805 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = GameObject_get_transform_m1369836730(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		WaypointU5BU5D_t1069915672* L_20 = __this->get_waypoints_3();
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
		Waypoint_t1614450805 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_t1113636619 * L_24 = Component_get_gameObject_m442555142(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_t3600365921 * L_25 = GameObject_get_transform_m1369836730(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t3722313464  L_26 = Transform_get_position_m36019626(L_25, /*hidden argument*/NULL);
		Gizmos_DrawLine_m3273476787(NULL /*static, unused*/, L_19, L_26, /*hidden argument*/NULL);
		bool L_27 = __this->get_colorizeWaypoints_4();
		if (!L_27)
		{
			goto IL_009e;
		}
	}
	{
		WaypointU5BU5D_t1069915672* L_28 = __this->get_waypoints_3();
		int32_t L_29 = V_0;
		NullCheck(L_28);
		int32_t L_30 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		Waypoint_t1614450805 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		Color_t2555686324  L_32 = __this->get_color_2();
		NullCheck(L_31);
		L_31->set_color_2(L_32);
	}

IL_009e:
	{
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_34 = V_0;
		WaypointU5BU5D_t1069915672* L_35 = __this->get_waypoints_3();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_35);
		int32_t L_36 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_35, /*hidden argument*/NULL);
		if ((((int32_t)L_34) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1)))))
		{
			goto IL_0023;
		}
	}

IL_00b5:
	{
		return;
	}
}
// System.Void WaypointsHolder::Main()
extern "C"  void WaypointsHolder_Main_m4209582443 (WaypointsHolder_t3313439174 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
