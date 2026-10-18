// FUN_009f6db0 @ 009f6db0 body=[[009f6db0, 009f6e8e] [009f6e92, 009f6eb2] [009f6eb6, 009f6f5d] [009f6f61, 009f6f81] [009f6f85, 009f6fa7] [009f6fab, 009f6ffa] [009f6ffe, 009f7010]]


void FUN_009f6db0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 local_84;
  uint local_70;
  undefined4 local_68;
  uint local_54;
  undefined4 local_4c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ea28;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = (**(code **)(*in_ECX + 0xb4))();
  if (cVar1 != '\0') {
    iVar2 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
    iVar3 = FUN_009f7c00((short)in_ECX[0x1c],*(undefined2 *)((int)in_ECX + 0x6e));
    if (iVar2 < iVar3) {
      iVar2 = in_ECX[10];
      FUN_009f7c00((short)in_ECX[0x1c],*(undefined2 *)((int)in_ECX + 0x6e));
      local_14 = FUN_009895f0(iVar2);
      local_8 = 0;
      uVar4 = FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
      FUN_009895f0(uVar4);
      local_8._0_1_ = 1;
      uVar4 = FUN_00988f20(local_14);
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c);
      }
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68);
      }
    }
    else {
      iVar2 = in_ECX[10];
      FUN_009f7c00(*(undefined2 *)((int)in_ECX + 0x3a),(short)in_ECX[0xe]);
      local_14 = FUN_009895f0(iVar2);
      local_8 = 3;
      uVar4 = FUN_009f7c00((short)in_ECX[0x1c],*(undefined2 *)((int)in_ECX + 0x6e));
      FUN_009895f0(uVar4);
      local_8._0_1_ = 4;
      uVar4 = FUN_00988f20(local_14);
      local_8 = CONCAT31(local_8._1_3_,5);
      FUN_00408ed0(uVar4,0,0xffffffff);
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68);
      }
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_4c);
      }
    }
    if (0xf < local_70) {
      local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_84);
    }
    local_8 = 0xffffffff;
    *(undefined1 *)((int)in_ECX + 0xb5) = 1;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 6;
  FUN_00408ed0(local_30,0,0xffffffff);
  if (local_1c < 0x10) {
    *(undefined1 *)(in_ECX + 0x1b) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

