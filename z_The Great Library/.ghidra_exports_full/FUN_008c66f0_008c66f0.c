// FUN_008c66f0 @ 008c66f0 body=[[008c66f0, 008c673c] [008c6740, 008c67aa]]


undefined4 FUN_008c66f0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_008a88d0();
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    puVar3 = *(undefined4 **)(iVar1 + 0xd48);
    while ((*(undefined4 **)(iVar1 + 0xd48) <= puVar3 && (puVar3 < *(undefined4 **)(iVar1 + 0xd4c)))
          ) {
      puVar4 = puVar3 + 2;
      local_48 = *puVar3;
      local_44 = puVar3[1];
      iVar5 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
      if (iVar5 < 1) {
        return 1;
      }
      iVar6 = 0;
      while (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar6 * 4) + 0x18))(local_50),
            puVar3 = puVar4, cVar2 != '\0') {
        iVar6 = iVar6 + 1;
        if (iVar5 <= iVar6) {
          return 1;
        }
      }
    }
  }
  return 0;
}

