//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
//  * Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//  * Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//  * Neither the name of NVIDIA CORPORATION nor the names of its
//    contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ``AS IS'' AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
// OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Copyright (c) 2018 NVIDIA Corporation. All rights reserved.

// This file was generated by NvParameterized/scripts/GenParameterized.pl


#ifndef HEADER_DestructibleActorParam_0p3_h
#define HEADER_DestructibleActorParam_0p3_h

#include "NvParametersTypes.h"

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
#include "nvparameterized/NvParameterized.h"
#include "nvparameterized/NvParameterizedTraits.h"
#include "NvParameters.h"
#include "NvTraitsInternal.h"
#endif

namespace nvidia
{
namespace parameterized
{

#if PX_VC
#pragma warning(push)
#pragma warning(disable: 4324) // structure was padded due to __declspec(align())
#endif

namespace DestructibleActorParam_0p3NS
{

struct GroupsMask_Type;
struct LODWeights_Type;
struct ShapeDescFlags_Type;
struct ShapeDescTemplate_Type;
struct ContactPairFlag_Type;
struct ActorDescFlags_Type;
struct ActorDescTemplate_Type;
struct BodyDescFlags_Type;
struct BodyDescTemplate_Type;
struct DestructibleDepthParameters_Type;
struct DestructibleParametersFlag_Type;
struct DestructibleParameters_Type;

struct STRING_DynamicArray1D_Type
{
	NvParameterized::DummyStringStruct* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_DynamicArray1D_Type
{
	DestructibleDepthParameters_Type* buf;
	bool isAllocated;
	int32_t elementSize;
	int32_t arraySizes[1];
};

struct DestructibleDepthParameters_Type
{
	bool TAKE_IMPACT_DAMAGE;
	bool IGNORE_POSE_UPDATES;
	bool IGNORE_RAYCAST_CALLBACKS;
	bool IGNORE_CONTACT_CALLBACKS;
	bool USER_FLAG_0;
	bool USER_FLAG_1;
	bool USER_FLAG_2;
	bool USER_FLAG_3;
};
struct GroupsMask_Type
{
	bool useGroupsMask;
	uint32_t bits0;
	uint32_t bits1;
	uint32_t bits2;
	uint32_t bits3;
};
struct DestructibleParametersFlag_Type
{
	bool ACCUMULATE_DAMAGE;
	bool DEBRIS_TIMEOUT;
	bool DEBRIS_MAX_SEPARATION;
	bool CRUMBLE_SMALLEST_CHUNKS;
	bool ACCURATE_RAYCASTS;
	bool USE_VALID_BOUNDS;
};
struct ShapeDescFlags_Type
{
	bool NX_TRIGGER_ON_ENTER;
	bool NX_TRIGGER_ON_LEAVE;
	bool NX_TRIGGER_ON_STAY;
	bool NX_SF_VISUALIZATION;
	bool NX_SF_DISABLE_COLLISION;
	bool NX_SF_FEATURE_INDICES;
	bool NX_SF_DISABLE_RAYCASTING;
	bool NX_SF_POINT_CONTACT_FORCE;
	bool NX_SF_FLUID_DRAIN;
	bool NX_SF_FLUID_DISABLE_COLLISION;
	bool NX_SF_FLUID_TWOWAY;
	bool NX_SF_DISABLE_RESPONSE;
	bool NX_SF_DYNAMIC_DYNAMIC_CCD;
	bool NX_SF_DISABLE_SCENE_QUERIES;
	bool NX_SF_CLOTH_DRAIN;
	bool NX_SF_CLOTH_DISABLE_COLLISION;
	bool NX_SF_CLOTH_TWOWAY;
	bool NX_SF_SOFTBODY_DRAIN;
	bool NX_SF_SOFTBODY_DISABLE_COLLISION;
	bool NX_SF_SOFTBODY_TWOWAY;
};
struct ShapeDescTemplate_Type
{
	ShapeDescFlags_Type flags;
	uint16_t collisionGroup;
	GroupsMask_Type groupsMask;
	uint16_t materialIndex;
	float density;
	float skinWidth;
	uint64_t userData;
	uint64_t name;
};
struct DestructibleParameters_Type
{
	float damageThreshold;
	float damageToRadius;
	float damageCap;
	float forceToDamage;
	float impactVelocityThreshold;
	float materialStrength;
	float damageToPercentDeformation;
	float deformationPercentLimit;
	uint32_t minimumFractureDepth;
	int32_t debrisDepth;
	uint32_t essentialDepth;
	float debrisLifetimeMin;
	float debrisLifetimeMax;
	float debrisMaxSeparationMin;
	float debrisMaxSeparationMax;
	physx::PxBounds3 validBounds;
	float maxChunkSpeed;
	DestructibleParametersFlag_Type flags;
	float fractureImpulseScale;
	uint16_t dynamicChunkDominanceGroup;
	GroupsMask_Type dynamicChunksGroupsMask;
};
struct ContactPairFlag_Type
{
	bool NX_IGNORE_PAIR;
	bool NX_NOTIFY_ON_START_TOUCH;
	bool NX_NOTIFY_ON_END_TOUCH;
	bool NX_NOTIFY_ON_TOUCH;
	bool NX_NOTIFY_ON_IMPACT;
	bool NX_NOTIFY_ON_ROLL;
	bool NX_NOTIFY_ON_SLIDE;
	bool NX_NOTIFY_FORCES;
	bool NX_NOTIFY_ON_START_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_END_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_ON_TOUCH_FORCE_THRESHOLD;
	bool NX_NOTIFY_CONTACT_MODIFICATION;
};
struct LODWeights_Type
{
	float maxDistance;
	float distanceWeight;
	float maxAge;
	float ageWeight;
	float bias;
};
struct BodyDescFlags_Type
{
	bool NX_BF_DISABLE_GRAVITY;
	bool NX_BF_FILTER_SLEEP_VEL;
	bool NX_BF_ENERGY_SLEEP_TEST;
	bool NX_BF_VISUALIZATION;
};
struct BodyDescTemplate_Type
{
	BodyDescFlags_Type flags;
	float wakeUpCounter;
	float linearDamping;
	float angularDamping;
	float maxAngularVelocity;
	float CCDMotionThreshold;
	float sleepLinearVelocity;
	float sleepAngularVelocity;
	uint32_t solverIterationCount;
	float sleepEnergyThreshold;
	float sleepDamping;
	float contactReportThreshold;
};
struct ActorDescFlags_Type
{
	bool NX_AF_DISABLE_COLLISION;
	bool NX_AF_DISABLE_RESPONSE;
	bool NX_AF_LOCK_COM;
	bool NX_AF_FLUID_DISABLE_COLLISION;
	bool NX_AF_CONTACT_MODIFICATION;
	bool NX_AF_FORCE_CONE_FRICTION;
	bool NX_AF_USER_ACTOR_PAIR_FILTERING;
};
struct ActorDescTemplate_Type
{
	ActorDescFlags_Type flags;
	float density;
	uint16_t actorCollisionGroup;
	uint16_t dominanceGroup;
	ContactPairFlag_Type contactReportFlags;
	uint16_t forceFieldMaterial;
	uint64_t userData;
	uint64_t name;
	uint64_t compartment;
};

struct ParametersStruct
{

	NvParameterized::DummyStringStruct crumbleEmitterName;
	NvParameterized::DummyStringStruct dustEmitterName;
	float globalPose[12];
	physx::PxVec3 scale;
	bool dynamic;
	uint32_t supportDepth;
	bool formExtendedStructures;
	bool useAssetDefinedSupport;
	bool useWorldSupport;
	float massScaleExponent;
	bool renderStaticChunksSeparately;
	STRING_DynamicArray1D_Type overrideSkinnedMaterialNames;
	STRING_DynamicArray1D_Type overrideStaticMaterialNames;
	DestructibleParameters_Type destructibleParameters;
	DestructibleDepthParameters_DynamicArray1D_Type depthParameters;
	ShapeDescTemplate_Type shapeDescTemplate;
	ActorDescTemplate_Type actorDescTemplate;
	BodyDescTemplate_Type bodyDescTemplate;

};

static const uint32_t checksum[] = { 0xf78aa4ca, 0x62e8ff0b, 0x6b3dcc04, 0xe44d2726, };

} // namespace DestructibleActorParam_0p3NS

#ifndef NV_PARAMETERIZED_ONLY_LAYOUTS
class DestructibleActorParam_0p3 : public NvParameterized::NvParameters, public DestructibleActorParam_0p3NS::ParametersStruct
{
public:
	DestructibleActorParam_0p3(NvParameterized::Traits* traits, void* buf = 0, int32_t* refCount = 0);

	virtual ~DestructibleActorParam_0p3();

	virtual void destroy();

	static const char* staticClassName(void)
	{
		return("DestructibleActorParam");
	}

	const char* className(void) const
	{
		return(staticClassName());
	}

	static const uint32_t ClassVersion = ((uint32_t)0 << 16) + (uint32_t)3;

	static uint32_t staticVersion(void)
	{
		return ClassVersion;
	}

	uint32_t version(void) const
	{
		return(staticVersion());
	}

	static const uint32_t ClassAlignment = 8;

	static const uint32_t* staticChecksum(uint32_t& bits)
	{
		bits = 8 * sizeof(DestructibleActorParam_0p3NS::checksum);
		return DestructibleActorParam_0p3NS::checksum;
	}

	static void freeParameterDefinitionTable(NvParameterized::Traits* traits);

	const uint32_t* checksum(uint32_t& bits) const
	{
		return staticChecksum(bits);
	}

	const DestructibleActorParam_0p3NS::ParametersStruct& parameters(void) const
	{
		DestructibleActorParam_0p3* tmpThis = const_cast<DestructibleActorParam_0p3*>(this);
		return *(static_cast<DestructibleActorParam_0p3NS::ParametersStruct*>(tmpThis));
	}

	DestructibleActorParam_0p3NS::ParametersStruct& parameters(void)
	{
		return *(static_cast<DestructibleActorParam_0p3NS::ParametersStruct*>(this));
	}

	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle) const;
	virtual NvParameterized::ErrorType getParameterHandle(const char* long_name, NvParameterized::Handle& handle);

	void initDefaults(void);

protected:

	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void);
	virtual const NvParameterized::DefinitionImpl* getParameterDefinitionTree(void) const;


	virtual void getVarPtr(const NvParameterized::Handle& handle, void*& ptr, size_t& offset) const;

private:

	void buildTree(void);
	void initDynamicArrays(void);
	void initStrings(void);
	void initReferences(void);
	void freeDynamicArrays(void);
	void freeStrings(void);
	void freeReferences(void);

	static bool mBuiltFlag;
	static NvParameterized::MutexType mBuiltFlagMutex;
};

class DestructibleActorParam_0p3Factory : public NvParameterized::Factory
{
	static const char* const vptr;

public:

	virtual void freeParameterDefinitionTable(NvParameterized::Traits* traits)
	{
		DestructibleActorParam_0p3::freeParameterDefinitionTable(traits);
	}

	virtual NvParameterized::Interface* create(NvParameterized::Traits* paramTraits)
	{
		// placement new on this class using mParameterizedTraits

		void* newPtr = paramTraits->alloc(sizeof(DestructibleActorParam_0p3), DestructibleActorParam_0p3::ClassAlignment);
		if (!NvParameterized::IsAligned(newPtr, DestructibleActorParam_0p3::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleActorParam_0p3");
			paramTraits->free(newPtr);
			return 0;
		}

		memset(newPtr, 0, sizeof(DestructibleActorParam_0p3)); // always initialize memory allocated to zero for default values
		return NV_PARAM_PLACEMENT_NEW(newPtr, DestructibleActorParam_0p3)(paramTraits);
	}

	virtual NvParameterized::Interface* finish(NvParameterized::Traits* paramTraits, void* bufObj, void* bufStart, int32_t* refCount)
	{
		if (!NvParameterized::IsAligned(bufObj, DestructibleActorParam_0p3::ClassAlignment)
		        || !NvParameterized::IsAligned(bufStart, DestructibleActorParam_0p3::ClassAlignment))
		{
			NV_PARAM_TRAITS_WARNING(paramTraits, "Unaligned memory allocation for class DestructibleActorParam_0p3");
			return 0;
		}

		// Init NvParameters-part
		// We used to call empty constructor of DestructibleActorParam_0p3 here
		// but it may call default constructors of members and spoil the data
		NV_PARAM_PLACEMENT_NEW(bufObj, NvParameterized::NvParameters)(paramTraits, bufStart, refCount);

		// Init vtable (everything else is already initialized)
		*(const char**)bufObj = vptr;

		return (DestructibleActorParam_0p3*)bufObj;
	}

	virtual const char* getClassName()
	{
		return (DestructibleActorParam_0p3::staticClassName());
	}

	virtual uint32_t getVersion()
	{
		return (DestructibleActorParam_0p3::staticVersion());
	}

	virtual uint32_t getAlignment()
	{
		return (DestructibleActorParam_0p3::ClassAlignment);
	}

	virtual const uint32_t* getChecksum(uint32_t& bits)
	{
		return (DestructibleActorParam_0p3::staticChecksum(bits));
	}
};
#endif // NV_PARAMETERIZED_ONLY_LAYOUTS

} // namespace parameterized
} // namespace nvidia

#if PX_VC
#pragma warning(pop)
#endif

#endif
