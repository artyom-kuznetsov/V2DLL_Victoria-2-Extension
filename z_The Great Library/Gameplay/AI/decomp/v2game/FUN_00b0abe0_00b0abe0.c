// FUN_00b0abe0 @ 00b0abe0 body=[[00b0abe0, 00b0ac41]]


undefined4 FUN_00b0abe0(undefined4 param_1)

{
  uint uVar1;
  char cVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  
  uVar1 = in_ECX[1];
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      iVar4 = *(int *)(*(int *)(*in_ECX + uVar3 * 4) + 0x10);
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      FUN_00b15770(iVar4);
      cVar2 = FUN_00b147b0(param_1);
      if (cVar2 == '\x01') {
        return *(undefined4 *)(*in_ECX + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}

