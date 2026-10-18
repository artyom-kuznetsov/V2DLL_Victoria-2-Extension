// FUN_004433a0 @ 004433a0 body=[[004433a0, 004434b6] [004434ba, 004434ee]]


void FUN_004433a0(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  char local_4c [32];
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5f780;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0043f240(param_1);
  piVar2 = *(int **)(*(int *)(in_ECX + 0x30) + 0x94);
  FUN_00401000(0x47c35040);
  iVar3 = FUN_00b31c00();
  iVar3 = __alldiv((longlong)iVar3 * (longlong)*(int *)(in_ECX + 0x3c),1000,0);
  FUN_00401000(0x43fa4001);
  iVar4 = FUN_00b31c00();
  (**(code **)(*piVar2 + 0x5c))((iVar3 + iVar4) / 1000);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_8 = 0;
  pcVar5 = __itoa(*(int *)(in_ECX + 0x40) + 1,local_4c,10);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 1;
  FUN_00408ed0(local_2c,0,0xffffffff);
  FUN_00a5ecc0();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x48))((*(char *)(in_ECX + 0x44) == '\0') + '\x01');
  ExceptionList = local_10;
  return;
}

