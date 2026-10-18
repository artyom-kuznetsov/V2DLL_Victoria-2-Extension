// FUN_00a69acf @ 00a69acf body=[[00a69acf, 00a69bf1]]


void FUN_00a69acf(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char cVar8;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  cVar8 = (char)unaff_EBX;
  if (*(char *)((int)unaff_ESI + 0x36) != cVar8) {
    uVar5 = (**(code **)(*unaff_ESI + 0x24))();
    uVar5 = uVar5 & 0xffff;
    uVar6 = (**(code **)(*unaff_ESI + 0x20))(uVar5);
    iVar7 = FUN_00a603d0(uVar6,uVar5);
    if ((int)unaff_EBX <= iVar7) {
      iVar2 = **(int **)(unaff_EBP + -0x14);
      FUN_00a89eb0(iVar2,(*(int **)(unaff_EBP + -0x14))[1] - iVar2,1);
      FUN_00a89f70(iVar7 * 0xe8 + *(int *)(*(int *)(*(int *)(unaff_EBP + -0x18) + 0x18) + 0x20));
    }
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  puVar4 = *(undefined4 **)(*(int *)(unaff_EBP + -0x18) + 0x54);
  *(undefined4 *)(unaff_EBP + 8) = puVar4[1];
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == unaff_EBX) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar6 = *(undefined4 *)(unaff_EBP + 8);
    *puVar3 = unaff_ESI;
    puVar3[1] = uVar6;
    puVar3[2] = unaff_EBX;
    *(char *)(puVar3 + 3) = cVar8;
  }
  puVar1 = (undefined4 *)puVar4[2];
  puVar4[1] = puVar3;
  puVar4[2] = (int)puVar1 + 1;
  if (puVar1 == unaff_EBX) {
    *puVar4 = puVar3;
  }
  else {
    *(undefined4 **)(*(int *)(unaff_EBP + 8) + 8) = puVar3;
  }
  iVar7 = *(int *)(unaff_EBP + -0x18);
  iVar2 = *(int *)(iVar7 + 0x80);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == unaff_EBX) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = *(undefined4 *)(unaff_EBP + -0x14);
    puVar4[1] = iVar2;
    puVar4[2] = unaff_EBX;
    *(char *)(puVar4 + 3) = cVar8;
  }
  puVar3 = *(undefined4 **)(iVar7 + 0x84);
  *(undefined4 **)(iVar7 + 0x80) = puVar4;
  *(int *)(iVar7 + 0x84) = (int)puVar3 + 1;
  if (puVar3 != unaff_EBX) {
    *(undefined4 **)(iVar2 + 8) = puVar4;
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  *(undefined4 **)(iVar7 + 0x7c) = puVar4;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

