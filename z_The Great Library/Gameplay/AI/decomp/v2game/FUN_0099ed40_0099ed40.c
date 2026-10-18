// FUN_0099ed40 @ 0099ed40 body=[[0099ed40, 0099ee20]]


allocate_continuation_proxy * FUN_0099ed40(void)

{
  task *ptVar1;
  allocate_continuation_proxy *in_ECX;
  int iVar2;
  
  if (*(uint *)(in_ECX + 0xc) < (uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 8))) {
    if ((*(uint *)(in_ECX + 0x24) < 4) && (((byte)in_ECX[-7] & 0x80) != 0)) {
      *(undefined4 *)(in_ECX + 0x24) = 4;
    }
    else if (*(uint *)(in_ECX + 0x24) == 1) goto LAB_0099ee11;
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
    ptVar1 = tbb::internal::allocate_child_proxy::allocate((allocate_child_proxy *)ptVar1,0x28);
    if (ptVar1 == (task *)0x0) {
      ptVar1 = (task *)0x0;
    }
    else {
      ptVar1[-7] = (task)0x1;
      *(undefined ***)ptVar1 = &PTR_FUN_00e384c8;
      *(undefined4 *)(ptVar1 + 4) = *(undefined4 *)(in_ECX + 4);
      iVar2 = ((uint)(*(int *)(in_ECX + 4) - *(int *)(in_ECX + 8)) >> 1) + *(int *)(in_ECX + 8);
      *(int *)(in_ECX + 4) = iVar2;
      *(int *)(ptVar1 + 8) = iVar2;
      *(undefined4 *)(ptVar1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
      *(undefined8 *)(ptVar1 + 0x10) = *(undefined8 *)(in_ECX + 0x10);
      *(undefined8 *)(ptVar1 + 0x18) = *(undefined8 *)(in_ECX + 0x18);
      *(undefined4 *)(ptVar1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
      *(uint *)(in_ECX + 0x24) = *(uint *)(in_ECX + 0x24) >> 1;
      *(undefined4 *)(ptVar1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
    }
    (**(code **)**(undefined4 **)(ptVar1 + -0x18))(ptVar1,ptVar1 + -4);
    return in_ECX;
  }
LAB_0099ee11:
  FUN_0099a630();
  return (allocate_continuation_proxy *)0x0;
}

