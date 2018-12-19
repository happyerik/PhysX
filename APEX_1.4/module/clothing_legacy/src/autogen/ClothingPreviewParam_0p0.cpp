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


#include "ClothingPreviewParam_0p0.h"
#include <string.h>
#include <stdlib.h>

using namespace NvParameterized;

namespace nvidia
{
namespace parameterized
{

using namespace ClothingPreviewParam_0p0NS;

const char* const ClothingPreviewParam_0p0Factory::vptr =
    NvParameterized::getVptr<ClothingPreviewParam_0p0, ClothingPreviewParam_0p0::ClassAlignment>();

const uint32_t NumParamDefs = 8;
static NvParameterized::DefinitionImpl* ParamDefTable; // now allocated in buildTree [NumParamDefs];


static const size_t ParamLookupChildrenTable[] =
{
	1, 2, 3, 4, 5, 6, 7,
};

#define TENUM(type) nvidia::##type
#define CHILDREN(index) &ParamLookupChildrenTable[index]
static const NvParameterized::ParamLookupNode ParamLookupTable[NumParamDefs] =
{
	{ TYPE_STRUCT, false, 0, CHILDREN(0), 6 },
	{ TYPE_MAT44, false, (size_t)(&((ParametersStruct*)0)->globalPose), NULL, 0 }, // globalPose
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->fallbackSkinning), NULL, 0 }, // fallbackSkinning
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->useInternalBoneOrder), NULL, 0 }, // useInternalBoneOrder
	{ TYPE_BOOL, false, (size_t)(&((ParametersStruct*)0)->updateStateWithGlobalMatrices), NULL, 0 }, // updateStateWithGlobalMatrices
	{ TYPE_U64, false, (size_t)(&((ParametersStruct*)0)->userData), NULL, 0 }, // userData
	{ TYPE_ARRAY, true, (size_t)(&((ParametersStruct*)0)->boneMatrices), CHILDREN(6), 1 }, // boneMatrices
	{ TYPE_MAT44, false, 1 * sizeof(physx::PxMat44), NULL, 0 }, // boneMatrices[]
};


bool ClothingPreviewParam_0p0::mBuiltFlag = false;
NvParameterized::MutexType ClothingPreviewParam_0p0::mBuiltFlagMutex;

ClothingPreviewParam_0p0::ClothingPreviewParam_0p0(NvParameterized::Traits* traits, void* buf, int32_t* refCount) :
	NvParameters(traits, buf, refCount)
{
	//mParameterizedTraits->registerFactory(className(), &ClothingPreviewParam_0p0FactoryInst);

	if (!buf) //Do not init data if it is inplace-deserialized
	{
		initDynamicArrays();
		initStrings();
		initReferences();
		initDefaults();
	}
}

ClothingPreviewParam_0p0::~ClothingPreviewParam_0p0()
{
	freeStrings();
	freeReferences();
	freeDynamicArrays();
}

void ClothingPreviewParam_0p0::destroy()
{
	// We cache these fields here to avoid overwrite in destructor
	bool doDeallocateSelf = mDoDeallocateSelf;
	NvParameterized::Traits* traits = mParameterizedTraits;
	int32_t* refCount = mRefCount;
	void* buf = mBuffer;

	this->~ClothingPreviewParam_0p0();

	NvParameters::destroy(this, traits, doDeallocateSelf, refCount, buf);
}

const NvParameterized::DefinitionImpl* ClothingPreviewParam_0p0::getParameterDefinitionTree(void)
{
	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

const NvParameterized::DefinitionImpl* ClothingPreviewParam_0p0::getParameterDefinitionTree(void) const
{
	ClothingPreviewParam_0p0* tmpParam = const_cast<ClothingPreviewParam_0p0*>(this);

	if (!mBuiltFlag) // Double-checked lock
	{
		NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);
		if (!mBuiltFlag)
		{
			tmpParam->buildTree();
		}
	}

	return(&ParamDefTable[0]);
}

NvParameterized::ErrorType ClothingPreviewParam_0p0::getParameterHandle(const char* long_name, Handle& handle) const
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

NvParameterized::ErrorType ClothingPreviewParam_0p0::getParameterHandle(const char* long_name, Handle& handle)
{
	ErrorType Ret = NvParameters::getParameterHandle(long_name, handle);
	if (Ret != ERROR_NONE)
	{
		return(Ret);
	}

	size_t offset;
	void* ptr;

	getVarPtr(handle, ptr, offset);

	if (ptr == NULL)
	{
		return(ERROR_INDEX_OUT_OF_RANGE);
	}

	return(ERROR_NONE);
}

void ClothingPreviewParam_0p0::getVarPtr(const Handle& handle, void*& ptr, size_t& offset) const
{
	ptr = getVarPtrHelper(&ParamLookupTable[0], const_cast<ClothingPreviewParam_0p0::ParametersStruct*>(&parameters()), handle, offset);
}


/* Dynamic Handle Indices */

void ClothingPreviewParam_0p0::freeParameterDefinitionTable(NvParameterized::Traits* traits)
{
	if (!traits)
	{
		return;
	}

	if (!mBuiltFlag) // Double-checked lock
	{
		return;
	}

	NvParameterized::MutexType::ScopedLock lock(mBuiltFlagMutex);

	if (!mBuiltFlag)
	{
		return;
	}

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		ParamDefTable[i].~DefinitionImpl();
	}

	traits->free(ParamDefTable);

	mBuiltFlag = false;
}

#define PDEF_PTR(index) (&ParamDefTable[index])

void ClothingPreviewParam_0p0::buildTree(void)
{

	uint32_t allocSize = sizeof(NvParameterized::DefinitionImpl) * NumParamDefs;
	ParamDefTable = (NvParameterized::DefinitionImpl*)(mParameterizedTraits->alloc(allocSize));
	memset(ParamDefTable, 0, allocSize);

	for (uint32_t i = 0; i < NumParamDefs; ++i)
	{
		NV_PARAM_PLACEMENT_NEW(ParamDefTable + i, NvParameterized::DefinitionImpl)(*mParameterizedTraits);
	}

	// Initialize DefinitionImpl node: nodeIndex=0, longName=""
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[0];
		ParamDef->init("", TYPE_STRUCT, "STRUCT", true);






	}

	// Initialize DefinitionImpl node: nodeIndex=1, longName="globalPose"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[1];
		ParamDef->init("globalPose", TYPE_MAT44, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "The pose where the clothing asset will be put into the scene", true);
		ParamDefTable[1].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=2, longName="fallbackSkinning"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[2];
		ParamDef->init("fallbackSkinning", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Performs the regular boneweighted skinning on the CPU before giving the\ndata out through the rendering API.\n", true);
		HintTable[1].init("shortDescription", "Performs skinning in software", true);
		ParamDefTable[2].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=3, longName="useInternalBoneOrder"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[3];
		ParamDef->init("useInternalBoneOrder", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("longDescription", "If this is set to true the bone buffers in updateState and the actor\ndescriptor have to be given in the same order as the bones are stored\ninternally in the asset. This can be queried using\nNxClothingAsset::getNumUsedBones and NxClothingAsset::getBoneName or\nNxClothingAsset::getBoneMapping.\n\nIf this is set to false, the bone buffers can be provided in the order as\nthey are stored in the application. This is either the bone order at\nauthoring time, or NxClothingAsset::remapBoneIndex can be called for each\nbone to let APEX know about the current ordering in the game. Note that\nthis is only recommended if the application already uses physx::PxMat44\n(or something binary equivalent) and does not have to convert the matrices.\n", true);
		HintTable[2].init("shortDescription", "Expect internally ordered bone arrays in updateState call.", true);
		ParamDefTable[3].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=4, longName="updateStateWithGlobalMatrices"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[4];
		ParamDef->init("updateStateWithGlobalMatrices", TYPE_BOOL, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("longDescription", "Depending on what matrices are present, the state can be updated using\nglobal world or object space bone matrices or composite matrices. The\ncomposite matrix can be generated by multiplying the world or object space\nmatrix by the inverse bone bine pose.\n\nNote: If there are problems which might be caused by bind poses being\ndifferent in the ClothingAsset and in the game's animation system, changing\nthis to true (and thus providing global pose matrices) might fix the problem.\n", true);
		HintTable[1].init("shortDescription", "Use world space matrices instead of composite (relative to bind pose) in NxClothingActor::updateState().", true);
		ParamDefTable[4].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=5, longName="userData"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[5];
		ParamDef->init("userData", TYPE_U64, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[2];
		static Hint* HintPtrTable[2] = { &HintTable[0], &HintTable[1], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("shortDescription", "Optional user data pointer associated with the clothing actor", true);
		ParamDefTable[5].setHints((const NvParameterized::Hint**)HintPtrTable, 2);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// Initialize DefinitionImpl node: nodeIndex=6, longName="boneMatrices"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[6];
		ParamDef->init("boneMatrices", TYPE_ARRAY, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("longDescription", "These matrices are sometimes referred to as composite matrices. They are the\nmultiplication of the current world space bone pose with the inverse bind\npose in world space.\nNote: If \'updateStateWithGlobalMatrices\' is set to true, these must be\nglobal poses instead.\n", true);
		HintTable[2].init("shortDescription", "An Array of matrices with the full transform for each bone", true);
		ParamDefTable[6].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */




		ParamDef->setArraySize(-1);
	}

	// Initialize DefinitionImpl node: nodeIndex=7, longName="boneMatrices[]"
	{
		NvParameterized::DefinitionImpl* ParamDef = &ParamDefTable[7];
		ParamDef->init("boneMatrices", TYPE_MAT44, NULL, true);

#ifdef NV_PARAMETERIZED_HIDE_DESCRIPTIONS

		static HintImpl HintTable[1];
		static Hint* HintPtrTable[1] = { &HintTable[0], };
		HintTable[0].init("editorDisplay", "false", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 1);

#else

		static HintImpl HintTable[3];
		static Hint* HintPtrTable[3] = { &HintTable[0], &HintTable[1], &HintTable[2], };
		HintTable[0].init("editorDisplay", "false", true);
		HintTable[1].init("longDescription", "These matrices are sometimes referred to as composite matrices. They are the\nmultiplication of the current world space bone pose with the inverse bind\npose in world space.\nNote: If \'updateStateWithGlobalMatrices\' is set to true, these must be\nglobal poses instead.\n", true);
		HintTable[2].init("shortDescription", "An Array of matrices with the full transform for each bone", true);
		ParamDefTable[7].setHints((const NvParameterized::Hint**)HintPtrTable, 3);

#endif /* NV_PARAMETERIZED_HIDE_DESCRIPTIONS */





	}

	// SetChildren for: nodeIndex=0, longName=""
	{
		static Definition* Children[6];
		Children[0] = PDEF_PTR(1);
		Children[1] = PDEF_PTR(2);
		Children[2] = PDEF_PTR(3);
		Children[3] = PDEF_PTR(4);
		Children[4] = PDEF_PTR(5);
		Children[5] = PDEF_PTR(6);

		ParamDefTable[0].setChildren(Children, 6);
	}

	// SetChildren for: nodeIndex=6, longName="boneMatrices"
	{
		static Definition* Children[1];
		Children[0] = PDEF_PTR(7);

		ParamDefTable[6].setChildren(Children, 1);
	}

	mBuiltFlag = true;

}
void ClothingPreviewParam_0p0::initStrings(void)
{
}

void ClothingPreviewParam_0p0::initDynamicArrays(void)
{
	boneMatrices.buf = NULL;
	boneMatrices.isAllocated = true;
	boneMatrices.elementSize = sizeof(physx::PxMat44);
	boneMatrices.arraySizes[0] = 0;
}

void ClothingPreviewParam_0p0::initDefaults(void)
{

	freeStrings();
	freeReferences();
	freeDynamicArrays();
	globalPose = physx::PxMat44(physx::PxVec4(1.0f));
	fallbackSkinning = bool(false);
	useInternalBoneOrder = bool(false);
	updateStateWithGlobalMatrices = bool(false);
	userData = uint64_t(0);

	initDynamicArrays();
	initStrings();
	initReferences();
}

void ClothingPreviewParam_0p0::initReferences(void)
{
}

void ClothingPreviewParam_0p0::freeDynamicArrays(void)
{
	if (boneMatrices.isAllocated && boneMatrices.buf)
	{
		mParameterizedTraits->free(boneMatrices.buf);
	}
}

void ClothingPreviewParam_0p0::freeStrings(void)
{
}

void ClothingPreviewParam_0p0::freeReferences(void)
{
}

} // namespace parameterized
} // namespace nvidia
