// FUN_008ec480 @ 008ec480 body=[[008ec480, 008ec557]]


undefined4 FUN_008ec480(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  
  FUN_008a88d0();
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe44);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    piVar1 = (int *)piVar2[2];
    iVar4 = *piVar2;
    iVar5 = 0;
    if (iVar4 == 0) {
      local_38 = 0;
    }
    else if ((*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) & 0xfffffffcU) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = **(undefined4 **)(iVar4 + 0x48);
    }
    iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    local_48 = 0x2d2d2d;
    local_44 = 0;
    if (iVar4 < 1) break;
    while (cVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x18))(local_50),
          piVar2 = piVar1, cVar3 != '\0') {
      iVar5 = iVar5 + 1;
      if (iVar4 <= iVar5) {
        return 1;
      }
    }
  }
  return 1;
}

