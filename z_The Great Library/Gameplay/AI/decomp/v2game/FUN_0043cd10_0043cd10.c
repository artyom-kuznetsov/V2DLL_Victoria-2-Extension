// FUN_0043cd10 @ 0043cd10 body=[[0043cd10, 0043ce2f] [0043ce33, 0043cead]]


void FUN_0043cd10(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *****pppppuVar2;
  int in_EDX;
  int iVar3;
  undefined4 ****local_23c [4];
  undefined4 local_22c;
  uint local_228;
  undefined4 local_220;
  char local_21c [256];
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5af7b;
  local_14 = ExceptionList;
  if ((param_1[1] - *param_1 & 0xfffffffcU) != 0) {
    ExceptionList = &local_14;
    FUN_009a0940(in_EDX);
    FUN_0099fe90(param_2);
    iVar1 = *param_1;
    iVar3 = 0;
    if (0 < (int)(param_1[1] - iVar1 & 0xfffffffcU)) {
      do {
        local_220 = 0xc;
        _sprintf(local_21c,"%d",*(undefined4 *)(iVar1 + iVar3 * 4));
        FUN_0099ff90(in_EDX);
        if (*(char *)(in_EDX + 0xc) == '\0') {
          local_228 = 0xf;
          local_22c = 0;
          local_23c[0] = (undefined4 ****)((uint)local_23c[0] & 0xffffff00);
          FUN_00409350(&DAT_00ded950,1);
          local_c = 0;
          local_11c = 0xf;
          pppppuVar2 = (undefined4 *****)local_23c[0];
          if (local_228 < 0x10) {
            pppppuVar2 = local_23c;
          }
          __snprintf(local_118,0xff,"%s",pppppuVar2);
          FUN_0099ff90(in_EDX);
          local_c = 0xffffffff;
          if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_23c[0]);
          }
          local_228 = 0xf;
          local_22c = 0;
          local_23c[0] = (undefined4 ****)((uint)local_23c[0] & 0xffffff00);
        }
        iVar1 = *param_1;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1[1] - iVar1 >> 2);
    }
    if ((char)param_2 == '\0') {
      *(int *)(in_EDX + 4) = *(int *)(in_EDX + 4) + -1;
      if ((*(char *)(in_EDX + 0xc) == '\0') && (*(int *)(in_EDX + 4) != 0)) {
        FUN_009a08a0(in_EDX,*(int *)(in_EDX + 4) + -1);
      }
      if (*(int *)(in_EDX + 4) == -1) {
        ExceptionList = local_14;
        return;
      }
    }
    FUN_004013e0(in_EDX);
    FUN_004013e0(in_EDX);
  }
  ExceptionList = local_14;
  return;
}

