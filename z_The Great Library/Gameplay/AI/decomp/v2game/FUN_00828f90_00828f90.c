// FUN_00828f90 @ 00828f90  (requested 00828F90, first bytes: 55 8B EC 83 EC 08 53 57)


void FUN_00828f90(int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *unaff_ESI;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  DAT_0131ca68 = FUN_009c12d0();
  iVar3 = DAT_01258a9c + 1;
  iVar4 = DAT_01258a90 + 0x1268;
  uVar5 = *(undefined4 *)(param_1 + 0xdc);
  DAT_01258a9c = iVar3;
  iVar6 = iVar4;
  iVar7 = iVar3;
  (**(code **)(*unaff_ESI + 0xe8))(uVar5,iVar4,iVar3);
  FUN_0084fc60(uVar5,iVar6,iVar7);
  iVar6 = unaff_ESI[0x34];
  piVar2 = (int *)FUN_00aae9af(0x14);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar4;
    piVar2[1] = iVar3;
    piVar2[2] = iVar6;
    piVar2[3] = 0;
    *(undefined1 *)(piVar2 + 4) = 0;
  }
  iVar7 = unaff_ESI[0x35];
  unaff_ESI[0x34] = (int)piVar2;
  unaff_ESI[0x35] = iVar7 + 1;
  if (iVar7 == 0) {
    unaff_ESI[0x33] = (int)piVar2;
  }
  else {
    *(int **)(iVar6 + 0xc) = piVar2;
  }
  iVar6 = *(int *)(param_1 + 0x98);
  while (param_2 < iVar6) {
    puVar1 = *(undefined4 **)(param_1 + 0x94);
    iVar6 = iVar4;
    iVar7 = iVar3;
    (**(code **)(*unaff_ESI + 0xe8))(iVar4,iVar3);
    FUN_0084fd10(*puVar1,iVar6,iVar7);
    iVar6 = *(int *)(param_1 + 0x98);
  }
  return;
}

