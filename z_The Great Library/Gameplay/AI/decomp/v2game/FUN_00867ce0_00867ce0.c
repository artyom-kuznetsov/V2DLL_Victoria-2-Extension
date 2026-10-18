// FUN_00867ce0 @ 00867ce0 body=[[00867ce0, 00867d56]]


void FUN_00867ce0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      uVar3 = uVar5;
      FUN_0099e240(uVar5);
      piVar2 = (int *)FUN_00868600(uVar3);
      if ((int *)*piVar2 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)*piVar2;
      }
      uVar3 = (uint)piVar2[2] >> 2;
      if (*(uint *)(iVar4 + 8) <= uVar3) {
        uVar3 = uVar3 - *(uint *)(iVar4 + 8);
      }
      puVar1 = *(undefined4 **)(*(int *)(*(int *)(iVar4 + 4) + uVar3 * 4) + (piVar2[2] & 3U) * 4);
      if (puVar1 != (undefined4 *)0x0) {
        (**(code **)*puVar1)(1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x30));
  }
  FUN_0098bf40();
  return;
}

