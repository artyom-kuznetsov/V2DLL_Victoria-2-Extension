// FUN_00b33d41 @ 00b33d41 body=[[00b33d41, 00b33e6b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00b33d41(int param_1,int param_2,int param_3,int param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  
  dVar1 = ABS((double)CONCAT44(param_2,param_1));
  uVar4 = 0;
  dVar2 = _DAT_00f05fe0;
  if (param_4 == 0x7ff00000) {
    if (param_3 == 0) {
      if ((dVar1 <= 1.0) && (dVar2 = 1.0, dVar1 < 1.0)) {
        dVar2 = 0.0;
      }
      goto LAB_00b33e65;
    }
  }
  else if ((param_4 == -0x100000) && (param_3 == 0)) {
    if (dVar1 <= 1.0) {
      if (1.0 <= dVar1) {
        uVar4 = 1;
        dVar2 = _DAT_00f05fe8;
      }
    }
    else {
      dVar2 = 0.0;
    }
    goto LAB_00b33e65;
  }
  if (param_2 == 0x7ff00000) {
    if (param_1 != 0) {
      return 0;
    }
    if (((double)CONCAT44(param_4,param_3) <= 0.0) &&
       (dVar2 = 0.0, 0.0 <= (double)CONCAT44(param_4,param_3))) {
      dVar2 = 1.0;
    }
  }
  else {
    if (param_2 != -0x100000) {
      return 0;
    }
    if (param_1 != 0) {
      return 0;
    }
    iVar3 = __d_inttype(CONCAT44(param_4,param_3));
    dVar2 = 0.0;
    if ((double)CONCAT44(param_4,param_3) <= 0.0) {
      if (0.0 <= (double)CONCAT44(param_4,param_3)) {
        dVar2 = 1.0;
      }
      else if (iVar3 == 1) {
        dVar2 = _DAT_00f06000;
      }
    }
    else {
      dVar2 = _DAT_00f05fe0;
      if (iVar3 == 1) {
        dVar2 = -_DAT_00f05fe0;
      }
    }
  }
LAB_00b33e65:
  *param_5 = dVar2;
  return uVar4;
}

