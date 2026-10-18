// FUN_007cde20 @ 007cde20 body=[[007cde20, 007cde89] [007cde90, 007cdf1e] [007cdf22, 007cdf49] [007cdf4d, 007cdfc6]]


/* WARNING: Removing unreachable block (ram,0x007cded4) */

void FUN_007cde20(int param_1,undefined1 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  bool bVar8;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b955e0;
  local_10 = ExceptionList;
  local_1c = in_ECX - param_1 >> 2;
  iVar7 = local_1c - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar7) {
    local_20 = iVar7 * 2 + 2;
    ExceptionList = &local_10;
    do {
      local_2c = *(undefined4 *)(param_1 + -4 + iVar7 * 4);
      local_24 = iVar7 + -1;
      iVar7 = local_20 + -2;
      local_28 = CONCAT31(local_28._1_3_,param_2);
      bVar8 = iVar7 == local_1c;
      local_20 = iVar7;
      local_18 = local_24;
      if (iVar7 < local_1c) {
        do {
          piVar1 = *(int **)(*(int *)(param_1 + iVar7 * 4) + 100);
          iVar4 = (**(code **)(**(int **)(*(int *)(param_1 + -4 + iVar7 * 4) + 100) + 0x1c))
                            (local_64);
          local_8 = 0;
          iVar5 = (**(code **)(*piVar1 + 0x1c))(local_48);
          uVar2 = *(uint *)(iVar4 + 0x10);
          uVar3 = *(uint *)(iVar5 + 0x10);
          uVar6 = uVar3;
          if (uVar2 <= uVar3) {
            uVar6 = uVar2;
          }
          uVar6 = FUN_00414bd0(uVar6);
          if (uVar6 == 0) {
            if (uVar3 < uVar2) {
              uVar6 = 0xffffffff;
            }
            else {
              uVar6 = (uint)(uVar3 != uVar2);
            }
          }
          local_11 = (int)uVar6 < 0;
          if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_48[0]);
          }
          local_8 = 0xffffffff;
          local_34 = 0xf;
          local_38 = 0;
          local_48[0] = local_48[0] & 0xffffff00;
          if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_64[0]);
          }
          local_50 = 0xf;
          local_54 = 0;
          local_64[0] = local_64[0] & 0xffffff00;
          iVar4 = iVar7;
          if ((bool)local_11) {
            iVar4 = iVar7 + -1;
          }
          iVar7 = iVar4 * 2 + 2;
          *(undefined4 *)(param_1 + local_18 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
          local_18 = iVar4;
        } while (iVar7 < local_1c);
        bVar8 = iVar7 == local_1c;
      }
      iVar7 = local_24;
      if (bVar8) {
        *(undefined4 *)(param_1 + local_18 * 4) = *(undefined4 *)(param_1 + -4 + local_1c * 4);
        local_18 = local_1c + -1;
      }
      FUN_007d1cb0(param_1,local_18,local_24,&local_2c,local_28);
    } while (0 < iVar7);
  }
  ExceptionList = local_10;
  return;
}

