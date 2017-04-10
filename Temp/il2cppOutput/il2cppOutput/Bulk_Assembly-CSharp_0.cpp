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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_IgaguriController743002922.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Rigidbody4233889191.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Collision2876846408.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_ParticleSystem3394631041.h"
#include "AssemblyU2DCSharp_IgaguriGenerator606140795.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"

// IgaguriController
struct IgaguriController_t743002922;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t1158329972;
// UnityEngine.Component
struct Component_t3819376471;
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// System.Object
struct Il2CppObject;
// UnityEngine.Collision
struct Collision_t2876846408;
// UnityEngine.ParticleSystem
struct ParticleSystem_t3394631041;
// IgaguriGenerator
struct IgaguriGenerator_t606140795;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
extern const MethodInfo* Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var;
extern const uint32_t IgaguriController_Shoot_m469588479_MetadataUsageId;
extern const MethodInfo* Component_GetComponent_TisParticleSystem_t3394631041_m943859897_MethodInfo_var;
extern const uint32_t IgaguriController_OnCollisionEnter_m2844828199_MetadataUsageId;
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m924818194_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisIgaguriController_t743002922_m1958761977_MethodInfo_var;
extern const uint32_t IgaguriGenerator_Update_m630110115_MetadataUsageId;



// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3295167080_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, const MethodInfo* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2650145732_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m2464341955 (MonoBehaviour_t1158329972 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
#define Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, method) ((  Rigidbody_t4233889191 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t2243707580  Vector3_op_Multiply_m1351554733 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  p0, float p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
extern "C"  void Rigidbody_AddForce_m2836187433 (Rigidbody_t4233889191 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
extern "C"  void Rigidbody_set_isKinematic_m738793415 (Rigidbody_t4233889191 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
#define Component_GetComponent_TisParticleSystem_t3394631041_m943859897(__this, method) ((  ParticleSystem_t3394631041 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// System.Void UnityEngine.ParticleSystem::Play()
extern "C"  void ParticleSystem_Play_m4171585816 (ParticleSystem_t3394631041 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m47917805 (Il2CppObject * __this /* static, unused */, int32_t p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
#define Object_Instantiate_TisGameObject_t1756533147_m924818194(__this /* static, unused */, p0, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3295167080_gshared)(__this /* static, unused */, p0, method)
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t189460977 * Camera_get_main_m475173995 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t2243707580  Input_get_mousePosition_m146923508 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
extern "C"  Ray_t2469606224  Camera_ScreenPointToRay_m614889538 (Camera_t189460977 * __this, Vector3_t2243707580  p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
extern "C"  Vector3_t2243707580  Ray_get_direction_m4059191533 (Ray_t2469606224 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<IgaguriController>()
#define GameObject_GetComponent_TisIgaguriController_t743002922_m1958761977(__this, method) ((  IgaguriController_t743002922 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2650145732_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
extern "C"  Vector3_t2243707580  Vector3_get_normalized_m936072361 (Vector3_t2243707580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IgaguriController::Shoot(UnityEngine.Vector3)
extern "C"  void IgaguriController_Shoot_m469588479 (IgaguriController_t743002922 * __this, Vector3_t2243707580  ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void IgaguriController::.ctor()
extern "C"  void IgaguriController__ctor_m56364685 (IgaguriController_t743002922 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IgaguriController::Shoot(UnityEngine.Vector3)
extern "C"  void IgaguriController_Shoot_m469588479 (IgaguriController_t743002922 * __this, Vector3_t2243707580  ___dir0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IgaguriController_Shoot_m469588479_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		Vector3_t2243707580  L_1 = ___dir0;
		Vector3_t2243707580  L_2 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_1, (1.4f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody_AddForce_m2836187433(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IgaguriController::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void IgaguriController_OnCollisionEnter_m2844828199 (IgaguriController_t743002922 * __this, Collision_t2876846408 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IgaguriController_OnCollisionEnter_m2844828199_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody_t4233889191 * L_0 = Component_GetComponent_TisRigidbody_t4233889191_m520013213(__this, /*hidden argument*/Component_GetComponent_TisRigidbody_t4233889191_m520013213_MethodInfo_var);
		NullCheck(L_0);
		Rigidbody_set_isKinematic_m738793415(L_0, (bool)1, /*hidden argument*/NULL);
		ParticleSystem_t3394631041 * L_1 = Component_GetComponent_TisParticleSystem_t3394631041_m943859897(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t3394631041_m943859897_MethodInfo_var);
		NullCheck(L_1);
		ParticleSystem_Play_m4171585816(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IgaguriController::Start()
extern "C"  void IgaguriController_Start_m2182352325 (IgaguriController_t743002922 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IgaguriController::Update()
extern "C"  void IgaguriController_Update_m2086837704 (IgaguriController_t743002922 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IgaguriGenerator::.ctor()
extern "C"  void IgaguriGenerator__ctor_m1897334490 (IgaguriGenerator_t606140795 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void IgaguriGenerator::Start()
extern "C"  void IgaguriGenerator_Start_m772815334 (IgaguriGenerator_t606140795 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void IgaguriGenerator::Update()
extern "C"  void IgaguriGenerator_Update_m630110115 (IgaguriGenerator_t606140795 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IgaguriGenerator_Update_m630110115_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1756533147 * V_0 = NULL;
	Ray_t2469606224  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetMouseButtonDown_m47917805(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		GameObject_t1756533147 * L_1 = __this->get_igaguriPrefab_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		GameObject_t1756533147 * L_2 = Object_Instantiate_TisGameObject_t1756533147_m924818194(NULL /*static, unused*/, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m924818194_MethodInfo_var);
		V_0 = L_2;
		Camera_t189460977 * L_3 = Camera_get_main_m475173995(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		Vector3_t2243707580  L_4 = Input_get_mousePosition_m146923508(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Ray_t2469606224  L_5 = Camera_ScreenPointToRay_m614889538(L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		Vector3_t2243707580  L_6 = Ray_get_direction_m4059191533((&V_1), /*hidden argument*/NULL);
		V_2 = L_6;
		GameObject_t1756533147 * L_7 = V_0;
		NullCheck(L_7);
		IgaguriController_t743002922 * L_8 = GameObject_GetComponent_TisIgaguriController_t743002922_m1958761977(L_7, /*hidden argument*/GameObject_GetComponent_TisIgaguriController_t743002922_m1958761977_MethodInfo_var);
		Vector3_t2243707580  L_9 = Vector3_get_normalized_m936072361((&V_2), /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_9, (2000.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		IgaguriController_Shoot_m469588479(L_8, L_10, /*hidden argument*/NULL);
	}

IL_004b:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
