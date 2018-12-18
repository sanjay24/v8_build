#ifndef V8_TORQUE_TEST_FROM_DSL_BASE_H__
#define V8_TORQUE_TEST_FROM_DSL_BASE_H__

#include "src/compiler/code-assembler.h"
#include "src/code-stub-assembler.h"

namespace v8 {
namespace internal {

class TestBuiltinsFromDSLAssembler {
 public:
  explicit TestBuiltinsFromDSLAssembler(compiler::CodeAssemblerState* state) : state_(state), ca_(state) { USE(state_, ca_); }
  compiler::TNode<BoolT> ElementsKindTestHelper1(ElementsKind p_kind);
  compiler::TNode<BoolT> ElementsKindTestHelper2(ElementsKind p_kind);
  bool ElementsKindTestHelper3(ElementsKind p_kind);
  void LabelTestHelper1(compiler::CodeAssemblerLabel* label_Label1);
  void LabelTestHelper2(compiler::CodeAssemblerLabel* label_Label2, compiler::TypedCodeAssemblerVariable<Smi>* label_Label2_parameter_0);
  void LabelTestHelper3(compiler::CodeAssemblerLabel* label_Label3, compiler::TypedCodeAssemblerVariable<String>* label_Label3_parameter_0, compiler::TypedCodeAssemblerVariable<Smi>* label_Label3_parameter_1);
  void TestConstexpr1();
  void TestConstexprIf();
  void TestConstexprReturn();
  compiler::TNode<Oddball> TestGotoLabel();
  compiler::TNode<Oddball> TestGotoLabelWithOneParameter();
  compiler::TNode<Oddball> TestGotoLabelWithTwoParameters();
  void TestBuiltinSpecialization(compiler::TNode<Context> p_c);
  void LabelTestHelper4(bool p_flag, compiler::CodeAssemblerLabel* label_Label4, compiler::CodeAssemblerLabel* label_Label5);
  compiler::TNode<BoolT> CallLabelTestHelper4(bool p_flag);
  compiler::TNode<Oddball> TestPartiallyUnusedLabel();
  compiler::TNode<Object> GenericMacroTest22UT12ATHeapObject5ATSmi(compiler::TNode<Object> p_param2);
  compiler::TNode<Object> GenericMacroTestWithLabels22UT12ATHeapObject5ATSmi(compiler::TNode<Object> p_param2, compiler::CodeAssemblerLabel* label_Y);
  void TestMacroSpecialization();
  compiler::TNode<Oddball> TestFunctionPointers(compiler::TNode<Context> p_context);
  compiler::TNode<Oddball> TestVariableRedeclaration(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestTernaryOperator(compiler::TNode<Smi> p_x);
  void TestFunctionPointerToGeneric(compiler::TNode<Context> p_c);
  compiler::TNode<Code> TestTypeAlias(compiler::TNode<Code> p_x);
  compiler::TNode<Oddball> TestUnsafeCast(compiler::TNode<Context> p_context, compiler::TNode<Number> p_n);
  void TestHexLiteral();
  void TestLargeIntegerLiterals(compiler::TNode<Context> p_c);
  void TestMultilineAssert();
  void TestNewlineInString();
  int31_t kConstexprConst();
  compiler::TNode<IntPtrT> kIntptrConst();
  compiler::TNode<Smi> kSmiConst();
  void TestModuleConstBindings();
  void TestLocalConstBindings();
  struct TestStructA {
    compiler::TNode<FixedArray> indexes;
    compiler::TNode<Smi> i;
    compiler::TNode<Number> k;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
      return std::tuple_cat(std::make_tuple(indexes), std::make_tuple(i), std::make_tuple(k));
    }
  };
  struct TestStructB {
    TestBuiltinsFromDSLAssembler::TestStructA x;
    compiler::TNode<Smi> y;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<Smi>> Flatten() const {
      return std::tuple_cat(x.Flatten(), std::make_tuple(y));
    }
  };
  compiler::TNode<Smi> TestStruct1(TestBuiltinsFromDSLAssembler::TestStructA p_i);
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct2(compiler::TNode<Context> p_context);
  TestBuiltinsFromDSLAssembler::TestStructA TestStruct3(compiler::TNode<Context> p_context);
  struct TestStructC {
    TestBuiltinsFromDSLAssembler::TestStructA x;
    TestBuiltinsFromDSLAssembler::TestStructA y;

    std::tuple<compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>, compiler::TNode<FixedArray>, compiler::TNode<Smi>, compiler::TNode<Number>> Flatten() const {
      return std::tuple_cat(x.Flatten(), y.Flatten());
    }
  };
  TestBuiltinsFromDSLAssembler::TestStructC TestStruct4(compiler::TNode<Context> p_context);
  void TestForLoop();
  void TestSubtyping(compiler::TNode<Smi> p_x);
  compiler::TNode<Int32T> TypeswitchExample(compiler::TNode<Context> p_context, compiler::TNode<Object> p_x);
  void TestTypeswitch(compiler::TNode<Context> p_context);
  void TestGenericOverload(compiler::TNode<Context> p_context);
  void BoolToBranch(compiler::TNode<BoolT> p_x, compiler::CodeAssemblerLabel* label_Taken, compiler::CodeAssemblerLabel* label_NotTaken);
  compiler::TNode<BoolT> TestOrAnd1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestOrAnd2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestOrAnd3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr1(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr2(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  compiler::TNode<BoolT> TestAndOr3(compiler::TNode<BoolT> p_x, compiler::TNode<BoolT> p_y, compiler::TNode<BoolT> p_z);
  void TestLogicalOperators();
  compiler::TNode<Smi> TestCall(compiler::TNode<Smi> p_i, compiler::CodeAssemblerLabel* label_A);
  void TestOtherwiseWithCode1();
  void TestOtherwiseWithCode2();
  void TestOtherwiseWithCode3();
  void TestForwardLabel();
  void TestQualifiedAccess(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestCatch1(compiler::TNode<Context> p_context);
  void TestCatch2Wrapper(compiler::TNode<Context> p_context);
  compiler::TNode<Smi> TestCatch2(compiler::TNode<Context> p_context);
  void TestCatch3WrapperWithLabel(compiler::TNode<Context> p_context, compiler::CodeAssemblerLabel* label_Abort);
  compiler::TNode<Smi> TestCatch3(compiler::TNode<Context> p_context);
  void TestIterator(compiler::TNode<Context> p_context, compiler::TNode<Object> p_o, compiler::TNode<Map> p_map);
  void TestFrame1(compiler::TNode<Context> p_context);
  compiler::TNode<Object> GenericMacroTest5ATSmi(compiler::TNode<Smi> p_param);
  compiler::TNode<Object> GenericMacroTestWithLabels5ATSmi(compiler::TNode<Smi> p_param, compiler::CodeAssemblerLabel* label_X);
  compiler::TNode<Object> IncrementIfSmi36UT12ATFixedArray12ATHeapNumber5ATSmi(compiler::TNode<Object> p_x);
  compiler::TNode<Smi> ExampleGenericOverload5ATSmi(compiler::TNode<Smi> p_o);
  compiler::TNode<Object> ExampleGenericOverload22UT12ATHeapObject5ATSmi(compiler::TNode<Object> p_o);
 private:
  compiler::CodeAssemblerState* const state_;
  compiler::CodeAssembler ca_;}; 

}  // namespace internal
}  // namespace v8

#endif  // V8_TORQUE_TEST_FROM_DSL_BASE_H__
