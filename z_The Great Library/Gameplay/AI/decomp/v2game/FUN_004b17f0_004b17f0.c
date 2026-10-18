// FUN_004b17f0 @ 004b17f0 body=[[004b17f0, 004b1896] [004b189a, 004b1963] [004b1967, 004b1988] [004b198c, 004b19ab] [004b19af, 004b19c5] [004b19c9, 004b19db]]


void FUN_004b17f0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  code *pcVar3;
  int iVar4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4d01b;
  local_10 = ExceptionList;
  if ((char)(*(int **)(DAT_012588e8 + 0xb24))[0x1c] != '\0') {
    if ((*(int *)(in_ECX + 0x4c) == 0) || (*(char *)(*(int *)(in_ECX + 0x54) + 0x2a) == '\0')) {
      pcVar3 = *(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa4);
      iVar4 = 0;
    }
    else {
      pcVar3 = *(code **)(**(int **)(in_ECX + 0x4c) + 0x2c);
      iVar4 = in_ECX + -8;
    }
    ExceptionList = &local_10;
    (*pcVar3)(iVar4);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("click",5);
    local_8 = 0;
    piVar1 = (int *)FUN_009c7290();
    (**(code **)(*piVar1 + 0x60))(local_2c);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00648040(*(undefined4 *)(in_ECX + 0x50));
    if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
      local_50 = 0xf;
      local_54 = 0;
      local_64[0] = local_64[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8 = 1;
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 2;
      piVar1 = *(int **)(DAT_012588e8 + 0xb24);
      uVar2 = FUN_009888f0(local_9c);
      local_8._0_1_ = 3;
      uVar2 = FUN_00988fa0(uVar2);
      local_8 = CONCAT31(local_8._1_3_,4);
      (**(code **)(*piVar1 + 0x120))(uVar2,local_48,local_64,0);
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80 = local_80 & 0xffffff00;
      if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_9c[0]);
      }
      local_88 = 0xf;
      local_8c = 0;
      local_9c[0] = local_9c[0] & 0xffffff00;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48[0]);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48[0] = local_48[0] & 0xffffff00;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64[0]);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

