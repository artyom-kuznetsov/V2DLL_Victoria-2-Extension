// FUN_0068f710 @ 0068f710 body=[[0068f710, 0068f7fc]]


allocate_continuation_proxy * FUN_0068f710(void)

{
  task *ptVar1;
  allocate_continuation_proxy *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(in_ECX + 4);
  iVar3 = *(int *)(in_ECX + 8);
  if (*(uint *)(in_ECX + 0xc) < (uint)(iVar2 - iVar3)) {
    if ((*(uint *)(in_ECX + 0x14) < 4) && (((byte)in_ECX[-7] & 0x80) != 0)) {
      *(undefined4 *)(in_ECX + 0x14) = 4;
    }
    else if (*(uint *)(in_ECX + 0x14) == 1) goto joined_r0x0068f7df;
    ptVar1 = tbb::internal::allocate_continuation_proxy::allocate(in_ECX,4);
    if (ptVar1 == (task *)0x0) {
      ptVar1 = (task *)0x0;
    }
    else {
      ptVar1[-7] = (task)0x1;
      *(undefined ***)ptVar1 = tbb::empty_task::vftable;
    }
    in_ECX[-8] = (allocate_continuation_proxy)0x3;
    *(task **)(in_ECX + -0x14) = ptVar1;
    *(undefined4 *)(in_ECX + -0x20) = *(undefined4 *)(ptVar1 + -0x20);
    *(undefined4 *)(ptVar1 + -0x10) = 2;
    ptVar1 = tbb::internal::allocate_child_proxy::allocate((allocate_child_proxy *)ptVar1,0x18);
    if (ptVar1 == (task *)0x0) {
      ptVar1 = (task *)0x0;
    }
    else {
      ptVar1[-7] = (task)0x1;
      *(undefined ***)ptVar1 =
           tbb::internal::
           start_for<tbb::blocked_range<unsigned_int>,_anon_669BE687::ProcessPopStatisticsFunctor,tbb::auto_partitioner>
           ::vftable;
      *(undefined4 *)(ptVar1 + 4) = *(undefined4 *)(in_ECX + 4);
      iVar2 = ((uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 8)) >> 1) + *(int *)(in_ECX + 8);
      *(int *)(in_ECX + 4) = iVar2;
      *(int *)(ptVar1 + 8) = iVar2;
      *(undefined4 *)(ptVar1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
      *(undefined4 *)(ptVar1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
      *(uint *)(in_ECX + 0x14) = *(uint *)(in_ECX + 0x14) >> 1;
      *(undefined4 *)(ptVar1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
    }
    (**(code **)**(undefined4 **)(ptVar1 + -0x18))(ptVar1,ptVar1 + -4);
    return in_ECX;
  }
joined_r0x0068f7df:
  for (; iVar3 != iVar2; iVar3 = iVar3 + 1) {
    FUN_00520150(*(undefined4 *)(**(int **)(in_ECX + 0x10) + iVar3 * 4));
  }
  return (allocate_continuation_proxy *)0x0;
}

