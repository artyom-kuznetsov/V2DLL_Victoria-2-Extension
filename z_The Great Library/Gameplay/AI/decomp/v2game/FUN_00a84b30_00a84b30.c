// FUN_00a84b30 @ 00a84b30 body=[[00a84b30, 00a84c5b] [00a84c5f, 00a84cd3]]


/* WARNING: Removing unreachable block (ram,0x00a84c52) */

void FUN_00a84b30(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  char local_284 [256];
  undefined4 local_184;
  char local_180 [308];
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b6083b;
  local_4c = ExceptionList;
  if ((param_1[1] - *param_1 & 0xfffffffcU) != 0) {
    ExceptionList = &local_4c;
    FUN_009a0940();
    FUN_0099fe90();
    iVar1 = *param_1;
    iVar2 = 0;
    if (0 < (int)(param_1[1] - iVar1 & 0xfffffffcU)) {
      do {
        _sprintf(local_284,"%f",(double)*(float *)(iVar1 + iVar2 * 4));
        FUN_0099ff90();
        if (*(char *)(in_ECX + 0xc) == '\0') {
          FUN_00409350(&DAT_00ded950,1);
          local_44 = 0;
          local_184 = 0xf;
          __snprintf(local_180,0xff,"%s");
          FUN_0099ff90();
          local_44 = 0xffffffff;
        }
        iVar1 = *param_1;
        iVar2 = iVar2 + 1;
      } while (iVar2 < param_1[1] - iVar1 >> 2);
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
    if ((*(char *)(in_ECX + 0xc) == '\0') && (*(int *)(in_ECX + 4) != 0)) {
      FUN_009a08a0(in_ECX,*(int *)(in_ECX + 4) + -1);
    }
    if (*(int *)(in_ECX + 4) != -1) {
      FUN_004013e0();
      FUN_004013e0();
    }
  }
  ExceptionList = local_4c;
  return;
}

