// FUN_0070dfe0 @ 0070dfe0 body=[[0070dfe0, 0070e083] [0070e087, 0070e125] [0070e129, 0070e198]]


void FUN_0070dfe0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 auStack_b0 [4];
  undefined4 local_ac;
  undefined1 auStack_a8 [8];
  undefined4 uStack_a0;
  undefined1 auStack_9c [8];
  uint auStack_94 [2];
  uint uStack_8c;
  undefined1 local_88 [4];
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 uStack_24;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb50a7;
  pvStack_14 = ExceptionList;
  local_ac = DAT_012588e8;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("player_flag",0xb);
  local_c = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(local_88);
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x58))(auStack_9c);
  (**(code **)(*piVar1 + 0xd4))(*(undefined4 *)(iVar2 + 4));
  uStack_18 = 0xffffffff;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_94[0]);
  }
  uStack_80 = 0xf;
  uStack_84 = 0;
  auStack_94[0] = auStack_94[0] & 0xffffff00;
  FUN_00409350("player_flag",0xb);
  uStack_18 = 1;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x20) + 0x34))(auStack_94);
  piVar1 = (int *)(**(code **)(*piVar1 + 0xec))();
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x58))(auStack_a8);
  iVar2 = *piVar1;
  uVar3 = FUN_0052fc10();
  (**(code **)(iVar2 + 0x150))(uVar3);
  uStack_24 = 0xffffffff;
  if (0xf < uStack_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uStack_a0);
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x58))(auStack_b0);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 4) * 4);
  if (*(char *)(iVar2 + 0x12d0) == '\0') {
    iVar2 = 3;
  }
  else if (*(char *)(iVar2 + 0x31) == '\0') {
    iVar2 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(iVar2 + 0x1404)) + 1;
  }
  else {
    iVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0070e192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_0070ec50)[iVar2])();
  return;
}

