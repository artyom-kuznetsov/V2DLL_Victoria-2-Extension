// FUN_00464d90 @ 00464d90 body=[[00464d90, 00464dd2]]


void FUN_00464d90(int param_1)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  undefined1 *unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x44) + in_EAX * 0x10);
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(iVar1 + in_ECX * 0x1c,0,0xffffffff);
  return;
}

