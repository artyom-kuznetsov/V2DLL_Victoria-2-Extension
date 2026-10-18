// FUN_009f40a0 @ 009f40a0 body=[[009f40a0, 009f4106]]


void FUN_009f40a0(void)

{
  int iVar1;
  int iVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  uVar3 = (**(code **)(*in_ECX + 0x1c))();
  iVar1 = *(int *)(in_EAX + 0x78);
  puVar4 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = uVar3;
    puVar4[1] = iVar1;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
  }
  iVar2 = *(int *)(in_EAX + 0x7c);
  *(undefined4 **)(in_EAX + 0x78) = puVar4;
  *(int *)(in_EAX + 0x7c) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(in_EAX + 0x74) = puVar4;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar4;
  }
  for (puVar4 = *(undefined4 **)(in_EAX + 0x34); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)puVar4[2]) {
    (**(code **)(*(int *)*puVar4 + 4))(uVar3);
  }
  return;
}

