// FUN_00728670 @ 00728670 body=[[00728670, 0072871d]]


void FUN_00728670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_EDX;
  uint uVar5;
  uint uVar6;
  
  while( true ) {
    iVar4 = param_1 * 2 + 2;
    if (param_2 <= iVar4) break;
    iVar1 = *(int *)(DAT_012588e8 + 0xbcc);
    uVar5 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(in_EDX + -4 + iVar4 * 4) + 0x28) + 8) + 0x5bc
                           + iVar1);
    iVar2 = *(int *)(iVar1 + 0x5fc);
    uVar6 = (uint)*(byte *)(*(int *)(*(int *)(*(int *)(in_EDX + iVar4 * 4) + 0x28) + 8) + 0x5bc +
                           iVar1);
    iVar3 = *(int *)(iVar2 + 4 + uVar5 * 8);
    iVar1 = *(int *)(iVar2 + 4 + uVar6 * 8);
    if ((iVar3 <= iVar1) &&
       ((iVar3 < iVar1 || (*(uint *)(iVar2 + uVar5 * 8) < *(uint *)(iVar2 + uVar6 * 8))))) {
      iVar4 = param_1 * 2 + 1;
    }
    *(undefined4 *)(in_EDX + param_1 * 4) = *(undefined4 *)(in_EDX + iVar4 * 4);
    param_1 = iVar4;
  }
  if (iVar4 == param_2) {
    *(undefined4 *)(in_EDX + param_1 * 4) = *(undefined4 *)(in_EDX + -4 + param_2 * 4);
  }
  FUN_007290e0();
  return;
}

