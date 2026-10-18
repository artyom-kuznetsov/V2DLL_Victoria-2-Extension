// FUN_0048d720 @ 0048d720 body=[[0048d720, 0048d91a]]


void FUN_0048d720(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int local_24;
  undefined4 *local_20;
  
  FUN_0048d920();
  piVar6 = DAT_012587e4;
  local_24 = 0;
  if (0 < *DAT_012587e4) {
    do {
      piVar5 = *(int **)(*(int *)(DAT_012587e4[1] +
                                 *(int *)(*(int *)(piVar6[1] + local_24 * 4) + 0x20) * 4) + 0x9e8);
      while (piVar5 != (int *)0x0) {
        piVar1 = (int *)piVar5[2];
        iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4);
        piVar5 = piVar1;
        if (*(int *)(iVar7 + 0xe8) == 0) {
          local_20 = (undefined4 *)FUN_00aae9af(100);
          if (local_20 == (undefined4 *)0x0) {
            local_20 = (undefined4 *)0x0;
          }
          else {
            *local_20 = COwnerArea::vftable;
            local_20[1] = 0;
            local_20[2] = 0;
            local_20[3] = 0;
            *(undefined1 *)(local_20 + 4) = 0;
            local_20[5] = 0;
            local_20[6] = 0;
            local_20[7] = 0;
            *(undefined1 *)(local_20 + 8) = 0;
            *(undefined1 *)(local_20 + 9) = 0;
            local_20[10] = 0;
            local_20[0xb] = 0;
            local_20[0xc] = 0;
            *(undefined1 *)(local_20 + 0xd) = 0;
            *(undefined1 *)(local_20 + 0xe) = 0;
            local_20[0x10] = 0;
            local_20[0x11] = 0;
            local_20[0x12] = 0;
            *(undefined1 *)(local_20 + 0x13) = 0;
            local_20[0x14] = 0;
            local_20[0x15] = 0;
            local_20[0x16] = 0;
            *(undefined1 *)(local_20 + 0x17) = 0;
            local_20[0x18] = DAT_01258700;
            DAT_01258700 = DAT_01258700 + 1;
            local_20[0xf] = 0;
          }
          FUN_0048daa0(iVar7);
          FUN_0048dd70(local_20);
          if ((*(int *)(iVar7 + 0x110) == 0) ||
             (iVar2 = *(int *)(*(int *)(iVar7 + 0x110) + 0x10),
             (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
            iVar7 = iVar7 + 0x130;
          }
          else {
            iVar7 = *(int *)(iVar2 + 0x34);
          }
          iVar7 = *(int *)(DAT_012587e4[1] + *(int *)(iVar7 + 4) * 4);
          iVar2 = *(int *)(iVar7 + 0xa0c);
          puVar8 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = local_20;
            puVar8[1] = iVar2;
            puVar8[2] = 0;
            *(undefined1 *)(puVar8 + 3) = 0;
          }
          iVar3 = *(int *)(iVar7 + 0xa10);
          *(undefined4 **)(iVar7 + 0xa0c) = puVar8;
          *(int *)(iVar7 + 0xa10) = iVar3 + 1;
          if (iVar3 == 0) {
            *(undefined4 **)(iVar7 + 0xa08) = puVar8;
          }
          else {
            *(undefined4 **)(iVar2 + 8) = puVar8;
          }
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < *piVar6);
  }
  local_24 = 0;
  if (0 < *piVar6) {
    do {
      puVar8 = *(undefined4 **)
                (*(int *)(DAT_012587e4[1] + *(int *)(*(int *)(piVar6[1] + local_24 * 4) + 0x20) * 4)
                + 0xa08);
      while (puVar8 != (undefined4 *)0x0) {
        uVar4 = *puVar8;
        puVar8 = (undefined4 *)puVar8[2];
        FUN_0048e070(uVar4);
      }
      local_24 = local_24 + 1;
    } while (local_24 < *piVar6);
  }
  return;
}

