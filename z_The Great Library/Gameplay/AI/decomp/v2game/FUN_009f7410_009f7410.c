// FUN_009f7410 @ 009f7410 body=[[009f7410, 009f746c] [009f7470, 009f7489] [009f7498, 009f74a6] [009f74aa, 009f74b4]]


int FUN_009f7410(int param_1)

{
  int iVar1;
  undefined4 in_EAX;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  uint local_c;
  
  FUN_009f74c0(in_EAX);
  param_1 = param_1 + -1;
  iVar3 = 0;
  if (0 < param_1) {
    do {
      iVar1 = iVar3 + 1;
      iVar2 = FUN_009f7dd0(iVar1);
      if (iVar2 == -1) goto LAB_009f7498;
      iVar2 = FUN_009f7dd0(iVar1);
      if (param_1 <= iVar2) {
        if (local_c < 0x10) {
          return iVar3;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_20);
      }
      iVar3 = FUN_009f7dd0(iVar1);
    } while (iVar3 < param_1);
  }
  if (param_1 < iVar3) {
    if (local_c < 0x10) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_20);
  }
LAB_009f7498:
  if (local_c < 0x10) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_20);
}

