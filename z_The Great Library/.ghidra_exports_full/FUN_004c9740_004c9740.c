// FUN_004c9740 @ 004c9740 body=[[004c9740, 004c9846] [004c984a, 004c98b4]]


void FUN_004c9740(int *param_1)

{
  int iVar1;
  undefined4 ***pppuVar2;
  int in_ECX;
  int iVar3;
  char local_230 [256];
  undefined4 local_130;
  char local_12c [256];
  undefined4 **local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_1[1] != *param_1) {
    ExceptionList = &local_10;
    FUN_009a0940(in_ECX);
    FUN_0099fe90(0);
    iVar1 = *param_1;
    iVar3 = 0;
    if (param_1[1] != iVar1 && -1 < param_1[1] - iVar1) {
      do {
        local_130 = 0xc;
        _sprintf(local_12c,"%d",(uint)*(byte *)(iVar1 + iVar3));
        FUN_0099ff90(in_ECX);
        if (*(char *)(in_ECX + 0xc) == '\0') {
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
          FUN_00409350(&DAT_00ded950,1);
          local_8 = 0;
          pppuVar2 = (undefined4 ***)local_2c[0];
          if (local_18 < 0x10) {
            pppuVar2 = local_2c;
          }
          __snprintf(local_230,0xff,"%s",pppuVar2);
          FUN_0099ff90(in_ECX);
          local_8 = 0xffffffff;
          if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_2c[0]);
          }
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (undefined4 **)((uint)local_2c[0] & 0xffffff00);
        }
        iVar1 = *param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1] - iVar1);
    }
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
    if ((*(char *)(in_ECX + 0xc) == '\0') && (*(int *)(in_ECX + 4) != 0)) {
      FUN_009a08a0(in_ECX,*(int *)(in_ECX + 4) + -1);
    }
    if (*(int *)(in_ECX + 4) != -1) {
      FUN_004013e0(in_ECX);
      FUN_004013e0(in_ECX);
    }
  }
  ExceptionList = local_10;
  return;
}

