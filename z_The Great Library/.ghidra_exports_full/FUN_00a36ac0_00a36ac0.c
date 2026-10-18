// FUN_00a36ac0 @ 00a36ac0 body=[[00a36ac0, 00a36c6e]]


int FUN_00a36ac0(int param_1)

{
  int unaff_EDI;
  
  if (param_1 != unaff_EDI) {
    if (*(uint *)(unaff_EDI + 0x10) == 0) {
      FUN_00868540();
      return param_1;
    }
    if (*(uint *)(unaff_EDI + 0x10) <= *(uint *)(param_1 + 0x10)) {
      FUN_0099e240();
      FUN_00816010();
      FUN_0099e240();
      FUN_00a37140();
      FUN_00816010();
      FUN_00a36c70();
      return param_1;
    }
    FUN_0099e240();
    FUN_00868600();
    FUN_0099e240();
    FUN_0099e240();
    FUN_00a37140();
    FUN_00816010();
    FUN_00816010();
    FUN_00a371f0(param_1);
  }
  return param_1;
}

