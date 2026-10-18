// FUN_00b2cbe0 @ 00b2cbe0 body=[[00b2cbe0, 00b2ce15]]


undefined4 FUN_00b2cbe0(int *param_1,uint param_2,int param_3,code *param_4)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  uint local_10;
  uint local_c;
  int local_8;
  
  local_10 = 0;
  if (param_2 != 0) {
    local_8 = param_3;
    do {
      iVar4 = 0;
      if ((uint)param_1[1] < 2) {
LAB_00b2cccc:
        *(undefined4 *)(local_8 + 0x14) = 0;
      }
      else {
        local_c = 2;
        puVar6 = (undefined1 *)*param_1;
        puVar8 = (undefined1 *)*param_1 + 1;
        do {
          uVar3 = local_c + 2;
          iVar4 = iVar4 + 1;
          puVar9 = puVar8 + 2;
          puVar7 = puVar6 + 2;
          uVar2 = (uint)CONCAT11(*puVar8,*puVar6);
          if (uVar2 == 0) break;
          if (0x7f < uVar2) {
            if (uVar2 - 0xd800 < 0x800) {
              if ((0xdbff < uVar2) || ((uint)param_1[1] < uVar3)) {
                return 6;
              }
              uVar3 = CONCAT11(*puVar9,*puVar7) - 0xdc00;
              puVar9 = puVar8 + 4;
              puVar7 = puVar6 + 4;
              if (0x3ff < uVar3) {
                return 6;
              }
              uVar2 = uVar3 | (uVar2 - 0xd800) * 0x400;
              uVar3 = local_c + 4;
            }
            local_c = uVar3;
            iVar10 = 1;
            iVar5 = 0xb;
            do {
              if (uVar2 < (uint)(1 << ((byte)iVar5 & 0x1f))) break;
              iVar5 = iVar5 + 5;
              iVar10 = iVar10 + 1;
            } while (iVar5 < 0x1f);
            iVar4 = iVar4 + iVar10;
            uVar3 = local_c;
          }
          local_c = uVar3;
          puVar6 = puVar7;
          puVar8 = puVar9;
        } while (local_c <= (uint)param_1[1]);
        if (iVar4 == 0) goto LAB_00b2cccc;
        iVar4 = (*param_4)(iVar4);
        *(int *)(local_8 + 0x14) = iVar4;
        if (iVar4 == 0) {
          return 0x8007000e;
        }
      }
      iVar4 = 0;
      uVar3 = param_1[1];
      while (1 < uVar3) {
        uVar1 = *(ushort *)*param_1;
        uVar3 = (uint)uVar1;
        if (1 < (uint)param_1[1]) {
          param_1[1] = param_1[1] - 2;
          *param_1 = (int)((ushort *)*param_1 + 1);
        }
        if (uVar3 < 0x80) {
          *(char *)(iVar4 + *(int *)(local_8 + 0x14)) = (char)uVar1;
          iVar4 = iVar4 + 1;
          if (uVar3 == 0) break;
        }
        else {
          if (uVar3 - 0xd800 < 0x800) {
            uVar1 = *(ushort *)*param_1;
            if (1 < (uint)param_1[1]) {
              param_1[1] = param_1[1] - 2;
              *param_1 = (int)((ushort *)*param_1 + 1);
            }
            uVar3 = uVar1 - 0xdc00 | (uVar3 - 0xd800) * 0x400;
          }
          iVar5 = 1;
          iVar10 = 0xb;
          do {
            if (uVar3 < (uint)(1 << ((byte)iVar10 & 0x1f))) break;
            iVar10 = iVar10 + 5;
            iVar5 = iVar5 + 1;
          } while (iVar10 < 0x1f);
          iVar10 = iVar5 * 6;
          iVar11 = iVar4 + 1;
          *(char *)(iVar4 + *(int *)(local_8 + 0x14)) =
               (char)(uVar3 >> ((byte)iVar10 & 0x1f)) +
               *(char *)((int)&PTR_DAT_00f05ea4 + iVar5 + 3);
          do {
            iVar10 = iVar10 + -6;
            iVar5 = iVar5 + -1;
            *(byte *)(iVar11 + *(int *)(local_8 + 0x14)) =
                 ((byte)(uVar3 >> ((byte)iVar10 & 0x1f)) & 0x3f) + 0x80;
            iVar11 = iVar11 + 1;
          } while (0 < iVar5);
          iVar4 = iVar11 + iVar5;
        }
        uVar3 = param_1[1];
      }
      local_8 = local_8 + 0x20;
      local_10 = local_10 + 1;
    } while (local_10 < param_2);
  }
  return 0;
}

