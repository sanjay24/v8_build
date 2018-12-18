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

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Hole() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).TheHoleConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Null() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).NullConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::Undefined() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).UndefinedConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::True() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).TrueConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<Oddball> BaseBuiltinsFromDSLAssembler::False() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Oddball> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Oddball>(CodeStubAssembler(state_).FalseConstant());
return compiler::TNode<Oddball>{tmp0};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kEmptyString() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).EmptyStringConstant());
return compiler::TNode<String>{tmp0};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::kLengthString() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).LengthStringConstant());
return compiler::TNode<String>{tmp0};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ElementsKindNotEqual(compiler::TNode<Int32T> p_k1, compiler::TNode<Int32T> p_k2) {
  compiler::CodeAssemblerParameterizedLabel<Int32T, Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_k1, p_k2);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp2}));
    ca_.Goto(&block1, tmp3);
  }

    compiler::TNode<BoolT> tmp4;
    ca_.Bind(&block1, &tmp4);
  return compiler::TNode<BoolT>{tmp4};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Min(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberMin(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Number>{tmp3};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Max(compiler::TNode<Number> p_x, compiler::TNode<Number> p_y) {
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_x, p_y);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    compiler::TNode<Number> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).NumberMax(compiler::TNode<Number>{tmp0}, compiler::TNode<Number>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Number> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Number>{tmp3};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATHeapObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.Goto(&block2, tmp0);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block2, &tmp1);
  return compiler::TNode<HeapObject>{tmp1};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATFixedArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToFixedArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedArray> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<FixedArray>{tmp7};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::CastHeapObject18ATFixedDoubleArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, FixedDoubleArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<FixedDoubleArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToFixedDoubleArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedDoubleArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedDoubleArray> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<FixedDoubleArray>{tmp7};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::CastHeapObject25ATSloppyArgumentsElements(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<FixedArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToSloppyArgumentsElements(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<FixedArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedArray> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<FixedArray>{tmp7};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATJSDataView(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSDataView> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSDataView> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToJSDataView(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSDataView> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSDataView> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<JSDataView>{tmp7};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::CastHeapObject14ATJSTypedArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSTypedArray(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<JSTypedArray> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSTypedArray> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<JSTypedArray>{tmp5};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSReceiver> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToCallable(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<JSReceiver>{tmp7};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject9ATJSArray(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSArray> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToJSArray(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSArray> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<JSArray>{tmp7};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::CastHeapObject9ATContext(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsContext(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<Context> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<Context>{tmp5};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::CastHeapObject10ATJSObject(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSObject(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<JSObject> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSObject> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<JSObject>{tmp5};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::CastHeapObject18ATNumberDictionary(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NumberDictionary> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNumberDictionary(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<NumberDictionary> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<NumberDictionary> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<NumberDictionary>{tmp5};
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::CastHeapObject21ATFixedTypedArrayBase(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFixedTypedArray(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<FixedTypedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedTypedArrayBase> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<FixedTypedArrayBase>{tmp5};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::CastHeapObject8ATString(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToString(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<String> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<String> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<String>{tmp7};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::CastHeapObject13ATConstructor(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject, HeapObject, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSReceiver> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).HeapObjectToConstructor(compiler::TNode<HeapObject>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    compiler::TNode<HeapObject> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<JSReceiver> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<JSReceiver>{tmp7};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATHeapNumber(compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapNumber> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<HeapObject> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsHeapNumber(compiler::TNode<HeapObject>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<HeapObject> tmp2;
    ca_.Bind(&block3, &tmp2);
    compiler::TNode<HeapNumber> tmp3;
    USE(tmp3);
    tmp3 = TORQUE_CAST(compiler::TNode<Object>{tmp2});
    ca_.Goto(&block2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block4, &tmp4);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapNumber> tmp5;
    ca_.Bind(&block2, &tmp5);
  return compiler::TNode<HeapNumber>{tmp5};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::CastHeapObject5ATMap(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsMap(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<Map> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<Object>{tmp4});
    ca_.Goto(&block2, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Map> tmp8;
    ca_.Bind(&block2, &tmp8);
  return compiler::TNode<Map>{tmp8};
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::CastHeapObject29ATJSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadMap(compiler::TNode<HeapObject>{tmp1}));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastAliasedArgumentsMap(compiler::TNode<Context>{tmp0}, compiler::TNode<Map>{tmp2}));
    ca_.Branch(tmp3, &block5, &block6, tmp0, tmp1, tmp2);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<HeapObject> tmp5;
    compiler::TNode<Map> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp4, tmp5, tmp6);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<Map> tmp9;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<BoolT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSloppyArgumentsMap(compiler::TNode<Context>{tmp7}, compiler::TNode<Map>{tmp9}));
    ca_.Branch(tmp10, &block7, &block8, tmp7, tmp8, tmp9);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<Map> tmp13;
    ca_.Bind(&block7, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block4, tmp11, tmp12, tmp13);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<HeapObject> tmp15;
    compiler::TNode<Map> tmp16;
    ca_.Bind(&block8, &tmp14, &tmp15, &tmp16);
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsStrictArgumentsMap(compiler::TNode<Context>{tmp14}, compiler::TNode<Map>{tmp16}));
    ca_.Branch(tmp17, &block9, &block10, tmp14, tmp15, tmp16);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<HeapObject> tmp19;
    compiler::TNode<Map> tmp20;
    ca_.Bind(&block9, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block4, tmp18, tmp19, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<HeapObject> tmp22;
    compiler::TNode<Map> tmp23;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23);
    compiler::TNode<BoolT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsSlowAliasedArgumentsMap(compiler::TNode<Context>{tmp21}, compiler::TNode<Map>{tmp23}));
    ca_.Branch(tmp24, &block11, &block12, tmp21, tmp22, tmp23);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<HeapObject> tmp26;
    compiler::TNode<Map> tmp27;
    ca_.Bind(&block11, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block4, tmp25, tmp26, tmp27);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<Map> tmp30;
    ca_.Bind(&block12, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<HeapObject> tmp32;
    compiler::TNode<Map> tmp33;
    ca_.Bind(&block4, &tmp31, &tmp32, &tmp33);
    compiler::TNode<JSArgumentsObjectWithLength> tmp34;
    USE(tmp34);
    tmp34 = TORQUE_CAST(compiler::TNode<Object>{tmp32});
    ca_.Goto(&block2, tmp34);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArgumentsObjectWithLength> tmp35;
    ca_.Bind(&block2, &tmp35);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp35};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, Map, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Map> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Map>(CodeStubAssembler(state_).LoadMap(compiler::TNode<HeapObject>{tmp1}));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSArrayMap(compiler::TNode<Map>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp3}));
    ca_.Branch(tmp4, &block3, &block4, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    compiler::TNode<Map> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<Map> tmp10;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadMapElementsKind(compiler::TNode<Map>{tmp10}));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsFastElementsKind(compiler::TNode<Int32T>{tmp11}));
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp12}));
    ca_.Branch(tmp13, &block5, &block6, tmp8, tmp9, tmp10, tmp11);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<HeapObject> tmp15;
    compiler::TNode<Map> tmp16;
    compiler::TNode<Int32T> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp18;
    compiler::TNode<HeapObject> tmp19;
    compiler::TNode<Map> tmp20;
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block6, &tmp18, &tmp19, &tmp20, &tmp21);
    compiler::TNode<BoolT> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsPrototypeInitialArrayPrototype(compiler::TNode<Context>{tmp18}, compiler::TNode<Map>{tmp20}));
    compiler::TNode<BoolT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32BinaryNot(compiler::TNode<BoolT>{tmp22}));
    ca_.Branch(tmp23, &block7, &block8, tmp18, tmp19, tmp20, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<HeapObject> tmp25;
    compiler::TNode<Map> tmp26;
    compiler::TNode<Int32T> tmp27;
    ca_.Bind(&block7, &tmp24, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp28;
    compiler::TNode<HeapObject> tmp29;
    compiler::TNode<Map> tmp30;
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block8, &tmp28, &tmp29, &tmp30, &tmp31);
    compiler::TNode<BoolT> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsNoElementsProtectorCellInvalid());
    ca_.Branch(tmp32, &block9, &block10, tmp28, tmp29, tmp30, tmp31);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp33;
    compiler::TNode<HeapObject> tmp34;
    compiler::TNode<Map> tmp35;
    compiler::TNode<Int32T> tmp36;
    ca_.Bind(&block9, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block1);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<HeapObject> tmp38;
    compiler::TNode<Map> tmp39;
    compiler::TNode<Int32T> tmp40;
    ca_.Bind(&block10, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<JSArray> tmp41;
    USE(tmp41);
    tmp41 = TORQUE_CAST(compiler::TNode<Object>{tmp38});
    ca_.Goto(&block2, tmp41);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp42;
    ca_.Bind(&block2, &tmp42);
  return compiler::TNode<JSArray>{tmp42};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArraySpeciesProtectorCellInvalid());
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block4, &tmp5, &tmp6);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp5}, compiler::TNode<HeapObject>{tmp6}, &label0);
    ca_.Goto(&block5, tmp5, tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp6, tmp6);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    compiler::TNode<JSArray> tmp15;
    USE(tmp15);
    tmp15 = TORQUE_CAST(compiler::TNode<Object>{tmp12});
    ca_.Goto(&block2, tmp15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp16;
    ca_.Bind(&block2, &tmp16);
  return compiler::TNode<JSArray>{tmp16};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::CastHeapObject34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsArrayIteratorProtectorCellInvalid());
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<HeapObject> tmp6;
    ca_.Bind(&block4, &tmp5, &tmp6);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp5}, compiler::TNode<HeapObject>{tmp6}, &label0);
    ca_.Goto(&block5, tmp5, tmp6, tmp6, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp5, tmp6, tmp6);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<HeapObject> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block6, &tmp8, &tmp9, &tmp10);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<HeapObject> tmp12;
    compiler::TNode<HeapObject> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block5, &tmp11, &tmp12, &tmp13, &tmp14);
    compiler::TNode<JSArray> tmp15;
    USE(tmp15);
    tmp15 = TORQUE_CAST(compiler::TNode<Object>{tmp12});
    ca_.Goto(&block2, tmp15);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp16;
    ca_.Bind(&block2, &tmp16);
  return compiler::TNode<JSArray>{tmp16};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSReceiver(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<JSReceiver> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<Object>{tmp4});
    ca_.Goto(&block2, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block2, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::CastHeapObject12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsJSFunction(compiler::TNode<HeapObject>{tmp1}));
    ca_.Branch(tmp2, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    compiler::TNode<JSFunction> tmp5;
    USE(tmp5);
    tmp5 = TORQUE_CAST(compiler::TNode<Object>{tmp4});
    ca_.Goto(&block2, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    ca_.Bind(&block4, &tmp6, &tmp7);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block2, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToSmi(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Smi> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Smi> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<Smi>{tmp7};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Cast22UT12ATHeapNumber5ATSmi(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = CodeStubAssembler(state_).TaggedToNumber(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block3, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Number> tmp6;
    ca_.Bind(&block3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block2, tmp6);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Number> tmp7;
    ca_.Bind(&block2, &tmp7);
  return compiler::TNode<Number>{tmp7};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3117ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Int32T>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3217ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Int32T>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr7ATint3217ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.Int32Constant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Int32T>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<IntPtrT>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr17ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<IntPtrT>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATintptr18ATconstexpr_intptr(intptr_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.IntPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<IntPtrT>{tmp1};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr19ATconstexpr_uintptr(uintptr_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<UintPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UintPtrConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<UintPtrT>{tmp1};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.SmiConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Smi>{tmp1};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATString18ATconstexpr_string(const char* p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.StringConstant(p_s);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<String> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<String>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi18ATconstexpr_uint32(uint32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Number>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int32(int32_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Number>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi19ATconstexpr_float64(double p_f) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_f);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Number>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Number> tmp0;
    USE(tmp0);
    tmp0 = ca_.NumberConstant(p_i);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Number>{tmp1};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapNumber5ATSmi15ATconstexpr_Smi(Smi p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Number> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Number>{tmp1};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr5ATSmi15ATconstexpr_Smi(Smi p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Smi>{tmp1};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::FromConstexpr8ATuint3217ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Constant(p_i));
    compiler::TNode<Uint32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Uint32T>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATuintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Uint32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(p_i));
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeUint32ToWord(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::FromConstexpr9ATfloat6417ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Float64T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Constant(p_i));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Float64T> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Float64T>{tmp1};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FromConstexpr6ATbool16ATconstexpr_bool(bool p_b) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<BoolT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).BoolConstant(p_b));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<BoolT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<BoolT>{tmp1};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATLanguageMode24ATconstexpr_LanguageMode(LanguageMode p_m) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.SmiConstant(p_m);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = TORQUE_CAST(compiler::TNode<Object>{tmp0});
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(ElementsKind p_e) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Int32T> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Constant(p_e));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Int32T> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Int32T>{tmp1};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::FromConstexpr22UT12ATHeapObject5ATSmi18ATconstexpr_string(const char* p_s) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(CodeStubAssembler(state_).StringConstant(p_s));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Object> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Object>{tmp1};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(int32_t p_c) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrConstant(p_c));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<IntPtrT>{tmp1};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint3214ATElementsKind(compiler::TNode<Int32T> p_elementsKind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elementsKind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).ConvertElementsKindToInt(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeInt32ToTagged(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).ChangeInt32ToIntPtr(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi7ATint32(compiler::TNode<Int32T> p_i) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiFromInt32(compiler::TNode<Int32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeUint32ToTagged(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp0}));
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiFromInt32(compiler::TNode<Int32T>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Smi>{tmp3};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATuint32(compiler::TNode<Uint32T> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeUint32ToWord(compiler::TNode<Uint32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint328ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).TruncateIntPtrToInt32(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi8ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).SmiTag(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<Uint32T> BaseBuiltinsFromDSLAssembler::Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp0}));
    compiler::TNode<Int32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).TruncateIntPtrToInt32(compiler::TNode<IntPtrT>{tmp1}));
    compiler::TNode<Uint32T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp2}));
    ca_.Goto(&block1, tmp3);
  }

    compiler::TNode<Uint32T> tmp4;
    ca_.Bind(&block1, &tmp4);
  return compiler::TNode<Uint32T>{tmp4};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr5ATSmi(compiler::TNode<Smi> p_s) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_s);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).SmiUntag(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::Convert7ATint325ATSmi(compiler::TNode<Smi> p_s) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_s);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).SmiToInt32(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Int32T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Int32T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat6412ATHeapNumber(compiler::TNode<HeapNumber> p_h) {
  compiler::CodeAssemblerParameterizedLabel<HeapNumber> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_h);

  if (block0.is_used()) {
    compiler::TNode<HeapNumber> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).LoadHeapNumberValue(compiler::TNode<HeapNumber>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number> p_n) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_n);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeNumberToFloat64(compiler::TNode<Number>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr22UT12ATHeapNumber5ATSmi(compiler::TNode<Number> p_n) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_n);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeNonnegativeNumberToUintPtr(compiler::TNode<Number>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat649ATfloat32(compiler::TNode<Float32T> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Float32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<Float32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeFloat32ToFloat64(compiler::TNode<Float32T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi9ATfloat64(compiler::TNode<Float64T> p_d) {
  compiler::CodeAssemblerParameterizedLabel<Float64T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_d);

  if (block0.is_used()) {
    compiler::TNode<Float64T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<HeapNumber> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<HeapNumber>(CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<Float64T> BaseBuiltinsFromDSLAssembler::Convert9ATfloat649ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Float64T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Float64T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeUintPtrToFloat64(compiler::TNode<UintPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Float64T>{tmp2};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::Convert22UT12ATHeapNumber5ATSmi9ATuintptr(compiler::TNode<UintPtrT> p_ui) {
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_ui);

  if (block0.is_used()) {
    compiler::TNode<UintPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Number> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ChangeUintPtrToTagged(compiler::TNode<UintPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Number> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Number>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr9ATfloat64(compiler::TNode<Float64T> p_d) {
  compiler::CodeAssemblerParameterizedLabel<Float64T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_d);

  if (block0.is_used()) {
    compiler::TNode<Float64T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).ChangeFloat64ToUintPtr(compiler::TNode<Float64T>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATintptr(compiler::TNode<IntPtrT> p_i) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_i);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<UintPtrT> BaseBuiltinsFromDSLAssembler::Convert9ATuintptr8ATRawPtr(compiler::TNode<RawPtrT> p_r) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<UintPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_r);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<UintPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<UintPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<UintPtrT>{tmp2};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr8ATRawPtr(compiler::TNode<RawPtrT> p_r) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_r);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<IntPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<IntPtrT>{tmp2};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint7ATint32(compiler::TNode<Int32T> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr7ATint32(compiler::TNode<Int32T>{tmp0}));
    compiler::TNode<BInt> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).IntPtrToBInt(compiler::TNode<IntPtrT>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<BInt> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<BInt>{tmp3};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint8ATintptr(compiler::TNode<IntPtrT> p_v) {
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<IntPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BInt> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).IntPtrToBInt(compiler::TNode<IntPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<BInt> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<BInt>{tmp2};
}

compiler::TNode<BInt> BaseBuiltinsFromDSLAssembler::Convert6ATbint5ATSmi(compiler::TNode<Smi> p_v) {
  compiler::CodeAssemblerParameterizedLabel<Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_v);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BInt> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BInt>(CodeStubAssembler(state_).SmiToBInt(compiler::TNode<Smi>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<BInt> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<BInt>{tmp2};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapObject5ATSmi(compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Object> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Object>{tmp1};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::kCOWMap() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadRoot(RootIndex::kFixedCOWArrayMap));
    compiler::TNode<Map> tmp1;
    USE(tmp1);
    tmp1 = TORQUE_CAST(compiler::TNode<Object>{tmp0});
return compiler::TNode<Map>{tmp1};
}

compiler::TNode<FixedArrayBase> BaseBuiltinsFromDSLAssembler::kEmptyFixedArray() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
    compiler::TNode<Object> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadRoot(RootIndex::kEmptyFixedArray));
    compiler::TNode<FixedArrayBase> tmp1;
    USE(tmp1);
    tmp1 = TORQUE_CAST(compiler::TNode<Object>{tmp0});
return compiler::TNode<FixedArrayBase>{tmp1};
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayNumber(compiler::TNode<FixedDoubleArray> p_a, compiler::TNode<Smi> p_index, compiler::TNode<Number> p_value) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_a, p_index, p_value);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Number> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<Float64T> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp2}));
    CodeStubAssembler(state_).StoreFixedDoubleArrayElementSmi(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Smi>{tmp1}, compiler::TNode<Float64T>{tmp3});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::StoreFixedDoubleArrayElementWithSmiIndex(compiler::TNode<FixedDoubleArray> p_array, compiler::TNode<Smi> p_index, compiler::TNode<Float64T> p_value) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, Smi, Float64T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_array, p_index, p_value);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<Smi> tmp1;
    compiler::TNode<Float64T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    CodeStubAssembler(state_).StoreFixedDoubleArrayElement(compiler::TNode<FixedDoubleArray>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<Float64T>{tmp2}, CodeStubAssembler::SMI_PARAMETERS);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowDoubleElements(compiler::TNode<Int32T> p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_kind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    ca_.Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block5, &tmp8);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_DOUBLE_ELEMENTS));
    ca_.Goto(&block1, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block6, &tmp10);
    ca_.Goto(&block4, tmp10);
  }

  if (block4.is_used()) {
    compiler::TNode<Int32T> tmp11;
    ca_.Bind(&block4, &tmp11);
    ca_.Goto(&block1, tmp11);
  }

    compiler::TNode<Int32T> tmp12;
    ca_.Bind(&block1, &tmp12);
  return compiler::TNode<Int32T>{tmp12};
}

compiler::TNode<Int32T> BaseBuiltinsFromDSLAssembler::AllowNonNumberElements(compiler::TNode<Int32T> p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Int32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Int32T> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_kind);

  if (block0.is_used()) {
    compiler::TNode<Int32T> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Int32T> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp0}, compiler::TNode<Int32T>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0);
  }

  if (block2.is_used()) {
    compiler::TNode<Int32T> tmp3;
    ca_.Bind(&block2, &tmp3);
    compiler::TNode<Int32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Int32T> tmp5;
    ca_.Bind(&block3, &tmp5);
    compiler::TNode<Int32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_SMI_ELEMENTS));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp5}, compiler::TNode<Int32T>{tmp6}));
    ca_.Branch(tmp7, &block5, &block6, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Int32T> tmp8;
    ca_.Bind(&block5, &tmp8);
    compiler::TNode<Int32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_ELEMENTS));
    ca_.Goto(&block1, tmp9);
  }

  if (block6.is_used()) {
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block6, &tmp10);
    compiler::TNode<Int32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_DOUBLE_ELEMENTS));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp10}, compiler::TNode<Int32T>{tmp11}));
    ca_.Branch(tmp12, &block8, &block9, tmp10);
  }

  if (block8.is_used()) {
    compiler::TNode<Int32T> tmp13;
    ca_.Bind(&block8, &tmp13);
    compiler::TNode<Int32T> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(PACKED_ELEMENTS));
    ca_.Goto(&block1, tmp14);
  }

  if (block9.is_used()) {
    compiler::TNode<Int32T> tmp15;
    ca_.Bind(&block9, &tmp15);
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_DOUBLE_ELEMENTS));
    compiler::TNode<BoolT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).ElementsKindEqual(compiler::TNode<Int32T>{tmp15}, compiler::TNode<Int32T>{tmp16}));
    ca_.Branch(tmp17, &block11, &block12, tmp15);
  }

  if (block11.is_used()) {
    compiler::TNode<Int32T> tmp18;
    ca_.Bind(&block11, &tmp18);
    compiler::TNode<Int32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr14ATElementsKind24ATconstexpr_ElementsKind(HOLEY_ELEMENTS));
    ca_.Goto(&block1, tmp19);
  }

  if (block12.is_used()) {
    compiler::TNode<Int32T> tmp20;
    ca_.Bind(&block12, &tmp20);
    ca_.Goto(&block10, tmp20);
  }

  if (block10.is_used()) {
    compiler::TNode<Int32T> tmp21;
    ca_.Bind(&block10, &tmp21);
    ca_.Goto(&block7, tmp21);
  }

  if (block7.is_used()) {
    compiler::TNode<Int32T> tmp22;
    ca_.Bind(&block7, &tmp22);
    ca_.Goto(&block4, tmp22);
  }

  if (block4.is_used()) {
    compiler::TNode<Int32T> tmp23;
    ca_.Bind(&block4, &tmp23);
    ca_.Goto(&block1, tmp23);
  }

    compiler::TNode<Int32T> tmp24;
    ca_.Bind(&block1, &tmp24);
  return compiler::TNode<Int32T>{tmp24};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::GetObjectFunction(compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Context> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Context>(CodeStubAssembler(state_).LoadNativeContext(compiler::TNode<Context>{tmp0}));
    compiler::TNode<IntPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr19ATNativeContextSlot29ATconstexpr_NativeContextSlot(Context::OBJECT_FUNCTION_INDEX));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadContextElement(compiler::TNode<Context>{tmp1}, compiler::TNode<IntPtrT>{tmp2}));
    compiler::TNode<JSFunction> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast12ATJSFunction(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp3}));
    ca_.Goto(&block1, tmp4);
  }

    compiler::TNode<JSFunction> tmp5;
    ca_.Bind(&block1, &tmp5);
  return compiler::TNode<JSFunction>{tmp5};
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(compiler::TNode<FixedArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    CodeStubAssembler(state_).MoveElements(HOLEY_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueMoveElements(compiler::TNode<FixedDoubleArray> p_elements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_elements, p_dstIndex, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<IntPtrT> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    CodeStubAssembler(state_).MoveElements(HOLEY_DOUBLE_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<IntPtrT>{tmp2}, compiler::TNode<IntPtrT>{tmp3});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(compiler::TNode<FixedArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedArray, IntPtrT, FixedArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<FixedArray> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    CodeStubAssembler(state_).CopyElements(HOLEY_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<FixedArrayBase>{tmp2}, compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void BaseBuiltinsFromDSLAssembler::TorqueCopyElements(compiler::TNode<FixedDoubleArray> p_dstElements, compiler::TNode<IntPtrT> p_dstIndex, compiler::TNode<FixedDoubleArray> p_srcElements, compiler::TNode<IntPtrT> p_srcIndex, compiler::TNode<IntPtrT> p_count) {
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray, IntPtrT, FixedDoubleArray, IntPtrT, IntPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_dstElements, p_dstIndex, p_srcElements, p_srcIndex, p_count);

  if (block0.is_used()) {
    compiler::TNode<FixedDoubleArray> tmp0;
    compiler::TNode<IntPtrT> tmp1;
    compiler::TNode<FixedDoubleArray> tmp2;
    compiler::TNode<IntPtrT> tmp3;
    compiler::TNode<IntPtrT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    CodeStubAssembler(state_).CopyElements(HOLEY_DOUBLE_ELEMENTS, compiler::TNode<FixedArrayBase>{tmp0}, compiler::TNode<IntPtrT>{tmp1}, compiler::TNode<FixedArrayBase>{tmp2}, compiler::TNode<IntPtrT>{tmp3}, compiler::TNode<IntPtrT>{tmp4});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArray, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArray, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<FixedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATFixedArray(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArrayBase> tmp12;
    compiler::TNode<FixedArray> tmp13;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<Object> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadFixedArrayElement(compiler::TNode<FixedArray>{tmp13}, compiler::TNode<Smi>{tmp11}));
    compiler::TNode<Oddball> tmp15;
    USE(tmp15);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Hole();
    compiler::TNode<BoolT> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp14}, compiler::TNode<Object>{tmp15}));
    ca_.Branch(tmp16, &block7, &block8, tmp9, tmp10, tmp11, tmp13, tmp14);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArray> tmp20;
    compiler::TNode<Object> tmp21;
    ca_.Bind(&block7, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block1);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<JSArray> tmp23;
    compiler::TNode<Smi> tmp24;
    compiler::TNode<FixedArray> tmp25;
    compiler::TNode<Object> tmp26;
    ca_.Bind(&block8, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block2, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<JSArray> tmp28;
    compiler::TNode<Smi> tmp29;
    ca_.Bind(&block4, &tmp27, &tmp28, &tmp29);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/base.tq:1184:5");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Object> tmp30;
    ca_.Bind(&block2, &tmp30);
  return compiler::TNode<Object>{tmp30};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadElementNoHole18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_a, compiler::TNode<Smi> p_index, compiler::CodeAssemblerLabel* label_IfHole) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi, FixedDoubleArray, FixedDoubleArray, Smi, Float64T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_a, p_index);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<FixedArrayBase> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp1}));
    compiler::TNode<FixedDoubleArray> tmp4;
    USE(tmp4);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp4 = BaseBuiltinsFromDSLAssembler(state_).Cast18ATFixedDoubleArray(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp3}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp2, tmp3);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    compiler::TNode<Smi> tmp7;
    compiler::TNode<FixedArrayBase> tmp8;
    ca_.Bind(&block6, &tmp5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block4, tmp5, tmp6, tmp7);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<JSArray> tmp10;
    compiler::TNode<Smi> tmp11;
    compiler::TNode<FixedArrayBase> tmp12;
    compiler::TNode<FixedDoubleArray> tmp13;
    ca_.Bind(&block5, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13);
    compiler::TNode<Float64T> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = CodeStubAssembler(state_).LoadDoubleWithHoleCheck(compiler::TNode<FixedDoubleArray>{tmp13}, compiler::TNode<Smi>{tmp11}, &label0);
    ca_.Goto(&block7, tmp9, tmp10, tmp11, tmp13, tmp13, tmp11, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp9, tmp10, tmp11, tmp13, tmp13, tmp11);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<JSArray> tmp16;
    compiler::TNode<Smi> tmp17;
    compiler::TNode<FixedDoubleArray> tmp18;
    compiler::TNode<FixedDoubleArray> tmp19;
    compiler::TNode<Smi> tmp20;
    ca_.Bind(&block8, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block1);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<JSArray> tmp22;
    compiler::TNode<Smi> tmp23;
    compiler::TNode<FixedDoubleArray> tmp24;
    compiler::TNode<FixedDoubleArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<Float64T> tmp27;
    ca_.Bind(&block7, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    compiler::TNode<HeapNumber> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<HeapNumber>(CodeStubAssembler(state_).AllocateHeapNumberWithValue(compiler::TNode<Float64T>{tmp27}));
    ca_.Goto(&block2, tmp28);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp29;
    compiler::TNode<JSArray> tmp30;
    compiler::TNode<Smi> tmp31;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/base.tq:1198:5");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_IfHole);
  }

    compiler::TNode<Object> tmp32;
    ca_.Bind(&block2, &tmp32);
  return compiler::TNode<Object>{tmp32};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::NumberIsNaN(compiler::TNode<Number> p_number) {
  compiler::CodeAssemblerParameterizedLabel<Number> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number, Number, Smi> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_number);

  if (block0.is_used()) {
    compiler::TNode<Number> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp1 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp0, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp0, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Number> tmp2;
    compiler::TNode<Number> tmp3;
    compiler::TNode<Number> tmp4;
    ca_.Bind(&block5, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Number> tmp5;
    compiler::TNode<Number> tmp6;
    compiler::TNode<Number> tmp7;
    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7, &tmp8);
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Number> tmp10;
    compiler::TNode<Number> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<Float64T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6412ATHeapNumber(compiler::TNode<HeapNumber>{ca_.UncheckedCast<HeapNumber>(tmp11)}));
    compiler::TNode<BoolT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64NotEqual(compiler::TNode<Float64T>{tmp12}, compiler::TNode<Float64T>{tmp12}));
    ca_.Goto(&block1, tmp13);
  }

    compiler::TNode<BoolT> tmp14;
    ca_.Bind(&block1, &tmp14);
  return compiler::TNode<BoolT>{tmp14};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::ToBoolean(compiler::TNode<Object> p_obj) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_obj);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfToBooleanIsTrue(compiler::TNode<Object>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block5, tmp0, tmp0);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block4, &tmp1, &tmp2);
    ca_.Goto(&block2, tmp1);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block5, &tmp3, &tmp4);
    ca_.Goto(&block3, tmp3);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block2, &tmp5);
    compiler::TNode<BoolT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block1, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block3, &tmp7);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp8);
  }

    compiler::TNode<BoolT> tmp9;
    ca_.Bind(&block1, &tmp9);
  return compiler::TNode<BoolT>{tmp9};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::ToIndex(compiler::TNode<Object> p_input, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_RangeError) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number, Number> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Number> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_input, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Oddball> tmp2;
    USE(tmp2);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.Branch(tmp3, &block3, &block4, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    ca_.Goto(&block2, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp7;
    compiler::TNode<Context> tmp8;
    ca_.Bind(&block4, &tmp7, &tmp8);
    compiler::TNode<Number> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToInteger_Inline(compiler::TNode<Context>{tmp8}, compiler::TNode<Object>{tmp7}, CodeStubAssembler::ToIntegerTruncationMode::kTruncateMinusZero));
    compiler::TNode<Number> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberLessThan(compiler::TNode<Number>{tmp9}, compiler::TNode<Number>{tmp10}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block8, tmp7, tmp8, tmp9, tmp9);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block9, tmp7, tmp8, tmp9, tmp9);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<Object> tmp11;
    compiler::TNode<Context> tmp12;
    compiler::TNode<Number> tmp13;
    compiler::TNode<Number> tmp14;
    ca_.Bind(&block8, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block5, tmp11, tmp12, tmp13);
  }

  if (block9.is_used()) {
    compiler::TNode<Object> tmp15;
    compiler::TNode<Context> tmp16;
    compiler::TNode<Number> tmp17;
    compiler::TNode<Number> tmp18;
    ca_.Bind(&block9, &tmp15, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block7, tmp15, tmp16, tmp17);
  }

  if (block7.is_used()) {
    compiler::TNode<Object> tmp19;
    compiler::TNode<Context> tmp20;
    compiler::TNode<Number> tmp21;
    ca_.Bind(&block7, &tmp19, &tmp20, &tmp21);
    compiler::TNode<Number> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi19ATconstexpr_float64(kMaxSafeInteger));
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    CodeStubAssembler(state_).BranchIfNumberGreaterThan(compiler::TNode<Number>{tmp21}, compiler::TNode<Number>{tmp22}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp19, tmp20, tmp21, tmp21);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block11, tmp19, tmp20, tmp21, tmp21);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Object> tmp23;
    compiler::TNode<Context> tmp24;
    compiler::TNode<Number> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block10, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block5, tmp23, tmp24, tmp25);
  }

  if (block11.is_used()) {
    compiler::TNode<Object> tmp27;
    compiler::TNode<Context> tmp28;
    compiler::TNode<Number> tmp29;
    compiler::TNode<Number> tmp30;
    ca_.Bind(&block11, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block6, tmp27, tmp28, tmp29);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp31;
    compiler::TNode<Context> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp34;
    compiler::TNode<Context> tmp35;
    compiler::TNode<Number> tmp36;
    ca_.Bind(&block6, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block2, tmp36);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_RangeError);
  }

    compiler::TNode<Number> tmp37;
    ca_.Bind(&block2, &tmp37);
  return compiler::TNode<Number>{tmp37};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::GetLengthProperty(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArgumentsObjectWithLength> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block7, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block5, tmp3, tmp4, tmp5);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block6, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<Number> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).LoadJSArrayLength(compiler::TNode<JSArray>{tmp11}));
    ca_.Goto(&block1, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<Object> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    compiler::TNode<JSArgumentsObjectWithLength> tmp16;
    USE(tmp16);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp16 = BaseBuiltinsFromDSLAssembler(state_).Cast29ATJSArgumentsObjectWithLength(compiler::TNode<Context>{tmp13}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp15)}, &label0);
    ca_.Goto(&block10, tmp13, tmp14, tmp15, ca_.UncheckedCast<Object>(tmp15), tmp16);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block11, tmp13, tmp14, tmp15, ca_.UncheckedCast<Object>(tmp15));
    }
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    ca_.Bind(&block11, &tmp17, &tmp18, &tmp19, &tmp20);
    ca_.Goto(&block9, tmp17, tmp18, tmp19);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSArgumentsObjectWithLength> tmp25;
    ca_.Bind(&block10, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    compiler::TNode<Object> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadJSArgumentsObjectWithLength(compiler::TNode<JSArgumentsObjectWithLength>{tmp25}));
    ca_.Goto(&block3, tmp21, tmp22, tmp26);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    ca_.Bind(&block9, &tmp27, &tmp28, &tmp29);
    compiler::TNode<String> tmp30;
    USE(tmp30);
    tmp30 = BaseBuiltinsFromDSLAssembler(state_).kLengthString();
    compiler::TNode<Object> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp27}, compiler::TNode<Object>{tmp28}, compiler::TNode<Object>{tmp30}));
    ca_.Goto(&block3, tmp27, tmp28, tmp31);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    ca_.Bind(&block3, &tmp32, &tmp33, &tmp34);
    compiler::TNode<Number> tmp35;
    USE(tmp35);
    tmp35 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToLength_Inline(compiler::TNode<Context>{tmp32}, compiler::TNode<Object>{tmp34}));
    ca_.Goto(&block1, tmp35);
  }

    compiler::TNode<Number> tmp36;
    ca_.Bind(&block1, &tmp36);
  return compiler::TNode<Number>{tmp36};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block4, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block5, &tmp2, &tmp3);
    ca_.Goto(&block3, tmp2, tmp3);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    ca_.Goto(&block2, tmp4, tmp5);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    ca_.Bind(&block3, &tmp6, &tmp7);
    compiler::TNode<BoolT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block1, tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    ca_.Bind(&block2, &tmp9, &tmp10);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp10}, compiler::TNode<Object>{tmp9}));
    ca_.Goto(&block1, tmp11);
  }

    compiler::TNode<BoolT> tmp12;
    ca_.Bind(&block1, &tmp12);
  return compiler::TNode<BoolT>{tmp12};
}

void BaseBuiltinsFromDSLAssembler::BranchIfFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block3, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp5}, compiler::TNode<Object>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp4, tmp5, tmp4);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfNotFastJSArray(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIfNot13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp1}, compiler::TNode<Object>{tmp0}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block3, tmp0, tmp1, tmp0);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block4, tmp0, tmp1, tmp0);
    }
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp5;
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfFastJSArrayForCopy(compiler::TNode<Object> p_o, compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Context, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o, p_context);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    compiler::TNode<Context> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    CodeStubAssembler(state_).GotoIfForceSlowPath(&label0);
    ca_.Goto(&block3, tmp0, tmp1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp2;
    compiler::TNode<Context> tmp3;
    ca_.Bind(&block4, &tmp2, &tmp3);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp4;
    compiler::TNode<Context> tmp5;
    ca_.Bind(&block3, &tmp4, &tmp5);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf20ATFastJSArrayForCopy22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp5}, compiler::TNode<Object>{tmp4}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp4, tmp5, tmp4);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block6, tmp4, tmp5, tmp4);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp6;
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    ca_.Bind(&block5, &tmp6, &tmp7, &tmp8);
    ca_.Goto(&block1);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp9;
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block6, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::IsFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::FromConstexpr11ATFrameType21ATconstexpr_FrameType(StackFrame::Type p_t) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<UintPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr19ATconstexpr_uintptr((CodeStubAssembler(state_).ConstexprUintPtrShl(static_cast<uintptr_t>(p_t), kSmiTagSize))));
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).BitcastWordToTaggedSigned(compiler::TNode<UintPtrT>{tmp0}));
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Smi>{tmp3};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Cast11ATFrameType(compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block6(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_o);

  if (block0.is_used()) {
    compiler::TNode<Object> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<BoolT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).TaggedIsNotSmi(compiler::TNode<Object>{tmp0}));
    ca_.Branch(tmp1, &block3, &block4, tmp0);
  }

  if (block3.is_used()) {
    compiler::TNode<Object> tmp2;
    ca_.Bind(&block3, &tmp2);
    ca_.Goto(&block1);
  }

  if (block4.is_used()) {
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block4, &tmp3);
    compiler::TNode<IntPtrT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).BitcastTaggedToWord(compiler::TNode<Object>{tmp3}));
    compiler::TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr8ATintptr(compiler::TNode<IntPtrT>{tmp4}));
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(kSmiTagSize));
    compiler::TNode<UintPtrT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp6}));
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(StackFrame::NUMBER_OF_TYPES));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).UintPtrLessThan(compiler::TNode<UintPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp8}));
    ca_.Branch(tmp9, &block5, &block6, tmp3);
  }

  if (block6.is_used()) {
    compiler::TNode<Object> tmp10;
    ca_.Bind(&block6, &tmp10);
    CodeStubAssembler(state_).FailAssert("Torque assert \'(Convert<uintptr>(BitcastTaggedToWord(o)) >>> kSmiTagSize) < kFrameTypeCount\' failed", "../../src/builtins/frames.tq", 27);
  }

  if (block5.is_used()) {
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block5, &tmp11);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = TORQUE_CAST(compiler::TNode<Object>{tmp11});
    ca_.Goto(&block2, tmp12);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Smi> tmp13;
    ca_.Bind(&block2, &tmp13);
  return compiler::TNode<Smi>{tmp13};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadObjectFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).LoadBufferObject(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Object> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Object>{tmp2};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadPointerFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadBufferPointer(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<RawPtrT> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<RawPtrT>{tmp2};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadSmiFromFrame(compiler::TNode<RawPtrT> p_f, int32_t p_o) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Smi> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadBufferSmi(compiler::TNode<RawPtrT>{tmp0}, p_o));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<Smi> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<Smi>{tmp2};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::LoadFunctionFromFrame(compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<Object> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadObjectFromFrame(compiler::TNode<RawPtrT>{tmp0}, StandardFrameConstants::kFunctionOffset));
    compiler::TNode<JSFunction> tmp2;
    USE(tmp2);
    tmp2 = TORQUE_CAST(compiler::TNode<Object>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<JSFunction> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<JSFunction>{tmp3};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::LoadCallerFromFrame(compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f);

  if (block0.is_used()) {
    compiler::TNode<RawPtrT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<RawPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadPointerFromFrame(compiler::TNode<RawPtrT>{tmp0}, StandardFrameConstants::kCallerFPOffset));
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = (compiler::TNode<RawPtrT>{tmp1});
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<RawPtrT> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<RawPtrT>{tmp3};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::Cast25UT9ATContext11ATFrameType(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Smi> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATContext(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block5, tmp0, tmp1, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block6, &tmp3, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block4, tmp3, tmp4, tmp5);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Context> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block2, tmp11);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block4, &tmp12, &tmp13, &tmp14);
    compiler::TNode<Smi> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Cast11ATFrameType(compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp14)}, &label0);
    ca_.Goto(&block9, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14), tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp12, tmp13, tmp14, ca_.UncheckedCast<Object>(tmp14));
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block10, &tmp16, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block8, tmp16, tmp17, tmp18);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Smi> tmp24;
    ca_.Bind(&block9, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24);
    ca_.Goto(&block2, tmp24);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    ca_.Bind(&block8, &tmp25, &tmp26, &tmp27);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Object> tmp28;
    ca_.Bind(&block2, &tmp28);
  return compiler::TNode<Object>{tmp28};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::LoadContextOrFrameTypeFromFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadObjectFromFrame(compiler::TNode<RawPtrT>{tmp1}, StandardFrameConstants::kContextOrFrameTypeOffset));
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).UnsafeCast25UT9ATContext11ATFrameType(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}));
    ca_.Goto(&block1, tmp3);
  }

    compiler::TNode<Object> tmp4;
    ca_.Bind(&block1, &tmp4);
  return compiler::TNode<Object>{tmp4};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::LoadLengthFromAdapterFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadSmiFromFrame(compiler::TNode<RawPtrT>{tmp1}, ArgumentsAdaptorFrameConstants::kLengthOffset));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<Smi> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<Smi>{tmp3};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::FrameTypeEquals(compiler::TNode<Smi> p_f1, compiler::TNode<Smi> p_f2) {
  compiler::CodeAssemblerParameterizedLabel<Smi, Smi> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_f1, p_f2);

  if (block0.is_used()) {
    compiler::TNode<Smi> tmp0;
    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::Cast15ATStandardFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadContextOrFrameTypeFromFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1}));
    compiler::TNode<HeapObject> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATHeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<HeapObject> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    compiler::TNode<BoolT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsContext(compiler::TNode<HeapObject>{tmp10}));
    ca_.Branch(tmp11, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<RawPtrT> tmp13;
    compiler::TNode<HeapObject> tmp14;
    ca_.Bind(&block5, &tmp12, &tmp13, &tmp14);
    compiler::TNode<RawPtrT> tmp15;
    USE(tmp15);
    tmp15 = (compiler::TNode<RawPtrT>{tmp13});
    ca_.Goto(&block2, tmp15);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<HeapObject> tmp18;
    ca_.Bind(&block6, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<RawPtrT> tmp19;
    ca_.Bind(&block2, &tmp19);
  return compiler::TNode<RawPtrT>{tmp19};
}

compiler::TNode<RawPtrT> BaseBuiltinsFromDSLAssembler::Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context> p_context, compiler::TNode<RawPtrT> p_f, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, RawPtrT, Smi> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<RawPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Object>(BaseBuiltinsFromDSLAssembler(state_).LoadContextOrFrameTypeFromFrame(compiler::TNode<Context>{tmp0}, compiler::TNode<RawPtrT>{tmp1}));
    compiler::TNode<Smi> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast11ATFrameType(compiler::TNode<Object>{tmp2}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp2);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<RawPtrT> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block4, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<RawPtrT> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Smi> tmp10;
    ca_.Bind(&block3, &tmp7, &tmp8, &tmp9, &tmp10);
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr11ATFrameType21ATconstexpr_FrameType(StackFrame::ARGUMENTS_ADAPTOR));
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FrameTypeEquals(compiler::TNode<Smi>{tmp10}, compiler::TNode<Smi>{tmp11}));
    ca_.Branch(tmp12, &block5, &block6, tmp7, tmp8, tmp10);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<RawPtrT> tmp14;
    compiler::TNode<Smi> tmp15;
    ca_.Bind(&block5, &tmp13, &tmp14, &tmp15);
    compiler::TNode<RawPtrT> tmp16;
    USE(tmp16);
    tmp16 = (compiler::TNode<RawPtrT>{tmp14});
    ca_.Goto(&block2, tmp16);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<Smi> tmp19;
    ca_.Bind(&block6, &tmp17, &tmp18, &tmp19);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<RawPtrT> tmp20;
    ca_.Bind(&block2, &tmp20);
  return compiler::TNode<RawPtrT>{tmp20};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::LoadTargetFromFrame() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<RawPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadFramePointer());
    compiler::TNode<JSFunction> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).LoadFunctionFromFrame(compiler::TNode<RawPtrT>{tmp0}));
    ca_.Goto(&block1, tmp1);
  }

    compiler::TNode<JSFunction> tmp2;
    ca_.Bind(&block1, &tmp2);
  return compiler::TNode<JSFunction>{tmp2};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp10;
    ca_.Bind(&block2, &tmp10);
  return compiler::TNode<JSArray>{tmp10};
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSFunction> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSFunction> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSFunction>{tmp8};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATFixedArray(compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<FixedArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedArray> tmp10;
    ca_.Bind(&block2, &tmp10);
  return compiler::TNode<FixedArray>{tmp10};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::Cast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, FixedDoubleArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedDoubleArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject18ATFixedDoubleArray(compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<FixedDoubleArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedDoubleArray> tmp10;
    ca_.Bind(&block2, &tmp10);
  return compiler::TNode<FixedDoubleArray>{tmp10};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject9ATJSArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSArray>{tmp18};
}

compiler::TNode<JSArgumentsObjectWithLength> BaseBuiltinsFromDSLAssembler::Cast29ATJSArgumentsObjectWithLength(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArgumentsObjectWithLength> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArgumentsObjectWithLength> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArgumentsObjectWithLength> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject29ATJSArgumentsObjectWithLength(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArgumentsObjectWithLength> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArgumentsObjectWithLength> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSArgumentsObjectWithLength>{tmp18};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

void BaseBuiltinsFromDSLAssembler::BranchIf13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIfNot13ATFastJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf20ATFastJSArrayForCopy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::Cast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<Context> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject9ATContext(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Context> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Context> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<Context>{tmp18};
}

compiler::TNode<Object> BaseBuiltinsFromDSLAssembler::UnsafeCast25UT9ATContext11ATFrameType(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is25UT9ATContext11ATFrameType22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<Object> tmp7;
    USE(tmp7);
    tmp7 = (compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<Object> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<Object>{tmp8};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::Cast12ATHeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<HeapObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATHeapObject(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<HeapObject> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapObject> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<HeapObject>{tmp18};
}

compiler::TNode<IntPtrT> BaseBuiltinsFromDSLAssembler::Convert8ATintptr17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<IntPtrT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<IntPtrT> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(p_i));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<IntPtrT> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<IntPtrT>{tmp1};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSReceiver> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSReceiver>{tmp18};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject9ATJSArray(compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp10;
    ca_.Bind(&block2, &tmp10);
  return compiler::TNode<JSArray>{tmp10};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSArray> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSArray> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSArray>{tmp8};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATNumberDictionary(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NumberDictionary> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<NumberDictionary> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<NumberDictionary> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<NumberDictionary>{tmp8};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<FixedArray> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<FixedArray> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<FixedArray>{tmp8};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::UnsafeCast5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<Smi> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<Smi> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<Smi>{tmp8};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::UnsafeCast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<FixedDoubleArray> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<FixedDoubleArray> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<FixedDoubleArray>{tmp8};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::UnsafeCast14ATJSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is14ATJSTypedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSTypedArray> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSTypedArray> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSTypedArray>{tmp8};
}

compiler::TNode<String> BaseBuiltinsFromDSLAssembler::Cast8ATString(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, String> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<String> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject8ATString(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<String> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<String> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<String>{tmp18};
}

compiler::TNode<HeapObject> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<HeapObject> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<HeapObject> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<HeapObject>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast13ATConstructor(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject13ATConstructor(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSReceiver>{tmp18};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast13ATFastJSArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject13ATFastJSArray(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSArray>{tmp18};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast25ATSloppyArgumentsElements(compiler::TNode<Context> p_context, compiler::TNode<HeapObject> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, HeapObject, HeapObject, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<HeapObject> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject25ATSloppyArgumentsElements(compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<HeapObject> tmp4;
    compiler::TNode<HeapObject> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<HeapObject> tmp7;
    compiler::TNode<HeapObject> tmp8;
    compiler::TNode<FixedArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block2, tmp9);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedArray> tmp10;
    ca_.Bind(&block2, &tmp10);
  return compiler::TNode<FixedArray>{tmp10};
}

compiler::TNode<FixedArray> BaseBuiltinsFromDSLAssembler::Cast12ATFixedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<FixedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATFixedArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<FixedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<FixedArray>{tmp18};
}

compiler::TNode<Context> BaseBuiltinsFromDSLAssembler::UnsafeCast9ATContext(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<Context> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<Context> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<Context>{tmp8};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast20ATFastJSArrayForCopy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject20ATFastJSArrayForCopy(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSArray>{tmp18};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::Cast12ATJSReceiver(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSReceiver> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSReceiver> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATJSReceiver(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSReceiver> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSReceiver> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSReceiver>{tmp18};
}

compiler::TNode<Smi> BaseBuiltinsFromDSLAssembler::Convert5ATSmi17ATconstexpr_int31(int31_t p_i) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    compiler::TNode<Smi> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(p_i));
    ca_.Goto(&block1, tmp0);
  }

    compiler::TNode<Smi> tmp1;
    ca_.Bind(&block1, &tmp1);
  return compiler::TNode<Smi>{tmp1};
}

compiler::TNode<JSDataView> BaseBuiltinsFromDSLAssembler::Cast12ATJSDataView(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSDataView> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSDataView> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATJSDataView(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSDataView> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSDataView> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSDataView>{tmp18};
}

compiler::TNode<Map> BaseBuiltinsFromDSLAssembler::Cast5ATMap(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, Map> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Map> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<Map> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject5ATMap(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<Map> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<Map> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<Map>{tmp18};
}

compiler::TNode<JSArray> BaseBuiltinsFromDSLAssembler::Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSArray>{tmp18};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::UnsafeCast12ATHeapNumber(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapNumber> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<HeapNumber> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<HeapNumber> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<HeapNumber>{tmp8};
}

compiler::TNode<JSReceiver> BaseBuiltinsFromDSLAssembler::UnsafeCast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSReceiver> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSReceiver> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSReceiver> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSReceiver>{tmp8};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::UnsafeCast10ATJSObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<JSObject> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<JSObject> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<JSObject>{tmp8};
}

compiler::TNode<Number> BaseBuiltinsFromDSLAssembler::UnsafeCast22UT12ATHeapNumber5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<Number> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<Number>{tmp8};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

void BaseBuiltinsFromDSLAssembler::BranchIf34ATFastJSArrayWithNoCustomIteration22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast34ATFastJSArrayWithNoCustomIteration(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is25UT9ATContext11ATFrameType22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf25UT9ATContext11ATFrameType22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is14ATJSTypedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf14ATJSTypedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is13ATFastJSArray9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, JSArray> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, JSArray> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf13ATFastJSArray9ATJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<JSArray>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<JSArray> tmp3;
    compiler::TNode<JSArray> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSArray> tmp6;
    compiler::TNode<JSArray> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<JSArray> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSArray> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

void BaseBuiltinsFromDSLAssembler::BranchIf12ATJSReceiver22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATJSReceiver(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::UnsafeCast21ATFixedTypedArrayBase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).Is21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block3, &tmp3, &tmp4);
    CodeStubAssembler(state_).FailAssert("Torque assert \'Is<A>(o)\' failed", "../../src/builtins/base.tq", 965);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block2, &tmp5, &tmp6);
    compiler::TNode<FixedTypedArrayBase> tmp7;
    USE(tmp7);
    tmp7 = TORQUE_CAST(compiler::TNode<Object>{tmp6});
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<FixedTypedArrayBase> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<FixedTypedArrayBase>{tmp8};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

void BaseBuiltinsFromDSLAssembler::BranchIf12ATJSFunction22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSFunction> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSFunction> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATJSFunction(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSFunction> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf25UT9ATContext11ATFrameType22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast25UT9ATContext11ATFrameType(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf9ATJSArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf18ATNumberDictionary22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, NumberDictionary> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<NumberDictionary> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast18ATNumberDictionary(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<NumberDictionary> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf12ATFixedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, FixedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATFixedArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<FixedArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Smi> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Smi> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast5ATSmi(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Smi> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf18ATFixedDoubleArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, FixedDoubleArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedDoubleArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast18ATFixedDoubleArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<FixedDoubleArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf14ATJSTypedArray22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSTypedArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSTypedArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast14ATJSTypedArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSTypedArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf12ATHeapObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATHeapObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf13ATFastJSArray9ATJSArray(compiler::TNode<Context> p_context, compiler::TNode<JSArray> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, JSArray> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSArray, JSArray, JSArray> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSArray> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<HeapObject>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<JSArray> tmp4;
    compiler::TNode<JSArray> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<JSArray> tmp7;
    compiler::TNode<JSArray> tmp8;
    compiler::TNode<JSArray> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf9ATContext22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Context> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Context> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast9ATContext(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Context> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<BoolT> BaseBuiltinsFromDSLAssembler::Is21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, BoolT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::CodeAssemblerLabel label0(&ca_);
    compiler::CodeAssemblerLabel label1(&ca_);
    BaseBuiltinsFromDSLAssembler(state_).BranchIf21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0, &label1);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp0, tmp1, tmp1);
    }
    if (label1.is_used()) {
      ca_.Bind(&label1);
      ca_.Goto(&block7, tmp0, tmp1, tmp1);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block6, &tmp2, &tmp3, &tmp4);
    ca_.Goto(&block2, tmp2, tmp3);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block7, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp5, tmp6);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    ca_.Goto(&block5, tmp8, tmp9);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block3, &tmp10, &tmp11);
    compiler::TNode<BoolT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    ca_.Goto(&block4, tmp10, tmp11, tmp12);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    ca_.Bind(&block5, &tmp13, &tmp14);
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block4, tmp13, tmp14, tmp15);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<BoolT> tmp18;
    ca_.Bind(&block4, &tmp16, &tmp17, &tmp18);
    ca_.Goto(&block1, tmp18);
  }

    compiler::TNode<BoolT> tmp19;
    ca_.Bind(&block1, &tmp19);
  return compiler::TNode<BoolT>{tmp19};
}

void BaseBuiltinsFromDSLAssembler::BranchIf12ATHeapNumber22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapNumber> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapNumber> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATHeapNumber(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapNumber> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSReceiver> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSReceiver> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast45UT17ATJSBoundFunction12ATJSFunction9ATJSProxy(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSReceiver> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf10ATJSObject22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast10ATJSObject(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<JSObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

void BaseBuiltinsFromDSLAssembler::BranchIf22UT12ATHeapNumber5ATSmi22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Number> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast22UT12ATHeapNumber5ATSmi(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Number> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<JSFunction> BaseBuiltinsFromDSLAssembler::Cast12ATJSFunction(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSFunction> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSFunction> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSFunction> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATJSFunction(compiler::TNode<Context>{tmp6}, compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSFunction> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSFunction> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSFunction>{tmp18};
}

compiler::TNode<NumberDictionary> BaseBuiltinsFromDSLAssembler::Cast18ATNumberDictionary(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, NumberDictionary> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<NumberDictionary> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<NumberDictionary> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject18ATNumberDictionary(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<NumberDictionary> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<NumberDictionary> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<NumberDictionary>{tmp18};
}

compiler::TNode<FixedDoubleArray> BaseBuiltinsFromDSLAssembler::Cast18ATFixedDoubleArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedDoubleArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedDoubleArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<FixedDoubleArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject18ATFixedDoubleArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<FixedDoubleArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedDoubleArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<FixedDoubleArray>{tmp18};
}

compiler::TNode<JSTypedArray> BaseBuiltinsFromDSLAssembler::Cast14ATJSTypedArray(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSTypedArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSTypedArray> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSTypedArray> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject14ATJSTypedArray(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSTypedArray> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSTypedArray> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSTypedArray>{tmp18};
}

void BaseBuiltinsFromDSLAssembler::BranchIf21ATFixedTypedArrayBase22UT12ATHeapObject5ATSmi(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_True, compiler::CodeAssemblerLabel* label_False) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, FixedTypedArrayBase> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<FixedTypedArrayBase> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast21ATFixedTypedArrayBase(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<FixedTypedArrayBase> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    ca_.Goto(&block1);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_True);
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    ca_.Goto(label_False);
  }
}

compiler::TNode<HeapNumber> BaseBuiltinsFromDSLAssembler::Cast12ATHeapNumber(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, HeapNumber> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<HeapNumber> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<HeapNumber> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject12ATHeapNumber(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<HeapNumber> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<HeapNumber> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<HeapNumber>{tmp18};
}

compiler::TNode<JSObject> BaseBuiltinsFromDSLAssembler::Cast10ATJSObject(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, JSObject> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSObject> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<JSObject> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject10ATJSObject(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<JSObject> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<JSObject> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<JSObject>{tmp18};
}

compiler::TNode<FixedTypedArrayBase> BaseBuiltinsFromDSLAssembler::Cast21ATFixedTypedArrayBase(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_CastError) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, HeapObject> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, HeapObject, FixedTypedArrayBase> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<FixedTypedArrayBase> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<HeapObject> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = CodeStubAssembler(state_).TaggedToHeapObject(compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block3, tmp0, tmp1, tmp1, tmp2);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block4, tmp0, tmp1, tmp1);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp3;
    compiler::TNode<Object> tmp4;
    compiler::TNode<Object> tmp5;
    ca_.Bind(&block4, &tmp3, &tmp4, &tmp5);
    ca_.Goto(&block1);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp6;
    compiler::TNode<Object> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<HeapObject> tmp9;
    ca_.Bind(&block3, &tmp6, &tmp7, &tmp8, &tmp9);
    compiler::TNode<FixedTypedArrayBase> tmp10;
    USE(tmp10);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp10 = BaseBuiltinsFromDSLAssembler(state_).CastHeapObject21ATFixedTypedArrayBase(compiler::TNode<HeapObject>{tmp9}, &label0);
    ca_.Goto(&block5, tmp6, tmp7, tmp9, tmp10);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block6, tmp6, tmp7, tmp9);
    }
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<HeapObject> tmp13;
    ca_.Bind(&block6, &tmp11, &tmp12, &tmp13);
    ca_.Goto(&block1);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<HeapObject> tmp16;
    compiler::TNode<FixedTypedArrayBase> tmp17;
    ca_.Bind(&block5, &tmp14, &tmp15, &tmp16, &tmp17);
    ca_.Goto(&block2, tmp17);
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_CastError);
  }

    compiler::TNode<FixedTypedArrayBase> tmp18;
    ca_.Bind(&block2, &tmp18);
  return compiler::TNode<FixedTypedArrayBase>{tmp18};
}

}  // namespace internal
}  // namespace v8

