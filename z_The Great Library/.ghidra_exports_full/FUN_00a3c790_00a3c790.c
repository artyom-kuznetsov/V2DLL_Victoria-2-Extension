// FUN_00a3c790 @ 00a3c790 body=[[00a3c790, 00a3c864]]


void FUN_00a3c790(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x84) {
    if (param_2 == 0x83) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%f",in_ECX + 0xec);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      return;
    }
    if (param_2 == 0x2e) {
      FUN_009a1f40(in_ECX + 200);
      return;
    }
    if (param_2 == 0x55) {
      (**(code **)(*(int *)(in_ECX + 0x90) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x59) {
      FUN_009a1750(in_ECX + 0xd0,0);
      return;
    }
  }
  else {
    if (param_2 == 0x133) {
      (**(code **)(*(int *)(in_ECX + 0xac) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x197) {
      FUN_009a1bb0(in_ECX + 0xf0);
      return;
    }
  }
  FUN_00a20b80(param_1,param_2);
  return;
}

