// FUN_00594010 @ 00594010 body=[[00594010, 005941be] [005941c2, 00594223]]


void FUN_00594010(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int local_134;
  int local_130;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5f759;
  local_14 = ExceptionList;
  uVar1 = *(undefined4 *)(in_ECX + 0x30);
  ExceptionList = &local_14;
  FUN_009a0940(param_1);
  local_11c = 0xc;
  _sprintf(local_118,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  piVar2 = *(int **)(in_ECX + 0x20);
  while (piVar2 != (int *)0x0) {
    local_124 = *(undefined4 *)(*piVar2 + 0x10);
    local_120 = *(undefined4 *)(*piVar2 + 0x14);
    piVar2 = (int *)piVar2[2];
    FUN_009a0940(param_1);
    FUN_0099f020(&local_124);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x54);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
    FUN_0099ff90(param_1);
  }
  else {
    local_11c = 0xc;
    _sprintf(local_118,"%d",uVar1);
    FUN_0099ff90(param_1);
  }
  FUN_004013e0(param_1);
  FUN_0058a4f0(in_ECX + 0x58);
  iVar3 = *(int *)(in_ECX + 0x44);
  local_134 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x48) - iVar3 & 0xfffffffcU)) {
    do {
      if (0 < *(int *)(iVar3 + local_134 * 4)) {
        if (DAT_0125fdd8 == 0) {
          iVar3 = FUN_00aae9af(0x1c);
          local_c = 0;
          if (iVar3 == 0) {
            local_130 = 0;
          }
          else {
            local_130 = FUN_008b0060();
          }
          iVar3 = DAT_0125fdd8;
          local_c = 1;
          local_124 = 0;
          if ((local_130 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
            FUN_005c1a70(DAT_0125fdd8);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar3);
          }
          DAT_0125fdd8 = local_130;
          local_c = 0xffffffff;
        }
        FUN_0099f250(*(undefined4 *)(local_134 * 4 + *(int *)(in_ECX + 0x44)));
      }
      iVar3 = *(int *)(in_ECX + 0x44);
      local_134 = local_134 + 1;
    } while (local_134 < *(int *)(in_ECX + 0x48) - iVar3 >> 2);
  }
  ExceptionList = local_14;
  return;
}

