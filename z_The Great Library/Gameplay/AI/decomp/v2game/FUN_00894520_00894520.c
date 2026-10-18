// FUN_00894520 @ 00894520 body=[[00894520, 0089459a]]


void FUN_00894520(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar3 = FUN_00aae9af(0x48);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005eb030(iVar2);
  }
  FUN_005e9c80(iVar1 + 0x10);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  (**(code **)(*(int *)(iVar2 + 0x9b4) + 0x18))(iVar3);
  *(int *)(iVar2 + 0xe68) = iVar1;
  return;
}

