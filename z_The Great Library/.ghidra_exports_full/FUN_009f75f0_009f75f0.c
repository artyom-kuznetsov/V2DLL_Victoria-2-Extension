// FUN_009f75f0 @ 009f75f0 body=[[009f75f0, 009f7644] [009f7648, 009f7701] [009f7705, 009f777d] [009f7781, 009f77a0] [009f77a4, 009f77b8]]


int FUN_009f75f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *in_ECX;
  undefined4 local_70 [5];
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  undefined4 local_38 [4];
  int local_28;
  uint local_24;
  int local_1c;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4e9b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = (**(code **)(*in_ECX + 0x5c))(local_70);
  local_14[0] = 10;
  iVar2 = FUN_005484e0(uVar1,local_14,1);
  local_14[0] = iVar2 == -1;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  if ((bool)local_14[0]) {
    piVar3 = (int *)(**(code **)(*in_ECX + 0x58))();
    iVar2 = in_ECX[10];
    uVar4 = (**(code **)(*piVar3 + 4))();
    ExceptionList = local_10;
    return iVar2 % (int)(uVar4 & 0xffff);
  }
  (**(code **)(*in_ECX + 0x5c))(local_38);
  local_8 = 0;
  local_1c = 0;
  local_14[0] = 10;
  iVar2 = FUN_005484e0(local_38,local_14,1);
  if (iVar2 != -1) {
    local_14[0] = 10;
    do {
      iVar2 = local_28;
      if (param_1 <= local_1c) break;
      local_18[0] = 10;
      FUN_005484e0(local_38,local_18,1);
      uVar1 = FUN_009895f0(iVar2);
      local_8._0_1_ = 1;
      FUN_00408ed0(uVar1,0,0xffffffff);
      local_8 = (uint)local_8._1_3_ << 8;
      if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_70[0]);
      }
      local_1c = local_1c + 1;
      iVar2 = FUN_005484e0(local_38,local_14,1);
    } while (iVar2 != -1);
  }
  param_1._0_1_ = 10;
  iVar2 = FUN_005484e0(local_38,&param_1,1);
  if (iVar2 != -1) {
    param_1._0_1_ = 10;
    uVar1 = FUN_005484e0(local_38,&param_1,1);
    iVar2 = FUN_009895f0(uVar1);
    local_28 = *(int *)(iVar2 + 0x10);
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
  }
  if (local_24 < 0x10) {
    ExceptionList = local_10;
    return local_28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

