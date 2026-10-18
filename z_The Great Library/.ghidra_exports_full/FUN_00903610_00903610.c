// FUN_00903610 @ 00903610 body=[[00903610, 00903674]]


ulonglong FUN_00903610(int param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int in_EAX;
  int *piVar4;
  int in_ECX;
  int in_EDX;
  
  if (*(char *)(in_ECX + 0x28) != '\0') {
    iVar1 = *(int *)(param_1 + 0x28);
    in_EAX = param_1;
    if (iVar1 != 0) {
      in_EDX = *(int *)(in_ECX + 0x1c);
      in_EAX = *(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) >> 4;
      if (in_EDX < in_EAX) {
        piVar4 = (int *)(in_EDX * 0x10 + *(int *)(iVar1 + 0x34));
        iVar2 = *(int *)(in_ECX + 0x20);
        bVar3 = iVar2 < piVar4[1] - *piVar4 >> 2;
        in_EAX = CONCAT31((int3)((uint)piVar4 >> 8),bVar3);
        if (bVar3) {
          iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x34) + in_EDX * 0x10) + iVar2 * 4);
          return (ulonglong)CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(in_ECX + 0x24));
        }
      }
    }
  }
  return CONCAT44(in_EDX,in_EAX) & 0xffffffffffffff00;
}

