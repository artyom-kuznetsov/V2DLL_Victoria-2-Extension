// FUN_00611df0 @ 00611df0 body=[[00611df0, 00611e59] [00611e60, 00611ee5] [00611ee9, 00611f0f] [00611f13, 00611f8e]]


/* WARNING: Removing unreachable block (ram,0x00611e97) */

void FUN_00611df0(int param_1,undefined1 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  bool bVar6;
  uint local_64;
  uint local_50;
  uint local_48;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b955e0;
  local_10 = ExceptionList;
  local_18 = in_ECX - param_1 >> 2;
  iVar5 = local_18 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar5) {
    local_1c = iVar5 * 2 + 2;
    ExceptionList = &local_10;
    do {
      local_2c = *(undefined4 *)(param_1 + -4 + iVar5 * 4);
      local_24 = iVar5 + -1;
      iVar5 = local_1c + -2;
      local_28 = CONCAT31(local_28._1_3_,param_2);
      bVar6 = iVar5 == local_18;
      local_1c = iVar5;
      local_14 = local_24;
      if (iVar5 < local_18) {
        do {
          iVar2 = FUN_005fce10();
          local_8 = 0;
          iVar3 = FUN_005fce10();
          local_20 = *(uint *)(iVar3 + 0x10);
          uVar1 = *(uint *)(iVar2 + 0x10);
          uVar4 = local_20;
          if (uVar1 < local_20) {
            uVar4 = uVar1;
          }
          uVar4 = FUN_00414bd0(uVar4);
          if (uVar4 == 0) {
            if (uVar1 < local_20) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar1 != local_20);
            }
          }
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_48);
          }
          local_8 = 0xffffffff;
          local_34 = 0xf;
          local_48 = local_48 & 0xffffff00;
          if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_64);
          }
          local_50 = 0xf;
          local_64 = local_64 & 0xffffff00;
          iVar2 = iVar5;
          if ((int)uVar4 < 0) {
            iVar2 = iVar5 + -1;
          }
          iVar5 = iVar2 * 2 + 2;
          *(undefined4 *)(param_1 + local_14 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
          local_14 = iVar2;
        } while (iVar5 < local_18);
        bVar6 = iVar5 == local_18;
      }
      iVar5 = local_24;
      if (bVar6) {
        *(undefined4 *)(param_1 + local_14 * 4) = *(undefined4 *)(param_1 + -4 + local_18 * 4);
        local_14 = local_18 + -1;
      }
      FUN_006130a0(param_1,local_14,local_24,&local_2c,local_28);
    } while (0 < iVar5);
  }
  ExceptionList = local_10;
  return;
}

