// FUN_005b52d0 @ 005b52d0 body=[[005b52d0, 005b534f]]


void FUN_005b52d0(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0x36b) {
    iVar1 = FUN_00aae9af(0x2c);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005a98c0();
      goto LAB_005b532e;
    }
  }
  else if (param_2 == 0x36c) {
    iVar1 = FUN_00aae9af(0x2c);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005a9a60();
      goto LAB_005b532e;
    }
  }
  else {
    if (param_2 != 0x36d) {
      return;
    }
    iVar1 = FUN_00aae9af(0x38);
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005a9f10();
      goto LAB_005b532e;
    }
  }
  piVar2 = (int *)0x0;
LAB_005b532e:
  FUN_005b5350(piVar2);
  (**(code **)(*piVar2 + 0x18))();
  (**(code **)(*piVar2 + 0xc))(param_1);
  return;
}

