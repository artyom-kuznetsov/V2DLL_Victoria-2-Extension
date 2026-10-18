// FUN_004b6fa0 @ 004b6fa0 body=[[004b6fa0, 004b741b]]


void FUN_004b6fa0(int *param_1,char param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar8;
  int *unaff_EDI;
  int aiStack_120 [2];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [28];
  undefined1 auStack_f4 [148];
  undefined **appuStack_60 [19];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  piVar8 = param_1;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b101;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if ((((*(char *)(unaff_EDI[0x17] + 0x2a) != '\0') &&
       (ExceptionList = &pvStack_14, cVar2 = (**(code **)(*param_1 + 0x38))(), cVar2 != '\0')) &&
      ((char)piVar8[0x30] == 'R')) &&
     ((*(char *)((int)piVar8 + 0xc1) == 'E' && (*(char *)((int)piVar8 + 0xc2) == 'B')))) {
    aiStack_120[0] = unaff_EDI[0x4a];
    *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[0x4b] * 4) + 0x94) = 1;
  }
  if ((*(char *)(unaff_EDI[0x17] + 0x2a) == '\0') ||
     (cVar2 = (**(code **)(*piVar8 + 0x3c))(), cVar2 == '\0')) {
    if ((*(char *)(unaff_EDI[0x17] + 0x2a) != '\0') ||
       (cVar2 = (**(code **)(*piVar8 + 0x3c))(), cVar2 != '\0')) {
      if ((unaff_EDI[0x15] == 0) ||
         (iVar6 = (**(code **)(*(int *)unaff_EDI[0x15] + 0x58))(aiStack_120),
         *(int *)(iVar6 + 4) != piVar8[0x31])) {
        iVar6 = unaff_EDI[0x40];
        puVar5 = (undefined4 *)FUN_00aae9af(0x10);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = piVar8;
          puVar5[1] = iVar6;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        iVar7 = unaff_EDI[0x41];
        unaff_EDI[0x40] = (int)puVar5;
        unaff_EDI[0x41] = iVar7 + 1;
        if (iVar7 == 0) {
          unaff_EDI[0x3f] = (int)puVar5;
        }
        else {
          *(undefined4 **)(iVar6 + 8) = puVar5;
        }
      }
      else if ((char)piVar8[1] == '\0') {
        piVar1 = (int *)unaff_EDI[0x3f];
        if (piVar1 == (int *)0x0) {
          FUN_009e6cc0(&param_1);
        }
        else {
          iVar6 = *piVar1;
          iVar7 = (**(code **)(*(int *)unaff_EDI[0x15] + 0x58))(aiStack_120);
          if (*(int *)(iVar6 + 0xc4) == *(int *)(iVar7 + 4)) {
            iVar6 = (**(code **)(*(int *)unaff_EDI[0x15] + 0x58))(auStack_118);
            if (param_1[0x31] == *(int *)(iVar6 + 4)) {
              FUN_009e6cc0(&param_1);
              piVar8 = param_1;
            }
            else {
              iVar6 = unaff_EDI[0x40];
              puVar5 = (undefined4 *)FUN_00aae9af(0x10);
              if (puVar5 == (undefined4 *)0x0) {
                puVar5 = (undefined4 *)0x0;
              }
              else {
                *puVar5 = param_1;
                puVar5[1] = iVar6;
                puVar5[2] = 0;
                *(undefined1 *)(puVar5 + 3) = 0;
              }
              iVar7 = unaff_EDI[0x41];
              unaff_EDI[0x40] = (int)puVar5;
              unaff_EDI[0x41] = iVar7 + 1;
              piVar8 = param_1;
              if (iVar7 == 0) {
                unaff_EDI[0x3f] = (int)puVar5;
              }
              else {
                *(undefined4 **)(iVar6 + 8) = puVar5;
              }
            }
          }
          else {
            FUN_009e6cc0(&param_1);
            piVar8 = param_1;
          }
        }
      }
      else {
        FUN_009e6cc0(&param_1);
      }
      if (param_2 != '\0') {
        ExceptionList = pvStack_14;
        return;
      }
      iVar6 = unaff_EDI[0x3c];
      puVar5 = (undefined4 *)FUN_00aae9af(0x10);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = piVar8;
        puVar5[1] = iVar6;
        puVar5[2] = 0;
        *(undefined1 *)(puVar5 + 3) = 0;
      }
      iVar7 = unaff_EDI[0x3d];
      unaff_EDI[0x3c] = (int)puVar5;
      unaff_EDI[0x3d] = iVar7 + 1;
      if (iVar7 == 0) {
        unaff_EDI[0x3b] = (int)puVar5;
      }
      else {
        *(undefined4 **)(iVar6 + 8) = puVar5;
      }
      goto LAB_004b7231;
    }
    if (param_2 == '\0') goto LAB_004b719b;
  }
  else if (param_2 == '\0') {
    if (unaff_EDI[0x56] == 0) {
      FUN_009885d0();
      uStack_c = 0;
      puVar3 = (undefined4 *)(**(code **)(*unaff_EDI + 0x1c))(auStack_f4);
      puStack_10._0_1_ = 1;
      uVar4 = FUN_004015b0(auStack_110,0xd6e,0x10004);
      puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,2);
      FUN_00987d50(uVar4,"Navalunit",9,0);
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x20))();
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar4 = FUN_00418e30(uVar4,puVar5);
      uVar4 = FUN_00418e30(uVar4,&DAT_00dfbfa4,param_1 + 0x30,param_1 + 0x30,extraout_ECX,
                           ") placed in non port ");
      uVar4 = FUN_00418e30(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      if (0xf < (uint)puVar3[5]) {
        puVar3 = (undefined4 *)*puVar3;
      }
      uVar4 = FUN_00418e30(uVar4,puVar3);
      uVar4 = FUN_00418e30(uVar4,&DAT_00dfd010,unaff_EDI[0x16],unaff_EDI[0x16],extraout_ECX_00,
                           " is not a port.");
      uVar4 = FUN_00455470(uVar4);
      uVar4 = FUN_00418e30(uVar4);
      FUN_00401280(uVar4);
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      FUN_00987ac0(appuStack_60);
      appuStack_60[0] = std::ios_base::vftable;
      FUN_00aad52d(appuStack_60);
      FUN_00408ad0();
      uStack_c = 0xffffffff;
      FUN_00408ad0();
      piVar8 = param_1;
    }
    else {
      FUN_004a7bc0(piVar8);
    }
LAB_004b719b:
    iVar6 = unaff_EDI[0x3c];
    puVar5 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = piVar8;
      puVar5[1] = iVar6;
      puVar5[2] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    unaff_EDI[0x3c] = (int)puVar5;
    iVar7 = unaff_EDI[0x3d];
    unaff_EDI[0x3d] = iVar7 + 1;
    if (iVar7 == 0) {
      unaff_EDI[0x3b] = (int)puVar5;
    }
    else {
      *(undefined4 **)(iVar6 + 8) = puVar5;
    }
  }
  iVar6 = unaff_EDI[0x40];
  puVar5 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = piVar8;
    puVar5[1] = iVar6;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 0;
  }
  unaff_EDI[0x40] = (int)puVar5;
  iVar7 = unaff_EDI[0x41];
  unaff_EDI[0x41] = iVar7 + 1;
  if (iVar7 == 0) {
    unaff_EDI[0x3f] = (int)puVar5;
  }
  else {
    *(undefined4 **)(iVar6 + 8) = puVar5;
  }
  if (param_2 != '\0') {
    ExceptionList = pvStack_14;
    return;
  }
LAB_004b7231:
  FUN_004b7be0(unaff_EDI);
  ExceptionList = pvStack_14;
  return;
}

