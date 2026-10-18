// FUN_0084a5c0 @ 0084a5c0 body=[[0084a5c0, 0084aa7a]]


void FUN_0084a5c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  int *in_ECX;
  
  iVar3 = FUN_00aae9af(0xb8);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00849ff0();
  }
  in_ECX[0x84] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x84]);
  (**(code **)(*(int *)in_ECX[0x84] + 0xcc))();
  iVar3 = FUN_00aae9af(0x6c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4);
    piVar4 = (int *)FUN_00825e50(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20));
    *piVar4 = (int)CAIPoliticsMinister::vftable;
    piVar4[0x19] = -1;
    piVar4[0x1a] = (int)in_ECX;
  }
  in_ECX[0x83] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x83]);
  (**(code **)(*(int *)in_ECX[0x83] + 0xcc))();
  iVar3 = FUN_00aae9af(0x7c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00825e50(in_ECX[0xd],in_ECX[0xe]);
    *piVar4 = (int)CAINationalFocus::vftable;
    piVar4[0x19] = (int)in_ECX;
    piVar4[0x1a] = -1;
    piVar4[0x1b] = 0;
    piVar4[0x1c] = 0;
    piVar4[0x1d] = 0;
  }
  in_ECX[0x26] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x26]);
  (**(code **)(*(int *)in_ECX[0x26] + 0xcc))();
  iVar3 = FUN_00aae9af(0x6c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00825e50(in_ECX[0xd],in_ECX[0xe]);
    *piVar4 = (int)CAIResearch::vftable;
    piVar4[0x19] = (int)in_ECX;
    piVar4[0x1a] = -1;
  }
  in_ECX[0x27] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x27]);
  (**(code **)(*(int *)in_ECX[0x27] + 0xcc))();
  iVar3 = DAT_012587e4;
  in_ECX[0x29] = 0;
  iVar3 = *(int *)(*(int *)(iVar3 + 4) + in_ECX[0xe] * 4);
  piVar4 = *(int **)(iVar3 + 0x9d8);
  puVar5 = (uint *)(iVar3 + 0x9d8);
  while (((int *)*puVar5 <= piVar4 && (piVar4 < (int *)puVar5[1]))) {
    iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
    iVar1 = in_ECX[0x80];
    piVar4 = piVar4 + 1;
    piVar6 = (int *)FUN_00aae9af(0x10);
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      *piVar6 = iVar3;
      piVar6[1] = iVar1;
      piVar6[2] = 0;
      *(undefined1 *)(piVar6 + 3) = 0;
    }
    iVar2 = in_ECX[0x81];
    in_ECX[0x80] = (int)piVar6;
    in_ECX[0x81] = iVar2 + 1;
    if (iVar2 == 0) {
      in_ECX[0x7f] = (int)piVar6;
      *(int **)(iVar3 + 0x324) = in_ECX;
    }
    else {
      *(int **)(iVar1 + 8) = piVar6;
      *(int **)(iVar3 + 0x324) = in_ECX;
    }
  }
  (**(code **)(*in_ECX + 0x160))
            ((float)((float10)*(longlong *)
                               (*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0xe78) *
                    (float10)3.0517578125e-05));
  *(undefined1 *)(in_ECX + 0xf) = 1;
  iVar3 = FUN_00aae9af(0x8c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00833650();
  }
  in_ECX[0x21] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x21]);
  (**(code **)(*(int *)in_ECX[0x21] + 0xcc))();
  iVar3 = FUN_00aae9af(0x6c);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00825e50(in_ECX[0xd],in_ECX[0xe]);
    *piVar4 = (int)CAIBudgetMinister::vftable;
    piVar4[0x19] = (int)in_ECX;
    piVar4[0x1a] = -1;
  }
  in_ECX[0x20] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x20]);
  (**(code **)(*(int *)in_ECX[0x20] + 0xcc))();
  iVar3 = FUN_00aae9af(0x84);
  if (iVar3 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00825e50(in_ECX[0xd],in_ECX[0xe]);
    *piVar4 = (int)CAIProductionMinister::vftable;
    piVar4[0x19] = (int)in_ECX;
    piVar4[0x1a] = -1;
    piVar4[0x1b] = 0;
    *(undefined2 *)((int)piVar4 + 0x71) = 0;
    *(undefined1 *)((int)piVar4 + 0x73) = 0;
    piVar4[0x1e] = 0;
    piVar4[0x1f] = 0;
    piVar4[0x20] = 0;
  }
  in_ECX[0x28] = (int)piVar4;
  (**(code **)(*piVar4 + 0xbc))();
  (**(code **)(*in_ECX + 0x114))(in_ECX[0x28]);
  (**(code **)(*(int *)in_ECX[0x28] + 0xcc))();
  for (iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + in_ECX[0xe] * 4) + 0xa08); iVar3 != 0;
      iVar3 = *(int *)(iVar3 + 8)) {
  }
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  (**(code **)(*in_ECX + 0xf0))();
  FUN_00859d30();
  FUN_0084aca0(in_ECX);
  in_ECX[0xc] = 1;
  return;
}

