// FUN_004ed7c0 @ 004ed7c0 body=[[004ed7c0, 004ed904] [004ed908, 004ed968] [004ed96c, 004ed9c8] [004ed9cc, 004eda3c] [004eda40, 004eda9b] [004eda9f, 004edb3c] [004edb40, 004edbd4] [004edbd8, 004edc75] [004edc79, 004edcee] [004edcf2, 004edd4d] [004edd51, 004edded] [004eddf1, 004ede00]]


void FUN_004ed7c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_258 [256];
  undefined4 local_158;
  uint local_144;
  undefined4 local_13c;
  char local_138 [256];
  int local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5ae86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_34 = in_ECX;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &local_10;
    local_38 = FUN_00aae9af(0x188);
    local_8 = 0;
    if (local_38 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0041a160();
    }
    local_8 = 0xffffffff;
    FUN_00423700(uVar2);
  }
  iVar5 = 0;
  iVar4 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_30 = -1;
  if (0 < iVar4) {
    local_38 = *(int *)(*(int *)(*(int *)(in_ECX + 8) + 100) + 0x194);
    iVar6 = 0;
    do {
      local_30 = 0;
      for (iVar1 = *(int *)(iVar6 + local_38); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x27c)) {
        if (*(int *)(in_ECX + 8) == iVar1) {
          if (iVar1 != 0) {
            if (local_30 == -1) goto LAB_004ed884;
            goto LAB_004ed88c;
          }
          break;
        }
        local_30 = local_30 + 1;
      }
      local_30 = -1;
LAB_004ed884:
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < iVar4);
  }
LAB_004ed88c:
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 1;
  local_13c = 0x841;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 2;
  local_13c = 1;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 3;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 4;
  local_13c = 3;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 5;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(local_34 + 8) + 100) + 0x58);
  FUN_009a0940(param_1);
  local_13c = 0xc;
  _sprintf(local_138,"%d",uVar2);
  FUN_0099ff90(param_1);
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 6;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  FUN_009a0940(param_1);
  local_13c = 0xc;
  _sprintf(local_138,"%d",local_30);
  FUN_0099ff90(param_1);
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 7;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(*(int *)(*(int *)(local_34 + 8) + 0x68) + 0x28);
  FUN_009a0940(param_1);
  local_13c = 0xc;
  _sprintf(local_138,"%d",uVar2);
  FUN_0099ff90(param_1);
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 8;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 9;
  local_13c = 4;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 10;
  local_13c = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_138,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  uVar2 = *(undefined4 *)(local_34 + 0xc);
  FUN_009a0940(param_1);
  local_13c = 0xc;
  _sprintf(local_138,"%d",uVar2);
  FUN_0099ff90(param_1);
  puVar3 = (undefined4 *)FUN_00990880();
  local_8 = 0xb;
  uVar2 = 0x10;
  if (0xf < (uint)puVar3[5]) {
    puVar3 = (undefined4 *)*puVar3;
  }
  __snprintf(local_258,0xff,"%s",puVar3);
  FUN_0099ff90(param_1);
  if (0xf < local_144) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_158,uVar2);
  }
  ExceptionList = local_10;
  return;
}

