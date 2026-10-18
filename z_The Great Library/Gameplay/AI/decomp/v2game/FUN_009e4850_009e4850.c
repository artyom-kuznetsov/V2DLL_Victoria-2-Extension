// FUN_009e4850 @ 009e4850 body=[[009e4850, 009e488c] [009e4890, 009e48e9]]


void FUN_009e4850(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x30))(param_1);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 100))(in_ECX[0x125]);
    for (puVar4 = (undefined4 *)in_ECX[0x20];
        (puVar4 != (undefined4 *)0x0 && ((int *)*puVar4 != piVar3));
        puVar4 = (undefined4 *)puVar4[2]) {
    }
    FUN_005f2ae0(puVar4);
    iVar1 = in_ECX[0x21];
    puVar4 = (undefined4 *)FUN_00aae9af(0x10);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = piVar3;
      puVar4[1] = iVar1;
      puVar4[2] = 0;
      *(undefined1 *)(puVar4 + 3) = 0;
    }
    iVar2 = in_ECX[0x22];
    in_ECX[0x21] = (int)puVar4;
    in_ECX[0x22] = iVar2 + 1;
    if (iVar2 != 0) {
      *(undefined4 **)(iVar1 + 8) = puVar4;
      return;
    }
    in_ECX[0x20] = (int)puVar4;
  }
  return;
}

