#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
183,
190,
191,
192,
193,
194,
195,
196,
197,
198,
201,
202,
358,
359,
361,
390,
391,
392,
412,
413,
414,
415,
416,
489,
490,
491,
494,
531,
532,
534,
536,
538,
540,
545,
553,
554,
555,
556,
557,
558,
559,
560,
561,
562,
690,
691,
698,
701,
703,
708,
709,
711,
712,
716,
717,
718,
719,
721,
722,
723,
726,
727,
730,
731,
732,
800,
801,
803,
811,
812,
813,
814,
815,
819,
820,
821,
822,
823,
824,
826,
827,
828,
830,
831,
832,
836,
837,
838,
1106,
1277,
1278,
6050,
6051,
6053,
6054,
6055,
6056,
6057,
6059,
6061,
6063,
6064,
6071,
6073,
6077,
6078,
6080,
6082,
6084,
6096,
6105,
6106,
6108,
6109,
6110,
6111,
6112,
6114,
6116,
6979,
6983,
6985,
6986,
6987,
6988,
7033,
7034,
7035,
7036,
7055,
7056,
7057,
7058,
7090,
7133,
7136,
7144,
7145,
7146,
7401,
7403,
7404,
7429,
7430,
7431,
7446,
7452,
7459,
7469,
7472,
7542,
7548,
7549,
7550,
7551,
7557,
7570,
7590,
7591,
7599,
7601,
7608,
7609,
7612,
7614,
7619,
7625,
7626,
7633,
7635,
7645,
7648,
7649,
7650,
7660,
7671,
7677,
7678,
7679,
7681,
7682,
7692,
7710,
7723,
7742,
7772,
7773,
8126,
8261,
8498,
8499,
8506,
8507,
8508,
8513,
8573,
8731,
8732,
9978,
9997,
10004,
10005,
10007,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 183,
ves_icall_System_Array_InternalCreate,
// token 190,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 191,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 192,
ves_icall_System_Array_CanChangePrimitive,
// token 193,
ves_icall_System_Array_FastCopy_raw,
// token 194,
ves_icall_System_Array_GetLength_raw,
// token 195,
ves_icall_System_Array_GetLowerBound_raw,
// token 196,
ves_icall_System_Array_GetGenericValue_icall,
// token 197,
ves_icall_System_Array_GetValueImpl_raw,
// token 198,
ves_icall_System_Array_SetGenericValue_icall,
// token 201,
ves_icall_System_Array_SetValueImpl_raw,
// token 202,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 358,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 359,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 361,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 390,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 391,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 392,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 412,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 413,
ves_icall_System_Enum_ToObject_raw,
// token 414,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 415,
ves_icall_System_Enum_get_underlying_type_raw,
// token 416,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 489,
ves_icall_System_Environment_get_ProcessorCount,
// token 490,
ves_icall_System_Environment_get_TickCount,
// token 491,
ves_icall_System_Environment_get_TickCount64,
// token 494,
ves_icall_System_Environment_FailFast_raw,
// token 531,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 532,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 534,
ves_icall_System_GC_SuppressFinalize_raw,
// token 536,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 538,
ves_icall_System_GC_GetGCMemoryInfo,
// token 540,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 545,
ves_icall_System_Object_MemberwiseClone_raw,
// token 553,
ves_icall_System_Math_Abs_double,
// token 554,
ves_icall_System_Math_Ceiling,
// token 555,
ves_icall_System_Math_Cos,
// token 556,
ves_icall_System_Math_Floor,
// token 557,
ves_icall_System_Math_Log10,
// token 558,
ves_icall_System_Math_Pow,
// token 559,
ves_icall_System_Math_Sin,
// token 560,
ves_icall_System_Math_Sqrt,
// token 561,
ves_icall_System_Math_Tan,
// token 562,
ves_icall_System_Math_ModF,
// token 690,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 691,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 698,
ves_icall_RuntimeType_make_array_type_raw,
// token 701,
ves_icall_RuntimeType_make_byref_type_raw,
// token 703,
ves_icall_RuntimeType_MakePointerType_raw,
// token 708,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 709,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 711,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 712,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 716,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 717,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 718,
ves_icall_System_RuntimeType_getFullName_raw,
// token 719,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 721,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 722,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 723,
ves_icall_RuntimeType_GetFields_native_raw,
// token 726,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 727,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 730,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 731,
ves_icall_RuntimeType_get_Name_raw,
// token 732,
ves_icall_RuntimeType_get_Namespace_raw,
// token 800,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 801,
ves_icall_reflection_get_token_raw,
// token 803,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 811,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 812,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 813,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 814,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 815,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 819,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 820,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 821,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 822,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 823,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 824,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 826,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 827,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 828,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 830,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 831,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 832,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 836,
ves_icall_System_String_FastAllocateString_raw,
// token 837,
ves_icall_System_String_InternalIsInterned_raw,
// token 838,
ves_icall_System_String_InternalIntern_raw,
// token 1106,
ves_icall_System_Type_internal_from_handle_raw,
// token 1277,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1278,
ves_icall_System_ValueType_Equals_raw,
// token 6050,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6051,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6053,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6054,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6055,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6056,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6057,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6059,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6061,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6063,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6064,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 6071,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6073,
mono_monitor_exit_icall_raw,
// token 6077,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 6078,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6080,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6082,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6084,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6096,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 6105,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6106,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6108,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6109,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6110,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6111,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6112,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6114,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6116,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 6979,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 6983,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 6985,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 6986,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 6987,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 6988,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 7033,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 7034,
ves_icall_System_GCHandle_InternalFree_raw,
// token 7035,
ves_icall_System_GCHandle_InternalGet_raw,
// token 7036,
ves_icall_System_GCHandle_InternalSet_raw,
// token 7055,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 7056,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 7057,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 7058,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 7090,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 7133,
mono_object_hash_icall_raw,
// token 7136,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 7144,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 7145,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 7146,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 7401,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 7403,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 7404,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 7429,
mono_digest_get_public_token,
// token 7430,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 7431,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 7446,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 7452,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 7459,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 7469,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 7472,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 7542,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 7548,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 7549,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 7550,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 7551,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 7557,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 7570,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 7590,
ves_icall_reflection_get_token_raw,
// token 7591,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 7599,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 7601,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 7608,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 7609,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 7612,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 7614,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 7619,
ves_icall_reflection_get_token_raw,
// token 7625,
ves_icall_get_method_info_raw,
// token 7626,
ves_icall_get_method_attributes,
// token 7633,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 7635,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 7645,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 7648,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 7649,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 7650,
ves_icall_reflection_get_token_raw,
// token 7660,
ves_icall_InternalInvoke_raw,
// token 7671,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 7677,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 7678,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 7679,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 7681,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 7682,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 7692,
ves_icall_InternalInvoke_raw,
// token 7710,
ves_icall_reflection_get_token_raw,
// token 7723,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 7742,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 7772,
ves_icall_reflection_get_token_raw,
// token 7773,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 8126,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 8261,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 8498,
ves_icall_ModuleBuilder_basic_init_raw,
// token 8499,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 8506,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 8507,
ves_icall_ModuleBuilder_getToken_raw,
// token 8508,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 8513,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 8573,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 8731,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 8732,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 9978,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 9997,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 10004,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 10005,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 10007,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
0,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
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
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
};
