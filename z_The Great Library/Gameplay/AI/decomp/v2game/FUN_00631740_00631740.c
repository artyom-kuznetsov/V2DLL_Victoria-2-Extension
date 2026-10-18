// FUN_00631740 @ 00631740 body=[[00631740, 00631844] [00631848, 0063186f] [00631873, 00631900]]


/* WARNING: Removing unreachable block (ram,0x006317fa) */

void FUN_00631740(int param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_6c;
  uint local_58;
  uint local_50;
  uint local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92cf0;
  local_10 = ExceptionList;
  iVar7 = in_ECX - param_1 >> 3;
  iVar5 = iVar7 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar5) {
    local_24 = iVar5 * 2 + 2;
    local_20 = param_1 + iVar5 * 8;
    ExceptionList = &local_10;
    local_1c = iVar7;
    do {
      local_34 = *(undefined4 *)(local_20 + -8);
      iVar3 = local_20 + -8;
      local_30 = *(undefined4 *)(local_20 + -4);
      iVar6 = iVar5 + -1;
      local_24 = local_24 + -2;
      local_2c = CONCAT31(local_2c._1_3_,param_2);
      local_28 = iVar6;
      local_20 = iVar3;
      local_18 = iVar6;
      local_14 = local_24;
      if (local_24 < iVar7) {
        do {
          iVar5 = FUN_0055dd40();
          local_8 = 0;
          iVar7 = FUN_0055dd40();
          uVar1 = *(uint *)(iVar5 + 0x10);
          uVar2 = *(uint *)(iVar7 + 0x10);
          uVar4 = uVar2;
          if (uVar1 <= uVar2) {
            uVar4 = uVar1;
          }
          uVar4 = FUN_00414bd0(uVar4);
          if (uVar4 == 0) {
            if (uVar2 < uVar1) {
              uVar4 = 0xffffffff;
            }
            else {
              uVar4 = (uint)(uVar2 != uVar1);
            }
          }
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50);
          }
          local_8 = 0xffffffff;
          local_3c = 0xf;
          local_50 = local_50 & 0xffffff00;
          if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_6c);
          }
          local_58 = 0xf;
          local_6c = local_6c & 0xffffff00;
          iVar6 = local_14;
          if ((int)uVar4 < 0) {
            iVar6 = local_14 + -1;
          }
          *(undefined4 *)(param_1 + local_18 * 8) = *(undefined4 *)(param_1 + iVar6 * 8);
          local_14 = iVar6 * 2 + 2;
          *(undefined4 *)(param_1 + 4 + local_18 * 8) = *(undefined4 *)(param_1 + 4 + iVar6 * 8);
          iVar7 = local_1c;
          local_18 = iVar6;
        } while (local_14 < local_1c);
      }
      iVar5 = local_28;
      local_18 = iVar6;
      if (local_14 == iVar7) {
        *(undefined4 *)(param_1 + iVar6 * 8) = *(undefined4 *)(param_1 + -8 + iVar7 * 8);
        *(undefined4 *)(param_1 + 4 + iVar6 * 8) = *(undefined4 *)(param_1 + -4 + iVar7 * 8);
        local_18 = iVar7 + -1;
      }
      FUN_00632020(param_1,local_18,local_28,&local_34,local_2c);
    } while (0 < iVar5);
  }
  ExceptionList = local_10;
  return;
}

