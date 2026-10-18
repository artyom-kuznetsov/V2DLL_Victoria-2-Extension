// FUN_00b26510 @ 00b26510 body=[[00b26510, 00b265a4]]


void FUN_00b26510(void)

{
  int *piVar1;
  int iVar2;
  undefined4 unaff_ESI;
  
  switch(unaff_ESI) {
  case 0:
  case 1:
    goto switchD_00b26518_caseD_0;
  case 2:
    FUN_00b1f840("need dictionary");
    return;
  case 0xfffffffa:
    FUN_00b1f840("version error");
    return;
  case 0xfffffffb:
    FUN_00b1f840("buffer error");
    return;
  case 0xfffffffc:
    FUN_00b1f840("memory error");
    return;
  case 0xfffffffd:
    FUN_00b1f840("data error");
    return;
  default:
    FUN_00b1f840("unknown error");
    return;
  case 0xffffffff:
    piVar1 = __errno();
    iVar2 = FUN_00ab4a98(*piVar1);
    if (iVar2 != 0) {
      FUN_00b1f840(iVar2);
    }
switchD_00b26518_caseD_0:
    return;
  }
}

