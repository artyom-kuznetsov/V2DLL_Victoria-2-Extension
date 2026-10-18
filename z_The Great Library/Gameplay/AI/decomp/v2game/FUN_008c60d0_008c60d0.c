// FUN_008c60d0 @ 008c60d0 body=[[008c60d0, 008c6148]]


void FUN_008c60d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  FUN_008a88d0();
  puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + 8);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[2];
    local_40 = *puVar2;
    iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar3 = 0;
    puVar2 = puVar1;
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

