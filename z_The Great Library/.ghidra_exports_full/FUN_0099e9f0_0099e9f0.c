// FUN_0099e9f0 @ 0099e9f0 body=[[0099e9f0, 0099eaab]]


void FUN_0099e9f0(undefined4 param_1)

{
  int iVar1;
  uint *in_ECX;
  undefined4 local_120 [32];
  undefined4 local_a0;
  task *local_20;
  allocate_root_with_context_proxy *local_1c;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a897;
  local_10 = ExceptionList;
  if (in_ECX[1] < *in_ECX) {
    local_120[0] = 1;
    local_a0 = 0x10001;
    ExceptionList = &local_10;
    tbb::task_group_context::init((task_group_context *)local_120);
    local_8 = 0;
    local_18[0] = local_120;
    local_1c = (allocate_root_with_context_proxy *)local_18;
    local_20 = tbb::internal::allocate_root_with_context_proxy::allocate(local_1c,0x28);
    local_8._0_1_ = 1;
    if (local_20 == (task *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0099eb30(local_20,param_1);
    }
    local_8 = (uint)local_8._1_3_ << 8;
    (**(code **)(**(int **)(iVar1 + -0x18) + 8))(iVar1,iVar1 + -4);
    local_8 = 0xffffffff;
    tbb::task_group_context::~task_group_context((task_group_context *)local_120);
  }
  ExceptionList = local_10;
  return;
}

