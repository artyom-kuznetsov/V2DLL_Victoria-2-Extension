// FUN_007a4920 @ 007a4920 body=[[007a4920, 007a49cb] [007a49cf, 007a49e5] [007a49e9, 007a4a77] [007a4a7b, 007a4aa1] [007a4aa5, 007a4b75]]


/* WARNING: Removing unreachable block (ram,0x007a4a96) */
/* WARNING: Removing unreachable block (ram,0x007a49dd) */
/* WARNING: Removing unreachable block (ram,0x007a49c3) */

void FUN_007a4920(int *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b598a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00408ed0();
  local_8 = 0;
  FUN_00408ed0();
  local_8 = 1;
  FUN_00408ed0();
  FUN_00408ed0();
  param_1[0x24] = 0;
  local_8 = 0xffffffff;
  FUN_00409350();
  local_8 = 2;
  bVar2 = false;
  cVar3 = FUN_00416db0();
  if (cVar3 != '\0') {
    local_20 = 0xf;
    FUN_00409350();
    local_8 = 3;
    bVar2 = true;
    cVar3 = FUN_00416db0();
    bVar1 = true;
    if (cVar3 != '\0') goto LAB_007a4a60;
  }
  bVar1 = false;
LAB_007a4a60:
  if ((bVar2) && (0xf < local_20)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  if (!bVar1) {
    iVar4 = FUN_00aae9af();
    local_8 = 4;
    if (iVar4 != 0) {
      FUN_0072d4e0();
      local_8._0_1_ = 5;
      FUN_00408ed0();
      local_8._0_1_ = 6;
      FUN_00408ed0(param_2,0,0xffffffff);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_009fe2f0(iVar4);
    }
    local_8 = 0xffffffff;
    (**(code **)(**(int **)(param_1[0x15] + 0x38) + 0x18))();
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*param_1 + 0x20))();
  ExceptionList = local_10;
  return;
}

