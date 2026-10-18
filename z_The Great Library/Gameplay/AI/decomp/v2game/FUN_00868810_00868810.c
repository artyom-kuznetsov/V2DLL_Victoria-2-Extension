// FUN_00868810 @ 00868810 body=[[00868810, 008688a9]]


int FUN_00868810(int *param_1)

{
  int iVar1;
  int iVar2;
  float in_XMM0_Da;
  undefined8 uVar3;
  
  FUN_00401000((in_XMM0_Da + 0.0005) * 1000.0);
  iVar2 = FUN_00b31c00();
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else {
    iVar1 = *param_1;
    if ((iVar1 < -0x189373) || (0x20c49a < iVar1)) {
      uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
      iVar2 = __alldiv(uVar3,iVar2,iVar2 >> 0x1f);
    }
    else {
      iVar2 = (iVar1 * 1000) / iVar2;
    }
  }
  return iVar2;
}

