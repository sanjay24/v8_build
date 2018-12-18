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

BaseBuiltinsFromDSLAssembler::KeyValuePair CollectionsBuiltinsFromDSLAssembler::LoadKeyValuePairNoSideEffects(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::CodeAssemblerLabel* label_MayHaveSideEffects) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block6(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSArray> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase> block10(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase, FixedArray> block9(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray> block11(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray> block12(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block14(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block13(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block15(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object> block16(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object, Object> block18(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArray, Object, Object> block17(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase> block8(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase> block22(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedArrayBase, FixedDoubleArray> block21(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block23(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray> block24(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block26(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block25(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block27(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object> block28(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object, Object> block30(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase, FixedDoubleArray, Object, Object> block29(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, JSArray, Smi, FixedArrayBase> block20(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object> block34(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, JSReceiver> block33(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block32(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block2(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<JSArray> tmp2;
    USE(tmp2);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp2 = BaseBuiltinsFromDSLAssembler(state_).Cast13ATFastJSArray(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0);
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
    compiler::TNode<JSArray> tmp11;
    ca_.Bind(&block5, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    compiler::TNode<Smi> tmp12;
    USE(tmp12);
    tmp12 = ca_.UncheckedCast<Smi>(CodeStubAssembler(state_).LoadFastJSArrayLength(compiler::TNode<JSArray>{tmp11}));
    compiler::TNode<FixedArrayBase> tmp13;
    USE(tmp13);
    tmp13 = ca_.UncheckedCast<FixedArrayBase>(CodeStubAssembler(state_).LoadElements(compiler::TNode<JSObject>{tmp11}));
    compiler::TNode<FixedArray> tmp14;
    USE(tmp14);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp14 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATFixedArray(compiler::TNode<Context>{tmp7}, compiler::TNode<HeapObject>{tmp13}, &label0);
    ca_.Goto(&block9, tmp7, tmp8, tmp9, tmp11, tmp12, tmp13, tmp13, tmp14);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block10, tmp7, tmp8, tmp9, tmp11, tmp12, tmp13, tmp13);
    }
  }

  if (block10.is_used()) {
    compiler::TNode<Context> tmp15;
    compiler::TNode<Object> tmp16;
    compiler::TNode<Object> tmp17;
    compiler::TNode<JSArray> tmp18;
    compiler::TNode<Smi> tmp19;
    compiler::TNode<FixedArrayBase> tmp20;
    compiler::TNode<FixedArrayBase> tmp21;
    ca_.Bind(&block10, &tmp15, &tmp16, &tmp17, &tmp18, &tmp19, &tmp20, &tmp21);
    ca_.Goto(&block8, tmp15, tmp16, tmp17, tmp18, tmp19, tmp20);
  }

  if (block9.is_used()) {
    compiler::TNode<Context> tmp22;
    compiler::TNode<Object> tmp23;
    compiler::TNode<Object> tmp24;
    compiler::TNode<JSArray> tmp25;
    compiler::TNode<Smi> tmp26;
    compiler::TNode<FixedArrayBase> tmp27;
    compiler::TNode<FixedArrayBase> tmp28;
    compiler::TNode<FixedArray> tmp29;
    ca_.Bind(&block9, &tmp22, &tmp23, &tmp24, &tmp25, &tmp26, &tmp27, &tmp28, &tmp29);
    compiler::TNode<Smi> tmp30;
    USE(tmp30);
    tmp30 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp31;
    USE(tmp31);
    tmp31 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp26}, compiler::TNode<Smi>{tmp30}));
    ca_.Branch(tmp31, &block11, &block12, tmp22, tmp23, tmp24, tmp25, tmp26, tmp27, tmp29);
  }

  if (block11.is_used()) {
    compiler::TNode<Context> tmp32;
    compiler::TNode<Object> tmp33;
    compiler::TNode<Object> tmp34;
    compiler::TNode<JSArray> tmp35;
    compiler::TNode<Smi> tmp36;
    compiler::TNode<FixedArrayBase> tmp37;
    compiler::TNode<FixedArray> tmp38;
    ca_.Bind(&block11, &tmp32, &tmp33, &tmp34, &tmp35, &tmp36, &tmp37, &tmp38);
    compiler::TNode<Object> tmp39;
    USE(tmp39);
    tmp39 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedArray>{tmp38}, 0));
    ca_.Goto(&block14, tmp32, tmp33, tmp34, tmp35, tmp36, tmp37, tmp38, tmp39);
  }

  if (block12.is_used()) {
    compiler::TNode<Context> tmp40;
    compiler::TNode<Object> tmp41;
    compiler::TNode<Object> tmp42;
    compiler::TNode<JSArray> tmp43;
    compiler::TNode<Smi> tmp44;
    compiler::TNode<FixedArrayBase> tmp45;
    compiler::TNode<FixedArray> tmp46;
    ca_.Bind(&block12, &tmp40, &tmp41, &tmp42, &tmp43, &tmp44, &tmp45, &tmp46);
    compiler::TNode<Oddball> tmp47;
    USE(tmp47);
    tmp47 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block13, tmp40, tmp41, tmp42, tmp43, tmp44, tmp45, tmp46, tmp47);
  }

  if (block14.is_used()) {
    compiler::TNode<Context> tmp48;
    compiler::TNode<Object> tmp49;
    compiler::TNode<Object> tmp50;
    compiler::TNode<JSArray> tmp51;
    compiler::TNode<Smi> tmp52;
    compiler::TNode<FixedArrayBase> tmp53;
    compiler::TNode<FixedArray> tmp54;
    compiler::TNode<Object> tmp55;
    ca_.Bind(&block14, &tmp48, &tmp49, &tmp50, &tmp51, &tmp52, &tmp53, &tmp54, &tmp55);
    ca_.Goto(&block13, tmp48, tmp49, tmp50, tmp51, tmp52, tmp53, tmp54, tmp55);
  }

  if (block13.is_used()) {
    compiler::TNode<Context> tmp56;
    compiler::TNode<Object> tmp57;
    compiler::TNode<Object> tmp58;
    compiler::TNode<JSArray> tmp59;
    compiler::TNode<Smi> tmp60;
    compiler::TNode<FixedArrayBase> tmp61;
    compiler::TNode<FixedArray> tmp62;
    compiler::TNode<Object> tmp63;
    ca_.Bind(&block13, &tmp56, &tmp57, &tmp58, &tmp59, &tmp60, &tmp61, &tmp62, &tmp63);
    compiler::TNode<Smi> tmp64;
    USE(tmp64);
    tmp64 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp65;
    USE(tmp65);
    tmp65 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp60}, compiler::TNode<Smi>{tmp64}));
    ca_.Branch(tmp65, &block15, &block16, tmp56, tmp57, tmp58, tmp59, tmp60, tmp61, tmp62, tmp63);
  }

  if (block15.is_used()) {
    compiler::TNode<Context> tmp66;
    compiler::TNode<Object> tmp67;
    compiler::TNode<Object> tmp68;
    compiler::TNode<JSArray> tmp69;
    compiler::TNode<Smi> tmp70;
    compiler::TNode<FixedArrayBase> tmp71;
    compiler::TNode<FixedArray> tmp72;
    compiler::TNode<Object> tmp73;
    ca_.Bind(&block15, &tmp66, &tmp67, &tmp68, &tmp69, &tmp70, &tmp71, &tmp72, &tmp73);
    compiler::TNode<Object> tmp74;
    USE(tmp74);
    tmp74 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedArray>{tmp72}, 1));
    ca_.Goto(&block18, tmp66, tmp67, tmp68, tmp69, tmp70, tmp71, tmp72, tmp73, tmp74);
  }

  if (block16.is_used()) {
    compiler::TNode<Context> tmp75;
    compiler::TNode<Object> tmp76;
    compiler::TNode<Object> tmp77;
    compiler::TNode<JSArray> tmp78;
    compiler::TNode<Smi> tmp79;
    compiler::TNode<FixedArrayBase> tmp80;
    compiler::TNode<FixedArray> tmp81;
    compiler::TNode<Object> tmp82;
    ca_.Bind(&block16, &tmp75, &tmp76, &tmp77, &tmp78, &tmp79, &tmp80, &tmp81, &tmp82);
    compiler::TNode<Oddball> tmp83;
    USE(tmp83);
    tmp83 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block17, tmp75, tmp76, tmp77, tmp78, tmp79, tmp80, tmp81, tmp82, tmp83);
  }

  if (block18.is_used()) {
    compiler::TNode<Context> tmp84;
    compiler::TNode<Object> tmp85;
    compiler::TNode<Object> tmp86;
    compiler::TNode<JSArray> tmp87;
    compiler::TNode<Smi> tmp88;
    compiler::TNode<FixedArrayBase> tmp89;
    compiler::TNode<FixedArray> tmp90;
    compiler::TNode<Object> tmp91;
    compiler::TNode<Object> tmp92;
    ca_.Bind(&block18, &tmp84, &tmp85, &tmp86, &tmp87, &tmp88, &tmp89, &tmp90, &tmp91, &tmp92);
    ca_.Goto(&block17, tmp84, tmp85, tmp86, tmp87, tmp88, tmp89, tmp90, tmp91, tmp92);
  }

  if (block17.is_used()) {
    compiler::TNode<Context> tmp93;
    compiler::TNode<Object> tmp94;
    compiler::TNode<Object> tmp95;
    compiler::TNode<JSArray> tmp96;
    compiler::TNode<Smi> tmp97;
    compiler::TNode<FixedArrayBase> tmp98;
    compiler::TNode<FixedArray> tmp99;
    compiler::TNode<Object> tmp100;
    compiler::TNode<Object> tmp101;
    ca_.Bind(&block17, &tmp93, &tmp94, &tmp95, &tmp96, &tmp97, &tmp98, &tmp99, &tmp100, &tmp101);
    ca_.Goto(&block2, tmp100, tmp101);
  }

  if (block8.is_used()) {
    compiler::TNode<Context> tmp102;
    compiler::TNode<Object> tmp103;
    compiler::TNode<Object> tmp104;
    compiler::TNode<JSArray> tmp105;
    compiler::TNode<Smi> tmp106;
    compiler::TNode<FixedArrayBase> tmp107;
    ca_.Bind(&block8, &tmp102, &tmp103, &tmp104, &tmp105, &tmp106, &tmp107);
    compiler::TNode<FixedDoubleArray> tmp108;
    USE(tmp108);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp108 = BaseBuiltinsFromDSLAssembler(state_).Cast18ATFixedDoubleArray(compiler::TNode<Context>{tmp102}, compiler::TNode<HeapObject>{ca_.UncheckedCast<FixedArrayBase>(tmp107)}, &label0);
    ca_.Goto(&block21, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, ca_.UncheckedCast<FixedArrayBase>(tmp107), tmp108);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block22, tmp102, tmp103, tmp104, tmp105, tmp106, tmp107, ca_.UncheckedCast<FixedArrayBase>(tmp107));
    }
  }

  if (block22.is_used()) {
    compiler::TNode<Context> tmp109;
    compiler::TNode<Object> tmp110;
    compiler::TNode<Object> tmp111;
    compiler::TNode<JSArray> tmp112;
    compiler::TNode<Smi> tmp113;
    compiler::TNode<FixedArrayBase> tmp114;
    compiler::TNode<FixedArrayBase> tmp115;
    ca_.Bind(&block22, &tmp109, &tmp110, &tmp111, &tmp112, &tmp113, &tmp114, &tmp115);
    ca_.Goto(&block20, tmp109, tmp110, tmp111, tmp112, tmp113, tmp114);
  }

  if (block21.is_used()) {
    compiler::TNode<Context> tmp116;
    compiler::TNode<Object> tmp117;
    compiler::TNode<Object> tmp118;
    compiler::TNode<JSArray> tmp119;
    compiler::TNode<Smi> tmp120;
    compiler::TNode<FixedArrayBase> tmp121;
    compiler::TNode<FixedArrayBase> tmp122;
    compiler::TNode<FixedDoubleArray> tmp123;
    ca_.Bind(&block21, &tmp116, &tmp117, &tmp118, &tmp119, &tmp120, &tmp121, &tmp122, &tmp123);
    compiler::TNode<Smi> tmp124;
    USE(tmp124);
    tmp124 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<BoolT> tmp125;
    USE(tmp125);
    tmp125 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp120}, compiler::TNode<Smi>{tmp124}));
    ca_.Branch(tmp125, &block23, &block24, tmp116, tmp117, tmp118, tmp119, tmp120, tmp121, tmp123);
  }

  if (block23.is_used()) {
    compiler::TNode<Context> tmp126;
    compiler::TNode<Object> tmp127;
    compiler::TNode<Object> tmp128;
    compiler::TNode<JSArray> tmp129;
    compiler::TNode<Smi> tmp130;
    compiler::TNode<FixedArrayBase> tmp131;
    compiler::TNode<FixedDoubleArray> tmp132;
    ca_.Bind(&block23, &tmp126, &tmp127, &tmp128, &tmp129, &tmp130, &tmp131, &tmp132);
    compiler::TNode<Object> tmp133;
    USE(tmp133);
    tmp133 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedDoubleArray>{tmp132}, 0));
    ca_.Goto(&block26, tmp126, tmp127, tmp128, tmp129, tmp130, tmp131, tmp132, tmp133);
  }

  if (block24.is_used()) {
    compiler::TNode<Context> tmp134;
    compiler::TNode<Object> tmp135;
    compiler::TNode<Object> tmp136;
    compiler::TNode<JSArray> tmp137;
    compiler::TNode<Smi> tmp138;
    compiler::TNode<FixedArrayBase> tmp139;
    compiler::TNode<FixedDoubleArray> tmp140;
    ca_.Bind(&block24, &tmp134, &tmp135, &tmp136, &tmp137, &tmp138, &tmp139, &tmp140);
    compiler::TNode<Oddball> tmp141;
    USE(tmp141);
    tmp141 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block25, tmp134, tmp135, tmp136, tmp137, tmp138, tmp139, tmp140, tmp141);
  }

  if (block26.is_used()) {
    compiler::TNode<Context> tmp142;
    compiler::TNode<Object> tmp143;
    compiler::TNode<Object> tmp144;
    compiler::TNode<JSArray> tmp145;
    compiler::TNode<Smi> tmp146;
    compiler::TNode<FixedArrayBase> tmp147;
    compiler::TNode<FixedDoubleArray> tmp148;
    compiler::TNode<Object> tmp149;
    ca_.Bind(&block26, &tmp142, &tmp143, &tmp144, &tmp145, &tmp146, &tmp147, &tmp148, &tmp149);
    ca_.Goto(&block25, tmp142, tmp143, tmp144, tmp145, tmp146, tmp147, tmp148, tmp149);
  }

  if (block25.is_used()) {
    compiler::TNode<Context> tmp150;
    compiler::TNode<Object> tmp151;
    compiler::TNode<Object> tmp152;
    compiler::TNode<JSArray> tmp153;
    compiler::TNode<Smi> tmp154;
    compiler::TNode<FixedArrayBase> tmp155;
    compiler::TNode<FixedDoubleArray> tmp156;
    compiler::TNode<Object> tmp157;
    ca_.Bind(&block25, &tmp150, &tmp151, &tmp152, &tmp153, &tmp154, &tmp155, &tmp156, &tmp157);
    compiler::TNode<Smi> tmp158;
    USE(tmp158);
    tmp158 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).FromConstexpr5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<BoolT> tmp159;
    USE(tmp159);
    tmp159 = ca_.UncheckedCast<BoolT>(CodeStubAssembler(state_).SmiGreaterThan(compiler::TNode<Smi>{tmp154}, compiler::TNode<Smi>{tmp158}));
    ca_.Branch(tmp159, &block27, &block28, tmp150, tmp151, tmp152, tmp153, tmp154, tmp155, tmp156, tmp157);
  }

  if (block27.is_used()) {
    compiler::TNode<Context> tmp160;
    compiler::TNode<Object> tmp161;
    compiler::TNode<Object> tmp162;
    compiler::TNode<JSArray> tmp163;
    compiler::TNode<Smi> tmp164;
    compiler::TNode<FixedArrayBase> tmp165;
    compiler::TNode<FixedDoubleArray> tmp166;
    compiler::TNode<Object> tmp167;
    ca_.Bind(&block27, &tmp160, &tmp161, &tmp162, &tmp163, &tmp164, &tmp165, &tmp166, &tmp167);
    compiler::TNode<Object> tmp168;
    USE(tmp168);
    tmp168 = ca_.UncheckedCast<Object>(ArrayBuiltinsFromDSLAssembler(state_).LoadElementOrUndefined(compiler::TNode<FixedDoubleArray>{tmp166}, 1));
    ca_.Goto(&block30, tmp160, tmp161, tmp162, tmp163, tmp164, tmp165, tmp166, tmp167, tmp168);
  }

  if (block28.is_used()) {
    compiler::TNode<Context> tmp169;
    compiler::TNode<Object> tmp170;
    compiler::TNode<Object> tmp171;
    compiler::TNode<JSArray> tmp172;
    compiler::TNode<Smi> tmp173;
    compiler::TNode<FixedArrayBase> tmp174;
    compiler::TNode<FixedDoubleArray> tmp175;
    compiler::TNode<Object> tmp176;
    ca_.Bind(&block28, &tmp169, &tmp170, &tmp171, &tmp172, &tmp173, &tmp174, &tmp175, &tmp176);
    compiler::TNode<Oddball> tmp177;
    USE(tmp177);
    tmp177 = BaseBuiltinsFromDSLAssembler(state_).Undefined();
    ca_.Goto(&block29, tmp169, tmp170, tmp171, tmp172, tmp173, tmp174, tmp175, tmp176, tmp177);
  }

  if (block30.is_used()) {
    compiler::TNode<Context> tmp178;
    compiler::TNode<Object> tmp179;
    compiler::TNode<Object> tmp180;
    compiler::TNode<JSArray> tmp181;
    compiler::TNode<Smi> tmp182;
    compiler::TNode<FixedArrayBase> tmp183;
    compiler::TNode<FixedDoubleArray> tmp184;
    compiler::TNode<Object> tmp185;
    compiler::TNode<Object> tmp186;
    ca_.Bind(&block30, &tmp178, &tmp179, &tmp180, &tmp181, &tmp182, &tmp183, &tmp184, &tmp185, &tmp186);
    ca_.Goto(&block29, tmp178, tmp179, tmp180, tmp181, tmp182, tmp183, tmp184, tmp185, tmp186);
  }

  if (block29.is_used()) {
    compiler::TNode<Context> tmp187;
    compiler::TNode<Object> tmp188;
    compiler::TNode<Object> tmp189;
    compiler::TNode<JSArray> tmp190;
    compiler::TNode<Smi> tmp191;
    compiler::TNode<FixedArrayBase> tmp192;
    compiler::TNode<FixedDoubleArray> tmp193;
    compiler::TNode<Object> tmp194;
    compiler::TNode<Object> tmp195;
    ca_.Bind(&block29, &tmp187, &tmp188, &tmp189, &tmp190, &tmp191, &tmp192, &tmp193, &tmp194, &tmp195);
    ca_.Goto(&block2, tmp194, tmp195);
  }

  if (block20.is_used()) {
    compiler::TNode<Context> tmp196;
    compiler::TNode<Object> tmp197;
    compiler::TNode<Object> tmp198;
    compiler::TNode<JSArray> tmp199;
    compiler::TNode<Smi> tmp200;
    compiler::TNode<FixedArrayBase> tmp201;
    ca_.Bind(&block20, &tmp196, &tmp197, &tmp198, &tmp199, &tmp200, &tmp201);
    CodeStubAssembler(state_).Print("halting because of \'unreachable\' at ../../src/builtins/collections.tq:32:13");
    CodeStubAssembler(state_).Unreachable();
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp202;
    compiler::TNode<Object> tmp203;
    compiler::TNode<Object> tmp204;
    ca_.Bind(&block4, &tmp202, &tmp203, &tmp204);
    compiler::TNode<JSReceiver> tmp205;
    USE(tmp205);
    compiler::CodeAssemblerLabel label0(&ca_);
    tmp205 = BaseBuiltinsFromDSLAssembler(state_).Cast12ATJSReceiver(compiler::TNode<Context>{tmp202}, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp204)}, &label0);
    ca_.Goto(&block33, tmp202, tmp203, tmp204, ca_.UncheckedCast<Object>(tmp204), tmp205);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block34, tmp202, tmp203, tmp204, ca_.UncheckedCast<Object>(tmp204));
    }
  }

  if (block34.is_used()) {
    compiler::TNode<Context> tmp206;
    compiler::TNode<Object> tmp207;
    compiler::TNode<Object> tmp208;
    compiler::TNode<Object> tmp209;
    ca_.Bind(&block34, &tmp206, &tmp207, &tmp208, &tmp209);
    ca_.Goto(&block32, tmp206, tmp207, tmp208);
  }

  if (block33.is_used()) {
    compiler::TNode<Context> tmp210;
    compiler::TNode<Object> tmp211;
    compiler::TNode<Object> tmp212;
    compiler::TNode<Object> tmp213;
    compiler::TNode<JSReceiver> tmp214;
    ca_.Bind(&block33, &tmp210, &tmp211, &tmp212, &tmp213, &tmp214);
    ca_.Goto(&block1);
  }

  if (block32.is_used()) {
    compiler::TNode<Context> tmp215;
    compiler::TNode<Object> tmp216;
    compiler::TNode<Object> tmp217;
    ca_.Bind(&block32, &tmp215, &tmp216, &tmp217);
    CodeStubAssembler(state_).ThrowTypeError(compiler::TNode<Context>{tmp215}, MessageTemplate::kIteratorValueNotAnObject, compiler::TNode<Object>{ca_.UncheckedCast<Object>(tmp217)});
  }

  if (block1.is_used()) {
    ca_.Bind(&block1);
    ca_.Goto(label_MayHaveSideEffects);
  }

    compiler::TNode<Object> tmp218;
    compiler::TNode<Object> tmp219;
    ca_.Bind(&block2, &tmp218, &tmp219);
  return BaseBuiltinsFromDSLAssembler::KeyValuePair{compiler::TNode<Object>{tmp218}, compiler::TNode<Object>{tmp219}};
}

BaseBuiltinsFromDSLAssembler::KeyValuePair CollectionsBuiltinsFromDSLAssembler::LoadKeyValuePair(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o) {
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block0(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object> block5(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object, Object, Object, Object> block4(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Context, Object> block3(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
  compiler::CodeAssemblerParameterizedLabel<Object, Object> block1(&ca_, compiler::CodeAssemblerLabel::kNonDeferred);
    ca_.Goto(&block0, p_context, p_o);

  if (block0.is_used()) {
    compiler::TNode<Context> tmp0;
    compiler::TNode<Object> tmp1;
    ca_.Bind(&block0, &tmp0, &tmp1);
    compiler::TNode<Object> tmp2;
    USE(tmp2);
    compiler::TNode<Object> tmp3;
    USE(tmp3);
    compiler::CodeAssemblerLabel label0(&ca_);
    std::tie(tmp2, tmp3) = CollectionsBuiltinsFromDSLAssembler(state_).LoadKeyValuePairNoSideEffects(compiler::TNode<Context>{tmp0}, compiler::TNode<Object>{tmp1}, &label0).Flatten();
    ca_.Goto(&block4, tmp0, tmp1, tmp1, tmp2, tmp3);
    if (label0.is_used()) {
      ca_.Bind(&label0);
      ca_.Goto(&block5, tmp0, tmp1, tmp1);
    }
  }

  if (block5.is_used()) {
    compiler::TNode<Context> tmp4;
    compiler::TNode<Object> tmp5;
    compiler::TNode<Object> tmp6;
    ca_.Bind(&block5, &tmp4, &tmp5, &tmp6);
    ca_.Goto(&block3, tmp4, tmp5);
  }

  if (block4.is_used()) {
    compiler::TNode<Context> tmp7;
    compiler::TNode<Object> tmp8;
    compiler::TNode<Object> tmp9;
    compiler::TNode<Object> tmp10;
    compiler::TNode<Object> tmp11;
    ca_.Bind(&block4, &tmp7, &tmp8, &tmp9, &tmp10, &tmp11);
    ca_.Goto(&block1, tmp10, tmp11);
  }

  if (block3.is_used()) {
    compiler::TNode<Context> tmp12;
    compiler::TNode<Object> tmp13;
    ca_.Bind(&block3, &tmp12, &tmp13);
    compiler::TNode<Smi> tmp14;
    USE(tmp14);
    tmp14 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi17ATconstexpr_int31(0));
    compiler::TNode<Object> tmp15;
    USE(tmp15);
    tmp15 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp13}, compiler::TNode<Object>{tmp14}));
    compiler::TNode<Smi> tmp16;
    USE(tmp16);
    tmp16 = ca_.UncheckedCast<Smi>(BaseBuiltinsFromDSLAssembler(state_).Convert5ATSmi17ATconstexpr_int31(1));
    compiler::TNode<Object> tmp17;
    USE(tmp17);
    tmp17 = ca_.UncheckedCast<Object>(CodeStubAssembler(state_).GetProperty(compiler::TNode<Context>{tmp12}, compiler::TNode<Object>{tmp13}, compiler::TNode<Object>{tmp16}));
    ca_.Goto(&block1, tmp15, tmp17);
  }

    compiler::TNode<Object> tmp18;
    compiler::TNode<Object> tmp19;
    ca_.Bind(&block1, &tmp18, &tmp19);
  return BaseBuiltinsFromDSLAssembler::KeyValuePair{compiler::TNode<Object>{tmp18}, compiler::TNode<Object>{tmp19}};
}

}  // namespace internal
}  // namespace v8

