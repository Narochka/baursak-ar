#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DetachOnceVisible
struct DetachOnceVisible_t1852D1C8DC92EEE2A21CF304338F8F2DC0C21AFF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Zappar.ZapparImageTrackingTarget
struct ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralBF2122B4C72065D94F7D657AEB9A30BC461786DC;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Nullable`1<System.IntPtr>
struct Nullable_1_t02905B3413B8A12DF3D51046F80F708B11A08455 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	intptr_t ___value_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Zappar.ZapparImageTrackingTarget/PlaneOrientation
struct PlaneOrientation_t8FBC586CEBD6DA6C244F09273C64613EDBE65099 
{
	// System.Int32 Zappar.ZapparImageTrackingTarget/PlaneOrientation::value__
	int32_t ___value___2;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DetachOnceVisible
struct DetachOnceVisible_t1852D1C8DC92EEE2A21CF304338F8F2DC0C21AFF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Zappar.ZapparImageTrackingTarget DetachOnceVisible::tracker
	ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97* ___tracker_4;
	// UnityEngine.Transform DetachOnceVisible::trackedContent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___trackedContent_5;
	// System.Boolean DetachOnceVisible::hasDetached
	bool ___hasDetached_6;
};

// Zappar.ZapparTrackingTarget
struct ZapparTrackingTarget_t653D78A9037B6EC04D0136B927CDABCF5A6AF789  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Zappar.ZapparImageTrackingTarget
struct ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97  : public ZapparTrackingTarget_t653D78A9037B6EC04D0136B927CDABCF5A6AF789
{
	// System.Nullable`1<System.IntPtr> Zappar.ZapparImageTrackingTarget::<ImageTrackerPtr>k__BackingField
	Nullable_1_t02905B3413B8A12DF3D51046F80F708B11A08455 ___U3CImageTrackerPtrU3Ek__BackingField_4;
	// System.Boolean Zappar.ZapparImageTrackingTarget::m_hasInitialized
	bool ___m_hasInitialized_5;
	// System.Boolean Zappar.ZapparImageTrackingTarget::m_isMirrored
	bool ___m_isMirrored_6;
	// System.Boolean Zappar.ZapparImageTrackingTarget::m_isPaused
	bool ___m_isPaused_7;
	// System.String Zappar.ZapparImageTrackingTarget::Target
	String_t* ___Target_8;
	// Zappar.ZapparImageTrackingTarget/PlaneOrientation Zappar.ZapparImageTrackingTarget::Orientation
	int32_t ___Orientation_9;
	// UnityEngine.GameObject Zappar.ZapparImageTrackingTarget::PreviewImageObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PreviewImageObject_10;
	// UnityEngine.Events.UnityEvent Zappar.ZapparImageTrackingTarget::OnSeenEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnSeenEvent_11;
	// UnityEngine.Events.UnityEvent Zappar.ZapparImageTrackingTarget::OnNotSeenEvent
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___OnNotSeenEvent_12;
	// System.Boolean Zappar.ZapparImageTrackingTarget::m_isVisible
	bool ___m_isVisible_13;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// System.Void

// System.Void

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// DetachOnceVisible

// DetachOnceVisible

// Zappar.ZapparTrackingTarget

// Zappar.ZapparTrackingTarget

// Zappar.ZapparImageTrackingTarget

// Zappar.ZapparImageTrackingTarget
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Matrix4x4::op_Inequality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_op_Inequality_m318CC0235679529F15B2C56E0896E70A2BD62713_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, bool ___1_worldPositionStays, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Matrix4x4::op_Equality(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Matrix4x4_op_Equality_m72E9702E42EAED862E9D7EA1B8B9D6EA5AAC5C3D (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) ;
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
// System.Void DetachOnceVisible::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachOnceVisible_Update_m85B3A6FC1314EA0A71F706FA5F289884A749A68F (DetachOnceVisible_t1852D1C8DC92EEE2A21CF304338F8F2DC0C21AFF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF2122B4C72065D94F7D657AEB9A30BC461786DC);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var anchorPose = tracker.AnchorPoseCameraRelative();
		ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97* L_0 = __this->___tracker_4;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1;
		L_1 = VirtualFuncInvoker0< Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 >::Invoke(4 /* UnityEngine.Matrix4x4 Zappar.ZapparTrackingTarget::AnchorPoseCameraRelative() */, L_0);
		V_0 = L_1;
		// if (!hasDetached && anchorPose != Matrix4x4.identity)
		bool L_2 = __this->___hasDetached_6;
		if (L_2)
		{
			goto IL_005c;
		}
	}
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = V_0;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_4;
		L_4 = Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline(NULL);
		bool L_5;
		L_5 = Matrix4x4_op_Inequality_m318CC0235679529F15B2C56E0896E70A2BD62713_inline(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		// trackedContent.SetParent(null, true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___trackedContent_5;
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_6, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, (bool)1, NULL);
		// tracker.enabled = false;
		ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97* L_7 = __this->___tracker_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)0, NULL);
		// tracker.gameObject.SetActive(false);
		ZapparImageTrackingTarget_t5FB68844BECB3B7CC0E059F648ACF7C98696AC97* L_8 = __this->___tracker_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// hasDetached = true;
		__this->___hasDetached_6 = (bool)1;
		// Debug.Log("? ??????? ????????? ?? ??????? ? ?????? ?????????");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBF2122B4C72065D94F7D657AEB9A30BC461786DC, NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void DetachOnceVisible::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetachOnceVisible__ctor_m75686103AD0DBD73A05560D7308AB1752464156A (DetachOnceVisible_t1852D1C8DC92EEE2A21CF304338F8F2DC0C21AFF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Matrix4x4_get_identity_m6568A73831F3E2D587420D20FF423959D7D8AB56_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields*)il2cpp_codegen_static_fields_for(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_il2cpp_TypeInfo_var))->___identityMatrix_17;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Matrix4x4_op_Inequality_m318CC0235679529F15B2C56E0896E70A2BD62713_inline (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___0_lhs, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_0 = ___0_lhs;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Matrix4x4_op_Equality_m72E9702E42EAED862E9D7EA1B8B9D6EA5AAC5C3D(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
