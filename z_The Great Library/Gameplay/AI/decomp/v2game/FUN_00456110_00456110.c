// FUN_00456110 @ 00456110 body=[[00456110, 004561a8] [004561b0, 00456266] [0045626a, 004562d0]]


void FUN_00456110(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 unaff_EBX;
  uint uStack_38;
  undefined1 auStack_34 [12];
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b82d03;
  pvStack_14 = ExceptionList;
  if ((*(int *)(param_1 + 0x14) == 0) || (*(int *)(param_1 + 0x10) == 0)) {
    pcVar8 = *(code **)(**(int **)(param_1 + 0x54) + 0x5c);
    ExceptionList = &pvStack_14;
  }
  else {
    piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x10) * 4) + 0x148c)
    ;
    ExceptionList = &pvStack_14;
    if (*(int *)(*(int *)(param_1 + 0x54) + 0x104) != 0) {
      ExceptionList = &pvStack_14;
      (**(code **)(*(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x104) + 0x54) + 0x10))();
    }
    (**(code **)(**(int **)(param_1 + 0x54) + 0x5c))();
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[2];
      piVar3 = (int *)*piVar1;
      piVar4 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(param_1 + 0x10) * 0x10)
                        + piVar3[0x1b] * 4);
      piVar1 = piVar2;
      if ((piVar4 != (int *)0x0) && (cVar5 = (**(code **)(*piVar4 + 0x34))(), cVar5 != '\0')) {
        iVar6 = FUN_00aae9af(0xb0);
        uStack_c = 0;
        if (iVar6 != 0) {
          FUN_004556c0(iVar6,param_1);
        }
        uStack_c = 0xffffffff;
        uVar7 = (**(code **)(*piVar3 + 0x1c))(auStack_34);
        puStack_10 = (undefined1 *)0x1;
        FUN_00455940(unaff_EBX,piVar3[0x1b],uVar7);
        puStack_10 = (undefined1 *)0xffffffff;
        if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(uStack_38);
        }
        uStack_24 = 0xf;
        uStack_28 = 0;
        uStack_38 = uStack_38 & 0xffffff00;
        (**(code **)(**(int **)(param_1 + 0x54) + 0x10))(unaff_EBX,0);
      }
    }
    FUN_00452c70();
    pcVar8 = *(code **)(**(int **)(param_1 + 0x54) + 0x6c);
  }
  (*pcVar8)();
  ExceptionList = pvStack_14;
  return;
}

