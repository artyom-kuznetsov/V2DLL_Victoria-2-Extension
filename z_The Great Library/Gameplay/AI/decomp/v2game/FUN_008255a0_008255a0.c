// FUN_008255a0 @ 008255a0 body=[[008255a0, 00825800]]


undefined4 FUN_008255a0(undefined4 param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  float in_XMM0_Da;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ae4e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005cc3e0();
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 3;
  }
  iVar2 = *(int *)(param_2 + 0x58);
  if (iVar2 == *(int *)(in_ECX[0x37] + 0x58)) {
    if (0 < in_ECX[0x28]) {
      in_ECX[0x28] = 0;
      iVar2 = FUN_00aae9af(0x68);
      local_8 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005df690(iVar2,in_ECX,0);
      }
      local_8 = 0xffffffff;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
    }
    ExceptionList = local_10;
    return 1;
  }
  if (((0 < in_ECX[0x28]) && (iVar4 = FUN_00826f50(), *(int *)(iVar4 + 0x58) == iVar2)) &&
     (in_ECX[0x1d] == 0)) {
    ExceptionList = local_10;
    return 1;
  }
  cVar1 = (**(code **)(*in_ECX + 0x88))(param_2);
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return 3;
  }
  if (((*(char *)(*(int *)(in_ECX[0x37] + 0x5c) + 0x2a) != '\0') && (param_3 == '\0')) &&
     (FUN_00827410(param_1,*(undefined4 *)
                            (*(int *)(DAT_012588e8 + 0xacc) +
                            *(int *)(*(int *)(in_ECX[0x37] + 0x158) + 0x18) * 4),1),
     in_XMM0_Da < DAT_00f092fc)) {
    ExceptionList = local_10;
    return 4;
  }
  local_14 = CSafePathFind::vftable;
  local_28 = (int *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 1;
  cVar1 = FUN_005b8500(&local_14,in_ECX,param_2,&local_28);
  if (cVar1 == '\0') {
    FUN_00849e90();
    ExceptionList = local_10;
    return 2;
  }
  if (((0 < local_20) && (param_3 == '\0')) &&
     (FUN_00827410(param_1,*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *local_28 * 4),0),
     in_XMM0_Da < DAT_00f092fc)) {
    FUN_00849e90();
    ExceptionList = local_10;
    return 4;
  }
  iVar2 = FUN_00aae9af(0x90);
  local_8._0_1_ = 2;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_005de9d0(iVar2,in_ECX,&local_28);
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  in_ECX[0x28] = *(int *)(param_2 + 0x58);
  FUN_00849e90();
  ExceptionList = local_10;
  return 0;
}

