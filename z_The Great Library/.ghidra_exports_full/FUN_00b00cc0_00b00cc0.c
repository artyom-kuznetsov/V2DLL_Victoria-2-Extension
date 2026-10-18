// FUN_00b00cc0 @ 00b00cc0 body=[[00b00cc0, 00b00d1d]]


void FUN_00b00cc0(uint param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar2 = *(ushort *)(in_ECX + 1);
  uVar3 = (uint)uVar2;
  *(ushort *)(in_ECX + 1) = (ushort)param_1;
  if (uVar2 < (ushort)param_1) {
    FUN_00b00890(param_1);
    for (; uVar3 < (param_1 & 0xffff); uVar3 = uVar3 + 1) {
      puVar1 = (undefined2 *)(*in_ECX + (uVar3 & 0xffff) * 0xc);
      if (puVar1 != (undefined2 *)0x0) {
        *(undefined4 *)(puVar1 + 4) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0x7fff;
      }
    }
  }
  return;
}

