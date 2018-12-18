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

ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo ArgumentsBuiltinsFromDSLAssembler::GetArgumentsFrameAndCount(compiler::TNode<Context> p_context, compiler::TNode<JSFunction> p_f) {
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT> block3(&ca_, compiler::CodeAssemblerLabel::kDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block7(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT, RawPtrT> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, JSFunction, RawPtrT, SharedFunctionInfo, BInt, BInt, RawPtrT> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<RawPtrT, BInt, BInt> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_f);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<JSFunction> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<RawPtrT> tmp2;
    USE(tmp2);
    tmp2 = ca_.UncheckedCast<RawPtrT>(CodeStubAssembler(state_).LoadParentFramePointer());
    compiler::TNode<JSFunction> tmp3;
    USE(tmp3);
    tmp3 = ca_.UncheckedCast<JSFunction>(BaseBuiltinsFromDSLAssembler(state_).LoadFunctionFromFrame(compiler::TNode<RawPtrT>{tmp2}));
    compiler::TNode<BoolT> tmp4;
    USE(tmp4);
    tmp4 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).WordEqual(compiler::TNode<Object>{tmp3}, compiler::TNode<Object>{tmp1}));
    ca_.Branch(tmp4, &block2, &block3, tmp0, tmp1, tmp2);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp5;
    compiler::TNode<JSFunction> tmp6;
    compiler::TNode<RawPtrT> tmp7;
    ca_.Bind(&block3, &tmp5, &tmp6, &tmp7);
    CodeStubAssembler(state_).FailAssert("Torque assert \'frame.function == f\' failed", "../../src/builtins/arguments.tq", 27);
  }

  if (block2.is_used()) {
    compiler::TNode<Context> tmp8;
    compiler::TNode<JSFunction> tmp9;
    compiler::TNode<RawPtrT> tmp10;
    ca_.Bind(&block2, &tmp8, &tmp9, &tmp10);
    compiler::TNode<SharedFunctionInfo> tmp11;
    USE(tmp11);
    tmp11 = ca_.UncheckedCast<SharedFunctionInfo>(CodeStubAssembler(state_).LoadJSFunctionSharedFunctionInfo(compiler::TNode<JSFunction>{tmp9}));
    compiler::TNode<Int32T> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Int32T>(CodeStubAssembler(state_).LoadSharedFunctionInfoFormalParameterCount(compiler::TNode<SharedFunctionInfo>{tmp11}));
    compiler::TNode<BInt> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint7ATint32(compiler::TNode<Int32T>{tmp12}));
    compiler::TNode<RawPtrT> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<RawPtrT>(BaseBuiltinsFromDSLAssembler(state_).LoadCallerFromFrame(compiler::TNode<RawPtrT>{tmp10}));
    compiler::TNode<RawPtrT> tmp15;
    USE(tmp15);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp15 = BaseBuiltinsFromDSLAssembler(state_).Cast23ATArgumentsAdaptorFrame(compiler::TNode<Context>{tmp8}, compiler::TNode<RawPtrT>{tmp14}, &label0);
    ca_.Goto(&block6, tmp8, tmp9, tmp10, tmp11, tmp13, tmp13, tmp14, tmp15);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block7, tmp8, tmp9, tmp10, tmp11, tmp13, tmp13, tmp14);
    }
  }

  if (block7.is_used()) {
    compiler::TNode<Context> tmp16;
    compiler::TNode<JSFunction> tmp17;
    compiler::TNode<RawPtrT> tmp18;
    compiler::TNode<SharedFunctionInfo> tmp19;
    compiler::TNode<BInt> tmp20;
    compiler::TNode<BInt> tmp21;
    compiler::TNode<RawPtrT> tmp22;
    ca_.Bind(&block7, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21, &tmp22);
    ca_.Goto(&block5, tmp16, tmp17, tmp18, tmp19, tmp20, tmp21);
  }

  if (block6.is_used()) {
    compiler::TNode<Context> tmp23;
    compiler::TNode<JSFunction> tmp24;
    compiler::TNode<RawPtrT> tmp25;
    compiler::TNode<SharedFunctionInfo> tmp26;
    compiler::TNode<BInt> tmp27;
    compiler::TNode<BInt> tmp28;
    compiler::TNode<RawPtrT> tmp29;
    compiler::TNode<RawPtrT> tmp30;
    ca_.Bind(&block6, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29, &tmp30);
    ca_.Goto(&block4, tmp23, tmp24, tmp25, tmp26, tmp27, tmp28, tmp30);
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp31;
    compiler::TNode<JSFunction> tmp32;
    compiler::TNode<RawPtrT> tmp33;
    compiler::TNode<SharedFunctionInfo> tmp34;
    compiler::TNode<BInt> tmp35;
    compiler::TNode<BInt> tmp36;
    ca_.Bind(&block5, &tmp31, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36);
    ca_.Goto(&block1, tmp33, tmp36, tmp35);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp37;
    compiler::TNode<JSFunction> tmp38;
    compiler::TNode<RawPtrT> tmp39;
    compiler::TNode<SharedFunctionInfo> tmp40;
    compiler::TNode<BInt> tmp41;
    compiler::TNode<BInt> tmp42;
    compiler::TNode<RawPtrT> tmp43;
    ca_.Bind(&block4, &tmp37, &tmp38, &tmp39, &tmp40, &tmp41, &tmp42, &tmp43);
    compiler::TNode<Smi> tmp44;
    USE(tmp44);
    tmp44 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).LoadLengthFromAdapterFrame(compiler::TNode<Context>{tmp37}, compiler::TNode<RawPtrT>{tmp43}));
    compiler::TNode<BInt> tmp45;
    USE(tmp45);
    tmp45 = ca_.UncheckedCast<BInt>(BaseBuiltinsFromDSLAssembler(state_).Convert6ATbint5ATSmi(compiler::TNode<Smi>{tmp44}));
    ca_.Goto(&block1, tmp43, tmp45, tmp41);
  }

    compiler::TNode<RawPtrT> tmp46;
    compiler::TNode<BInt> tmp47;
    compiler::TNode<BInt> tmp48;
    ca_.Bind(&block1, &tmp46, &tmp47, &tmp48);
  return ArgumentsBuiltinsFromDSLAssembler::ArgumentsInfo{compiler::TNode<RawPtrT>{tmp46}, compiler::TNode<BInt>{tmp47}, compiler::TNode<BInt>{tmp48}};
}

}  // namespace internal
}  // namespace v8

