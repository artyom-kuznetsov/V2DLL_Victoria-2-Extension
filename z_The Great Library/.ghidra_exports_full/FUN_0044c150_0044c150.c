// FUN_0044c150 @ 0044c150 body=[[0044c150, 0044c1be] [0044c1c2, 0044c34b] [0044c34f, 0044c3a1] [0044c3a5, 0044c3ea] [0044c3ee, 0044c402]]


/* WARNING: Removing unreachable block (ram,0x0044c3e2) */

undefined1 * FUN_0044c150(undefined1 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint local_38;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar2 = param_2;
  puStack_c = &LAB_00b472d1;
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
  if (*(char *)(*(int *)(DAT_0125a5b4 + iVar2 * 4) + 0x28) == '\0') {
    FUN_00988a50();
    local_8 = 4;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    if (iVar2 == 0x32) {
      FUN_00401000();
      iVar2 = FUN_00b31c00();
      __alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
      FUN_00988a50();
      local_8 = 2;
      FUN_00448aa0();
    }
    else {
      FUN_00401000();
      iVar2 = FUN_00b31c00();
      __alldiv((longlong)iVar2 * (longlong)iVar1,1000,0);
      FUN_00988a50();
      local_8 = 3;
      FUN_00448aa0();
      local_38 = local_1c;
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00448740();
  }
  FUN_00409350();
  local_8 = 5;
  FUN_00448aa0();
  ExceptionList = local_10;
  return param_1;
}

