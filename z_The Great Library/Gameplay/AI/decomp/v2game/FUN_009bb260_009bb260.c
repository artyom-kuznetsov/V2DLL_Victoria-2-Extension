// FUN_009bb260 @ 009bb260 body=[[009bb260, 009bb407] [009bb40b, 009bb45d]]


void FUN_009bb260(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 extraout_ECX;
  uint unaff_EBX;
  uint unaff_ESI;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uStack_10c;
  uint auStack_100 [4];
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined **appuStack_6c [19];
  void *pvStack_20;
  uint uStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  pvStack_14 = ExceptionList;
  uVar8 = 0x16;
  uVar7 = 0;
  ExceptionList = &pvStack_14;
  piVar6 = param_2;
  uVar1 = (**(code **)(*param_2 + 0x18))(param_2,0,0x16);
  uVar9 = 0;
  if (uVar1 != 0) {
    do {
      (**(code **)(*param_2 + 0x1c))(param_2,0,0x16,uVar9,&stack0xfffffeec);
      if ((0x3ff < unaff_ESI) && (0x2cf < unaff_EBX)) {
        uStack_ec = 0xf;
        uStack_f0 = 0;
        auStack_100[0] = auStack_100[0] & 0xffffff00;
        FUN_00409350("graphicssettings.cpp",0x14);
        uStack_18 = 0;
        uVar2 = FUN_004015b0(auStack_100,0x298,3);
        uStack_18 = CONCAT31(uStack_18._1_3_,1);
        FUN_00987d50(uVar2,"Usable res: ",0xc,0);
        uVar2 = FUN_00447240(uVar2,piVar6,uVar7,&DAT_00ded950,uVar7,uVar7,extraout_ECX,&DAT_00ded950
                             ,extraout_ECX,uVar8);
        uVar2 = FUN_00418e30(uVar2);
        uVar2 = FUN_00447240(uVar2);
        uVar2 = FUN_00418e30(uVar2);
        piVar3 = (int *)FUN_00447240(uVar2);
        FUN_00408be0(piVar3);
        uVar5 = 0;
        if ((*(byte *)(*(int *)(*piVar3 + 4) + 0xc + (int)piVar3) & 6) == 0) {
          iVar4 = (**(code **)(**(int **)(*(int *)(*piVar3 + 4) + 0x38 + (int)piVar3) + 0x34))();
          if (iVar4 == -1) {
            uVar5 = 4;
          }
        }
        if (uVar5 != 0) {
          uVar5 = *(uint *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0xc) | uVar5;
          if (*(int *)((int)piVar3 + *(int *)(*piVar3 + 4) + 0x38) == 0) {
            uVar5 = uVar5 | 4;
          }
          FUN_00401120(uVar5,0);
        }
        uStack_18 = uStack_18 & 0xffffff00;
        FUN_00987ac0(appuStack_6c);
        appuStack_6c[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_6c);
        uStack_18 = 0xffffffff;
        if (0xf < uStack_ec) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_100[0]);
        }
        uStack_ec = 0xf;
        uStack_f0 = 0;
        auStack_100[0] = auStack_100[0] & 0xffffff00;
        FUN_009bb180(unaff_ESI,uStack_10c);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  ExceptionList = pvStack_20;
  return;
}

