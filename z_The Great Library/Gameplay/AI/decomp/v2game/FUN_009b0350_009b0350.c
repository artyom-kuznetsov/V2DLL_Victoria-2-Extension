// FUN_009b0350 @ 009b0350 body=[[009b0350, 009b03c8] [009b03d0, 009b04bf] [009b04ce, 009b04d9] [009b04e8, 009b05e9] [009b05ed, 009b072d] [009b0731, 009b075c] [009b0763, 009b0792]]


void FUN_009b0350(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  uint uStack_1dc;
  uint auStack_1d0 [4];
  undefined4 uStack_1c0;
  uint uStack_1bc;
  uint auStack_1b4 [4];
  undefined4 uStack_1a4;
  uint uStack_1a0;
  undefined **appuStack_120 [48];
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  uint uStack_c;
  
  pvStack_14 = ExceptionList;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5733c;
  ExceptionList = &pvStack_14;
  if (*(char *)(param_1 + 0x25d) != '\0') {
    puVar6 = *(undefined4 **)(param_1 + 4);
    ExceptionList = &pvStack_14;
    *(undefined1 *)(param_1 + 0x25d) = 0;
    for (; puVar6 != (undefined4 *)0x0; puVar6 = (undefined4 *)puVar6[2]) {
      (**(code **)(*(int *)*puVar6 + 4))(3);
    }
    FUN_009b1190();
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x38) + 0x50))();
  piVar2 = (int *)*piVar5;
  do {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)*piVar5;
      iVar9 = piVar5[2];
      do {
        if (iVar9 == 0) {
          ExceptionList = pvStack_14;
          return;
        }
        if (piVar2 != (int *)0x0) {
          if ((char)piVar5[3] == '\0') {
            iVar9 = piVar2[2];
            *piVar5 = iVar9;
            if (iVar9 == 0) {
              piVar5[1] = 0;
            }
            else {
              *(undefined4 *)(iVar9 + 4) = 0;
            }
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(piVar2);
          }
          *(undefined1 *)(piVar2 + 3) = 1;
        }
        if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar2)(1);
        }
        piVar2 = (int *)*piVar5;
        iVar9 = piVar5[2];
      } while( true );
    }
    if (*(int *)(*piVar2 + 0x38) != 0) {
      for (piVar8 = *(int **)(param_1 + 0x220); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == *(int *)(*piVar2 + 0x38)) {
          uStack_1bc = 0xf;
          uStack_1c0 = 0;
          auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
          FUN_00409350("session.cpp",0xb);
          uStack_c = 2;
          piVar8 = (int *)FUN_004015b0(auStack_1d0,0x2ae,0x301);
          uStack_c = CONCAT31(uStack_c._1_3_,3);
          FUN_00987d50(piVar8,"Command double! Skipping.",0x19,0);
          FUN_00408be0(piVar8);
          uStack_1dc = 0;
          if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
             (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))()
             , iVar9 == -1)) {
            uStack_1dc = 4;
          }
          if (uStack_1dc != 0) {
            uStack_1dc = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uStack_1dc;
            if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
              uStack_1dc = uStack_1dc | 4;
            }
            FUN_00401120(uStack_1dc,0);
          }
          uStack_c = CONCAT31(uStack_c._1_3_,2);
          FUN_00987ac0(appuStack_60);
          appuStack_60[0] = std::ios_base::vftable;
          FUN_00aad52d(appuStack_60);
          uStack_c = 0xffffffff;
          if (0xf < uStack_1bc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(auStack_1d0[0]);
          }
          uStack_1bc = 0xf;
          uStack_1c0 = 0;
          auStack_1d0[0] = auStack_1d0[0] & 0xffffff00;
          goto LAB_009b05f0;
        }
      }
    }
    *(undefined1 *)(param_1 + 0x234) = 1;
    cVar4 = (**(code **)(*(int *)*piVar2 + 0x38))();
    if (cVar4 == '\0') {
      uStack_1a0 = 0xf;
      uStack_1a4 = 0;
      auStack_1b4[0] = auStack_1b4[0] & 0xffffff00;
      FUN_00409350("session.cpp",0xb);
      uStack_c = 0;
      uVar7 = FUN_004015b0(auStack_1b4,0x2aa,0x301);
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      uVar1 = *(undefined2 *)(*piVar2 + 0x34);
      FUN_00987d50(uVar7,"Atempted to execute invalid order with stamp ",0x2d,0);
      piVar8 = (int *)FUN_00455470(uVar7,uVar1);
      FUN_00408be0(piVar8);
      uVar10 = 0;
      if (((*(byte *)(*(int *)(*piVar8 + 4) + 0xc + (int)piVar8) & 6) == 0) &&
         (iVar9 = (**(code **)(**(int **)(*(int *)(*piVar8 + 4) + 0x38 + (int)piVar8) + 0x34))(),
         iVar9 == -1)) {
        uVar10 = 4;
      }
      if (uVar10 != 0) {
        uVar10 = *(uint *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0xc) | uVar10;
        if (*(int *)((int)piVar8 + *(int *)(*piVar8 + 4) + 0x38) == 0) {
          uVar10 = uVar10 | 4;
        }
        FUN_00401120(uVar10,0);
      }
      uStack_c = uStack_c & 0xffffff00;
      FUN_00987ac0(appuStack_120);
      appuStack_120[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_120);
      uStack_c = 0xffffffff;
      if (0xf < uStack_1a0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(auStack_1b4[0]);
      }
    }
    else {
      (**(code **)(*(int *)*piVar2 + 0x18))();
      *(undefined1 *)(param_1 + 0x234) = 0;
      iVar9 = *(int *)(param_1 + 0x224);
      uVar7 = *(undefined4 *)(*piVar2 + 0x38);
      puVar6 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = uVar7;
        puVar6[1] = iVar9;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 0;
      }
      iVar3 = *(int *)(param_1 + 0x228);
      *(undefined4 **)(param_1 + 0x224) = puVar6;
      *(int *)(param_1 + 0x228) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(param_1 + 0x220) = puVar6;
      }
      else {
        *(undefined4 **)(iVar9 + 8) = puVar6;
      }
      if ((*(int *)(param_1 + 0x230) < *(int *)(param_1 + 0x228)) &&
         (iVar9 = *(int *)(param_1 + 0x220), iVar9 != 0)) {
        if (*(char *)(param_1 + 0x22c) == '\0') {
          iVar3 = *(int *)(iVar9 + 8);
          *(int *)(param_1 + 0x220) = iVar3;
          if (iVar3 != 0) {
            *(undefined4 *)(iVar3 + 4) = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar9);
          }
          *(undefined4 *)(param_1 + 0x224) = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar9);
        }
        *(undefined1 *)(iVar9 + 0xc) = 1;
      }
    }
LAB_009b05f0:
    piVar2 = (int *)piVar2[2];
  } while( true );
}

