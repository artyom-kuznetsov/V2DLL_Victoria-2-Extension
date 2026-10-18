// FUN_0088ae60 @ 0088ae60 body=[[0088ae60, 0088af1e]]


void FUN_0088ae60(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  undefined1 local_50 [8];
  undefined4 local_48;
  undefined4 local_44;
  
  FUN_0088b2b0(param_1);
  if (0 < *(int *)(in_ECX + 0x44)) {
    uVar4 = *(int *)(param_1 + 0x40) * 0x343fd + 0x269ec3;
    uVar5 = uVar4 * 0x343fd + 0x269ec3;
    *(uint *)(param_1 + 0x40) = uVar5;
    iVar6 = *(int *)(in_ECX + 0x44);
    FUN_008a88d0();
    puVar1 = *(undefined4 **)(in_ECX + 0x3c);
    for (iVar6 = (int)((longlong)(ulonglong)((uVar5 >> 0x10 & 0x7fff) * (uVar4 >> 0x10 & 0x7fff)) %
                      (longlong)iVar6); iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar1 = (undefined4 *)puVar1[3];
    }
    local_48 = *puVar1;
    puVar2 = *(undefined4 **)(in_ECX + 8);
    local_44 = puVar1[1];
    while (puVar2 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      (**(code **)(*piVar3 + 0x2c))(local_50,param_2);
    }
  }
  return;
}

