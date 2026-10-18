// FUN_006519a0 @ 006519a0 body=[[006519a0, 00651a32] [00651a36, 00651a88] [00651a8c, 00651ad9] [00651add, 00651b27] [00651b2b, 00651b64]]


void FUN_006519a0(int param_1)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  int in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45310;
  puVar1 = *(undefined4 **)(in_ECX + 0x1618);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  for (local_18 = *(int *)(DAT_012588e8 + 0x18);
      (ExceptionList = ppvVar2, puVar1 != (undefined4 *)0x0 && (local_8 = 0xffffffff, local_18 != 0)
      ); local_18 = *(int *)(local_18 + 0x3c)) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00df09f4,4);
    local_8 = 0;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x34))(local_50);
    local_11 = iVar3 == param_1;
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if ((bool)local_11) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("shield",6);
      local_8 = 1;
      iVar3 = (**(code **)(*(int *)*puVar1 + 0x48))(local_50);
      local_11 = *(int *)(iVar3 + 0x6c) == 1;
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      if ((bool)local_11) {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350("shield",6);
        local_8 = 2;
        (**(code **)(*(int *)*puVar1 + 0x48))(local_50);
        FUN_009a8b10();
        local_8 = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        *(undefined1 *)(local_18 + 0x29) = 1;
      }
      else {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("shield",6);
        local_8 = 3;
        (**(code **)(*(int *)*puVar1 + 0x48))(local_34);
        FUN_009a8bc0();
        local_8 = 0xffffffff;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        *(undefined1 *)(local_18 + 0x29) = 0;
      }
    }
    puVar1 = (undefined4 *)puVar1[2];
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

