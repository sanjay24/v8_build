#include "src/builtins/builtins-utils-gen.h"
#include "src/builtins/builtins.h"
#include "src/code-factory.h"
#include "src/elements-kind.h"
#include "src/heap/factory-inl.h"
#include "src/objects.h"
#include "src/objects/arguments.h"
#include "src/objects/bigint.h"
#include "src/builtins/builtins-array-gen.h"
#include "src/builtins/builtins-collections-gen.h"
#include "src/builtins/builtins-data-view-gen.h"
#include "src/builtins/builtins-iterator-gen.h"
#include "src/builtins/builtins-typed-array-gen.h"
#include "torque-generated/builtins-base-from-dsl-gen.h"
#include "torque-generated/builtins-arguments-from-dsl-gen.h"
#include "torque-generated/builtins-array-from-dsl-gen.h"
#include "torque-generated/builtins-collections-from-dsl-gen.h"
#include "torque-generated/builtins-data-view-from-dsl-gen.h"
#include "torque-generated/builtins-object-from-dsl-gen.h"
#include "torque-generated/builtins-iterator-from-dsl-gen.h"
#include "torque-generated/builtins-typed-array-from-dsl-gen.h"
#include "torque-generated/builtins-test-from-dsl-gen.h"

namespace v8 {
namespace internal {

compiler::TNode<Code> TypedArrayBuiltinsFromDSLAssembler::UnsafeCast58FT9ATContext14ATJSTypedArray5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Code> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Code> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Code> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Code>{tmp3};
}

compiler::TNode<Code> TypedArrayBuiltinsFromDSLAssembler::UnsafeCast82FT9ATContext14ATJSTypedArray5ATSmi22UT12ATHeapObject5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Code> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Code> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Code> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Code>{tmp3};
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedUint8Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return UINT8_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType16ATFixedInt8Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return INT8_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint16Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return UINT16_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt16Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return INT16_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType18ATFixedUint32Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return UINT32_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType17ATFixedInt32Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return INT32_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat32Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return FLOAT32_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType19ATFixedFloat64Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return FLOAT64_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType24ATFixedUint8ClampedArray() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return UINT8_CLAMPED_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType21ATFixedBigUint64Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return BIGUINT64_ELEMENTS;
}

ElementsKind TypedArrayBuiltinsFromDSLAssembler::KindForArrayType20ATFixedBigInt64Array() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
  return BIGINT64_ELEMENTS;
}

compiler::TNode<Number> TypedArrayBuiltinsFromDSLAssembler::CallCompareWithDetachedCheck(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Object> p_a, compiler::TNode<Object> p_b, compiler::CodeAssemblerLabel* label_Detached) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, JSReceiver, Object, Object, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_comparefn, p_a, p_b);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<JSReceiver> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    compiler::TNode<Oddball> tmp5;
    USE(tmp5);
    tmp5 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<Object> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).Call(compiler::TNode<Context>{tmp0}, compiler::TNode<JSReceiver>{tmp2}, compiler::TNode<Object>{tmp5}, compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp4}));
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber_Inline(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp6}));
    compiler::TNode<JSArrayBuffer> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<JSArrayBuffer>(TypedArrayBuiltinsAssembler(state_).LoadTypedArrayBuffer(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp8}));
    ca_.Branch(tmp9, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSTypedArray> tmp11;
    compiler::TNode<JSReceiver> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Number> tmp15;
    ca_.Bind(&block3, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Number> tmp21;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).NumberIsNaN(compiler::TNode<Number>{tmp21}));
    ca_.Branch(tmp22, &block5, &block6, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSTypedArray> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Number> tmp28;
    ca_.Bind(&block5, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Number> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block2, tmp29);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<JSTypedArray> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<Number> tmp35;
    ca_.Bind(&block6, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block2, tmp35);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Detached);
  }

    compiler::TNode<Number> tmp36;
    ca_.Bind(&block2, &tmp36);
  return compiler::TNode<Number>{tmp36};
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayInsertionSort(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<Smi> p_fromArg, compiler::TNode<Smi> p_toArg, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::CodeAssemblerLabel* label_Detached) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Context, JSTypedArray, JSReceiver, Object, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Context, JSTypedArray, JSReceiver, Object, Object, Number> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Number, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi, Object, Number> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_fromArg, p_toArg, p_comparefn, p_load, p_store);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Code> tmp5;
    compiler::TNode<Code> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    compiler::TNode<JSArrayBuffer> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<JSArrayBuffer>(TypedArrayBuiltinsAssembler(state_).LoadTypedArrayBuffer(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp7}));
    ca_.Branch(tmp8, &block3, &block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp2, tmp3);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSTypedArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<Smi> tmp12;
    compiler::TNode<JSReceiver> tmp13;
    compiler::TNode<Code> tmp14;
    compiler::TNode<Code> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    ca_.Bind(&block3, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<JSTypedArray> tmp19;
    compiler::TNode<Smi> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<JSReceiver> tmp22;
    compiler::TNode<Code> tmp23;
    compiler::TNode<Code> tmp24;
    compiler::TNode<Smi> tmp25;
    compiler::TNode<Smi> tmp26;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    compiler::TNode<Smi> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp25}, compiler::TNode<Smi>{tmp27}));
    ca_.Goto(&block7, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp28);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSTypedArray> tmp30;
    compiler::TNode<Smi> tmp31;
    compiler::TNode<Smi> tmp32;
    compiler::TNode<JSReceiver> tmp33;
    compiler::TNode<Code> tmp34;
    compiler::TNode<Code> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    ca_.Bind(&block7, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    compiler::TNode<BoolT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp38}, compiler::TNode<Smi>{tmp37}));
    ca_.Branch(tmp39, &block5, &block6, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSTypedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Code> tmp45;
    compiler::TNode<Code> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Smi> tmp49;
    ca_.Bind(&block5, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    compiler::TNode<Object> tmp50 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp45, tmp40, tmp41, tmp49); 
    USE(tmp50);
    compiler::TNode<Smi> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp49}, compiler::TNode<Smi>{tmp51}));
    ca_.Goto(&block11, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp52);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp53;
    compiler::TNode<JSTypedArray> tmp54;
    compiler::TNode<Smi> tmp55;
    compiler::TNode<Smi> tmp56;
    compiler::TNode<JSReceiver> tmp57;
    compiler::TNode<Code> tmp58;
    compiler::TNode<Code> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<Smi> tmp61;
    compiler::TNode<Smi> tmp62;
    compiler::TNode<Object> tmp63;
    compiler::TNode<Smi> tmp64;
    ca_.Bind(&block11, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64);
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThanOrEqual(compiler::TNode<Smi>{tmp64}, compiler::TNode<Smi>{tmp60}));
    ca_.Branch(tmp65, &block9, &block10, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<JSTypedArray> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Code> tmp71;
    compiler::TNode<Code> tmp72;
    compiler::TNode<Smi> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Smi> tmp77;
    ca_.Bind(&block9, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77);
    compiler::TNode<Object> tmp78 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp71, tmp66, tmp67, tmp77); 
    USE(tmp78);
    compiler::TNode<Number> tmp79;
    USE(tmp79);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp79 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp66}, compiler::TNode<JSTypedArray>{tmp67}, compiler::TNode<JSReceiver>{tmp70}, compiler::TNode<Object>{tmp78}, compiler::TNode<Object>{tmp76}, &label0);
    ca_.Goto(&block13, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp66, tmp67, tmp70, tmp78, tmp76, tmp79);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block14, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp66, tmp67, tmp70, tmp78, tmp76);
    }
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp80;
    compiler::TNode<JSTypedArray> tmp81;
    compiler::TNode<Smi> tmp82;
    compiler::TNode<Smi> tmp83;
    compiler::TNode<JSReceiver> tmp84;
    compiler::TNode<Code> tmp85;
    compiler::TNode<Code> tmp86;
    compiler::TNode<Smi> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<Object> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Context> tmp93;
    compiler::TNode<JSTypedArray> tmp94;
    compiler::TNode<JSReceiver> tmp95;
    compiler::TNode<Object> tmp96;
    compiler::TNode<Object> tmp97;
    ca_.Bind(&block14, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    ca_.Goto(&block1);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<JSTypedArray> tmp99;
    compiler::TNode<Smi> tmp100;
    compiler::TNode<Smi> tmp101;
    compiler::TNode<JSReceiver> tmp102;
    compiler::TNode<Code> tmp103;
    compiler::TNode<Code> tmp104;
    compiler::TNode<Smi> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<Smi> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Smi> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Context> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<JSReceiver> tmp113;
    compiler::TNode<Object> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Number> tmp116;
    ca_.Bind(&block13, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116);
    compiler::TNode<Number> tmp117;
    USE(tmp117);
    tmp117 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp116}, compiler::TNode<Number>{tmp117}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block17, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp116, tmp116);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block18, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp116, tmp116);
    }
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp118;
    compiler::TNode<JSTypedArray> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<JSReceiver> tmp122;
    compiler::TNode<Code> tmp123;
    compiler::TNode<Code> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<Smi> tmp126;
    compiler::TNode<Smi> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Smi> tmp129;
    compiler::TNode<Object> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<Number> tmp132;
    ca_.Bind(&block17, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    ca_.Goto(&block15, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp133;
    compiler::TNode<JSTypedArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<Smi> tmp136;
    compiler::TNode<JSReceiver> tmp137;
    compiler::TNode<Code> tmp138;
    compiler::TNode<Code> tmp139;
    compiler::TNode<Smi> tmp140;
    compiler::TNode<Smi> tmp141;
    compiler::TNode<Smi> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Smi> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<Number> tmp146;
    compiler::TNode<Number> tmp147;
    ca_.Bind(&block18, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147);
    ca_.Goto(&block16, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp148;
    compiler::TNode<JSTypedArray> tmp149;
    compiler::TNode<Smi> tmp150;
    compiler::TNode<Smi> tmp151;
    compiler::TNode<JSReceiver> tmp152;
    compiler::TNode<Code> tmp153;
    compiler::TNode<Code> tmp154;
    compiler::TNode<Smi> tmp155;
    compiler::TNode<Smi> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Number> tmp161;
    ca_.Bind(&block15, &tmp148, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    compiler::TNode<Smi> tmp162;
    USE(tmp162);
    tmp162 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp163;
    USE(tmp163);
    tmp163 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp159}, compiler::TNode<Smi>{tmp162}));
    compiler::TNode<Object> tmp164 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp154, tmp148, tmp149, tmp163, tmp160); 
    USE(tmp164);
    ca_.Goto(&block19, tmp148, tmp149, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<JSTypedArray> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Code> tmp170;
    compiler::TNode<Code> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Smi> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Number> tmp178;
    ca_.Bind(&block16, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178);
    ca_.Goto(&block10, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp179;
    compiler::TNode<JSTypedArray> tmp180;
    compiler::TNode<Smi> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<JSReceiver> tmp183;
    compiler::TNode<Code> tmp184;
    compiler::TNode<Code> tmp185;
    compiler::TNode<Smi> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Smi> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Number> tmp192;
    ca_.Bind(&block19, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192);
    ca_.Goto(&block12, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp190);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp193;
    compiler::TNode<JSTypedArray> tmp194;
    compiler::TNode<Smi> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<JSReceiver> tmp197;
    compiler::TNode<Code> tmp198;
    compiler::TNode<Code> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Smi> tmp204;
    ca_.Bind(&block12, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204);
    compiler::TNode<Smi> tmp205;
    USE(tmp205);
    tmp205 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp206;
    USE(tmp206);
    tmp206 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp204}, compiler::TNode<Smi>{tmp205}));
    ca_.Goto(&block11, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp206);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<JSTypedArray> tmp208;
    compiler::TNode<Smi> tmp209;
    compiler::TNode<Smi> tmp210;
    compiler::TNode<JSReceiver> tmp211;
    compiler::TNode<Code> tmp212;
    compiler::TNode<Code> tmp213;
    compiler::TNode<Smi> tmp214;
    compiler::TNode<Smi> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Smi> tmp218;
    ca_.Bind(&block10, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218);
    compiler::TNode<Smi> tmp219;
    USE(tmp219);
    tmp219 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp220;
    USE(tmp220);
    tmp220 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp218}, compiler::TNode<Smi>{tmp219}));
    compiler::TNode<Object> tmp221 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp213, tmp207, tmp208, tmp220, tmp217); 
    USE(tmp221);
    ca_.Goto(&block8, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp222;
    compiler::TNode<JSTypedArray> tmp223;
    compiler::TNode<Smi> tmp224;
    compiler::TNode<Smi> tmp225;
    compiler::TNode<JSReceiver> tmp226;
    compiler::TNode<Code> tmp227;
    compiler::TNode<Code> tmp228;
    compiler::TNode<Smi> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    ca_.Bind(&block8, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231);
    compiler::TNode<Smi> tmp232;
    USE(tmp232);
    tmp232 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp233;
    USE(tmp233);
    tmp233 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp231}, compiler::TNode<Smi>{tmp232}));
    ca_.Goto(&block7, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp233);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp234;
    compiler::TNode<JSTypedArray> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<JSReceiver> tmp238;
    compiler::TNode<Code> tmp239;
    compiler::TNode<Code> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<Smi> tmp242;
    compiler::TNode<Smi> tmp243;
    ca_.Bind(&block6, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Detached);
  }

    ca_.Bind(&block2);
}

void TypedArrayBuiltinsFromDSLAssembler::TypedArrayQuickSortImpl(compiler::TNode<Context> p_context, compiler::TNode<JSTypedArray> p_array, compiler::TNode<Smi> p_fromArg, compiler::TNode<Smi> p_toArg, compiler::TNode<JSReceiver> p_comparefn, compiler::TNode<Code> p_load, compiler::TNode<Code> p_store, compiler::CodeAssemblerLabel* label_Detached) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Context, JSTypedArray, JSReceiver, Object, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Context, JSTypedArray, JSReceiver, Object, Object, Number> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Context, JSTypedArray, JSReceiver, Object, Object> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Context, JSTypedArray, JSReceiver, Object, Object, Number> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Context, JSTypedArray, JSReceiver, Object, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Context, JSTypedArray, JSReceiver, Object, Object, Number> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number, Number> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number, Number> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Number> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Context, JSTypedArray, JSReceiver, Object, Object> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Context, JSTypedArray, JSReceiver, Object, Object, Number> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, Number> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, Number> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, Number> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, Number> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Number> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Number> block50(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block51(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block52(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object, Context, JSTypedArray, JSReceiver, Object, Object> block54(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object, Context, JSTypedArray, JSReceiver, Object, Object, Number> block53(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block55(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT> block56(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object, Number> block59(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object, Number> block60(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object> block57(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number, BoolT, Object> block58(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi, Object, Number> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object, Smi> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object> block61(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object> block62(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi, Smi, Object, Object, Object, Number, Number, Object, Smi, Smi, Object> block63(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Smi, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_array, p_fromArg, p_toArg, p_comparefn, p_load, p_store);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Code> tmp5;
    compiler::TNode<Code> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp2, tmp3);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Code> tmp12;
    compiler::TNode<Code> tmp13;
    compiler::TNode<Smi> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15);
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp15}, compiler::TNode<Smi>{tmp14}));
    compiler::TNode<Smi> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp16}, compiler::TNode<Smi>{tmp17}));
    ca_.Branch(tmp18, &block3, &block4, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp19;
    compiler::TNode<JSTypedArray> tmp20;
    compiler::TNode<Smi> tmp21;
    compiler::TNode<Smi> tmp22;
    compiler::TNode<JSReceiver> tmp23;
    compiler::TNode<Code> tmp24;
    compiler::TNode<Code> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Smi> tmp27;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    compiler::TNode<Smi> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp27}, compiler::TNode<Smi>{tmp26}));
    compiler::TNode<Smi> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(10));
    compiler::TNode<BoolT> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThanOrEqual(compiler::TNode<Smi>{tmp28}, compiler::TNode<Smi>{tmp29}));
    ca_.Branch(tmp30, &block6, &block7, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSTypedArray> tmp32;
    compiler::TNode<Smi> tmp33;
    compiler::TNode<Smi> tmp34;
    compiler::TNode<JSReceiver> tmp35;
    compiler::TNode<Code> tmp36;
    compiler::TNode<Code> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<Smi> tmp39;
    ca_.Bind(&block6, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsFromDSLAssembler(state_).TypedArrayInsertionSort(compiler::TNode<Context>{tmp31}, compiler::TNode<JSTypedArray>{tmp32}, compiler::TNode<Smi>{tmp38}, compiler::TNode<Smi>{tmp39}, compiler::TNode<JSReceiver>{tmp35}, compiler::TNode<Code>{tmp36}, compiler::TNode<Code>{tmp37}, &label0);
    ca_.Goto(&block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp31, tmp32, tmp38, tmp39, tmp35, tmp36, tmp37);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block9, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp31, tmp32, tmp38, tmp39, tmp35, tmp36, tmp37);
    }
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<JSTypedArray> tmp41;
    compiler::TNode<Smi> tmp42;
    compiler::TNode<Smi> tmp43;
    compiler::TNode<JSReceiver> tmp44;
    compiler::TNode<Code> tmp45;
    compiler::TNode<Code> tmp46;
    compiler::TNode<Smi> tmp47;
    compiler::TNode<Smi> tmp48;
    compiler::TNode<Context> tmp49;
    compiler::TNode<JSTypedArray> tmp50;
    compiler::TNode<Smi> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<JSReceiver> tmp53;
    compiler::TNode<Code> tmp54;
    compiler::TNode<Code> tmp55;
    ca_.Bind(&block9, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<JSTypedArray> tmp57;
    compiler::TNode<Smi> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<JSReceiver> tmp60;
    compiler::TNode<Code> tmp61;
    compiler::TNode<Code> tmp62;
    compiler::TNode<Smi> tmp63;
    compiler::TNode<Smi> tmp64;
    compiler::TNode<Context> tmp65;
    compiler::TNode<JSTypedArray> tmp66;
    compiler::TNode<Smi> tmp67;
    compiler::TNode<Smi> tmp68;
    compiler::TNode<JSReceiver> tmp69;
    compiler::TNode<Code> tmp70;
    compiler::TNode<Code> tmp71;
    ca_.Bind(&block8, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    ca_.Goto(&block4, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp72;
    compiler::TNode<JSTypedArray> tmp73;
    compiler::TNode<Smi> tmp74;
    compiler::TNode<Smi> tmp75;
    compiler::TNode<JSReceiver> tmp76;
    compiler::TNode<Code> tmp77;
    compiler::TNode<Code> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<Smi> tmp80;
    ca_.Bind(&block7, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80);
    compiler::TNode<Smi> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp80}, compiler::TNode<Smi>{tmp79}));
    compiler::TNode<Smi> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSar(compiler::TNode<Smi>{tmp81}, 1));
    compiler::TNode<Smi> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp79}, compiler::TNode<Smi>{tmp82}));
    compiler::TNode<JSArrayBuffer> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<JSArrayBuffer>(TypedArrayBuiltinsAssembler(state_).LoadTypedArrayBuffer(compiler::TNode<JSTypedArray>{tmp73}));
    compiler::TNode<BoolT> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp84}));
    ca_.Branch(tmp85, &block10, &block11, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp83);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<JSTypedArray> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<Smi> tmp89;
    compiler::TNode<JSReceiver> tmp90;
    compiler::TNode<Code> tmp91;
    compiler::TNode<Code> tmp92;
    compiler::TNode<Smi> tmp93;
    compiler::TNode<Smi> tmp94;
    compiler::TNode<Smi> tmp95;
    ca_.Bind(&block10, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    ca_.Goto(&block1);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp96;
    compiler::TNode<JSTypedArray> tmp97;
    compiler::TNode<Smi> tmp98;
    compiler::TNode<Smi> tmp99;
    compiler::TNode<JSReceiver> tmp100;
    compiler::TNode<Code> tmp101;
    compiler::TNode<Code> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<Smi> tmp104;
    compiler::TNode<Smi> tmp105;
    ca_.Bind(&block11, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105);
    compiler::TNode<Object> tmp106 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp101, tmp96, tmp97, tmp103); 
    USE(tmp106);
    compiler::TNode<Smi> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp108;
    USE(tmp108);
    tmp108 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp104}, compiler::TNode<Smi>{tmp107}));
    compiler::TNode<Object> tmp109 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp101, tmp96, tmp97, tmp108); 
    USE(tmp109);
    compiler::TNode<Object> tmp110 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp101, tmp96, tmp97, tmp105); 
    USE(tmp110);
    compiler::TNode<Number> tmp111;
    USE(tmp111);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp111 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp96}, compiler::TNode<JSTypedArray>{tmp97}, compiler::TNode<JSReceiver>{tmp100}, compiler::TNode<Object>{tmp106}, compiler::TNode<Object>{tmp109}, &label0);
    ca_.Goto(&block12, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp109, tmp110, tmp96, tmp97, tmp100, tmp106, tmp109, tmp111);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106, tmp109, tmp110, tmp96, tmp97, tmp100, tmp106, tmp109);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp112;
    compiler::TNode<JSTypedArray> tmp113;
    compiler::TNode<Smi> tmp114;
    compiler::TNode<Smi> tmp115;
    compiler::TNode<JSReceiver> tmp116;
    compiler::TNode<Code> tmp117;
    compiler::TNode<Code> tmp118;
    compiler::TNode<Smi> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<Smi> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<Object> tmp124;
    compiler::TNode<Context> tmp125;
    compiler::TNode<JSTypedArray> tmp126;
    compiler::TNode<JSReceiver> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    ca_.Bind(&block13, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.Goto(&block1);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<JSTypedArray> tmp131;
    compiler::TNode<Smi> tmp132;
    compiler::TNode<Smi> tmp133;
    compiler::TNode<JSReceiver> tmp134;
    compiler::TNode<Code> tmp135;
    compiler::TNode<Code> tmp136;
    compiler::TNode<Smi> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<Smi> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<Object> tmp141;
    compiler::TNode<Object> tmp142;
    compiler::TNode<Context> tmp143;
    compiler::TNode<JSTypedArray> tmp144;
    compiler::TNode<JSReceiver> tmp145;
    compiler::TNode<Object> tmp146;
    compiler::TNode<Object> tmp147;
    compiler::TNode<Number> tmp148;
    ca_.Bind(&block12, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    compiler::TNode<Number> tmp149;
    USE(tmp149);
    tmp149 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp148}, compiler::TNode<Number>{tmp149}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block16, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp148, tmp148);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block17, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp148, tmp148);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<JSTypedArray> tmp151;
    compiler::TNode<Smi> tmp152;
    compiler::TNode<Smi> tmp153;
    compiler::TNode<JSReceiver> tmp154;
    compiler::TNode<Code> tmp155;
    compiler::TNode<Code> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<Smi> tmp158;
    compiler::TNode<Smi> tmp159;
    compiler::TNode<Object> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<Number> tmp164;
    ca_.Bind(&block16, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164);
    ca_.Goto(&block14, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161, tmp162, tmp163);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp165;
    compiler::TNode<JSTypedArray> tmp166;
    compiler::TNode<Smi> tmp167;
    compiler::TNode<Smi> tmp168;
    compiler::TNode<JSReceiver> tmp169;
    compiler::TNode<Code> tmp170;
    compiler::TNode<Code> tmp171;
    compiler::TNode<Smi> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<Smi> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<Number> tmp178;
    compiler::TNode<Number> tmp179;
    ca_.Bind(&block17, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179);
    ca_.Goto(&block15, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp180;
    compiler::TNode<JSTypedArray> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<Smi> tmp183;
    compiler::TNode<JSReceiver> tmp184;
    compiler::TNode<Code> tmp185;
    compiler::TNode<Code> tmp186;
    compiler::TNode<Smi> tmp187;
    compiler::TNode<Smi> tmp188;
    compiler::TNode<Smi> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<Object> tmp191;
    compiler::TNode<Object> tmp192;
    compiler::TNode<Number> tmp193;
    ca_.Bind(&block14, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193);
    ca_.Goto(&block15, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186, tmp187, tmp188, tmp189, tmp191, tmp190, tmp192, tmp193);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp194;
    compiler::TNode<JSTypedArray> tmp195;
    compiler::TNode<Smi> tmp196;
    compiler::TNode<Smi> tmp197;
    compiler::TNode<JSReceiver> tmp198;
    compiler::TNode<Code> tmp199;
    compiler::TNode<Code> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<Smi> tmp202;
    compiler::TNode<Smi> tmp203;
    compiler::TNode<Object> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Number> tmp207;
    ca_.Bind(&block15, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206, &tmp207);
    compiler::TNode<Number> tmp208;
    USE(tmp208);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp208 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp194}, compiler::TNode<JSTypedArray>{tmp195}, compiler::TNode<JSReceiver>{tmp198}, compiler::TNode<Object>{tmp204}, compiler::TNode<Object>{tmp206}, &label0);
    ca_.Goto(&block18, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp194, tmp195, tmp198, tmp204, tmp206, tmp208);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block19, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206, tmp207, tmp194, tmp195, tmp198, tmp204, tmp206);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp209;
    compiler::TNode<JSTypedArray> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<Smi> tmp212;
    compiler::TNode<JSReceiver> tmp213;
    compiler::TNode<Code> tmp214;
    compiler::TNode<Code> tmp215;
    compiler::TNode<Smi> tmp216;
    compiler::TNode<Smi> tmp217;
    compiler::TNode<Smi> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<Object> tmp220;
    compiler::TNode<Object> tmp221;
    compiler::TNode<Number> tmp222;
    compiler::TNode<Context> tmp223;
    compiler::TNode<JSTypedArray> tmp224;
    compiler::TNode<JSReceiver> tmp225;
    compiler::TNode<Object> tmp226;
    compiler::TNode<Object> tmp227;
    ca_.Bind(&block19, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227);
    ca_.Goto(&block1);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp228;
    compiler::TNode<JSTypedArray> tmp229;
    compiler::TNode<Smi> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<JSReceiver> tmp232;
    compiler::TNode<Code> tmp233;
    compiler::TNode<Code> tmp234;
    compiler::TNode<Smi> tmp235;
    compiler::TNode<Smi> tmp236;
    compiler::TNode<Smi> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<Context> tmp242;
    compiler::TNode<JSTypedArray> tmp243;
    compiler::TNode<JSReceiver> tmp244;
    compiler::TNode<Object> tmp245;
    compiler::TNode<Object> tmp246;
    compiler::TNode<Number> tmp247;
    ca_.Bind(&block18, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247);
    compiler::TNode<Number> tmp248;
    USE(tmp248);
    tmp248 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThanOrEqual(compiler::TNode<Number>{tmp247}, compiler::TNode<Number>{tmp248}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp247, tmp247);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block23, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp247, tmp247);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp249;
    compiler::TNode<JSTypedArray> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<Smi> tmp252;
    compiler::TNode<JSReceiver> tmp253;
    compiler::TNode<Code> tmp254;
    compiler::TNode<Code> tmp255;
    compiler::TNode<Smi> tmp256;
    compiler::TNode<Smi> tmp257;
    compiler::TNode<Smi> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<Object> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<Number> tmp263;
    compiler::TNode<Number> tmp264;
    ca_.Bind(&block22, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    ca_.Goto(&block20, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp265;
    compiler::TNode<JSTypedArray> tmp266;
    compiler::TNode<Smi> tmp267;
    compiler::TNode<Smi> tmp268;
    compiler::TNode<JSReceiver> tmp269;
    compiler::TNode<Code> tmp270;
    compiler::TNode<Code> tmp271;
    compiler::TNode<Smi> tmp272;
    compiler::TNode<Smi> tmp273;
    compiler::TNode<Smi> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Object> tmp276;
    compiler::TNode<Object> tmp277;
    compiler::TNode<Number> tmp278;
    compiler::TNode<Number> tmp279;
    compiler::TNode<Number> tmp280;
    ca_.Bind(&block23, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280);
    ca_.Goto(&block21, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp281;
    compiler::TNode<JSTypedArray> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<Smi> tmp284;
    compiler::TNode<JSReceiver> tmp285;
    compiler::TNode<Code> tmp286;
    compiler::TNode<Code> tmp287;
    compiler::TNode<Smi> tmp288;
    compiler::TNode<Smi> tmp289;
    compiler::TNode<Smi> tmp290;
    compiler::TNode<Object> tmp291;
    compiler::TNode<Object> tmp292;
    compiler::TNode<Object> tmp293;
    compiler::TNode<Number> tmp294;
    compiler::TNode<Number> tmp295;
    ca_.Bind(&block20, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295);
    ca_.Goto(&block24, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp293, tmp291, tmp292, tmp294, tmp295);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp296;
    compiler::TNode<JSTypedArray> tmp297;
    compiler::TNode<Smi> tmp298;
    compiler::TNode<Smi> tmp299;
    compiler::TNode<JSReceiver> tmp300;
    compiler::TNode<Code> tmp301;
    compiler::TNode<Code> tmp302;
    compiler::TNode<Smi> tmp303;
    compiler::TNode<Smi> tmp304;
    compiler::TNode<Smi> tmp305;
    compiler::TNode<Object> tmp306;
    compiler::TNode<Object> tmp307;
    compiler::TNode<Object> tmp308;
    compiler::TNode<Number> tmp309;
    compiler::TNode<Number> tmp310;
    ca_.Bind(&block21, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309, &tmp310);
    compiler::TNode<Number> tmp311;
    USE(tmp311);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp311 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp296}, compiler::TNode<JSTypedArray>{tmp297}, compiler::TNode<JSReceiver>{tmp300}, compiler::TNode<Object>{tmp307}, compiler::TNode<Object>{tmp308}, &label0);
    ca_.Goto(&block25, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp296, tmp297, tmp300, tmp307, tmp308, tmp311);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block26, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307, tmp308, tmp309, tmp310, tmp296, tmp297, tmp300, tmp307, tmp308);
    }
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp312;
    compiler::TNode<JSTypedArray> tmp313;
    compiler::TNode<Smi> tmp314;
    compiler::TNode<Smi> tmp315;
    compiler::TNode<JSReceiver> tmp316;
    compiler::TNode<Code> tmp317;
    compiler::TNode<Code> tmp318;
    compiler::TNode<Smi> tmp319;
    compiler::TNode<Smi> tmp320;
    compiler::TNode<Smi> tmp321;
    compiler::TNode<Object> tmp322;
    compiler::TNode<Object> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<Number> tmp325;
    compiler::TNode<Number> tmp326;
    compiler::TNode<Context> tmp327;
    compiler::TNode<JSTypedArray> tmp328;
    compiler::TNode<JSReceiver> tmp329;
    compiler::TNode<Object> tmp330;
    compiler::TNode<Object> tmp331;
    ca_.Bind(&block26, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.Goto(&block1);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp332;
    compiler::TNode<JSTypedArray> tmp333;
    compiler::TNode<Smi> tmp334;
    compiler::TNode<Smi> tmp335;
    compiler::TNode<JSReceiver> tmp336;
    compiler::TNode<Code> tmp337;
    compiler::TNode<Code> tmp338;
    compiler::TNode<Smi> tmp339;
    compiler::TNode<Smi> tmp340;
    compiler::TNode<Smi> tmp341;
    compiler::TNode<Object> tmp342;
    compiler::TNode<Object> tmp343;
    compiler::TNode<Object> tmp344;
    compiler::TNode<Number> tmp345;
    compiler::TNode<Number> tmp346;
    compiler::TNode<Context> tmp347;
    compiler::TNode<JSTypedArray> tmp348;
    compiler::TNode<JSReceiver> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<Object> tmp351;
    compiler::TNode<Number> tmp352;
    ca_.Bind(&block25, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352);
    compiler::TNode<Number> tmp353;
    USE(tmp353);
    tmp353 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp352}, compiler::TNode<Number>{tmp353}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block29, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp352, tmp352);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block30, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp352, tmp352);
    }
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp354;
    compiler::TNode<JSTypedArray> tmp355;
    compiler::TNode<Smi> tmp356;
    compiler::TNode<Smi> tmp357;
    compiler::TNode<JSReceiver> tmp358;
    compiler::TNode<Code> tmp359;
    compiler::TNode<Code> tmp360;
    compiler::TNode<Smi> tmp361;
    compiler::TNode<Smi> tmp362;
    compiler::TNode<Smi> tmp363;
    compiler::TNode<Object> tmp364;
    compiler::TNode<Object> tmp365;
    compiler::TNode<Object> tmp366;
    compiler::TNode<Number> tmp367;
    compiler::TNode<Number> tmp368;
    compiler::TNode<Number> tmp369;
    compiler::TNode<Number> tmp370;
    ca_.Bind(&block29, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370);
    ca_.Goto(&block27, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp371;
    compiler::TNode<JSTypedArray> tmp372;
    compiler::TNode<Smi> tmp373;
    compiler::TNode<Smi> tmp374;
    compiler::TNode<JSReceiver> tmp375;
    compiler::TNode<Code> tmp376;
    compiler::TNode<Code> tmp377;
    compiler::TNode<Smi> tmp378;
    compiler::TNode<Smi> tmp379;
    compiler::TNode<Smi> tmp380;
    compiler::TNode<Object> tmp381;
    compiler::TNode<Object> tmp382;
    compiler::TNode<Object> tmp383;
    compiler::TNode<Number> tmp384;
    compiler::TNode<Number> tmp385;
    compiler::TNode<Number> tmp386;
    compiler::TNode<Number> tmp387;
    ca_.Bind(&block30, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387);
    ca_.Goto(&block28, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp388;
    compiler::TNode<JSTypedArray> tmp389;
    compiler::TNode<Smi> tmp390;
    compiler::TNode<Smi> tmp391;
    compiler::TNode<JSReceiver> tmp392;
    compiler::TNode<Code> tmp393;
    compiler::TNode<Code> tmp394;
    compiler::TNode<Smi> tmp395;
    compiler::TNode<Smi> tmp396;
    compiler::TNode<Smi> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<Object> tmp400;
    compiler::TNode<Number> tmp401;
    compiler::TNode<Number> tmp402;
    compiler::TNode<Number> tmp403;
    ca_.Bind(&block27, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403);
    ca_.Goto(&block28, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396, tmp397, tmp398, tmp400, tmp399, tmp401, tmp402, tmp403);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp404;
    compiler::TNode<JSTypedArray> tmp405;
    compiler::TNode<Smi> tmp406;
    compiler::TNode<Smi> tmp407;
    compiler::TNode<JSReceiver> tmp408;
    compiler::TNode<Code> tmp409;
    compiler::TNode<Code> tmp410;
    compiler::TNode<Smi> tmp411;
    compiler::TNode<Smi> tmp412;
    compiler::TNode<Smi> tmp413;
    compiler::TNode<Object> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<Object> tmp416;
    compiler::TNode<Number> tmp417;
    compiler::TNode<Number> tmp418;
    compiler::TNode<Number> tmp419;
    ca_.Bind(&block28, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419);
    ca_.Goto(&block24, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415, tmp416, tmp417, tmp418);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp420;
    compiler::TNode<JSTypedArray> tmp421;
    compiler::TNode<Smi> tmp422;
    compiler::TNode<Smi> tmp423;
    compiler::TNode<JSReceiver> tmp424;
    compiler::TNode<Code> tmp425;
    compiler::TNode<Code> tmp426;
    compiler::TNode<Smi> tmp427;
    compiler::TNode<Smi> tmp428;
    compiler::TNode<Smi> tmp429;
    compiler::TNode<Object> tmp430;
    compiler::TNode<Object> tmp431;
    compiler::TNode<Object> tmp432;
    compiler::TNode<Number> tmp433;
    compiler::TNode<Number> tmp434;
    ca_.Bind(&block24, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434);
    compiler::TNode<Object> tmp435 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp426, tmp420, tmp421, tmp427, tmp430); 
    USE(tmp435);
    compiler::TNode<Smi> tmp436;
    USE(tmp436);
    tmp436 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp437;
    USE(tmp437);
    tmp437 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp428}, compiler::TNode<Smi>{tmp436}));
    compiler::TNode<Object> tmp438 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp426, tmp420, tmp421, tmp437, tmp432); 
    USE(tmp438);
    compiler::TNode<Smi> tmp439;
    USE(tmp439);
    tmp439 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp440;
    USE(tmp440);
    tmp440 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp427}, compiler::TNode<Smi>{tmp439}));
    compiler::TNode<Smi> tmp441;
    USE(tmp441);
    tmp441 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp442;
    USE(tmp442);
    tmp442 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp428}, compiler::TNode<Smi>{tmp441}));
    compiler::TNode<Object> tmp443 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp425, tmp420, tmp421, tmp440); 
    USE(tmp443);
    compiler::TNode<Object> tmp444 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp426, tmp420, tmp421, tmp429, tmp443); 
    USE(tmp444);
    compiler::TNode<Object> tmp445 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp426, tmp420, tmp421, tmp440, tmp431); 
    USE(tmp445);
    compiler::TNode<Smi> tmp446;
    USE(tmp446);
    tmp446 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp447;
    USE(tmp447);
    tmp447 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp440}, compiler::TNode<Smi>{tmp446}));
    ca_.Goto(&block33, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp431, tmp440, tmp442, tmp443, tmp447);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp448;
    compiler::TNode<JSTypedArray> tmp449;
    compiler::TNode<Smi> tmp450;
    compiler::TNode<Smi> tmp451;
    compiler::TNode<JSReceiver> tmp452;
    compiler::TNode<Code> tmp453;
    compiler::TNode<Code> tmp454;
    compiler::TNode<Smi> tmp455;
    compiler::TNode<Smi> tmp456;
    compiler::TNode<Smi> tmp457;
    compiler::TNode<Object> tmp458;
    compiler::TNode<Object> tmp459;
    compiler::TNode<Object> tmp460;
    compiler::TNode<Number> tmp461;
    compiler::TNode<Number> tmp462;
    compiler::TNode<Object> tmp463;
    compiler::TNode<Smi> tmp464;
    compiler::TNode<Smi> tmp465;
    compiler::TNode<Object> tmp466;
    compiler::TNode<Smi> tmp467;
    ca_.Bind(&block33, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459, &tmp460, &tmp461, &tmp462, &tmp463, &tmp464, &tmp465, &tmp466, &tmp467);
    compiler::TNode<BoolT> tmp468;
    USE(tmp468);
    tmp468 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp467}, compiler::TNode<Smi>{tmp465}));
    ca_.Branch(tmp468, &block31, &block32, tmp448, tmp449, tmp450, tmp451, tmp452, tmp453, tmp454, tmp455, tmp456, tmp457, tmp458, tmp459, tmp460, tmp461, tmp462, tmp463, tmp464, tmp465, tmp466, tmp467);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp469;
    compiler::TNode<JSTypedArray> tmp470;
    compiler::TNode<Smi> tmp471;
    compiler::TNode<Smi> tmp472;
    compiler::TNode<JSReceiver> tmp473;
    compiler::TNode<Code> tmp474;
    compiler::TNode<Code> tmp475;
    compiler::TNode<Smi> tmp476;
    compiler::TNode<Smi> tmp477;
    compiler::TNode<Smi> tmp478;
    compiler::TNode<Object> tmp479;
    compiler::TNode<Object> tmp480;
    compiler::TNode<Object> tmp481;
    compiler::TNode<Number> tmp482;
    compiler::TNode<Number> tmp483;
    compiler::TNode<Object> tmp484;
    compiler::TNode<Smi> tmp485;
    compiler::TNode<Smi> tmp486;
    compiler::TNode<Object> tmp487;
    compiler::TNode<Smi> tmp488;
    ca_.Bind(&block31, &tmp469, &tmp470, &tmp471, &tmp472, &tmp473, &tmp474, &tmp475, &tmp476, &tmp477, &tmp478, &tmp479, &tmp480, &tmp481, &tmp482, &tmp483, &tmp484, &tmp485, &tmp486, &tmp487, &tmp488);
    compiler::TNode<Object> tmp489 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp474, tmp469, tmp470, tmp488); 
    USE(tmp489);
    compiler::TNode<Number> tmp490;
    USE(tmp490);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp490 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp469}, compiler::TNode<JSTypedArray>{tmp470}, compiler::TNode<JSReceiver>{tmp473}, compiler::TNode<Object>{tmp489}, compiler::TNode<Object>{tmp484}, &label0);
    ca_.Goto(&block35, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp469, tmp470, tmp473, tmp489, tmp484, tmp490);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block36, tmp469, tmp470, tmp471, tmp472, tmp473, tmp474, tmp475, tmp476, tmp477, tmp478, tmp479, tmp480, tmp481, tmp482, tmp483, tmp484, tmp485, tmp486, tmp487, tmp488, tmp489, tmp469, tmp470, tmp473, tmp489, tmp484);
    }
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp491;
    compiler::TNode<JSTypedArray> tmp492;
    compiler::TNode<Smi> tmp493;
    compiler::TNode<Smi> tmp494;
    compiler::TNode<JSReceiver> tmp495;
    compiler::TNode<Code> tmp496;
    compiler::TNode<Code> tmp497;
    compiler::TNode<Smi> tmp498;
    compiler::TNode<Smi> tmp499;
    compiler::TNode<Smi> tmp500;
    compiler::TNode<Object> tmp501;
    compiler::TNode<Object> tmp502;
    compiler::TNode<Object> tmp503;
    compiler::TNode<Number> tmp504;
    compiler::TNode<Number> tmp505;
    compiler::TNode<Object> tmp506;
    compiler::TNode<Smi> tmp507;
    compiler::TNode<Smi> tmp508;
    compiler::TNode<Object> tmp509;
    compiler::TNode<Smi> tmp510;
    compiler::TNode<Object> tmp511;
    compiler::TNode<Context> tmp512;
    compiler::TNode<JSTypedArray> tmp513;
    compiler::TNode<JSReceiver> tmp514;
    compiler::TNode<Object> tmp515;
    compiler::TNode<Object> tmp516;
    ca_.Bind(&block36, &tmp491, &tmp492, &tmp493, &tmp494, &tmp495, &tmp496, &tmp497, &tmp498, &tmp499, &tmp500, &tmp501, &tmp502, &tmp503, &tmp504, &tmp505, &tmp506, &tmp507, &tmp508, &tmp509, &tmp510, &tmp511, &tmp512, &tmp513, &tmp514, &tmp515, &tmp516);
    ca_.Goto(&block1);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp517;
    compiler::TNode<JSTypedArray> tmp518;
    compiler::TNode<Smi> tmp519;
    compiler::TNode<Smi> tmp520;
    compiler::TNode<JSReceiver> tmp521;
    compiler::TNode<Code> tmp522;
    compiler::TNode<Code> tmp523;
    compiler::TNode<Smi> tmp524;
    compiler::TNode<Smi> tmp525;
    compiler::TNode<Smi> tmp526;
    compiler::TNode<Object> tmp527;
    compiler::TNode<Object> tmp528;
    compiler::TNode<Object> tmp529;
    compiler::TNode<Number> tmp530;
    compiler::TNode<Number> tmp531;
    compiler::TNode<Object> tmp532;
    compiler::TNode<Smi> tmp533;
    compiler::TNode<Smi> tmp534;
    compiler::TNode<Object> tmp535;
    compiler::TNode<Smi> tmp536;
    compiler::TNode<Object> tmp537;
    compiler::TNode<Context> tmp538;
    compiler::TNode<JSTypedArray> tmp539;
    compiler::TNode<JSReceiver> tmp540;
    compiler::TNode<Object> tmp541;
    compiler::TNode<Object> tmp542;
    compiler::TNode<Number> tmp543;
    ca_.Bind(&block35, &tmp517, &tmp518, &tmp519, &tmp520, &tmp521, &tmp522, &tmp523, &tmp524, &tmp525, &tmp526, &tmp527, &tmp528, &tmp529, &tmp530, &tmp531, &tmp532, &tmp533, &tmp534, &tmp535, &tmp536, &tmp537, &tmp538, &tmp539, &tmp540, &tmp541, &tmp542, &tmp543);
    compiler::TNode<Number> tmp544;
    USE(tmp544);
    tmp544 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp543}, compiler::TNode<Number>{tmp544}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block39, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp543, tmp543);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block40, tmp517, tmp518, tmp519, tmp520, tmp521, tmp522, tmp523, tmp524, tmp525, tmp526, tmp527, tmp528, tmp529, tmp530, tmp531, tmp532, tmp533, tmp534, tmp535, tmp536, tmp537, tmp543, tmp543);
    }
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp545;
    compiler::TNode<JSTypedArray> tmp546;
    compiler::TNode<Smi> tmp547;
    compiler::TNode<Smi> tmp548;
    compiler::TNode<JSReceiver> tmp549;
    compiler::TNode<Code> tmp550;
    compiler::TNode<Code> tmp551;
    compiler::TNode<Smi> tmp552;
    compiler::TNode<Smi> tmp553;
    compiler::TNode<Smi> tmp554;
    compiler::TNode<Object> tmp555;
    compiler::TNode<Object> tmp556;
    compiler::TNode<Object> tmp557;
    compiler::TNode<Number> tmp558;
    compiler::TNode<Number> tmp559;
    compiler::TNode<Object> tmp560;
    compiler::TNode<Smi> tmp561;
    compiler::TNode<Smi> tmp562;
    compiler::TNode<Object> tmp563;
    compiler::TNode<Smi> tmp564;
    compiler::TNode<Object> tmp565;
    compiler::TNode<Number> tmp566;
    compiler::TNode<Number> tmp567;
    ca_.Bind(&block39, &tmp545, &tmp546, &tmp547, &tmp548, &tmp549, &tmp550, &tmp551, &tmp552, &tmp553, &tmp554, &tmp555, &tmp556, &tmp557, &tmp558, &tmp559, &tmp560, &tmp561, &tmp562, &tmp563, &tmp564, &tmp565, &tmp566, &tmp567);
    ca_.Goto(&block37, tmp545, tmp546, tmp547, tmp548, tmp549, tmp550, tmp551, tmp552, tmp553, tmp554, tmp555, tmp556, tmp557, tmp558, tmp559, tmp560, tmp561, tmp562, tmp563, tmp564, tmp565, tmp566);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp568;
    compiler::TNode<JSTypedArray> tmp569;
    compiler::TNode<Smi> tmp570;
    compiler::TNode<Smi> tmp571;
    compiler::TNode<JSReceiver> tmp572;
    compiler::TNode<Code> tmp573;
    compiler::TNode<Code> tmp574;
    compiler::TNode<Smi> tmp575;
    compiler::TNode<Smi> tmp576;
    compiler::TNode<Smi> tmp577;
    compiler::TNode<Object> tmp578;
    compiler::TNode<Object> tmp579;
    compiler::TNode<Object> tmp580;
    compiler::TNode<Number> tmp581;
    compiler::TNode<Number> tmp582;
    compiler::TNode<Object> tmp583;
    compiler::TNode<Smi> tmp584;
    compiler::TNode<Smi> tmp585;
    compiler::TNode<Object> tmp586;
    compiler::TNode<Smi> tmp587;
    compiler::TNode<Object> tmp588;
    compiler::TNode<Number> tmp589;
    compiler::TNode<Number> tmp590;
    ca_.Bind(&block40, &tmp568, &tmp569, &tmp570, &tmp571, &tmp572, &tmp573, &tmp574, &tmp575, &tmp576, &tmp577, &tmp578, &tmp579, &tmp580, &tmp581, &tmp582, &tmp583, &tmp584, &tmp585, &tmp586, &tmp587, &tmp588, &tmp589, &tmp590);
    ca_.Goto(&block38, tmp568, tmp569, tmp570, tmp571, tmp572, tmp573, tmp574, tmp575, tmp576, tmp577, tmp578, tmp579, tmp580, tmp581, tmp582, tmp583, tmp584, tmp585, tmp586, tmp587, tmp588, tmp589);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp591;
    compiler::TNode<JSTypedArray> tmp592;
    compiler::TNode<Smi> tmp593;
    compiler::TNode<Smi> tmp594;
    compiler::TNode<JSReceiver> tmp595;
    compiler::TNode<Code> tmp596;
    compiler::TNode<Code> tmp597;
    compiler::TNode<Smi> tmp598;
    compiler::TNode<Smi> tmp599;
    compiler::TNode<Smi> tmp600;
    compiler::TNode<Object> tmp601;
    compiler::TNode<Object> tmp602;
    compiler::TNode<Object> tmp603;
    compiler::TNode<Number> tmp604;
    compiler::TNode<Number> tmp605;
    compiler::TNode<Object> tmp606;
    compiler::TNode<Smi> tmp607;
    compiler::TNode<Smi> tmp608;
    compiler::TNode<Object> tmp609;
    compiler::TNode<Smi> tmp610;
    compiler::TNode<Object> tmp611;
    compiler::TNode<Number> tmp612;
    ca_.Bind(&block37, &tmp591, &tmp592, &tmp593, &tmp594, &tmp595, &tmp596, &tmp597, &tmp598, &tmp599, &tmp600, &tmp601, &tmp602, &tmp603, &tmp604, &tmp605, &tmp606, &tmp607, &tmp608, &tmp609, &tmp610, &tmp611, &tmp612);
    compiler::TNode<Object> tmp613 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp596, tmp591, tmp592, tmp607); 
    USE(tmp613);
    compiler::TNode<Object> tmp614 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp597, tmp591, tmp592, tmp610, tmp613); 
    USE(tmp614);
    compiler::TNode<Object> tmp615 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp597, tmp591, tmp592, tmp607, tmp611); 
    USE(tmp615);
    compiler::TNode<Smi> tmp616;
    USE(tmp616);
    tmp616 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp617;
    USE(tmp617);
    tmp617 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp607}, compiler::TNode<Smi>{tmp616}));
    ca_.Goto(&block41, tmp591, tmp592, tmp593, tmp594, tmp595, tmp596, tmp597, tmp598, tmp599, tmp600, tmp601, tmp602, tmp603, tmp604, tmp605, tmp606, tmp617, tmp608, tmp613, tmp610, tmp611, tmp612);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp618;
    compiler::TNode<JSTypedArray> tmp619;
    compiler::TNode<Smi> tmp620;
    compiler::TNode<Smi> tmp621;
    compiler::TNode<JSReceiver> tmp622;
    compiler::TNode<Code> tmp623;
    compiler::TNode<Code> tmp624;
    compiler::TNode<Smi> tmp625;
    compiler::TNode<Smi> tmp626;
    compiler::TNode<Smi> tmp627;
    compiler::TNode<Object> tmp628;
    compiler::TNode<Object> tmp629;
    compiler::TNode<Object> tmp630;
    compiler::TNode<Number> tmp631;
    compiler::TNode<Number> tmp632;
    compiler::TNode<Object> tmp633;
    compiler::TNode<Smi> tmp634;
    compiler::TNode<Smi> tmp635;
    compiler::TNode<Object> tmp636;
    compiler::TNode<Smi> tmp637;
    compiler::TNode<Object> tmp638;
    compiler::TNode<Number> tmp639;
    ca_.Bind(&block38, &tmp618, &tmp619, &tmp620, &tmp621, &tmp622, &tmp623, &tmp624, &tmp625, &tmp626, &tmp627, &tmp628, &tmp629, &tmp630, &tmp631, &tmp632, &tmp633, &tmp634, &tmp635, &tmp636, &tmp637, &tmp638, &tmp639);
    compiler::TNode<Number> tmp640;
    USE(tmp640);
    tmp640 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp639}, compiler::TNode<Number>{tmp640}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block44, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp639);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block45, tmp618, tmp619, tmp620, tmp621, tmp622, tmp623, tmp624, tmp625, tmp626, tmp627, tmp628, tmp629, tmp630, tmp631, tmp632, tmp633, tmp634, tmp635, tmp636, tmp637, tmp638, tmp639, tmp639);
    }
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp641;
    compiler::TNode<JSTypedArray> tmp642;
    compiler::TNode<Smi> tmp643;
    compiler::TNode<Smi> tmp644;
    compiler::TNode<JSReceiver> tmp645;
    compiler::TNode<Code> tmp646;
    compiler::TNode<Code> tmp647;
    compiler::TNode<Smi> tmp648;
    compiler::TNode<Smi> tmp649;
    compiler::TNode<Smi> tmp650;
    compiler::TNode<Object> tmp651;
    compiler::TNode<Object> tmp652;
    compiler::TNode<Object> tmp653;
    compiler::TNode<Number> tmp654;
    compiler::TNode<Number> tmp655;
    compiler::TNode<Object> tmp656;
    compiler::TNode<Smi> tmp657;
    compiler::TNode<Smi> tmp658;
    compiler::TNode<Object> tmp659;
    compiler::TNode<Smi> tmp660;
    compiler::TNode<Object> tmp661;
    compiler::TNode<Number> tmp662;
    compiler::TNode<Number> tmp663;
    ca_.Bind(&block44, &tmp641, &tmp642, &tmp643, &tmp644, &tmp645, &tmp646, &tmp647, &tmp648, &tmp649, &tmp650, &tmp651, &tmp652, &tmp653, &tmp654, &tmp655, &tmp656, &tmp657, &tmp658, &tmp659, &tmp660, &tmp661, &tmp662, &tmp663);
    ca_.Goto(&block42, tmp641, tmp642, tmp643, tmp644, tmp645, tmp646, tmp647, tmp648, tmp649, tmp650, tmp651, tmp652, tmp653, tmp654, tmp655, tmp656, tmp657, tmp658, tmp659, tmp660, tmp661, tmp662);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp664;
    compiler::TNode<JSTypedArray> tmp665;
    compiler::TNode<Smi> tmp666;
    compiler::TNode<Smi> tmp667;
    compiler::TNode<JSReceiver> tmp668;
    compiler::TNode<Code> tmp669;
    compiler::TNode<Code> tmp670;
    compiler::TNode<Smi> tmp671;
    compiler::TNode<Smi> tmp672;
    compiler::TNode<Smi> tmp673;
    compiler::TNode<Object> tmp674;
    compiler::TNode<Object> tmp675;
    compiler::TNode<Object> tmp676;
    compiler::TNode<Number> tmp677;
    compiler::TNode<Number> tmp678;
    compiler::TNode<Object> tmp679;
    compiler::TNode<Smi> tmp680;
    compiler::TNode<Smi> tmp681;
    compiler::TNode<Object> tmp682;
    compiler::TNode<Smi> tmp683;
    compiler::TNode<Object> tmp684;
    compiler::TNode<Number> tmp685;
    compiler::TNode<Number> tmp686;
    ca_.Bind(&block45, &tmp664, &tmp665, &tmp666, &tmp667, &tmp668, &tmp669, &tmp670, &tmp671, &tmp672, &tmp673, &tmp674, &tmp675, &tmp676, &tmp677, &tmp678, &tmp679, &tmp680, &tmp681, &tmp682, &tmp683, &tmp684, &tmp685, &tmp686);
    ca_.Goto(&block43, tmp664, tmp665, tmp666, tmp667, tmp668, tmp669, tmp670, tmp671, tmp672, tmp673, tmp674, tmp675, tmp676, tmp677, tmp678, tmp679, tmp680, tmp681, tmp682, tmp683, tmp684, tmp685);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp687;
    compiler::TNode<JSTypedArray> tmp688;
    compiler::TNode<Smi> tmp689;
    compiler::TNode<Smi> tmp690;
    compiler::TNode<JSReceiver> tmp691;
    compiler::TNode<Code> tmp692;
    compiler::TNode<Code> tmp693;
    compiler::TNode<Smi> tmp694;
    compiler::TNode<Smi> tmp695;
    compiler::TNode<Smi> tmp696;
    compiler::TNode<Object> tmp697;
    compiler::TNode<Object> tmp698;
    compiler::TNode<Object> tmp699;
    compiler::TNode<Number> tmp700;
    compiler::TNode<Number> tmp701;
    compiler::TNode<Object> tmp702;
    compiler::TNode<Smi> tmp703;
    compiler::TNode<Smi> tmp704;
    compiler::TNode<Object> tmp705;
    compiler::TNode<Smi> tmp706;
    compiler::TNode<Object> tmp707;
    compiler::TNode<Number> tmp708;
    ca_.Bind(&block42, &tmp687, &tmp688, &tmp689, &tmp690, &tmp691, &tmp692, &tmp693, &tmp694, &tmp695, &tmp696, &tmp697, &tmp698, &tmp699, &tmp700, &tmp701, &tmp702, &tmp703, &tmp704, &tmp705, &tmp706, &tmp707, &tmp708);
    compiler::TNode<BoolT> tmp709;
    USE(tmp709);
    tmp709 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block48, tmp687, tmp688, tmp689, tmp690, tmp691, tmp692, tmp693, tmp694, tmp695, tmp696, tmp697, tmp698, tmp699, tmp700, tmp701, tmp702, tmp703, tmp704, tmp705, tmp706, tmp707, tmp708, tmp709);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp710;
    compiler::TNode<JSTypedArray> tmp711;
    compiler::TNode<Smi> tmp712;
    compiler::TNode<Smi> tmp713;
    compiler::TNode<JSReceiver> tmp714;
    compiler::TNode<Code> tmp715;
    compiler::TNode<Code> tmp716;
    compiler::TNode<Smi> tmp717;
    compiler::TNode<Smi> tmp718;
    compiler::TNode<Smi> tmp719;
    compiler::TNode<Object> tmp720;
    compiler::TNode<Object> tmp721;
    compiler::TNode<Object> tmp722;
    compiler::TNode<Number> tmp723;
    compiler::TNode<Number> tmp724;
    compiler::TNode<Object> tmp725;
    compiler::TNode<Smi> tmp726;
    compiler::TNode<Smi> tmp727;
    compiler::TNode<Object> tmp728;
    compiler::TNode<Smi> tmp729;
    compiler::TNode<Object> tmp730;
    compiler::TNode<Number> tmp731;
    compiler::TNode<BoolT> tmp732;
    ca_.Bind(&block48, &tmp710, &tmp711, &tmp712, &tmp713, &tmp714, &tmp715, &tmp716, &tmp717, &tmp718, &tmp719, &tmp720, &tmp721, &tmp722, &tmp723, &tmp724, &tmp725, &tmp726, &tmp727, &tmp728, &tmp729, &tmp730, &tmp731, &tmp732);
    compiler::TNode<Number> tmp733;
    USE(tmp733);
    tmp733 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp731}, compiler::TNode<Number>{tmp733}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block49, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp731);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block50, tmp710, tmp711, tmp712, tmp713, tmp714, tmp715, tmp716, tmp717, tmp718, tmp719, tmp720, tmp721, tmp722, tmp723, tmp724, tmp725, tmp726, tmp727, tmp728, tmp729, tmp730, tmp731, tmp732, tmp731);
    }
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp734;
    compiler::TNode<JSTypedArray> tmp735;
    compiler::TNode<Smi> tmp736;
    compiler::TNode<Smi> tmp737;
    compiler::TNode<JSReceiver> tmp738;
    compiler::TNode<Code> tmp739;
    compiler::TNode<Code> tmp740;
    compiler::TNode<Smi> tmp741;
    compiler::TNode<Smi> tmp742;
    compiler::TNode<Smi> tmp743;
    compiler::TNode<Object> tmp744;
    compiler::TNode<Object> tmp745;
    compiler::TNode<Object> tmp746;
    compiler::TNode<Number> tmp747;
    compiler::TNode<Number> tmp748;
    compiler::TNode<Object> tmp749;
    compiler::TNode<Smi> tmp750;
    compiler::TNode<Smi> tmp751;
    compiler::TNode<Object> tmp752;
    compiler::TNode<Smi> tmp753;
    compiler::TNode<Object> tmp754;
    compiler::TNode<Number> tmp755;
    compiler::TNode<BoolT> tmp756;
    compiler::TNode<Number> tmp757;
    ca_.Bind(&block49, &tmp734, &tmp735, &tmp736, &tmp737, &tmp738, &tmp739, &tmp740, &tmp741, &tmp742, &tmp743, &tmp744, &tmp745, &tmp746, &tmp747, &tmp748, &tmp749, &tmp750, &tmp751, &tmp752, &tmp753, &tmp754, &tmp755, &tmp756, &tmp757);
    ca_.Goto(&block46, tmp734, tmp735, tmp736, tmp737, tmp738, tmp739, tmp740, tmp741, tmp742, tmp743, tmp744, tmp745, tmp746, tmp747, tmp748, tmp749, tmp750, tmp751, tmp752, tmp753, tmp754, tmp755, tmp756);
  }

  if (block50.is_used()) {
    compiler::TNode<Context> tmp758;
    compiler::TNode<JSTypedArray> tmp759;
    compiler::TNode<Smi> tmp760;
    compiler::TNode<Smi> tmp761;
    compiler::TNode<JSReceiver> tmp762;
    compiler::TNode<Code> tmp763;
    compiler::TNode<Code> tmp764;
    compiler::TNode<Smi> tmp765;
    compiler::TNode<Smi> tmp766;
    compiler::TNode<Smi> tmp767;
    compiler::TNode<Object> tmp768;
    compiler::TNode<Object> tmp769;
    compiler::TNode<Object> tmp770;
    compiler::TNode<Number> tmp771;
    compiler::TNode<Number> tmp772;
    compiler::TNode<Object> tmp773;
    compiler::TNode<Smi> tmp774;
    compiler::TNode<Smi> tmp775;
    compiler::TNode<Object> tmp776;
    compiler::TNode<Smi> tmp777;
    compiler::TNode<Object> tmp778;
    compiler::TNode<Number> tmp779;
    compiler::TNode<BoolT> tmp780;
    compiler::TNode<Number> tmp781;
    ca_.Bind(&block50, &tmp758, &tmp759, &tmp760, &tmp761, &tmp762, &tmp763, &tmp764, &tmp765, &tmp766, &tmp767, &tmp768, &tmp769, &tmp770, &tmp771, &tmp772, &tmp773, &tmp774, &tmp775, &tmp776, &tmp777, &tmp778, &tmp779, &tmp780, &tmp781);
    ca_.Goto(&block47, tmp758, tmp759, tmp760, tmp761, tmp762, tmp763, tmp764, tmp765, tmp766, tmp767, tmp768, tmp769, tmp770, tmp771, tmp772, tmp773, tmp774, tmp775, tmp776, tmp777, tmp778, tmp779, tmp780);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp782;
    compiler::TNode<JSTypedArray> tmp783;
    compiler::TNode<Smi> tmp784;
    compiler::TNode<Smi> tmp785;
    compiler::TNode<JSReceiver> tmp786;
    compiler::TNode<Code> tmp787;
    compiler::TNode<Code> tmp788;
    compiler::TNode<Smi> tmp789;
    compiler::TNode<Smi> tmp790;
    compiler::TNode<Smi> tmp791;
    compiler::TNode<Object> tmp792;
    compiler::TNode<Object> tmp793;
    compiler::TNode<Object> tmp794;
    compiler::TNode<Number> tmp795;
    compiler::TNode<Number> tmp796;
    compiler::TNode<Object> tmp797;
    compiler::TNode<Smi> tmp798;
    compiler::TNode<Smi> tmp799;
    compiler::TNode<Object> tmp800;
    compiler::TNode<Smi> tmp801;
    compiler::TNode<Object> tmp802;
    compiler::TNode<Number> tmp803;
    compiler::TNode<BoolT> tmp804;
    ca_.Bind(&block46, &tmp782, &tmp783, &tmp784, &tmp785, &tmp786, &tmp787, &tmp788, &tmp789, &tmp790, &tmp791, &tmp792, &tmp793, &tmp794, &tmp795, &tmp796, &tmp797, &tmp798, &tmp799, &tmp800, &tmp801, &tmp802, &tmp803, &tmp804);
    compiler::TNode<Smi> tmp805;
    USE(tmp805);
    tmp805 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp806;
    USE(tmp806);
    tmp806 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp799}, compiler::TNode<Smi>{tmp805}));
    compiler::TNode<BoolT> tmp807;
    USE(tmp807);
    tmp807 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiEqual(compiler::TNode<Smi>{tmp806}, compiler::TNode<Smi>{tmp801}));
    ca_.Branch(tmp807, &block51, &block52, tmp782, tmp783, tmp784, tmp785, tmp786, tmp787, tmp788, tmp789, tmp790, tmp791, tmp792, tmp793, tmp794, tmp795, tmp796, tmp797, tmp798, tmp806, tmp800, tmp801, tmp802, tmp803, tmp804);
  }

  if (block51.is_used()) {
    compiler::TNode<Context> tmp808;
    compiler::TNode<JSTypedArray> tmp809;
    compiler::TNode<Smi> tmp810;
    compiler::TNode<Smi> tmp811;
    compiler::TNode<JSReceiver> tmp812;
    compiler::TNode<Code> tmp813;
    compiler::TNode<Code> tmp814;
    compiler::TNode<Smi> tmp815;
    compiler::TNode<Smi> tmp816;
    compiler::TNode<Smi> tmp817;
    compiler::TNode<Object> tmp818;
    compiler::TNode<Object> tmp819;
    compiler::TNode<Object> tmp820;
    compiler::TNode<Number> tmp821;
    compiler::TNode<Number> tmp822;
    compiler::TNode<Object> tmp823;
    compiler::TNode<Smi> tmp824;
    compiler::TNode<Smi> tmp825;
    compiler::TNode<Object> tmp826;
    compiler::TNode<Smi> tmp827;
    compiler::TNode<Object> tmp828;
    compiler::TNode<Number> tmp829;
    compiler::TNode<BoolT> tmp830;
    ca_.Bind(&block51, &tmp808, &tmp809, &tmp810, &tmp811, &tmp812, &tmp813, &tmp814, &tmp815, &tmp816, &tmp817, &tmp818, &tmp819, &tmp820, &tmp821, &tmp822, &tmp823, &tmp824, &tmp825, &tmp826, &tmp827, &tmp828, &tmp829, &tmp830);
    compiler::TNode<BoolT> tmp831;
    USE(tmp831);
    tmp831 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block47, tmp808, tmp809, tmp810, tmp811, tmp812, tmp813, tmp814, tmp815, tmp816, tmp817, tmp818, tmp819, tmp820, tmp821, tmp822, tmp823, tmp824, tmp825, tmp826, tmp827, tmp828, tmp829, tmp831);
  }

  if (block52.is_used()) {
    compiler::TNode<Context> tmp832;
    compiler::TNode<JSTypedArray> tmp833;
    compiler::TNode<Smi> tmp834;
    compiler::TNode<Smi> tmp835;
    compiler::TNode<JSReceiver> tmp836;
    compiler::TNode<Code> tmp837;
    compiler::TNode<Code> tmp838;
    compiler::TNode<Smi> tmp839;
    compiler::TNode<Smi> tmp840;
    compiler::TNode<Smi> tmp841;
    compiler::TNode<Object> tmp842;
    compiler::TNode<Object> tmp843;
    compiler::TNode<Object> tmp844;
    compiler::TNode<Number> tmp845;
    compiler::TNode<Number> tmp846;
    compiler::TNode<Object> tmp847;
    compiler::TNode<Smi> tmp848;
    compiler::TNode<Smi> tmp849;
    compiler::TNode<Object> tmp850;
    compiler::TNode<Smi> tmp851;
    compiler::TNode<Object> tmp852;
    compiler::TNode<Number> tmp853;
    compiler::TNode<BoolT> tmp854;
    ca_.Bind(&block52, &tmp832, &tmp833, &tmp834, &tmp835, &tmp836, &tmp837, &tmp838, &tmp839, &tmp840, &tmp841, &tmp842, &tmp843, &tmp844, &tmp845, &tmp846, &tmp847, &tmp848, &tmp849, &tmp850, &tmp851, &tmp852, &tmp853, &tmp854);
    compiler::TNode<Object> tmp855 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp837, tmp832, tmp833, tmp849); 
    USE(tmp855);
    compiler::TNode<Number> tmp856;
    USE(tmp856);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp856 = TypedArrayBuiltinsFromDSLAssembler(state_).CallCompareWithDetachedCheck(compiler::TNode<Context>{tmp832}, compiler::TNode<JSTypedArray>{tmp833}, compiler::TNode<JSReceiver>{tmp836}, compiler::TNode<Object>{tmp855}, compiler::TNode<Object>{tmp847}, &label0);
    ca_.Goto(&block53, tmp832, tmp833, tmp834, tmp835, tmp836, tmp837, tmp838, tmp839, tmp840, tmp841, tmp842, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854, tmp855, tmp832, tmp833, tmp836, tmp855, tmp847, tmp856);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block54, tmp832, tmp833, tmp834, tmp835, tmp836, tmp837, tmp838, tmp839, tmp840, tmp841, tmp842, tmp843, tmp844, tmp845, tmp846, tmp847, tmp848, tmp849, tmp850, tmp851, tmp852, tmp853, tmp854, tmp855, tmp832, tmp833, tmp836, tmp855, tmp847);
    }
  }

  if (block54.is_used()) {
    compiler::TNode<Context> tmp857;
    compiler::TNode<JSTypedArray> tmp858;
    compiler::TNode<Smi> tmp859;
    compiler::TNode<Smi> tmp860;
    compiler::TNode<JSReceiver> tmp861;
    compiler::TNode<Code> tmp862;
    compiler::TNode<Code> tmp863;
    compiler::TNode<Smi> tmp864;
    compiler::TNode<Smi> tmp865;
    compiler::TNode<Smi> tmp866;
    compiler::TNode<Object> tmp867;
    compiler::TNode<Object> tmp868;
    compiler::TNode<Object> tmp869;
    compiler::TNode<Number> tmp870;
    compiler::TNode<Number> tmp871;
    compiler::TNode<Object> tmp872;
    compiler::TNode<Smi> tmp873;
    compiler::TNode<Smi> tmp874;
    compiler::TNode<Object> tmp875;
    compiler::TNode<Smi> tmp876;
    compiler::TNode<Object> tmp877;
    compiler::TNode<Number> tmp878;
    compiler::TNode<BoolT> tmp879;
    compiler::TNode<Object> tmp880;
    compiler::TNode<Context> tmp881;
    compiler::TNode<JSTypedArray> tmp882;
    compiler::TNode<JSReceiver> tmp883;
    compiler::TNode<Object> tmp884;
    compiler::TNode<Object> tmp885;
    ca_.Bind(&block54, &tmp857, &tmp858, &tmp859, &tmp860, &tmp861, &tmp862, &tmp863, &tmp864, &tmp865, &tmp866, &tmp867, &tmp868, &tmp869, &tmp870, &tmp871, &tmp872, &tmp873, &tmp874, &tmp875, &tmp876, &tmp877, &tmp878, &tmp879, &tmp880, &tmp881, &tmp882, &tmp883, &tmp884, &tmp885);
    ca_.Goto(&block1);
  }

  if (block53.is_used()) {
    compiler::TNode<Context> tmp886;
    compiler::TNode<JSTypedArray> tmp887;
    compiler::TNode<Smi> tmp888;
    compiler::TNode<Smi> tmp889;
    compiler::TNode<JSReceiver> tmp890;
    compiler::TNode<Code> tmp891;
    compiler::TNode<Code> tmp892;
    compiler::TNode<Smi> tmp893;
    compiler::TNode<Smi> tmp894;
    compiler::TNode<Smi> tmp895;
    compiler::TNode<Object> tmp896;
    compiler::TNode<Object> tmp897;
    compiler::TNode<Object> tmp898;
    compiler::TNode<Number> tmp899;
    compiler::TNode<Number> tmp900;
    compiler::TNode<Object> tmp901;
    compiler::TNode<Smi> tmp902;
    compiler::TNode<Smi> tmp903;
    compiler::TNode<Object> tmp904;
    compiler::TNode<Smi> tmp905;
    compiler::TNode<Object> tmp906;
    compiler::TNode<Number> tmp907;
    compiler::TNode<BoolT> tmp908;
    compiler::TNode<Object> tmp909;
    compiler::TNode<Context> tmp910;
    compiler::TNode<JSTypedArray> tmp911;
    compiler::TNode<JSReceiver> tmp912;
    compiler::TNode<Object> tmp913;
    compiler::TNode<Object> tmp914;
    compiler::TNode<Number> tmp915;
    ca_.Bind(&block53, &tmp886, &tmp887, &tmp888, &tmp889, &tmp890, &tmp891, &tmp892, &tmp893, &tmp894, &tmp895, &tmp896, &tmp897, &tmp898, &tmp899, &tmp900, &tmp901, &tmp902, &tmp903, &tmp904, &tmp905, &tmp906, &tmp907, &tmp908, &tmp909, &tmp910, &tmp911, &tmp912, &tmp913, &tmp914, &tmp915);
    ca_.Goto(&block48, tmp886, tmp887, tmp888, tmp889, tmp890, tmp891, tmp892, tmp893, tmp894, tmp895, tmp896, tmp897, tmp898, tmp899, tmp900, tmp901, tmp902, tmp903, tmp904, tmp905, tmp906, tmp915, tmp908);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp916;
    compiler::TNode<JSTypedArray> tmp917;
    compiler::TNode<Smi> tmp918;
    compiler::TNode<Smi> tmp919;
    compiler::TNode<JSReceiver> tmp920;
    compiler::TNode<Code> tmp921;
    compiler::TNode<Code> tmp922;
    compiler::TNode<Smi> tmp923;
    compiler::TNode<Smi> tmp924;
    compiler::TNode<Smi> tmp925;
    compiler::TNode<Object> tmp926;
    compiler::TNode<Object> tmp927;
    compiler::TNode<Object> tmp928;
    compiler::TNode<Number> tmp929;
    compiler::TNode<Number> tmp930;
    compiler::TNode<Object> tmp931;
    compiler::TNode<Smi> tmp932;
    compiler::TNode<Smi> tmp933;
    compiler::TNode<Object> tmp934;
    compiler::TNode<Smi> tmp935;
    compiler::TNode<Object> tmp936;
    compiler::TNode<Number> tmp937;
    compiler::TNode<BoolT> tmp938;
    ca_.Bind(&block47, &tmp916, &tmp917, &tmp918, &tmp919, &tmp920, &tmp921, &tmp922, &tmp923, &tmp924, &tmp925, &tmp926, &tmp927, &tmp928, &tmp929, &tmp930, &tmp931, &tmp932, &tmp933, &tmp934, &tmp935, &tmp936, &tmp937, &tmp938);
    ca_.Branch(tmp938, &block55, &block56, tmp916, tmp917, tmp918, tmp919, tmp920, tmp921, tmp922, tmp923, tmp924, tmp925, tmp926, tmp927, tmp928, tmp929, tmp930, tmp931, tmp932, tmp933, tmp934, tmp935, tmp936, tmp937, tmp938);
  }

  if (block55.is_used()) {
    compiler::TNode<Context> tmp939;
    compiler::TNode<JSTypedArray> tmp940;
    compiler::TNode<Smi> tmp941;
    compiler::TNode<Smi> tmp942;
    compiler::TNode<JSReceiver> tmp943;
    compiler::TNode<Code> tmp944;
    compiler::TNode<Code> tmp945;
    compiler::TNode<Smi> tmp946;
    compiler::TNode<Smi> tmp947;
    compiler::TNode<Smi> tmp948;
    compiler::TNode<Object> tmp949;
    compiler::TNode<Object> tmp950;
    compiler::TNode<Object> tmp951;
    compiler::TNode<Number> tmp952;
    compiler::TNode<Number> tmp953;
    compiler::TNode<Object> tmp954;
    compiler::TNode<Smi> tmp955;
    compiler::TNode<Smi> tmp956;
    compiler::TNode<Object> tmp957;
    compiler::TNode<Smi> tmp958;
    compiler::TNode<Object> tmp959;
    compiler::TNode<Number> tmp960;
    compiler::TNode<BoolT> tmp961;
    ca_.Bind(&block55, &tmp939, &tmp940, &tmp941, &tmp942, &tmp943, &tmp944, &tmp945, &tmp946, &tmp947, &tmp948, &tmp949, &tmp950, &tmp951, &tmp952, &tmp953, &tmp954, &tmp955, &tmp956, &tmp957, &tmp958, &tmp959, &tmp960, &tmp961);
    ca_.Goto(&block32, tmp939, tmp940, tmp941, tmp942, tmp943, tmp944, tmp945, tmp946, tmp947, tmp948, tmp949, tmp950, tmp951, tmp952, tmp953, tmp954, tmp955, tmp956, tmp957, tmp958);
  }

  if (block56.is_used()) {
    compiler::TNode<Context> tmp962;
    compiler::TNode<JSTypedArray> tmp963;
    compiler::TNode<Smi> tmp964;
    compiler::TNode<Smi> tmp965;
    compiler::TNode<JSReceiver> tmp966;
    compiler::TNode<Code> tmp967;
    compiler::TNode<Code> tmp968;
    compiler::TNode<Smi> tmp969;
    compiler::TNode<Smi> tmp970;
    compiler::TNode<Smi> tmp971;
    compiler::TNode<Object> tmp972;
    compiler::TNode<Object> tmp973;
    compiler::TNode<Object> tmp974;
    compiler::TNode<Number> tmp975;
    compiler::TNode<Number> tmp976;
    compiler::TNode<Object> tmp977;
    compiler::TNode<Smi> tmp978;
    compiler::TNode<Smi> tmp979;
    compiler::TNode<Object> tmp980;
    compiler::TNode<Smi> tmp981;
    compiler::TNode<Object> tmp982;
    compiler::TNode<Number> tmp983;
    compiler::TNode<BoolT> tmp984;
    ca_.Bind(&block56, &tmp962, &tmp963, &tmp964, &tmp965, &tmp966, &tmp967, &tmp968, &tmp969, &tmp970, &tmp971, &tmp972, &tmp973, &tmp974, &tmp975, &tmp976, &tmp977, &tmp978, &tmp979, &tmp980, &tmp981, &tmp982, &tmp983, &tmp984);
    compiler::TNode<Object> tmp985 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp967, tmp962, tmp963, tmp979); 
    USE(tmp985);
    compiler::TNode<Object> tmp986 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp968, tmp962, tmp963, tmp981, tmp985); 
    USE(tmp986);
    compiler::TNode<Object> tmp987 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp968, tmp962, tmp963, tmp979, tmp982); 
    USE(tmp987);
    compiler::TNode<Number> tmp988;
    USE(tmp988);
    tmp988 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp983}, compiler::TNode<Number>{tmp988}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block59, tmp962, tmp963, tmp964, tmp965, tmp966, tmp967, tmp968, tmp969, tmp970, tmp971, tmp972, tmp973, tmp974, tmp975, tmp976, tmp977, tmp978, tmp979, tmp980, tmp981, tmp982, tmp983, tmp984, tmp985, tmp983);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block60, tmp962, tmp963, tmp964, tmp965, tmp966, tmp967, tmp968, tmp969, tmp970, tmp971, tmp972, tmp973, tmp974, tmp975, tmp976, tmp977, tmp978, tmp979, tmp980, tmp981, tmp982, tmp983, tmp984, tmp985, tmp983);
    }
  }

  if (block59.is_used()) {
    compiler::TNode<Context> tmp989;
    compiler::TNode<JSTypedArray> tmp990;
    compiler::TNode<Smi> tmp991;
    compiler::TNode<Smi> tmp992;
    compiler::TNode<JSReceiver> tmp993;
    compiler::TNode<Code> tmp994;
    compiler::TNode<Code> tmp995;
    compiler::TNode<Smi> tmp996;
    compiler::TNode<Smi> tmp997;
    compiler::TNode<Smi> tmp998;
    compiler::TNode<Object> tmp999;
    compiler::TNode<Object> tmp1000;
    compiler::TNode<Object> tmp1001;
    compiler::TNode<Number> tmp1002;
    compiler::TNode<Number> tmp1003;
    compiler::TNode<Object> tmp1004;
    compiler::TNode<Smi> tmp1005;
    compiler::TNode<Smi> tmp1006;
    compiler::TNode<Object> tmp1007;
    compiler::TNode<Smi> tmp1008;
    compiler::TNode<Object> tmp1009;
    compiler::TNode<Number> tmp1010;
    compiler::TNode<BoolT> tmp1011;
    compiler::TNode<Object> tmp1012;
    compiler::TNode<Number> tmp1013;
    ca_.Bind(&block59, &tmp989, &tmp990, &tmp991, &tmp992, &tmp993, &tmp994, &tmp995, &tmp996, &tmp997, &tmp998, &tmp999, &tmp1000, &tmp1001, &tmp1002, &tmp1003, &tmp1004, &tmp1005, &tmp1006, &tmp1007, &tmp1008, &tmp1009, &tmp1010, &tmp1011, &tmp1012, &tmp1013);
    ca_.Goto(&block57, tmp989, tmp990, tmp991, tmp992, tmp993, tmp994, tmp995, tmp996, tmp997, tmp998, tmp999, tmp1000, tmp1001, tmp1002, tmp1003, tmp1004, tmp1005, tmp1006, tmp1007, tmp1008, tmp1009, tmp1010, tmp1011, tmp1012);
  }

  if (block60.is_used()) {
    compiler::TNode<Context> tmp1014;
    compiler::TNode<JSTypedArray> tmp1015;
    compiler::TNode<Smi> tmp1016;
    compiler::TNode<Smi> tmp1017;
    compiler::TNode<JSReceiver> tmp1018;
    compiler::TNode<Code> tmp1019;
    compiler::TNode<Code> tmp1020;
    compiler::TNode<Smi> tmp1021;
    compiler::TNode<Smi> tmp1022;
    compiler::TNode<Smi> tmp1023;
    compiler::TNode<Object> tmp1024;
    compiler::TNode<Object> tmp1025;
    compiler::TNode<Object> tmp1026;
    compiler::TNode<Number> tmp1027;
    compiler::TNode<Number> tmp1028;
    compiler::TNode<Object> tmp1029;
    compiler::TNode<Smi> tmp1030;
    compiler::TNode<Smi> tmp1031;
    compiler::TNode<Object> tmp1032;
    compiler::TNode<Smi> tmp1033;
    compiler::TNode<Object> tmp1034;
    compiler::TNode<Number> tmp1035;
    compiler::TNode<BoolT> tmp1036;
    compiler::TNode<Object> tmp1037;
    compiler::TNode<Number> tmp1038;
    ca_.Bind(&block60, &tmp1014, &tmp1015, &tmp1016, &tmp1017, &tmp1018, &tmp1019, &tmp1020, &tmp1021, &tmp1022, &tmp1023, &tmp1024, &tmp1025, &tmp1026, &tmp1027, &tmp1028, &tmp1029, &tmp1030, &tmp1031, &tmp1032, &tmp1033, &tmp1034, &tmp1035, &tmp1036, &tmp1037, &tmp1038);
    ca_.Goto(&block58, tmp1014, tmp1015, tmp1016, tmp1017, tmp1018, tmp1019, tmp1020, tmp1021, tmp1022, tmp1023, tmp1024, tmp1025, tmp1026, tmp1027, tmp1028, tmp1029, tmp1030, tmp1031, tmp1032, tmp1033, tmp1034, tmp1035, tmp1036, tmp1037);
  }

  if (block57.is_used()) {
    compiler::TNode<Context> tmp1039;
    compiler::TNode<JSTypedArray> tmp1040;
    compiler::TNode<Smi> tmp1041;
    compiler::TNode<Smi> tmp1042;
    compiler::TNode<JSReceiver> tmp1043;
    compiler::TNode<Code> tmp1044;
    compiler::TNode<Code> tmp1045;
    compiler::TNode<Smi> tmp1046;
    compiler::TNode<Smi> tmp1047;
    compiler::TNode<Smi> tmp1048;
    compiler::TNode<Object> tmp1049;
    compiler::TNode<Object> tmp1050;
    compiler::TNode<Object> tmp1051;
    compiler::TNode<Number> tmp1052;
    compiler::TNode<Number> tmp1053;
    compiler::TNode<Object> tmp1054;
    compiler::TNode<Smi> tmp1055;
    compiler::TNode<Smi> tmp1056;
    compiler::TNode<Object> tmp1057;
    compiler::TNode<Smi> tmp1058;
    compiler::TNode<Object> tmp1059;
    compiler::TNode<Number> tmp1060;
    compiler::TNode<BoolT> tmp1061;
    compiler::TNode<Object> tmp1062;
    ca_.Bind(&block57, &tmp1039, &tmp1040, &tmp1041, &tmp1042, &tmp1043, &tmp1044, &tmp1045, &tmp1046, &tmp1047, &tmp1048, &tmp1049, &tmp1050, &tmp1051, &tmp1052, &tmp1053, &tmp1054, &tmp1055, &tmp1056, &tmp1057, &tmp1058, &tmp1059, &tmp1060, &tmp1061, &tmp1062);
    compiler::TNode<Object> tmp1063 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp1044, tmp1039, tmp1040, tmp1058); 
    USE(tmp1063);
    compiler::TNode<Object> tmp1064 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(1)).descriptor(), tmp1044, tmp1039, tmp1040, tmp1055); 
    USE(tmp1064);
    compiler::TNode<Object> tmp1065 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp1045, tmp1039, tmp1040, tmp1058, tmp1064); 
    USE(tmp1065);
    compiler::TNode<Object> tmp1066 = CodeStubAssembler(state_).CallStub(Builtins::CallableFor(ca_.isolate(),ExampleBuiltinForTorqueFunctionPointerType(2)).descriptor(), tmp1045, tmp1039, tmp1040, tmp1055, tmp1063); 
    USE(tmp1066);
    compiler::TNode<Smi> tmp1067;
    USE(tmp1067);
    tmp1067 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp1068;
    USE(tmp1068);
    tmp1068 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1055}, compiler::TNode<Smi>{tmp1067}));
    ca_.Goto(&block58, tmp1039, tmp1040, tmp1041, tmp1042, tmp1043, tmp1044, tmp1045, tmp1046, tmp1047, tmp1048, tmp1049, tmp1050, tmp1051, tmp1052, tmp1053, tmp1054, tmp1068, tmp1056, tmp1064, tmp1058, tmp1063, tmp1060, tmp1061, tmp1062);
  }

  if (block58.is_used()) {
    compiler::TNode<Context> tmp1069;
    compiler::TNode<JSTypedArray> tmp1070;
    compiler::TNode<Smi> tmp1071;
    compiler::TNode<Smi> tmp1072;
    compiler::TNode<JSReceiver> tmp1073;
    compiler::TNode<Code> tmp1074;
    compiler::TNode<Code> tmp1075;
    compiler::TNode<Smi> tmp1076;
    compiler::TNode<Smi> tmp1077;
    compiler::TNode<Smi> tmp1078;
    compiler::TNode<Object> tmp1079;
    compiler::TNode<Object> tmp1080;
    compiler::TNode<Object> tmp1081;
    compiler::TNode<Number> tmp1082;
    compiler::TNode<Number> tmp1083;
    compiler::TNode<Object> tmp1084;
    compiler::TNode<Smi> tmp1085;
    compiler::TNode<Smi> tmp1086;
    compiler::TNode<Object> tmp1087;
    compiler::TNode<Smi> tmp1088;
    compiler::TNode<Object> tmp1089;
    compiler::TNode<Number> tmp1090;
    compiler::TNode<BoolT> tmp1091;
    compiler::TNode<Object> tmp1092;
    ca_.Bind(&block58, &tmp1069, &tmp1070, &tmp1071, &tmp1072, &tmp1073, &tmp1074, &tmp1075, &tmp1076, &tmp1077, &tmp1078, &tmp1079, &tmp1080, &tmp1081, &tmp1082, &tmp1083, &tmp1084, &tmp1085, &tmp1086, &tmp1087, &tmp1088, &tmp1089, &tmp1090, &tmp1091, &tmp1092);
    ca_.Goto(&block43, tmp1069, tmp1070, tmp1071, tmp1072, tmp1073, tmp1074, tmp1075, tmp1076, tmp1077, tmp1078, tmp1079, tmp1080, tmp1081, tmp1082, tmp1083, tmp1084, tmp1085, tmp1086, tmp1087, tmp1088, tmp1089, tmp1090);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp1093;
    compiler::TNode<JSTypedArray> tmp1094;
    compiler::TNode<Smi> tmp1095;
    compiler::TNode<Smi> tmp1096;
    compiler::TNode<JSReceiver> tmp1097;
    compiler::TNode<Code> tmp1098;
    compiler::TNode<Code> tmp1099;
    compiler::TNode<Smi> tmp1100;
    compiler::TNode<Smi> tmp1101;
    compiler::TNode<Smi> tmp1102;
    compiler::TNode<Object> tmp1103;
    compiler::TNode<Object> tmp1104;
    compiler::TNode<Object> tmp1105;
    compiler::TNode<Number> tmp1106;
    compiler::TNode<Number> tmp1107;
    compiler::TNode<Object> tmp1108;
    compiler::TNode<Smi> tmp1109;
    compiler::TNode<Smi> tmp1110;
    compiler::TNode<Object> tmp1111;
    compiler::TNode<Smi> tmp1112;
    compiler::TNode<Object> tmp1113;
    compiler::TNode<Number> tmp1114;
    ca_.Bind(&block43, &tmp1093, &tmp1094, &tmp1095, &tmp1096, &tmp1097, &tmp1098, &tmp1099, &tmp1100, &tmp1101, &tmp1102, &tmp1103, &tmp1104, &tmp1105, &tmp1106, &tmp1107, &tmp1108, &tmp1109, &tmp1110, &tmp1111, &tmp1112, &tmp1113, &tmp1114);
    ca_.Goto(&block41, tmp1093, tmp1094, tmp1095, tmp1096, tmp1097, tmp1098, tmp1099, tmp1100, tmp1101, tmp1102, tmp1103, tmp1104, tmp1105, tmp1106, tmp1107, tmp1108, tmp1109, tmp1110, tmp1111, tmp1112, tmp1113, tmp1114);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp1115;
    compiler::TNode<JSTypedArray> tmp1116;
    compiler::TNode<Smi> tmp1117;
    compiler::TNode<Smi> tmp1118;
    compiler::TNode<JSReceiver> tmp1119;
    compiler::TNode<Code> tmp1120;
    compiler::TNode<Code> tmp1121;
    compiler::TNode<Smi> tmp1122;
    compiler::TNode<Smi> tmp1123;
    compiler::TNode<Smi> tmp1124;
    compiler::TNode<Object> tmp1125;
    compiler::TNode<Object> tmp1126;
    compiler::TNode<Object> tmp1127;
    compiler::TNode<Number> tmp1128;
    compiler::TNode<Number> tmp1129;
    compiler::TNode<Object> tmp1130;
    compiler::TNode<Smi> tmp1131;
    compiler::TNode<Smi> tmp1132;
    compiler::TNode<Object> tmp1133;
    compiler::TNode<Smi> tmp1134;
    compiler::TNode<Object> tmp1135;
    compiler::TNode<Number> tmp1136;
    ca_.Bind(&block41, &tmp1115, &tmp1116, &tmp1117, &tmp1118, &tmp1119, &tmp1120, &tmp1121, &tmp1122, &tmp1123, &tmp1124, &tmp1125, &tmp1126, &tmp1127, &tmp1128, &tmp1129, &tmp1130, &tmp1131, &tmp1132, &tmp1133, &tmp1134, &tmp1135, &tmp1136);
    ca_.Goto(&block34, tmp1115, tmp1116, tmp1117, tmp1118, tmp1119, tmp1120, tmp1121, tmp1122, tmp1123, tmp1124, tmp1125, tmp1126, tmp1127, tmp1128, tmp1129, tmp1130, tmp1131, tmp1132, tmp1133, tmp1134);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp1137;
    compiler::TNode<JSTypedArray> tmp1138;
    compiler::TNode<Smi> tmp1139;
    compiler::TNode<Smi> tmp1140;
    compiler::TNode<JSReceiver> tmp1141;
    compiler::TNode<Code> tmp1142;
    compiler::TNode<Code> tmp1143;
    compiler::TNode<Smi> tmp1144;
    compiler::TNode<Smi> tmp1145;
    compiler::TNode<Smi> tmp1146;
    compiler::TNode<Object> tmp1147;
    compiler::TNode<Object> tmp1148;
    compiler::TNode<Object> tmp1149;
    compiler::TNode<Number> tmp1150;
    compiler::TNode<Number> tmp1151;
    compiler::TNode<Object> tmp1152;
    compiler::TNode<Smi> tmp1153;
    compiler::TNode<Smi> tmp1154;
    compiler::TNode<Object> tmp1155;
    compiler::TNode<Smi> tmp1156;
    ca_.Bind(&block34, &tmp1137, &tmp1138, &tmp1139, &tmp1140, &tmp1141, &tmp1142, &tmp1143, &tmp1144, &tmp1145, &tmp1146, &tmp1147, &tmp1148, &tmp1149, &tmp1150, &tmp1151, &tmp1152, &tmp1153, &tmp1154, &tmp1155, &tmp1156);
    compiler::TNode<Smi> tmp1157;
    USE(tmp1157);
    tmp1157 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Smi> tmp1158;
    USE(tmp1158);
    tmp1158 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiAdd(compiler::TNode<Smi>{tmp1156}, compiler::TNode<Smi>{tmp1157}));
    ca_.Goto(&block33, tmp1137, tmp1138, tmp1139, tmp1140, tmp1141, tmp1142, tmp1143, tmp1144, tmp1145, tmp1146, tmp1147, tmp1148, tmp1149, tmp1150, tmp1151, tmp1152, tmp1153, tmp1154, tmp1155, tmp1158);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp1159;
    compiler::TNode<JSTypedArray> tmp1160;
    compiler::TNode<Smi> tmp1161;
    compiler::TNode<Smi> tmp1162;
    compiler::TNode<JSReceiver> tmp1163;
    compiler::TNode<Code> tmp1164;
    compiler::TNode<Code> tmp1165;
    compiler::TNode<Smi> tmp1166;
    compiler::TNode<Smi> tmp1167;
    compiler::TNode<Smi> tmp1168;
    compiler::TNode<Object> tmp1169;
    compiler::TNode<Object> tmp1170;
    compiler::TNode<Object> tmp1171;
    compiler::TNode<Number> tmp1172;
    compiler::TNode<Number> tmp1173;
    compiler::TNode<Object> tmp1174;
    compiler::TNode<Smi> tmp1175;
    compiler::TNode<Smi> tmp1176;
    compiler::TNode<Object> tmp1177;
    compiler::TNode<Smi> tmp1178;
    ca_.Bind(&block32, &tmp1159, &tmp1160, &tmp1161, &tmp1162, &tmp1163, &tmp1164, &tmp1165, &tmp1166, &tmp1167, &tmp1168, &tmp1169, &tmp1170, &tmp1171, &tmp1172, &tmp1173, &tmp1174, &tmp1175, &tmp1176, &tmp1177, &tmp1178);
    compiler::TNode<Smi> tmp1179;
    USE(tmp1179);
    tmp1179 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp1167}, compiler::TNode<Smi>{tmp1176}));
    compiler::TNode<Smi> tmp1180;
    USE(tmp1180);
    tmp1180 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiSub(compiler::TNode<Smi>{tmp1175}, compiler::TNode<Smi>{tmp1166}));
    compiler::TNode<BoolT> tmp1181;
    USE(tmp1181);
    tmp1181 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiLessThan(compiler::TNode<Smi>{tmp1179}, compiler::TNode<Smi>{tmp1180}));
    ca_.Branch(tmp1181, &block61, &block62, tmp1159, tmp1160, tmp1161, tmp1162, tmp1163, tmp1164, tmp1165, tmp1166, tmp1167, tmp1168, tmp1169, tmp1170, tmp1171, tmp1172, tmp1173, tmp1174, tmp1175, tmp1176, tmp1177);
  }

  if (block61.is_used()) {
    compiler::TNode<Context> tmp1182;
    compiler::TNode<JSTypedArray> tmp1183;
    compiler::TNode<Smi> tmp1184;
    compiler::TNode<Smi> tmp1185;
    compiler::TNode<JSReceiver> tmp1186;
    compiler::TNode<Code> tmp1187;
    compiler::TNode<Code> tmp1188;
    compiler::TNode<Smi> tmp1189;
    compiler::TNode<Smi> tmp1190;
    compiler::TNode<Smi> tmp1191;
    compiler::TNode<Object> tmp1192;
    compiler::TNode<Object> tmp1193;
    compiler::TNode<Object> tmp1194;
    compiler::TNode<Number> tmp1195;
    compiler::TNode<Number> tmp1196;
    compiler::TNode<Object> tmp1197;
    compiler::TNode<Smi> tmp1198;
    compiler::TNode<Smi> tmp1199;
    compiler::TNode<Object> tmp1200;
    ca_.Bind(&block61, &tmp1182, &tmp1183, &tmp1184, &tmp1185, &tmp1186, &tmp1187, &tmp1188, &tmp1189, &tmp1190, &tmp1191, &tmp1192, &tmp1193, &tmp1194, &tmp1195, &tmp1196, &tmp1197, &tmp1198, &tmp1199, &tmp1200);
    compiler::TNode<JSTypedArray> tmp1201;
    tmp1201 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayQuickSort, tmp1182, tmp1183, tmp1199, tmp1190, tmp1186, tmp1187, tmp1188));
    USE(tmp1201);
    ca_.Goto(&block63, tmp1182, tmp1183, tmp1184, tmp1185, tmp1186, tmp1187, tmp1188, tmp1189, tmp1198, tmp1191, tmp1192, tmp1193, tmp1194, tmp1195, tmp1196, tmp1197, tmp1198, tmp1199, tmp1200);
  }

  if (block62.is_used()) {
    compiler::TNode<Context> tmp1202;
    compiler::TNode<JSTypedArray> tmp1203;
    compiler::TNode<Smi> tmp1204;
    compiler::TNode<Smi> tmp1205;
    compiler::TNode<JSReceiver> tmp1206;
    compiler::TNode<Code> tmp1207;
    compiler::TNode<Code> tmp1208;
    compiler::TNode<Smi> tmp1209;
    compiler::TNode<Smi> tmp1210;
    compiler::TNode<Smi> tmp1211;
    compiler::TNode<Object> tmp1212;
    compiler::TNode<Object> tmp1213;
    compiler::TNode<Object> tmp1214;
    compiler::TNode<Number> tmp1215;
    compiler::TNode<Number> tmp1216;
    compiler::TNode<Object> tmp1217;
    compiler::TNode<Smi> tmp1218;
    compiler::TNode<Smi> tmp1219;
    compiler::TNode<Object> tmp1220;
    ca_.Bind(&block62, &tmp1202, &tmp1203, &tmp1204, &tmp1205, &tmp1206, &tmp1207, &tmp1208, &tmp1209, &tmp1210, &tmp1211, &tmp1212, &tmp1213, &tmp1214, &tmp1215, &tmp1216, &tmp1217, &tmp1218, &tmp1219, &tmp1220);
    compiler::TNode<JSTypedArray> tmp1221;
    tmp1221 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayQuickSort, tmp1202, tmp1203, tmp1209, tmp1218, tmp1206, tmp1207, tmp1208));
    USE(tmp1221);
    ca_.Goto(&block63, tmp1202, tmp1203, tmp1204, tmp1205, tmp1206, tmp1207, tmp1208, tmp1219, tmp1210, tmp1211, tmp1212, tmp1213, tmp1214, tmp1215, tmp1216, tmp1217, tmp1218, tmp1219, tmp1220);
  }

  if (block63.is_used()) {
    compiler::TNode<Context> tmp1222;
    compiler::TNode<JSTypedArray> tmp1223;
    compiler::TNode<Smi> tmp1224;
    compiler::TNode<Smi> tmp1225;
    compiler::TNode<JSReceiver> tmp1226;
    compiler::TNode<Code> tmp1227;
    compiler::TNode<Code> tmp1228;
    compiler::TNode<Smi> tmp1229;
    compiler::TNode<Smi> tmp1230;
    compiler::TNode<Smi> tmp1231;
    compiler::TNode<Object> tmp1232;
    compiler::TNode<Object> tmp1233;
    compiler::TNode<Object> tmp1234;
    compiler::TNode<Number> tmp1235;
    compiler::TNode<Number> tmp1236;
    compiler::TNode<Object> tmp1237;
    compiler::TNode<Smi> tmp1238;
    compiler::TNode<Smi> tmp1239;
    compiler::TNode<Object> tmp1240;
    ca_.Bind(&block63, &tmp1222, &tmp1223, &tmp1224, &tmp1225, &tmp1226, &tmp1227, &tmp1228, &tmp1229, &tmp1230, &tmp1231, &tmp1232, &tmp1233, &tmp1234, &tmp1235, &tmp1236, &tmp1237, &tmp1238, &tmp1239, &tmp1240);
    ca_.Goto(&block5, tmp1222, tmp1223, tmp1224, tmp1225, tmp1226, tmp1227, tmp1228, tmp1229, tmp1230);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp1241;
    compiler::TNode<JSTypedArray> tmp1242;
    compiler::TNode<Smi> tmp1243;
    compiler::TNode<Smi> tmp1244;
    compiler::TNode<JSReceiver> tmp1245;
    compiler::TNode<Code> tmp1246;
    compiler::TNode<Code> tmp1247;
    compiler::TNode<Smi> tmp1248;
    compiler::TNode<Smi> tmp1249;
    ca_.Bind(&block4, &tmp1241, &tmp1242, &tmp1243, &tmp1244, &tmp1245, &tmp1246, &tmp1247, &tmp1248, &tmp1249);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_Detached);
  }

    ca_.Bind(&block2);
}

TF_BUILTIN(TypedArrayQuickSort, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kFrom));
  USE(parameter2);
  compiler::TNode<Smi> parameter3 = UncheckedCast<Smi>(Parameter(Descriptor::kTo));
  USE(parameter3);
  compiler::TNode<JSReceiver> parameter4 = UncheckedCast<JSReceiver>(Parameter(Descriptor::kComparefn));
  USE(parameter4);
  compiler::TNode<Code> parameter5 = UncheckedCast<Code>(Parameter(Descriptor::kLoad));
  USE(parameter5);
  compiler::TNode<Code> parameter6 = UncheckedCast<Code>(Parameter(Descriptor::kStore));
  USE(parameter6);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code, Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Smi, JSReceiver, Code, Code> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3, parameter4, parameter5, parameter6);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Smi> tmp3;
    compiler::TNode<JSReceiver> tmp4;
    compiler::TNode<Code> tmp5;
    compiler::TNode<Code> tmp6;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4, &tmp5, &tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    TypedArrayBuiltinsFromDSLAssembler(state_).TypedArrayQuickSortImpl(compiler::TNode<Context>{tmp0}, compiler::TNode<JSTypedArray>{tmp1}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Smi>{tmp3}, compiler::TNode<JSReceiver>{tmp4}, compiler::TNode<Code>{tmp5}, compiler::TNode<Code>{tmp6}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<JSTypedArray> tmp8;
    compiler::TNode<Smi> tmp9;
    compiler::TNode<Smi> tmp10;
    compiler::TNode<JSReceiver> tmp11;
    compiler::TNode<Code> tmp12;
    compiler::TNode<Code> tmp13;
    compiler::TNode<Context> tmp14;
    compiler::TNode<JSTypedArray> tmp15;
    compiler::TNode<Smi> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<JSReceiver> tmp18;
    compiler::TNode<Code> tmp19;
    compiler::TNode<Code> tmp20;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block2, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSTypedArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<JSReceiver> tmp25;
    compiler::TNode<Code> tmp26;
    compiler::TNode<Code> tmp27;
    compiler::TNode<Context> tmp28;
    compiler::TNode<JSTypedArray> tmp29;
    compiler::TNode<Smi> tmp30;
    compiler::TNode<Smi> tmp31;
    compiler::TNode<JSReceiver> tmp32;
    compiler::TNode<Code> tmp33;
    compiler::TNode<Code> tmp34;
    ca_.Bind(&block3, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34);
    ca_.Goto(&block1, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp35;
    compiler::TNode<JSTypedArray> tmp36;
    compiler::TNode<Smi> tmp37;
    compiler::TNode<Smi> tmp38;
    compiler::TNode<JSReceiver> tmp39;
    compiler::TNode<Code> tmp40;
    compiler::TNode<Code> tmp41;
    ca_.Bind(&block2, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41);
    compiler::TNode<Object> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapObject5ATSmi18ATconstexpr_string("%TypedArray%.prototype.sort"));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp35}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp42});
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    compiler::TNode<Smi> tmp45;
    compiler::TNode<Smi> tmp46;
    compiler::TNode<JSReceiver> tmp47;
    compiler::TNode<Code> tmp48;
    compiler::TNode<Code> tmp49;
    ca_.Bind(&block1, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49);
    CodeStubAssembler(state_).Return(tmp44);
  }
}

TF_BUILTIN(TypedArrayPrototypeSort, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  Node* argc = Parameter(Descriptor::kJSActualArgumentsCount);
  CodeStubArguments arguments_impl(this, ChangeInt32ToIntPtr(argc));
  TNode<Object> parameter1 = arguments_impl.GetReceiver();
auto arguments = &arguments_impl;
USE(arguments);
USE(parameter1);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, Object, JSReceiver> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block36(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block39(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block41(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block42(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block44(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block45(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block47(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block48(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block49(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block46(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block43(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block40(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi, JSReceiver, Code, Code, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSTypedArray, Smi> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block1, &tmp5, &tmp6);
    compiler::TNode<IntPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp7}));
    ca_.Goto(&block4, tmp5, tmp6, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    compiler::TNode<Oddball> tmp11;
    USE(tmp11);
    tmp11 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block3, tmp9, tmp10, tmp11);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp12, tmp13, tmp14);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    ca_.Bind(&block3, &tmp15, &tmp16, &tmp17);
    compiler::TNode<Oddball> tmp18;
    USE(tmp18);
    tmp18 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordNotEqual(compiler::TNode<Object>{tmp17}, compiler::TNode<Object>{tmp18}));
    ca_.Branch(tmp19, &block7, &block6, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    ca_.Bind(&block7, &tmp20, &tmp21, &tmp22);
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).TaggedIsCallable(compiler::TNode<Object>{tmp22}));
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp23}));
    ca_.Branch(tmp24, &block5, &block6, tmp20, tmp21, tmp22);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block5, &tmp25, &tmp26, &tmp27);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp25}, MessageTemplate::kBadSortComparisonFunction, compiler::TNode<Object>{tmp27});
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    ca_.Bind(&block6, &tmp28, &tmp29, &tmp30);
    compiler::TNode<JSTypedArray> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<JSTypedArray>(TypedArrayBuiltinsAssembler(state_).ValidateTypedArray(compiler::TNode<Context>{tmp28}, compiler::TNode<Object>{tmp29}, "%TypedArray%.prototype.sort"));
    compiler::TNode<Oddball> tmp32;
    USE(tmp32);
    tmp32 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp30}, compiler::TNode<Object>{tmp32}));
    ca_.Branch(tmp33, &block8, &block9, tmp28, tmp29, tmp30, tmp29, tmp31);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<JSTypedArray> tmp38;
    ca_.Bind(&block8, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    compiler::TNode<JSTypedArray> tmp39;
    tmp39 = TORQUE_CAST(CodeStubAssembler(state_).CallRuntime(Runtime::kTypedArraySortFast, tmp34, tmp37));
    USE(tmp39);
    arguments->PopAndReturn(tmp39);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<JSTypedArray> tmp44;
    ca_.Bind(&block9, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<Smi> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadJSTypedArrayLength(compiler::TNode<JSTypedArray>{tmp44}));
    compiler::TNode<JSReceiver> tmp46;
    USE(tmp46);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp46 = BaseBuiltinsFromDSLAssembler(state_).Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context>{tmp40}, compiler::TNode<Object>{tmp42}, &label0);
    ca_.Goto(&block12, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp42, tmp46);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block13, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp42);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSTypedArray> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<Object> tmp53;
    ca_.Bind(&block13, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53);
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<JSTypedArray> tmp58;
    compiler::TNode<Smi> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<JSReceiver> tmp61;
    ca_.Bind(&block12, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Int32T> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadElementsKind(compiler::TNode<JSTypedArray>{tmp58}));
    compiler::TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsElementsKindGreaterThan(compiler::TNode<Int32T>{tmp62}, UINT32_ELEMENTS));
    ca_.Branch(tmp63, &block14, &block15, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp61, ca_.Uninitialized<Code>(), ca_.Uninitialized<Code>(), tmp62);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<JSTypedArray> tmp68;
    compiler::TNode<Smi> tmp69;
    compiler::TNode<JSReceiver> tmp70;
    compiler::TNode<Code> tmp71;
    compiler::TNode<Code> tmp72;
    compiler::TNode<Int32T> tmp73;
    ca_.Bind(&block14, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    compiler::TNode<Int32T> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(INT32_ELEMENTS));
    compiler::TNode<BoolT> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp73}, compiler::TNode<Int32T>{tmp74}));
    ca_.Branch(tmp75, &block17, &block18, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<JSTypedArray> tmp80;
    compiler::TNode<Smi> tmp81;
    compiler::TNode<JSReceiver> tmp82;
    compiler::TNode<Code> tmp83;
    compiler::TNode<Code> tmp84;
    compiler::TNode<Int32T> tmp85;
    ca_.Bind(&block17, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85);
    ca_.Goto(&block19, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement17ATFixedInt32Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement17ATFixedInt32Array).code())), tmp85);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<Object> tmp88;
    compiler::TNode<Object> tmp89;
    compiler::TNode<JSTypedArray> tmp90;
    compiler::TNode<Smi> tmp91;
    compiler::TNode<JSReceiver> tmp92;
    compiler::TNode<Code> tmp93;
    compiler::TNode<Code> tmp94;
    compiler::TNode<Int32T> tmp95;
    ca_.Bind(&block18, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95);
    compiler::TNode<Int32T> tmp96;
    USE(tmp96);
    tmp96 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(FLOAT32_ELEMENTS));
    compiler::TNode<BoolT> tmp97;
    USE(tmp97);
    tmp97 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp95}, compiler::TNode<Int32T>{tmp96}));
    ca_.Branch(tmp97, &block20, &block21, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<JSTypedArray> tmp102;
    compiler::TNode<Smi> tmp103;
    compiler::TNode<JSReceiver> tmp104;
    compiler::TNode<Code> tmp105;
    compiler::TNode<Code> tmp106;
    compiler::TNode<Int32T> tmp107;
    ca_.Bind(&block20, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.Goto(&block22, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement19ATFixedFloat32Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement19ATFixedFloat32Array).code())), tmp107);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSTypedArray> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<JSReceiver> tmp114;
    compiler::TNode<Code> tmp115;
    compiler::TNode<Code> tmp116;
    compiler::TNode<Int32T> tmp117;
    ca_.Bind(&block21, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117);
    compiler::TNode<Int32T> tmp118;
    USE(tmp118);
    tmp118 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(FLOAT64_ELEMENTS));
    compiler::TNode<BoolT> tmp119;
    USE(tmp119);
    tmp119 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp117}, compiler::TNode<Int32T>{tmp118}));
    ca_.Branch(tmp119, &block23, &block24, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<JSTypedArray> tmp124;
    compiler::TNode<Smi> tmp125;
    compiler::TNode<JSReceiver> tmp126;
    compiler::TNode<Code> tmp127;
    compiler::TNode<Code> tmp128;
    compiler::TNode<Int32T> tmp129;
    ca_.Bind(&block23, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129);
    ca_.Goto(&block25, tmp120, tmp121, tmp122, tmp123, tmp124, tmp125, tmp126, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement19ATFixedFloat64Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement19ATFixedFloat64Array).code())), tmp129);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp130;
    compiler::TNode<Object> tmp131;
    compiler::TNode<Object> tmp132;
    compiler::TNode<Object> tmp133;
    compiler::TNode<JSTypedArray> tmp134;
    compiler::TNode<Smi> tmp135;
    compiler::TNode<JSReceiver> tmp136;
    compiler::TNode<Code> tmp137;
    compiler::TNode<Code> tmp138;
    compiler::TNode<Int32T> tmp139;
    ca_.Bind(&block24, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139);
    compiler::TNode<Int32T> tmp140;
    USE(tmp140);
    tmp140 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(UINT8_CLAMPED_ELEMENTS));
    compiler::TNode<BoolT> tmp141;
    USE(tmp141);
    tmp141 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp139}, compiler::TNode<Int32T>{tmp140}));
    ca_.Branch(tmp141, &block26, &block27, tmp130, tmp131, tmp132, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<Object> tmp145;
    compiler::TNode<JSTypedArray> tmp146;
    compiler::TNode<Smi> tmp147;
    compiler::TNode<JSReceiver> tmp148;
    compiler::TNode<Code> tmp149;
    compiler::TNode<Code> tmp150;
    compiler::TNode<Int32T> tmp151;
    ca_.Bind(&block26, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149, &tmp150, &tmp151);
    ca_.Goto(&block28, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement24ATFixedUint8ClampedArray).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement24ATFixedUint8ClampedArray).code())), tmp151);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp152;
    compiler::TNode<Object> tmp153;
    compiler::TNode<Object> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<JSTypedArray> tmp156;
    compiler::TNode<Smi> tmp157;
    compiler::TNode<JSReceiver> tmp158;
    compiler::TNode<Code> tmp159;
    compiler::TNode<Code> tmp160;
    compiler::TNode<Int32T> tmp161;
    ca_.Bind(&block27, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161);
    compiler::TNode<Int32T> tmp162;
    USE(tmp162);
    tmp162 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(BIGUINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp163;
    USE(tmp163);
    tmp163 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp161}, compiler::TNode<Int32T>{tmp162}));
    ca_.Branch(tmp163, &block29, &block30, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157, tmp158, tmp159, tmp160, tmp161);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<JSTypedArray> tmp168;
    compiler::TNode<Smi> tmp169;
    compiler::TNode<JSReceiver> tmp170;
    compiler::TNode<Code> tmp171;
    compiler::TNode<Code> tmp172;
    compiler::TNode<Int32T> tmp173;
    ca_.Bind(&block29, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173);
    ca_.Goto(&block31, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement21ATFixedBigUint64Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement21ATFixedBigUint64Array).code())), tmp173);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp174;
    compiler::TNode<Object> tmp175;
    compiler::TNode<Object> tmp176;
    compiler::TNode<Object> tmp177;
    compiler::TNode<JSTypedArray> tmp178;
    compiler::TNode<Smi> tmp179;
    compiler::TNode<JSReceiver> tmp180;
    compiler::TNode<Code> tmp181;
    compiler::TNode<Code> tmp182;
    compiler::TNode<Int32T> tmp183;
    ca_.Bind(&block30, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    compiler::TNode<Int32T> tmp184;
    USE(tmp184);
    tmp184 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(BIGINT64_ELEMENTS));
    compiler::TNode<BoolT> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp183}, compiler::TNode<Int32T>{tmp184}));
    ca_.Branch(tmp185, &block32, &block33, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSTypedArray> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<JSReceiver> tmp192;
    compiler::TNode<Code> tmp193;
    compiler::TNode<Code> tmp194;
    compiler::TNode<Int32T> tmp195;
    ca_.Bind(&block32, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
    ca_.Goto(&block34, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement20ATFixedBigInt64Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement20ATFixedBigInt64Array).code())), tmp195);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<Object> tmp199;
    compiler::TNode<JSTypedArray> tmp200;
    compiler::TNode<Smi> tmp201;
    compiler::TNode<JSReceiver> tmp202;
    compiler::TNode<Code> tmp203;
    compiler::TNode<Code> tmp204;
    compiler::TNode<Int32T> tmp205;
    ca_.Bind(&block33, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/typed-array.tq:327:11");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<JSTypedArray> tmp210;
    compiler::TNode<Smi> tmp211;
    compiler::TNode<JSReceiver> tmp212;
    compiler::TNode<Code> tmp213;
    compiler::TNode<Code> tmp214;
    compiler::TNode<Int32T> tmp215;
    ca_.Bind(&block34, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215);
    ca_.Goto(&block31, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp216;
    compiler::TNode<Object> tmp217;
    compiler::TNode<Object> tmp218;
    compiler::TNode<Object> tmp219;
    compiler::TNode<JSTypedArray> tmp220;
    compiler::TNode<Smi> tmp221;
    compiler::TNode<JSReceiver> tmp222;
    compiler::TNode<Code> tmp223;
    compiler::TNode<Code> tmp224;
    compiler::TNode<Int32T> tmp225;
    ca_.Bind(&block31, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225);
    ca_.Goto(&block28, tmp216, tmp217, tmp218, tmp219, tmp220, tmp221, tmp222, tmp223, tmp224, tmp225);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp226;
    compiler::TNode<Object> tmp227;
    compiler::TNode<Object> tmp228;
    compiler::TNode<Object> tmp229;
    compiler::TNode<JSTypedArray> tmp230;
    compiler::TNode<Smi> tmp231;
    compiler::TNode<JSReceiver> tmp232;
    compiler::TNode<Code> tmp233;
    compiler::TNode<Code> tmp234;
    compiler::TNode<Int32T> tmp235;
    ca_.Bind(&block28, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235);
    ca_.Goto(&block25, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<JSTypedArray> tmp240;
    compiler::TNode<Smi> tmp241;
    compiler::TNode<JSReceiver> tmp242;
    compiler::TNode<Code> tmp243;
    compiler::TNode<Code> tmp244;
    compiler::TNode<Int32T> tmp245;
    ca_.Bind(&block25, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245);
    ca_.Goto(&block22, tmp236, tmp237, tmp238, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245);
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp246;
    compiler::TNode<Object> tmp247;
    compiler::TNode<Object> tmp248;
    compiler::TNode<Object> tmp249;
    compiler::TNode<JSTypedArray> tmp250;
    compiler::TNode<Smi> tmp251;
    compiler::TNode<JSReceiver> tmp252;
    compiler::TNode<Code> tmp253;
    compiler::TNode<Code> tmp254;
    compiler::TNode<Int32T> tmp255;
    ca_.Bind(&block22, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
    ca_.Goto(&block19, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255);
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<JSTypedArray> tmp260;
    compiler::TNode<Smi> tmp261;
    compiler::TNode<JSReceiver> tmp262;
    compiler::TNode<Code> tmp263;
    compiler::TNode<Code> tmp264;
    compiler::TNode<Int32T> tmp265;
    ca_.Bind(&block19, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265);
    ca_.Goto(&block16, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp266;
    compiler::TNode<Object> tmp267;
    compiler::TNode<Object> tmp268;
    compiler::TNode<Object> tmp269;
    compiler::TNode<JSTypedArray> tmp270;
    compiler::TNode<Smi> tmp271;
    compiler::TNode<JSReceiver> tmp272;
    compiler::TNode<Code> tmp273;
    compiler::TNode<Code> tmp274;
    compiler::TNode<Int32T> tmp275;
    ca_.Bind(&block15, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275);
    compiler::TNode<Int32T> tmp276;
    USE(tmp276);
    tmp276 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(UINT8_ELEMENTS));
    compiler::TNode<BoolT> tmp277;
    USE(tmp277);
    tmp277 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp275}, compiler::TNode<Int32T>{tmp276}));
    ca_.Branch(tmp277, &block35, &block36, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272, tmp273, tmp274, tmp275);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp278;
    compiler::TNode<Object> tmp279;
    compiler::TNode<Object> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<JSTypedArray> tmp282;
    compiler::TNode<Smi> tmp283;
    compiler::TNode<JSReceiver> tmp284;
    compiler::TNode<Code> tmp285;
    compiler::TNode<Code> tmp286;
    compiler::TNode<Int32T> tmp287;
    ca_.Bind(&block35, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287);
    ca_.Goto(&block37, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement17ATFixedUint8Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement17ATFixedUint8Array).code())), tmp287);
  }

  if (block36.is_used()) {
    compiler::TNode<Context> tmp288;
    compiler::TNode<Object> tmp289;
    compiler::TNode<Object> tmp290;
    compiler::TNode<Object> tmp291;
    compiler::TNode<JSTypedArray> tmp292;
    compiler::TNode<Smi> tmp293;
    compiler::TNode<JSReceiver> tmp294;
    compiler::TNode<Code> tmp295;
    compiler::TNode<Code> tmp296;
    compiler::TNode<Int32T> tmp297;
    ca_.Bind(&block36, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297);
    compiler::TNode<Int32T> tmp298;
    USE(tmp298);
    tmp298 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(INT8_ELEMENTS));
    compiler::TNode<BoolT> tmp299;
    USE(tmp299);
    tmp299 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp297}, compiler::TNode<Int32T>{tmp298}));
    ca_.Branch(tmp299, &block38, &block39, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp300;
    compiler::TNode<Object> tmp301;
    compiler::TNode<Object> tmp302;
    compiler::TNode<Object> tmp303;
    compiler::TNode<JSTypedArray> tmp304;
    compiler::TNode<Smi> tmp305;
    compiler::TNode<JSReceiver> tmp306;
    compiler::TNode<Code> tmp307;
    compiler::TNode<Code> tmp308;
    compiler::TNode<Int32T> tmp309;
    ca_.Bind(&block38, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307, &tmp308, &tmp309);
    ca_.Goto(&block40, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement16ATFixedInt8Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement16ATFixedInt8Array).code())), tmp309);
  }

  if (block39.is_used()) {
    compiler::TNode<Context> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Object> tmp312;
    compiler::TNode<Object> tmp313;
    compiler::TNode<JSTypedArray> tmp314;
    compiler::TNode<Smi> tmp315;
    compiler::TNode<JSReceiver> tmp316;
    compiler::TNode<Code> tmp317;
    compiler::TNode<Code> tmp318;
    compiler::TNode<Int32T> tmp319;
    ca_.Bind(&block39, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319);
    compiler::TNode<Int32T> tmp320;
    USE(tmp320);
    tmp320 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(UINT16_ELEMENTS));
    compiler::TNode<BoolT> tmp321;
    USE(tmp321);
    tmp321 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp319}, compiler::TNode<Int32T>{tmp320}));
    ca_.Branch(tmp321, &block41, &block42, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319);
  }

  if (block41.is_used()) {
    compiler::TNode<Context> tmp322;
    compiler::TNode<Object> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<Object> tmp325;
    compiler::TNode<JSTypedArray> tmp326;
    compiler::TNode<Smi> tmp327;
    compiler::TNode<JSReceiver> tmp328;
    compiler::TNode<Code> tmp329;
    compiler::TNode<Code> tmp330;
    compiler::TNode<Int32T> tmp331;
    ca_.Bind(&block41, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331);
    ca_.Goto(&block43, tmp322, tmp323, tmp324, tmp325, tmp326, tmp327, tmp328, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement18ATFixedUint16Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement18ATFixedUint16Array).code())), tmp331);
  }

  if (block42.is_used()) {
    compiler::TNode<Context> tmp332;
    compiler::TNode<Object> tmp333;
    compiler::TNode<Object> tmp334;
    compiler::TNode<Object> tmp335;
    compiler::TNode<JSTypedArray> tmp336;
    compiler::TNode<Smi> tmp337;
    compiler::TNode<JSReceiver> tmp338;
    compiler::TNode<Code> tmp339;
    compiler::TNode<Code> tmp340;
    compiler::TNode<Int32T> tmp341;
    ca_.Bind(&block42, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341);
    compiler::TNode<Int32T> tmp342;
    USE(tmp342);
    tmp342 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(INT16_ELEMENTS));
    compiler::TNode<BoolT> tmp343;
    USE(tmp343);
    tmp343 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp341}, compiler::TNode<Int32T>{tmp342}));
    ca_.Branch(tmp343, &block44, &block45, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341);
  }

  if (block44.is_used()) {
    compiler::TNode<Context> tmp344;
    compiler::TNode<Object> tmp345;
    compiler::TNode<Object> tmp346;
    compiler::TNode<Object> tmp347;
    compiler::TNode<JSTypedArray> tmp348;
    compiler::TNode<Smi> tmp349;
    compiler::TNode<JSReceiver> tmp350;
    compiler::TNode<Code> tmp351;
    compiler::TNode<Code> tmp352;
    compiler::TNode<Int32T> tmp353;
    ca_.Bind(&block44, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353);
    ca_.Goto(&block46, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement17ATFixedInt16Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement17ATFixedInt16Array).code())), tmp353);
  }

  if (block45.is_used()) {
    compiler::TNode<Context> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<Object> tmp356;
    compiler::TNode<Object> tmp357;
    compiler::TNode<JSTypedArray> tmp358;
    compiler::TNode<Smi> tmp359;
    compiler::TNode<JSReceiver> tmp360;
    compiler::TNode<Code> tmp361;
    compiler::TNode<Code> tmp362;
    compiler::TNode<Int32T> tmp363;
    ca_.Bind(&block45, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363);
    compiler::TNode<Int32T> tmp364;
    USE(tmp364);
    tmp364 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(UINT32_ELEMENTS));
    compiler::TNode<BoolT> tmp365;
    USE(tmp365);
    tmp365 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp363}, compiler::TNode<Int32T>{tmp364}));
    ca_.Branch(tmp365, &block47, &block48, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362, tmp363);
  }

  if (block47.is_used()) {
    compiler::TNode<Context> tmp366;
    compiler::TNode<Object> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<Object> tmp369;
    compiler::TNode<JSTypedArray> tmp370;
    compiler::TNode<Smi> tmp371;
    compiler::TNode<JSReceiver> tmp372;
    compiler::TNode<Code> tmp373;
    compiler::TNode<Code> tmp374;
    compiler::TNode<Int32T> tmp375;
    ca_.Bind(&block47, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375);
    ca_.Goto(&block49, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kLoadFixedElement18ATFixedUint32Array).code())), ca_.UncheckedCast<Code>(ca_.HeapConstant(Builtins::CallableFor(ca_.isolate(), Builtins::kStoreFixedElement18ATFixedUint32Array).code())), tmp375);
  }

  if (block48.is_used()) {
    compiler::TNode<Context> tmp376;
    compiler::TNode<Object> tmp377;
    compiler::TNode<Object> tmp378;
    compiler::TNode<Object> tmp379;
    compiler::TNode<JSTypedArray> tmp380;
    compiler::TNode<Smi> tmp381;
    compiler::TNode<JSReceiver> tmp382;
    compiler::TNode<Code> tmp383;
    compiler::TNode<Code> tmp384;
    compiler::TNode<Int32T> tmp385;
    ca_.Bind(&block48, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/typed-array.tq:346:11");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block49.is_used()) {
    compiler::TNode<Context> tmp386;
    compiler::TNode<Object> tmp387;
    compiler::TNode<Object> tmp388;
    compiler::TNode<Object> tmp389;
    compiler::TNode<JSTypedArray> tmp390;
    compiler::TNode<Smi> tmp391;
    compiler::TNode<JSReceiver> tmp392;
    compiler::TNode<Code> tmp393;
    compiler::TNode<Code> tmp394;
    compiler::TNode<Int32T> tmp395;
    ca_.Bind(&block49, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395);
    ca_.Goto(&block46, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395);
  }

  if (block46.is_used()) {
    compiler::TNode<Context> tmp396;
    compiler::TNode<Object> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<JSTypedArray> tmp400;
    compiler::TNode<Smi> tmp401;
    compiler::TNode<JSReceiver> tmp402;
    compiler::TNode<Code> tmp403;
    compiler::TNode<Code> tmp404;
    compiler::TNode<Int32T> tmp405;
    ca_.Bind(&block46, &tmp396, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405);
    ca_.Goto(&block43, tmp396, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405);
  }

  if (block43.is_used()) {
    compiler::TNode<Context> tmp406;
    compiler::TNode<Object> tmp407;
    compiler::TNode<Object> tmp408;
    compiler::TNode<Object> tmp409;
    compiler::TNode<JSTypedArray> tmp410;
    compiler::TNode<Smi> tmp411;
    compiler::TNode<JSReceiver> tmp412;
    compiler::TNode<Code> tmp413;
    compiler::TNode<Code> tmp414;
    compiler::TNode<Int32T> tmp415;
    ca_.Bind(&block43, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413, &tmp414, &tmp415);
    ca_.Goto(&block40, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413, tmp414, tmp415);
  }

  if (block40.is_used()) {
    compiler::TNode<Context> tmp416;
    compiler::TNode<Object> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<Object> tmp419;
    compiler::TNode<JSTypedArray> tmp420;
    compiler::TNode<Smi> tmp421;
    compiler::TNode<JSReceiver> tmp422;
    compiler::TNode<Code> tmp423;
    compiler::TNode<Code> tmp424;
    compiler::TNode<Int32T> tmp425;
    ca_.Bind(&block40, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425);
    ca_.Goto(&block37, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425);
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp426;
    compiler::TNode<Object> tmp427;
    compiler::TNode<Object> tmp428;
    compiler::TNode<Object> tmp429;
    compiler::TNode<JSTypedArray> tmp430;
    compiler::TNode<Smi> tmp431;
    compiler::TNode<JSReceiver> tmp432;
    compiler::TNode<Code> tmp433;
    compiler::TNode<Code> tmp434;
    compiler::TNode<Int32T> tmp435;
    ca_.Bind(&block37, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435);
    ca_.Goto(&block16, tmp426, tmp427, tmp428, tmp429, tmp430, tmp431, tmp432, tmp433, tmp434, tmp435);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp436;
    compiler::TNode<Object> tmp437;
    compiler::TNode<Object> tmp438;
    compiler::TNode<Object> tmp439;
    compiler::TNode<JSTypedArray> tmp440;
    compiler::TNode<Smi> tmp441;
    compiler::TNode<JSReceiver> tmp442;
    compiler::TNode<Code> tmp443;
    compiler::TNode<Code> tmp444;
    compiler::TNode<Int32T> tmp445;
    ca_.Bind(&block16, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445);
    compiler::TNode<Smi> tmp446;
    USE(tmp446);
    tmp446 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<JSTypedArray> tmp447;
    tmp447 = TORQUE_CAST(CodeStubAssembler(state_).CallBuiltin(Builtins::kTypedArrayQuickSort, tmp436, tmp440, tmp446, tmp441, tmp442, tmp443, tmp444));
    USE(tmp447);
    ca_.Goto(&block10, tmp436, tmp437, tmp438, tmp439, tmp440, tmp441);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp448;
    compiler::TNode<Object> tmp449;
    compiler::TNode<Object> tmp450;
    compiler::TNode<Object> tmp451;
    compiler::TNode<JSTypedArray> tmp452;
    compiler::TNode<Smi> tmp453;
    ca_.Bind(&block11, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/typed-array.tq:353:7");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp454;
    compiler::TNode<Object> tmp455;
    compiler::TNode<Object> tmp456;
    compiler::TNode<Object> tmp457;
    compiler::TNode<JSTypedArray> tmp458;
    compiler::TNode<Smi> tmp459;
    ca_.Bind(&block10, &tmp454, &tmp455, &tmp456, &tmp457, &tmp458, &tmp459);
    arguments->PopAndReturn(tmp458);
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedInt32Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedInt32Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType19ATFixedFloat32Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType19ATFixedFloat32Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement19ATFixedFloat64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType19ATFixedFloat64Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement19ATFixedFloat64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType19ATFixedFloat64Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement24ATFixedUint8ClampedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType24ATFixedUint8ClampedArray()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement24ATFixedUint8ClampedArray, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType24ATFixedUint8ClampedArray()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement21ATFixedBigUint64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType21ATFixedBigUint64Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement21ATFixedBigUint64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType21ATFixedBigUint64Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement20ATFixedBigInt64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType20ATFixedBigInt64Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement20ATFixedBigInt64Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType20ATFixedBigInt64Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedUint8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedUint8Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedUint8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedUint8Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement16ATFixedInt8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType16ATFixedInt8Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement16ATFixedInt8Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType16ATFixedInt8Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType18ATFixedUint16Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType18ATFixedUint16Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement17ATFixedInt16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedInt16Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement17ATFixedInt16Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType17ATFixedInt16Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

TF_BUILTIN(LoadFixedElement18ATFixedUint32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(TypedArrayBuiltinsAssembler(state_).LoadDataPtr(compiler::TNode<JSTypedArray>{tmp1}));
    compiler::TNode<Object> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedTypedArrayElementAsTagged(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<Smi>{tmp2}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType18ATFixedUint32Array()), CodeStubAssembler::SMI_PARAMETERS));
    CodeStubAssembler(state_).Return(tmp4);
  }
}

TF_BUILTIN(StoreFixedElement18ATFixedUint32Array, CodeStubAssembler) {
  compiler::CodeAssemblerState* state_ = state();  compiler::CodeAssembler ca_(state());
  TNode<Context> parameter0 = UncheckedCast<Context>(Parameter(Descriptor::kContext));
  USE(parameter0);
  compiler::TNode<JSTypedArray> parameter1 = UncheckedCast<JSTypedArray>(Parameter(Descriptor::kArray));
  USE(parameter1);
  compiler::TNode<Smi> parameter2 = UncheckedCast<Smi>(Parameter(Descriptor::kIndex));
  USE(parameter2);
  compiler::TNode<Object> parameter3 = UncheckedCast<Object>(Parameter(Descriptor::kValue));
  USE(parameter3);
  compiler::CodeAssemblerParameterizedLabel<Context, JSTypedArray, Smi, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1, parameter2, parameter3);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSTypedArray> tmp1;
    compiler::TNode<Smi> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<FixedArrayBase> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedTypedArrayBase> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<FixedTypedArrayBase>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp4}));
    CodeStubAssembler(state_).StoreFixedTypedArrayElementFromTagged(compiler::TNode<Context>{tmp0}, compiler::TNode<FixedTypedArrayBase>{tmp5}, compiler::TNode<Smi>{tmp2}, compiler::TNode<Object>{tmp3}, (TypedArrayBuiltinsFromDSLAssembler(state_).KindForArrayType18ATFixedUint32Array()), CodeStubAssembler::SMI_PARAMETERS);
    compiler::TNode<Oddball> tmp6;
    USE(tmp6);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    CodeStubAssembler(state_).Return(tmp6);
  }
}

}  // namespace internal
}  // namespace v8

