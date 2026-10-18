// FUN_008a61f0 @ 008a61f0 body=[[008a61f0, 008a6277]]


void FUN_008a61f0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  if (unaff_ESI < 0) {
    (**(code **)(*(int *)(unaff_EDI + 0x74) + 0x2c))(param_1,0);
    return;
  }
  iVar2 = *(int *)(unaff_EDI + 0xb4) - *(int *)(unaff_EDI + 0xb0) >> 2;
  if ((iVar2 != 0) && (unaff_ESI < iVar2)) {
    (**(code **)(*(int *)(*(int *)(*(int *)(unaff_EDI + 0xb0) + unaff_ESI * 4) + 0x28) + 0x2c))
              (param_1);
    if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') && (*(char *)(unaff_EDI + 0x1a5) != '\0')) {
      uVar1 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
      uVar3 = FUN_00468210(*(undefined4 *)(DAT_012586f4 + 8),unaff_EDI,param_1,unaff_ESI);
      FUN_00457b00(uVar1,uVar3);
    }
  }
  return;
}

