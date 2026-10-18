// FUN_00a767e0 @ 00a767e0 body=[[00a767e0, 00a7680c] [00a76810, 00a76844] [00a76848, 00a7685a]]


uint FUN_00a767e0(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  
  uVar2 = (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x24;
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar4 = *(int **)(in_ECX + 0x10);
    do {
      if ((*piVar4 != -1) && (piVar4[8] == param_2)) {
        iVar1 = (*(int **)(in_ECX + 0x10))[uVar3 * 9 + 5];
        if (iVar1 != 0) {
          FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(iVar1);
        }
        iVar1 = *(int *)(in_ECX + 0x10);
        *(undefined4 *)(uVar3 * 0x24 + 0x14 + iVar1) = param_1;
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 9;
    } while (uVar3 < uVar2);
  }
  return uVar2 & 0xffffff00;
}

