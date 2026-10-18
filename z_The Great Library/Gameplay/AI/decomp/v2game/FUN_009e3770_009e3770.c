// FUN_009e3770 @ 009e3770 body=[[009e3770, 009e3964] [009e3968, 009e397e]]


void FUN_009e3770(int *param_1)

{
  undefined2 uVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined2 *puVar8;
  char *pcVar9;
  undefined ***pppuStack_11c;
  undefined1 auStack_10c [4];
  undefined **local_108 [4];
  undefined ***pppuStack_f8;
  undefined1 auStack_f4 [12];
  undefined4 uStack_e8;
  uint uStack_e4;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b58bf6;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x248) != 0) {
    pppuStack_11c = local_108;
    ExceptionList = &local_14;
    psVar2 = (short *)(**(code **)(**(int **)(in_ECX + 0x248) + 0xf4))();
    psVar3 = (short *)(**(code **)(*param_1 + 0x3c))(&stack0xfffffef0);
    if (*psVar3 <= *psVar2) {
      pppuStack_11c = local_108;
      psVar2 = (short *)(**(code **)(**(int **)(in_ECX + 0x248) + 0xf4))();
      iVar4 = (**(code **)(*param_1 + 0x3c))(&stack0xfffffef0);
      if (*(short *)(iVar4 + 2) <= *psVar2) {
        ExceptionList = local_14;
        return;
      }
    }
    pppuStack_11c = (undefined ***)0xf;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    pppuStack_f8 = (undefined ***)((uint)pppuStack_f8 & 0xffffff00);
    FUN_00409350("fixedwindow.cpp");
    pppuStack_11c = (undefined ***)0x107;
    iStack_c = 0;
    puVar5 = (undefined2 *)FUN_004015b0(&pppuStack_f8,0x248);
    pppuStack_11c = (undefined ***)0x0;
    pcVar9 = " Illegal object boundaries with x: ";
    iStack_c._0_1_ = 1;
    puVar8 = puVar5;
    FUN_00987d50(puVar5," Illegal object boundaries with x: ",0x23);
    pppuStack_11c = *(undefined ****)(in_ECX + 0x248);
    puVar6 = (undefined2 *)(*(code *)(*pppuStack_11c)[0x3d])(auStack_10c);
    (**(code **)(*param_1 + 0x3c))(&stack0xfffffee8);
    iVar4 = (**(code **)(*(int *)pcVar9 + 0xf4))(auStack_f4);
    uVar1 = *(undefined2 *)(iVar4 + 2);
    iVar4 = (**(code **)(*param_1 + 0x3c))
                      (&pppuStack_11c,uVar1," in a window with size x: ",uVar1,*puVar6,uVar1,
                       " and y: ",uVar1,uVar1);
    uVar7 = FUN_009e64a0(puVar5,*puVar8,extraout_ECX," and y: ",extraout_ECX,
                         *(undefined2 *)(iVar4 + 2));
    uVar7 = FUN_00418e30(uVar7);
    uVar7 = FUN_009e64a0(uVar7);
    uVar7 = FUN_00418e30(uVar7);
    uVar7 = FUN_009e64a0(uVar7);
    uVar7 = FUN_00418e30(uVar7);
    pppuStack_11c = (undefined ***)FUN_009e64a0(uVar7);
    FUN_00401280();
    pppuStack_11c = appuStack_60;
    iStack_c = (uint)iStack_c._1_3_ << 8;
    FUN_00987ac0();
    pppuStack_11c = appuStack_60;
    appuStack_60[0] = std::ios_base::vftable;
    FUN_00aad52d();
    if (0xf < uStack_e4) {
      pppuStack_11c = pppuStack_f8;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return;
}

