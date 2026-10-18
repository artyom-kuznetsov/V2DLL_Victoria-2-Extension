// FUN_0050e4c0 @ 0050e4c0 body=[[0050e4c0, 0050e53c]]


void FUN_0050e4c0(undefined4 param_1,char param_2)

{
  int *piVar1;
  CSimpleException *this;
  int iVar2;
  int unaff_EDI;
  
  if (param_2 != '\0') {
    this = (CSimpleException *)FUN_00aae9af(0x18);
    if (this == (CSimpleException *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = CSimpleException::CSimpleException(this,unaff_EDI);
    }
    FUN_005e9b90(param_1);
    *(int *)(iVar2 + 8) = DAT_012588e8[0x2c3];
    (**(code **)(*(int *)(unaff_EDI + 0x9b4) + 0x18))(iVar2);
  }
  piVar1 = DAT_012588e8;
  *(undefined4 *)(unaff_EDI + 0xbe4) = param_1;
  iVar2 = (**(code **)(*piVar1 + 0x18))();
  if (iVar2 <= *(int *)(unaff_EDI + 0xbe4)) {
    *(undefined4 *)(unaff_EDI + 0xbe4) = 0;
  }
  return;
}

