// FUN_00a8c1c0 @ 00a8c1c0 body=[[00a8c1c0, 00a8c211]]


undefined1 FUN_00a8c1c0(void)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  int *in_ECX;
  
  uVar3 = 0;
  iVar2 = *(int *)(*in_ECX + 0x14);
  while ((iVar2 != 0 && (in_ECX[0x14] < in_ECX[0x13]))) {
    **(undefined1 **)(*in_ECX + 0x10) = *(undefined1 *)(in_ECX[0x14] + in_ECX[0xb]);
    in_ECX[0x14] = in_ECX[0x14] + 1;
    *(int *)(*in_ECX + 0x14) = *(int *)(*in_ECX + 0x14) + -1;
    *(int *)(*in_ECX + 0x10) = *(int *)(*in_ECX + 0x10) + 1;
    *(int *)(*in_ECX + 0x18) = *(int *)(*in_ECX + 0x18) + 1;
    uVar3 = 1;
    if (*(int *)(*in_ECX + 0x18) == 0) {
      piVar1 = (int *)(*in_ECX + 0x1c);
      *piVar1 = *piVar1 + 1;
    }
    iVar2 = *(int *)(*in_ECX + 0x14);
  }
  return uVar3;
}

