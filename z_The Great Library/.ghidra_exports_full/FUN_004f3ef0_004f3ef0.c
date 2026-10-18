// FUN_004f3ef0 @ 004f3ef0 body=[[004f3ef0, 004f44e8] [004f44f0, 004f459e] [004f45a2, 004f45b8]]


/* WARNING: Removing unreachable block (ram,0x004f4599) */

void FUN_004f3ef0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iStack_128;
  char acStack_120 [4];
  undefined4 local_11c;
  char local_118 [252];
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5fafb;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar1 = *(undefined4 *)(in_ECX + 0x18);
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0x20) + 4))(param_1);
  FUN_009a0940(param_1);
  (**(code **)(*(int *)(in_ECX + 0xd8) + 4))(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x148),*(undefined4 *)(in_ECX + 0x14c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar2 = *(int *)(in_ECX + 0x1c);
  if (iVar2 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x150),*(undefined4 *)(in_ECX + 0x154));
    FUN_0099ff90(param_1);
  }
  else {
    _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x150),*(undefined4 *)(in_ECX + 0x154));
    FUN_0099ff90(param_1);
  }
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x158),*(undefined4 *)(in_ECX + 0x15c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x160),*(undefined4 *)(in_ECX + 0x164));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x168),*(undefined4 *)(in_ECX + 0x16c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x170);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar2 = *(int *)(in_ECX + 0x174);
  if (iVar2 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x178) != '\0') {
    FUN_0099f470(*(char *)(in_ECX + 0x178));
  }
  iVar2 = *(int *)(in_ECX + 0x17c);
  if (iVar2 != 0) {
    FUN_009a0940(param_1);
    _sprintf(acStack_120,"%d",iVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x180) != '\0') {
    FUN_0099f470(*(char *)(in_ECX + 0x180));
  }
  piVar3 = *(int **)(in_ECX + 0x1c8);
  if (piVar3 != (int *)0x0) {
    FUN_009a0940(param_1);
    (**(code **)(*piVar3 + 4))(param_1);
  }
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x1f0),*(undefined4 *)(in_ECX + 500));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0x208),*(undefined4 *)(in_ECX + 0x20c));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x210);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%lld",*(undefined4 *)(in_ECX + 0xd0),*(undefined4 *)(in_ECX + 0xd4));
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x1c0);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar1 = *(undefined4 *)(in_ECX + 0x1c4);
  FUN_009a0940(param_1);
  _sprintf(acStack_120,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  puVar5 = (undefined4 *)0x0;
  pvStack_14 = (void *)0x0;
  iStack_128 = 0;
  if (0 < *(int *)(in_ECX + 0x1c0)) {
    puVar4 = (undefined4 *)(in_ECX + 0x188);
    do {
      if (puVar4 < puVar5) {
        if (puVar5 == (undefined4 *)0x0) {
          FUN_00423780();
        }
        else {
          *puVar5 = *(undefined4 *)(((int)puVar4 >> 3) * 8);
          puVar5[1] = *(undefined4 *)(((int)puVar4 >> 3) * 8 + 4);
        }
      }
      else if (puVar5 == (undefined4 *)0x0) {
        FUN_00423780();
      }
      else {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
      }
      iStack_128 = iStack_128 + 1;
      puVar5 = puVar5 + 2;
      puVar4 = puVar4 + 2;
    } while (iStack_128 < *(int *)(in_ECX + 0x1c0));
  }
  FUN_0043a9a0(&stack0xfffffec4);
  ExceptionList = pvStack_1c;
  return;
}

