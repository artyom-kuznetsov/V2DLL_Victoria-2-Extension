// FUN_00499250 @ 00499250 body=[[00499250, 00499684]]


/* WARNING: Removing unreachable block (ram,0x0049950f) */

void FUN_00499250(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int iVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iStack_28;
  int *piStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b552;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (*(undefined4 **)(param_1 + 0x212c) != (undefined4 *)0x0) {
    ExceptionList = &pvStack_14;
    (**(code **)**(undefined4 **)(param_1 + 0x212c))();
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (DAT_00f0af40 < 0x10) {
      pcVar4 = (char *)&DAT_00f0af2c;
    }
    else {
      pcVar4 = DAT_00f0af2c;
      if (DAT_00f0af2c == (char *)0x0) goto LAB_004992b4;
    }
    if ((*pcVar4 != '\0') && (iVar2 = PHYSFS_exists(), iVar2 != 0)) goto LAB_004995a0;
  }
LAB_004992b4:
  iVar2 = FUN_00aae9af();
  uStack_c = 0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar3 = (undefined4 *)FUN_00992740(iVar2,param_1 + 0x20bc,0);
  }
  uStack_c = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00aae9af();
  uStack_c = 1;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_00e3ba2c;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[6] = 0;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    FUN_009d9790();
  }
  uStack_c = 0xffffffff;
  *(undefined4 **)(param_1 + 0x212c) = puVar5;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x212c) + 4);
  iVar1 = *(int *)(*(int *)(param_1 + 0x212c) + 8);
  piStack_24 = (int *)FUN_00aae9af();
  uStack_c = 2;
  if (piStack_24 == (int *)0x0) {
    piStack_24 = (int *)0x0;
  }
  else {
    piStack_24[3] = 2;
    piStack_24[6] = iVar2 * 2;
    *piStack_24 = (int)&PTR_FUN_00e3ba2c;
    piStack_24[1] = iVar2;
    piStack_24[2] = iVar1;
    piStack_24[8] = 0;
    *(undefined1 *)(piStack_24 + 9) = 1;
    piStack_24[4] = 0x10;
    piStack_24[5] = 0x10000;
    iVar6 = FUN_00aad56b();
    piStack_24[8] = iVar6;
  }
  uStack_c = 0xffffffff;
  iStack_28 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          iVar9 = *(int *)(param_1 + 0x212c);
          pbVar7 = (byte *)(*(int *)(iVar9 + 0xc) * iVar6 + *(int *)(iVar9 + 0x18) * iStack_28 +
                           *(int *)(iVar9 + 0x20));
          iVar9 = 0;
          uVar11 = (uint)pbVar7[2];
          uVar13 = (uint)(byte)*(ushort *)(pbVar7 + 1);
          uVar12 = (uint)*pbVar7;
          if (uVar11 == 0) {
            if ((uVar13 != 0) || (uVar12 != 0)) {
LAB_004994f6:
              piVar10 = *(int **)(param_1 + ((uVar12 + uVar13 + uVar11 & 0x800001ff) + 6) * 0x10);
              if (piVar10 != (int *)0x0) {
                do {
                  iVar9 = *piVar10;
                  piVar10 = (int *)piVar10[2];
                  if (*(int *)(*(int *)(param_1 + 0x21c4) + iVar9 * 4) ==
                      (uint)*(ushort *)(pbVar7 + 1) * 0x100 + uVar12) goto LAB_0049944e;
                } while (piVar10 != (int *)0x0);
              }
            }
            iVar9 = 0;
          }
          else if (((uVar11 != 0xff) || (uVar13 != 0xff)) || (uVar12 != 0xff)) goto LAB_004994f6;
LAB_0049944e:
          puVar8 = (undefined1 *)(piStack_24[3] * iVar6 + piStack_24[6] * iStack_28 + piStack_24[8])
          ;
          iVar6 = iVar6 + 1;
          *puVar8 = (char)iVar9;
          puVar8[1] = (char)((uint)iVar9 >> 8);
        } while (iVar6 < iVar2);
      }
      iStack_28 = iStack_28 + 1;
    } while (iStack_28 < iVar1);
  }
  iVar2 = FUN_00aae9af();
  uStack_c = 5;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar3 = (undefined4 *)FUN_00992740(iVar2,&DAT_00f0af2c,1);
  }
  uStack_c = 0xffffffff;
  PHYSFS_setBuffer();
  (**(code **)(*piStack_24 + 8))();
  (**(code **)*puVar3)();
  (**(code **)*piStack_24)();
  if (*(undefined4 **)(param_1 + 0x212c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(param_1 + 0x212c))();
  }
LAB_004995a0:
  iVar2 = FUN_00aae9af();
  uStack_c = 6;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_00409350(&DAT_00ded94d,0);
    puVar3 = (undefined4 *)FUN_00992740(iVar2,&DAT_00f0af2c,0);
  }
  uStack_c = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00aae9af();
  uStack_c = 7;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = &PTR_FUN_00e3ba2c;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[6] = 0;
    puVar5[8] = 0;
    *(undefined1 *)(puVar5 + 9) = 0;
    FUN_009d9790();
  }
  uStack_c = 0xffffffff;
  *(undefined4 **)(param_1 + 0x212c) = puVar5;
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)();
  }
  *(undefined4 *)(param_1 + 0x2abc) = *(undefined4 *)(*(int *)(param_1 + 0x212c) + 4);
  *(undefined4 *)(param_1 + 0x2ac0) = *(undefined4 *)(*(int *)(param_1 + 0x212c) + 8);
  ExceptionList = pvStack_14;
  return;
}

