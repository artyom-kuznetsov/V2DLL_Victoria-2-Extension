// FUN_00a635c0 @ 00a635c0 body=[[00a635c0, 00a637a6] [00a637aa, 00a637be]]


undefined4 * FUN_00a635c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  void *_Dst;
  hostent *phVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  char *name;
  ulong in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4847b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_00a5ff00(param_1,param_2);
  *param_1 = &PTR_FUN_00e427c8;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  local_8._0_1_ = 3;
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  name = (char *)(param_1 + 0x33);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0xf;
  param_1[0x37] = 0;
  *name = '\0';
  param_1[0x3e] = 0;
  local_8._0_1_ = 6;
  param_1[0x3f] = &PTR_FUN_00e427b0;
  _Dst = tbb::internal::NFS_Allocate(1,0x220,(void *)0x0);
  param_1[0x40] = _Dst;
  _memset(_Dst,0,0x220);
  *(undefined4 *)(param_1[0x40] + 0x104) = 4;
  *(undefined4 *)(param_1[0x40] + 0x100) = 0x20;
  param_1[0x3f] = &PTR_FUN_00e4279c;
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_00408ed0(&param_3,0,0xffffffff);
  param_1[5] = in_stack_00000028;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  if (0xf < (uint)param_1[0x38]) {
    name = *(char **)name;
  }
  phVar1 = gethostbyname(name);
  if ((phVar1 == (hostent *)0x0) || (phVar1->h_addrtype != 2)) {
    uVar2 = inet_addr(name);
    if (uVar2 == 0xffffffff) {
      uVar2 = in_stack_00000020;
    }
  }
  else {
    uVar2 = *(ulong *)*phVar1->h_addr_list;
  }
  param_1[0x3d] = uVar2;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)((int)param_1 + 0xc5) = 0;
  iVar3 = FUN_00a8a820(0,0xff,in_stack_0000002c,in_stack_00000030);
  param_1[6] = iVar3;
  *(undefined4 *)(iVar3 + 0x17cc) = 1;
  param_1[0x42] = 1;
  piVar4 = DAT_00f20c18;
  param_1[8] = 0x23;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_00aae9af(4);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
      DAT_00f20c18 = piVar4;
    }
    else {
      *piVar4 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar4;
    }
  }
  piVar4 = (int *)(**(code **)(*piVar4 + 4))();
  param_1[0x2f] = piVar4;
  (**(code **)(*piVar4 + 8))();
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_3);
}

