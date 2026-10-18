// FUN_00b00c70 @ 00b00c70 body=[[00b00c70, 00b00cb4]]


void FUN_00b00c70(uint param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar2 = *(ushort *)(in_ECX + 1);
  uVar3 = (uint)uVar2;
  *(ushort *)(in_ECX + 1) = (ushort)param_1;
  if (uVar2 < (ushort)param_1) {
    FUN_00adca40(param_1);
    for (; uVar3 < (param_1 & 0xffff); uVar3 = uVar3 + 1) {
      iVar1 = *in_ECX + (uVar3 & 0xffff) * 8;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
    }
  }
  return;
}

