// FUN_0088af20 @ 0088af20 body=[[0088af20, 0088b05e] [0088b062, 0088b087] [0088b08b, 0088b0aa] [0088b0ae, 0088b0c8] [0088b0cc, 0088b162] [0088b16b, 0088b1e7] [0088b1eb, 0088b235] [0088b239, 0088b250] [0088b254, 0088b293] [0088b297, 0088b2ab]]


undefined1 * FUN_0088af20(undefined1 *param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  LPSTR ****lpsz;
  int in_ECX;
  int iVar6;
  uint in_stack_00000024;
  undefined1 *in_stack_0000002c;
  undefined1 local_134 [16];
  undefined4 local_124;
  LPSTR ***local_120;
  undefined1 local_108 [8];
  undefined4 local_100;
  undefined4 local_fc;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  uint local_84 [4];
  undefined4 local_74;
  uint local_70;
  uint local_68;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  LPSTR ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b87b26;
  local_10 = ExceptionList;
  local_88 = 0;
  local_8 = 0;
  uStack_7 = 0;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_0088b2b0();
  if (*(int *)(in_ECX + 0x44) < 1) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_120 = (LPSTR ***)0x88b285;
    FUN_00409350();
  }
  else {
    uVar3 = *(int *)(param_2 + 0x40) * 0x343fd + 0x269ec3;
    uVar4 = uVar3 * 0x343fd + 0x269ec3;
    *(uint *)(param_2 + 0x40) = uVar4;
    iVar6 = *(int *)(in_ECX + 0x44);
    FUN_008a88d0();
    puVar1 = *(undefined4 **)(local_14 + 0x3c);
    for (iVar6 = (int)((longlong)(ulonglong)((uVar4 >> 0x10 & 0x7fff) * (uVar3 >> 0x10 & 0x7fff)) %
                      (longlong)iVar6); iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = (undefined4 *)puVar1[3];
    }
    local_100 = *puVar1;
    local_fc = puVar1[1];
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_8 = 1;
    local_54 = 0xf;
    local_58 = 0;
    local_68 = local_68 & 0xffffff00;
    local_120 = (LPSTR ***)0x88aff7;
    FUN_00409350();
    local_8 = 2;
    FUN_0055dd40();
    local_8 = 3;
    FUN_00988fa0();
    local_8 = 4;
    local_120 = (LPSTR ***)FUN_00988f20();
    local_8 = 5;
    local_124 = 0x88b046;
    FUN_00448aa0();
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = local_c0 & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 1;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = (LPSTR ***)0xf;
    local_124 = 0;
    local_134[0] = 0;
    FUN_00408ed0(&param_4,0,0xffffffff);
    FUN_0087a6c0(local_4c,local_108,param_3 + 1);
    local_8 = 6;
    local_120 = (LPSTR ***)0x88b116;
    piVar5 = (int *)FUN_00989510();
    if (((piVar5[1] - *piVar5) / 0x1c < 3) ||
       (bVar2 = true, (*(int *)(local_14 + 0x2c) - *(int *)(local_14 + 0x28) & 0xfffffffcU) != 0)) {
      bVar2 = false;
    }
    if (local_5c != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (bVar2) {
      local_120 = (LPSTR ***)0x88b17f;
      FUN_00448740();
    }
    else {
      local_120 = (LPSTR ***)0x88b18d;
      FUN_00448740();
      in_stack_0000002c = local_134;
      local_120 = (LPSTR ***)0xf;
      local_124 = 0;
      local_134[0] = 0;
      FUN_00408ed0(&param_4,0,0xffffffff);
      local_120 = (LPSTR ***)FUN_0087a6c0(local_84,local_108,0);
      local_8 = 7;
      local_124 = 0x88b1d1;
      FUN_00408ed0();
      local_8 = 6;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      lpsz = (LPSTR ****)local_4c[0];
      if (local_38 < 0x10) {
        lpsz = local_4c;
      }
      local_120 = (LPSTR ***)0x88b1ff;
      CharLowerBuffA((LPSTR)lpsz,1);
    }
    local_120 = (LPSTR ***)local_4c;
    local_124 = 0x88b20e;
    FUN_00448aa0();
    local_120 = (LPSTR ***)local_30;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_124 = 0x88b227;
    FUN_00408ed0();
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0xf;
    local_3c = 0;
    local_4c[0] = (LPSTR ***)((uint)local_4c[0] & 0xffffff00);
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
  }
  if (0xf < in_stack_00000024) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

