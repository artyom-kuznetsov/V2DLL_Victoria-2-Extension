// FUN_00ae30b0 @ 00ae30b0 body=[[00ae30b0, 00ae3116]]


void FUN_00ae30b0(int *param_1)

{
  undefined2 *puVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  if (param_1 != in_ECX) {
    *(undefined2 *)(in_ECX + 1) = 0;
    if (*in_ECX != 0) {
      (*(code *)PTR__free_00f01b10)(*in_ECX);
    }
    *in_ECX = 0;
    iVar2 = param_1[1];
    *(short *)(in_ECX + 1) = (short)iVar2;
    FUN_00ae2fb0((short)iVar2);
    uVar3 = 0;
    if ((short)in_ECX[1] != 0) {
      do {
        puVar1 = (undefined2 *)(*in_ECX + (uVar3 & 0xffff) * 2);
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = *(undefined2 *)(*param_1 + uVar3 * 2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(in_ECX + 1));
    }
  }
  return;
}

