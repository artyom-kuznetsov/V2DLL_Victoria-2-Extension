// FUN_00b00e30 @ 00b00e30 body=[[00b00e30, 00b00e72]]


void FUN_00b00e30(uint param_1)

{
  ushort uVar1;
  uint uVar2;
  int *in_ECX;
  int iVar3;
  
  uVar1 = *(ushort *)(in_ECX + 1);
  uVar2 = (uint)uVar1;
  *(ushort *)(in_ECX + 1) = (ushort)param_1;
  if (uVar1 < (ushort)param_1) {
    FUN_00b00820(param_1);
    for (; uVar2 < (param_1 & 0xffff); uVar2 = uVar2 + 1) {
      iVar3 = (uVar2 & 0xffff) * 0x10 + *in_ECX;
      if (iVar3 != 0) {
        *(undefined4 *)(iVar3 + 0xc) = 0;
      }
    }
  }
  return;
}

