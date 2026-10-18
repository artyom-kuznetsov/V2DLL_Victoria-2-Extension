// FUN_004dab20 @ 004dab20 body=[[004dab20, 004dab9b]]


void FUN_004dab20(void)

{
  int iVar1;
  int in_EAX;
  longlong *unaff_EDI;
  longlong lVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *(int *)(in_EAX + 300);
  if (((iVar1 != 0) && (DAT_01258734 != 0)) && (iVar1 != DAT_01258734 + 0x10)) {
    FUN_0047e3e0(iVar1 + 0x24,*(int *)(DAT_012588e8 + 0xbcc) + 0x280);
    lVar2 = __allmul(local_c,local_8,0xc8000,0);
    *unaff_EDI = lVar2 >> 0xf;
    return;
  }
  *(undefined4 *)unaff_EDI = 0;
  *(undefined4 *)((int)unaff_EDI + 4) = 0;
  return;
}

