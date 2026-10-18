// FUN_009d323a @ 009d323a body=[[009d323a, 009d3272] [009d3276, 009d32a4] [009d32b0, 009d347c] [009d3482, 009d34f9] [009d34fd, 009d3563] [009d3567, 009d3573] [009d3577, 009d3589] [009d358d, 009d35af] [009d35b3, 009d35c7]]


undefined4 FUN_009d323a(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int unaff_EBP;
  int iVar8;
  int unaff_EDI;
  uint uVar9;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  int iStack_c;
  
  iVar8 = *(int *)(unaff_EBP + 8);
  if (*(int *)(unaff_EBP + -0x74) != unaff_EDI) {
    iStack_c = 0x9d3250;
    iStack_c = FUN_009d2910();
    *(undefined1 *)(unaff_EBP + -4) = 8;
    uStack_10 = 0x9d3260;
    FUN_00408ed0();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if ((*(int *)(unaff_EBP + -0x74) != unaff_EDI) && (cVar3 = FUN_00416db0(), cVar3 != '\0')) {
      piVar1 = *(int **)(iVar8 + 0x94);
      piVar4 = (int *)*piVar1;
      *(int **)(unaff_EBP + -0x14) = piVar4;
      if (piVar4 != piVar1) {
        iVar8 = *(int *)(unaff_EBP + 8);
        do {
          *(undefined1 *)((int)piVar4 + 0x124) = 1;
          FUN_009d3e90();
          piVar4 = *(int **)(unaff_EBP + -0x14);
        } while (piVar4 != (int *)*(int *)(iVar8 + 0x94));
      }
      goto LAB_009d3577;
    }
  }
  puVar7 = (undefined4 *)0x0;
  *(int *)(unaff_EBP + -0x24) = unaff_EDI;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(int *)(unaff_EBP + -0x1c) = unaff_EDI;
  *(undefined1 *)(unaff_EBP + -4) = 9;
  piVar1 = *(int **)(iVar8 + 0x94);
  piVar4 = (int *)*piVar1;
  *(int **)(unaff_EBP + -0x14) = piVar4;
  if (piVar4 != piVar1) {
    *(undefined4 *)(unaff_EBP + -0x8c) = 1;
    *(undefined4 *)(unaff_EBP + -0x88) = 3;
    do {
      iVar8 = *(int *)(unaff_EBP + -0x14);
      uVar9 = 0;
      do {
        iVar5 = FUN_009d2f80();
        *(bool *)(iVar8 + 0x124) = iVar5 == 0;
        if (iVar5 == 0) goto LAB_009d33fd;
        uVar9 = uVar9 + 1;
      } while (uVar9 < 2);
      uVar9 = *(uint *)(unaff_EBP + -0x24);
      if (((undefined4 *)(unaff_EBP - 0x14U) < puVar7) && (uVar9 <= unaff_EBP - 0x14U)) {
        iVar8 = (unaff_EBP - 0x14U) - uVar9;
        if (puVar7 == *(undefined4 **)(unaff_EBP + -0x1c)) {
          uVar6 = (int)((int)puVar7 - uVar9) >> 2;
          if (0x3ffffffe < uVar6) {
LAB_009d3482:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad();
          }
          if ((uint)((int)((int)*(undefined4 **)(unaff_EBP + -0x1c) - uVar9) >> 2) < uVar6 + 1) {
            FUN_00435b80();
            puVar7 = *(undefined4 **)(unaff_EBP + -0x20);
            uVar9 = *(uint *)(unaff_EBP + -0x24);
          }
        }
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *(undefined4 *)(uVar9 + (iVar8 >> 2) * 4);
        }
      }
      else {
        if (puVar7 == *(undefined4 **)(unaff_EBP + -0x1c)) {
          uVar6 = (int)((int)puVar7 - uVar9) >> 2;
          if (0x3ffffffe < uVar6) goto LAB_009d3482;
          if ((uint)((int)((int)*(undefined4 **)(unaff_EBP + -0x1c) - uVar9) >> 2) < uVar6 + 1) {
            FUN_00435b80();
            puVar7 = *(undefined4 **)(unaff_EBP + -0x20);
          }
        }
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *(undefined4 *)(unaff_EBP + -0x14);
        }
      }
      puVar7 = puVar7 + 1;
      *(undefined4 **)(unaff_EBP + -0x20) = puVar7;
LAB_009d33fd:
      FUN_009d3e90();
    } while (*(int *)(unaff_EBP + -0x14) != *(int *)(*(int *)(unaff_EBP + 8) + 0x94));
    unaff_EDI = 0;
  }
  iVar5 = 0;
  iVar8 = (int)puVar7 - *(int *)(unaff_EBP + -0x24) >> 2;
  if (unaff_EDI < iVar8) {
    iVar2 = *(int *)(unaff_EBP + 8);
    do {
      uStack_10 = 0x9d3441;
      iStack_c = iVar2 + 0x90;
      FUN_009d3a00();
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  if (*(int *)(unaff_EBP + -0x58) == 0) {
    iStack_c = 0x9d345a;
    iStack_c = FUN_009d2910();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uStack_10 = 0x9d346a;
    FUN_00408ed0();
    if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  iStack_c = 0x9d34b3;
  FUN_00409350();
  *(undefined1 **)(unaff_EBP + 8) = auStack_1c;
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  iStack_c = 0;
  auStack_1c[0] = 0;
  FUN_00409350(&DAT_00ded94d,0);
  FUN_00992740(unaff_EBP + -200,unaff_EBP + -0x4c,1);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (0xf < *(uint *)(unaff_EBP + -0x38)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x38) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined1 *)(unaff_EBP + -0x4c) = 0;
  iStack_c = 0x9d3523;
  FUN_00993720();
  *(undefined ***)(unaff_EBP + -200) = &PTR_FUN_00e37dc0;
  if (*(int *)(unaff_EBP + -0x98) != 0) {
    PHYSFS_close();
    *(undefined4 *)(unaff_EBP + -0x98) = 0;
  }
  *(undefined ***)(unaff_EBP + -200) = &PTR_FUN_00e3b540;
  if (0xf < *(uint *)(unaff_EBP + -0xa0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(unaff_EBP + -0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_009d3577:
  if (0xf < *(uint *)(unaff_EBP + -0x54)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EBP + -0x54) = 0xf;
  *(undefined4 *)(unaff_EBP + -0x58) = 0;
  *(undefined1 *)(unaff_EBP + -0x68) = 0;
  if (0xf < *(uint *)(unaff_EBP + -0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}

