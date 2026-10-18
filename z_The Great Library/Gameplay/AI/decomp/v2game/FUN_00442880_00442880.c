// FUN_00442880 @ 00442880 body=[[00442880, 004428e6] [004428ea, 00442930] [00442934, 004429c8] [004429cc, 00442a3e]]


undefined4 FUN_00442880(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
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
  puStack_c = &LAB_00b42128;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("colonization_progress",0x15);
  local_8 = 0;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x3c))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x30) = uVar3;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("colonization_country_flag",0x19);
  local_8 = 1;
  uVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x34))(local_2c);
  local_8 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x38) = uVar3;
  if (local_18 < 0x10) {
    if ((*(int *)(in_ECX + 0x30) != 0) && (*(int *)(in_ECX + 0x38) != 0)) {
      if (-1 < *(int *)(in_ECX + 0x34)) {
        FUN_00401000(0x43fa4001);
        FUN_00b31c00();
        uVar3 = FUN_009888f0(local_48);
        local_8 = 2;
        FUN_00408ed0(uVar3,0,0xffffffff);
        FUN_00a5ecc0(uVar3,0);
        local_8 = 0xffffffff;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48[0]);
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48[0] = local_48[0] & 0xffffff00;
      }
      local_8 = 0xffffffff;
      iVar1 = *(int *)(in_ECX + 0x38);
      *(undefined4 *)(in_ECX + 0xa4) = 0xffffffff;
      puVar2 = *(undefined4 **)(iVar1 + 0x58);
      while (puVar2 != (undefined4 *)0x0) {
        uVar3 = *puVar2;
        puVar2 = (undefined4 *)puVar2[2];
        (**(code **)(*(int *)(iVar1 + 0x54) + 8))(uVar3);
      }
      (**(code **)(*(int *)(*(int *)(in_ECX + 0x38) + 0x54) + 4))(in_ECX + 0x3c);
      ExceptionList = local_10;
      return 1;
    }
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

