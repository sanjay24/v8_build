#ifndef V8_TORQUE_ARRAY_FROM_DSL_BASE_H__
#define V8_TORQUE_ARRAY_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"

namespace v8 {
namespace internal {

class ArrayBuiltinsFromDSLAssembler {
 public:
  explicit ArrayBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  void EnsureWriteableFastElements(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array);
  compiler::TNode<BoolT> IsJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedArray> p_a, compiler::TNode<Smi> p_i);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedArray> p_a, compiler::TNode<IntPtrT> p_i);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedArray> p_a, int31_t p_i);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_i);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<IntPtrT> p_i);
  compiler::TNode<Object> LoadElementOrUndefined(compiler::TNode<FixedDoubleArray> p_a, int31_t p_i);
  void StoreArrayHole(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_k);
  void StoreArrayHole(compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_k);
  void CopyArrayElement(compiler::TNode<FixedArray> p_elements, compiler::TNode<FixedArray> p_newElements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
  void CopyArrayElement(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<FixedDoubleArray> p_newElements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to);
  compiler::TNode<Number> ConvertToRelativeIndex(compiler::TNode<Number> p_index, compiler::TNode<Number> p_length);
  compiler::TNode<Object> ArrayForEachTorqueContinuation(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::TNode<Number> p_initialK);
  compiler::TNode<Object> FastArrayForEach(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);
  void CannotUseSameArrayAccessor9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<Code> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_originalMap, compiler::TNode<Number> p_originalLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
  void CannotUseSameArrayAccessor14ATJSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<Code> p_loadFn, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Map> p_initialMap, compiler::TNode<Number> p_initialLen, compiler::CodeAssemblerLabel* label_Cannot, compiler::CodeAssemblerLabel* label_Can);
  compiler::TNode<IntPtrT> AddStringLength(compiler::TNode<Context> p_context, compiler::TNode<IntPtrT> p_lenA, compiler::TNode<IntPtrT> p_lenB);
  struct Buffer {
    compiler::TNode<FixedArray> fixedArray;
    compiler::TNode<IntPtrT> index;
    compiler::TNode<IntPtrT> totalStringLength;
    compiler::TNode<BoolT> isOneByte;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<IntPtrT>, compiler::TNode<IntPtrT>, compiler::TNode<BoolT>> Flatten() const {
      return std::tuple_cat(std::make_tuple(fixedArray), std::make_tuple(index), std::make_tuple(totalStringLength), std::make_tuple(isOneByte));
    }
  };
  ArrayBuiltinsFromDSLAssembler::Buffer BufferInit(compiler::TNode<UintPtrT> p_len, compiler::TNode<String> p_sep);
  ArrayBuiltinsFromDSLAssembler::Buffer BufferAdd(compiler::TNode<Context> p_context, ArrayBuiltinsFromDSLAssembler::Buffer p_initialBuffer, compiler::TNode<String> p_str, compiler::TNode<IntPtrT> p_nofSeparators, compiler::TNode<IntPtrT> p_separatorLength);
  ArrayBuiltinsFromDSLAssembler::Buffer BufferAddSeparators(compiler::TNode<Context> p_context, ArrayBuiltinsFromDSLAssembler::Buffer p_buffer, compiler::TNode<IntPtrT> p_nofSeparators, compiler::TNode<IntPtrT> p_separatorLength, compiler::TNode<BoolT> p_write);
  compiler::TNode<String> BufferJoin(compiler::TNode<Context> p_context, ArrayBuiltinsFromDSLAssembler::Buffer p_buffer, compiler::TNode<String> p_sep);
  compiler::TNode<Object> ArrayJoin9ATJSArray(compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
  compiler::TNode<Object> ArrayJoin14ATJSTypedArray(compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lenNumber, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
  compiler::TNode<FixedArray> LoadJoinStack(compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_IfUninitialized);
  void SetJoinStack(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_stack);
  void JoinStackPushInline(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::CodeAssemblerLabel* label_ReceiverAdded, compiler::CodeAssemblerLabel* label_ReceiverNotAdded);
  void JoinStackPopInline(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver);
  compiler::TNode<Object> LoadWithHoleCheck12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
  compiler::TNode<Object> LoadWithHoleCheck18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole);
  compiler::TNode<Number> GetFromIndex(compiler::TNode<Context> p_context, compiler::TNode<Number> p_length, CodeStubArguments* p_arguments);
  compiler::TNode<Object> TryFastArrayLastIndexOf(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<Object> p_searchElement, compiler::TNode<Number> p_from, compiler::CodeAssemblerLabel* label_Slow);
  compiler::TNode<Object> GenericArrayLastIndexOf(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_object, compiler::TNode<Object> p_searchElement, compiler::TNode<Number> p_from);
  compiler::TNode<Smi> LoadElement23ATFastPackedSmiElements5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
  compiler::TNode<Object> LoadElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
  compiler::TNode<Float64T> LoadElement26ATFastPackedDoubleElements9ATfloat64(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index);
  void StoreElement23ATFastPackedSmiElements5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Smi> p_value);
  void StoreElement26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Object> p_value);
  void StoreElement26ATFastPackedDoubleElements9ATfloat64(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Float64T> p_value);
  compiler::TNode<Object> GenericArrayReverse(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver);
  void TryFastPackedArrayReverse(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::CodeAssemblerLabel* label_Slow);
  compiler::TNode<JSArray> HandleSimpleArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<JSArray> HandleFastAliasedSloppyArgumentsSlice(compiler::TNode<Context> p_context, compiler::TNode<JSArgumentsObjectWithLength> p_args, compiler::TNode<Smi> p_start, compiler::TNode<Smi> p_count, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<JSArray> HandleFastSlice(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Number> p_startNumber, compiler::TNode<Number> p_countNumber, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<FixedArray> Extract12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity);
  compiler::TNode<FixedDoubleArray> Extract18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_first, compiler::TNode<Smi> p_count, compiler::TNode<Smi> p_capacity);
  compiler::TNode<Object> FastArraySplice(compiler::TNode<Context> p_context, CodeStubArguments* p_args, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_originalLengthNumber, compiler::TNode<Number> p_actualStartNumber, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCountNumber, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Object> FillDeletedElementsArray(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount, compiler::TNode<JSReceiver> p_a);
  void HandleForwardCase(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount);
  void HandleBackwardCase(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_itemCount, compiler::TNode<Number> p_actualStart, compiler::TNode<Number> p_actualDeleteCount);
  compiler::TNode<Object> SlowSplice(compiler::TNode<Context> p_context, CodeStubArguments* p_arguments, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Number> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Number> p_actualDeleteCount);
  void TryFastArrayUnshift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, CodeStubArguments* p_arguments, compiler::CodeAssemblerLabel* label_Slow);
  compiler::TNode<Number> GenericArrayUnshift(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, CodeStubArguments* p_arguments);
  compiler::TNode<Smi> kGenericElementsAccessorId();
  compiler::TNode<Smi> kFastElementsAccessorId();
  int31_t kReceiverIdx();
  int31_t kInitialReceiverMapIdx();
  int31_t kInitialReceiverLengthIdx();
  int31_t kUserCmpFnIdx();
  int31_t kSortComparePtrIdx();
  int31_t kLoadFnIdx();
  int31_t kStoreFnIdx();
  int31_t kCanUseSameAccessorFnIdx();
  int31_t kBailoutStatusIdx();
  int31_t kMinGallopIdx();
  int31_t kPendingRunsSizeIdx();
  int31_t kPendingRunsIdx();
  int31_t kTempArraySizeIdx();
  int31_t kTempArrayIdx();
  int31_t kAccessorIdx();
  compiler::TNode<IntPtrT> kSortStateSize();
  compiler::TNode<Smi> kFailure();
  compiler::TNode<Smi> kSuccess();
  int31_t kMaxMergePending();
  int31_t kMinGallopWins();
  compiler::TNode<Smi> kSortStateTempSize();
  compiler::TNode<Code> UnsafeCast108FT9ATContext22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Code> UnsafeCast70FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Code> UnsafeCast76FT9ATContext12ATFixedArray12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Code> UnsafeCast93FT9ATContext12ATJSReceiver22UT12ATHeapObject5ATSmi22UT12ATHeapNumber5ATSmi17UT7ATFalse6ATTrue(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Number> CallCompareFn(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Object> p_x, compiler::TNode<Object> p_y, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<HeapObject> ReloadElements(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Number> GetInitialReceiverLength(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Code> GetLoadFn(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Code> GetStoreFn(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Code> GetCanUseSameAccessorFn(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<JSReceiver> GetReceiver(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<FixedArray> GetTempArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Smi> GetPendingRunsSize(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState);
  void SetPendingRunsSize(compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_value);
  compiler::TNode<Smi> GetPendingRunBase(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
  void SetPendingRunBase(compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
  compiler::TNode<Smi> GetPendingRunLength(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run);
  void SetPendingRunLength(compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_run, compiler::TNode<Smi> p_value);
  void PushRun(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length);
  compiler::TNode<FixedArray> GetTempArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_requestedSize);
  void EnsureSuccess(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Smi> Failure(compiler::TNode<FixedArray> p_sortState);
  compiler::TNode<Object> CallLoad(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<HeapObject> p_elements, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_Bailout);
  void CallStore(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_store, compiler::TNode<HeapObject> p_elements, compiler::TNode<Smi> p_index, compiler::TNode<Object> p_value, compiler::CodeAssemblerLabel* label_Bailout);
  void CallCopyFromTempArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<HeapObject> p_dstElements, compiler::TNode<Smi> p_dstPos, compiler::TNode<FixedArray> p_tempArray, compiler::TNode<Smi> p_srcPos, compiler::TNode<Smi> p_length, compiler::CodeAssemblerLabel* label_Bailout);
  void CallCopyWithinSortArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<HeapObject> p_elements, compiler::TNode<Smi> p_srcPos, compiler::TNode<Smi> p_dstPos, compiler::TNode<Smi> p_length, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Smi> CallGallopRight(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<Object> p_key, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_hint, compiler::TNode<Oddball> p_useTempArray, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Smi> CallGallopLeft(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<Object> p_key, compiler::TNode<Smi> p_base, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_hint, compiler::TNode<Oddball> p_useTempArray, compiler::CodeAssemblerLabel* label_Bailout);
  void CallMergeAt(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_Bailout);
  void CopyToTempArray(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<HeapObject> p_srcElements, compiler::TNode<Smi> p_srcPos, compiler::TNode<FixedArray> p_tempArray, compiler::TNode<Smi> p_dstPos, compiler::TNode<Smi> p_length, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Smi> CountAndMakeRun(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_lowArg, compiler::TNode<Smi> p_high, compiler::CodeAssemblerLabel* label_Bailout);
  void ReverseRange(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::TNode<HeapObject> p_elements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<HeapObject> LoadElementsOrTempArray(compiler::TNode<Context> p_context, compiler::TNode<Oddball> p_useTempArray, compiler::TNode<FixedArray> p_sortState);
  void CopyElement(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::TNode<HeapObject> p_elements, compiler::TNode<Smi> p_from, compiler::TNode<Smi> p_to, compiler::CodeAssemblerLabel* label_Bailout);
  void MergeLow(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg, compiler::CodeAssemblerLabel* label_Bailout);
  void MergeHigh(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_baseA, compiler::TNode<Smi> p_lengthAArg, compiler::TNode<Smi> p_baseB, compiler::TNode<Smi> p_lengthBArg, compiler::CodeAssemblerLabel* label_Bailout);
  compiler::TNode<Smi> ComputeMinRunLength(compiler::TNode<Smi> p_nArg);
  compiler::TNode<BoolT> RunInvariantEstablished(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_pendingRuns, compiler::TNode<Smi> p_n);
  void MergeCollapse(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::CodeAssemblerLabel* label_Bailout);
  void MergeForceCollapse(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::CodeAssemblerLabel* label_Bailout);
  void InitializeSortState(compiler::TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor25ATGenericElementsAccessor(compiler::TNode<FixedArray> p_sortState);
  void ArrayTimSortImpl(compiler::TNode<Context> p_context, compiler::TNode<FixedArray> p_sortState, compiler::TNode<Smi> p_length, compiler::CodeAssemblerLabel* label_Bailout);
  void VisitAllElements18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);
  void VisitAllElements12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_len, compiler::TNode<JSReceiver> p_callbackfn, compiler::TNode<Object> p_thisArg, compiler::CodeAssemblerLabel* label_Bailout, compiler::TypedCodeAssemblerVariable<Smi>* label_Bailout_parameter_0);
  compiler::TNode<FixedArray> StoreAndGrowFixedArray8ATString(compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<String> p_element);
  compiler::TNode<FixedArray> StoreAndGrowFixedArray5ATSmi(compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<Smi> p_element);
  compiler::TNode<String> ArrayJoinImpl9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<Code> p_initialLoadFn);
  compiler::TNode<String> ArrayJoinImpl14ATJSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<JSReceiver> p_receiver, compiler::TNode<String> p_sep, compiler::TNode<Number> p_lengthNumber, bool p_useToLocaleString, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options, compiler::TNode<Code> p_initialLoadFn);
  compiler::TNode<FixedArray> StoreAndGrowFixedArray12ATJSReceiver(compiler::TNode<FixedArray> p_fixedArray, compiler::TNode<IntPtrT> p_index, compiler::TNode<JSReceiver> p_element);
  compiler::TNode<Object> CycleProtectedArrayJoin9ATJSArray(compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
  compiler::TNode<Object> CycleProtectedArrayJoin14ATJSTypedArray(compiler::TNode<Context> p_context, bool p_useToLocaleString, compiler::TNode<JSReceiver> p_o, compiler::TNode<Number> p_len, compiler::TNode<Object> p_sepObj, compiler::TNode<Object> p_locales, compiler::TNode<Object> p_options);
  compiler::TNode<Smi> FastArrayLastIndexOf12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Object> p_searchElement);
  compiler::TNode<Smi> FastArrayLastIndexOf18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_array, compiler::TNode<Smi> p_from, compiler::TNode<Object> p_searchElement);
  void FastPackedArrayReverse23ATFastPackedSmiElements5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
  void FastPackedArrayReverse26ATFastPackedObjectElements22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
  void FastPackedArrayReverse26ATFastPackedDoubleElements9ATfloat64(compiler::TNode<Context> p_context, compiler::TNode<FixedArrayBase> p_elements, compiler::TNode<Smi> p_length);
  void FastSplice12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, CodeStubArguments* p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_lengthDelta, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount, compiler::CodeAssemblerLabel* label_Bailout);
  void FastSplice18ATFixedDoubleArray22UT12ATHeapNumber5ATSmi(compiler::TNode<Context> p_context, CodeStubArguments* p_args, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_length, compiler::TNode<Smi> p_newLength, compiler::TNode<Smi> p_lengthDelta, compiler::TNode<Smi> p_actualStart, compiler::TNode<Smi> p_insertCount, compiler::TNode<Smi> p_actualDeleteCount, compiler::CodeAssemblerLabel* label_Bailout);
  void InitializeSortStateAccessor20ATFastDoubleElements(compiler::TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor23ATFastPackedSmiElements(compiler::TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor25ATFastSmiOrObjectElements(compiler::TNode<FixedArray> p_sortState);
  void InitializeSortStateAccessor20ATDictionaryElements(compiler::TNode<FixedArray> p_sortState);
  void DoMoveElements12ATFixedArray(compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
  void StoreHoles12ATFixedArray(compiler::TNode<FixedArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex);
  void DoCopyElements12ATFixedArray(compiler::TNode<FixedArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
  void DoMoveElements18ATFixedDoubleArray(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
  void StoreHoles18ATFixedDoubleArray(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<Smi> p_holeStartIndex, compiler::TNode<Smi> p_holeEndIndex);
  void DoCopyElements18ATFixedDoubleArray(compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<Smi> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<Smi> p_srcIndex, compiler::TNode<Smi> p_count);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;}; 

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_ARRAY_FROM_DSL_BASE_H__
