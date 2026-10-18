// FUN_009b15c0 @ 009b15c0 body=[[009b15c0, 009b1635]]


void FUN_009b15c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(in_EAX + 0x100);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = param_1;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(in_EAX + 0x104);
  *(undefined4 **)(in_EAX + 0x100) = puVar3;
  *(int *)(in_EAX + 0x104) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_EAX + 0xfc) = puVar3;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar3;
  }
  for (puVar3 = *(undefined4 **)(in_EAX + 4); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)puVar3[2]) {
    (**(code **)(*(int *)*puVar3 + 8))();
  }
  return;
}

