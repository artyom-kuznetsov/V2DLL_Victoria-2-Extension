// FUN_0052c9b0 @ 0052c9b0 body=[[0052c9b0, 0052ca2f]]


uint FUN_0052c9b0(undefined4 param_1)

{
  int iVar1;
  undefined4 in_EAX;
  uint uVar2;
  uint *puVar3;
  int in_ECX;
  
  uVar2 = FUN_0052e960();
  if ((char)uVar2 != '\0') {
    uVar2 = FUN_0052ca30(param_1,0);
    if ((char)uVar2 != '\0') {
      uVar2 = *(uint *)(in_ECX + 0xe78);
      iVar1 = *(int *)(in_ECX + 0xe7c);
      puVar3 = (uint *)FUN_004da720(in_EAX,in_ECX,0,in_ECX + 0x1184);
      if (((int)puVar3[1] <= iVar1) && (((int)puVar3[1] < iVar1 || (*puVar3 < uVar2)))) {
        return 1;
      }
      return 0;
    }
  }
  return uVar2 & 0xffffff00;
}

