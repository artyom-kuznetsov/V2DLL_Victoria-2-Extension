// FUN_00989430 @ 00989430 body=[[00989430, 0098947c] [00989480, 009894e1] [009894e5, 00989502]]


undefined1 * FUN_00989430(undefined4 *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4a459;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_1c = param_1[4];
  iVar2 = 0;
  local_14 = 1;
  if (0 < local_1c) {
    do {
      puVar1 = param_1;
      if (0xf < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      local_18 = CONCAT31(local_18._1_3_,*(char *)((int)puVar1 + iVar2));
      if (*(char *)((int)puVar1 + iVar2) == -0x59) {
        iVar2 = iVar2 + 1;
      }
      else {
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8 = 1;
        FUN_00448860(1,local_18);
        local_8 = 2;
        FUN_00448aa0(local_38,0,0xffffffff);
        local_8 = local_8 & 0xffffff00;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  ExceptionList = local_10;
  return param_2;
}

