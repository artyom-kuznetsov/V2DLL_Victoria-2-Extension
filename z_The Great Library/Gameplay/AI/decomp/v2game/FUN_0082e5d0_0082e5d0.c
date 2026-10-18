// FUN_0082e5d0 @ 0082e5d0 body=[[0082e5d0, 0082e77d]]


undefined4 FUN_0082e5d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int unaff_ESI;
  int *local_28;
  undefined4 local_24;
  int local_20;
  undefined1 local_1c;
  undefined4 local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fc73;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_005cc3e0();
  if (cVar1 != '\0') {
    ExceptionList = local_10;
    return 3;
  }
  if (unaff_ESI != 0) {
    if (unaff_ESI == *(int *)(in_ECX[0x37] + 0x58)) {
      if (0 < in_ECX[0x28]) {
        FUN_0082e780();
      }
    }
    else if (((in_ECX[0x28] < 1) || (iVar2 = FUN_00826f50(), *(int *)(iVar2 + 0x58) != unaff_ESI))
            || (in_ECX[0x1d] != 0)) {
      local_14 = CSafePathFind::vftable;
      local_28 = (int *)0x0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_8 = 0;
      cVar1 = FUN_005b8500(&local_14,in_ECX,
                           *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + unaff_ESI * 4),&local_28
                          );
      if (cVar1 == '\0') {
        FUN_00849e90();
        ExceptionList = local_10;
        return 2;
      }
      if (0 < local_20) {
        uVar4 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *local_28 * 4);
        uVar3 = (**(code **)(*in_ECX + 0x2c))(uVar4);
        cVar1 = FUN_0082a880(param_1,uVar3,uVar4);
        if (cVar1 == '\0') {
          FUN_00849e90();
          ExceptionList = local_10;
          return 4;
        }
      }
      iVar2 = FUN_00aae9af(0x90);
      local_8._0_1_ = 1;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_005de9d0(iVar2,in_ECX,&local_28);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
      (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
      in_ECX[0x28] = unaff_ESI;
      FUN_00849e90();
      ExceptionList = local_10;
      return 0;
    }
  }
  ExceptionList = local_10;
  return 1;
}

