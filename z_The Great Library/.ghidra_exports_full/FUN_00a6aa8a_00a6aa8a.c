// Catch_All@00a6aa8a @ 00a6aa8a body=[[00a6aa8a, 00a6aac3] [00a6aac7, 00a6ab09]]


void Catch_All_00a6aa8a(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  *(int *)(unaff_EBP + 0x14) = *(int *)(*(int *)(unaff_EBP + 0x14) + 4) + 0x108;
  piVar3 = *(int **)(unaff_EBP + 0x14);
  LOCK();
  iVar2 = *piVar3;
  *piVar3 = *piVar3 + 1;
  UNLOCK();
  *(int *)(unaff_EBP + -0x14) = iVar2;
  piVar3 = *(int **)(unaff_EBP + 8);
  uVar5 = FUN_00a6b390(*(undefined4 *)(unaff_EBP + 0x10));
  *piVar3 = unaff_EDI;
  puVar4 = *(undefined1 **)(unaff_EBP + 0x10);
  piVar3[2] = unaff_EDI;
  if (puVar4 != (undefined1 *)0x0) {
    *puVar4 = uVar5;
  }
  puVar1 = (undefined4 *)(unaff_EDI + 8 + unaff_EBX * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = **(undefined4 **)(unaff_EBP + 0xc);
  }
  *(undefined4 *)(unaff_EBP + 0x10) = *(undefined4 *)(unaff_EBP + -0x18);
  *(uint *)(unaff_EDI + 4) = *(uint *)(unaff_EDI + 4) | 1 << ((byte)unaff_EBX & 0x1f);
  piVar3 = *(int **)(unaff_EBP + 0x10);
  LOCK();
  iVar2 = *piVar3;
  *piVar3 = *piVar3 + 8;
  UNLOCK();
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

