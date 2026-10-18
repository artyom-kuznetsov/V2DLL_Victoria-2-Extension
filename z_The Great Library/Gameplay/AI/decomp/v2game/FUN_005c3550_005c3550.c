// FUN_005c3550 @ 005c3550 body=[[005c3550, 005c35be] [005c35c2, 005c36da] [005c36de, 005c3726] [005c372a, 005c376f] [005c3773, 005c3787]]


/* WARNING: Removing unreachable block (ram,0x005c3767) */

undefined1 * FUN_005c3550(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar2 = param_2;
  puStack_c = &LAB_00b45e99;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  (**(code **)(*in_ECX + 0x18))();
  local_8 = 1;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = __alldiv((longlong)*(int *)(in_ECX[6] + param_2 * 8) * (longlong)param_3);
  FUN_00448740();
  param_2._3_1_ = 0 < iVar1;
  FUN_00448740();
  if (param_2._3_1_) {
    FUN_00448740();
  }
  if (*(char *)(*(int *)(DAT_0125fe10 + iVar2 * 4) + 0x28) == '\0') {
    FUN_00988a50();
    local_8 = 3;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    FUN_00401000();
    iVar2 = FUN_00b31c00();
    __alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
    FUN_00988a50();
    local_8 = 2;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
  }
  FUN_00409350();
  local_8 = 4;
  FUN_00448aa0();
  ExceptionList = local_10;
  return param_1;
}

