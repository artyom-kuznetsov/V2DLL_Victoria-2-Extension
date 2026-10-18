// FUN_00924370 @ 00924370 body=[[00924370, 009243e1]]


void FUN_00924370(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_00533e50(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4));
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  if (*(int *)(iVar1 + 0x40) != 5) {
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  *(undefined4 *)(iVar1 + 0x40) = 5;
  return;
}

