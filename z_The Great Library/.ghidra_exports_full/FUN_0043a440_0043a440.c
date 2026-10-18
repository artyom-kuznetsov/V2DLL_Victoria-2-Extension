// FUN_0043a440 @ 0043a440 body=[[0043a440, 0043a5a3]]


void FUN_0043a440(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int local_c [2];
  
  if (param_2 < 0x460) {
    if (param_2 == 0x45f) {
      FUN_009a1d40();
      *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(in_ECX + 0x48);
      *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(in_ECX + 0x4c);
      return;
    }
    if (param_2 < 499) {
      if (param_2 == 0x1f2) {
        FUN_0043a970();
        FUN_00436e50(param_1,in_ECX + 0x28);
        FUN_0043a750(in_ECX + 0x28);
        return;
      }
      if (param_2 == 0x188) {
        FUN_009a1d40();
        return;
      }
      if (param_2 == 0x189) {
        FUN_009a1d40();
        return;
      }
    }
    else if (param_2 == 0x2df) {
      FUN_0043a970();
      FUN_00436e50(param_1,in_ECX + 0x18);
      return;
    }
  }
  else {
    local_c[0] = in_ECX;
    if (param_2 == 0x618) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",local_c);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      *(int *)(in_ECX + 0x74) = local_c[0];
      return;
    }
    if (param_2 == 0x619) {
      iVar1 = FID_conflict__sscanf((char *)(param_1 + 0x22c),"%i",local_c);
      if (iVar1 == 0) {
        FUN_009a1140();
      }
      *(int *)(in_ECX + 0x70) = local_c[0];
      return;
    }
    if (param_2 == 0x71e) {
      FUN_009a1d40();
      return;
    }
  }
  FUN_009a0f40();
  return;
}

