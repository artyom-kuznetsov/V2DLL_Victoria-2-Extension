// FUN_0087db70 @ 0087db70 body=[[0087db70, 0087dc16]]


void FUN_0087db70(int param_1)

{
  int iVar1;
  int *piVar2;
  CSimpleException *this;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar4 = *(int *)(in_ECX + 0x20) / 1000;
  this = (CSimpleException *)FUN_00aae9af(0x18);
  if (this == (CSimpleException *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = CSimpleException::CSimpleException(this,iVar1);
  }
  FUN_005e9b90(iVar4);
  *(int *)(iVar3 + 8) = DAT_012588e8[0x2c3];
  (**(code **)(*(int *)(iVar1 + 0x9b4) + 0x18))(iVar3);
  piVar2 = DAT_012588e8;
  *(int *)(iVar1 + 0xbe4) = iVar4;
  iVar4 = (**(code **)(*piVar2 + 0x18))();
  if (iVar4 <= *(int *)(iVar1 + 0xbe4)) {
    *(undefined4 *)(iVar1 + 0xbe4) = 0;
  }
  return;
}

