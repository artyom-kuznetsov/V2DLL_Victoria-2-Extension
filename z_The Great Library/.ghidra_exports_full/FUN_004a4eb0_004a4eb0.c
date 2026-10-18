// FUN_004a4eb0 @ 004a4eb0 body=[[004a4eb0, 004a4f2e]]


void FUN_004a4eb0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int unaff_ESI;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_c [8];
  
  iVar2 = *(int *)(unaff_ESI + 0x7c);
  if ((iVar2 < 0) || ((1 < iVar2 && (iVar2 != 3)))) {
    *(bool *)(unaff_ESI + 0x80) = iVar2 != 4;
    return;
  }
  puVar1 = (undefined4 *)FUN_004a5020(local_c);
  uVar3 = FUN_00b31c36();
  lVar4 = __allmul(*puVar1,puVar1[1],uVar3);
  iVar2 = (int)((ulonglong)(lVar4 >> 0xf) >> 0x20);
  if ((*(int *)(unaff_ESI + 100) <= iVar2) &&
     ((*(int *)(unaff_ESI + 100) < iVar2 || (*(uint *)(unaff_ESI + 0x60) < (uint)(lVar4 >> 0xf)))))
  {
    *(undefined1 *)(unaff_ESI + 0x80) = 1;
    return;
  }
  *(undefined1 *)(unaff_ESI + 0x80) = 0;
  return;
}

