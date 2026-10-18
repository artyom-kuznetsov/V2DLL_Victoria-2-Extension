// FUN_00651b70 @ 00651b70 body=[[00651b70, 00651bfe] [00651c02, 00651c51] [00651c55, 00651ca1] [00651ca5, 00651cd8]]


void FUN_00651b70(void)

{
  undefined4 *puVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
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
  
  puStack_c = &LAB_00b452d8;
  puVar1 = *(undefined4 **)(in_ECX + 0x1618);
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  for (local_18 = *(int *)(DAT_012588e8 + 0x18);
      (ExceptionList = ppvVar2, puVar1 != (undefined4 *)0x0 && (local_8 = 0xffffffff, local_18 != 0)
      ); local_18 = *(int *)(local_18 + 0x3c)) {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("shield",6);
    local_8 = 0;
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x48))(local_50);
    local_11 = *(int *)(iVar3 + 0x6c) != 1;
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    if ((bool)local_11) {
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("minishield_strikeout",0x14);
      local_8 = 1;
      piVar4 = (int *)(**(code **)(*(int *)*puVar1 + 0x44))(local_50);
      (**(code **)(*piVar4 + 0x38))();
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
      FUN_00409350("minishield_strikeout",0x14);
      local_8 = 2;
      piVar4 = (int *)(**(code **)(*(int *)*puVar1 + 0x44))(local_34);
      (**(code **)(*piVar4 + 0x34))();
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
    puVar1 = (undefined4 *)puVar1[2];
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

