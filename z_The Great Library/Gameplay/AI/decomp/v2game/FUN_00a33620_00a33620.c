// FUN_00a33620 @ 00a33620 body=[[00a33620, 00a33704] [00a33708, 00a33784] [00a33788, 00a33810] [00a33814, 00a33823]]


void FUN_00a33620(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_01258b40;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b42128;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0x48) = param_2;
  iVar5 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x54;
  iVar4 = 0;
  if (0 < iVar5) {
    piVar6 = (int *)(*(int *)(iVar2 + 200) + 0x34);
    do {
      if (*piVar6 == param_2) {
        iVar5 = iVar4 * 0x54 + *(int *)(iVar2 + 200);
        goto LAB_00a33696;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 0x15;
    } while (iVar4 < iVar5);
  }
  iVar5 = *(int *)(iVar2 + 200);
LAB_00a33696:
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00df09f4,4);
  local_8 = 0;
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_2c);
  FUN_00408ed0(iVar5 + 4,0,0xffffffff);
  FUN_00a5ecc0(iVar5 + 4,0);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("close",5);
  local_8 = 1;
  cVar1 = *(char *)(iVar5 + 0x30);
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_2c);
  if (cVar1 == '\0') {
    pcVar3 = *(code **)(*piVar6 + 0xb8);
  }
  else {
    pcVar3 = *(code **)(*piVar6 + 0xbc);
  }
  (*pcVar3)();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  uVar7 = 1;
  if (*(char *)(iVar5 + 0x50) == '\0') {
    if (*(int *)(DAT_01258b40 + 0xd8) == *(int *)(param_1 + 0x48)) {
      uVar7 = 3;
    }
  }
  else {
    uVar7 = 2;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("select",6);
  local_8 = 2;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_48);
  (**(code **)(*piVar6 + 0x48))(uVar7);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

