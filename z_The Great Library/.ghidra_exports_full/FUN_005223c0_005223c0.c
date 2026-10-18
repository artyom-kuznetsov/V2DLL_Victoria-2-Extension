// FUN_005223c0 @ 005223c0 body=[[005223c0, 00522421]]


void FUN_005223c0(int param_1,char param_2)

{
  int iVar1;
  int unaff_EDI;
  
  if (param_2 != '\0') {
    iVar1 = FUN_00aae9af(0x48);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_005eb030(unaff_EDI);
    }
    FUN_005e9c80(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
    (**(code **)(*(int *)(unaff_EDI + 0x9b4) + 0x18))(iVar1);
  }
  *(int *)(unaff_EDI + 0xe68) = param_1;
  return;
}

