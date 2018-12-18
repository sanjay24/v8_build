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

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewGetterNameString(ElementsKind p_kind) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getUint8"));
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getInt8"));
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getUint16"));
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getInt16"));
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getUint32"));
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getInt32"));
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getFloat32"));
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getFloat64"));
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getBigInt64"));
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.getBigUint64"));
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/data-view.tq:39:7");
    CodeStubAssembler(state_).Unreachable();
  }

    compiler::TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
  return compiler::TNode<String>{tmp10};
}

compiler::TNode<String> DataViewBuiltinsFromDSLAssembler::MakeDataViewSetterNameString(ElementsKind p_kind) {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<String> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

  if (block0.is_used()) {
    ca_.Bind(&block0);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      ca_.Goto(&block2);
    } else {
      ca_.Goto(&block3);
    }
  }

  if (block2.is_used()) {
    ca_.Bind(&block2);
    compiler::TNode<String> tmp0;
    USE(tmp0);
    tmp0 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setUint8"));
    ca_.Goto(&block1, tmp0);
  }

  if (block3.is_used()) {
    ca_.Bind(&block3);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      ca_.Goto(&block5);
    } else {
      ca_.Goto(&block6);
    }
  }

  if (block5.is_used()) {
    ca_.Bind(&block5);
    compiler::TNode<String> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setInt8"));
    ca_.Goto(&block1, tmp1);
  }

  if (block6.is_used()) {
    ca_.Bind(&block6);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      ca_.Goto(&block8);
    } else {
      ca_.Goto(&block9);
    }
  }

  if (block8.is_used()) {
    ca_.Bind(&block8);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setUint16"));
    ca_.Goto(&block1, tmp2);
  }

  if (block9.is_used()) {
    ca_.Bind(&block9);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      ca_.Goto(&block11);
    } else {
      ca_.Goto(&block12);
    }
  }

  if (block11.is_used()) {
    ca_.Bind(&block11);
    compiler::TNode<String> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setInt16"));
    ca_.Goto(&block1, tmp3);
  }

  if (block12.is_used()) {
    ca_.Bind(&block12);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      ca_.Goto(&block14);
    } else {
      ca_.Goto(&block15);
    }
  }

  if (block14.is_used()) {
    ca_.Bind(&block14);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setUint32"));
    ca_.Goto(&block1, tmp4);
  }

  if (block15.is_used()) {
    ca_.Bind(&block15);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      ca_.Goto(&block17);
    } else {
      ca_.Goto(&block18);
    }
  }

  if (block17.is_used()) {
    ca_.Bind(&block17);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setInt32"));
    ca_.Goto(&block1, tmp5);
  }

  if (block18.is_used()) {
    ca_.Bind(&block18);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      ca_.Goto(&block20);
    } else {
      ca_.Goto(&block21);
    }
  }

  if (block20.is_used()) {
    ca_.Bind(&block20);
    compiler::TNode<String> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setFloat32"));
    ca_.Goto(&block1, tmp6);
  }

  if (block21.is_used()) {
    ca_.Bind(&block21);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      ca_.Goto(&block23);
    } else {
      ca_.Goto(&block24);
    }
  }

  if (block23.is_used()) {
    ca_.Bind(&block23);
    compiler::TNode<String> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setFloat64"));
    ca_.Goto(&block1, tmp7);
  }

  if (block24.is_used()) {
    ca_.Bind(&block24);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      ca_.Goto(&block26);
    } else {
      ca_.Goto(&block27);
    }
  }

  if (block26.is_used()) {
    ca_.Bind(&block26);
    compiler::TNode<String> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setBigInt64"));
    ca_.Goto(&block1, tmp8);
  }

  if (block27.is_used()) {
    ca_.Bind(&block27);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      ca_.Goto(&block29);
    } else {
      ca_.Goto(&block30);
    }
  }

  if (block29.is_used()) {
    ca_.Bind(&block29);
    compiler::TNode<String> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("DataView.prototype.setBigUint64"));
    ca_.Goto(&block1, tmp9);
  }

  if (block30.is_used()) {
    ca_.Bind(&block30);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/data-view.tq:65:7");
    CodeStubAssembler(state_).Unreachable();
  }

    compiler::TNode<String> tmp10;
    ca_.Bind(&block1, &tmp10);
  return compiler::TNode<String>{tmp10};
}

compiler::TNode<BoolT> DataViewBuiltinsFromDSLAssembler::WasNeutered(compiler::TNode<JSArrayBufferView> p_view) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBufferView> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_view);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBufferView> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<JSArrayBuffer> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<JSArrayBuffer>(CodeStubAssembler(state_).LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView>{tmp0}));
    compiler::TNode<BoolT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp1}));
    ca_.Goto(&block1, tmp2);
  }

    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block1, &tmp3);
  return compiler::TNode<BoolT>{tmp3};
}

compiler::TNode<JSDataView> DataViewBuiltinsFromDSLAssembler::ValidateDataView(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<String> p_method) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String, Object, JSDataView> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, String> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o, p_method);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<String> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<JSDataView> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp3 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATJSDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp1, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<String> tmp6;
    compiler::TNode<Object> tmp7;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6, &tmp7);
    ca_.Goto(&block3, tmp4, tmp5, tmp6);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<String> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<JSDataView> tmp12;
    ca_.Bind(&block4, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12);
    ca_.Goto(&block1, tmp12);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp13;
    compiler::TNode<Object> tmp14;
    compiler::TNode<String> tmp15;
    ca_.Bind(&block3, &tmp13, &tmp14, &tmp15);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp13}, MessageTemplate::kIncompatibleMethodReceiver, compiler::TNode<Object>{tmp15});
  }

    compiler::TNode<JSDataView> tmp16;
    ca_.Bind(&block1, &tmp16);
  return compiler::TNode<JSDataView>{tmp16};
}

TF_BUILTIN(DataViewPrototypeGetBuffer, CodeStubAssembler) {
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
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("get DataView.prototype.buffer"));
    compiler::TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSDataView>(DataViewBuiltinsFromDSLAssembler(state_).ValidateDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2}));
    compiler::TNode<JSArrayBuffer> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<JSArrayBuffer>(CodeStubAssembler(state_).LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView>{tmp3}));
    arguments->PopAndReturn(tmp4);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteLength, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("get DataView.prototype.byte_length"));
    compiler::TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSDataView>(DataViewBuiltinsFromDSLAssembler(state_).ValidateDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(DataViewBuiltinsFromDSLAssembler(state_).WasNeutered(compiler::TNode<JSArrayBufferView>{tmp3}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<JSDataView> tmp7;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7);
    compiler::TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    arguments->PopAndReturn(tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSDataView> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView>{tmp11}));
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi9ATuintptr(compiler::TNode<UintPtrT>{tmp12}));
    arguments->PopAndReturn(tmp13);
  }
}

TF_BUILTIN(DataViewPrototypeGetByteOffset, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, JSDataView> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, parameter0, parameter1);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<String> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<String>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATString18ATconstexpr_string("get DataView.prototype.byte_offset"));
    compiler::TNode<JSDataView> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSDataView>(DataViewBuiltinsFromDSLAssembler(state_).ValidateDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(DataViewBuiltinsFromDSLAssembler(state_).WasNeutered(compiler::TNode<JSArrayBufferView>{tmp3}));
    ca_.Branch(tmp4, &block1, &block2, tmp0, tmp1, tmp3);
  }

  if (block1.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<Object> tmp6;
    compiler::TNode<JSDataView> tmp7;
    ca_.Bind(&block1, &tmp5, &tmp6, &tmp7);
    compiler::TNode<Number> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr22UT12ATHeapNumber5ATSmi17ATconstexpr_int31(0));
    arguments->PopAndReturn(tmp8);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSDataView> tmp11;
    ca_.Bind(&block2, &tmp9, &tmp10, &tmp11);
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView>{tmp11}));
    compiler::TNode<Number> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi9ATuintptr(compiler::TNode<UintPtrT>{tmp12}));
    arguments->PopAndReturn(tmp13);
  }
}

compiler::TNode<Smi> DataViewBuiltinsFromDSLAssembler::LoadDataView8(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Smi> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    if (p_signed) {
      ca_.Goto(&block2, tmp0, tmp1);
    } else {
      ca_.Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp2;
    compiler::TNode<UintPtrT> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    compiler::TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp2}));
    compiler::TNode<Int32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Int32T>(DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp4}, compiler::TNode<UintPtrT>{tmp3}));
    compiler::TNode<Smi> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi7ATint32(compiler::TNode<Int32T>{tmp5}));
    ca_.Goto(&block1, tmp6);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp7;
    compiler::TNode<UintPtrT> tmp8;
    ca_.Bind(&block3, &tmp7, &tmp8);
    compiler::TNode<RawPtrT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp7}));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp9}, compiler::TNode<UintPtrT>{tmp8}));
    compiler::TNode<Smi> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi8ATuint32(compiler::TNode<Uint32T>{tmp10}));
    ca_.Goto(&block1, tmp11);
  }

    compiler::TNode<Smi> tmp12;
    ca_.Bind(&block1, &tmp12);
  return compiler::TNode<Smi>{tmp12};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView16(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Int32T, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>(), ca_.Uninitialized<Int32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp4;
    compiler::TNode<UintPtrT> tmp5;
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    compiler::TNode<Int32T> tmp8;
    compiler::TNode<Int32T> tmp9;
    compiler::TNode<Int32T> tmp10;
    ca_.Bind(&block2, &tmp4, &tmp5, &tmp6, &tmp7, &tmp8, &tmp9, &tmp10);
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp5}));
    compiler::TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp11}));
    compiler::TNode<UintPtrT> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp5}, compiler::TNode<UintPtrT>{tmp13}));
    compiler::TNode<Int32T> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Int32T>(DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp7}, compiler::TNode<UintPtrT>{tmp14}));
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(8));
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Int32T>{tmp15}, compiler::TNode<Int32T>{tmp16}));
    compiler::TNode<Int32T> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp17}, compiler::TNode<Int32T>{tmp12}));
    ca_.Goto(&block4, tmp4, tmp5, tmp6, tmp7, tmp12, tmp15, tmp18);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp19;
    compiler::TNode<UintPtrT> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    compiler::TNode<Int32T> tmp23;
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Int32T> tmp25;
    ca_.Bind(&block3, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    compiler::TNode<Int32T> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Int32T>(DataViewBuiltinsAssembler(state_).LoadInt8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp20}));
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp20}, compiler::TNode<UintPtrT>{tmp27}));
    compiler::TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp22}, compiler::TNode<UintPtrT>{tmp28}));
    compiler::TNode<Int32T> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp29}));
    compiler::TNode<Int32T> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(8));
    compiler::TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Int32T>{tmp26}, compiler::TNode<Int32T>{tmp31}));
    compiler::TNode<Int32T> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Add(compiler::TNode<Int32T>{tmp32}, compiler::TNode<Int32T>{tmp30}));
    ca_.Goto(&block4, tmp19, tmp20, tmp21, tmp22, tmp26, tmp30, tmp33);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp34;
    compiler::TNode<UintPtrT> tmp35;
    compiler::TNode<BoolT> tmp36;
    compiler::TNode<RawPtrT> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    compiler::TNode<Int32T> tmp40;
    ca_.Bind(&block4, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    if (p_signed) {
      ca_.Goto(&block5, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
    } else {
      ca_.Goto(&block6, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp41;
    compiler::TNode<UintPtrT> tmp42;
    compiler::TNode<BoolT> tmp43;
    compiler::TNode<RawPtrT> tmp44;
    compiler::TNode<Int32T> tmp45;
    compiler::TNode<Int32T> tmp46;
    compiler::TNode<Int32T> tmp47;
    ca_.Bind(&block5, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47);
    compiler::TNode<Smi> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi7ATint32(compiler::TNode<Int32T>{tmp47}));
    ca_.Goto(&block1, tmp48);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp49;
    compiler::TNode<UintPtrT> tmp50;
    compiler::TNode<BoolT> tmp51;
    compiler::TNode<RawPtrT> tmp52;
    compiler::TNode<Int32T> tmp53;
    compiler::TNode<Int32T> tmp54;
    compiler::TNode<Int32T> tmp55;
    ca_.Bind(&block6, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    compiler::TNode<Int32T> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0xFFFF));
    compiler::TNode<Int32T> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Int32T>{tmp55}, compiler::TNode<Int32T>{tmp56}));
    compiler::TNode<Smi> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi7ATint32(compiler::TNode<Int32T>{tmp57}));
    ca_.Goto(&block1, tmp58);
  }

    compiler::TNode<Number> tmp59;
    ca_.Bind(&block1, &tmp59);
  return compiler::TNode<Number>{tmp59};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataView32(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp1}));
    compiler::TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp5}));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp6}));
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp8}));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp9}));
    compiler::TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp11}));
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp12}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp14;
    compiler::TNode<UintPtrT> tmp15;
    compiler::TNode<BoolT> tmp16;
    compiler::TNode<RawPtrT> tmp17;
    compiler::TNode<Uint32T> tmp18;
    compiler::TNode<Uint32T> tmp19;
    compiler::TNode<Uint32T> tmp20;
    compiler::TNode<Uint32T> tmp21;
    compiler::TNode<Uint32T> tmp22;
    ca_.Bind(&block2, &tmp14, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    compiler::TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp21}, compiler::TNode<Uint32T>{tmp23}));
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp20}, compiler::TNode<Uint32T>{tmp25}));
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp24}, compiler::TNode<Uint32T>{tmp26}));
    compiler::TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp19}, compiler::TNode<Uint32T>{tmp28}));
    compiler::TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp27}, compiler::TNode<Uint32T>{tmp29}));
    compiler::TNode<Uint32T> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp30}, compiler::TNode<Uint32T>{tmp18}));
    ca_.Goto(&block4, tmp14, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21, tmp31);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp32;
    compiler::TNode<UintPtrT> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    ca_.Bind(&block3, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp41}));
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp37}, compiler::TNode<Uint32T>{tmp43}));
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp42}, compiler::TNode<Uint32T>{tmp44}));
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp38}, compiler::TNode<Uint32T>{tmp46}));
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp45}, compiler::TNode<Uint32T>{tmp47}));
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp48}, compiler::TNode<Uint32T>{tmp39}));
    ca_.Goto(&block4, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp49);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp50;
    compiler::TNode<UintPtrT> tmp51;
    compiler::TNode<BoolT> tmp52;
    compiler::TNode<RawPtrT> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<Uint32T> tmp55;
    compiler::TNode<Uint32T> tmp56;
    compiler::TNode<Uint32T> tmp57;
    compiler::TNode<Uint32T> tmp58;
    ca_.Bind(&block4, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      ca_.Goto(&block5, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
    } else {
      ca_.Goto(&block6, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp59;
    compiler::TNode<UintPtrT> tmp60;
    compiler::TNode<BoolT> tmp61;
    compiler::TNode<RawPtrT> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    ca_.Bind(&block5, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67);
    compiler::TNode<Int32T> tmp68;
    USE(tmp68);
    tmp68 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp67}));
    compiler::TNode<Number> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi7ATint32(compiler::TNode<Int32T>{tmp68}));
    ca_.Goto(&block1, tmp69);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp70;
    compiler::TNode<UintPtrT> tmp71;
    compiler::TNode<BoolT> tmp72;
    compiler::TNode<RawPtrT> tmp73;
    compiler::TNode<Uint32T> tmp74;
    compiler::TNode<Uint32T> tmp75;
    compiler::TNode<Uint32T> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<Uint32T> tmp78;
    ca_.Bind(&block6, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76, &tmp77, &tmp78);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      ca_.Goto(&block8, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
    } else {
      ca_.Goto(&block9, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp78);
    }
  }

  if (block8.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    compiler::TNode<BoolT> tmp81;
    compiler::TNode<RawPtrT> tmp82;
    compiler::TNode<Uint32T> tmp83;
    compiler::TNode<Uint32T> tmp84;
    compiler::TNode<Uint32T> tmp85;
    compiler::TNode<Uint32T> tmp86;
    compiler::TNode<Uint32T> tmp87;
    ca_.Bind(&block8, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87);
    compiler::TNode<Number> tmp88;
    USE(tmp88);
    tmp88 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi8ATuint32(compiler::TNode<Uint32T>{tmp87}));
    ca_.Goto(&block1, tmp88);
  }

  if (block9.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp89;
    compiler::TNode<UintPtrT> tmp90;
    compiler::TNode<BoolT> tmp91;
    compiler::TNode<RawPtrT> tmp92;
    compiler::TNode<Uint32T> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    ca_.Bind(&block9, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      ca_.Goto(&block11, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97);
    } else {
      ca_.Goto(&block12, tmp89, tmp90, tmp91, tmp92, tmp93, tmp94, tmp95, tmp96, tmp97);
    }
  }

  if (block11.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp98;
    compiler::TNode<UintPtrT> tmp99;
    compiler::TNode<BoolT> tmp100;
    compiler::TNode<RawPtrT> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<Uint32T> tmp104;
    compiler::TNode<Uint32T> tmp105;
    compiler::TNode<Uint32T> tmp106;
    ca_.Bind(&block11, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106);
    compiler::TNode<Float32T> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<Float32T>(CodeStubAssembler(state_).BitcastInt32ToFloat32(compiler::TNode<Uint32T>{tmp106}));
    compiler::TNode<Float64T> tmp108;
    USE(tmp108);
    tmp108 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat649ATfloat32(compiler::TNode<Float32T>{tmp107}));
    compiler::TNode<Number> tmp109;
    USE(tmp109);
    tmp109 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi9ATfloat64(compiler::TNode<Float64T>{tmp108}));
    ca_.Goto(&block1, tmp109);
  }

  if (block12.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp110;
    compiler::TNode<UintPtrT> tmp111;
    compiler::TNode<BoolT> tmp112;
    compiler::TNode<RawPtrT> tmp113;
    compiler::TNode<Uint32T> tmp114;
    compiler::TNode<Uint32T> tmp115;
    compiler::TNode<Uint32T> tmp116;
    compiler::TNode<Uint32T> tmp117;
    compiler::TNode<Uint32T> tmp118;
    ca_.Bind(&block12, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/data-view.tq:188:7");
    CodeStubAssembler(state_).Unreachable();
  }

    compiler::TNode<Number> tmp119;
    ca_.Bind(&block1, &tmp119);
  return compiler::TNode<Number>{tmp119};
}

compiler::TNode<Number> DataViewBuiltinsFromDSLAssembler::LoadDataViewFloat64(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Number> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp1}));
    compiler::TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp5}));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp6}));
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp8}));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp9}));
    compiler::TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp11}));
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp12}));
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(4));
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp14}));
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp15}));
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(5));
    compiler::TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp17}));
    compiler::TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp18}));
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(6));
    compiler::TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp20}));
    compiler::TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp21}));
    compiler::TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(7));
    compiler::TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp23}));
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp24}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, tmp16, tmp19, tmp22, tmp25, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp26;
    compiler::TNode<UintPtrT> tmp27;
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<Uint32T> tmp30;
    compiler::TNode<Uint32T> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    ca_.Bind(&block2, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp33}, compiler::TNode<Uint32T>{tmp40}));
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp32}, compiler::TNode<Uint32T>{tmp42}));
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp41}, compiler::TNode<Uint32T>{tmp43}));
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp31}, compiler::TNode<Uint32T>{tmp45}));
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp44}, compiler::TNode<Uint32T>{tmp46}));
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp47}, compiler::TNode<Uint32T>{tmp30}));
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp37}, compiler::TNode<Uint32T>{tmp49}));
    compiler::TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp51}));
    compiler::TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp50}, compiler::TNode<Uint32T>{tmp52}));
    compiler::TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp35}, compiler::TNode<Uint32T>{tmp54}));
    compiler::TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp53}, compiler::TNode<Uint32T>{tmp55}));
    compiler::TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp56}, compiler::TNode<Uint32T>{tmp34}));
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp48, tmp57);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp58;
    compiler::TNode<UintPtrT> tmp59;
    compiler::TNode<BoolT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    ca_.Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<Uint32T> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp62}, compiler::TNode<Uint32T>{tmp72}));
    compiler::TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp63}, compiler::TNode<Uint32T>{tmp74}));
    compiler::TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp73}, compiler::TNode<Uint32T>{tmp75}));
    compiler::TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp64}, compiler::TNode<Uint32T>{tmp77}));
    compiler::TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp76}, compiler::TNode<Uint32T>{tmp78}));
    compiler::TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp79}, compiler::TNode<Uint32T>{tmp65}));
    compiler::TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp66}, compiler::TNode<Uint32T>{tmp81}));
    compiler::TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp67}, compiler::TNode<Uint32T>{tmp83}));
    compiler::TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp82}, compiler::TNode<Uint32T>{tmp84}));
    compiler::TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp68}, compiler::TNode<Uint32T>{tmp86}));
    compiler::TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp85}, compiler::TNode<Uint32T>{tmp87}));
    compiler::TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp88}, compiler::TNode<Uint32T>{tmp69}));
    ca_.Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp89, tmp80);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp90;
    compiler::TNode<UintPtrT> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<RawPtrT> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Uint32T> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    ca_.Bind(&block4, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    compiler::TNode<Float64T> tmp104;
    USE(tmp104);
    tmp104 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31(0));
    compiler::TNode<Float64T> tmp105;
    USE(tmp105);
    tmp105 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64InsertLowWord32(compiler::TNode<Float64T>{tmp104}, compiler::TNode<Uint32T>{tmp102}));
    compiler::TNode<Float64T> tmp106;
    USE(tmp106);
    tmp106 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64InsertHighWord32(compiler::TNode<Float64T>{tmp105}, compiler::TNode<Uint32T>{tmp103}));
    compiler::TNode<Number> tmp107;
    USE(tmp107);
    tmp107 = ca_.UncheckedCast<Number>(BaseBuiltinsFromDSLAssembler(state_).Convert22UT12ATHeapNumber5ATSmi9ATfloat64(compiler::TNode<Float64T>{tmp106}));
    ca_.Goto(&block1, tmp107);
  }

    compiler::TNode<Number> tmp108;
    ca_.Bind(&block1, &tmp108);
  return compiler::TNode<Number>{tmp108};
}

bool DataViewBuiltinsFromDSLAssembler::kPositiveBigInt() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return false;
}

bool DataViewBuiltinsFromDSLAssembler::kNegativeBigInt() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return true;
}

int31_t DataViewBuiltinsFromDSLAssembler::kZeroDigitBigInt() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 0;
}

int31_t DataViewBuiltinsFromDSLAssembler::kOneDigitBigInt() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 1;
}

int31_t DataViewBuiltinsFromDSLAssembler::kTwoDigitBigInt() {
  compiler::CodeAssemblerParameterizedLabel<> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0);

    ca_.Bind(&block0);
return 2;
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::CreateEmptyBigInt(compiler::TNode<BoolT> p_isPositive, int31_t p_length) {
  compiler::CodeAssemblerParameterizedLabel<BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BigInt> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BigInt> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BoolT, BigInt> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_isPositive);

  if (block0.is_used()) {
    compiler::TNode<BoolT> tmp0;
    ca_.Bind(&block0, &tmp0);
    compiler::TNode<IntPtrT> tmp1;
    USE(tmp1);
    tmp1 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(p_length));
    compiler::TNode<BigInt> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<BigInt>(CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp1}));
    ca_.Branch(tmp0, &block2, &block3, tmp0, tmp2);
  }

  if (block2.is_used()) {
    compiler::TNode<BoolT> tmp3;
    compiler::TNode<BigInt> tmp4;
    ca_.Bind(&block2, &tmp3, &tmp4);
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).DataViewEncodeBigIntBits(DataViewBuiltinsFromDSLAssembler(state_).kPositiveBigInt(), p_length));
    CodeStubAssembler(state_).StoreBigIntBitfield(compiler::TNode<BigInt>{tmp4}, compiler::TNode<Uint32T>{tmp5});
    ca_.Goto(&block4, tmp3, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<BoolT> tmp6;
    compiler::TNode<BigInt> tmp7;
    ca_.Bind(&block3, &tmp6, &tmp7);
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).DataViewEncodeBigIntBits(DataViewBuiltinsFromDSLAssembler(state_).kNegativeBigInt(), p_length));
    CodeStubAssembler(state_).StoreBigIntBitfield(compiler::TNode<BigInt>{tmp7}, compiler::TNode<Uint32T>{tmp8});
    ca_.Goto(&block4, tmp6, tmp7);
  }

  if (block4.is_used()) {
    compiler::TNode<BoolT> tmp9;
    compiler::TNode<BigInt> tmp10;
    ca_.Bind(&block4, &tmp9, &tmp10);
    ca_.Goto(&block1, tmp10);
  }

    compiler::TNode<BigInt> tmp11;
    ca_.Bind(&block1, &tmp11);
  return compiler::TNode<BigInt>{tmp11};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn64Bit(compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, IntPtrT, IntPtrT, IntPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    compiler::TNode<Uint32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Uint32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp0}, compiler::TNode<Uint32T>{tmp2}));
    ca_.Branch(tmp3, &block4, &block3, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Uint32T> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp5}, compiler::TNode<Uint32T>{tmp6}));
    ca_.Branch(tmp7, &block2, &block3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Uint32T> tmp8;
    compiler::TNode<Uint32T> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(DataViewBuiltinsFromDSLAssembler(state_).kZeroDigitBigInt()));
    compiler::TNode<BigInt> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BigInt>(CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp10}));
    ca_.Goto(&block1, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Uint32T> tmp12;
    compiler::TNode<Uint32T> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr8ATuint32(compiler::TNode<Uint32T>{tmp13}));
    compiler::TNode<IntPtrT> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp15}));
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr8ATuint32(compiler::TNode<Uint32T>{tmp12}));
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).Signed(compiler::TNode<UintPtrT>{tmp17}));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(32));
    compiler::TNode<IntPtrT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).WordShl(compiler::TNode<IntPtrT>{tmp16}, compiler::TNode<IntPtrT>{tmp19}));
    compiler::TNode<IntPtrT> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrAdd(compiler::TNode<IntPtrT>{tmp20}, compiler::TNode<IntPtrT>{tmp18}));
    if (p_signed) {
      ca_.Goto(&block5, tmp12, tmp13, tmp14, tmp16, tmp18, tmp21);
    } else {
      ca_.Goto(&block6, tmp12, tmp13, tmp14, tmp16, tmp18, tmp21);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<BoolT> tmp24;
    compiler::TNode<IntPtrT> tmp25;
    compiler::TNode<IntPtrT> tmp26;
    compiler::TNode<IntPtrT> tmp27;
    ca_.Bind(&block5, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27);
    compiler::TNode<IntPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrLessThan(compiler::TNode<IntPtrT>{tmp27}, compiler::TNode<IntPtrT>{tmp28}));
    ca_.Branch(tmp29, &block8, &block9, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27);
  }

  if (block8.is_used()) {
    compiler::TNode<Uint32T> tmp30;
    compiler::TNode<Uint32T> tmp31;
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<IntPtrT> tmp33;
    compiler::TNode<IntPtrT> tmp34;
    compiler::TNode<IntPtrT> tmp35;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    compiler::TNode<IntPtrT> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(0));
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).IntPtrSub(compiler::TNode<IntPtrT>{tmp37}, compiler::TNode<IntPtrT>{tmp35}));
    ca_.Goto(&block9, tmp30, tmp31, tmp36, tmp33, tmp34, tmp38);
  }

  if (block9.is_used()) {
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<BoolT> tmp41;
    compiler::TNode<IntPtrT> tmp42;
    compiler::TNode<IntPtrT> tmp43;
    compiler::TNode<IntPtrT> tmp44;
    ca_.Bind(&block9, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44);
    ca_.Goto(&block7, tmp39, tmp40, tmp41, tmp42, tmp43, tmp44);
  }

  if (block6.is_used()) {
    compiler::TNode<Uint32T> tmp45;
    compiler::TNode<Uint32T> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<IntPtrT> tmp48;
    compiler::TNode<IntPtrT> tmp49;
    compiler::TNode<IntPtrT> tmp50;
    ca_.Bind(&block6, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    ca_.Goto(&block7, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50);
  }

  if (block7.is_used()) {
    compiler::TNode<Uint32T> tmp51;
    compiler::TNode<Uint32T> tmp52;
    compiler::TNode<BoolT> tmp53;
    compiler::TNode<IntPtrT> tmp54;
    compiler::TNode<IntPtrT> tmp55;
    compiler::TNode<IntPtrT> tmp56;
    ca_.Bind(&block7, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    compiler::TNode<BigInt> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).CreateEmptyBigInt(compiler::TNode<BoolT>{tmp53}, DataViewBuiltinsFromDSLAssembler(state_).kOneDigitBigInt()));
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp56}));
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp57}, 0, compiler::TNode<UintPtrT>{tmp58});
    ca_.Goto(&block1, tmp57);
  }

    compiler::TNode<BigInt> tmp59;
    ca_.Bind(&block1, &tmp59);
  return compiler::TNode<BigInt>{tmp59};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigIntOn32Bit(compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T, BoolT, BoolT, Int32T, Int32T, BigInt> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    compiler::TNode<Uint32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Uint32T> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp0}, compiler::TNode<Uint32T>{tmp2}));
    ca_.Branch(tmp3, &block4, &block3, tmp0, tmp1);
  }

  if (block4.is_used()) {
    compiler::TNode<Uint32T> tmp4;
    compiler::TNode<Uint32T> tmp5;
    ca_.Bind(&block4, &tmp4, &tmp5);
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32Equal(compiler::TNode<Uint32T>{tmp5}, compiler::TNode<Uint32T>{tmp6}));
    ca_.Branch(tmp7, &block2, &block3, tmp4, tmp5);
  }

  if (block2.is_used()) {
    compiler::TNode<Uint32T> tmp8;
    compiler::TNode<Uint32T> tmp9;
    ca_.Bind(&block2, &tmp8, &tmp9);
    compiler::TNode<IntPtrT> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(DataViewBuiltinsFromDSLAssembler(state_).kZeroDigitBigInt()));
    compiler::TNode<BigInt> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<BigInt>(CodeStubAssembler(state_).AllocateBigInt(compiler::TNode<IntPtrT>{tmp10}));
    ca_.Goto(&block1, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Uint32T> tmp12;
    compiler::TNode<Uint32T> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<BoolT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    compiler::TNode<BoolT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    compiler::TNode<Int32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp12}));
    compiler::TNode<Int32T> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp13}));
    compiler::TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp13}, compiler::TNode<Uint32T>{tmp18}));
    ca_.Branch(tmp19, &block5, &block6, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Uint32T> tmp20;
    compiler::TNode<Uint32T> tmp21;
    compiler::TNode<BoolT> tmp22;
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<Int32T> tmp24;
    compiler::TNode<Int32T> tmp25;
    ca_.Bind(&block5, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    if (p_signed) {
      ca_.Goto(&block7, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
    } else {
      ca_.Goto(&block8, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Uint32T> tmp26;
    compiler::TNode<Uint32T> tmp27;
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<BoolT> tmp29;
    compiler::TNode<Int32T> tmp30;
    compiler::TNode<Int32T> tmp31;
    ca_.Bind(&block7, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31);
    compiler::TNode<Int32T> tmp32;
    USE(tmp32);
    tmp32 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp33;
    USE(tmp33);
    tmp33 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Int32LessThan(compiler::TNode<Int32T>{tmp31}, compiler::TNode<Int32T>{tmp32}));
    ca_.Branch(tmp33, &block10, &block11, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31);
  }

  if (block10.is_used()) {
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<BoolT> tmp36;
    compiler::TNode<BoolT> tmp37;
    compiler::TNode<Int32T> tmp38;
    compiler::TNode<Int32T> tmp39;
    ca_.Bind(&block10, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(false));
    compiler::TNode<Int32T> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<Int32T> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp41}, compiler::TNode<Int32T>{tmp39}));
    compiler::TNode<Int32T> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Int32T>{tmp38}, compiler::TNode<Int32T>{tmp43}));
    ca_.Branch(tmp44, &block13, &block14, tmp34, tmp35, tmp36, tmp40, tmp38, tmp42);
  }

  if (block13.is_used()) {
    compiler::TNode<Uint32T> tmp45;
    compiler::TNode<Uint32T> tmp46;
    compiler::TNode<BoolT> tmp47;
    compiler::TNode<BoolT> tmp48;
    compiler::TNode<Int32T> tmp49;
    compiler::TNode<Int32T> tmp50;
    ca_.Bind(&block13, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Int32T> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(1));
    compiler::TNode<Int32T> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp50}, compiler::TNode<Int32T>{tmp51}));
    ca_.Goto(&block14, tmp45, tmp46, tmp47, tmp48, tmp49, tmp52);
  }

  if (block14.is_used()) {
    compiler::TNode<Uint32T> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<BoolT> tmp55;
    compiler::TNode<BoolT> tmp56;
    compiler::TNode<Int32T> tmp57;
    compiler::TNode<Int32T> tmp58;
    ca_.Bind(&block14, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58);
    compiler::TNode<Int32T> tmp59;
    USE(tmp59);
    tmp59 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<Int32T> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp59}, compiler::TNode<Int32T>{tmp57}));
    compiler::TNode<Int32T> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Int32T>{tmp58}, compiler::TNode<Int32T>{tmp61}));
    ca_.Branch(tmp62, &block15, &block16, tmp53, tmp54, tmp55, tmp56, tmp60, tmp58);
  }

  if (block15.is_used()) {
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<BoolT> tmp65;
    compiler::TNode<BoolT> tmp66;
    compiler::TNode<Int32T> tmp67;
    compiler::TNode<Int32T> tmp68;
    ca_.Bind(&block15, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    compiler::TNode<BoolT> tmp69;
    USE(tmp69);
    tmp69 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block16, tmp63, tmp64, tmp69, tmp66, tmp67, tmp68);
  }

  if (block16.is_used()) {
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    compiler::TNode<BoolT> tmp72;
    compiler::TNode<BoolT> tmp73;
    compiler::TNode<Int32T> tmp74;
    compiler::TNode<Int32T> tmp75;
    ca_.Bind(&block16, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75);
    ca_.Goto(&block12, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75);
  }

  if (block11.is_used()) {
    compiler::TNode<Uint32T> tmp76;
    compiler::TNode<Uint32T> tmp77;
    compiler::TNode<BoolT> tmp78;
    compiler::TNode<BoolT> tmp79;
    compiler::TNode<Int32T> tmp80;
    compiler::TNode<Int32T> tmp81;
    ca_.Bind(&block11, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81);
    compiler::TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block12, tmp76, tmp77, tmp82, tmp79, tmp80, tmp81);
  }

  if (block12.is_used()) {
    compiler::TNode<Uint32T> tmp83;
    compiler::TNode<Uint32T> tmp84;
    compiler::TNode<BoolT> tmp85;
    compiler::TNode<BoolT> tmp86;
    compiler::TNode<Int32T> tmp87;
    compiler::TNode<Int32T> tmp88;
    ca_.Bind(&block12, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88);
    ca_.Goto(&block9, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88);
  }

  if (block8.is_used()) {
    compiler::TNode<Uint32T> tmp89;
    compiler::TNode<Uint32T> tmp90;
    compiler::TNode<BoolT> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<Int32T> tmp93;
    compiler::TNode<Int32T> tmp94;
    ca_.Bind(&block8, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94);
    compiler::TNode<BoolT> tmp95;
    USE(tmp95);
    tmp95 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr6ATbool16ATconstexpr_bool(true));
    ca_.Goto(&block9, tmp89, tmp90, tmp95, tmp92, tmp93, tmp94);
  }

  if (block9.is_used()) {
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<BoolT> tmp98;
    compiler::TNode<BoolT> tmp99;
    compiler::TNode<Int32T> tmp100;
    compiler::TNode<Int32T> tmp101;
    ca_.Bind(&block9, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block6, tmp96, tmp97, tmp98, tmp99, tmp100, tmp101);
  }

  if (block6.is_used()) {
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    compiler::TNode<BoolT> tmp104;
    compiler::TNode<BoolT> tmp105;
    compiler::TNode<Int32T> tmp106;
    compiler::TNode<Int32T> tmp107;
    ca_.Bind(&block6, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    ca_.Branch(tmp104, &block17, &block18, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, ca_.Uninitialized<BigInt>());
  }

  if (block17.is_used()) {
    compiler::TNode<Uint32T> tmp108;
    compiler::TNode<Uint32T> tmp109;
    compiler::TNode<BoolT> tmp110;
    compiler::TNode<BoolT> tmp111;
    compiler::TNode<Int32T> tmp112;
    compiler::TNode<Int32T> tmp113;
    compiler::TNode<BigInt> tmp114;
    ca_.Bind(&block17, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114);
    compiler::TNode<BigInt> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).CreateEmptyBigInt(compiler::TNode<BoolT>{tmp111}, DataViewBuiltinsFromDSLAssembler(state_).kTwoDigitBigInt()));
    ca_.Goto(&block19, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp115);
  }

  if (block18.is_used()) {
    compiler::TNode<Uint32T> tmp116;
    compiler::TNode<Uint32T> tmp117;
    compiler::TNode<BoolT> tmp118;
    compiler::TNode<BoolT> tmp119;
    compiler::TNode<Int32T> tmp120;
    compiler::TNode<Int32T> tmp121;
    compiler::TNode<BigInt> tmp122;
    ca_.Bind(&block18, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    compiler::TNode<BigInt> tmp123;
    USE(tmp123);
    tmp123 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).CreateEmptyBigInt(compiler::TNode<BoolT>{tmp119}, DataViewBuiltinsFromDSLAssembler(state_).kOneDigitBigInt()));
    ca_.Goto(&block19, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123);
  }

  if (block19.is_used()) {
    compiler::TNode<Uint32T> tmp124;
    compiler::TNode<Uint32T> tmp125;
    compiler::TNode<BoolT> tmp126;
    compiler::TNode<BoolT> tmp127;
    compiler::TNode<Int32T> tmp128;
    compiler::TNode<Int32T> tmp129;
    compiler::TNode<BigInt> tmp130;
    ca_.Bind(&block19, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130);
    compiler::TNode<IntPtrT> tmp131;
    USE(tmp131);
    tmp131 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr7ATint32(compiler::TNode<Int32T>{tmp128}));
    compiler::TNode<UintPtrT> tmp132;
    USE(tmp132);
    tmp132 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp131}));
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp130}, 0, compiler::TNode<UintPtrT>{tmp132});
    ca_.Branch(tmp126, &block20, &block21, tmp124, tmp125, tmp126, tmp127, tmp128, tmp129, tmp130);
  }

  if (block20.is_used()) {
    compiler::TNode<Uint32T> tmp133;
    compiler::TNode<Uint32T> tmp134;
    compiler::TNode<BoolT> tmp135;
    compiler::TNode<BoolT> tmp136;
    compiler::TNode<Int32T> tmp137;
    compiler::TNode<Int32T> tmp138;
    compiler::TNode<BigInt> tmp139;
    ca_.Bind(&block20, &tmp133, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139);
    compiler::TNode<IntPtrT> tmp140;
    USE(tmp140);
    tmp140 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATintptr7ATint32(compiler::TNode<Int32T>{tmp138}));
    compiler::TNode<UintPtrT> tmp141;
    USE(tmp141);
    tmp141 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).Unsigned(compiler::TNode<IntPtrT>{tmp140}));
    CodeStubAssembler(state_).StoreBigIntDigit(compiler::TNode<BigInt>{tmp139}, 1, compiler::TNode<UintPtrT>{tmp141});
    ca_.Goto(&block21, tmp133, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139);
  }

  if (block21.is_used()) {
    compiler::TNode<Uint32T> tmp142;
    compiler::TNode<Uint32T> tmp143;
    compiler::TNode<BoolT> tmp144;
    compiler::TNode<BoolT> tmp145;
    compiler::TNode<Int32T> tmp146;
    compiler::TNode<Int32T> tmp147;
    compiler::TNode<BigInt> tmp148;
    ca_.Bind(&block21, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    ca_.Goto(&block1, tmp148);
  }

    compiler::TNode<BigInt> tmp149;
    ca_.Bind(&block1, &tmp149);
  return compiler::TNode<BigInt>{tmp149};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::MakeBigInt(compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_lowWord, p_highWord);

  if (block0.is_used()) {
    compiler::TNode<Uint32T> tmp0;
    compiler::TNode<Uint32T> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    if ((CodeStubAssembler(state_).Is64())) {
      ca_.Goto(&block2, tmp0, tmp1);
    } else {
      ca_.Goto(&block3, tmp0, tmp1);
    }
  }

  if (block2.is_used()) {
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<Uint32T> tmp3;
    ca_.Bind(&block2, &tmp2, &tmp3);
    compiler::TNode<BigInt> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).MakeBigIntOn64Bit(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp3}, p_signed));
    ca_.Goto(&block1, tmp4);
  }

  if (block3.is_used()) {
    compiler::TNode<Uint32T> tmp5;
    compiler::TNode<Uint32T> tmp6;
    ca_.Bind(&block3, &tmp5, &tmp6);
    compiler::TNode<BigInt> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).MakeBigIntOn32Bit(compiler::TNode<Uint32T>{tmp5}, compiler::TNode<Uint32T>{tmp6}, p_signed));
    ca_.Goto(&block1, tmp7);
  }

    compiler::TNode<BigInt> tmp8;
    ca_.Bind(&block1, &tmp8);
  return compiler::TNode<BigInt>{tmp8};
}

compiler::TNode<BigInt> DataViewBuiltinsFromDSLAssembler::LoadDataViewBigInt(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BoolT> p_requestedLittleEndian, bool p_signed) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<BigInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BoolT> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp1}));
    compiler::TNode<UintPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp5}));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp6}));
    compiler::TNode<UintPtrT> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp8}));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp9}));
    compiler::TNode<UintPtrT> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp11}));
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp12}));
    compiler::TNode<UintPtrT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(4));
    compiler::TNode<UintPtrT> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp14}));
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp15}));
    compiler::TNode<UintPtrT> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(5));
    compiler::TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp17}));
    compiler::TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp18}));
    compiler::TNode<UintPtrT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(6));
    compiler::TNode<UintPtrT> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp20}));
    compiler::TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp21}));
    compiler::TNode<UintPtrT> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(7));
    compiler::TNode<UintPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<UintPtrT>{tmp23}));
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).LoadUint8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp24}));
    ca_.Branch(tmp2, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp7, tmp10, tmp13, tmp16, tmp19, tmp22, tmp25, ca_.Uninitialized<Uint32T>(), ca_.Uninitialized<Uint32T>());
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp26;
    compiler::TNode<UintPtrT> tmp27;
    compiler::TNode<BoolT> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<Uint32T> tmp30;
    compiler::TNode<Uint32T> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    ca_.Bind(&block2, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39);
    compiler::TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp33}, compiler::TNode<Uint32T>{tmp40}));
    compiler::TNode<Uint32T> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp32}, compiler::TNode<Uint32T>{tmp42}));
    compiler::TNode<Uint32T> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp41}, compiler::TNode<Uint32T>{tmp43}));
    compiler::TNode<Uint32T> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp31}, compiler::TNode<Uint32T>{tmp45}));
    compiler::TNode<Uint32T> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp44}, compiler::TNode<Uint32T>{tmp46}));
    compiler::TNode<Uint32T> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp47}, compiler::TNode<Uint32T>{tmp30}));
    compiler::TNode<Uint32T> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp37}, compiler::TNode<Uint32T>{tmp49}));
    compiler::TNode<Uint32T> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp36}, compiler::TNode<Uint32T>{tmp51}));
    compiler::TNode<Uint32T> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp50}, compiler::TNode<Uint32T>{tmp52}));
    compiler::TNode<Uint32T> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp35}, compiler::TNode<Uint32T>{tmp54}));
    compiler::TNode<Uint32T> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp53}, compiler::TNode<Uint32T>{tmp55}));
    compiler::TNode<Uint32T> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp56}, compiler::TNode<Uint32T>{tmp34}));
    ca_.Goto(&block4, tmp26, tmp27, tmp28, tmp29, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp48, tmp57);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp58;
    compiler::TNode<UintPtrT> tmp59;
    compiler::TNode<BoolT> tmp60;
    compiler::TNode<RawPtrT> tmp61;
    compiler::TNode<Uint32T> tmp62;
    compiler::TNode<Uint32T> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    ca_.Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    compiler::TNode<Uint32T> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp62}, compiler::TNode<Uint32T>{tmp72}));
    compiler::TNode<Uint32T> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp63}, compiler::TNode<Uint32T>{tmp74}));
    compiler::TNode<Uint32T> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp73}, compiler::TNode<Uint32T>{tmp75}));
    compiler::TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp64}, compiler::TNode<Uint32T>{tmp77}));
    compiler::TNode<Uint32T> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp76}, compiler::TNode<Uint32T>{tmp78}));
    compiler::TNode<Uint32T> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp79}, compiler::TNode<Uint32T>{tmp65}));
    compiler::TNode<Uint32T> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp66}, compiler::TNode<Uint32T>{tmp81}));
    compiler::TNode<Uint32T> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp67}, compiler::TNode<Uint32T>{tmp83}));
    compiler::TNode<Uint32T> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp82}, compiler::TNode<Uint32T>{tmp84}));
    compiler::TNode<Uint32T> tmp86;
    USE(tmp86);
    tmp86 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp87;
    USE(tmp87);
    tmp87 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shl(compiler::TNode<Uint32T>{tmp68}, compiler::TNode<Uint32T>{tmp86}));
    compiler::TNode<Uint32T> tmp88;
    USE(tmp88);
    tmp88 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp85}, compiler::TNode<Uint32T>{tmp87}));
    compiler::TNode<Uint32T> tmp89;
    USE(tmp89);
    tmp89 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Or(compiler::TNode<Uint32T>{tmp88}, compiler::TNode<Uint32T>{tmp69}));
    ca_.Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp89, tmp80);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp90;
    compiler::TNode<UintPtrT> tmp91;
    compiler::TNode<BoolT> tmp92;
    compiler::TNode<RawPtrT> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    compiler::TNode<Uint32T> tmp101;
    compiler::TNode<Uint32T> tmp102;
    compiler::TNode<Uint32T> tmp103;
    ca_.Bind(&block4, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103);
    compiler::TNode<BigInt> tmp104;
    USE(tmp104);
    tmp104 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).MakeBigInt(compiler::TNode<Uint32T>{tmp102}, compiler::TNode<Uint32T>{tmp103}, p_signed));
    ca_.Goto(&block1, tmp104);
  }

    compiler::TNode<BigInt> tmp105;
    ca_.Bind(&block1, &tmp105);
  return compiler::TNode<BigInt>{tmp105};
}

compiler::TNode<Numeric> DataViewBuiltinsFromDSLAssembler::DataViewGet(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block37(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT> block38(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Numeric> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<String> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<String>(DataViewBuiltinsFromDSLAssembler(state_).MakeDataViewGetterNameString(p_kind));
    compiler::TNode<JSDataView> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<JSDataView>(DataViewBuiltinsFromDSLAssembler(state_).ValidateDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp4}));
    compiler::TNode<Number> tmp6;
    USE(tmp6);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp6 = BaseBuiltinsFromDSLAssembler(state_).ToIndex(compiler::TNode<Object>{tmp2}, compiler::TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp6);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp5, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<JSDataView> tmp11;
    compiler::TNode<Number> tmp12;
    compiler::TNode<Object> tmp13;
    compiler::TNode<Context> tmp14;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14);
    ca_.Goto(&block3, tmp7, tmp8, tmp9, tmp10, tmp11, tmp12);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<JSDataView> tmp19;
    compiler::TNode<Number> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<Context> tmp22;
    compiler::TNode<Number> tmp23;
    ca_.Bind(&block4, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23);
    ca_.Goto(&block2, tmp15, tmp16, tmp17, tmp18, tmp19, tmp23);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp24;
    compiler::TNode<Object> tmp25;
    compiler::TNode<Object> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<JSDataView> tmp28;
    compiler::TNode<Number> tmp29;
    ca_.Bind(&block3, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp24}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<JSDataView> tmp34;
    compiler::TNode<Number> tmp35;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    compiler::TNode<BoolT> tmp36;
    USE(tmp36);
    tmp36 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).ToBoolean(compiler::TNode<Object>{tmp33}));
    compiler::TNode<JSArrayBuffer> tmp37;
    USE(tmp37);
    tmp37 = ca_.UncheckedCast<JSArrayBuffer>(CodeStubAssembler(state_).LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView>{tmp34}));
    compiler::TNode<BoolT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp37}));
    ca_.Branch(tmp38, &block6, &block7, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp39;
    compiler::TNode<Object> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSDataView> tmp43;
    compiler::TNode<Number> tmp44;
    compiler::TNode<BoolT> tmp45;
    compiler::TNode<JSArrayBuffer> tmp46;
    ca_.Bind(&block6, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<String> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<String>(DataViewBuiltinsFromDSLAssembler(state_).MakeDataViewGetterNameString(p_kind));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp39}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp47});
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<Object> tmp51;
    compiler::TNode<JSDataView> tmp52;
    compiler::TNode<Number> tmp53;
    compiler::TNode<BoolT> tmp54;
    compiler::TNode<JSArrayBuffer> tmp55;
    ca_.Bind(&block7, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    compiler::TNode<Float64T> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp53}));
    compiler::TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr9ATfloat64(compiler::TNode<Float64T>{tmp56}));
    compiler::TNode<UintPtrT> tmp58;
    USE(tmp58);
    tmp58 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView>{tmp52}));
    compiler::TNode<UintPtrT> tmp59;
    USE(tmp59);
    tmp59 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView>{tmp52}));
    compiler::TNode<Float64T> tmp60;
    USE(tmp60);
    tmp60 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat649ATuintptr(compiler::TNode<UintPtrT>{tmp59}));
    compiler::TNode<Float64T> tmp61;
    USE(tmp61);
    tmp61 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31((DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind))));
    compiler::TNode<Float64T> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp56}, compiler::TNode<Float64T>{tmp61}));
    compiler::TNode<BoolT> tmp63;
    USE(tmp63);
    tmp63 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp62}, compiler::TNode<Float64T>{tmp60}));
    ca_.Branch(tmp63, &block8, &block9, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp60, tmp61);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp64;
    compiler::TNode<Object> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<JSDataView> tmp68;
    compiler::TNode<Number> tmp69;
    compiler::TNode<BoolT> tmp70;
    compiler::TNode<JSArrayBuffer> tmp71;
    compiler::TNode<Float64T> tmp72;
    compiler::TNode<UintPtrT> tmp73;
    compiler::TNode<UintPtrT> tmp74;
    compiler::TNode<Float64T> tmp75;
    compiler::TNode<Float64T> tmp76;
    ca_.Bind(&block8, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp64}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp77;
    compiler::TNode<Object> tmp78;
    compiler::TNode<Object> tmp79;
    compiler::TNode<Object> tmp80;
    compiler::TNode<JSDataView> tmp81;
    compiler::TNode<Number> tmp82;
    compiler::TNode<BoolT> tmp83;
    compiler::TNode<JSArrayBuffer> tmp84;
    compiler::TNode<Float64T> tmp85;
    compiler::TNode<UintPtrT> tmp86;
    compiler::TNode<UintPtrT> tmp87;
    compiler::TNode<Float64T> tmp88;
    compiler::TNode<Float64T> tmp89;
    ca_.Bind(&block9, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89);
    compiler::TNode<UintPtrT> tmp90;
    USE(tmp90);
    tmp90 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp86}, compiler::TNode<UintPtrT>{tmp87}));
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS))) {
      ca_.Goto(&block10, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
    } else {
      ca_.Goto(&block11, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp91;
    compiler::TNode<Object> tmp92;
    compiler::TNode<Object> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<JSDataView> tmp95;
    compiler::TNode<Number> tmp96;
    compiler::TNode<BoolT> tmp97;
    compiler::TNode<JSArrayBuffer> tmp98;
    compiler::TNode<Float64T> tmp99;
    compiler::TNode<UintPtrT> tmp100;
    compiler::TNode<UintPtrT> tmp101;
    compiler::TNode<Float64T> tmp102;
    compiler::TNode<Float64T> tmp103;
    compiler::TNode<UintPtrT> tmp104;
    ca_.Bind(&block10, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104);
    compiler::TNode<Smi> tmp105;
    USE(tmp105);
    tmp105 = ca_.UncheckedCast<Smi>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView8(compiler::TNode<JSArrayBuffer>{tmp98}, compiler::TNode<UintPtrT>{tmp104}, false));
    ca_.Goto(&block1, tmp105);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp106;
    compiler::TNode<Object> tmp107;
    compiler::TNode<Object> tmp108;
    compiler::TNode<Object> tmp109;
    compiler::TNode<JSDataView> tmp110;
    compiler::TNode<Number> tmp111;
    compiler::TNode<BoolT> tmp112;
    compiler::TNode<JSArrayBuffer> tmp113;
    compiler::TNode<Float64T> tmp114;
    compiler::TNode<UintPtrT> tmp115;
    compiler::TNode<UintPtrT> tmp116;
    compiler::TNode<Float64T> tmp117;
    compiler::TNode<Float64T> tmp118;
    compiler::TNode<UintPtrT> tmp119;
    ca_.Bind(&block11, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS))) {
      ca_.Goto(&block13, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
    } else {
      ca_.Goto(&block14, tmp106, tmp107, tmp108, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119);
    }
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp120;
    compiler::TNode<Object> tmp121;
    compiler::TNode<Object> tmp122;
    compiler::TNode<Object> tmp123;
    compiler::TNode<JSDataView> tmp124;
    compiler::TNode<Number> tmp125;
    compiler::TNode<BoolT> tmp126;
    compiler::TNode<JSArrayBuffer> tmp127;
    compiler::TNode<Float64T> tmp128;
    compiler::TNode<UintPtrT> tmp129;
    compiler::TNode<UintPtrT> tmp130;
    compiler::TNode<Float64T> tmp131;
    compiler::TNode<Float64T> tmp132;
    compiler::TNode<UintPtrT> tmp133;
    ca_.Bind(&block13, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133);
    compiler::TNode<Smi> tmp134;
    USE(tmp134);
    tmp134 = ca_.UncheckedCast<Smi>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView8(compiler::TNode<JSArrayBuffer>{tmp127}, compiler::TNode<UintPtrT>{tmp133}, true));
    ca_.Goto(&block1, tmp134);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<JSDataView> tmp139;
    compiler::TNode<Number> tmp140;
    compiler::TNode<BoolT> tmp141;
    compiler::TNode<JSArrayBuffer> tmp142;
    compiler::TNode<Float64T> tmp143;
    compiler::TNode<UintPtrT> tmp144;
    compiler::TNode<UintPtrT> tmp145;
    compiler::TNode<Float64T> tmp146;
    compiler::TNode<Float64T> tmp147;
    compiler::TNode<UintPtrT> tmp148;
    ca_.Bind(&block14, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS))) {
      ca_.Goto(&block16, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
    } else {
      ca_.Goto(&block17, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148);
    }
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp149;
    compiler::TNode<Object> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSDataView> tmp153;
    compiler::TNode<Number> tmp154;
    compiler::TNode<BoolT> tmp155;
    compiler::TNode<JSArrayBuffer> tmp156;
    compiler::TNode<Float64T> tmp157;
    compiler::TNode<UintPtrT> tmp158;
    compiler::TNode<UintPtrT> tmp159;
    compiler::TNode<Float64T> tmp160;
    compiler::TNode<Float64T> tmp161;
    compiler::TNode<UintPtrT> tmp162;
    ca_.Bind(&block16, &tmp149, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162);
    compiler::TNode<Number> tmp163;
    USE(tmp163);
    tmp163 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView16(compiler::TNode<JSArrayBuffer>{tmp156}, compiler::TNode<UintPtrT>{tmp162}, compiler::TNode<BoolT>{tmp155}, false));
    ca_.Goto(&block1, tmp163);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp164;
    compiler::TNode<Object> tmp165;
    compiler::TNode<Object> tmp166;
    compiler::TNode<Object> tmp167;
    compiler::TNode<JSDataView> tmp168;
    compiler::TNode<Number> tmp169;
    compiler::TNode<BoolT> tmp170;
    compiler::TNode<JSArrayBuffer> tmp171;
    compiler::TNode<Float64T> tmp172;
    compiler::TNode<UintPtrT> tmp173;
    compiler::TNode<UintPtrT> tmp174;
    compiler::TNode<Float64T> tmp175;
    compiler::TNode<Float64T> tmp176;
    compiler::TNode<UintPtrT> tmp177;
    ca_.Bind(&block17, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS))) {
      ca_.Goto(&block19, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    } else {
      ca_.Goto(&block20, tmp164, tmp165, tmp166, tmp167, tmp168, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<Object> tmp181;
    compiler::TNode<JSDataView> tmp182;
    compiler::TNode<Number> tmp183;
    compiler::TNode<BoolT> tmp184;
    compiler::TNode<JSArrayBuffer> tmp185;
    compiler::TNode<Float64T> tmp186;
    compiler::TNode<UintPtrT> tmp187;
    compiler::TNode<UintPtrT> tmp188;
    compiler::TNode<Float64T> tmp189;
    compiler::TNode<Float64T> tmp190;
    compiler::TNode<UintPtrT> tmp191;
    ca_.Bind(&block19, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191);
    compiler::TNode<Number> tmp192;
    USE(tmp192);
    tmp192 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView16(compiler::TNode<JSArrayBuffer>{tmp185}, compiler::TNode<UintPtrT>{tmp191}, compiler::TNode<BoolT>{tmp184}, true));
    ca_.Goto(&block1, tmp192);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    compiler::TNode<Object> tmp196;
    compiler::TNode<JSDataView> tmp197;
    compiler::TNode<Number> tmp198;
    compiler::TNode<BoolT> tmp199;
    compiler::TNode<JSArrayBuffer> tmp200;
    compiler::TNode<Float64T> tmp201;
    compiler::TNode<UintPtrT> tmp202;
    compiler::TNode<UintPtrT> tmp203;
    compiler::TNode<Float64T> tmp204;
    compiler::TNode<Float64T> tmp205;
    compiler::TNode<UintPtrT> tmp206;
    ca_.Bind(&block20, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202, &tmp203, &tmp204, &tmp205, &tmp206);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS))) {
      ca_.Goto(&block22, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
    } else {
      ca_.Goto(&block23, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202, tmp203, tmp204, tmp205, tmp206);
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<Object> tmp209;
    compiler::TNode<Object> tmp210;
    compiler::TNode<JSDataView> tmp211;
    compiler::TNode<Number> tmp212;
    compiler::TNode<BoolT> tmp213;
    compiler::TNode<JSArrayBuffer> tmp214;
    compiler::TNode<Float64T> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    compiler::TNode<UintPtrT> tmp217;
    compiler::TNode<Float64T> tmp218;
    compiler::TNode<Float64T> tmp219;
    compiler::TNode<UintPtrT> tmp220;
    ca_.Bind(&block22, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220);
    compiler::TNode<Number> tmp221;
    USE(tmp221);
    tmp221 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView32(compiler::TNode<JSArrayBuffer>{tmp214}, compiler::TNode<UintPtrT>{tmp220}, compiler::TNode<BoolT>{tmp213}, p_kind));
    ca_.Goto(&block1, tmp221);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<JSDataView> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<BoolT> tmp228;
    compiler::TNode<JSArrayBuffer> tmp229;
    compiler::TNode<Float64T> tmp230;
    compiler::TNode<UintPtrT> tmp231;
    compiler::TNode<UintPtrT> tmp232;
    compiler::TNode<Float64T> tmp233;
    compiler::TNode<Float64T> tmp234;
    compiler::TNode<UintPtrT> tmp235;
    ca_.Bind(&block23, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS))) {
      ca_.Goto(&block25, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235);
    } else {
      ca_.Goto(&block26, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235);
    }
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp236;
    compiler::TNode<Object> tmp237;
    compiler::TNode<Object> tmp238;
    compiler::TNode<Object> tmp239;
    compiler::TNode<JSDataView> tmp240;
    compiler::TNode<Number> tmp241;
    compiler::TNode<BoolT> tmp242;
    compiler::TNode<JSArrayBuffer> tmp243;
    compiler::TNode<Float64T> tmp244;
    compiler::TNode<UintPtrT> tmp245;
    compiler::TNode<UintPtrT> tmp246;
    compiler::TNode<Float64T> tmp247;
    compiler::TNode<Float64T> tmp248;
    compiler::TNode<UintPtrT> tmp249;
    ca_.Bind(&block25, &tmp236, &tmp237, &tmp238, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249);
    compiler::TNode<Number> tmp250;
    USE(tmp250);
    tmp250 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView32(compiler::TNode<JSArrayBuffer>{tmp243}, compiler::TNode<UintPtrT>{tmp249}, compiler::TNode<BoolT>{tmp242}, p_kind));
    ca_.Goto(&block1, tmp250);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp251;
    compiler::TNode<Object> tmp252;
    compiler::TNode<Object> tmp253;
    compiler::TNode<Object> tmp254;
    compiler::TNode<JSDataView> tmp255;
    compiler::TNode<Number> tmp256;
    compiler::TNode<BoolT> tmp257;
    compiler::TNode<JSArrayBuffer> tmp258;
    compiler::TNode<Float64T> tmp259;
    compiler::TNode<UintPtrT> tmp260;
    compiler::TNode<UintPtrT> tmp261;
    compiler::TNode<Float64T> tmp262;
    compiler::TNode<Float64T> tmp263;
    compiler::TNode<UintPtrT> tmp264;
    ca_.Bind(&block26, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      ca_.Goto(&block28, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264);
    } else {
      ca_.Goto(&block29, tmp251, tmp252, tmp253, tmp254, tmp255, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264);
    }
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp265;
    compiler::TNode<Object> tmp266;
    compiler::TNode<Object> tmp267;
    compiler::TNode<Object> tmp268;
    compiler::TNode<JSDataView> tmp269;
    compiler::TNode<Number> tmp270;
    compiler::TNode<BoolT> tmp271;
    compiler::TNode<JSArrayBuffer> tmp272;
    compiler::TNode<Float64T> tmp273;
    compiler::TNode<UintPtrT> tmp274;
    compiler::TNode<UintPtrT> tmp275;
    compiler::TNode<Float64T> tmp276;
    compiler::TNode<Float64T> tmp277;
    compiler::TNode<UintPtrT> tmp278;
    ca_.Bind(&block28, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272, &tmp273, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278);
    compiler::TNode<Number> tmp279;
    USE(tmp279);
    tmp279 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataView32(compiler::TNode<JSArrayBuffer>{tmp272}, compiler::TNode<UintPtrT>{tmp278}, compiler::TNode<BoolT>{tmp271}, p_kind));
    ca_.Goto(&block1, tmp279);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp280;
    compiler::TNode<Object> tmp281;
    compiler::TNode<Object> tmp282;
    compiler::TNode<Object> tmp283;
    compiler::TNode<JSDataView> tmp284;
    compiler::TNode<Number> tmp285;
    compiler::TNode<BoolT> tmp286;
    compiler::TNode<JSArrayBuffer> tmp287;
    compiler::TNode<Float64T> tmp288;
    compiler::TNode<UintPtrT> tmp289;
    compiler::TNode<UintPtrT> tmp290;
    compiler::TNode<Float64T> tmp291;
    compiler::TNode<Float64T> tmp292;
    compiler::TNode<UintPtrT> tmp293;
    ca_.Bind(&block29, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290, &tmp291, &tmp292, &tmp293);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      ca_.Goto(&block31, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293);
    } else {
      ca_.Goto(&block32, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290, tmp291, tmp292, tmp293);
    }
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp294;
    compiler::TNode<Object> tmp295;
    compiler::TNode<Object> tmp296;
    compiler::TNode<Object> tmp297;
    compiler::TNode<JSDataView> tmp298;
    compiler::TNode<Number> tmp299;
    compiler::TNode<BoolT> tmp300;
    compiler::TNode<JSArrayBuffer> tmp301;
    compiler::TNode<Float64T> tmp302;
    compiler::TNode<UintPtrT> tmp303;
    compiler::TNode<UintPtrT> tmp304;
    compiler::TNode<Float64T> tmp305;
    compiler::TNode<Float64T> tmp306;
    compiler::TNode<UintPtrT> tmp307;
    ca_.Bind(&block31, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307);
    compiler::TNode<Number> tmp308;
    USE(tmp308);
    tmp308 = ca_.UncheckedCast<Number>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataViewFloat64(compiler::TNode<JSArrayBuffer>{tmp301}, compiler::TNode<UintPtrT>{tmp307}, compiler::TNode<BoolT>{tmp300}));
    ca_.Goto(&block1, tmp308);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp309;
    compiler::TNode<Object> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Object> tmp312;
    compiler::TNode<JSDataView> tmp313;
    compiler::TNode<Number> tmp314;
    compiler::TNode<BoolT> tmp315;
    compiler::TNode<JSArrayBuffer> tmp316;
    compiler::TNode<Float64T> tmp317;
    compiler::TNode<UintPtrT> tmp318;
    compiler::TNode<UintPtrT> tmp319;
    compiler::TNode<Float64T> tmp320;
    compiler::TNode<Float64T> tmp321;
    compiler::TNode<UintPtrT> tmp322;
    ca_.Bind(&block32, &tmp309, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS))) {
      ca_.Goto(&block34, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
    } else {
      ca_.Goto(&block35, tmp309, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322);
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp323;
    compiler::TNode<Object> tmp324;
    compiler::TNode<Object> tmp325;
    compiler::TNode<Object> tmp326;
    compiler::TNode<JSDataView> tmp327;
    compiler::TNode<Number> tmp328;
    compiler::TNode<BoolT> tmp329;
    compiler::TNode<JSArrayBuffer> tmp330;
    compiler::TNode<Float64T> tmp331;
    compiler::TNode<UintPtrT> tmp332;
    compiler::TNode<UintPtrT> tmp333;
    compiler::TNode<Float64T> tmp334;
    compiler::TNode<Float64T> tmp335;
    compiler::TNode<UintPtrT> tmp336;
    ca_.Bind(&block34, &tmp323, &tmp324, &tmp325, &tmp326, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336);
    compiler::TNode<BigInt> tmp337;
    USE(tmp337);
    tmp337 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataViewBigInt(compiler::TNode<JSArrayBuffer>{tmp330}, compiler::TNode<UintPtrT>{tmp336}, compiler::TNode<BoolT>{tmp329}, false));
    ca_.Goto(&block1, tmp337);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp338;
    compiler::TNode<Object> tmp339;
    compiler::TNode<Object> tmp340;
    compiler::TNode<Object> tmp341;
    compiler::TNode<JSDataView> tmp342;
    compiler::TNode<Number> tmp343;
    compiler::TNode<BoolT> tmp344;
    compiler::TNode<JSArrayBuffer> tmp345;
    compiler::TNode<Float64T> tmp346;
    compiler::TNode<UintPtrT> tmp347;
    compiler::TNode<UintPtrT> tmp348;
    compiler::TNode<Float64T> tmp349;
    compiler::TNode<Float64T> tmp350;
    compiler::TNode<UintPtrT> tmp351;
    ca_.Bind(&block35, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343, &tmp344, &tmp345, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS))) {
      ca_.Goto(&block37, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
    } else {
      ca_.Goto(&block38, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343, tmp344, tmp345, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351);
    }
  }

  if (block37.is_used()) {
    compiler::TNode<Context> tmp352;
    compiler::TNode<Object> tmp353;
    compiler::TNode<Object> tmp354;
    compiler::TNode<Object> tmp355;
    compiler::TNode<JSDataView> tmp356;
    compiler::TNode<Number> tmp357;
    compiler::TNode<BoolT> tmp358;
    compiler::TNode<JSArrayBuffer> tmp359;
    compiler::TNode<Float64T> tmp360;
    compiler::TNode<UintPtrT> tmp361;
    compiler::TNode<UintPtrT> tmp362;
    compiler::TNode<Float64T> tmp363;
    compiler::TNode<Float64T> tmp364;
    compiler::TNode<UintPtrT> tmp365;
    ca_.Bind(&block37, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362, &tmp363, &tmp364, &tmp365);
    compiler::TNode<BigInt> tmp366;
    USE(tmp366);
    tmp366 = ca_.UncheckedCast<BigInt>(DataViewBuiltinsFromDSLAssembler(state_).LoadDataViewBigInt(compiler::TNode<JSArrayBuffer>{tmp359}, compiler::TNode<UintPtrT>{tmp365}, compiler::TNode<BoolT>{tmp358}, true));
    ca_.Goto(&block1, tmp366);
  }

  if (block38.is_used()) {
    compiler::TNode<Context> tmp367;
    compiler::TNode<Object> tmp368;
    compiler::TNode<Object> tmp369;
    compiler::TNode<Object> tmp370;
    compiler::TNode<JSDataView> tmp371;
    compiler::TNode<Number> tmp372;
    compiler::TNode<BoolT> tmp373;
    compiler::TNode<JSArrayBuffer> tmp374;
    compiler::TNode<Float64T> tmp375;
    compiler::TNode<UintPtrT> tmp376;
    compiler::TNode<UintPtrT> tmp377;
    compiler::TNode<Float64T> tmp378;
    compiler::TNode<Float64T> tmp379;
    compiler::TNode<UintPtrT> tmp380;
    ca_.Bind(&block38, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379, &tmp380);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/data-view.tq:449:7");
    CodeStubAssembler(state_).Unreachable();
  }

    compiler::TNode<Numeric> tmp381;
    ca_.Bind(&block1, &tmp381);
  return compiler::TNode<Numeric>{tmp381};
}

TF_BUILTIN(DataViewPrototypeGetUint8, CodeStubAssembler) {
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
    compiler::TNode<Numeric> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp15}, compiler::TNode<Object>{tmp16}, compiler::TNode<Object>{tmp17}, compiler::TNode<Object>{tmp18}, UINT8_ELEMENTS));
    arguments->PopAndReturn(tmp19);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt8, CodeStubAssembler) {
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
    compiler::TNode<Numeric> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp15}, compiler::TNode<Object>{tmp16}, compiler::TNode<Object>{tmp17}, compiler::TNode<Object>{tmp18}, INT8_ELEMENTS));
    arguments->PopAndReturn(tmp19);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, UINT16_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, INT16_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, UINT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, INT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, FLOAT32_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, FLOAT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, BIGUINT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

TF_BUILTIN(DataViewPrototypeGetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Numeric> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<Numeric>(DataViewBuiltinsFromDSLAssembler(state_).DataViewGet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, BIGINT64_ELEMENTS));
    arguments->PopAndReturn(tmp38);
  }
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView8(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2);
    compiler::TNode<RawPtrT> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp4}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp3}, compiler::TNode<UintPtrT>{tmp1}, compiler::TNode<Uint32T>{tmp5});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView16(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp5}));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp7}));
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp8}, compiler::TNode<Uint32T>{tmp9}));
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp10);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp11;
    compiler::TNode<UintPtrT> tmp12;
    compiler::TNode<Uint32T> tmp13;
    compiler::TNode<BoolT> tmp14;
    compiler::TNode<RawPtrT> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<Uint32T> tmp17;
    ca_.Bind(&block2, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp15}, compiler::TNode<UintPtrT>{tmp12}, compiler::TNode<Uint32T>{tmp16});
    compiler::TNode<UintPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp12}, compiler::TNode<UintPtrT>{tmp18}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp15}, compiler::TNode<UintPtrT>{tmp19}, compiler::TNode<Uint32T>{tmp17});
    ca_.Goto(&block4, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp20;
    compiler::TNode<UintPtrT> tmp21;
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<BoolT> tmp23;
    compiler::TNode<RawPtrT> tmp24;
    compiler::TNode<Uint32T> tmp25;
    compiler::TNode<Uint32T> tmp26;
    ca_.Bind(&block3, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp24}, compiler::TNode<UintPtrT>{tmp21}, compiler::TNode<Uint32T>{tmp26});
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp27}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp24}, compiler::TNode<UintPtrT>{tmp28}, compiler::TNode<Uint32T>{tmp25});
    ca_.Goto(&block4, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25, tmp26);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp29;
    compiler::TNode<UintPtrT> tmp30;
    compiler::TNode<Uint32T> tmp31;
    compiler::TNode<BoolT> tmp32;
    compiler::TNode<RawPtrT> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<Uint32T> tmp35;
    ca_.Bind(&block4, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView32(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_value, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<RawPtrT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp5}));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp7}));
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp8}, compiler::TNode<Uint32T>{tmp9}));
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp11}));
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp12}, compiler::TNode<Uint32T>{tmp13}));
    compiler::TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp15}));
    ca_.Branch(tmp3, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, tmp10, tmp14, tmp16);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp17;
    compiler::TNode<UintPtrT> tmp18;
    compiler::TNode<Uint32T> tmp19;
    compiler::TNode<BoolT> tmp20;
    compiler::TNode<RawPtrT> tmp21;
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<Uint32T> tmp24;
    compiler::TNode<Uint32T> tmp25;
    ca_.Bind(&block2, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp18}, compiler::TNode<Uint32T>{tmp22});
    compiler::TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp18}, compiler::TNode<UintPtrT>{tmp26}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp27}, compiler::TNode<Uint32T>{tmp23});
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp18}, compiler::TNode<UintPtrT>{tmp28}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp29}, compiler::TNode<Uint32T>{tmp24});
    compiler::TNode<UintPtrT> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp18}, compiler::TNode<UintPtrT>{tmp30}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp21}, compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<Uint32T>{tmp25});
    ca_.Goto(&block4, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp24, tmp25);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp32;
    compiler::TNode<UintPtrT> tmp33;
    compiler::TNode<Uint32T> tmp34;
    compiler::TNode<BoolT> tmp35;
    compiler::TNode<RawPtrT> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    ca_.Bind(&block3, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp33}, compiler::TNode<Uint32T>{tmp40});
    compiler::TNode<UintPtrT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp33}, compiler::TNode<UintPtrT>{tmp41}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp42}, compiler::TNode<Uint32T>{tmp39});
    compiler::TNode<UintPtrT> tmp43;
    USE(tmp43);
    tmp43 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp33}, compiler::TNode<UintPtrT>{tmp43}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp44}, compiler::TNode<Uint32T>{tmp38});
    compiler::TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp33}, compiler::TNode<UintPtrT>{tmp45}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp36}, compiler::TNode<UintPtrT>{tmp46}, compiler::TNode<Uint32T>{tmp37});
    ca_.Goto(&block4, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp47;
    compiler::TNode<UintPtrT> tmp48;
    compiler::TNode<Uint32T> tmp49;
    compiler::TNode<BoolT> tmp50;
    compiler::TNode<RawPtrT> tmp51;
    compiler::TNode<Uint32T> tmp52;
    compiler::TNode<Uint32T> tmp53;
    compiler::TNode<Uint32T> tmp54;
    compiler::TNode<Uint32T> tmp55;
    ca_.Bind(&block4, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataView64(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<Uint32T> p_lowWord, compiler::TNode<Uint32T> p_highWord, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, Uint32T, Uint32T, BoolT, RawPtrT, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_lowWord, p_highWord, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<Uint32T> tmp2;
    compiler::TNode<Uint32T> tmp3;
    compiler::TNode<BoolT> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    compiler::TNode<RawPtrT> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferBackingStore(compiler::TNode<JSArrayBuffer>{tmp0}));
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp6}));
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp8}));
    compiler::TNode<Uint32T> tmp10;
    USE(tmp10);
    tmp10 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp9}, compiler::TNode<Uint32T>{tmp10}));
    compiler::TNode<Uint32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp12}));
    compiler::TNode<Uint32T> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp13}, compiler::TNode<Uint32T>{tmp14}));
    compiler::TNode<Uint32T> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp2}, compiler::TNode<Uint32T>{tmp16}));
    compiler::TNode<Uint32T> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp18}));
    compiler::TNode<Uint32T> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(8));
    compiler::TNode<Uint32T> tmp21;
    USE(tmp21);
    tmp21 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp20}));
    compiler::TNode<Uint32T> tmp22;
    USE(tmp22);
    tmp22 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp23;
    USE(tmp23);
    tmp23 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp21}, compiler::TNode<Uint32T>{tmp22}));
    compiler::TNode<Uint32T> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(16));
    compiler::TNode<Uint32T> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp24}));
    compiler::TNode<Uint32T> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0xFF));
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32And(compiler::TNode<Uint32T>{tmp25}, compiler::TNode<Uint32T>{tmp26}));
    compiler::TNode<Uint32T> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(24));
    compiler::TNode<Uint32T> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Word32Shr(compiler::TNode<Uint32T>{tmp3}, compiler::TNode<Uint32T>{tmp28}));
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp7, tmp11, tmp15, tmp17, tmp19, tmp23, tmp27, tmp29);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp30;
    compiler::TNode<UintPtrT> tmp31;
    compiler::TNode<Uint32T> tmp32;
    compiler::TNode<Uint32T> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<RawPtrT> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    compiler::TNode<Uint32T> tmp39;
    compiler::TNode<Uint32T> tmp40;
    compiler::TNode<Uint32T> tmp41;
    compiler::TNode<Uint32T> tmp42;
    compiler::TNode<Uint32T> tmp43;
    ca_.Bind(&block2, &tmp30, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<Uint32T>{tmp36});
    compiler::TNode<UintPtrT> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp44}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp45}, compiler::TNode<Uint32T>{tmp37});
    compiler::TNode<UintPtrT> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp47;
    USE(tmp47);
    tmp47 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp46}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp47}, compiler::TNode<Uint32T>{tmp38});
    compiler::TNode<UintPtrT> tmp48;
    USE(tmp48);
    tmp48 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp49;
    USE(tmp49);
    tmp49 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp48}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp49}, compiler::TNode<Uint32T>{tmp39});
    compiler::TNode<UintPtrT> tmp50;
    USE(tmp50);
    tmp50 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(4));
    compiler::TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp50}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp51}, compiler::TNode<Uint32T>{tmp40});
    compiler::TNode<UintPtrT> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(5));
    compiler::TNode<UintPtrT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp52}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp53}, compiler::TNode<Uint32T>{tmp41});
    compiler::TNode<UintPtrT> tmp54;
    USE(tmp54);
    tmp54 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(6));
    compiler::TNode<UintPtrT> tmp55;
    USE(tmp55);
    tmp55 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp54}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp55}, compiler::TNode<Uint32T>{tmp42});
    compiler::TNode<UintPtrT> tmp56;
    USE(tmp56);
    tmp56 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(7));
    compiler::TNode<UintPtrT> tmp57;
    USE(tmp57);
    tmp57 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp31}, compiler::TNode<UintPtrT>{tmp56}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp35}, compiler::TNode<UintPtrT>{tmp57}, compiler::TNode<Uint32T>{tmp43});
    ca_.Goto(&block4, tmp30, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42, tmp43);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp58;
    compiler::TNode<UintPtrT> tmp59;
    compiler::TNode<Uint32T> tmp60;
    compiler::TNode<Uint32T> tmp61;
    compiler::TNode<BoolT> tmp62;
    compiler::TNode<RawPtrT> tmp63;
    compiler::TNode<Uint32T> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    compiler::TNode<Uint32T> tmp69;
    compiler::TNode<Uint32T> tmp70;
    compiler::TNode<Uint32T> tmp71;
    ca_.Bind(&block3, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71);
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<Uint32T>{tmp71});
    compiler::TNode<UintPtrT> tmp72;
    USE(tmp72);
    tmp72 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(1));
    compiler::TNode<UintPtrT> tmp73;
    USE(tmp73);
    tmp73 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp72}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp73}, compiler::TNode<Uint32T>{tmp70});
    compiler::TNode<UintPtrT> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(2));
    compiler::TNode<UintPtrT> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp74}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp75}, compiler::TNode<Uint32T>{tmp69});
    compiler::TNode<UintPtrT> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(3));
    compiler::TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp76}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp77}, compiler::TNode<Uint32T>{tmp68});
    compiler::TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(4));
    compiler::TNode<UintPtrT> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp78}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp79}, compiler::TNode<Uint32T>{tmp67});
    compiler::TNode<UintPtrT> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(5));
    compiler::TNode<UintPtrT> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp80}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp81}, compiler::TNode<Uint32T>{tmp66});
    compiler::TNode<UintPtrT> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(6));
    compiler::TNode<UintPtrT> tmp83;
    USE(tmp83);
    tmp83 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp82}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp83}, compiler::TNode<Uint32T>{tmp65});
    compiler::TNode<UintPtrT> tmp84;
    USE(tmp84);
    tmp84 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(7));
    compiler::TNode<UintPtrT> tmp85;
    USE(tmp85);
    tmp85 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp59}, compiler::TNode<UintPtrT>{tmp84}));
    DataViewBuiltinsAssembler(state_).StoreWord8(compiler::TNode<RawPtrT>{tmp63}, compiler::TNode<UintPtrT>{tmp85}, compiler::TNode<Uint32T>{tmp64});
    ca_.Goto(&block4, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71);
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp86;
    compiler::TNode<UintPtrT> tmp87;
    compiler::TNode<Uint32T> tmp88;
    compiler::TNode<Uint32T> tmp89;
    compiler::TNode<BoolT> tmp90;
    compiler::TNode<RawPtrT> tmp91;
    compiler::TNode<Uint32T> tmp92;
    compiler::TNode<Uint32T> tmp93;
    compiler::TNode<Uint32T> tmp94;
    compiler::TNode<Uint32T> tmp95;
    compiler::TNode<Uint32T> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    ca_.Bind(&block4, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99);
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

void DataViewBuiltinsFromDSLAssembler::StoreDataViewBigInt(compiler::TNode<JSArrayBuffer> p_buffer, compiler::TNode<UintPtrT> p_offset, compiler::TNode<BigInt> p_bigIntValue, compiler::TNode<BoolT> p_requestedLittleEndian) {
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<JSArrayBuffer, UintPtrT, BigInt, BoolT, Uint32T, Uint32T, Uint32T, Uint32T> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_buffer, p_offset, p_bigIntValue, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp0;
    compiler::TNode<UintPtrT> tmp1;
    compiler::TNode<BigInt> tmp2;
    compiler::TNode<BoolT> tmp3;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3);
    compiler::TNode<Uint32T> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntLength(compiler::TNode<BigInt>{tmp2}));
    compiler::TNode<Uint32T> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<Uint32T>(DataViewBuiltinsAssembler(state_).DataViewDecodeBigIntSign(compiler::TNode<BigInt>{tmp2}));
    compiler::TNode<Uint32T> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<Uint32T> tmp7;
    USE(tmp7);
    tmp7 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<Uint32T> tmp8;
    USE(tmp8);
    tmp8 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp9;
    USE(tmp9);
    tmp9 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp4}, compiler::TNode<Uint32T>{tmp8}));
    ca_.Branch(tmp9, &block2, &block3, tmp0, tmp1, tmp2, tmp3, tmp4, tmp5, tmp6, tmp7);
  }

  if (block2.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp10;
    compiler::TNode<UintPtrT> tmp11;
    compiler::TNode<BigInt> tmp12;
    compiler::TNode<BoolT> tmp13;
    compiler::TNode<Uint32T> tmp14;
    compiler::TNode<Uint32T> tmp15;
    compiler::TNode<Uint32T> tmp16;
    compiler::TNode<Uint32T> tmp17;
    ca_.Bind(&block2, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16, &tmp17);
    if ((CodeStubAssembler(state_).Is64())) {
      ca_.Goto(&block4, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    } else {
      ca_.Goto(&block5, tmp10, tmp11, tmp12, tmp13, tmp14, tmp15, tmp16, tmp17);
    }
  }

  if (block4.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp18;
    compiler::TNode<UintPtrT> tmp19;
    compiler::TNode<BigInt> tmp20;
    compiler::TNode<BoolT> tmp21;
    compiler::TNode<Uint32T> tmp22;
    compiler::TNode<Uint32T> tmp23;
    compiler::TNode<Uint32T> tmp24;
    compiler::TNode<Uint32T> tmp25;
    ca_.Bind(&block4, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25);
    compiler::TNode<UintPtrT> tmp26;
    USE(tmp26);
    tmp26 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp20}, 0));
    compiler::TNode<Uint32T> tmp27;
    USE(tmp27);
    tmp27 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT>{tmp26}));
    compiler::TNode<UintPtrT> tmp28;
    USE(tmp28);
    tmp28 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATuintptr17ATconstexpr_int31(32));
    compiler::TNode<UintPtrT> tmp29;
    USE(tmp29);
    tmp29 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).WordShr(compiler::TNode<UintPtrT>{tmp26}, compiler::TNode<UintPtrT>{tmp28}));
    compiler::TNode<Uint32T> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT>{tmp29}));
    ca_.Goto(&block6, tmp18, tmp19, tmp20, tmp21, tmp22, tmp23, tmp27, tmp30);
  }

  if (block5.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp31;
    compiler::TNode<UintPtrT> tmp32;
    compiler::TNode<BigInt> tmp33;
    compiler::TNode<BoolT> tmp34;
    compiler::TNode<Uint32T> tmp35;
    compiler::TNode<Uint32T> tmp36;
    compiler::TNode<Uint32T> tmp37;
    compiler::TNode<Uint32T> tmp38;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    compiler::TNode<UintPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp33}, 0));
    compiler::TNode<Uint32T> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT>{tmp39}));
    compiler::TNode<Uint32T> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Uint32GreaterThanOrEqual(compiler::TNode<Uint32T>{tmp35}, compiler::TNode<Uint32T>{tmp41}));
    ca_.Branch(tmp42, &block7, &block8, tmp31, tmp32, tmp33, tmp34, tmp35, tmp36, tmp40, tmp38);
  }

  if (block7.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp43;
    compiler::TNode<UintPtrT> tmp44;
    compiler::TNode<BigInt> tmp45;
    compiler::TNode<BoolT> tmp46;
    compiler::TNode<Uint32T> tmp47;
    compiler::TNode<Uint32T> tmp48;
    compiler::TNode<Uint32T> tmp49;
    compiler::TNode<Uint32T> tmp50;
    ca_.Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<UintPtrT> tmp51;
    USE(tmp51);
    tmp51 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadBigIntDigit(compiler::TNode<BigInt>{tmp45}, 1));
    compiler::TNode<Uint32T> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).Convert8ATuint329ATuintptr(compiler::TNode<UintPtrT>{tmp51}));
    ca_.Goto(&block8, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp52);
  }

  if (block8.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp53;
    compiler::TNode<UintPtrT> tmp54;
    compiler::TNode<BigInt> tmp55;
    compiler::TNode<BoolT> tmp56;
    compiler::TNode<Uint32T> tmp57;
    compiler::TNode<Uint32T> tmp58;
    compiler::TNode<Uint32T> tmp59;
    compiler::TNode<Uint32T> tmp60;
    ca_.Bind(&block8, &tmp53, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60);
    ca_.Goto(&block6, tmp53, tmp54, tmp55, tmp56, tmp57, tmp58, tmp59, tmp60);
  }

  if (block6.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp61;
    compiler::TNode<UintPtrT> tmp62;
    compiler::TNode<BigInt> tmp63;
    compiler::TNode<BoolT> tmp64;
    compiler::TNode<Uint32T> tmp65;
    compiler::TNode<Uint32T> tmp66;
    compiler::TNode<Uint32T> tmp67;
    compiler::TNode<Uint32T> tmp68;
    ca_.Bind(&block6, &tmp61, &tmp62, &tmp63, &tmp64, &tmp65, &tmp66, &tmp67, &tmp68);
    ca_.Goto(&block3, tmp61, tmp62, tmp63, tmp64, tmp65, tmp66, tmp67, tmp68);
  }

  if (block3.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp69;
    compiler::TNode<UintPtrT> tmp70;
    compiler::TNode<BigInt> tmp71;
    compiler::TNode<BoolT> tmp72;
    compiler::TNode<Uint32T> tmp73;
    compiler::TNode<Uint32T> tmp74;
    compiler::TNode<Uint32T> tmp75;
    compiler::TNode<Uint32T> tmp76;
    ca_.Bind(&block3, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74, &tmp75, &tmp76);
    compiler::TNode<Uint32T> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp74}, compiler::TNode<Uint32T>{tmp77}));
    ca_.Branch(tmp78, &block9, &block10, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76);
  }

  if (block9.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp79;
    compiler::TNode<UintPtrT> tmp80;
    compiler::TNode<BigInt> tmp81;
    compiler::TNode<BoolT> tmp82;
    compiler::TNode<Uint32T> tmp83;
    compiler::TNode<Uint32T> tmp84;
    compiler::TNode<Uint32T> tmp85;
    compiler::TNode<Uint32T> tmp86;
    ca_.Bind(&block9, &tmp79, &tmp80, &tmp81, &tmp82, &tmp83, &tmp84, &tmp85, &tmp86);
    compiler::TNode<Int32T> tmp87;
    USE(tmp87);
    tmp87 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp86}));
    compiler::TNode<Int32T> tmp88;
    USE(tmp88);
    tmp88 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<Int32T> tmp89;
    USE(tmp89);
    tmp89 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp88}, compiler::TNode<Int32T>{tmp87}));
    compiler::TNode<Uint32T> tmp90;
    USE(tmp90);
    tmp90 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp89}));
    compiler::TNode<Uint32T> tmp91;
    USE(tmp91);
    tmp91 = ca_.UncheckedCast<Uint32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATuint3217ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp92;
    USE(tmp92);
    tmp92 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Word32NotEqual(compiler::TNode<Uint32T>{tmp85}, compiler::TNode<Uint32T>{tmp91}));
    ca_.Branch(tmp92, &block11, &block12, tmp79, tmp80, tmp81, tmp82, tmp83, tmp84, tmp85, tmp90);
  }

  if (block11.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp93;
    compiler::TNode<UintPtrT> tmp94;
    compiler::TNode<BigInt> tmp95;
    compiler::TNode<BoolT> tmp96;
    compiler::TNode<Uint32T> tmp97;
    compiler::TNode<Uint32T> tmp98;
    compiler::TNode<Uint32T> tmp99;
    compiler::TNode<Uint32T> tmp100;
    ca_.Bind(&block11, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100);
    compiler::TNode<Int32T> tmp101;
    USE(tmp101);
    tmp101 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp100}));
    compiler::TNode<Int32T> tmp102;
    USE(tmp102);
    tmp102 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(1));
    compiler::TNode<Int32T> tmp103;
    USE(tmp103);
    tmp103 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp101}, compiler::TNode<Int32T>{tmp102}));
    compiler::TNode<Uint32T> tmp104;
    USE(tmp104);
    tmp104 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp103}));
    ca_.Goto(&block12, tmp93, tmp94, tmp95, tmp96, tmp97, tmp98, tmp99, tmp104);
  }

  if (block12.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp105;
    compiler::TNode<UintPtrT> tmp106;
    compiler::TNode<BigInt> tmp107;
    compiler::TNode<BoolT> tmp108;
    compiler::TNode<Uint32T> tmp109;
    compiler::TNode<Uint32T> tmp110;
    compiler::TNode<Uint32T> tmp111;
    compiler::TNode<Uint32T> tmp112;
    ca_.Bind(&block12, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    compiler::TNode<Int32T> tmp113;
    USE(tmp113);
    tmp113 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Signed(compiler::TNode<Uint32T>{tmp111}));
    compiler::TNode<Int32T> tmp114;
    USE(tmp114);
    tmp114 = ca_.UncheckedCast<Int32T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr7ATint3217ATconstexpr_int31(0));
    compiler::TNode<Int32T> tmp115;
    USE(tmp115);
    tmp115 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).Int32Sub(compiler::TNode<Int32T>{tmp114}, compiler::TNode<Int32T>{tmp113}));
    compiler::TNode<Uint32T> tmp116;
    USE(tmp116);
    tmp116 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Unsigned(compiler::TNode<Int32T>{tmp115}));
    ca_.Goto(&block10, tmp105, tmp106, tmp107, tmp108, tmp109, tmp110, tmp116, tmp112);
  }

  if (block10.is_used()) {
    compiler::TNode<JSArrayBuffer> tmp117;
    compiler::TNode<UintPtrT> tmp118;
    compiler::TNode<BigInt> tmp119;
    compiler::TNode<BoolT> tmp120;
    compiler::TNode<Uint32T> tmp121;
    compiler::TNode<Uint32T> tmp122;
    compiler::TNode<Uint32T> tmp123;
    compiler::TNode<Uint32T> tmp124;
    ca_.Bind(&block10, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123, &tmp124);
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView64(compiler::TNode<JSArrayBuffer>{tmp117}, compiler::TNode<UintPtrT>{tmp118}, compiler::TNode<Uint32T>{tmp123}, compiler::TNode<Uint32T>{tmp124}, compiler::TNode<BoolT>{tmp120});
    ca_.Goto(&block1);
  }

    ca_.Bind(&block1);
}

compiler::TNode<Object> DataViewBuiltinsFromDSLAssembler::DataViewSet(compiler::TNode<Context> p_context, compiler::TNode<Object> p_receiver, compiler::TNode<Object> p_offset, compiler::TNode<Object> p_value, compiler::TNode<Object> p_requestedLittleEndian, ElementsKind p_kind) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, Object, Context, Number> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, BigInt, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block19(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block31(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block35(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer, Number, Float64T, UintPtrT, UintPtrT, Float64T, Float64T, UintPtrT, Float64T> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object, JSDataView, Number, BoolT, JSArrayBuffer> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_receiver, p_offset, p_value, p_requestedLittleEndian);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    compiler::TNode<Object> tmp2;
    compiler::TNode<Object> tmp3;
    compiler::TNode<Object> tmp4;
    ca_.Bind(&block0, &tmp0, &tmp1, &tmp2, &tmp3, &tmp4);
    compiler::TNode<String> tmp5;
    USE(tmp5);
    tmp5 = ca_.UncheckedCast<String>(DataViewBuiltinsFromDSLAssembler(state_).MakeDataViewSetterNameString(p_kind));
    compiler::TNode<JSDataView> tmp6;
    USE(tmp6);
    tmp6 = ca_.UncheckedCast<JSDataView>(DataViewBuiltinsFromDSLAssembler(state_).ValidateDataView(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, compiler::TNode<String>{tmp5}));
    compiler::TNode<Number> tmp7;
    USE(tmp7);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp7 = BaseBuiltinsFromDSLAssembler(state_).ToIndex(compiler::TNode<Object>{tmp2}, compiler::TNode<Context>{tmp0}, &label0);
    ca_.Goto(&block4, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0, tmp7);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp2, tmp3, tmp4, tmp6, ca_.Uninitialized<Number>(), tmp2, tmp0);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    compiler::TNode<Object> tmp12;
    compiler::TNode<JSDataView> tmp13;
    compiler::TNode<Number> tmp14;
    compiler::TNode<Object> tmp15;
    compiler::TNode<Context> tmp16;
    ca_.Bind(&block5, &tmp8, &tmp9, &tmp10, &tmp11, &tmp12, &tmp13, &tmp14, &tmp15, &tmp16);
    ca_.Goto(&block3, tmp8, tmp9, tmp10, tmp11, tmp12, tmp13, tmp14);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp17;
    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    compiler::TNode<Object> tmp20;
    compiler::TNode<Object> tmp21;
    compiler::TNode<JSDataView> tmp22;
    compiler::TNode<Number> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<Context> tmp25;
    compiler::TNode<Number> tmp26;
    ca_.Bind(&block4, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26);
    ca_.Goto(&block2, tmp17, tmp18, tmp19, tmp20, tmp21, tmp22, tmp26);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp27;
    compiler::TNode<Object> tmp28;
    compiler::TNode<Object> tmp29;
    compiler::TNode<Object> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<JSDataView> tmp32;
    compiler::TNode<Number> tmp33;
    ca_.Bind(&block3, &tmp27, &tmp28, &tmp29, &tmp30, &tmp31, &tmp32, &tmp33);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp27}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    compiler::TNode<Object> tmp38;
    compiler::TNode<JSDataView> tmp39;
    compiler::TNode<Number> tmp40;
    ca_.Bind(&block2, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38, &tmp39, &tmp40);
    compiler::TNode<BoolT> tmp41;
    USE(tmp41);
    tmp41 = ca_.UncheckedCast<BoolT>(BaseBuiltinsFromDSLAssembler(state_).ToBoolean(compiler::TNode<Object>{tmp38}));
    compiler::TNode<JSArrayBuffer> tmp42;
    USE(tmp42);
    tmp42 = ca_.UncheckedCast<JSArrayBuffer>(CodeStubAssembler(state_).LoadJSArrayBufferViewBuffer(compiler::TNode<JSArrayBufferView>{tmp39}));
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGUINT64_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, BIGINT64_ELEMENTS)))) {
      ca_.Goto(&block7, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    } else {
      ca_.Goto(&block8, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39, tmp40, tmp41, tmp42);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp43;
    compiler::TNode<Object> tmp44;
    compiler::TNode<Object> tmp45;
    compiler::TNode<Object> tmp46;
    compiler::TNode<Object> tmp47;
    compiler::TNode<JSDataView> tmp48;
    compiler::TNode<Number> tmp49;
    compiler::TNode<BoolT> tmp50;
    compiler::TNode<JSArrayBuffer> tmp51;
    ca_.Bind(&block7, &tmp43, &tmp44, &tmp45, &tmp46, &tmp47, &tmp48, &tmp49, &tmp50, &tmp51);
    compiler::TNode<BigInt> tmp52;
    USE(tmp52);
    tmp52 = ca_.UncheckedCast<BigInt>(CodeStubAssembler(state_).ToBigInt(compiler::TNode<Context>{tmp43}, compiler::TNode<Object>{tmp46}));
    compiler::TNode<BoolT> tmp53;
    USE(tmp53);
    tmp53 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp51}));
    ca_.Branch(tmp53, &block10, &block11, tmp43, tmp44, tmp45, tmp46, tmp47, tmp48, tmp49, tmp50, tmp51, tmp52);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSDataView> tmp59;
    compiler::TNode<Number> tmp60;
    compiler::TNode<BoolT> tmp61;
    compiler::TNode<JSArrayBuffer> tmp62;
    compiler::TNode<BigInt> tmp63;
    ca_.Bind(&block10, &tmp54, &tmp55, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    compiler::TNode<String> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<String>(DataViewBuiltinsFromDSLAssembler(state_).MakeDataViewSetterNameString(p_kind));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp54}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp64});
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp65;
    compiler::TNode<Object> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<Object> tmp69;
    compiler::TNode<JSDataView> tmp70;
    compiler::TNode<Number> tmp71;
    compiler::TNode<BoolT> tmp72;
    compiler::TNode<JSArrayBuffer> tmp73;
    compiler::TNode<BigInt> tmp74;
    ca_.Bind(&block11, &tmp65, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73, &tmp74);
    compiler::TNode<Float64T> tmp75;
    USE(tmp75);
    tmp75 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp71}));
    compiler::TNode<UintPtrT> tmp76;
    USE(tmp76);
    tmp76 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr9ATfloat64(compiler::TNode<Float64T>{tmp75}));
    compiler::TNode<UintPtrT> tmp77;
    USE(tmp77);
    tmp77 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView>{tmp70}));
    compiler::TNode<UintPtrT> tmp78;
    USE(tmp78);
    tmp78 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView>{tmp70}));
    compiler::TNode<Float64T> tmp79;
    USE(tmp79);
    tmp79 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat649ATuintptr(compiler::TNode<UintPtrT>{tmp78}));
    compiler::TNode<Float64T> tmp80;
    USE(tmp80);
    tmp80 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31((DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind))));
    compiler::TNode<Float64T> tmp81;
    USE(tmp81);
    tmp81 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp75}, compiler::TNode<Float64T>{tmp80}));
    compiler::TNode<BoolT> tmp82;
    USE(tmp82);
    tmp82 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp81}, compiler::TNode<Float64T>{tmp79}));
    ca_.Branch(tmp82, &block12, &block13, tmp65, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74, tmp75, tmp76, tmp77, tmp79, tmp80);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp83;
    compiler::TNode<Object> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<Object> tmp87;
    compiler::TNode<JSDataView> tmp88;
    compiler::TNode<Number> tmp89;
    compiler::TNode<BoolT> tmp90;
    compiler::TNode<JSArrayBuffer> tmp91;
    compiler::TNode<BigInt> tmp92;
    compiler::TNode<Float64T> tmp93;
    compiler::TNode<UintPtrT> tmp94;
    compiler::TNode<UintPtrT> tmp95;
    compiler::TNode<Float64T> tmp96;
    compiler::TNode<Float64T> tmp97;
    ca_.Bind(&block12, &tmp83, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp83}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp98;
    compiler::TNode<Object> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    compiler::TNode<Object> tmp102;
    compiler::TNode<JSDataView> tmp103;
    compiler::TNode<Number> tmp104;
    compiler::TNode<BoolT> tmp105;
    compiler::TNode<JSArrayBuffer> tmp106;
    compiler::TNode<BigInt> tmp107;
    compiler::TNode<Float64T> tmp108;
    compiler::TNode<UintPtrT> tmp109;
    compiler::TNode<UintPtrT> tmp110;
    compiler::TNode<Float64T> tmp111;
    compiler::TNode<Float64T> tmp112;
    ca_.Bind(&block13, &tmp98, &tmp99, &tmp100, &tmp101, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107, &tmp108, &tmp109, &tmp110, &tmp111, &tmp112);
    compiler::TNode<UintPtrT> tmp113;
    USE(tmp113);
    tmp113 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp109}, compiler::TNode<UintPtrT>{tmp110}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataViewBigInt(compiler::TNode<JSArrayBuffer>{tmp106}, compiler::TNode<UintPtrT>{tmp113}, compiler::TNode<BigInt>{tmp107}, compiler::TNode<BoolT>{tmp105});
    ca_.Goto(&block9, tmp98, tmp99, tmp100, tmp101, tmp102, tmp103, tmp104, tmp105, tmp106);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp114;
    compiler::TNode<Object> tmp115;
    compiler::TNode<Object> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<JSDataView> tmp119;
    compiler::TNode<Number> tmp120;
    compiler::TNode<BoolT> tmp121;
    compiler::TNode<JSArrayBuffer> tmp122;
    ca_.Bind(&block8, &tmp114, &tmp115, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122);
    compiler::TNode<Number> tmp123;
    USE(tmp123);
    tmp123 = ca_.UncheckedCast<Number>(CodeStubAssembler(state_).ToNumber(compiler::TNode<Context>{tmp114}, compiler::TNode<Object>{tmp117}));
    compiler::TNode<BoolT> tmp124;
    USE(tmp124);
    tmp124 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IsDetachedBuffer(compiler::TNode<JSArrayBuffer>{tmp122}));
    ca_.Branch(tmp124, &block14, &block15, tmp114, tmp115, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp122, tmp123);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp125;
    compiler::TNode<Object> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<Object> tmp129;
    compiler::TNode<JSDataView> tmp130;
    compiler::TNode<Number> tmp131;
    compiler::TNode<BoolT> tmp132;
    compiler::TNode<JSArrayBuffer> tmp133;
    compiler::TNode<Number> tmp134;
    ca_.Bind(&block14, &tmp125, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132, &tmp133, &tmp134);
    compiler::TNode<String> tmp135;
    USE(tmp135);
    tmp135 = ca_.UncheckedCast<String>(DataViewBuiltinsFromDSLAssembler(state_).MakeDataViewSetterNameString(p_kind));
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp125}, MessageTemplate::kDetachedOperation, compiler::TNode<Object>{tmp135});
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp136;
    compiler::TNode<Object> tmp137;
    compiler::TNode<Object> tmp138;
    compiler::TNode<Object> tmp139;
    compiler::TNode<Object> tmp140;
    compiler::TNode<JSDataView> tmp141;
    compiler::TNode<Number> tmp142;
    compiler::TNode<BoolT> tmp143;
    compiler::TNode<JSArrayBuffer> tmp144;
    compiler::TNode<Number> tmp145;
    ca_.Bind(&block15, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140, &tmp141, &tmp142, &tmp143, &tmp144, &tmp145);
    compiler::TNode<Float64T> tmp146;
    USE(tmp146);
    tmp146 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat6422UT12ATHeapNumber5ATSmi(compiler::TNode<Number>{tmp142}));
    compiler::TNode<UintPtrT> tmp147;
    USE(tmp147);
    tmp147 = ca_.UncheckedCast<UintPtrT>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATuintptr9ATfloat64(compiler::TNode<Float64T>{tmp146}));
    compiler::TNode<UintPtrT> tmp148;
    USE(tmp148);
    tmp148 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteOffset(compiler::TNode<JSArrayBufferView>{tmp141}));
    compiler::TNode<UintPtrT> tmp149;
    USE(tmp149);
    tmp149 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).LoadJSArrayBufferViewByteLength(compiler::TNode<JSArrayBufferView>{tmp141}));
    compiler::TNode<Float64T> tmp150;
    USE(tmp150);
    tmp150 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).Convert9ATfloat649ATuintptr(compiler::TNode<UintPtrT>{tmp149}));
    compiler::TNode<Float64T> tmp151;
    USE(tmp151);
    tmp151 = ca_.UncheckedCast<Float64T>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr9ATfloat6417ATconstexpr_int31((DataViewBuiltinsAssembler(state_).DataViewElementSize(p_kind))));
    compiler::TNode<Float64T> tmp152;
    USE(tmp152);
    tmp152 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).Float64Add(compiler::TNode<Float64T>{tmp146}, compiler::TNode<Float64T>{tmp151}));
    compiler::TNode<BoolT> tmp153;
    USE(tmp153);
    tmp153 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).Float64GreaterThan(compiler::TNode<Float64T>{tmp152}, compiler::TNode<Float64T>{tmp150}));
    ca_.Branch(tmp153, &block16, &block17, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp150, tmp151);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp154;
    compiler::TNode<Object> tmp155;
    compiler::TNode<Object> tmp156;
    compiler::TNode<Object> tmp157;
    compiler::TNode<Object> tmp158;
    compiler::TNode<JSDataView> tmp159;
    compiler::TNode<Number> tmp160;
    compiler::TNode<BoolT> tmp161;
    compiler::TNode<JSArrayBuffer> tmp162;
    compiler::TNode<Number> tmp163;
    compiler::TNode<Float64T> tmp164;
    compiler::TNode<UintPtrT> tmp165;
    compiler::TNode<UintPtrT> tmp166;
    compiler::TNode<Float64T> tmp167;
    compiler::TNode<Float64T> tmp168;
    ca_.Bind(&block16, &tmp154, &tmp155, &tmp156, &tmp157, &tmp158, &tmp159, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167, &tmp168);
    CodeStubAssembler(state_).ThrowRangeError(compiler::TNode<Context>{tmp154}, MessageTemplate::kInvalidDataViewAccessorOffset);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<Object> tmp172;
    compiler::TNode<Object> tmp173;
    compiler::TNode<JSDataView> tmp174;
    compiler::TNode<Number> tmp175;
    compiler::TNode<BoolT> tmp176;
    compiler::TNode<JSArrayBuffer> tmp177;
    compiler::TNode<Number> tmp178;
    compiler::TNode<Float64T> tmp179;
    compiler::TNode<UintPtrT> tmp180;
    compiler::TNode<UintPtrT> tmp181;
    compiler::TNode<Float64T> tmp182;
    compiler::TNode<Float64T> tmp183;
    ca_.Bind(&block17, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176, &tmp177, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183);
    compiler::TNode<UintPtrT> tmp184;
    USE(tmp184);
    tmp184 = ca_.UncheckedCast<UintPtrT>(CodeStubAssembler(state_).UintPtrAdd(compiler::TNode<UintPtrT>{tmp180}, compiler::TNode<UintPtrT>{tmp181}));
    compiler::TNode<Float64T> tmp185;
    USE(tmp185);
    tmp185 = ca_.UncheckedCast<Float64T>(CodeStubAssembler(state_).ChangeNumberToFloat64(compiler::TNode<Number>{tmp178}));
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT8_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT8_ELEMENTS)))) {
      ca_.Goto(&block19, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185);
    } else {
      ca_.Goto(&block20, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185);
    }
  }

  if (block19.is_used()) {
    compiler::TNode<Context> tmp186;
    compiler::TNode<Object> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<Object> tmp190;
    compiler::TNode<JSDataView> tmp191;
    compiler::TNode<Number> tmp192;
    compiler::TNode<BoolT> tmp193;
    compiler::TNode<JSArrayBuffer> tmp194;
    compiler::TNode<Number> tmp195;
    compiler::TNode<Float64T> tmp196;
    compiler::TNode<UintPtrT> tmp197;
    compiler::TNode<UintPtrT> tmp198;
    compiler::TNode<Float64T> tmp199;
    compiler::TNode<Float64T> tmp200;
    compiler::TNode<UintPtrT> tmp201;
    compiler::TNode<Float64T> tmp202;
    ca_.Bind(&block19, &tmp186, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201, &tmp202);
    compiler::TNode<Uint32T> tmp203;
    USE(tmp203);
    tmp203 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp202}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView8(compiler::TNode<JSArrayBuffer>{tmp194}, compiler::TNode<UintPtrT>{tmp201}, compiler::TNode<Uint32T>{tmp203});
    ca_.Goto(&block21, tmp186, tmp187, tmp188, tmp189, tmp190, tmp191, tmp192, tmp193, tmp194, tmp195, tmp196, tmp197, tmp198, tmp199, tmp200, tmp201, tmp202);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp204;
    compiler::TNode<Object> tmp205;
    compiler::TNode<Object> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<JSDataView> tmp209;
    compiler::TNode<Number> tmp210;
    compiler::TNode<BoolT> tmp211;
    compiler::TNode<JSArrayBuffer> tmp212;
    compiler::TNode<Number> tmp213;
    compiler::TNode<Float64T> tmp214;
    compiler::TNode<UintPtrT> tmp215;
    compiler::TNode<UintPtrT> tmp216;
    compiler::TNode<Float64T> tmp217;
    compiler::TNode<Float64T> tmp218;
    compiler::TNode<UintPtrT> tmp219;
    compiler::TNode<Float64T> tmp220;
    ca_.Bind(&block20, &tmp204, &tmp205, &tmp206, &tmp207, &tmp208, &tmp209, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214, &tmp215, &tmp216, &tmp217, &tmp218, &tmp219, &tmp220);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT16_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT16_ELEMENTS)))) {
      ca_.Goto(&block23, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
    } else {
      ca_.Goto(&block24, tmp204, tmp205, tmp206, tmp207, tmp208, tmp209, tmp210, tmp211, tmp212, tmp213, tmp214, tmp215, tmp216, tmp217, tmp218, tmp219, tmp220);
    }
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp221;
    compiler::TNode<Object> tmp222;
    compiler::TNode<Object> tmp223;
    compiler::TNode<Object> tmp224;
    compiler::TNode<Object> tmp225;
    compiler::TNode<JSDataView> tmp226;
    compiler::TNode<Number> tmp227;
    compiler::TNode<BoolT> tmp228;
    compiler::TNode<JSArrayBuffer> tmp229;
    compiler::TNode<Number> tmp230;
    compiler::TNode<Float64T> tmp231;
    compiler::TNode<UintPtrT> tmp232;
    compiler::TNode<UintPtrT> tmp233;
    compiler::TNode<Float64T> tmp234;
    compiler::TNode<Float64T> tmp235;
    compiler::TNode<UintPtrT> tmp236;
    compiler::TNode<Float64T> tmp237;
    ca_.Bind(&block23, &tmp221, &tmp222, &tmp223, &tmp224, &tmp225, &tmp226, &tmp227, &tmp228, &tmp229, &tmp230, &tmp231, &tmp232, &tmp233, &tmp234, &tmp235, &tmp236, &tmp237);
    compiler::TNode<Uint32T> tmp238;
    USE(tmp238);
    tmp238 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp237}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView16(compiler::TNode<JSArrayBuffer>{tmp229}, compiler::TNode<UintPtrT>{tmp236}, compiler::TNode<Uint32T>{tmp238}, compiler::TNode<BoolT>{tmp228});
    ca_.Goto(&block25, tmp221, tmp222, tmp223, tmp224, tmp225, tmp226, tmp227, tmp228, tmp229, tmp230, tmp231, tmp232, tmp233, tmp234, tmp235, tmp236, tmp237);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp239;
    compiler::TNode<Object> tmp240;
    compiler::TNode<Object> tmp241;
    compiler::TNode<Object> tmp242;
    compiler::TNode<Object> tmp243;
    compiler::TNode<JSDataView> tmp244;
    compiler::TNode<Number> tmp245;
    compiler::TNode<BoolT> tmp246;
    compiler::TNode<JSArrayBuffer> tmp247;
    compiler::TNode<Number> tmp248;
    compiler::TNode<Float64T> tmp249;
    compiler::TNode<UintPtrT> tmp250;
    compiler::TNode<UintPtrT> tmp251;
    compiler::TNode<Float64T> tmp252;
    compiler::TNode<Float64T> tmp253;
    compiler::TNode<UintPtrT> tmp254;
    compiler::TNode<Float64T> tmp255;
    ca_.Bind(&block24, &tmp239, &tmp240, &tmp241, &tmp242, &tmp243, &tmp244, &tmp245, &tmp246, &tmp247, &tmp248, &tmp249, &tmp250, &tmp251, &tmp252, &tmp253, &tmp254, &tmp255);
    if (((CodeStubAssembler(state_).ElementsKindEqual(p_kind, UINT32_ELEMENTS)) || (CodeStubAssembler(state_).ElementsKindEqual(p_kind, INT32_ELEMENTS)))) {
      ca_.Goto(&block27, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255);
    } else {
      ca_.Goto(&block28, tmp239, tmp240, tmp241, tmp242, tmp243, tmp244, tmp245, tmp246, tmp247, tmp248, tmp249, tmp250, tmp251, tmp252, tmp253, tmp254, tmp255);
    }
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp256;
    compiler::TNode<Object> tmp257;
    compiler::TNode<Object> tmp258;
    compiler::TNode<Object> tmp259;
    compiler::TNode<Object> tmp260;
    compiler::TNode<JSDataView> tmp261;
    compiler::TNode<Number> tmp262;
    compiler::TNode<BoolT> tmp263;
    compiler::TNode<JSArrayBuffer> tmp264;
    compiler::TNode<Number> tmp265;
    compiler::TNode<Float64T> tmp266;
    compiler::TNode<UintPtrT> tmp267;
    compiler::TNode<UintPtrT> tmp268;
    compiler::TNode<Float64T> tmp269;
    compiler::TNode<Float64T> tmp270;
    compiler::TNode<UintPtrT> tmp271;
    compiler::TNode<Float64T> tmp272;
    ca_.Bind(&block27, &tmp256, &tmp257, &tmp258, &tmp259, &tmp260, &tmp261, &tmp262, &tmp263, &tmp264, &tmp265, &tmp266, &tmp267, &tmp268, &tmp269, &tmp270, &tmp271, &tmp272);
    compiler::TNode<Uint32T> tmp273;
    USE(tmp273);
    tmp273 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).TruncateFloat64ToWord32(compiler::TNode<Float64T>{tmp272}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView32(compiler::TNode<JSArrayBuffer>{tmp264}, compiler::TNode<UintPtrT>{tmp271}, compiler::TNode<Uint32T>{tmp273}, compiler::TNode<BoolT>{tmp263});
    ca_.Goto(&block29, tmp256, tmp257, tmp258, tmp259, tmp260, tmp261, tmp262, tmp263, tmp264, tmp265, tmp266, tmp267, tmp268, tmp269, tmp270, tmp271, tmp272);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp274;
    compiler::TNode<Object> tmp275;
    compiler::TNode<Object> tmp276;
    compiler::TNode<Object> tmp277;
    compiler::TNode<Object> tmp278;
    compiler::TNode<JSDataView> tmp279;
    compiler::TNode<Number> tmp280;
    compiler::TNode<BoolT> tmp281;
    compiler::TNode<JSArrayBuffer> tmp282;
    compiler::TNode<Number> tmp283;
    compiler::TNode<Float64T> tmp284;
    compiler::TNode<UintPtrT> tmp285;
    compiler::TNode<UintPtrT> tmp286;
    compiler::TNode<Float64T> tmp287;
    compiler::TNode<Float64T> tmp288;
    compiler::TNode<UintPtrT> tmp289;
    compiler::TNode<Float64T> tmp290;
    ca_.Bind(&block28, &tmp274, &tmp275, &tmp276, &tmp277, &tmp278, &tmp279, &tmp280, &tmp281, &tmp282, &tmp283, &tmp284, &tmp285, &tmp286, &tmp287, &tmp288, &tmp289, &tmp290);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT32_ELEMENTS))) {
      ca_.Goto(&block30, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290);
    } else {
      ca_.Goto(&block31, tmp274, tmp275, tmp276, tmp277, tmp278, tmp279, tmp280, tmp281, tmp282, tmp283, tmp284, tmp285, tmp286, tmp287, tmp288, tmp289, tmp290);
    }
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp291;
    compiler::TNode<Object> tmp292;
    compiler::TNode<Object> tmp293;
    compiler::TNode<Object> tmp294;
    compiler::TNode<Object> tmp295;
    compiler::TNode<JSDataView> tmp296;
    compiler::TNode<Number> tmp297;
    compiler::TNode<BoolT> tmp298;
    compiler::TNode<JSArrayBuffer> tmp299;
    compiler::TNode<Number> tmp300;
    compiler::TNode<Float64T> tmp301;
    compiler::TNode<UintPtrT> tmp302;
    compiler::TNode<UintPtrT> tmp303;
    compiler::TNode<Float64T> tmp304;
    compiler::TNode<Float64T> tmp305;
    compiler::TNode<UintPtrT> tmp306;
    compiler::TNode<Float64T> tmp307;
    ca_.Bind(&block30, &tmp291, &tmp292, &tmp293, &tmp294, &tmp295, &tmp296, &tmp297, &tmp298, &tmp299, &tmp300, &tmp301, &tmp302, &tmp303, &tmp304, &tmp305, &tmp306, &tmp307);
    compiler::TNode<Float32T> tmp308;
    USE(tmp308);
    tmp308 = ca_.UncheckedCast<Float32T>(CodeStubAssembler(state_).TruncateFloat64ToFloat32(compiler::TNode<Float64T>{tmp307}));
    compiler::TNode<Uint32T> tmp309;
    USE(tmp309);
    tmp309 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).BitcastFloat32ToInt32(compiler::TNode<Float32T>{tmp308}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView32(compiler::TNode<JSArrayBuffer>{tmp299}, compiler::TNode<UintPtrT>{tmp306}, compiler::TNode<Uint32T>{tmp309}, compiler::TNode<BoolT>{tmp298});
    ca_.Goto(&block32, tmp291, tmp292, tmp293, tmp294, tmp295, tmp296, tmp297, tmp298, tmp299, tmp300, tmp301, tmp302, tmp303, tmp304, tmp305, tmp306, tmp307);
  }

  if (block31.is_used()) {
    compiler::TNode<Context> tmp310;
    compiler::TNode<Object> tmp311;
    compiler::TNode<Object> tmp312;
    compiler::TNode<Object> tmp313;
    compiler::TNode<Object> tmp314;
    compiler::TNode<JSDataView> tmp315;
    compiler::TNode<Number> tmp316;
    compiler::TNode<BoolT> tmp317;
    compiler::TNode<JSArrayBuffer> tmp318;
    compiler::TNode<Number> tmp319;
    compiler::TNode<Float64T> tmp320;
    compiler::TNode<UintPtrT> tmp321;
    compiler::TNode<UintPtrT> tmp322;
    compiler::TNode<Float64T> tmp323;
    compiler::TNode<Float64T> tmp324;
    compiler::TNode<UintPtrT> tmp325;
    compiler::TNode<Float64T> tmp326;
    ca_.Bind(&block31, &tmp310, &tmp311, &tmp312, &tmp313, &tmp314, &tmp315, &tmp316, &tmp317, &tmp318, &tmp319, &tmp320, &tmp321, &tmp322, &tmp323, &tmp324, &tmp325, &tmp326);
    if ((CodeStubAssembler(state_).ElementsKindEqual(p_kind, FLOAT64_ELEMENTS))) {
      ca_.Goto(&block33, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
    } else {
      ca_.Goto(&block34, tmp310, tmp311, tmp312, tmp313, tmp314, tmp315, tmp316, tmp317, tmp318, tmp319, tmp320, tmp321, tmp322, tmp323, tmp324, tmp325, tmp326);
    }
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp327;
    compiler::TNode<Object> tmp328;
    compiler::TNode<Object> tmp329;
    compiler::TNode<Object> tmp330;
    compiler::TNode<Object> tmp331;
    compiler::TNode<JSDataView> tmp332;
    compiler::TNode<Number> tmp333;
    compiler::TNode<BoolT> tmp334;
    compiler::TNode<JSArrayBuffer> tmp335;
    compiler::TNode<Number> tmp336;
    compiler::TNode<Float64T> tmp337;
    compiler::TNode<UintPtrT> tmp338;
    compiler::TNode<UintPtrT> tmp339;
    compiler::TNode<Float64T> tmp340;
    compiler::TNode<Float64T> tmp341;
    compiler::TNode<UintPtrT> tmp342;
    compiler::TNode<Float64T> tmp343;
    ca_.Bind(&block33, &tmp327, &tmp328, &tmp329, &tmp330, &tmp331, &tmp332, &tmp333, &tmp334, &tmp335, &tmp336, &tmp337, &tmp338, &tmp339, &tmp340, &tmp341, &tmp342, &tmp343);
    compiler::TNode<Uint32T> tmp344;
    USE(tmp344);
    tmp344 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Float64ExtractLowWord32(compiler::TNode<Float64T>{tmp343}));
    compiler::TNode<Uint32T> tmp345;
    USE(tmp345);
    tmp345 = ca_.UncheckedCast<Uint32T>(CodeStubAssembler(state_).Float64ExtractHighWord32(compiler::TNode<Float64T>{tmp343}));
    DataViewBuiltinsFromDSLAssembler(state_).StoreDataView64(compiler::TNode<JSArrayBuffer>{tmp335}, compiler::TNode<UintPtrT>{tmp342}, compiler::TNode<Uint32T>{tmp344}, compiler::TNode<Uint32T>{tmp345}, compiler::TNode<BoolT>{tmp334});
    ca_.Goto(&block35, tmp327, tmp328, tmp329, tmp330, tmp331, tmp332, tmp333, tmp334, tmp335, tmp336, tmp337, tmp338, tmp339, tmp340, tmp341, tmp342, tmp343);
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp346;
    compiler::TNode<Object> tmp347;
    compiler::TNode<Object> tmp348;
    compiler::TNode<Object> tmp349;
    compiler::TNode<Object> tmp350;
    compiler::TNode<JSDataView> tmp351;
    compiler::TNode<Number> tmp352;
    compiler::TNode<BoolT> tmp353;
    compiler::TNode<JSArrayBuffer> tmp354;
    compiler::TNode<Number> tmp355;
    compiler::TNode<Float64T> tmp356;
    compiler::TNode<UintPtrT> tmp357;
    compiler::TNode<UintPtrT> tmp358;
    compiler::TNode<Float64T> tmp359;
    compiler::TNode<Float64T> tmp360;
    compiler::TNode<UintPtrT> tmp361;
    compiler::TNode<Float64T> tmp362;
    ca_.Bind(&block34, &tmp346, &tmp347, &tmp348, &tmp349, &tmp350, &tmp351, &tmp352, &tmp353, &tmp354, &tmp355, &tmp356, &tmp357, &tmp358, &tmp359, &tmp360, &tmp361, &tmp362);
    ca_.Goto(&block35, tmp346, tmp347, tmp348, tmp349, tmp350, tmp351, tmp352, tmp353, tmp354, tmp355, tmp356, tmp357, tmp358, tmp359, tmp360, tmp361, tmp362);
  }

  if (block35.is_used()) {
    compiler::TNode<Context> tmp363;
    compiler::TNode<Object> tmp364;
    compiler::TNode<Object> tmp365;
    compiler::TNode<Object> tmp366;
    compiler::TNode<Object> tmp367;
    compiler::TNode<JSDataView> tmp368;
    compiler::TNode<Number> tmp369;
    compiler::TNode<BoolT> tmp370;
    compiler::TNode<JSArrayBuffer> tmp371;
    compiler::TNode<Number> tmp372;
    compiler::TNode<Float64T> tmp373;
    compiler::TNode<UintPtrT> tmp374;
    compiler::TNode<UintPtrT> tmp375;
    compiler::TNode<Float64T> tmp376;
    compiler::TNode<Float64T> tmp377;
    compiler::TNode<UintPtrT> tmp378;
    compiler::TNode<Float64T> tmp379;
    ca_.Bind(&block35, &tmp363, &tmp364, &tmp365, &tmp366, &tmp367, &tmp368, &tmp369, &tmp370, &tmp371, &tmp372, &tmp373, &tmp374, &tmp375, &tmp376, &tmp377, &tmp378, &tmp379);
    ca_.Goto(&block32, tmp363, tmp364, tmp365, tmp366, tmp367, tmp368, tmp369, tmp370, tmp371, tmp372, tmp373, tmp374, tmp375, tmp376, tmp377, tmp378, tmp379);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp380;
    compiler::TNode<Object> tmp381;
    compiler::TNode<Object> tmp382;
    compiler::TNode<Object> tmp383;
    compiler::TNode<Object> tmp384;
    compiler::TNode<JSDataView> tmp385;
    compiler::TNode<Number> tmp386;
    compiler::TNode<BoolT> tmp387;
    compiler::TNode<JSArrayBuffer> tmp388;
    compiler::TNode<Number> tmp389;
    compiler::TNode<Float64T> tmp390;
    compiler::TNode<UintPtrT> tmp391;
    compiler::TNode<UintPtrT> tmp392;
    compiler::TNode<Float64T> tmp393;
    compiler::TNode<Float64T> tmp394;
    compiler::TNode<UintPtrT> tmp395;
    compiler::TNode<Float64T> tmp396;
    ca_.Bind(&block32, &tmp380, &tmp381, &tmp382, &tmp383, &tmp384, &tmp385, &tmp386, &tmp387, &tmp388, &tmp389, &tmp390, &tmp391, &tmp392, &tmp393, &tmp394, &tmp395, &tmp396);
    ca_.Goto(&block29, tmp380, tmp381, tmp382, tmp383, tmp384, tmp385, tmp386, tmp387, tmp388, tmp389, tmp390, tmp391, tmp392, tmp393, tmp394, tmp395, tmp396);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp397;
    compiler::TNode<Object> tmp398;
    compiler::TNode<Object> tmp399;
    compiler::TNode<Object> tmp400;
    compiler::TNode<Object> tmp401;
    compiler::TNode<JSDataView> tmp402;
    compiler::TNode<Number> tmp403;
    compiler::TNode<BoolT> tmp404;
    compiler::TNode<JSArrayBuffer> tmp405;
    compiler::TNode<Number> tmp406;
    compiler::TNode<Float64T> tmp407;
    compiler::TNode<UintPtrT> tmp408;
    compiler::TNode<UintPtrT> tmp409;
    compiler::TNode<Float64T> tmp410;
    compiler::TNode<Float64T> tmp411;
    compiler::TNode<UintPtrT> tmp412;
    compiler::TNode<Float64T> tmp413;
    ca_.Bind(&block29, &tmp397, &tmp398, &tmp399, &tmp400, &tmp401, &tmp402, &tmp403, &tmp404, &tmp405, &tmp406, &tmp407, &tmp408, &tmp409, &tmp410, &tmp411, &tmp412, &tmp413);
    ca_.Goto(&block25, tmp397, tmp398, tmp399, tmp400, tmp401, tmp402, tmp403, tmp404, tmp405, tmp406, tmp407, tmp408, tmp409, tmp410, tmp411, tmp412, tmp413);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp414;
    compiler::TNode<Object> tmp415;
    compiler::TNode<Object> tmp416;
    compiler::TNode<Object> tmp417;
    compiler::TNode<Object> tmp418;
    compiler::TNode<JSDataView> tmp419;
    compiler::TNode<Number> tmp420;
    compiler::TNode<BoolT> tmp421;
    compiler::TNode<JSArrayBuffer> tmp422;
    compiler::TNode<Number> tmp423;
    compiler::TNode<Float64T> tmp424;
    compiler::TNode<UintPtrT> tmp425;
    compiler::TNode<UintPtrT> tmp426;
    compiler::TNode<Float64T> tmp427;
    compiler::TNode<Float64T> tmp428;
    compiler::TNode<UintPtrT> tmp429;
    compiler::TNode<Float64T> tmp430;
    ca_.Bind(&block25, &tmp414, &tmp415, &tmp416, &tmp417, &tmp418, &tmp419, &tmp420, &tmp421, &tmp422, &tmp423, &tmp424, &tmp425, &tmp426, &tmp427, &tmp428, &tmp429, &tmp430);
    ca_.Goto(&block21, tmp414, tmp415, tmp416, tmp417, tmp418, tmp419, tmp420, tmp421, tmp422, tmp423, tmp424, tmp425, tmp426, tmp427, tmp428, tmp429, tmp430);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp431;
    compiler::TNode<Object> tmp432;
    compiler::TNode<Object> tmp433;
    compiler::TNode<Object> tmp434;
    compiler::TNode<Object> tmp435;
    compiler::TNode<JSDataView> tmp436;
    compiler::TNode<Number> tmp437;
    compiler::TNode<BoolT> tmp438;
    compiler::TNode<JSArrayBuffer> tmp439;
    compiler::TNode<Number> tmp440;
    compiler::TNode<Float64T> tmp441;
    compiler::TNode<UintPtrT> tmp442;
    compiler::TNode<UintPtrT> tmp443;
    compiler::TNode<Float64T> tmp444;
    compiler::TNode<Float64T> tmp445;
    compiler::TNode<UintPtrT> tmp446;
    compiler::TNode<Float64T> tmp447;
    ca_.Bind(&block21, &tmp431, &tmp432, &tmp433, &tmp434, &tmp435, &tmp436, &tmp437, &tmp438, &tmp439, &tmp440, &tmp441, &tmp442, &tmp443, &tmp444, &tmp445, &tmp446, &tmp447);
    ca_.Goto(&block9, tmp431, tmp432, tmp433, tmp434, tmp435, tmp436, tmp437, tmp438, tmp439);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp448;
    compiler::TNode<Object> tmp449;
    compiler::TNode<Object> tmp450;
    compiler::TNode<Object> tmp451;
    compiler::TNode<Object> tmp452;
    compiler::TNode<JSDataView> tmp453;
    compiler::TNode<Number> tmp454;
    compiler::TNode<BoolT> tmp455;
    compiler::TNode<JSArrayBuffer> tmp456;
    ca_.Bind(&block9, &tmp448, &tmp449, &tmp450, &tmp451, &tmp452, &tmp453, &tmp454, &tmp455, &tmp456);
    compiler::TNode<Oddball> tmp457;
    USE(tmp457);
    tmp457 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block1, tmp457);
  }

    compiler::TNode<Object> tmp458;
    ca_.Bind(&block1, &tmp458);
  return compiler::TNode<Object>{tmp458};
}

TF_BUILTIN(DataViewPrototypeSetUint8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Oddball> tmp38;
    USE(tmp38);
    tmp38 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, compiler::TNode<Object>{tmp38}, UINT8_ELEMENTS));
    arguments->PopAndReturn(tmp39);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt8, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<Oddball> tmp38;
    USE(tmp38);
    tmp38 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp34}, compiler::TNode<Object>{tmp35}, compiler::TNode<Object>{tmp36}, compiler::TNode<Object>{tmp37}, compiler::TNode<Object>{tmp38}, INT8_ELEMENTS));
    arguments->PopAndReturn(tmp39);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, UINT16_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt16, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, INT16_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetUint32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, UINT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetInt32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, INT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat32, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, FLOAT32_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetFloat64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, FLOAT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigUint64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, BIGUINT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

TF_BUILTIN(DataViewPrototypeSetBigInt64, CodeStubAssembler) {
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
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
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
    compiler::TNode<IntPtrT> tmp18;
    USE(tmp18);
    tmp18 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp19;
    USE(tmp19);
    tmp19 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp20;
    USE(tmp20);
    tmp20 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp18}, compiler::TNode<IntPtrT>{tmp19}));
    ca_.Branch(tmp20, &block5, &block6, tmp15, tmp16, tmp17);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp21;
    compiler::TNode<Object> tmp22;
    compiler::TNode<Object> tmp23;
    ca_.Bind(&block5, &tmp21, &tmp22, &tmp23);
    compiler::TNode<IntPtrT> tmp24;
    USE(tmp24);
    tmp24 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp25;
    USE(tmp25);
    tmp25 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp24}));
    ca_.Goto(&block8, tmp21, tmp22, tmp23, tmp25);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp26;
    compiler::TNode<Object> tmp27;
    compiler::TNode<Object> tmp28;
    ca_.Bind(&block6, &tmp26, &tmp27, &tmp28);
    compiler::TNode<Oddball> tmp29;
    USE(tmp29);
    tmp29 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block7, tmp26, tmp27, tmp28, tmp29);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp30;
    compiler::TNode<Object> tmp31;
    compiler::TNode<Object> tmp32;
    compiler::TNode<Object> tmp33;
    ca_.Bind(&block8, &tmp30, &tmp31, &tmp32, &tmp33);
    ca_.Goto(&block7, tmp30, tmp31, tmp32, tmp33);
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp34;
    compiler::TNode<Object> tmp35;
    compiler::TNode<Object> tmp36;
    compiler::TNode<Object> tmp37;
    ca_.Bind(&block7, &tmp34, &tmp35, &tmp36, &tmp37);
    compiler::TNode<IntPtrT> tmp38;
    USE(tmp38);
    tmp38 = ca_.UncheckedCast<IntPtrT>(CodeStubAssembler(state_).GetArgumentsLength(arguments));
    compiler::TNode<IntPtrT> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<BoolT> tmp40;
    USE(tmp40);
    tmp40 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).IntPtrGreaterThan(compiler::TNode<IntPtrT>{tmp38}, compiler::TNode<IntPtrT>{tmp39}));
    ca_.Branch(tmp40, &block9, &block10, tmp34, tmp35, tmp36, tmp37);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<Object> tmp43;
    compiler::TNode<Object> tmp44;
    ca_.Bind(&block9, &tmp41, &tmp42, &tmp43, &tmp44);
    compiler::TNode<IntPtrT> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<IntPtrT>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr8ATintptr17ATconstexpr_int31(2));
    compiler::TNode<Object> tmp46;
    USE(tmp46);
    tmp46 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetArgumentValue(arguments, compiler::TNode<IntPtrT>{tmp45}));
    ca_.Goto(&block12, tmp41, tmp42, tmp43, tmp44, tmp46);
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp47;
    compiler::TNode<Object> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    ca_.Bind(&block10, &tmp47, &tmp48, &tmp49, &tmp50);
    compiler::TNode<Oddball> tmp51;
    USE(tmp51);
    tmp51 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block11, tmp47, tmp48, tmp49, tmp50, tmp51);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp52;
    compiler::TNode<Object> tmp53;
    compiler::TNode<Object> tmp54;
    compiler::TNode<Object> tmp55;
    compiler::TNode<Object> tmp56;
    ca_.Bind(&block12, &tmp52, &tmp53, &tmp54, &tmp55, &tmp56);
    ca_.Goto(&block11, tmp52, tmp53, tmp54, tmp55, tmp56);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<Object> tmp59;
    compiler::TNode<Object> tmp60;
    compiler::TNode<Object> tmp61;
    ca_.Bind(&block11, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61);
    compiler::TNode<Object> tmp62;
    USE(tmp62);
    tmp62 = ca_.UncheckedCast<Object>(DataViewBuiltinsFromDSLAssembler(state_).DataViewSet(compiler::TNode<Context>{tmp57}, compiler::TNode<Object>{tmp58}, compiler::TNode<Object>{tmp59}, compiler::TNode<Object>{tmp60}, compiler::TNode<Object>{tmp61}, BIGINT64_ELEMENTS));
    arguments->PopAndReturn(tmp62);
  }
}

}  // namespace internal
}  // namespace v8

