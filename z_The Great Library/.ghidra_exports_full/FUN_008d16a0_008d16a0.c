// FUN_008d16a0 @ 008d16a0 body=[[008d16a0, 008d1745]]


void FUN_008d16a0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_008a88d0();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  puVar2 = *(undefined4 **)(iVar1 + 0x1418);
  while ((*(undefined4 **)(iVar1 + 0x1418) <= puVar2 && (puVar2 < *(undefined4 **)(iVar1 + 0x141c)))
        ) {
    local_48 = *puVar2;
    local_44 = puVar2[1];
    puVar2 = puVar2 + 2;
    iVar3 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar4 * 4) + 0x30))
                  (param_1,local_50,param_3,param_4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar3);
    }
  }
  return;
}

