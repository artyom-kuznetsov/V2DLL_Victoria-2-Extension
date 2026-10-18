// FUN_00874c80 @ 00874c80 body=[[00874c80, 00874cd2]]


void FUN_00874c80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  (**(code **)(*(int *)(unaff_ESI + 0x5c) + 0x2c))(param_1,0);
  if ((*(char *)(DAT_012588e8 + 0xd1c) != '\0') && (*(char *)(unaff_ESI + 0x9c) != '\0')) {
    uVar1 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
    uVar2 = FUN_00468770(*(undefined4 *)(DAT_012586f4 + 8),unaff_ESI,param_1);
    FUN_00457b00(uVar1,uVar2);
  }
  return;
}

