// FUN_0068f4c0 @ 0068f4c0 body=[[0068f4c0, 0068f5ad]]


void FUN_0068f4c0(undefined4 *param_1)

{
  task *ptVar1;
  uint uVar2;
  uint *unaff_EDI;
  undefined4 *local_124;
  allocate_root_with_context_proxy *local_120;
  task *local_11c;
  undefined4 local_118 [32];
  undefined4 local_98;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b3af08;
  local_14 = ExceptionList;
  if (unaff_EDI[1] < *unaff_EDI) {
    local_118[0] = 1;
    local_98 = 0x10001;
    ExceptionList = &local_14;
    tbb::task_group_context::init((task_group_context *)local_118);
    local_c = 0;
    local_124 = local_118;
    local_120 = (allocate_root_with_context_proxy *)&local_124;
    ptVar1 = tbb::internal::allocate_root_with_context_proxy::allocate(local_120,0x18);
    local_11c = ptVar1;
    if (ptVar1 == (task *)0x0) {
      ptVar1 = (task *)0x0;
    }
    else {
      ptVar1[-7] = (task)0x1;
      local_c = CONCAT31(local_c._1_3_,2);
      *(undefined ***)ptVar1 =
           tbb::internal::
           start_for<tbb::blocked_range<unsigned_int>,_anon_669BE687::ProcessPopStatisticsFunctor,tbb::auto_partitioner>
           ::vftable;
      *(undefined8 *)(ptVar1 + 4) = *(undefined8 *)unaff_EDI;
      *(uint *)(ptVar1 + 0xc) = unaff_EDI[2];
      *(undefined4 *)(ptVar1 + 0x10) = *param_1;
      uVar2 = tbb::internal::get_initial_auto_partitioner_divisor();
      *(uint *)(ptVar1 + 0x14) = uVar2;
    }
    local_c = local_c & 0xffffff00;
    (**(code **)(**(int **)(ptVar1 + -0x18) + 8))(ptVar1,ptVar1 + -4);
    local_c = 0xffffffff;
    tbb::task_group_context::~task_group_context((task_group_context *)local_118);
  }
  ExceptionList = local_14;
  return;
}

