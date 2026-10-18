// FUN_0092d2b0 @ 0092d2b0 body=[[0092d2b0, 0092d2f9]]


int FUN_0092d2b0(void)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = (*(int *)(in_ECX + 0x1c) + -43800000) / 0x18;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((1 < (int)((double)iVar1 / 365.0)) &&
     (*(int *)(in_ECX + 0x1c) < *(int *)(DAT_012588e8 + 0xb0c))) {
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}

