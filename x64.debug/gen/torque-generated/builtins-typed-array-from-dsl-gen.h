#ifndef V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
#define V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"

namespace v8 {
namespace internal {

class TypedArrayBuiltinsFromDSLAssembler {
 public:
  explicit TypedArrayBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  compiler::TNode<Code> UnsafeCast58FT9ATContext14ATJSTypedArray5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  compiler::TNode<Code> UnsafeCast82FT9ATContext14ATJSTypedArray5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o);
  ElementsKind KindForArrayType17ATFixedUint8Array();
  ElementsKind KindForArrayType16ATFixedInt8Array();
  ElementsKind KindForArrayType18ATFixedUint16Array();
  ElementsKind KindForArrayType17ATFixedInt16Array();
  ElementsKind KindForArrayType18ATFixedUint32Array();
  ElementsKind KindForArrayType17ATFixedInt32Array();
  ElementsKind KindForArrayType19ATFixedFloat32Array();
  ElementsKind KindForArrayType19ATFixedFloat64Array();
  ElementsKind KindForArrayType24ATFixedUint8ClampedArray();
  ElementsKind KindForArrayType21ATFixedBigUint64Array();
  ElementsKind KindForArrayType20ATFixedBigInt64Array();
  compiler::TNode<Number> CallCompareWithDetachedCheck(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b, compiler::CodeAssemblerLabel* label_Detached);
  void TypedArrayInsertionSort(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<Smi> p_fromArg, compiler::TNode<Smi> p_toArg, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::CodeAssemblerLabel* label_Detached);
  void TypedArrayQuickSortImpl(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<Smi> p_fromArg, compiler::TNode<Smi> p_toArg, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::CodeAssemblerLabel* label_Detached);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;}; 

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TYPED_ARRAY_FROM_DSL_BASE_H__
