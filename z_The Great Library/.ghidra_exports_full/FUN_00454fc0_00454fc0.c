// FUN_00454fc0 @ 00454fc0 body=[[00454fc0, 00454fe8] [00454ff0, 004551d5] [004551d9, 0045520f]]


void FUN_00454fc0(uint *param_1,undefined4 *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  int *piVar8;
  undefined4 uVar9;
  int *piStack_140;
  undefined1 auStack_13c [16];
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int aiStack_120 [24];
  undefined **appuStack_c0 [36];
  void *pvStack_30;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b126;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
LAB_00454ff0:
  do {
    do {
      piVar6 = (int *)param_2[7];
      if ((char)piVar6[0x44] == '\0') {
        iVar5 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar5;
        if (iVar5 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar8 = aiStack_120;
      for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar8 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar8 = piVar8 + 1;
      }
      if (aiStack_120[0] == 0x13) {
        uStack_128 = 0xf;
        uStack_12c = 0;
        auStack_13c[0] = 0;
        FUN_00409350("musicmanager.cpp",0x10);
        uStack_c = 0;
        uVar7 = FUN_004015b0(auStack_13c,0x4f,0x10000);
        uVar9 = 0;
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        uVar3 = param_1[1];
        uVar4 = *param_1;
        FUN_00987d50(uVar7,"Loaded ",7,0);
        uVar7 = FUN_00455470(uVar7,(int)(uVar3 - uVar4) >> 2,extraout_ECX," songs.");
        uVar7 = FUN_00418e30(uVar7);
        FUN_00401280(uVar7);
        uStack_24 = uStack_24 & 0xffffff00;
        FUN_00987ac0(appuStack_c0);
        appuStack_c0[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_c0);
        uStack_24 = 0xffffffff;
        if ((int *)0xf < piStack_140) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uVar9);
        }
        piStack_140 = (int *)0xf;
        (**(code **)*param_2)(1);
        ExceptionList = pvStack_30;
        return;
      }
      FUN_009a1440(param_2);
    } while (param_2[8] != 0x5fe);
    piVar6 = (int *)FUN_00aae9af(0x40);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = (int)CSong::vftable;
      piVar6[1] = 0x18d;
      piVar6[7] = 0xf;
      piVar6[6] = 0;
      *(undefined1 *)(piVar6 + 2) = 0;
      piVar6[10] = 0x18d;
      piVar6[9] = (int)CMeanTimeToHappen::vftable;
      piVar6[0xc] = 0;
      piVar6[0xd] = 0;
      piVar6[0xe] = 0;
      piVar6[0xb] = 1000;
    }
    piStack_140 = piVar6;
    (**(code **)(*piVar6 + 0xc))(param_2);
    ppiVar1 = (int **)param_1[1];
    if (&piStack_140 < ppiVar1) {
      ppiVar2 = (int **)*param_1;
      if (ppiVar2 <= &piStack_140) {
        if (ppiVar1 == (int **)param_1[2]) {
          FUN_00a513f0();
        }
        if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
          *(undefined4 *)param_1[1] =
               *(undefined4 *)(*param_1 + ((int)&piStack_140 - (int)ppiVar2 >> 2) * 4);
        }
        param_1[1] = param_1[1] + 4;
        goto LAB_00454ff0;
      }
    }
    if (ppiVar1 == (int **)param_1[2]) {
      FUN_00a513f0();
    }
    if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
      *(undefined4 *)param_1[1] = piVar6;
    }
    param_1[1] = param_1[1] + 4;
  } while( true );
}

