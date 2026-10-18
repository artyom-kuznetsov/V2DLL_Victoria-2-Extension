// FUN_008c7220 @ 008c7220 body=[[008c7220, 008c72cc]]


void FUN_008c7220(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_50 [16];
  undefined4 local_40;
  
  FUN_008a88d0();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_2 + 0xc) * 4);
  puVar3 = (uint *)(iVar1 + 0x9d8);
  piVar2 = (int *)*puVar3;
  while (((int *)*puVar3 <= piVar2 && (piVar2 < *(int **)(iVar1 + 0x9dc)))) {
    local_40 = *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar2 * 4) + 0x58);
    piVar2 = piVar2 + 1;
    iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        (**(code **)(**(int **)(*(int *)(in_ECX + 8) + iVar5 * 4) + 0x30))
                  (param_1,local_50,param_3,param_4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
  }
  return;
}

