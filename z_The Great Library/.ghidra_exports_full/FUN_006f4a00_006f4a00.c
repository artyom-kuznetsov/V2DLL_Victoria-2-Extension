// FUN_006f4a00 @ 006f4a00 body=[[006f4a00, 006f4aaf] [006f4ab3, 006f4b2a] [006f4b2e, 006f4bb1] [006f4bb5, 006f4c0f]]


void FUN_006f4a00(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  int *local_ac;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int *local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8ac22;
  pvStack_10 = ExceptionList;
  local_1c = *(undefined4 *)(in_ECX + 0x3bc);
  local_20 = DAT_012588e8 + 0xb5c;
  local_24 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x3c0) * 4);
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  ExceptionList = &pvStack_10;
  FUN_00409350("invest_buttons",0xe);
  local_8 = 0;
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x4c) + 0x6c))(local_100);
  local_8 = 0xffffffff;
  local_ac = piVar1;
  if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_100[0]);
  }
  local_ec = 0xf;
  local_f0 = 0;
  local_100[0] = local_100[0] & 0xffffff00;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8 = 1;
  piVar2 = (int *)(**(code **)(*piVar1 + 0x34))(local_8c);
  (**(code **)(*piVar2 + 0xd4))(*(undefined4 *)(in_ECX + 0x3c0));
  local_8 = 0xffffffff;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("country_flag",0xc);
  local_8 = 2;
  piVar1 = (int *)(**(code **)(*piVar1 + 0x34))(local_50);
  local_14 = (int *)(**(code **)(*piVar1 + 0xec))();
  local_1c = *(undefined4 *)(in_ECX + 0x3bc);
  iVar4 = *local_14;
  uVar3 = FUN_0052fc10();
  (**(code **)(iVar4 + 0x150))(uVar3);
  local_8 = 0xffffffff;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (*(char *)(local_24 + 0x12d0) == '\0') {
    iVar4 = 3;
  }
  else if (*(char *)(local_24 + 0x31) == '\0') {
    iVar4 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(local_24 + 0x1404)) +
            1;
  }
  else {
    iVar4 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006f4c09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_006f5388)[iVar4])();
  return;
}

