// FUN_0068f3f0 @ 0068f3f0 body=[[0068f3f0, 0068f4bf]]


void FUN_0068f3f0(undefined4 param_1)

{
  int iVar1;
  uint *in_ECX;
  undefined4 *local_124;
  allocate_root_with_context_proxy *local_120;
  task *local_11c;
  undefined4 local_118 [32];
  undefined4 local_98;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3af3d;
  local_14 = ExceptionList;
  if (in_ECX[1] < *in_ECX) {
    local_118[0] = 1;
    local_98 = 0x10001;
    ExceptionList = &local_14;
    tbb::task_group_context::init((task_group_context *)local_118);
    local_c = 0;
    local_124 = local_118;
    local_120 = (allocate_root_with_context_proxy *)&local_124;
    local_11c = tbb::internal::allocate_root_with_context_proxy::allocate(local_120,0x2c);
    local_c._0_1_ = 1;
    if (local_11c == (task *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0068f5b0(local_11c,param_1);
    }
    local_c = (uint)local_c._1_3_ << 8;
    (**(code **)(**(int **)(iVar1 + -0x18) + 8))(iVar1,iVar1 + -4);
    local_c = 0xffffffff;
    tbb::task_group_context::~task_group_context((task_group_context *)local_118);
  }
  ExceptionList = local_14;
  return;
}

