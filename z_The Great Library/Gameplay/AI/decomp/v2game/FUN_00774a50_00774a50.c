// FUN_00774a50 @ 00774a50 body=[[00774a50, 00774adf] [00774ae3, 00774b01] [00774b05, 00774b72] [00774b76, 00774bc7]]


void FUN_00774a50(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7b9a8;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  FUN_00409350("multiplayer_list",0x10);
  local_8 = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("multiplayer",0xb);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x278) + 0x6c))(local_34);
  piVar2 = (int *)(**(code **)(*piVar2 + 0x7c))(local_50);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8 = 0xffffffff;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))();
  piVar2 = (int *)*piVar2;
  if (piVar2 != (int *)0x0) {
    while( true ) {
      piVar1 = *(int **)(*piVar2 + 0x20);
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350("button_ban",10);
      local_8 = 2;
      iVar3 = (**(code **)(*piVar1 + 0x34))(local_6c);
      local_11 = param_1 == iVar3;
      local_8 = 0xffffffff;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c[0]);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if ((bool)local_11) break;
      piVar2 = (int *)piVar2[2];
      local_11 = 0;
      if (piVar2 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
    }
    if (*piVar2 != 0) {
      FUN_007746f0(local_18,*piVar2 + 0x28);
    }
  }
  ExceptionList = local_10;
  return;
}

