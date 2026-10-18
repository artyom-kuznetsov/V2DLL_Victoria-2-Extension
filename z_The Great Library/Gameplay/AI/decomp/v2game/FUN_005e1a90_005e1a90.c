// FUN_005e1a90 @ 005e1a90 body=[[005e1a90, 005e1ba7] [005e1bab, 005e1bc4] [005e1bc8, 005e1bda]]


int FUN_005e1a90(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint in_stack_00000018;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  undefined4 *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4ca56;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  local_18 = FUN_00aae9af(0x4c);
  local_8._0_1_ = 1;
  if (local_18 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FUN_005e12c0(local_18);
  }
  puVar6 = *(undefined4 **)(in_ECX + 0x3c);
  do {
    if (puVar6 == (undefined4 *)0x0) {
      local_8._0_1_ = 0;
      if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1);
      }
      ExceptionList = local_10;
      return local_14;
    }
    local_8._0_1_ = 0;
    uVar1 = *puVar6;
    puVar2 = (undefined4 *)puVar6[0xb];
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00408ed0(puVar6 + 3,0,0xffffffff);
    local_8._0_1_ = 2;
    local_18 = *(int *)(local_14 + 0x40);
    puVar6 = (undefined4 *)FUN_00aae9af(0x34);
    local_8._0_1_ = 3;
    local_1c = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = uVar1;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[8] = 0xf;
      puVar6[7] = 0;
      *(undefined1 *)(puVar6 + 3) = 0;
      FUN_00408ed0(local_38,0,0xffffffff);
      puVar6[10] = local_18;
      puVar6[0xb] = 0;
      *(undefined1 *)(puVar6 + 0xc) = 0;
    }
    iVar5 = *(int *)(local_14 + 0x44);
    *(undefined4 **)(local_14 + 0x40) = puVar6;
    *(int *)(local_14 + 0x44) = iVar5 + 1;
    if (iVar5 == 0) {
      *(undefined4 **)(local_14 + 0x3c) = puVar6;
    }
    else {
      *(undefined4 **)(local_18 + 0x2c) = puVar6;
    }
    local_8._0_1_ = 0;
    puVar6 = puVar2;
  } while (local_24 < 0x10);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_38[0]);
}

