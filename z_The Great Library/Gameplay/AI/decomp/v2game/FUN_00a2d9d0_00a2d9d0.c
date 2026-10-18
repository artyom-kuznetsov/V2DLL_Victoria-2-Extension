// FUN_00a2d9d0 @ 00a2d9d0 body=[[00a2d9d0, 00a2db94]]


void FUN_00a2d9d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  float10 fVar9;
  int aiStack_8c [34];
  
  if (in_ECX[0x5a] != *(int *)(in_ECX[0x54] + 0x6bc8c)) {
    bVar8 = DAT_00f20c18 == (undefined4 *)0x0;
    in_ECX[0x5a] = *(int *)(in_ECX[0x54] + 0x6bc8c);
    if (bVar8) {
      DAT_00f20c18 = (undefined4 *)FUN_00aae9af(4);
      if (DAT_00f20c18 == (undefined4 *)0x0) {
        DAT_00f20c18 = (undefined4 *)0x0;
      }
      else {
        *DAT_00f20c18 = &PTR_FUN_00e38b28;
      }
    }
    fVar9 = (float10)(**(code **)(*DAT_01258a8c + 0x14))();
    in_ECX[0x56] = (int)(float)(fVar9 + (float10)(float)in_ECX[0x55]);
  }
  (**(code **)(*(int *)in_ECX[0x3e] + 0x5c))(in_ECX[0x56]);
  piVar1 = in_ECX + 0x25;
  piVar6 = aiStack_8c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar6 = piVar6 + 1;
  }
  piVar1 = aiStack_8c;
  piVar6 = (int *)(in_ECX[0x3e] + 0x1e4);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar6 = piVar6 + 1;
  }
  if (((char)in_ECX[0x59] != '\0') &&
     (*(int *)(in_ECX[0x3e] + 0x1cc) == *(int *)(in_ECX[0x3e] + 0x1d8) + -1)) {
    (**(code **)(*in_ECX + 0x38))();
    (**(code **)(*in_ECX + 0x80))();
    piVar1 = (int *)(**(code **)(*in_ECX + 0x44))();
    (**(code **)(*piVar1 + 0x14))();
    *(undefined1 *)(in_ECX + 0x14) = 1;
  }
  iVar4 = in_ECX[0x50];
  if (iVar4 != in_ECX[0x51]) {
    do {
      (**(code **)(**(int **)(iVar4 + 0x1c) + 0x144))(1);
      puVar2 = (undefined4 *)FUN_00a53740();
      puVar7 = (undefined4 *)&stack0xffffff70;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      puVar2 = (undefined4 *)FUN_007eb4f0(&stack0xffffff70);
      puVar7 = (undefined4 *)(*(int *)(unaff_ESI + 0x1c) + 0x94);
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      (**(code **)(*(int *)in_ECX[0x4f] + 0x84))();
      iVar5 = ((int *)in_ECX[0x4f])[0x73];
      iVar3 = (**(code **)(*(int *)in_ECX[0x4f] + 0x84))();
      if (iVar3 == iVar5) {
        (**(code **)(**(int **)(iVar4 + 0x1c) + 0x170))();
      }
      iVar4 = iVar4 + 0x20;
    } while (iVar4 != in_ECX[0x51]);
  }
  return;
}

