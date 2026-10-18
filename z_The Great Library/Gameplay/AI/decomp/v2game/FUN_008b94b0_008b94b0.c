// FUN_008b94b0 @ 008b94b0 body=[[008b94b0, 008b9525]]


undefined4 FUN_008b94b0(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined1 local_50 [28];
  char local_34;
  
  FUN_008a8650(0);
  FUN_00876240(*(undefined4 *)(in_ECX + 0x1c));
  if (local_34 == '\0') {
    return 0;
  }
  iVar3 = 0;
  iVar2 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
  if (0 < iVar2) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar3 * 4) + 0x18))(local_50);
      if (cVar1 == '\0') {
        return 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return 1;
}

