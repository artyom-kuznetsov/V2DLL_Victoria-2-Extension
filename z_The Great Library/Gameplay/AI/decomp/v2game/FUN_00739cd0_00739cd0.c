// FUN_00739cd0 @ 00739cd0 body=[[00739cd0, 00739e0e] [00739e12, 00739e38] [00739e3c, 00739f00]]


/* WARNING: Removing unreachable block (ram,0x00739dc5) */

void FUN_00739cd0(int param_1,int param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ca90;
  local_10 = ExceptionList;
  iVar6 = (param_2 - param_1) / 0x18;
  iVar8 = iVar6 / 2;
  if (0 < iVar8) {
    local_20 = iVar8 * 2 + 2;
    local_1c = param_1 + iVar8 * 0x18;
    ExceptionList = &local_10;
    local_18 = iVar6;
    do {
      local_40 = *(undefined8 *)(local_1c + -0x18);
      iVar5 = local_1c + -0x18;
      iVar9 = iVar8 + -1;
      local_38 = *(undefined8 *)(local_1c + -0x10);
      iVar8 = local_20 + -2;
      local_28 = CONCAT31(local_28._1_3_,param_3);
      local_30 = *(undefined8 *)(local_1c + -8);
      bVar10 = iVar8 == iVar6;
      param_2 = iVar9;
      local_24 = iVar9;
      local_20 = iVar8;
      local_1c = iVar5;
      if (iVar8 < iVar6) {
        do {
          piVar2 = *(int **)(*(int *)(param_1 + 0xc + iVar8 * 0x18) + 0x16c);
          iVar6 = (**(code **)(**(int **)(*(int *)(param_1 + iVar8 * 0x18 + -0xc) + 0x16c) + 0x18))
                            (local_78);
          local_8 = 0;
          iVar9 = (**(code **)(*piVar2 + 0x18))(local_5c);
          uVar3 = *(uint *)(iVar6 + 0x10);
          uVar4 = *(uint *)(iVar9 + 0x10);
          uVar7 = uVar4;
          if (uVar3 <= uVar4) {
            uVar7 = uVar3;
          }
          uVar7 = FUN_00414bd0(uVar7);
          if (uVar7 == 0) {
            if (uVar4 < uVar3) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (uint)(uVar4 != uVar3);
            }
          }
          if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_5c[0]);
          }
          local_8 = 0xffffffff;
          local_48 = 0xf;
          local_4c = 0;
          local_5c[0] = local_5c[0] & 0xffffff00;
          if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_78[0]);
          }
          local_64 = 0xf;
          local_68 = 0;
          local_78[0] = local_78[0] & 0xffffff00;
          iVar9 = iVar8;
          if ((int)uVar7 < 0) {
            iVar9 = iVar8 + -1;
          }
          iVar6 = param_1 + iVar9 * 0x18;
          puVar1 = (undefined8 *)(param_1 + param_2 * 0x18);
          *puVar1 = *(undefined8 *)(param_1 + iVar9 * 0x18);
          puVar1[1] = *(undefined8 *)(iVar6 + 8);
          iVar8 = iVar9 * 2 + 2;
          puVar1[2] = *(undefined8 *)(iVar6 + 0x10);
          param_2 = iVar9;
        } while (iVar8 < local_18);
        bVar10 = iVar8 == local_18;
        iVar6 = local_18;
      }
      iVar8 = local_24;
      if (bVar10) {
        iVar5 = param_1 + -0x18 + iVar6 * 0x18;
        puVar1 = (undefined8 *)(param_1 + iVar9 * 0x18);
        *puVar1 = *(undefined8 *)(param_1 + -0x18 + iVar6 * 0x18);
        puVar1[1] = *(undefined8 *)(iVar5 + 8);
        iVar9 = iVar6 + -1;
        puVar1[2] = *(undefined8 *)(iVar5 + 0x10);
      }
      FUN_0073acf0(param_1,iVar9,local_24,&local_40,local_28);
    } while (0 < iVar8);
  }
  ExceptionList = local_10;
  return;
}

