// FUN_005b82c0 @ 005b82c0 body=[[005b82c0, 005b8411]]


void FUN_005b82c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined8 uVar5;
  
  *(undefined4 *)(unaff_ESI + 0xd0) = 0;
  *(int *)(unaff_ESI + 0xd0) = *(int *)(unaff_ESI + 0xd0) + *(int *)(*(int *)(unaff_ESI + 0x48) + 8)
  ;
  *(int *)(unaff_ESI + 0xd0) =
       *(int *)(unaff_ESI + 0xd0) + *(int *)(*(int *)(unaff_ESI + 0x48) + 0x10);
  *(int *)(unaff_ESI + 0xd0) =
       *(int *)(unaff_ESI + 0xd0) + *(int *)(*(int *)(unaff_ESI + 0x48) + 0x18);
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x48) + 0x20);
  uVar5 = __allmul(iVar1,iVar1 >> 0x1f,5000,0);
  iVar1 = __alldiv(uVar5,1000,0);
  *(int *)(unaff_ESI + 0xd0) = *(int *)(unaff_ESI + 0xd0) + iVar1;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x48) + 0x28);
  FUN_00401000();
  iVar2 = FUN_00b31c00();
  uVar5 = __allmul(iVar1,iVar1 >> 0x1f,iVar2,iVar2 >> 0x1f);
  iVar1 = __alldiv(uVar5,1000,0);
  *(int *)(unaff_ESI + 0xd0) = *(int *)(unaff_ESI + 0xd0) + iVar1;
  *(int *)(unaff_ESI + 0xd0) =
       *(int *)(unaff_ESI + 0xd0) + *(int *)(*(int *)(unaff_ESI + 0x48) + 0x30);
  *(int *)(unaff_ESI + 0xd0) =
       *(int *)(unaff_ESI + 0xd0) + *(int *)(*(int *)(unaff_ESI + 0x48) + 0x38);
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x48) + 0x40);
  FUN_00401000();
  iVar3 = FUN_00b31c00();
  iVar1 = __alldiv((longlong)iVar3 * (longlong)iVar1,1000,0);
  *(int *)(unaff_ESI + 0xd0) = *(int *)(unaff_ESI + 0xd0) + iVar1;
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0x48) + 0x48);
  uVar5 = __allmul(iVar1,iVar1 >> 0x1f,iVar2,iVar2 >> 0x1f);
  iVar1 = __alldiv(uVar5,1000,0);
  *(int *)(unaff_ESI + 0xd0) = *(int *)(unaff_ESI + 0xd0) + iVar1;
  if (0 < *(int *)(unaff_ESI + 0xd0)) {
    uVar4 = __alldiv((longlong)(*(int *)(unaff_ESI + 0xd8) + 1000) *
                     (longlong)*(int *)(unaff_ESI + 0xd0),1000,0);
    *(undefined4 *)(unaff_ESI + 0xd0) = uVar4;
  }
  return;
}

