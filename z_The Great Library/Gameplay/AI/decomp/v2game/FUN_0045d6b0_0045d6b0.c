// FUN_0045d6b0 @ 0045d6b0 body=[[0045d6b0, 0045d71b]]


void FUN_0045d6b0(int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int in_ECX;
  int unaff_ESI;
  undefined8 *unaff_EDI;
  
  while (param_1 < in_ECX) {
    iVar3 = (in_ECX + -1) / 2;
    puVar1 = (undefined8 *)(unaff_ESI + iVar3 * 0x14);
    if (*(int *)(unaff_ESI + 8 + iVar3 * 0x14) <= *(int *)(unaff_EDI + 1)) break;
    puVar2 = (undefined8 *)(unaff_ESI + in_ECX * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar1 + 2);
    in_ECX = iVar3;
  }
  puVar1 = (undefined8 *)(unaff_ESI + in_ECX * 0x14);
  *puVar1 = *unaff_EDI;
  puVar1[1] = unaff_EDI[1];
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(unaff_EDI + 2);
  return;
}

