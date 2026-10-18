// FUN_00892ce0 @ 00892ce0 body=[[00892ce0, 00892dc4]]


void FUN_00892ce0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  
  FUN_008931d0(in_ECX);
  if (0 < (int)(*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) & 0xfffffffcU)) {
    uVar5 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
    uVar6 = uVar5 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x40) = uVar6;
    iVar1 = *(int *)(in_ECX + 0x40);
    iVar2 = *(int *)(in_ECX + 0x3c);
    FUN_008a88d0();
    local_44 = 0;
    local_48 = 0x2d2d2d;
    iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) +
                    (int)((longlong)(ulonglong)((uVar6 >> 0x10 & 0x7fff) * (uVar5 >> 0x10 & 0x7fff))
                         % (longlong)(iVar1 - iVar2 >> 2)) * 4);
    if (iVar1 == 0) {
      local_38 = 0;
    }
    else if ((*(int *)(iVar1 + 0x4c) - *(int *)(iVar1 + 0x48) & 0xfffffffcU) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = **(undefined4 **)(iVar1 + 0x48);
    }
    puVar3 = *(undefined4 **)(in_ECX + 8);
    while (puVar3 != (undefined4 *)0x0) {
      piVar4 = (int *)*puVar3;
      puVar3 = (undefined4 *)puVar3[2];
      (**(code **)(*piVar4 + 0x2c))(local_50,param_2);
    }
  }
  return;
}

