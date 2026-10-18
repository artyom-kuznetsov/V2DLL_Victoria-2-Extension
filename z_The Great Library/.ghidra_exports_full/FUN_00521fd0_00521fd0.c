// FUN_00521fd0 @ 00521fd0 body=[[00521fd0, 00522008] [00522016, 00522106] [00522110, 00522303]]


void FUN_00521fd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  int local_10;
  int local_c;
  
  piVar14 = *(int **)(param_1 + 0xe44);
  while (piVar14 != (int *)0x0) {
    iVar1 = *piVar14;
    iVar2 = *(int *)(iVar1 + 0x60);
    piVar14 = (int *)piVar14[2];
    if (iVar2 != 0) {
      FUN_004f33c0(iVar2);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar2);
    }
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
  }
  for (piVar14 = *(int **)(param_1 + 0x9d8);
      (*(int **)(param_1 + 0x9d8) <= piVar14 && (piVar14 < *(int **)(param_1 + 0x9dc)));
      piVar14 = piVar14 + 1) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar14 * 4);
    uVar3 = *(undefined4 *)(iVar1 + 0x188);
    local_c = (*(int *)(iVar1 + 0x2ac) - *(int *)(iVar1 + 0x2a8)) / 0x220;
    if (0 < local_c) {
      do {
        FUN_004d0200(uVar3);
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0xe44);
  while (puVar4 != (undefined4 *)0x0) {
    uVar3 = *puVar4;
    puVar4 = (undefined4 *)puVar4[2];
    FUN_004d1560(uVar3);
  }
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar1 = DAT_012588e8;
  piVar14 = DAT_01258728;
  piVar8 = *(int **)(param_1 + 0x9d8);
  do {
    if ((piVar8 < *(int **)(param_1 + 0x9d8)) || (*(int **)(param_1 + 0x9dc) <= piVar8)) {
      return;
    }
    iVar2 = *piVar8;
    iVar15 = iVar2 * 0xb0 + *piVar14;
    *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4) + 0x5c) + 0x2c) = 1;
    iVar9 = *(int *)(iVar15 + 8);
    while( true ) {
      FUN_004c19a0();
      iVar10 = *(int *)(iVar15 + 8);
      uVar5 = *(uint *)(iVar10 + 0x128);
      uVar3 = *(undefined4 *)(iVar15 + 0x8c);
      uVar6 = *(undefined4 *)(iVar15 + 0x88);
      uVar16 = __allmul(uVar5 << 0xf,((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11,uVar6,uVar3);
      FUN_004ee150(iVar15 + 0x10,iVar10,(uint)uVar16 >> 0x1e | (int)((ulonglong)uVar16 >> 0x20) << 2
                   ,0x8000,0);
      FUN_004ee300(iVar15 + 0x10,iVar10);
      FUN_004ee990(iVar15 + 0x10,iVar10,uVar6,uVar3);
      iVar10 = *(int *)(iVar9 + 0x108);
      local_10 = *(int *)(iVar9 + 0x10c) - iVar10 >> 5;
      iVar13 = 0;
      if (local_10 < 1) break;
      iVar7 = *(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4) + 0x194);
      piVar12 = (int *)(iVar10 + 8);
      do {
        iVar10 = *(int *)(*piVar12 + 0x28) * 0x10;
        if (*(int *)(iVar10 + 8 + iVar7) != 0) {
          for (iVar10 = *(int *)(iVar10 + iVar7); iVar10 != 0; iVar10 = *(int *)(iVar10 + 0x27c)) {
            iVar11 = *(int *)(iVar10 + 0x58);
            if (*(char *)(*(int *)(iVar10 + 0x68) + 0x40) != '\0') {
              iVar11 = *(int *)(iVar10 + 0x60);
            }
            iVar13 = iVar13 + (*(int *)(iVar10 + 0x58) - iVar11);
          }
        }
        piVar12 = piVar12 + 8;
        local_10 = local_10 + -1;
      } while (local_10 != 0);
      if (iVar13 < 1) break;
      iVar10 = *(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4);
      if (*(int *)(iVar10 + 300) != *(int *)(iVar10 + 0x134)) {
        piVar12 = (int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4) + 0x5c) + 0x2c);
        *piVar12 = *piVar12 + 1;
        break;
      }
      piVar12 = (int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4) + 0x5c) + 0x2c);
      *piVar12 = *piVar12 + 1;
    }
    FUN_00401000(0x44bb9000);
    iVar9 = FUN_00b31c00();
    iVar2 = *(int *)(*(int *)(*(int *)(iVar1 + 0xacc) + iVar2 * 4) + 0x5c);
    iVar9 = __alldiv((longlong)(*(int *)(iVar2 + 0x2c) * 1000) * (longlong)iVar9,1000,0);
    *(int *)(iVar2 + 0x2c) = iVar9 / 1000;
    piVar8 = piVar8 + 1;
  } while( true );
}

