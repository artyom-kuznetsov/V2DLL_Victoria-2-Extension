// FUN_0068f660 @ 0068f660 body=[[0068f660, 0068f70c]]


allocate_continuation_proxy * FUN_0068f660(void)

{
  task *ptVar1;
  int iVar2;
  allocate_continuation_proxy *in_ECX;
  uint local_8;
  
  if (*(uint *)(in_ECX + 0xc) < (uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 8))) {
    if ((*(uint *)(in_ECX + 0x28) < 4) && (((byte)in_ECX[-7] & 0x80) != 0)) {
      *(undefined4 *)(in_ECX + 0x28) = 4;
    }
    else if (*(uint *)(in_ECX + 0x28) == 1) goto LAB_0068f6fd;
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
    ptVar1 = tbb::internal::allocate_child_proxy::allocate((allocate_child_proxy *)ptVar1,0x2c);
    if (ptVar1 == (task *)0x0) {
      iVar2 = 0;
    }
    else {
      local_8 = (uint)in_ECX & 0xffffff00;
      iVar2 = FUN_0068fb20(local_8);
    }
    (**(code **)**(undefined4 **)(iVar2 + -0x18))(iVar2,iVar2 + -4);
    return in_ECX;
  }
LAB_0068f6fd:
  FUN_00685780(in_ECX + 0x10);
  return (allocate_continuation_proxy *)0x0;
}

