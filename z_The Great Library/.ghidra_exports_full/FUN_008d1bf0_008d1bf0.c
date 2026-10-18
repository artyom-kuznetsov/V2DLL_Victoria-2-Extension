// FUN_008d1bf0 @ 008d1bf0 body=[[008d1bf0, 008d1c27] [008d1c30, 008d1ca1]]


void FUN_008d1bf0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_2 + 0x10) * 4);
  FUN_008a88d0();
  puVar2 = *(undefined4 **)(iVar1 + 0x148);
  while ((*(undefined4 **)(iVar1 + 0x148) <= puVar2 && (puVar2 < *(undefined4 **)(iVar1 + 0x14c))))
  {
    local_48 = *puVar2;
    puVar3 = puVar2 + 2;
    local_44 = puVar2[1];
    iVar4 = *(int *)(in_ECX + 0xc) - *(int *)(in_ECX + 8) >> 2;
    iVar5 = 0;
    puVar2 = puVar3;
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

