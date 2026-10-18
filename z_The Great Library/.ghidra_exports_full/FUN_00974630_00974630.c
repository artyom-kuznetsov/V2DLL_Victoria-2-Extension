// FUN_00974630 @ 00974630 body=[[00974630, 0097476e]]


void FUN_00974630(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 < 0x8b3) {
    if (param_2 == 0x8b2) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",in_ECX + 0x1b4);
      if (iVar1 != 0) {
        return;
      }
      FUN_009a1140();
      return;
    }
    if (param_2 < 0x635) {
      if (param_2 == 0x634) {
        (**(code **)(*(int *)(in_ECX + 0x74) + 0xc))(param_1);
        return;
      }
      if (param_2 == 0x55) {
        (**(code **)(*(int *)(in_ECX + 0x198) + 0xc))(param_1);
        return;
      }
      if (param_2 == 0x490) {
        FUN_009a1ce0();
        return;
      }
    }
    else if (param_2 == 0x72a) {
      (**(code **)(*(int *)(in_ECX + 0x58) + 0xc))(param_1);
      return;
    }
  }
  else {
    if (param_2 == 0x8bc) {
      FUN_009a1d40();
      return;
    }
    if (param_2 == 0x8f5) {
      FUN_009a1bb0(in_ECX + 0x1c4);
      return;
    }
    if (param_2 == 0x980) {
      (**(code **)(*(int *)(in_ECX + 0x1c8) + 0xc))(param_1);
      return;
    }
  }
  FUN_0044bef0(param_1,param_2);
  return;
}

