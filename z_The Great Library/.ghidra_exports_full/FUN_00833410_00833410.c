// FUN_00833410 @ 00833410 body=[[00833410, 0083345c] [00833460, 00833643]]


void FUN_00833410(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,int *param_5,
                 undefined4 *param_6,int *param_7,char param_8)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float in_XMM0_Da;
  int local_24;
  int local_20;
  
  iVar4 = DAT_012586dc;
  *param_5 = -1;
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x20) / 1000;
  local_24 = 0;
  local_20 = 0;
  if (0 < param_4) {
    do {
      piVar2 = (int *)**(undefined4 **)(param_3 + local_20 * 4);
      iVar6 = DAT_012588e8;
      while (DAT_012588e8 = iVar6, piVar2 != (int *)0x0) {
        iVar6 = *piVar2;
        piVar2 = (int *)piVar2[2];
        iVar7 = *(int *)(iVar6 + 0x10);
        if (param_8 != '\0') {
          iVar8 = *(int *)(iVar6 + 0xc);
          FUN_008483f0(param_1,*(undefined4 *)(iVar6 + 8),iVar8);
          in_XMM0_Da = in_XMM0_Da +
                       (float)*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar8 * 4) + 0x1548);
          iVar7 = iVar7 - (int)in_XMM0_Da * iVar4;
        }
        if (iVar7 < 0) {
          iVar7 = 0;
        }
        local_24 = local_24 + iVar7;
        iVar6 = DAT_012588e8;
      }
      local_20 = local_20 + 1;
    } while (local_20 < param_4);
    if (local_24 != 0) {
      local_20 = 0;
      if (*(int *)(iVar6 + 0xa74) == 0) {
        FUN_009b7700();
      }
      uVar5 = *(uint *)(iVar6 + 0xb4 + *(int *)(iVar6 + 0xa74) * 4);
      uVar5 = uVar5 ^ (int)uVar5 >> 0xb;
      uVar5 = uVar5 ^ (uVar5 & 0xff3a58ad) << 7;
      uVar5 = uVar5 ^ (uVar5 & 0xffffdf8c) << 0xf;
      *(int *)(iVar6 + 0xa74) = (*(int *)(iVar6 + 0xa74) + 1) % 0x270;
      iVar6 = (int)((int)uVar5 >> 0x12 ^ uVar5) % local_24;
      local_24 = 0;
      do {
        piVar2 = (int *)**(undefined4 **)(param_3 + local_24 * 4);
        while (piVar2 != (int *)0x0) {
          iVar7 = *piVar2;
          piVar2 = (int *)piVar2[2];
          iVar8 = *(int *)(iVar7 + 0x10);
          if (param_8 != '\0') {
            FUN_008483f0(param_1,*(undefined4 *)(iVar7 + 8),*(undefined4 *)(iVar7 + 0xc));
            in_XMM0_Da = in_XMM0_Da +
                         (float)*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(iVar7 + 0xc) * 4) + 0x1548);
            iVar8 = iVar8 - (int)in_XMM0_Da * iVar4;
          }
          if (iVar8 < 0) {
            iVar8 = 0;
          }
          local_20 = local_20 + iVar8;
          if (iVar6 < local_20) {
            *param_5 = local_24;
            puVar1 = param_6 + *param_7 * 2;
            if (param_6 == puVar1) goto LAB_00833620;
            goto LAB_00833610;
          }
        }
        local_24 = local_24 + 1;
      } while (local_24 < param_4);
    }
  }
  goto LAB_008335d8;
  while (param_6 = param_6 + 2, param_6 != puVar1) {
LAB_00833610:
    if (param_6[1] == *(int *)(iVar7 + 0xc)) break;
  }
  if (param_6 == puVar1) {
LAB_00833620:
    *puVar1 = *(undefined4 *)(iVar7 + 8);
    puVar1[1] = *(undefined4 *)(iVar7 + 0xc);
    *param_7 = *param_7 + 1;
    uVar3 = *(undefined4 *)(iVar7 + 8);
    param_2[1] = *(undefined4 *)(iVar7 + 0xc);
    *param_2 = uVar3;
    return;
  }
LAB_008335d8:
  param_2[1] = 0;
  *param_2 = 0x2d2d2d;
  return;
}

