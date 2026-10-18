// FUN_00944d80 @ 00944d80 body=[[00944d80, 00944e00] [00944e04, 00944e63] [00944e67, 00944ed1] [00944ed5, 00944ee8]]


void FUN_00944d80(void)

{
  int iVar1;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined1 local_90 [12];
  uint uStack_84;
  uint local_80;
  uint local_7c [4];
  uint uStack_6c;
  undefined4 uStack_68;
  void *pvStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b420fe;
  pvStack_14 = ExceptionList;
  local_7c[0] = 0xf;
  local_80 = 0;
  local_90[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("wargoal_state_select",0x14);
  local_c = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_90);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  puStack_10 = (undefined1 *)0xffffffff;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EBX);
  }
  local_80 = 0xf;
  uStack_84 = 0;
  FUN_00409350("wargoal_country_select",0x16);
  puStack_10 = (undefined1 *)0x1;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))(&stack0xffffff6c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x38))();
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI);
  }
  FUN_0094bd40();
  FUN_00424b60();
  uStack_68 = 0xf;
  uStack_6c = 0;
  local_7c[0] = local_7c[0] & 0xffffff00;
  FUN_00409350("wargoal_setup",0xd);
  pvStack_14 = (void *)0x2;
  iVar1 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_7c);
  (**(code **)(*(int *)(iVar1 + 0x18) + 0x34))();
  if (0xf < uStack_6c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_80);
  }
  ExceptionList = pvStack_20;
  return;
}

