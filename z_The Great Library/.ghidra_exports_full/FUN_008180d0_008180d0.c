// FUN_008180d0 @ 008180d0 body=[[008180d0, 00818146] [00818150, 00818371]]


/* WARNING: Removing unreachable block (ram,0x00818292) */

void FUN_008180d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  char **ppcVar7;
  int in_ECX;
  int iVar8;
  int *piVar9;
  int unaff_ESI;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  char *pcStack_f0;
  char *pcStack_ec;
  char *pcStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  int *piStack_dc;
  int *piStack_d8;
  int *piStack_d4;
  undefined4 *puStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined *puStack_c4;
  int iVar14;
  uint uStack_b4;
  undefined4 local_a8 [3];
  int aiStack_9c [7];
  undefined1 auStack_80 [20];
  float fStack_6c;
  char acStack_68 [12];
  int aiStack_5c [22];
  
  iVar14 = *(int *)(*(int *)(in_ECX + 0x13c) + 0x140);
  if (iVar14 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar14 * 4);
  }
  puStack_c4 = &DAT_00e19be0;
  uStack_cc = 0x818116;
  piStack_c8 = piVar9;
  (**(code **)(*piVar9 + 0xe8))();
  uStack_cc = 0;
  puStack_d0 = local_a8;
  local_a8[0] = 0;
  piStack_d8 = (int *)0x818130;
  piStack_d4 = piVar9;
  (**(code **)(*piVar9 + 0xfc))();
  piVar3 = (int *)(*(int *)(param_1 + 0x6bc88) + 0x1c);
  iVar14 = 0;
  do {
    piVar10 = (int *)(in_ECX + 0x94);
    piVar11 = aiStack_9c;
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar11 = *piVar10;
      piVar10 = piVar10 + 1;
      piVar11 = piVar11 + 1;
    }
    if (iVar14 == 1) {
      iVar8 = *(int *)(DAT_0125870c + 0x2abc);
      if (0.0 < fStack_6c) {
        iVar8 = -iVar8;
      }
      fStack_6c = (float)iVar8 + fStack_6c;
    }
    piStack_d8 = (int *)0x8181b7;
    uVar4 = (**(code **)(*piVar3 + 0x16c))();
    piStack_d8 = (int *)0x8181c7;
    uVar5 = (**(code **)(*piVar3 + 0x174))();
    piStack_dc = aiStack_9c;
    piStack_e0 = aiStack_5c;
    uStack_e4 = 0x8181df;
    piStack_d8 = (int *)uVar4;
    D3DXMatrixMultiply();
    pcStack_ec = acStack_68;
    pcStack_f0 = (char *)0x8181ea;
    pcStack_e8 = pcStack_ec;
    uStack_e4 = uVar5;
    D3DXMatrixMultiply();
    pcStack_f0 = "WorldViewProjectionMatrix";
    piVar10 = piVar9;
    uVar4 = (**(code **)(*piVar9 + 0x24))(piVar9,0);
    (**(code **)(*piVar9 + 0x98))(piVar9,uVar4,auStack_80);
    uVar4 = (**(code **)(*piVar9 + 0x24))(piVar9,0,"CurrentProgress");
    (**(code **)(*piVar9 + 0x78))(piVar9,uVar4,piVar10[0x58]);
    iVar1 = piVar10[0x4f];
    iVar2 = piVar10[0x50];
    iVar8 = iVar2 + 0x6b81c;
    pcStack_ec = (char *)FUN_00462500(iVar1 + 0x100);
    pcStack_e8 = *(char **)(iVar8 + 4);
    if (pcStack_ec == pcStack_e8) {
LAB_008182da:
      pcStack_f0 = pcStack_e8;
      ppcVar7 = &pcStack_f0;
    }
    else {
      uVar12 = *(uint *)(pcStack_ec + 0x1c);
      uVar13 = *(uint *)(iVar1 + 0x110);
      uVar6 = uVar13;
      if (uVar12 <= uVar13) {
        uVar6 = uVar12;
      }
      uVar6 = FUN_00414bd0(uVar6);
      if (uVar6 == 0) {
        if (uVar13 < uVar12) goto LAB_008182da;
        uVar6 = (uint)(uVar13 != uVar12);
      }
      if ((int)uVar6 < 0) goto LAB_008182da;
      ppcVar7 = &pcStack_ec;
    }
    if (*ppcVar7 == *(char **)(iVar2 + 0x6b820)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)(*(int *)(*ppcVar7 + 0x28) * 0x2c + 0x15c + iVar2);
    }
    (**(code **)(*piVar9 + 0xd0))(piVar9,&DAT_00e0bce4,uVar4);
    uVar12 = 0;
    if (uStack_b4 != 0) {
      do {
        piStack_e0 = (int *)0x818322;
        piStack_dc = piVar9;
        piStack_d8 = (int *)uVar12;
        (**(code **)(*piVar9 + 0x100))();
        piStack_e0 = (int *)0x81833a;
        FUN_009f9d50();
        uStack_e4 = 0x818345;
        piStack_e0 = piVar9;
        (**(code **)(*piVar9 + 0x108))();
        uVar12 = uVar12 + 1;
      } while (uVar12 < uStack_b4);
    }
    iVar14 = iVar14 + 1;
    in_ECX = unaff_ESI;
    if (1 < iVar14) {
      piStack_dc = (int *)0x818369;
      piStack_d8 = piVar9;
      (**(code **)(*piVar9 + 0x10c))();
      return;
    }
  } while( true );
}

