// FUN_00a34000 @ 00a34000 body=[[00a34000, 00a34099] [00a3409d, 00a3413b] [00a3413f, 00a341ac] [00a341b0, 00a341f6]]


void FUN_00a34000(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
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
  puStack_c = &LAB_00b62728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00df09f4,4);
  local_8 = 0;
  uVar3 = FUN_00a32ba0();
  (**(code **)(**(int **)(param_1 + 0x20) + 0x3c))(local_48);
  FUN_00408ed0(uVar3,0,0xffffffff);
  FUN_00a5ecc0(uVar3,0);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xa4);
  if (*(int *)(param_1 + 0x2c) != iVar1) {
    iVar4 = FUN_00a31760();
    if (((*(char *)(iVar4 + 0x30) == '\0') &&
        ((*(int *)(iVar4 + 0x24) - (int)*(int **)(iVar4 + 0x20) & 0xfffffffcU) != 0)) &&
       (bVar2 = true, **(int **)(iVar4 + 0x20) == iVar1)) goto LAB_00a340d7;
  }
  bVar2 = false;
LAB_00a340d7:
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00e40358,4);
  local_8 = 1;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_48);
  if (bVar2) {
    pcVar6 = *(code **)(*piVar5 + 0xb8);
  }
  else {
    pcVar6 = *(code **)(*piVar5 + 0xbc);
  }
  (*pcVar6)();
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("whisper",7);
  local_8 = 2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x28) + 0xa4);
  iVar4 = *(int *)(param_1 + 0x2c);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x34))(local_2c);
  if (iVar4 == iVar1) {
    pcVar6 = *(code **)(*piVar5 + 0xbc);
  }
  else {
    pcVar6 = *(code **)(*piVar5 + 0xb8);
  }
  (*pcVar6)();
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = local_2c[0] & 0xffffff00;
  uVar3 = FUN_00a32ba0();
  pcVar6 = *(code **)(*(int *)(param_1 + 0x28) + 0x108);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(*(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10c),*(undefined4 *)(param_1 + 0x20),
              param_2,uVar3);
  }
  ExceptionList = local_10;
  return;
}

