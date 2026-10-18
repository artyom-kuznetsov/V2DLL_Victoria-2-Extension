// FUN_00761e40 @ 00761e40 body=[[00761e40, 00761eb3]]


void FUN_00761e40(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x408);
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0x80) = uVar1;
  uVar1 = *(undefined4 *)(in_ECX + 0x40c);
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0x84) = uVar1;
  uVar1 = *(undefined4 *)(in_ECX + 0x410);
  iVar2 = FUN_00475500();
  *(undefined4 *)(iVar2 + 0x88) = uVar1;
  FUN_0066f060();
  return;
}

