// FUN_00967fa0 @ 00967fa0 body=[[00967fa0, 009680da] [009680de, 00968142] [00968146, 00968188]]


void FUN_00967fa0(int param_1,int param_2)

{
  undefined4 ***pppuVar1;
  undefined4 *puVar2;
  int iVar3;
  char local_12c [256];
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a0940(param_1);
  if (*(int *)(param_1 + 4) == -1) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    FUN_004013e0(param_1);
    if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
      FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
    }
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  iVar3 = 0;
  do {
    _sprintf(local_12c,"%d",*(undefined4 *)(param_2 + iVar3 * 4));
    FUN_0099ff90(param_1);
    if (*(char *)(param_1 + 0xc) == '\0') {
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
      FUN_00409350(&DAT_00ded950,1);
      local_8 = 0;
      pppuVar1 = (undefined4 ***)local_2c[0];
      if (local_18 < 0x10) {
        pppuVar1 = local_2c;
      }
      __snprintf(local_12c,0xff,"%s",pppuVar1);
      FUN_0099ff90(param_1);
      local_8 = 0xffffffff;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  puVar2 = (undefined4 *)FUN_00990880();
  local_8 = 1;
  if (0xf < (uint)puVar2[5]) {
    puVar2 = (undefined4 *)*puVar2;
  }
  __snprintf(local_12c,0xff,"%s",puVar2);
  FUN_0099ff90(param_1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  if ((*(char *)(param_1 + 0xc) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    FUN_009a08a0(param_1,*(int *)(param_1 + 4) + -1);
  }
  if (*(int *)(param_1 + 4) != -1) {
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  ExceptionList = local_10;
  return;
}

