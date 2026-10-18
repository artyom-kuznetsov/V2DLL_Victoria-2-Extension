// FUN_009c4a10 @ 009c4a10 body=[[009c4a10, 009c4b01]]


void FUN_009c4a10(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  uVar2 = param_1;
  iVar1 = FUN_005c2ad0(param_1);
  if (iVar1 != 0) {
    param_1._3_1_ = *(undefined1 *)(in_ECX[0x25] + 0xf0);
    FUN_009963d0(in_ECX[0x25]);
    iVar1 = FUN_00996520(uVar2,in_ECX[0x26],&DAT_00f0f744);
    in_ECX[0x25] = iVar1;
    *(undefined1 *)(iVar1 + 0xf0) = param_1._3_1_;
    FUN_0099e960();
    iVar1 = *(int *)in_ECX[0x25];
    uVar2 = (**(code **)(*in_ECX + 0xb0))();
    (**(code **)(iVar1 + 0x5c))(uVar2);
    iVar1 = *(int *)in_ECX[0x25];
    uVar2 = (**(code **)(*in_ECX + 0x4c))();
    (**(code **)(iVar1 + 0x60))(uVar2);
    iVar1 = *in_ECX;
    puVar3 = (undefined4 *)(**(code **)(iVar1 + 0x3c))(&param_1);
    (**(code **)(iVar1 + 200))(*puVar3);
  }
  return;
}

