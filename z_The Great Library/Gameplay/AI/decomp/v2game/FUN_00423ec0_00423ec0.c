// FUN_00423ec0 @ 00423ec0 body=[[00423ec0, 00423f50] [00423f54, 00423f92]]


undefined1 * FUN_00423ec0(int *param_1,undefined1 *param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b51fe1;
  local_10 = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  iVar2 = *param_1;
  if (0 < (int)(param_1[1] - iVar2 & 0xfffffffcU)) {
    do {
      pcVar1 = *(char **)(iVar2 + iVar4 * 4);
      if ((*pcVar1 != '\0') && (pcVar1[1] == '\0')) {
        uVar3 = FUN_00419e60(local_2c,pcVar1);
        local_8 = 1;
        FUN_00448aa0(uVar3,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        if (iVar4 < (param_1[1] - *param_1 >> 2) + -1) {
          FUN_00448740(&DAT_00dee2cc,1);
        }
      }
      iVar2 = *param_1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_1[1] - iVar2 >> 2);
  }
  ExceptionList = local_10;
  return param_2;
}

