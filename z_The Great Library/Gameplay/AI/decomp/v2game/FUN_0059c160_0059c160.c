// FUN_0059c160 @ 0059c160 body=[[0059c160, 0059c1a7] [0059c1b0, 0059c311]]


uint FUN_0059c160(int *param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  iVar4 = (**(code **)(*param_1 + 0x24))();
  if (iVar4 == 3) {
    puVar6 = (uint *)param_1[4];
    if ((puVar6[0xe] - puVar6[0xd] & 0xfffffff8) != 0) {
      bVar3 = false;
      puVar7 = (uint *)puVar6[8];
      if ((uint *)puVar6[8] != (uint *)0x0) {
        do {
          puVar5 = puVar7;
          uVar1 = *puVar5;
          puVar6 = puVar5 + 2;
          if (*(char *)(uVar1 + 0x164) == '\0') {
            puVar5 = *(uint **)(*(int *)(DAT_012587e4 + 4) + *(int *)(uVar1 + 0xc4) * 4);
            iVar4 = param_1[6];
            if (((*(uint *)(iVar4 + 0x134) != puVar5[8]) &&
                (((*(int *)(*(int *)(puVar5[0x2fa] + *(uint *)(iVar4 + 0x134) * 4) + 0x34) != 0 ||
                  (((*(char *)(iVar4 + 0x130) == 'R' && (*(char *)(iVar4 + 0x131) == 'E')) &&
                   (*(char *)(iVar4 + 0x132) == 'B')))) ||
                 ((((char)puVar5[7] == 'R' && (*(char *)((int)puVar5 + 0x1d) == 'E')) &&
                  (*(char *)((int)puVar5 + 0x1e) == 'B')))))) &&
               (puVar5 = *(uint **)(uVar1 + 0xc4), puVar5 != *(uint **)(iVar4 + 0x134))) {
              bVar3 = true;
            }
          }
          puVar7 = (uint *)*puVar6;
        } while ((uint *)*puVar6 != (uint *)0x0);
        puVar6 = puVar5;
        if (bVar3) {
LAB_0059c307:
          return CONCAT31((int3)((uint)puVar5 >> 8),1);
        }
      }
    }
  }
  else {
    iVar4 = param_1[4];
    iVar2 = param_1[5];
    puVar7 = (uint *)(iVar4 + 0x34);
    puVar5 = (uint *)(iVar2 + 0x34);
    puVar6 = puVar5;
    if (((*(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x34) & 0xfffffff8U) != 0) &&
       ((*(int *)(iVar2 + 0x38) - *puVar5 & 0xfffffff8) != 0)) {
      puVar8 = (undefined4 *)*puVar7;
      do {
        if ((puVar8 < (undefined4 *)*puVar7) || (*(undefined4 **)(iVar4 + 0x38) <= puVar8)) {
          puVar8 = (undefined4 *)*puVar5;
          puVar9 = puVar8;
          goto LAB_0059c2c7;
        }
        puVar6 = (uint *)FUN_0055dc60(puVar7,*puVar8,puVar8[1]);
      } while (((char)puVar6 == '\0') &&
              (puVar6 = (uint *)FUN_0055dc60(puVar5,*puVar8,puVar8[1]), puVar8 = puVar8 + 2,
              (char)puVar6 != '\0'));
    }
  }
LAB_0059c24f:
  return (uint)puVar6 & 0xffffff00;
  while( true ) {
    puVar6 = (uint *)FUN_0055dc60(puVar5,*puVar9,puVar9[1]);
    if (((char)puVar6 != '\0') ||
       (puVar6 = (uint *)FUN_0055dc60(puVar7,*puVar9,puVar9[1]), puVar9 = puVar9 + 2,
       (char)puVar6 == '\0')) break;
LAB_0059c2c7:
    if ((puVar9 < puVar8) || (*(undefined4 **)(iVar2 + 0x38) <= puVar9)) goto LAB_0059c307;
  }
  goto LAB_0059c24f;
}

