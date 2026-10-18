// FUN_00a58a90 @ 00a58a90 body=[[00a58a90, 00a58c7a] [00a58c7e, 00a58c8f]]


void FUN_00a58a90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0x85) {
    if (param_2 == 0x84) {
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 100,0);
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x2e) {
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    }
    if (param_2 == 0x4b) {
      ExceptionList = &local_10;
      FUN_009a1e10();
      ExceptionList = local_10;
      return;
    }
    if (param_2 != 0x71) {
LAB_00a58bc7:
      ExceptionList = &local_10;
      FUN_009ecfa0(param_1,param_2);
      ExceptionList = local_10;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x228);
    if ((iVar1 == 0x74) || (iVar1 == 0x31)) {
      *(undefined4 *)(in_ECX + 0x94) = 0;
      return;
    }
    if (iVar1 == 0x73) {
      *(undefined4 *)(in_ECX + 0x94) = 1;
      return;
    }
    if (iVar1 == 0x72) {
      *(undefined4 *)(in_ECX + 0x94) = 2;
      return;
    }
  }
  else if (param_2 == 0xbf) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    uVar2 = FUN_00a581e0();
    *(undefined4 *)(in_ECX + 0x90) = uVar2;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    if (param_2 != 0x137) {
      if (param_2 == 0x19b) {
        ExceptionList = &local_10;
        FUN_009a1bb0(in_ECX + 0x9c);
        ExceptionList = local_10;
        return;
      }
      goto LAB_00a58bc7;
    }
    ExceptionList = &local_10;
    iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x98);
    if (iVar1 == 0) {
      FUN_009a1140();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

