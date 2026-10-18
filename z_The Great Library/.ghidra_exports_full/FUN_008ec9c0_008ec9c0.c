// FUN_008ec9c0 @ 008ec9c0 body=[[008ec9c0, 008ec9fd] [008eca00, 008eca82]]


void FUN_008ec9c0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined1 local_50 [24];
  undefined4 local_38;
  
  FUN_008a88d0();
  piVar2 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4) + 0xe44);
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)piVar2[2];
    iVar3 = *piVar2;
    if (iVar3 == 0) {
      local_38 = 0;
    }
    else if ((*(int *)(iVar3 + 0x4c) - *(int *)(iVar3 + 0x48) & 0xfffffffcU) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = **(undefined4 **)(iVar3 + 0x48);
    }
    iVar3 = 0;
    iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    piVar2 = piVar1;
    if (0 < iVar4) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar3 * 4) + 0x30))
                  (param_1,local_50,param_3,param_4);
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
  }
  return;
}

