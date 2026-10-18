// FUN_0088ab00 @ 0088ab00 body=[[0088ab00, 0088ac3a]]


void FUN_0088ab00(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  int in_ECX;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xe44);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
    local_40 = *(undefined4 *)(param_1 + 0x10);
    local_3c = *(undefined4 *)(param_1 + 0x14);
    local_34 = *(undefined1 *)(param_1 + 0x1c);
    local_33 = *(undefined1 *)(param_1 + 0x1d);
    local_30 = *(undefined4 *)(param_1 + 0x20);
    local_2c = *(undefined4 *)(param_1 + 0x24);
    local_28 = *(undefined4 *)(param_1 + 0x28);
    local_24 = *(undefined4 *)(param_1 + 0x2c);
    local_20 = *(undefined4 *)(param_1 + 0x30);
    local_1c = *(undefined4 *)(param_1 + 0x34);
    local_18 = *(undefined4 *)(param_1 + 0x38);
    local_14 = *(undefined4 *)(param_1 + 0x3c);
    local_4c = 0x18d;
    local_50 = CEventScope::vftable;
    local_10 = 1;
    local_48 = 0x2d2d2d;
    local_44 = 0;
    if (iVar2 == 0) {
      local_38 = 0;
    }
    else if ((*(int *)(iVar2 + 0x4c) - *(int *)(iVar2 + 0x48) & 0xfffffffcU) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = **(undefined4 **)(iVar2 + 0x48);
    }
    cVar5 = (**(code **)(*(int *)(in_ECX + 0x20) + 0x18))(&local_50);
    if (cVar5 == '\x01') {
      puVar3 = *(undefined4 **)(in_ECX + 8);
      while (puVar3 != (undefined4 *)0x0) {
        piVar4 = (int *)*puVar3;
        puVar3 = (undefined4 *)puVar3[2];
        (**(code **)(*piVar4 + 0x2c))(&local_50,param_2);
      }
    }
  }
  return;
}

