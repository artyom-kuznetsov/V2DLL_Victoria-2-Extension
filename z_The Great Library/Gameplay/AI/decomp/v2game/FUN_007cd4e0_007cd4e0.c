// FUN_007cd4e0 @ 007cd4e0 body=[[007cd4e0, 007cd549] [007cd550, 007cd5de] [007cd5e2, 007cd609] [007cd60d, 007cd686]]


/* WARNING: Removing unreachable block (ram,0x007cd594) */

void FUN_007cd4e0(int param_1,undefined1 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  uint local_68;
  uint local_54;
  uint local_4c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b43140;
  local_10 = ExceptionList;
  local_1c = in_ECX - param_1 >> 2;
  iVar6 = local_1c - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar6) {
    local_20 = iVar6 * 2 + 2;
    ExceptionList = &local_10;
    do {
      local_30 = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
      local_28 = iVar6 + -1;
      iVar6 = local_20 + -2;
      local_2c = CONCAT31(local_2c._1_3_,param_2);
      bVar7 = iVar6 == local_1c;
      local_20 = iVar6;
      local_18 = local_28;
      if (iVar6 < local_1c) {
        do {
          local_24 = *(int *)(param_1 + iVar6 * 4);
          iVar3 = FUN_00974c50(*(undefined4 *)(*(int *)(param_1 + -4 + iVar6 * 4) + 0x6c));
          local_8 = 0;
          iVar4 = FUN_00974c50(*(undefined4 *)(local_24 + 0x6c));
          uVar1 = *(uint *)(iVar3 + 0x10);
          uVar2 = *(uint *)(iVar4 + 0x10);
          uVar5 = uVar2;
          if (uVar1 <= uVar2) {
            uVar5 = uVar1;
          }
          uVar5 = FUN_00414bd0(uVar5);
          if (uVar5 == 0) {
            if (uVar2 < uVar1) {
              uVar5 = 0xffffffff;
            }
            else {
              uVar5 = (uint)(uVar2 != uVar1);
            }
          }
          local_11 = (int)uVar5 < 0;
          if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_4c);
          }
          local_8 = 0xffffffff;
          local_38 = 0xf;
          local_4c = local_4c & 0xffffff00;
          if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_68);
          }
          local_54 = 0xf;
          local_68 = local_68 & 0xffffff00;
          iVar3 = iVar6;
          if ((bool)local_11) {
            iVar3 = iVar6 + -1;
          }
          iVar6 = iVar3 * 2 + 2;
          *(undefined4 *)(param_1 + local_18 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
          local_18 = iVar3;
        } while (iVar6 < local_1c);
        bVar7 = iVar6 == local_1c;
      }
      iVar6 = local_28;
      if (bVar7) {
        *(undefined4 *)(param_1 + local_18 * 4) = *(undefined4 *)(param_1 + -4 + local_1c * 4);
        local_18 = local_1c + -1;
      }
      FUN_007d19b0(param_1,local_18,local_28,&local_30,local_2c);
    } while (0 < iVar6);
  }
  ExceptionList = local_10;
  return;
}

