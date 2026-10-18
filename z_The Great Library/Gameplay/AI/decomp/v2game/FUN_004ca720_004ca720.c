// FUN_004ca720 @ 004ca720 body=[[004ca720, 004ca7e6] [004ca7fc, 004ca8ff]]


void FUN_004ca720(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  uint local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x36a) {
    if (param_2 == 0x369) {
      ExceptionList = &local_10;
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i");
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      *(int *)(in_ECX + 0xc) = param_1;
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2a1) {
      local_18 = 0xf;
      local_1c = 0;
      local_2c = local_2c & 0xffffff00;
      local_8 = 0;
      ExceptionList = &local_10;
      FUN_009a1750();
      FUN_00408ed0(&local_2c,0,0xffffffff);
      FUN_0043bb10();
      if (local_18 < 0x10) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (param_2 == 0x35b) {
      ExceptionList = &local_10;
      FUN_009a1c10();
      ExceptionList = local_10;
      return;
    }
  }
  else {
    if (param_2 == 0x5a3) {
      ExceptionList = &local_10;
      FUN_009a1ce0();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x8b9) {
      ExceptionList = &local_10;
      FUN_004ca290();
      (**(code **)(local_2c + 0xc))();
      iVar1 = 0;
      piVar2 = (int *)(in_ECX + 0x24);
      do {
        if (*piVar2 == 0) {
          iVar1 = in_ECX + 0x18 + iVar1 * 0x1c;
          *(undefined4 *)(iVar1 + 4) = local_28;
          *(undefined4 *)(iVar1 + 8) = local_24;
          *(undefined4 *)(iVar1 + 0xc) = local_20;
          *(undefined4 *)(iVar1 + 0x10) = local_1c;
          *(uint *)(iVar1 + 0x14) = local_18;
          *(undefined4 *)(iVar1 + 0x18) = local_14;
          ExceptionList = local_10;
          return;
        }
        iVar1 = iVar1 + 1;
        piVar2 = piVar2 + 7;
      } while (iVar1 < 4);
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = &local_10;
  FUN_009a0f40();
  ExceptionList = local_10;
  return;
}

