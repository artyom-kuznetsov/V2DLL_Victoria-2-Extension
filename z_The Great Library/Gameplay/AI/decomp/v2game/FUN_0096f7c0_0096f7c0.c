// FUN_0096f7c0 @ 0096f7c0 body=[[0096f7c0, 0096f8a2]]


void FUN_0096f7c0(void)

{
  int iVar1;
  int unaff_EDI;
  longlong lVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = *(int *)(DAT_012588e8 + 0xbcc) + 0x280;
  FUN_0047e3e0(unaff_EDI + 0x110,iVar1);
  lVar2 = __allmul(DAT_00f0ea90,DAT_00f0ea94,local_10,local_c);
  *(longlong *)(unaff_EDI + 800) = lVar2 >> 0xf;
  FUN_0047e3e0(unaff_EDI + 0x168,iVar1);
  lVar2 = __allmul(DAT_00f0ea90,DAT_00f0ea94,local_10,local_c);
  *(longlong *)(unaff_EDI + 0x328) = lVar2 >> 0xf;
  FUN_0047e3e0(unaff_EDI + 0x1c0,iVar1);
  lVar2 = __allmul(DAT_00f0ea90,DAT_00f0ea94,local_10,local_c);
  *(longlong *)(unaff_EDI + 0x330) = lVar2 >> 0xf;
  return;
}

